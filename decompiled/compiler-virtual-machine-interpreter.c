#include "compiler-virtual-machine-interpreter.h"



void _error(undefined8 param_1)

{
  undefined auStack_410 [1000];
  undefined8 local_28;
  
  local_28 = *(undefined8 *)PTR____stack_chk_guard_100004010;
  ___vsprintf_chk(auStack_410,0,1000,param_1,&stack0x00000000);
  _printf("error: %s\n");
                    // WARNING: Subroutine does not return
  _exit(1);
}



int * _run_vm(int *param_1,long param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int local_54;
  uint local_50;
  uint local_4c;
  int *local_40;
  int *local_38;
  
  local_40 = param_1;
  local_38 = (int *)(param_2 + (long)(param_3 + 1) * 4);
  do {
    piVar4 = (int *)((long)local_40 + 1);
    switch(*(undefined *)local_40) {
    case 0:
      *local_38 = *(int *)(param_2 + (long)*piVar4 * 4);
      local_40 = (int *)((long)local_40 + 5);
      local_38 = local_38 + 1;
      break;
    case 1:
      *(int *)(param_2 + (long)*piVar4 * 4) = local_38[-1];
      local_40 = (int *)((long)local_40 + 5);
      local_38 = local_38 + -1;
      break;
    case 2:
      *local_38 = *piVar4;
      local_40 = (int *)((long)local_40 + 5);
      local_38 = local_38 + 1;
      break;
    case 3:
      local_38[-2] = local_38[-2] + local_38[-1];
      local_40 = piVar4;
      local_38 = local_38 + -1;
      break;
    case 4:
      local_38[-2] = local_38[-2] - local_38[-1];
      local_40 = piVar4;
      local_38 = local_38 + -1;
      break;
    case 5:
      local_38[-2] = local_38[-2] * local_38[-1];
      local_40 = piVar4;
      local_38 = local_38 + -1;
      break;
    case 6:
      iVar1 = 0;
      if (local_38[-1] != 0) {
        iVar1 = local_38[-2] / local_38[-1];
      }
      local_38[-2] = iVar1;
      local_40 = piVar4;
      local_38 = local_38 + -1;
      break;
    case 7:
      iVar1 = local_38[-1];
      iVar2 = 0;
      if (iVar1 != 0) {
        iVar2 = local_38[-2] / iVar1;
      }
      local_38[-2] = local_38[-2] - iVar2 * iVar1;
      local_40 = piVar4;
      local_38 = local_38 + -1;
      break;
    case 8:
      local_38[-2] = (uint)(local_38[-2] < local_38[-1]);
      local_40 = piVar4;
      local_38 = local_38 + -1;
      break;
    case 9:
      local_38[-2] = (uint)(local_38[-1] < local_38[-2]);
      local_40 = piVar4;
      local_38 = local_38 + -1;
      break;
    case 10:
      local_38[-2] = (uint)(local_38[-2] <= local_38[-1]);
      local_40 = piVar4;
      local_38 = local_38 + -1;
      break;
    case 0xb:
      local_38[-2] = (uint)(local_38[-1] <= local_38[-2]);
      local_40 = piVar4;
      local_38 = local_38 + -1;
      break;
    case 0xc:
      local_38[-2] = (uint)(local_38[-2] == local_38[-1]);
      local_40 = piVar4;
      local_38 = local_38 + -1;
      break;
    case 0xd:
      local_38[-2] = (uint)(local_38[-2] != local_38[-1]);
      local_40 = piVar4;
      local_38 = local_38 + -1;
      break;
    case 0xe:
      local_4c = 0;
      if (local_38[-2] != 0) {
        local_4c = (uint)(local_38[-1] != 0);
      }
      local_38[-2] = local_4c;
      local_40 = piVar4;
      local_38 = local_38 + -1;
      break;
    case 0xf:
      local_50 = 1;
      if (local_38[-2] == 0) {
        local_50 = (uint)(local_38[-1] != 0);
      }
      local_38[-2] = local_50;
      local_40 = piVar4;
      local_38 = local_38 + -1;
      break;
    case 0x10:
      local_38[-1] = -local_38[-1];
      local_40 = piVar4;
      break;
    case 0x11:
      local_38[-1] = (uint)(local_38[-1] == 0);
      local_40 = piVar4;
      break;
    case 0x12:
      local_40 = (int *)((long)piVar4 + (long)*piVar4);
      break;
    case 0x13:
      if (local_38[-1] == 0) {
        local_54 = *piVar4;
      }
      else {
        local_54 = 4;
      }
      local_40 = (int *)((long)piVar4 + (long)local_54);
      local_38 = local_38 + -1;
      break;
    case 0x14:
      uVar3 = _printf("%c");
      param_1 = (int *)(ulong)uVar3;
      local_40 = piVar4;
      local_38 = local_38 + -1;
      break;
    case 0x15:
      uVar3 = _printf("%s");
      param_1 = (int *)(ulong)uVar3;
      local_40 = piVar4;
      local_38 = local_38 + -1;
      break;
    case 0x16:
      uVar3 = _printf("%d");
      param_1 = (int *)(ulong)uVar3;
      local_40 = piVar4;
      local_38 = local_38 + -1;
      break;
    case 0x17:
      return param_1;
    default:
      piVar4 = (int *)_error("Unknown opcode %d\n");
      return piVar4;
    }
  } while( true );
}



