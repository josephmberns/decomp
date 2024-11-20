#include "last-letter-first-letter-1.h"



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Restarted to delay deadcode elimination for space: ram

void _search(ulong param_1)

{
  undefined4 uVar1;
  char cVar2;
  undefined8 local_28;
  
  if (param_1 == __longest_path_refs_len) {
    __n_solutions = __n_solutions + 1;
  }
  else if (__longest_path_refs_len < param_1) {
    __n_solutions = 1;
    __longest_path_refs_len = param_1;
    ___memcpy_chk(__longest_path_refs,__refs,param_1 << 2,0xffffffffffffffff);
  }
  cVar2 = *(char *)(__refs + (param_1 - 1) * 4 + 2);
  for (local_28 = param_1; local_28 < __refs_len; local_28 = local_28 + 1) {
    if (*(char *)(__refs + local_28 * 4 + 3) == cVar2) {
      uVar1 = *(undefined4 *)(__refs + param_1 * 4);
      *(undefined4 *)(__refs + param_1 * 4) = *(undefined4 *)(__refs + local_28 * 4);
      *(undefined4 *)(__refs + local_28 * 4) = uVar1;
      _search(param_1 + 1);
      *(undefined4 *)(__refs + local_28 * 4) = *(undefined4 *)(__refs + param_1 * 4);
      *(undefined4 *)(__refs + param_1 * 4) = uVar1;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Restarted to delay deadcode elimination for space: ram

void _find_longest_chain(long param_1,size_t param_2)

{
  undefined4 uVar1;
  size_t sVar2;
  ulong local_48;
  ulong local_38;
  ulong local_28;
  
  __refs_len = param_2;
  __refs = (undefined4 *)_calloc(param_2,4);
  __longest_path_refs_len = 0;
  __longest_path_refs = _calloc(__refs_len,4);
  local_28 = 0;
  while( true ) {
    if (param_2 <= local_28) {
      for (local_38 = 0; local_38 < param_2; local_38 = local_38 + 1) {
        uVar1 = *__refs;
        *__refs = __refs[local_38];
        __refs[local_38] = uVar1;
        _search(1);
        __refs[local_38] = *__refs;
        *__refs = uVar1;
      }
      __longest_path_len = __longest_path_refs_len;
      __longest_path = _calloc(__longest_path_refs_len,8);
      for (local_48 = 0; local_48 < __longest_path_len; local_48 = local_48 + 1) {
        *(undefined8 *)((long)__longest_path + local_48 * 8) =
             *(undefined8 *)
              (param_1 + (ulong)*(ushort *)((long)__longest_path_refs + local_48 * 4) * 8);
      }
      _free(__longest_path_refs);
      _free(__refs);
      return;
    }
    sVar2 = _strlen(*(char **)(param_1 + local_28 * 8));
    if (sVar2 < 2) break;
    *(short *)(__refs + local_28) = (short)local_28;
    *(undefined *)((long)__refs + local_28 * 4 + 2) =
         *(undefined *)(*(long *)(param_1 + local_28 * 8) + (sVar2 - 1));
    *(undefined *)((long)__refs + local_28 * 4 + 3) = **(undefined **)(param_1 + local_28 * 8);
    local_28 = local_28 + 1;
  }
                    // WARNING: Subroutine does not return
  _exit(1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 entry(void)

{
  ulong local_278;
  ulong local_270;
  undefined auStack_258 [560];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100004010;
  _memcpy(auStack_258,&PTR_s_audino_100004048,0x230);
  _find_longest_chain(auStack_258,0x46);
  _printf("Maximum path length: %u\n");
  _printf("Paths of that length: %u\n");
  _printf("Example path of that length:\n");
  for (local_270 = 0; local_270 < __longest_path_len; local_270 = local_270 + 7) {
    _printf("  ");
    for (local_278 = local_270; local_278 < local_270 + 7 && local_278 < __longest_path_len;
        local_278 = local_278 + 1) {
      _printf("%s ");
    }
    _printf("\n");
  }
  _free(__longest_path);
  if (*(long *)PTR____stack_chk_guard_100004010 != local_28) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail();
  }
  return 0;
}



void ___memcpy_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003c98. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____memcpy_chk_100004000)();
  return;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003ca4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004008)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _calloc(size_t param_1,size_t param_2)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003cb0. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__calloc_100004018)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _exit(int param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003cbc. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__exit_100004020)(param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003cc8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004028)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _memcpy(void *param_1,void *param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003cd4. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__memcpy_100004030)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ce0. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004038)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t _strlen(char *param_1)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003cec. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__strlen_100004040)();
  return sVar1;
}


