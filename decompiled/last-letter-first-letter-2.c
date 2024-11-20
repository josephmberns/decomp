#include "last-letter-first-letter-2.h"



void _store_edge(char *param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  
  if (param_1 != (char *)0x0) {
    iVar3 = (int)param_1[1];
    cVar2 = *param_1;
    lVar4 = (long)(int)cVar2 * 0x1a8;
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(&_nodes + (long)iVar3 * 8 + lVar4);
    *(char **)(&_nodes + (long)iVar3 * 8 + lVar4) = param_1;
    piVar1 = (int *)(lVar4 + 0x100008150 + (long)iVar3 * 4);
    *piVar1 = *piVar1 + 1;
    *(int *)(lVar4 + 0x1000080e4) = *(int *)(lVar4 + 0x1000080e4) + 1;
    lVar4 = (long)iVar3 * 0x1a8;
    piVar1 = (int *)(lVar4 + 0x1000080e8 + (long)(int)cVar2 * 4);
    *piVar1 = *piVar1 + 1;
    *(int *)(lVar4 + 0x1000080e0) = *(int *)(lVar4 + 0x1000080e0) + 1;
  }
  return;
}



long _remove_edge(int param_1,int param_2)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)param_1 * 0x1a8;
  lVar2 = *(long *)(&_nodes + (long)param_2 * 8 + lVar3);
  if (lVar2 != 0) {
    *(undefined8 *)(&_nodes + (long)param_2 * 8 + lVar3) = *(undefined8 *)(lVar2 + 0x10);
    *(undefined8 *)(lVar2 + 0x10) = 0;
    piVar1 = (int *)(lVar3 + 0x100008150 + (long)param_2 * 4);
    *piVar1 = *piVar1 + -1;
    *(int *)(lVar3 + 0x1000080e4) = *(int *)(lVar3 + 0x1000080e4) + -1;
    lVar3 = (long)param_2 * 0x1a8;
    piVar1 = (int *)(lVar3 + 0x1000080e8 + (long)param_1 * 4);
    *piVar1 = *piVar1 + -1;
    *(int *)(lVar3 + 0x1000080e0) = *(int *)(lVar3 + 0x1000080e0) + -1;
  }
  return lVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Restarted to delay deadcode elimination for space: ram

int _read_names(void)

{
  int iVar1;
  FILE *pFVar2;
  long lVar3;
  void *pvVar4;
  size_t sVar5;
  char *local_30;
  int local_20;
  int local_1c;
  
  pFVar2 = _fopen("poke646","rt");
  if (pFVar2 == (FILE *)0x0) {
                    // WARNING: Subroutine does not return
    _abort();
  }
  _fseek(pFVar2,0,2);
  lVar3 = _ftell(pFVar2);
  local_20 = (int)lVar3;
  pvVar4 = _malloc((long)(local_20 + 1));
  _fseek(pFVar2,0,0);
  _fread(pvVar4,1,(long)local_20,pFVar2);
  _fclose(pFVar2);
  *(undefined *)((long)pvVar4 + (long)local_20) = 0;
  __n_names = 0;
  for (local_1c = 0; local_1c < local_20; local_1c = local_1c + 1) {
    iVar1 = _isspace((int)*(char *)((long)pvVar4 + (long)local_1c));
    if (iVar1 != 0) {
      *(undefined *)((long)pvVar4 + (long)local_1c) = 0;
      __n_names = __n_names + 1;
    }
  }
  if (*(char *)((long)pvVar4 + (long)(local_20 + -1)) != '\0') {
    __n_names = __n_names + 1;
  }
  _bzero(&_nodes,0x2b10);
  __tmp = _calloc((long)__n_names,8);
  __names = (char *)_malloc((long)__n_names * 0x18);
  local_1c = 0;
  local_30 = __names;
  while( true ) {
    if (__n_names <= local_1c) {
      iVar1 = _printf("read %d names\n");
      return iVar1;
    }
    if (local_1c == 0) {
      *(void **)(local_30 + 8) = pvVar4;
    }
    else {
      *(long *)(local_30 + 8) =
           *(long *)(__names + (long)(local_1c + -1) * 0x18 + 8) + (long)local_20 + 1;
    }
    sVar5 = _strlen(*(char **)(local_30 + 8));
    local_20 = (int)sVar5;
    *local_30 = **(char **)(local_30 + 8) + -0x61;
    local_30[1] = *(char *)(*(long *)(local_30 + 8) + (long)(local_20 + -1)) + -0x61;
    if ((((*local_30 < '\0') || ('\x19' < *local_30)) || (local_30[1] < '\0')) ||
       ('\x19' < local_30[1])) break;
    local_1c = local_1c + 1;
    local_30 = local_30 + 0x18;
  }
  _printf("bad name %s: first/last char must be letter\n");
                    // WARNING: Subroutine does not return
  _abort();
}



