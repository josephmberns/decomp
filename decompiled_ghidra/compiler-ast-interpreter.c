#include "compiler-ast-interpreter.h"



void _error(undefined8 param_1)

{
  undefined auStack_410 [1000];
  undefined8 local_28;
  
  local_28 = *(undefined8 *)PTR____stack_chk_guard_100004000;
  ___vsprintf_chk(auStack_410,0,1000,param_1,&stack0x00000000);
  _printf("error: %s\n");
                    // WARNING: Subroutine does not return
  _exit(1);
}



undefined4 * _make_node(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)_calloc(0x20,1);
  *puVar1 = param_1;
  *(undefined8 *)(puVar1 + 2) = param_2;
  *(undefined8 *)(puVar1 + 4) = param_3;
  return puVar1;
}



undefined4 * _make_leaf(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)_calloc(0x20,1);
  *puVar1 = param_1;
  puVar1[6] = param_2;
  return puVar1;
}



uint _interp(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint local_58;
  uint local_54;
  uint local_14;
  
  if (param_1 == (undefined4 *)0x0) {
    local_14 = 0;
  }
  else {
    switch(*param_1) {
    case 0:
      local_14 = *(uint *)(_global_values + (long)(int)param_1[6] * 4);
      break;
    case 1:
      local_14 = param_1[6];
      break;
    case 2:
      local_14 = param_1[6];
      break;
    case 3:
      _interp(*(undefined8 *)(param_1 + 2));
      _interp(*(undefined8 *)(param_1 + 4));
      local_14 = 0;
      break;
    case 4:
      iVar3 = _interp(*(undefined8 *)(param_1 + 2));
      if (iVar3 == 0) {
        _interp(*(undefined8 *)(*(long *)(param_1 + 4) + 0x10));
      }
      else {
        _interp(*(undefined8 *)(*(long *)(param_1 + 4) + 8));
      }
      local_14 = 0;
      break;
    case 5:
      _interp(*(undefined8 *)(param_1 + 2));
      _printf("%c");
      local_14 = 0;
      break;
    case 6:
      _interp(*(undefined8 *)(param_1 + 2));
      _printf("%s");
      local_14 = 0;
      break;
    case 7:
      _interp(*(undefined8 *)(param_1 + 2));
      _printf("%d");
      local_14 = 0;
      break;
    case 8:
      while (iVar3 = _interp(*(undefined8 *)(param_1 + 2)), iVar3 != 0) {
        _interp(*(undefined8 *)(param_1 + 4));
      }
      local_14 = 0;
      break;
    case 9:
      local_14 = _interp(*(undefined8 *)(param_1 + 4));
      *(uint *)(_global_values + (long)*(int *)(*(long *)(param_1 + 2) + 0x18) * 4) = local_14;
      break;
    case 10:
      iVar3 = _interp(*(undefined8 *)(param_1 + 2));
      local_14 = -iVar3;
      break;
    case 0xb:
      iVar3 = _interp(*(undefined8 *)(param_1 + 2));
      local_14 = (uint)(iVar3 == 0);
      break;
    case 0xc:
      iVar3 = _interp(*(undefined8 *)(param_1 + 2));
      iVar2 = _interp(*(undefined8 *)(param_1 + 4));
      local_14 = iVar3 * iVar2;
      break;
    case 0xd:
      iVar3 = _interp(*(undefined8 *)(param_1 + 2));
      iVar2 = _interp(*(undefined8 *)(param_1 + 4));
      local_14 = 0;
      if (iVar2 != 0) {
        local_14 = iVar3 / iVar2;
      }
      break;
    case 0xe:
      iVar2 = _interp(*(undefined8 *)(param_1 + 2));
      iVar1 = _interp(*(undefined8 *)(param_1 + 4));
      iVar3 = 0;
      if (iVar1 != 0) {
        iVar3 = iVar2 / iVar1;
      }
      local_14 = iVar2 - iVar3 * iVar1;
      break;
    case 0xf:
      iVar3 = _interp(*(undefined8 *)(param_1 + 2));
      iVar2 = _interp(*(undefined8 *)(param_1 + 4));
      local_14 = iVar3 + iVar2;
      break;
    case 0x10:
      iVar3 = _interp(*(undefined8 *)(param_1 + 2));
      iVar2 = _interp(*(undefined8 *)(param_1 + 4));
      local_14 = iVar3 - iVar2;
      break;
    case 0x11:
      iVar3 = _interp(*(undefined8 *)(param_1 + 2));
      iVar2 = _interp(*(undefined8 *)(param_1 + 4));
      local_14 = (uint)(iVar3 < iVar2);
      break;
    case 0x12:
      iVar3 = _interp(*(undefined8 *)(param_1 + 2));
      iVar2 = _interp(*(undefined8 *)(param_1 + 4));
      local_14 = (uint)(iVar3 <= iVar2);
      break;
    case 0x13:
      iVar3 = _interp(*(undefined8 *)(param_1 + 2));
      iVar2 = _interp(*(undefined8 *)(param_1 + 4));
      local_14 = (uint)(iVar2 < iVar3);
      break;
    default:
      _error("interp: unknown tree type %d\n");
      local_14 = 0;
      break;
    case 0x15:
      iVar3 = _interp(*(undefined8 *)(param_1 + 2));
      iVar2 = _interp(*(undefined8 *)(param_1 + 4));
      local_14 = (uint)(iVar3 == iVar2);
      break;
    case 0x16:
      iVar3 = _interp(*(undefined8 *)(param_1 + 2));
      iVar2 = _interp(*(undefined8 *)(param_1 + 4));
      local_14 = (uint)(iVar3 != iVar2);
      break;
    case 0x17:
      iVar3 = _interp(*(undefined8 *)(param_1 + 2));
      local_54 = 0;
      if (iVar3 != 0) {
        iVar3 = _interp(*(undefined8 *)(param_1 + 4));
        local_54 = (uint)(iVar3 != 0);
      }
      local_14 = local_54;
      break;
    case 0x18:
      iVar3 = _interp(*(undefined8 *)(param_1 + 2));
      local_58 = 1;
      if (iVar3 == 0) {
        iVar3 = _interp(*(undefined8 *)(param_1 + 4));
        local_58 = (uint)(iVar3 != 0);
      }
      local_14 = local_58;
    }
  }
  return local_14;
}



