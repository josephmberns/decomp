#include "compiler-lexical-analyzer.h"



void _gettok(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  while (iVar3 = _isspace(DAT_100008000), uVar2 = DAT_100008068, uVar1 = DAT_100008004, iVar3 != 0)
  {
    FUN_100002e68();
  }
  switch(DAT_100008000) {
  default:
    FUN_1000033dc(param_1,DAT_100008004,DAT_100008068);
    break;
  case 0x21:
    FUN_100002e68();
    FUN_100003100(param_1,0x3d,0xd,7,uVar1,uVar2);
    break;
  case 0x22:
    FUN_1000031e4(param_1,DAT_100008000,DAT_100008004,DAT_100008068);
    break;
  case 0x25:
    FUN_100002e68();
    *param_1 = 3;
    param_1[1] = uVar1;
    param_1[2] = uVar2;
    param_1[4] = 0;
    break;
  case 0x26:
    FUN_100002e68();
    FUN_100003100(param_1,0x26,0xf,0,uVar1,uVar2);
    break;
  case 0x27:
    FUN_100002e68();
    FUN_100002fbc(param_1,DAT_100008000,uVar1,uVar2);
    break;
  case 0x28:
    FUN_100002e68();
    *param_1 = 0x16;
    param_1[1] = uVar1;
    param_1[2] = uVar2;
    param_1[4] = 0;
    break;
  case 0x29:
    FUN_100002e68();
    *param_1 = 0x17;
    param_1[1] = uVar1;
    param_1[2] = uVar2;
    param_1[4] = 0;
    break;
  case 0x2a:
    FUN_100002e68();
    *param_1 = 1;
    param_1[1] = uVar1;
    param_1[2] = uVar2;
    param_1[4] = 0;
    break;
  case 0x2b:
    FUN_100002e68();
    *param_1 = 4;
    param_1[1] = uVar1;
    param_1[2] = uVar2;
    param_1[4] = 0;
    break;
  case 0x2c:
    FUN_100002e68();
    *param_1 = 0x1b;
    param_1[1] = uVar1;
    param_1[2] = uVar2;
    param_1[4] = 0;
    break;
  case 0x2d:
    FUN_100002e68();
    *param_1 = 5;
    param_1[1] = uVar1;
    param_1[2] = uVar2;
    param_1[4] = 0;
    break;
  case 0x2f:
    FUN_100002e68();
    FUN_100002ed4(param_1,uVar1,uVar2);
    break;
  case 0x3b:
    FUN_100002e68();
    *param_1 = 0x1a;
    param_1[1] = uVar1;
    param_1[2] = uVar2;
    param_1[4] = 0;
    break;
  case 0x3c:
    FUN_100002e68();
    FUN_100003100(param_1,0x3d,9,8,uVar1,uVar2);
    break;
  case 0x3d:
    FUN_100002e68();
    FUN_100003100(param_1,0x3d,0xc,0xe,uVar1,uVar2);
    break;
  case 0x3e:
    FUN_100002e68();
    FUN_100003100(param_1,0x3d,0xb,10,uVar1,uVar2);
    break;
  case 0x7b:
    FUN_100002e68();
    *param_1 = 0x18;
    param_1[1] = uVar1;
    param_1[2] = uVar2;
    param_1[4] = 0;
    break;
  case 0x7c:
    FUN_100002e68();
    FUN_100003100(param_1,0x7c,0x10,0,uVar1,uVar2);
    break;
  case 0x7d:
    FUN_100002e68();
    *param_1 = 0x19;
    param_1[1] = uVar1;
    param_1[2] = uVar2;
    param_1[4] = 0;
    break;
  case -1:
    *param_1 = 0;
    param_1[1] = uVar1;
    param_1[2] = uVar2;
    param_1[4] = 0;
  }
  return;
}



int FUN_100002e68(void)

{
  DAT_100008000 = _getc(DAT_100008078);
  DAT_100008068 = DAT_100008068 + 1;
  if (DAT_100008000 == 10) {
    DAT_100008004 = DAT_100008004 + 1;
    DAT_100008068 = 0;
  }
  return DAT_100008000;
}



void FUN_100002ed4(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  if (DAT_100008000 == 0x2a) {
    FUN_100002e68();
    do {
      while (DAT_100008000 != 0x2a) {
        if (DAT_100008000 == -1) {
          FUN_10000394c(param_2,param_3,"EOF in comment");
        }
        else {
          FUN_100002e68();
        }
      }
      iVar1 = FUN_100002e68();
    } while (iVar1 != 0x2f);
    FUN_100002e68();
    _gettok(param_1);
  }
  else {
    *param_1 = 2;
    param_1[1] = param_2;
    param_1[2] = param_3;
    param_1[4] = 0;
  }
  return;
}



