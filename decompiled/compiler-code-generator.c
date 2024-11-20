#include "compiler-code-generator.h"



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



undefined4 _type_to_op(uint param_1)

{
  return *(undefined4 *)(&DAT_10000800c + (ulong)param_1 * 0x10);
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



undefined4 * _make_leaf(undefined4 param_1,char *param_2)

{
  undefined4 *puVar1;
  char *pcVar2;
  
  puVar1 = (undefined4 *)_calloc(0x20,1);
  *puVar1 = param_1;
  pcVar2 = _strdup(param_2);
  *(char **)(puVar1 + 6) = pcVar2;
  return puVar1;
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
  DAT_1000081d0 = DAT_1000081d0 + 1;
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



undefined4 _hole(void)

{
  undefined4 uVar1;
  
  uVar1 = DAT_1000081d0;
  _emit_int(0);
  return uVar1;
}



void _fix(int param_1,int param_2)

{
  *(int *)(_object + param_1) = param_2 - param_1;
  return;
}



int _fetch_var_offset(char *param_1)

{
  int iVar1;
  char *pcVar2;
  int local_24;
  
  local_24 = 0;
  while( true ) {
    if (__qy_globals_p <= local_24) {
      if (__qy_globals_max <= __qy_globals_p) {
        __qy_globals_max = __qy_globals_max + 0x20;
        _globals = _realloc(_globals,(long)__qy_globals_max << 3);
      }
      iVar1 = __qy_globals_p;
      __qy_globals_p = __qy_globals_p + 1;
      pcVar2 = _strdup(param_1);
      *(char **)((long)_globals + (long)iVar1 * 8) = pcVar2;
      return iVar1;
    }
    iVar1 = _strcmp(param_1,*(char **)((long)_globals + (long)local_24 * 8));
    if (iVar1 == 0) break;
    local_24 = local_24 + 1;
  }
  return local_24;
}



int _fetch_string_offset(char *param_1)

{
  int iVar1;
  char *pcVar2;
  int local_24;
  
  local_24 = 0;
  while( true ) {
    if (__qy_string_pool_p <= local_24) {
      if (__qy_string_pool_max <= __qy_string_pool_p) {
        __qy_string_pool_max = __qy_string_pool_max + 0x20;
        _string_pool = _realloc(_string_pool,(long)__qy_string_pool_max << 3);
      }
      iVar1 = __qy_string_pool_p;
      __qy_string_pool_p = __qy_string_pool_p + 1;
      pcVar2 = _strdup(param_1);
      *(char **)((long)_string_pool + (long)iVar1 * 8) = pcVar2;
      return iVar1;
    }
    iVar1 = _strcmp(param_1,*(char **)((long)_string_pool + (long)local_24 * 8));
    if (iVar1 == 0) break;
    local_24 = local_24 + 1;
  }
  return local_24;
}



void _code_gen(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 local_20;
  
  uVar2 = DAT_1000081d0;
  if (param_1 != (undefined4 *)0x0) {
    switch(*param_1) {
    case 0:
      _emit_byte(0);
      uVar2 = _fetch_var_offset(*(undefined8 *)(param_1 + 6));
      _emit_int(uVar2);
      break;
    case 1:
      _emit_byte(2);
      uVar2 = _fetch_string_offset(*(undefined8 *)(param_1 + 6));
      _emit_int(uVar2);
      break;
    case 2:
      _emit_byte(2);
      iVar1 = _atoi(*(char **)(param_1 + 6));
      _emit_int(iVar1);
      break;
    case 3:
      _code_gen(*(undefined8 *)(param_1 + 2));
      _code_gen(*(undefined8 *)(param_1 + 4));
      break;
    case 4:
      _code_gen(*(undefined8 *)(param_1 + 2));
      _emit_byte(0x13);
      uVar2 = _hole();
      _code_gen(*(undefined8 *)(*(long *)(param_1 + 4) + 8));
      if (*(long *)(*(long *)(param_1 + 4) + 0x10) != 0) {
        _emit_byte(0x12);
        local_20 = _hole();
      }
      _fix(uVar2,DAT_1000081d0);
      if (*(long *)(*(long *)(param_1 + 4) + 0x10) != 0) {
        _code_gen(*(undefined8 *)(*(long *)(param_1 + 4) + 0x10));
        _fix(local_20,DAT_1000081d0);
      }
      break;
    case 5:
      _code_gen(*(undefined8 *)(param_1 + 2));
      _emit_byte(0x14);
      break;
    case 6:
      _code_gen(*(undefined8 *)(param_1 + 2));
      _emit_byte(0x15);
      break;
    case 7:
      _code_gen(*(undefined8 *)(param_1 + 2));
      _emit_byte(0x16);
      break;
    case 8:
      _code_gen(*(undefined8 *)(param_1 + 2));
      _emit_byte(0x13);
      uVar3 = _hole();
      _code_gen(*(undefined8 *)(param_1 + 4));
      _emit_byte(0x12);
      uVar4 = _hole();
      _fix(uVar4,uVar2);
      _fix(uVar3,DAT_1000081d0);
      break;
    case 9:
      uVar2 = _fetch_var_offset(*(undefined8 *)(*(long *)(param_1 + 2) + 0x18));
      _code_gen(*(undefined8 *)(param_1 + 4));
      _emit_byte(1);
      _emit_int(uVar2);
      break;
    case 10:
    case 0xb:
      _code_gen(*(undefined8 *)(param_1 + 2));
      _type_to_op(*param_1);
      _emit_byte();
      break;
    case 0xc:
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x18:
      _code_gen(*(undefined8 *)(param_1 + 2));
      _code_gen(*(undefined8 *)(param_1 + 4));
      _type_to_op(*param_1);
      _emit_byte();
      break;
    default:
      _error("error in code generator - found %d, expecting operator\n");
    }
  }
  return;
}



void _code_finish(void)

{
  _emit_byte(0x17);
  return;
}



ulong _list_code(void)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  undefined *local_20;
  int local_14;
  
  _fprintf(_dest_fp,"Datasize: %d Strings: %d\n");
  for (local_14 = 0; local_14 < __qy_string_pool_p; local_14 = local_14 + 1) {
    _fprintf(_dest_fp,"%s\n");
  }
  local_20 = _object;
  do {
    _fprintf(_dest_fp,"%5d ");
    puVar1 = local_20 + 1;
    switch(*local_20) {
    case 0:
      _fprintf(_dest_fp,"fetch [%d]\n");
      local_20 = local_20 + 5;
      break;
    case 1:
      _fprintf(_dest_fp,"store [%d]\n");
      local_20 = local_20 + 5;
      break;
    case 2:
      _fprintf(_dest_fp,"push  %d\n");
      local_20 = local_20 + 5;
      break;
    case 3:
      _fprintf(_dest_fp,"add\n");
      local_20 = puVar1;
      break;
    case 4:
      _fprintf(_dest_fp,"sub\n");
      local_20 = puVar1;
      break;
    case 5:
      _fprintf(_dest_fp,"mul\n");
      local_20 = puVar1;
      break;
    case 6:
      _fprintf(_dest_fp,"div\n");
      local_20 = puVar1;
      break;
    case 7:
      _fprintf(_dest_fp,"mod\n");
      local_20 = puVar1;
      break;
    case 8:
      _fprintf(_dest_fp,"lt\n");
      local_20 = puVar1;
      break;
    case 9:
      _fprintf(_dest_fp,"gt\n");
      local_20 = puVar1;
      break;
    case 10:
      _fprintf(_dest_fp,"le\n");
      local_20 = puVar1;
      break;
    case 0xb:
      _fprintf(_dest_fp,"ge\n");
      local_20 = puVar1;
      break;
    case 0xc:
      _fprintf(_dest_fp,"eq\n");
      local_20 = puVar1;
      break;
    case 0xd:
      _fprintf(_dest_fp,"ne\n");
      local_20 = puVar1;
      break;
    case 0xe:
      _fprintf(_dest_fp,"and\n");
      local_20 = puVar1;
      break;
    case 0xf:
      _fprintf(_dest_fp,"or\n");
      local_20 = puVar1;
      break;
    case 0x10:
      _fprintf(_dest_fp,"neg\n");
      local_20 = puVar1;
      break;
    case 0x11:
      _fprintf(_dest_fp,"not\n");
      local_20 = puVar1;
      break;
    case 0x12:
      _fprintf(_dest_fp,"jmp    (%d) %d\n");
      local_20 = local_20 + 5;
      break;
    case 0x13:
      _fprintf(_dest_fp,"jz     (%d) %d\n");
      local_20 = local_20 + 5;
      break;
    case 0x14:
      _fprintf(_dest_fp,"prtc\n");
      local_20 = puVar1;
      break;
    case 0x15:
      _fprintf(_dest_fp,"prts\n");
      local_20 = puVar1;
      break;
    case 0x16:
      _fprintf(_dest_fp,"prti\n");
      local_20 = puVar1;
      break;
    case 0x17:
      uVar2 = _fprintf(_dest_fp,"halt\n");
      return (ulong)uVar2;
    default:
      uVar3 = _error("listcode:Unknown opcode %d\n");
      return uVar3;
    }
  } while( true );
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
    if (DAT_1000081e0 <= *param_1 + 1) {
      if (DAT_1000081e0 == 0) {
        local_28 = 0x80;
      }
      else {
        local_28 = DAT_1000081e0 << 1;
      }
      DAT_1000081e0 = local_28;
      DAT_1000081d8 = _realloc(DAT_1000081d8,(long)local_28);
    }
    *(char *)((long)DAT_1000081d8 + (long)*param_1) = (char)iVar1;
    *param_1 = *param_1 + 1;
  }
  if (*param_1 == 0) {
    local_18 = (void *)0x0;
  }
  else {
    *(undefined *)((long)DAT_1000081d8 + (long)*param_1) = 0;
    local_18 = DAT_1000081d8;
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



undefined8 _load_ast(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  size_t sVar5;
  undefined8 uVar6;
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
    uVar1 = _get_enum_value(local_40);
    sVar5 = _strlen(local_40);
    local_40 = local_40 + sVar5;
    if (local_40 == pcVar4 + local_1c) {
      uVar3 = _load_ast();
      uVar6 = _load_ast();
      local_18 = _make_node(uVar1,uVar3,uVar6);
    }
    else {
      do {
        local_40 = local_40 + 1;
        iVar2 = _isspace((int)*local_40);
      } while (iVar2 != 0);
      local_18 = _make_leaf(uVar1,local_40);
    }
  }
  return local_18;
}



undefined8 entry(int param_1,long param_2)

{
  char *local_40;
  char *local_30;
  
  if (param_1 < 2) {
    local_30 = "";
  }
  else {
    local_30 = *(char **)(param_2 + 8);
  }
  _init_io(&_source_fp,*(undefined8 *)PTR____stdinp_100004008,"r",local_30);
  if (param_1 < 3) {
    local_40 = "";
  }
  else {
    local_40 = *(char **)(param_2 + 0x10);
  }
  _init_io(&_dest_fp,*(undefined8 *)PTR____stdoutp_100004010,"wb",local_40);
  _load_ast();
  _code_gen();
  _code_finish();
  _list_code();
  return 0;
}



void ___vsprintf_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003cec. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____vsprintf_chk_100004018)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _atoi(char *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003cf8. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__atoi_100004020)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _calloc(size_t param_1,size_t param_2)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003d04. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__calloc_100004028)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _exit(int param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003d10. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__exit_100004030)(param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fgetc(FILE *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003d1c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fgetc_100004038)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

FILE * _fopen(char *param_1,char *param_2)

{
  FILE *pFVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003d28. Too many branches
                    // WARNING: Treating indirect jump as call
  pFVar1 = (FILE *)(*(code *)PTR__fopen_100004040)();
  return pFVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fprintf(FILE *param_1,char *param_2,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003d34. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fprintf_100004048)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _isspace(int _c)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003d40. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__isspace_100004050)(_c);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003d4c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004058)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _realloc(void *param_1,size_t param_2)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003d58. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__realloc_100004060)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _strcmp(char *param_1,char *param_2)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003d64. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__strcmp_100004068)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * _strdup(char *param_1)

{
  char *pcVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003d70. Too many branches
                    // WARNING: Treating indirect jump as call
  pcVar1 = (char *)(*(code *)PTR__strdup_100004070)();
  return pcVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t _strlen(char *param_1)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003d7c. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__strlen_100004078)();
  return sVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * _strtok(char *param_1,char *param_2)

{
  char *pcVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003d88. Too many branches
                    // WARNING: Treating indirect jump as call
  pcVar1 = (char *)(*(code *)PTR__strtok_100004080)();
  return pcVar1;
}