void _init_in(char *param_1)

{
  if (*param_1 == '\0') {
    _source_fp = *(FILE **)PTR____stdinp_100004008;
  }
  else {
    _source_fp = _fopen(param_1,"r");
    if (_source_fp == (FILE *)0x0) {
      _error("Can\'t open %s\n");
    }
  }
  return;
}



undefined4 _get_enum_value(char *param_1)

{
  int iVar1;
  ulong local_28;
  
  local_28 = 0;
  while( true ) {
    if (0x18 < local_28) {
      _error("Unknown token %s\n");
      return 0xffffffff;
    }
    iVar1 = _strcmp((&_atr)[local_28 * 2],param_1);
    if (iVar1 == 0) break;
    local_28 = local_28 + 1;
  }
  return *(undefined4 *)(&DAT_100008008 + local_28 * 0x10);
}



void * _read_line(int *param_1)

{
  int iVar1;
  int local_28;
  void *local_18;
  
  *param_1 = 0;
  while ((iVar1 = _fgetc(_source_fp), iVar1 != -1 && (iVar1 != 10))) {
    if (DAT_1000081d0 <= *param_1 + 1) {
      if (DAT_1000081d0 == 0) {
        local_28 = 0x80;
      }
      else {
        local_28 = DAT_1000081d0 << 1;
      }
      DAT_1000081d0 = local_28;
      DAT_1000081c8 = _realloc(DAT_1000081c8,(long)local_28);
    }
    *(char *)((long)DAT_1000081c8 + (long)*param_1) = (char)iVar1;
    *param_1 = *param_1 + 1;
  }
  if (*param_1 == 0) {
    local_18 = (void *)0x0;
  }
  else {
    *(undefined *)((long)DAT_1000081c8 + (long)*param_1) = 0;
    local_18 = DAT_1000081c8;
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



// WARNING: Restarted to delay deadcode elimination for space: ram

int _fetch_string_offset(char *param_1)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  size_t sVar4;
  char *pcVar5;
  int local_3c;
  char *local_38;
  char *local_30;
  
  sVar4 = _strlen(param_1);
  param_1[(int)sVar4 + -1] = '\0';
  param_1 = param_1 + 1;
  pcVar5 = param_1;
  pcVar1 = param_1;
  while( true ) {
    local_30 = pcVar1;
    local_38 = pcVar5;
    pcVar5 = local_38 + 1;
    cVar2 = *local_38;
    pcVar1 = local_30 + 1;
    *local_30 = cVar2;
    if (cVar2 == '\0') break;
    if (*local_38 == '\\') {
      if (*pcVar5 == 'n') {
        *local_30 = '\n';
        pcVar5 = local_38 + 2;
      }
      else if (*pcVar5 == '\\') {
        pcVar5 = local_38 + 2;
      }
    }
  }
  local_3c = 0;
  while( true ) {
    if (__qy_string_pool_p <= local_3c) {
      if (__qy_string_pool_max <= __qy_string_pool_p) {
        __qy_string_pool_max = __qy_string_pool_max + 0x20;
        _string_pool = _realloc(_string_pool,(long)__qy_string_pool_max << 3);
      }
      iVar3 = __qy_string_pool_p;
      __qy_string_pool_p = __qy_string_pool_p + 1;
      pcVar5 = _strdup(param_1);
      *(char **)((long)_string_pool + (long)iVar3 * 8) = pcVar5;
      return __qy_string_pool_p + -1;
    }
    iVar3 = _strcmp(param_1,*(char **)((long)_string_pool + (long)local_3c * 8));
    if (iVar3 == 0) break;
    local_3c = local_3c + 1;
  }
  return local_3c;
}



int _fetch_var_offset(char *param_1)

{
  int iVar1;
  char *pcVar2;
  long lVar3;
  int local_24;
  
  local_24 = 0;
  while( true ) {
    if (__qy_global_names_p <= local_24) {
      if (__qy_global_names_max <= __qy_global_names_p) {
        __qy_global_names_max = __qy_global_names_max + 0x20;
        _global_names = _realloc(_global_names,(long)__qy_global_names_max << 3);
      }
      iVar1 = __qy_global_names_p;
      __qy_global_names_p = __qy_global_names_p + 1;
      pcVar2 = _strdup(param_1);
      *(char **)((long)_global_names + (long)iVar1 * 8) = pcVar2;
      if (__qy_global_values_max <= __qy_global_values_p) {
        __qy_global_values_max = __qy_global_values_max + 0x20;
        _global_values = _realloc(_global_values,(long)__qy_global_values_max << 2);
      }
      lVar3 = (long)__qy_global_values_p;
      __qy_global_values_p = __qy_global_values_p + 1;
      *(undefined4 *)((long)_global_values + lVar3 * 4) = 0;
      return iVar1;
    }
    iVar1 = _strcmp(param_1,*(char **)((long)_global_names + (long)local_24 * 8));
    if (iVar1 == 0) break;
    local_24 = local_24 + 1;
  }
  return local_24;
}



undefined8 _load_ast(void)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  size_t sVar5;
  long lVar6;
  undefined8 uVar7;
  undefined4 local_44;
  char *local_40;
  int local_1c;
  undefined8 local_18;
  
  uVar3 = _read_line();
  pcVar4 = (char *)_rtrim(uVar3,&local_1c);
  local_40 = _strtok(pcVar4," ");
  if (*local_40 == ';') {
    local_18 = 0;
  }
  else {
    iVar1 = _get_enum_value(local_40);
    sVar5 = _strlen(local_40);
    local_40 = local_40 + sVar5;
    if (local_40 == pcVar4 + local_1c) {
      uVar3 = _load_ast();
      uVar7 = _load_ast();
      local_18 = _make_node(iVar1,uVar3,uVar7);
    }
    else {
      do {
        local_40 = local_40 + 1;
        iVar2 = _isspace((int)*local_40);
      } while (iVar2 != 0);
      if (iVar1 == 0) {
        local_44 = _fetch_var_offset(local_40);
      }
      else if (iVar1 == 1) {
        local_44 = _fetch_string_offset(local_40);
      }
      else if (iVar1 == 2) {
        lVar6 = _strtol(local_40,(char **)0x0,0);
        local_44 = (undefined4)lVar6;
      }
      else {
        _error("Unknown node type: %s\n");
      }
      local_18 = _make_leaf(iVar1,local_44);
    }
  }
  return local_18;
}