void FUN_100002fbc(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_14;
  
  if (DAT_100008000 == 0x27) {
    FUN_10000394c(param_3,param_4,"gettok: empty character constant");
  }
  local_14 = param_2;
  if (DAT_100008000 == 0x5c) {
    FUN_100002e68();
    if (DAT_100008000 == 0x6e) {
      local_14 = 10;
    }
    else if (DAT_100008000 == 0x5c) {
      local_14 = 0x5c;
    }
    else {
      FUN_10000394c(param_3,param_4,"gettok: unknown escape sequence \\%c");
    }
  }
  iVar1 = FUN_100002e68();
  if (iVar1 != 0x27) {
    FUN_10000394c(param_3,param_4,"multi-character constant");
  }
  FUN_100002e68();
  *param_1 = 0x1d;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[4] = local_14;
  return;
}



void FUN_100003100(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  if (DAT_100008000 == param_2) {
    FUN_100002e68();
    *param_1 = param_3;
    param_1[1] = param_5;
    param_1[2] = param_6;
    param_1[4] = 0;
  }
  else {
    if (param_4 == 0) {
      FUN_10000394c(param_5,param_6,"follow: unrecognized character \'%c\' (%d)\n");
    }
    *param_1 = param_4;
    param_1[1] = param_5;
    param_1[2] = param_6;
    param_1[4] = 0;
  }
  return;
}



void FUN_1000031e4(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  long lVar2;
  
  __qy_text_p = 0;
  while (iVar1 = FUN_100002e68(), iVar1 != param_2) {
    if (DAT_100008000 == 10) {
      FUN_10000394c(param_3,param_4,"EOL in string");
    }
    if (DAT_100008000 == -1) {
      FUN_10000394c(param_3,param_4,"EOF in string");
    }
    if (__qy_text_max <= __qy_text_p) {
      __qy_text_max = __qy_text_max + 0x20;
      _text = _realloc(_text,(long)__qy_text_max);
    }
    lVar2 = (long)__qy_text_p;
    __qy_text_p = __qy_text_p + 1;
    *(char *)((long)_text + lVar2) = (char)DAT_100008000;
  }
  if (__qy_text_max <= __qy_text_p) {
    __qy_text_max = __qy_text_max + 0x20;
    _text = _realloc(_text,(long)__qy_text_max);
  }
  lVar2 = (long)__qy_text_p;
  __qy_text_p = __qy_text_p + 1;
  *(undefined *)((long)_text + lVar2) = 0;
  FUN_100002e68();
  *param_1 = 0x1e;
  param_1[1] = param_3;
  param_1[2] = param_4;
  *(void **)(param_1 + 4) = _text;
  return;
}



// WARNING: Restarted to delay deadcode elimination for space: ram

void FUN_1000033dc(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  long lVar5;
  
  bVar1 = true;
  __qy_text_p = 0;
  while (iVar2 = _isalnum(DAT_100008000), iVar2 != 0 || DAT_100008000 == 0x5f) {
    if (__qy_text_max <= __qy_text_p) {
      __qy_text_max = __qy_text_max + 0x20;
      _text = (char *)_realloc(_text,(long)__qy_text_max);
    }
    lVar5 = (long)__qy_text_p;
    __qy_text_p = __qy_text_p + 1;
    _text[lVar5] = (char)DAT_100008000;
    iVar2 = _isdigit(DAT_100008000);
    if (iVar2 == 0) {
      bVar1 = false;
    }
    FUN_100002e68();
  }
  if (__qy_text_p == 0) {
    FUN_10000394c(param_2,param_3,"gettok: unrecognized character (%d) \'%c\'\n");
  }
  if (__qy_text_max <= __qy_text_p) {
    __qy_text_max = __qy_text_max + 0x20;
    _text = (char *)_realloc(_text,(long)__qy_text_max);
  }
  lVar5 = (long)__qy_text_p;
  __qy_text_p = __qy_text_p + 1;
  _text[lVar5] = '\0';
  iVar2 = _isdigit((int)*_text);
  if (iVar2 == 0) {
    uVar3 = FUN_100003ac4(_text);
    *param_1 = uVar3;
    param_1[1] = param_2;
    param_1[2] = param_3;
    *(char **)(param_1 + 4) = _text;
  }
  else {
    if (!bVar1) {
      FUN_10000394c(param_2,param_3,"invalid number: %s\n");
    }
    lVar5 = _strtol(_text,(char **)0x0,0);
    if (((long)(int)lVar5 == 0x7fffffffffffffff) && (piVar4 = ___error(), *piVar4 == 0x22)) {
      FUN_10000394c(param_2,param_3,"Number exceeds maximum value");
    }
    *param_1 = 0x1d;
    param_1[1] = param_2;
    param_1[2] = param_3;
    param_1[4] = (int)lVar5;
  }
  return;
}