void * _read_line(int *param_1)

{
  int iVar1;
  int local_28;
  void *local_18;
  
  *param_1 = 0;
  while ((iVar1 = _fgetc(_source_fp), iVar1 != -1 && (iVar1 != 10))) {
    if (DAT_1000081a0 <= *param_1 + 1) {
      if (DAT_1000081a0 == 0) {
        local_28 = 0x80;
      }
      else {
        local_28 = DAT_1000081a0 << 1;
      }
      DAT_1000081a0 = local_28;
      DAT_100008198 = _realloc(DAT_100008198,(long)local_28);
    }
    *(char *)((long)DAT_100008198 + (long)*param_1) = (char)iVar1;
    *param_1 = *param_1 + 1;
  }
  if (*param_1 == 0) {
    local_18 = (void *)0x0;
  }
  else {
    *(undefined *)((long)DAT_100008198 + (long)*param_1) = 0;
    local_18 = DAT_100008198;
  }
  return local_18;
}



long _rtrim(long param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  
  while( true ) {
    bVar1 = false;
    if (0 < *param_2) {
      iVar2 = _isspace((int)*(char *)(param_1 + (*param_2 + -1)));
      bVar1 = iVar2 != 0;
    }
    if (!bVar1) break;
    *param_2 = *param_2 + -1;
  }
  *(undefined *)(param_1 + *param_2) = 0;
  return param_1;
}



char * _translate(char *param_1)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  char *local_18;
  char *local_10;
  char *local_8;
  
  local_8 = param_1;
  if (*param_1 == '\"') {
    local_8 = param_1 + 1;
  }
  local_18 = local_8;
  local_10 = local_8;
  while( true ) {
    pcVar1 = local_18 + 1;
    cVar3 = *local_18;
    pcVar2 = local_10 + 1;
    *local_10 = cVar3;
    if (cVar3 == '\0') break;
    if (*local_18 == '\\') {
      if (*pcVar1 == 'n') {
        *local_10 = '\n';
        pcVar1 = local_18 + 2;
      }
      else if (*pcVar1 == '\\') {
        pcVar1 = local_18 + 2;
      }
    }
    local_18 = pcVar1;
    local_10 = pcVar2;
    if ((*local_18 == '\"') && (local_18[1] == '\0')) {
      local_18 = local_18 + 1;
    }
  }
  return local_8;
}



undefined4 _findit(char *param_1)

{
  int iVar1;
  ulong local_30;
  
  local_30 = 0;
  while( true ) {
    if (0x17 < local_30) {
      _error("Unknown instruction %s at %d\n");
      return 0xffffffff;
    }
    iVar1 = _strcmp((&_code_map)[local_30 * 2],param_1);
    if (iVar1 == 0) break;
    local_30 = local_30 + 1;
  }
  return *(undefined4 *)(&DAT_100008008 + local_30 * 0x10);
}



void _emit_byte(undefined param_1)

{
  long lVar1;
  
  if (__qy_object_max <= __qy_object_p) {
    __qy_object_max = __qy_object_max + 0x20;
    _object = _realloc(_object,(long)__qy_object_max);
  }
  lVar1 = (long)__qy_object_p;
  __qy_object_p = __qy_object_p + 1;
  *(undefined *)((long)_object + lVar1) = param_1;
  return;
}



void _emit_int(undefined4 param_1)

{
  ulong local_20;
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = param_1;
  local_14 = param_1;
  for (local_20 = 0; local_20 < 4; local_20 = local_20 + 1) {
    _emit_byte(*(undefined *)((long)&local_18 + local_20));
  }
  return;
}