undefined8 entry(int param_1,long param_2)

{
  undefined8 uVar1;
  char *local_30;
  
  if (param_1 < 2) {
    local_30 = "";
  }
  else {
    local_30 = *(char **)(param_2 + 8);
  }
  _init_in(local_30);
  uVar1 = _load_ast();
  _interp(uVar1);
  return 0;
}



void ___vsprintf_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003dec. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____vsprintf_chk_100004010)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _calloc(size_t param_1,size_t param_2)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003df8. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__calloc_100004018)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _exit(int param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003e04. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__exit_100004020)(param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fgetc(FILE *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e10. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fgetc_100004028)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

FILE * _fopen(char *param_1,char *param_2)

{
  FILE *pFVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e1c. Too many branches
                    // WARNING: Treating indirect jump as call
  pFVar1 = (FILE *)(*(code *)PTR__fopen_100004030)();
  return pFVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _isspace(int _c)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e28. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__isspace_100004038)(_c);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e34. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004040)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _realloc(void *param_1,size_t param_2)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e40. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__realloc_100004048)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _strcmp(char *param_1,char *param_2)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e4c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__strcmp_100004050)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * _strdup(char *param_1)

{
  char *pcVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e58. Too many branches
                    // WARNING: Treating indirect jump as call
  pcVar1 = (char *)(*(code *)PTR__strdup_100004058)();
  return pcVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t _strlen(char *param_1)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e64. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__strlen_100004060)();
  return sVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * _strtok(char *param_1,char *param_2)

{
  char *pcVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e70. Too many branches
                    // WARNING: Treating indirect jump as call
  pcVar1 = (char *)(*(code *)PTR__strtok_100004068)();
  return pcVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

long _strtol(char *param_1,char **param_2,int param_3)

{
  long lVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e7c. Too many branches
                    // WARNING: Treating indirect jump as call
  lVar1 = (*(code *)PTR__strtol_100004070)(param_1,param_2,param_3);
  return lVar1;
}


