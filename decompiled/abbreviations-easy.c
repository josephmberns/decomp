#include "abbreviations-easy.h"



bool _command_match(undefined8 *param_1,char *param_2)

{
  bool bVar1;
  int iVar2;
  size_t sVar3;
  
  sVar3 = _strlen(param_2);
  bVar1 = false;
  if (((ulong)param_1[2] <= sVar3) && (bVar1 = false, sVar3 <= (ulong)param_1[1])) {
    iVar2 = _strncmp(param_2,(char *)*param_1,sVar3);
    bVar1 = iVar2 == 0;
  }
  return bVar1;
}



long _uppercase(long param_1,ulong param_2)

{
  int iVar1;
  undefined8 local_28;
  
  for (local_28 = 0; local_28 < param_2; local_28 = local_28 + 1) {
    iVar1 = _toupper((uint)*(byte *)(param_1 + local_28));
    *(char *)(param_1 + local_28) = (char)iVar1;
  }
  return param_1;
}



ulong _get_min_length(long param_1,ulong param_2)

{
  bool bVar1;
  int iVar2;
  undefined8 local_28;
  
  local_28 = 0;
  while( true ) {
    bVar1 = false;
    if (local_28 < param_2) {
      iVar2 = _isupper((uint)*(byte *)(param_1 + local_28));
      bVar1 = iVar2 != 0;
    }
    if (!bVar1) break;
    local_28 = local_28 + 1;
  }
  return local_28;
}



void _fatal(void)

{
  _fprintf(*(FILE **)PTR____stderrp_100004008,"%s\n");
                    // WARNING: Subroutine does not return
  _exit(1);
}



void * _xmalloc(size_t param_1)

{
  void *pvVar1;
  
  pvVar1 = _malloc(param_1);
  if (pvVar1 == (void *)0x0) {
    _fatal("Out of memory");
  }
  return pvVar1;
}



void * _xrealloc(void *param_1,size_t param_2)

{
  void *pvVar1;
  
  pvVar1 = _realloc(param_1,param_2);
  if (pvVar1 == (void *)0x0) {
    _fatal("Out of memory");
  }
  return pvVar1;
}



long _split_into_words(char *param_1,long *param_2)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  size_t sVar4;
  long lVar5;
  ulong local_50;
  ulong local_48;
  long local_38;
  long local_30;
  long local_28;
  
  local_28 = 0;
  local_30 = 0x10;
  local_38 = _xmalloc(0x80);
  sVar4 = _strlen(param_1);
  local_48 = 0;
  while (local_48 < sVar4) {
    local_50 = local_48;
    while( true ) {
      local_48 = local_50;
      bVar2 = false;
      if (local_50 < sVar4) {
        iVar3 = _isspace((uint)(byte)param_1[local_50]);
        bVar2 = iVar3 != 0;
      }
      if (!bVar2) break;
      local_50 = local_50 + 1;
    }
    while( true ) {
      bVar2 = false;
      if (local_50 < sVar4) {
        iVar3 = _isspace((uint)(byte)param_1[local_50]);
        bVar2 = iVar3 == 0;
      }
      if (!bVar2) break;
      local_50 = local_50 + 1;
    }
    lVar1 = local_50 - local_48;
    if (lVar1 == 0) break;
    lVar5 = _xmalloc(lVar1 + 1);
    ___memcpy_chk(lVar5,param_1 + local_48,lVar1,0xffffffffffffffff);
    *(undefined *)(lVar5 + lVar1) = 0;
    local_48 = local_48 + lVar1;
    if (local_30 == local_28) {
      local_38 = _xrealloc(local_38,local_30 << 4);
      local_30 = local_30 << 1;
    }
    *(long *)(local_38 + local_28 * 8) = lVar5;
    local_28 = local_28 + 1;
  }
  *param_2 = local_28;
  return local_38;
}



undefined8 * _make_command_list(undefined8 param_1)

{
  void *pvVar1;
  undefined8 *puVar2;
  size_t sVar3;
  undefined8 uVar4;
  char *pcVar5;
  ulong local_38;
  ulong local_28;
  undefined8 *local_20;
  undefined8 local_18;
  
  local_20 = (undefined8 *)0x0;
  local_28 = 0;
  local_18 = param_1;
  pvVar1 = (void *)_split_into_words(param_1,&local_28);
  for (local_38 = 0; local_38 < local_28; local_38 = local_38 + 1) {
    pcVar5 = *(char **)((long)pvVar1 + local_38 * 8);
    puVar2 = (undefined8 *)_xmalloc(0x20);
    sVar3 = _strlen(pcVar5);
    puVar2[1] = sVar3;
    uVar4 = _get_min_length(pcVar5,sVar3);
    puVar2[2] = uVar4;
    uVar4 = _uppercase(pcVar5,sVar3);
    *puVar2 = uVar4;
    puVar2[3] = local_20;
    local_20 = puVar2;
  }
  _free(pvVar1);
  return local_20;
}



void _free_command_list(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *local_18;
  
  local_18 = param_1;
  while (local_18 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)local_18[3];
    _free((void *)*local_18);
    _free(local_18);
    local_18 = puVar1;
  }
  return;
}



long _find_command(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long local_30;
  
  local_30 = param_1;
  while( true ) {
    if (local_30 == 0) {
      return 0;
    }
    uVar1 = _command_match(local_30,param_2);
    if ((uVar1 & 1) != 0) break;
    local_30 = *(long *)(local_30 + 0x18);
  }
  return local_30;
}



int _test(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  void *pvVar2;
  size_t sVar3;
  char *pcVar4;
  ulong local_38;
  ulong local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  _printf(" input: %s\n");
  _printf("output:");
  local_28 = 0;
  pvVar2 = (void *)_split_into_words(local_20,&local_28);
  for (local_38 = 0; local_38 < local_28; local_38 = local_38 + 1) {
    pcVar4 = *(char **)((long)pvVar2 + local_38 * 8);
    sVar3 = _strlen(pcVar4);
    _uppercase(pcVar4,sVar3);
    _find_command(local_18,pcVar4);
    _printf(" %s");
    _free(pcVar4);
  }
  _free(pvVar2);
  iVar1 = _printf("\n");
  return iVar1;
}



undefined4 entry(void)

{
  undefined8 uVar1;
  
  uVar1 = _make_command_list(_command_table);
  _test(uVar1,"riG   rePEAT copies  put mo   rest    types   fup.    6       poweRin");
  _free_command_list(uVar1);
  return 0;
}



void ___memcpy_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003c84. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____memcpy_chk_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _exit(int param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003c90. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__exit_100004010)(param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fprintf(FILE *param_1,char *param_2,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003c9c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fprintf_100004018)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003ca8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004020)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _isspace(int _c)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003cb4. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__isspace_100004028)(_c);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _isupper(int _c)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003cc0. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__isupper_100004030)(_c);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ccc. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004038)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003cd8. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004040)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _realloc(void *param_1,size_t param_2)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ce4. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__realloc_100004048)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t _strlen(char *param_1)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003cf0. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__strlen_100004050)();
  return sVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _strncmp(char *param_1,char *param_2,size_t param_3)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003cfc. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__strncmp_100004058)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _toupper(int _c)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003d08. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__toupper_100004060)(_c);
  return iVar1;
}


