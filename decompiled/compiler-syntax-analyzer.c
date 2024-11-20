#include "compiler-syntax-analyzer.h"



void _error(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined auStack_410 [1000];
  undefined8 local_28;
  
  local_28 = *(undefined8 *)PTR____stack_chk_guard_100004000;
  ___vsprintf_chk(auStack_410,0,1000,param_3,&stack0x00000000);
  _printf("(%d, %d) error: %s\n");
                    // WARNING: Subroutine does not return
  _exit(1);
}



void * _read_line(int *param_1)

{
  int iVar1;
  int local_28;
  void *local_18;
  
  *param_1 = 0;
  while ((iVar1 = _fgetc(DAT_1000084b8), iVar1 != -1 && (iVar1 != 10))) {
    if (DAT_1000084b0 <= *param_1 + 1) {
      if (DAT_1000084b0 == 0) {
        local_28 = 0x80;
      }
      else {
        local_28 = DAT_1000084b0 << 1;
      }
      DAT_1000084b0 = local_28;
      DAT_1000084a8 = _realloc(DAT_1000084a8,(long)local_28);
    }
    *(char *)((long)DAT_1000084a8 + (long)*param_1) = (char)iVar1;
    *param_1 = *param_1 + 1;
  }
  if (*param_1 == 0) {
    local_18 = (void *)0x0;
  }
  else {
    *(undefined *)((long)DAT_1000084a8 + (long)*param_1) = 0;
    local_18 = DAT_1000084a8;
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



undefined4 _get_enum(char *param_1)

{
  int iVar1;
  ulong local_28;
  
  local_28 = 0;
  while( true ) {
    if (0x1e < local_28) {
      _error(0,0,"Unknown token %s\n");
      return 0;
    }
    iVar1 = _strcmp((&PTR_s_End_of_input_100008008)[local_28 * 4],param_1);
    if (iVar1 == 0) break;
    local_28 = local_28 + 1;
  }
  return *(undefined4 *)(&DAT_100008010 + local_28 * 0x20);
}



void _gettok(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  char *pcVar4;
  char *pcVar5;
  size_t sVar6;
  char *local_30;
  int local_14;
  
  uVar3 = _read_line();
  pcVar4 = (char *)_rtrim(uVar3,&local_14);
  pcVar5 = _strtok(pcVar4," ");
  iVar1 = _atoi(pcVar5);
  param_1[1] = iVar1;
  pcVar5 = _strtok((char *)0x0," ");
  iVar1 = _atoi(pcVar5);
  param_1[2] = iVar1;
  local_30 = _strtok((char *)0x0," ");
  uVar2 = _get_enum(local_30);
  *param_1 = uVar2;
  sVar6 = _strlen(local_30);
  local_30 = local_30 + sVar6;
  if (local_30 != pcVar4 + local_14) {
    do {
      local_30 = local_30 + 1;
      iVar1 = _isspace((int)*local_30);
    } while (iVar1 != 0);
    pcVar4 = _strdup(local_30);
    *(char **)(param_1 + 4) = pcVar4;
  }
  return;
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



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _expect(undefined8 param_1,int param_2)

{
  undefined8 local_38;
  ulong uStack_30;
  undefined8 local_28;
  int local_1c;
  undefined8 local_18;
  
  local_1c = param_2;
  local_18 = param_1;
  if (DAT_1000084c0 == param_2) {
    _gettok(&local_38);
    _DAT_1000084c8 = uStack_30;
    _DAT_1000084c0 = local_38;
    DAT_1000084d0 = local_28;
  }
  else {
    _error(DAT_1000084c4,_DAT_1000084c8 & 0xffffffff,"%s: Expecting \'%s\', found \'%s\'\n");
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Restarted to delay deadcode elimination for space: stack

undefined8 _expr(int param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 local_e8;
  int local_c4;
  ulong local_c0;
  ulong uStack_b8;
  undefined8 local_b0;
  uint local_a4;
  ulong local_a0;
  ulong uStack_98;
  undefined8 local_90;
  ulong local_88;
  ulong uStack_80;
  undefined8 local_78;
  ulong local_70;
  ulong uStack_68;
  undefined8 local_60;
  ulong local_58;
  ulong uStack_50;
  undefined8 local_48;
  uint local_3c;
  undefined8 local_38;
  undefined8 local_30;
  int local_24;
  
  local_30 = 0;
  local_24 = param_1;
  switch(DAT_1000084c0) {
  case 4:
  case 5:
    local_3c = DAT_1000084c0;
    _gettok(&local_58);
    _DAT_1000084c8 = uStack_50;
    _DAT_1000084c0 = local_58;
    DAT_1000084d0 = local_48;
    local_e8 = _expr(DAT_1000080d8);
    local_38 = local_e8;
    if (local_3c == 5) {
      local_e8 = _make_node(10,local_e8,0);
    }
    local_30 = local_e8;
    break;
  default:
    _error(DAT_1000084c4,_DAT_1000084c8 & 0xffffffff,"Expecting a primary, found: %s\n");
    break;
  case 7:
    _gettok(&local_70);
    _DAT_1000084c8 = uStack_68;
    _DAT_1000084c0 = local_70;
    DAT_1000084d0 = local_60;
    uVar2 = _expr(DAT_1000080f8);
    local_30 = _make_node(0xb,uVar2,0);
    break;
  case 0x16:
    local_30 = _paren_expr();
    break;
  case 0x1c:
    local_30 = _make_leaf(0,DAT_1000084d0);
    _gettok(&local_88);
    _DAT_1000084c8 = uStack_80;
    _DAT_1000084c0 = local_88;
    DAT_1000084d0 = local_78;
    break;
  case 0x1d:
    local_30 = _make_leaf(2,DAT_1000084d0);
    _gettok(&local_a0);
    _DAT_1000084c8 = uStack_98;
    _DAT_1000084c0 = local_a0;
    DAT_1000084d0 = local_90;
  }
  while( true ) {
    bVar1 = false;
    if (((&DAT_100008015)[(_DAT_1000084c0 & 0xffffffff) * 0x20] & 1) != 0) {
      bVar1 = local_24 <= *(int *)(&DAT_100008018 + (_DAT_1000084c0 & 0xffffffff) * 0x20);
    }
    if (!bVar1) break;
    local_a4 = DAT_1000084c0;
    _gettok(&local_c0);
    _DAT_1000084c8 = uStack_b8;
    _DAT_1000084c0 = local_c0;
    DAT_1000084d0 = local_b0;
    local_c4 = *(int *)(&DAT_100008018 + (ulong)local_a4 * 0x20);
    if (((&DAT_100008014)[(ulong)local_a4 * 0x20] & 1) == 0) {
      local_c4 = local_c4 + 1;
    }
    local_38 = _expr(local_c4);
    local_30 = _make_node(*(undefined4 *)(&DAT_10000801c + (ulong)local_a4 * 0x20),local_30,local_38
                         );
  }
  return local_30;
}



undefined8 _paren_expr(void)

{
  undefined8 uVar1;
  
  _expect("paren_expr",0x16);
  uVar1 = _expr(0);
  _expect("paren_expr",0x17);
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Restarted to delay deadcode elimination for space: ram

undefined8 _stmt(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong local_108;
  ulong uStack_100;
  undefined8 local_f8;
  ulong local_f0;
  ulong uStack_e8;
  undefined8 local_e0;
  ulong local_d8;
  ulong uStack_d0;
  undefined8 local_c8;
  ulong local_c0;
  ulong uStack_b8;
  undefined8 local_b0;
  ulong local_a8;
  ulong uStack_a0;
  undefined8 local_98;
  ulong local_90;
  ulong uStack_88;
  undefined8 local_80;
  ulong local_78;
  ulong uStack_70;
  undefined8 local_68;
  ulong local_60;
  ulong uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_28 = 0;
  switch(_DAT_1000084c0 & 0xffffffff) {
  case 0:
    break;
  default:
    _error(DAT_1000084c4,_DAT_1000084c8 & 0xffffffff,"expecting start of statement, found \'%s\'\n")
    ;
    break;
  case 0x11:
    _gettok(&local_60);
    _DAT_1000084c8 = uStack_58;
    _DAT_1000084c0 = local_60;
    DAT_1000084d0 = local_50;
    local_38 = _paren_expr();
    local_40 = _stmt();
    local_48 = 0;
    if (DAT_1000084c0 == 0x12) {
      _gettok(&local_78);
      _DAT_1000084c8 = uStack_70;
      _DAT_1000084c0 = local_78;
      DAT_1000084d0 = local_68;
      local_48 = _stmt();
    }
    uVar1 = local_38;
    uVar2 = _make_node(4,local_40,local_48);
    local_28 = _make_node(4,uVar1,uVar2);
    break;
  case 0x13:
    _gettok(&local_108);
    _DAT_1000084c8 = uStack_100;
    _DAT_1000084c0 = local_108;
    DAT_1000084d0 = local_f8;
    local_38 = _paren_expr();
    local_40 = _stmt();
    local_28 = _make_node(8,local_38,local_40);
    break;
  case 0x14:
    _gettok(&local_a8);
    _DAT_1000084c8 = uStack_a0;
    _DAT_1000084c0 = local_a8;
    DAT_1000084d0 = local_98;
    _expect("Print",0x16);
    while( true ) {
      if (DAT_1000084c0 == 0x1e) {
        uVar1 = _make_leaf(1,DAT_1000084d0);
        local_38 = _make_node(6,uVar1,0);
        _gettok(&local_c0);
        _DAT_1000084c8 = uStack_b8;
        _DAT_1000084c0 = local_c0;
        DAT_1000084d0 = local_b0;
      }
      else {
        uVar1 = _expr(0);
        local_38 = _make_node(7,uVar1,0);
      }
      local_28 = _make_node(3,local_28,local_38);
      if (DAT_1000084c0 != 0x1b) break;
      _expect("Print",0x1b);
    }
    _expect("Print",0x17);
    _expect("Print",0x1a);
    break;
  case 0x15:
    _gettok(&local_90);
    _DAT_1000084c8 = uStack_88;
    _DAT_1000084c0 = local_90;
    DAT_1000084d0 = local_80;
    local_38 = _paren_expr();
    local_28 = _make_node(5,local_38,0);
    _expect("Putc",0x1a);
    break;
  case 0x18:
    _expect("Lbrace",0x18);
    while (uVar1 = local_28, DAT_1000084c0 != 0x19 && DAT_1000084c0 != 0) {
      uVar2 = _stmt();
      local_28 = _make_node(3,uVar1,uVar2);
    }
    _expect("Lbrace",0x19);
    break;
  case 0x1a:
    _gettok(&local_d8);
    _DAT_1000084c8 = uStack_d0;
    _DAT_1000084c0 = local_d8;
    DAT_1000084d0 = local_c8;
    break;
  case 0x1c:
    local_30 = _make_leaf(0,DAT_1000084d0);
    _gettok(&local_f0);
    _DAT_1000084c8 = uStack_e8;
    _DAT_1000084c0 = local_f0;
    DAT_1000084d0 = local_e0;
    _expect("assign",0xe);
    local_38 = _expr(0);
    local_28 = _make_node(9,local_30,local_38);
    _expect("assign",0x1a);
  }
  return local_28;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

long _parse(void)

{
  long lVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  long local_18;
  
  local_18 = 0;
  _gettok(&local_30);
  _DAT_1000084c8 = uStack_28;
  _DAT_1000084c0 = local_30;
  DAT_1000084d0 = local_20;
  do {
    lVar1 = local_18;
    uVar3 = _stmt();
    local_18 = _make_node(3,lVar1,uVar3);
    bVar2 = false;
    if (local_18 != 0) {
      bVar2 = DAT_1000084c0 != 0;
    }
  } while (bVar2);
  return local_18;
}



ulong _prt_ast(int *param_1)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_1 == (int *)0x0) {
    uVar1 = _printf(";\n");
    uVar2 = (ulong)uVar1;
  }
  else {
    _printf("%-14s ");
    if (((*param_1 == 0) || (*param_1 == 2)) || (*param_1 == 1)) {
      uVar1 = _printf("%s\n");
      uVar2 = (ulong)uVar1;
    }
    else {
      _printf("\n");
      _prt_ast(*(undefined8 *)(param_1 + 2));
      uVar2 = _prt_ast(*(undefined8 *)(param_1 + 4));
    }
  }
  return uVar2;
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
      _error(0,0,"Can\'t open %s\n");
    }
  }
  return;
}



undefined4 entry(int param_1,long param_2)

{
  char *local_40;
  char *local_30;
  
  if (param_1 < 2) {
    local_30 = "";
  }
  else {
    local_30 = *(char **)(param_2 + 8);
  }
  _init_io(&DAT_1000084b8,*(undefined8 *)PTR____stdinp_100004008,"r",local_30);
  if (param_1 < 3) {
    local_40 = "";
  }
  else {
    local_40 = *(char **)(param_2 + 0x10);
  }
  _init_io(&DAT_1000084d8,*(undefined8 *)PTR____stdoutp_100004010,"wb",local_40);
  _parse();
  _prt_ast();
  return 0;
}



void ___vsprintf_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003bd8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____vsprintf_chk_100004018)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _atoi(char *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003be4. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__atoi_100004020)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _calloc(size_t param_1,size_t param_2)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003bf0. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__calloc_100004028)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _exit(int param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003bfc. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__exit_100004030)(param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fgetc(FILE *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003c08. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fgetc_100004038)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

FILE * _fopen(char *param_1,char *param_2)

{
  FILE *pFVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003c14. Too many branches
                    // WARNING: Treating indirect jump as call
  pFVar1 = (FILE *)(*(code *)PTR__fopen_100004040)();
  return pFVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _isspace(int _c)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003c20. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__isspace_100004048)(_c);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003c2c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004050)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _realloc(void *param_1,size_t param_2)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003c38. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__realloc_100004058)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _strcmp(char *param_1,char *param_2)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003c44. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__strcmp_100004060)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * _strdup(char *param_1)

{
  char *pcVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003c50. Too many branches
                    // WARNING: Treating indirect jump as call
  pcVar1 = (char *)(*(code *)PTR__strdup_100004068)();
  return pcVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t _strlen(char *param_1)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003c5c. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__strlen_100004070)();
  return sVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * _strtok(char *param_1,char *param_2)

{
  char *pcVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003c68. Too many branches
                    // WARNING: Treating indirect jump as call
  pcVar1 = (char *)(*(code *)PTR__strtok_100004078)();
  return pcVar1;
}


