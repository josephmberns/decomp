#include "inverted-index-1.h"



void _trie_new(void)

{
  _calloc(0x150,1);
  return;
}



long _trie_trav(long param_1,char *param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  char *local_28;
  long local_20;
  
  local_28 = param_2;
  local_20 = param_1;
  while( true ) {
    if (local_20 == 0) {
      return 0;
    }
    if (*local_28 == 0) break;
    iVar1 = *(int *)(&_chr_idx + (long)(int)*local_28 * 4);
    if (iVar1 == 0) {
      local_28 = local_28 + 1;
    }
    else {
      if (*(long *)(local_20 + (long)iVar1 * 8) == 0) {
        if (param_3 != 0) {
          return 0;
        }
        uVar2 = _trie_new();
        *(undefined8 *)(local_20 + (long)iVar1 * 8) = uVar2;
      }
      local_20 = *(long *)(local_20 + (long)iVar1 * 8);
      local_28 = local_28 + 1;
    }
  }
  if (*(int *)(local_20 + 0x148) != 0) {
    return local_20;
  }
  if (param_3 == 0) {
    return local_20;
  }
  return 0;
}



undefined4 _trie_all(long param_1,long param_2,int param_3,code *param_4)

{
  int iVar1;
  uint local_3c;
  undefined4 local_14;
  
  if ((*(int *)(param_1 + 0x148) == 0) || (iVar1 = (*param_4)(param_2), iVar1 != 0)) {
    for (local_3c = 1; local_3c < 0x29; local_3c = local_3c + 1) {
      if (*(long *)(param_1 + (long)(int)local_3c * 8) != 0) {
        *(undefined *)(param_2 + param_3) = (&_idx_chr)[(int)local_3c];
        *(undefined *)(param_2 + (param_3 + 1)) = 0;
        iVar1 = _trie_all(*(undefined8 *)(param_1 + (long)(int)local_3c * 8),param_2,param_3 + 1,
                          param_4);
        if (iVar1 == 0) {
          return 0;
        }
      }
    }
    local_14 = 1;
  }
  else {
    local_14 = 0;
  }
  return local_14;
}



void _add_index(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)_trie_trav(param_1,param_2,0);
  *(undefined4 *)(plVar1 + 0x29) = 1;
  if (*plVar1 == 0) {
    lVar2 = _trie_new();
    *plVar1 = lVar2;
  }
  lVar2 = _trie_trav(*plVar1,param_3,0);
  *(undefined4 *)(lVar2 + 0x148) = 1;
  return;
}



undefined8 _print_path(void)

{
  _printf(" %s");
  return 1;
}



undefined8 _init_tables(void)

{
  undefined8 uVar1;
  int local_18;
  uint local_14;
  
  uVar1 = _trie_new();
  for (local_14 = 0; local_14 < 0x29; local_14 = local_14 + 1) {
    *(uint *)(&_chr_idx + (long)_chr_legal[(int)local_14] * 4) = local_14 + 1;
    (&_idx_chr)[(int)(local_14 + 1)] = _chr_legal[(int)local_14];
  }
  for (local_14 = 0; (int)local_14 < 3; local_14 = local_14 + 1) {
    local_18 = 0;
    while ((local_18 < 5 && ((&_text)[(long)(int)local_14 * 5 + (long)local_18] != (undefined *)0x0)
           )) {
      _add_index(uVar1,(&_text)[(long)(int)local_14 * 5 + (long)local_18],(&_files)[(int)local_14]);
      local_18 = local_18 + 1;
    }
  }
  return uVar1;
}



void _search_index(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined auStack_428 [1024];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100004008;
  _printf("Search for \"%s\": ");
  puVar2 = (undefined8 *)_trie_trav(param_1,param_2,1);
  if (puVar2 == (undefined8 *)0x0) {
    iVar1 = _printf("not found\n");
  }
  else {
    _trie_all(*puVar2,auStack_428,0,_print_path);
    iVar1 = _printf("\n");
  }
  if (*(long *)PTR____stack_chk_guard_100004008 != local_28) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(iVar1);
  }
  return;
}



undefined4 entry(void)

{
  undefined8 uVar1;
  
  uVar1 = _init_tables();
  _search_index(uVar1,"what");
  _search_index(uVar1,"is");
  _search_index(uVar1,"banana");
  _search_index(uVar1,"boo");
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f28. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _calloc(size_t param_1,size_t param_2)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f34. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__calloc_100004010)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f40. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004018)((int)param_1);
  return iVar1;
}