ulong _run(ulong param_1)

{
  uint uVar1;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  
  do {
    _gettok(&local_48,param_1);
    uStack_28 = uStack_40;
    local_30 = local_48;
    local_20 = local_38;
    _fprintf(DAT_100008070,"%5d  %5d %.15s");
    if ((int)local_30 == 0x1d) {
      _fprintf(DAT_100008070,"  %4d");
    }
    else if ((int)local_30 == 0x1c) {
      _fprintf(DAT_100008070," %s");
    }
    else if ((int)local_30 == 0x1e) {
      _fprintf(DAT_100008070," \"%s\"");
    }
    uVar1 = _fprintf(DAT_100008070,"\n");
    param_1 = (ulong)uVar1;
  } while ((int)local_30 != 0);
  if (DAT_100008070 != *(FILE **)PTR____stdoutp_100004018) {
    uVar1 = _fclose(DAT_100008070);
    param_1 = (ulong)uVar1;
  }
  return param_1;
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
      FUN_10000394c(0,0,"Can\'t open %s\n");
    }
  }
  return;
}



void FUN_10000394c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined auStack_410 [1000];
  undefined8 local_28;
  
  local_28 = *(undefined8 *)PTR____stack_chk_guard_100004008;
  ___vsprintf_chk(auStack_410,0,1000,param_3,&stack0x00000000);
  _printf("(%d,%d) error: %s\n");
                    // WARNING: Subroutine does not return
  _exit(1);
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
  _init_io(&DAT_100008078,*(undefined8 *)PTR____stdinp_100004010,"r",local_30);
  if (param_1 < 3) {
    local_40 = "";
  }
  else {
    local_40 = *(char **)(param_2 + 0x10);
  }
  _init_io(&DAT_100008070,*(undefined8 *)PTR____stdoutp_100004018,"wb",local_40);
  _run();
  return 0;
}



undefined4 FUN_100003ac4(undefined8 param_1)

{
  undefined4 local_1c;
  undefined8 local_18;
  
  local_18 = param_1;
  DAT_100008080 = _bsearch(&local_18,&PTR_s_else_100008008,5,0x10,(int *)FUN_100003b44);
  if (DAT_100008080 == (void *)0x0) {
    local_1c = 0x1c;
  }
  else {
    local_1c = *(undefined4 *)((long)DAT_100008080 + 8);
  }
  return local_1c;
}



int FUN_100003b44(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  
  iVar1 = _strcmp((char *)*param_1,(char *)*param_2);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int * ___error(void)

{
  int *piVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003b80. Too many branches
                    // WARNING: Treating indirect jump as call
  piVar1 = (int *)(*(code *)PTR____error_100004000)();
  return piVar1;
}



void ___vsprintf_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003b8c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____vsprintf_chk_100004020)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _bsearch(void *param_1,void *param_2,size_t param_3,size_t param_4,int *param_5)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003b98. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__bsearch_100004028)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _exit(int param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003ba4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__exit_100004030)(param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fclose(FILE *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003bb0. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fclose_100004038)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

FILE * _fopen(char *param_1,char *param_2)

{
  FILE *pFVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003bbc. Too many branches
                    // WARNING: Treating indirect jump as call
  pFVar1 = (FILE *)(*(code *)PTR__fopen_100004040)();
  return pFVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fprintf(FILE *param_1,char *param_2,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003bc8. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fprintf_100004048)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _getc(FILE *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003bd4. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__getc_100004050)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _isalnum(int _c)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003be0. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__isalnum_100004058)(_c);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _isdigit(int _c)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003bec. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__isdigit_100004060)(_c);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _isspace(int _c)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003bf8. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__isspace_100004068)(_c);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003c04. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004070)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _realloc(void *param_1,size_t param_2)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003c10. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__realloc_100004078)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _strcmp(char *param_1,char *param_2)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003c1c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__strcmp_100004080)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

long _strtol(char *param_1,char **param_2,int param_3)

{
  long lVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003c28. Too many branches
                    // WARNING: Treating indirect jump as call
  lVar1 = (*(code *)PTR__strtol_100004088)(param_1,param_2,param_3);
  return lVar1;
}