int _show_chain(long *param_1)

{
  bool bVar1;
  int iVar2;
  long local_20;
  
  iVar2 = _printf("%d:");
  local_20 = *param_1;
  while( true ) {
    bVar1 = true;
    if (local_20 == 0) {
      iVar2 = _putchar(10);
      bVar1 = iVar2 == 0;
    }
    if (!bVar1) break;
    iVar2 = _printf(" %s");
    local_20 = *(long *)(local_20 + 0x10);
  }
  return iVar2;
}



int _widest(int param_1,int param_2)

{
  int local_18;
  int local_14;
  int local_10;
  int local_4;
  
  local_4 = param_1;
  if (*(int *)((long)param_1 * 0x1a8 + 0x100008150 + (long)param_1 * 4) == 0) {
    local_10 = -1;
    local_14 = -1;
    for (local_18 = 0; local_18 < 0x1a; local_18 = local_18 + 1) {
      if (param_2 == 0) {
        if ((*(int *)((long)local_18 * 0x1a8 + 0x100008150 + (long)param_1 * 4) != 0) &&
           (local_10 < *(int *)((long)local_18 * 0x1a8 + 0x1000080e0))) {
          local_14 = local_18;
          local_10 = *(int *)((long)local_18 * 0x1a8 + 0x1000080e0);
        }
      }
      else if ((*(int *)((long)param_1 * 0x1a8 + 0x100008150 + (long)local_18 * 4) != 0) &&
              (local_10 < *(int *)((long)local_18 * 0x1a8 + 0x1000080e4))) {
        local_14 = local_18;
        local_10 = *(int *)((long)local_18 * 0x1a8 + 0x1000080e4);
      }
    }
    local_4 = local_14;
  }
  return local_4;
}



void _insert(long *param_1,long param_2)

{
  *(long *)(param_2 + 0x10) = *param_1;
  if (param_1[1] == 0) {
    param_1[1] = param_2;
  }
  *param_1 = param_2;
  *(int *)(param_1 + 2) = *(int *)(param_1 + 2) + 1;
  return;
}



void _append(undefined8 *param_1,undefined8 param_2)

{
  if (param_1[1] == 0) {
    *param_1 = param_2;
  }
  else {
    *(undefined8 *)(param_1[1] + 0x10) = param_2;
  }
  param_1[1] = param_2;
  *(int *)(param_1 + 2) = *(int *)(param_1 + 2) + 1;
  return;
}