void * _load_code(int *param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  char *pcVar4;
  void *pvVar5;
  long lVar6;
  size_t sVar7;
  int local_34;
  undefined auStack_1c [4];
  int *local_18;
  
  local_18 = param_1;
  uVar3 = _read_line();
  pcVar4 = (char *)_rtrim(uVar3,auStack_1c);
  _strtok(pcVar4," ");
  pcVar4 = _strtok((char *)0x0," ");
  iVar1 = _atoi(pcVar4);
  *local_18 = iVar1;
  _strtok((char *)0x0," ");
  pcVar4 = _strtok((char *)0x0," ");
  iVar1 = _atoi(pcVar4);
  pvVar5 = _malloc((long)iVar1 << 3);
  for (local_34 = 0; local_34 < iVar1; local_34 = local_34 + 1) {
    uVar3 = _read_line();
    uVar3 = _rtrim(uVar3,auStack_1c);
    pcVar4 = (char *)_translate(uVar3);
    pcVar4 = _strdup(pcVar4);
    *(char **)((long)pvVar5 + (long)local_34 * 8) = pcVar4;
  }
  while (lVar6 = _read_line(auStack_1c), lVar6 != 0) {
    pcVar4 = (char *)_rtrim(lVar6,auStack_1c);
    pcVar4 = _strtok(pcVar4," ");
    iVar1 = _atoi(pcVar4);
    pcVar4 = _strtok((char *)0x0," ");
    uVar2 = _findit(pcVar4,iVar1);
    _emit_byte(uVar2);
    pcVar4 = _strtok((char *)0x0," ");
    if (uVar2 < 2) {
      pcVar4 = pcVar4 + 1;
      sVar7 = _strlen(pcVar4);
      pcVar4[(int)sVar7 + -1] = '\0';
      iVar1 = _atoi(pcVar4);
      _emit_int(iVar1);
    }
    else if (uVar2 == 2) {
      iVar1 = _atoi(pcVar4);
      _emit_int(iVar1);
    }
    else if (uVar2 - 0x12 < 2) {
      pcVar4 = pcVar4 + 1;
      sVar7 = _strlen(pcVar4);
      pcVar4[(int)sVar7 + -1] = '\0';
      iVar1 = _atoi(pcVar4);
      _emit_int(iVar1);
    }
  }
  return pvVar5;
}



void _init_io(undefined8 *param_1,undefined8 param_2,char *param_3,char *param_4)

{
  FILE *pFVar1;
  
  if (*param_4 == '\0') {
    *param_1 = param_2;
  }
  else {
    pFVar1 = _fopen(param_4,param_3);
    *param_1 = pFVar1;
    if (pFVar1 == (FILE *)0x0) {
      _error(0);
    }
  }
  return;
}



undefined4 entry(int param_1,long param_2)

{
  undefined auStack_70 [8];
  ulong local_68;
  undefined4 local_5c;
  char *local_58;
  undefined8 local_50;
  undefined *local_40;
  undefined8 local_38;
  int local_2c;
  long local_28;
  int local_20;
  undefined4 local_1c;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004010;
  local_1c = 0;
  local_50 = *(undefined8 *)PTR____stdinp_100004018;
  if (param_1 < 2) {
    local_58 = "";
  }
  else {
    local_58 = *(char **)(param_2 + 8);
  }
  local_28 = param_2;
  local_20 = param_1;
  _init_io(&_source_fp,local_50,"r",local_58);
  local_38 = _load_code(&local_2c);
  local_68 = (ulong)(local_2c + 1000) * 4 + 0xf & 0xfffffffffffffff0;
  local_40 = auStack_70;
  (*(code *)PTR____chkstk_darwin_100004000)();
  _run_vm(_object,auStack_70 + -local_68,local_2c,local_38);
  local_5c = local_1c;
  if (*(long *)PTR____stack_chk_guard_100004010 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail();
  }
  return local_1c;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003e2c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004008)();
  return;
}



void ___vsprintf_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003e38. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____vsprintf_chk_100004020)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _atoi(char *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e44. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__atoi_100004028)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _exit(int param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003e50. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__exit_100004030)(param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fgetc(FILE *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e5c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fgetc_100004038)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

FILE * _fopen(char *param_1,char *param_2)

{
  FILE *pFVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e68. Too many branches
                    // WARNING: Treating indirect jump as call
  pFVar1 = (FILE *)(*(code *)PTR__fopen_100004040)();
  return pFVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _isspace(int _c)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e74. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__isspace_100004048)(_c);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e80. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004050)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e8c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004058)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _realloc(void *param_1,size_t param_2)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e98. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__realloc_100004060)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _strcmp(char *param_1,char *param_2)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ea4. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__strcmp_100004068)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * _strdup(char *param_1)

{
  char *pcVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003eb0. Too many branches
                    // WARNING: Treating indirect jump as call
  pcVar1 = (char *)(*(code *)PTR__strdup_100004070)();
  return pcVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t _strlen(char *param_1)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ebc. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__strlen_100004078)();
  return sVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * _strtok(char *param_1,char *param_2)

{
  char *pcVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ec8. Too many branches
                    // WARNING: Treating indirect jump as call
  pcVar1 = (char *)(*(code *)PTR__strtok_100004080)();
  return pcVar1;
}