long _shift(long *param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    *param_1 = *(long *)(lVar2 + 0x10);
    iVar1 = *(int *)(param_1 + 2);
    *(int *)(param_1 + 2) = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      param_1[1] = 0;
    }
  }
  return lVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 * _make_chain(int param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  int local_58;
  int local_54;
  int local_50;
  int local_48;
  int local_44;
  char *local_40;
  int local_34;
  int local_30;
  int local_28;
  
  puVar2 = (undefined8 *)_calloc(1,0x80);
  local_28 = param_1;
  while (iVar1 = _widest(local_28,0), local_30 = param_1, -1 < iVar1) {
    uVar3 = _remove_edge(iVar1,local_28);
    _insert(puVar2,uVar3);
    local_28 = iVar1;
  }
  while (iVar1 = _widest(local_30,1), -1 < iVar1) {
    uVar3 = _remove_edge(local_30,iVar1);
    _append(puVar2,uVar3);
    local_30 = iVar1;
  }
  local_34 = 0;
  while( true ) {
    local_40 = (char *)*puVar2;
    local_44 = 0;
    while ((local_44 < local_34 && (local_40 = *(char **)(local_40 + 0x10), local_40 != (char *)0x0)
           )) {
      local_44 = local_44 + 1;
    }
    if (local_40 == (char *)0x0) break;
    local_48 = 0;
    local_50 = (int)*local_40;
    while ((iVar1 = _widest(local_50,0), -1 < iVar1 &&
           (lVar4 = _remove_edge(iVar1,local_50), lVar4 != 0))) {
      lVar5 = (long)local_48;
      local_48 = local_48 + 1;
      *(long *)(__tmp + lVar5 * 8) = lVar4;
      local_50 = iVar1;
    }
    if (local_34 < local_48) {
      for (local_54 = 0; local_54 < local_34; local_54 = local_54 + 1) {
        _shift(puVar2);
        _store_edge();
      }
      for (local_58 = 0; local_58 < local_48; local_58 = local_58 + 1) {
        _insert(puVar2,*(undefined8 *)(__tmp + (long)local_58 * 8));
      }
      local_34 = -1;
    }
    else {
      while (local_48 = local_48 + -1, -1 < local_48) {
        _store_edge(*(undefined8 *)(__tmp + (long)local_48 * 8));
      }
    }
    local_34 = local_34 + 1;
  }
  return puVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 entry(void)

{
  void *pvVar1;
  int local_20;
  int local_1c;
  int local_18;
  
  local_18 = 0;
  _read_names();
  for (local_1c = 0; local_1c < 0x1a; local_1c = local_1c + 1) {
    _bzero(&_nodes,0x2b10);
    for (local_20 = 0; local_20 < __n_names; local_20 = local_20 + 1) {
      _store_edge(__names + (long)local_20 * 0x18);
    }
    pvVar1 = (void *)_make_chain(local_1c);
    if (local_18 < *(int *)((long)pvVar1 + 0x10)) {
      _show_chain(pvVar1);
      local_18 = *(int *)((long)pvVar1 + 0x10);
    }
    _free(pvVar1);
  }
  _printf("longest found: %d\n");
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _abort(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003e8c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__abort_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _bzero(void *param_1,size_t param_2)

{
                    // WARNING: Could not recover jumptable at 0x000100003e98. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__bzero_100004008)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _calloc(size_t param_1,size_t param_2)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ea4. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__calloc_100004010)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fclose(FILE *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003eb0. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fclose_100004018)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

FILE * _fopen(char *param_1,char *param_2)

{
  FILE *pFVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ebc. Too many branches
                    // WARNING: Treating indirect jump as call
  pFVar1 = (FILE *)(*(code *)PTR__fopen_100004020)();
  return pFVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t _fread(void *param_1,size_t param_2,size_t param_3,FILE *param_4)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ec8. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__fread_100004028)();
  return sVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003ed4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004030)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fseek(FILE *param_1,long param_2,int param_3)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ee0. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fseek_100004038)((int)param_1,param_2,param_3);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

long _ftell(FILE *param_1)

{
  long lVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003eec. Too many branches
                    // WARNING: Treating indirect jump as call
  lVar1 = (*(code *)PTR__ftell_100004040)();
  return lVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _isspace(int _c)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ef8. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__isspace_100004048)(_c);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f04. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004050)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f10. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004058)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _putchar(int param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f1c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__putchar_100004060)(param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t _strlen(char *param_1)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f28. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__strlen_100004068)();
  return sVar1;
}


