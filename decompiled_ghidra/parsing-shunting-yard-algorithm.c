#include "parsing-shunting-yard-algorithm.h"



int _display(void)

{
  int iVar1;
  int local_1c;
  
  _printf("\x1b[1;1H\x1b[JText | %s");
  _printf("\nStack| ");
  for (local_1c = 0; local_1c < _l_stack; local_1c = local_1c + 1) {
    _printf("%.*s ");
  }
  _printf("\nQueue| ");
  for (local_1c = 0; local_1c < _l_queue; local_1c = local_1c + 1) {
    _printf("%.*s ");
  }
  _puts("\n\n<press enter>");
  iVar1 = _getchar();
  return iVar1;
}



undefined4 _init(void)

{
  int iVar1;
  int local_18;
  
  local_18 = 0;
  while ((&_pat_ops)[(long)local_18 * 6] != (undefined *)0x0) {
    iVar1 = _regcomp((long)local_18 * 0x30 + 0x100008040,(&_pat_ops)[(long)local_18 * 6],9);
    if (iVar1 != 0) {
      _fprintf(*(FILE **)PTR____stderrp_100004010,"[Error %s] %s\n");
      return 0;
    }
    local_18 = local_18 + 1;
  }
  local_18 = 0;
  while( true ) {
    if ((&_pat_arg)[(long)local_18 * 6] == (undefined *)0x0) {
      return 1;
    }
    iVar1 = _regcomp((long)local_18 * 0x30 + 0x1000081c0,(&_pat_arg)[(long)local_18 * 6],9);
    if (iVar1 != 0) break;
    local_18 = local_18 + 1;
  }
  _fprintf(*(FILE **)PTR____stderrp_100004010,"[Error %s] %s\n");
  return 0;
}



undefined ** _match(char *param_1,long param_2,undefined8 *param_3,long *param_4)

{
  int iVar1;
  undefined local_50 [20];
  int local_3c;
  long *local_38;
  undefined8 *local_30;
  long local_28;
  char *local_20;
  undefined **local_18;
  
  for (local_20 = param_1; *local_20 == ' '; local_20 = local_20 + 1) {
  }
  *param_4 = (long)local_20;
  if (*local_20 == '\0') {
    local_18 = &_pat_eos;
  }
  else {
    local_3c = 0;
    local_38 = param_4;
    local_30 = param_3;
    local_28 = param_2;
    while (*(long *)(local_28 + (long)local_3c * 0x30) != 0) {
      iVar1 = _regexec(local_28 + (long)local_3c * 0x30 + 0x10,local_20,1,local_50,2);
      if (iVar1 == 0) {
        *local_30 = local_20;
        iVar1 = (int)local_50._8_8_ - (int)local_50._0_8_;
        *(int *)(local_30 + 1) = iVar1;
        *local_38 = (long)(local_20 + iVar1);
        return (undefined **)(local_28 + (long)local_3c * 0x30);
      }
      local_3c = local_3c + 1;
    }
    local_18 = (undefined **)0x0;
  }
  return local_18;
}



// WARNING: Type propagation algorithm not settling

bool _parse(char *param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 local_48;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined *local_30;
  undefined **local_28;
  char *local_20 [2];
  
  _l_stack = 0;
  _l_queue = 0;
  _prec_booster = 0;
  local_20[0] = param_1;
  _display(param_1);
LAB_100003790:
  while( true ) {
    if (*local_20[0] == '\0') {
      bVar1 = *(int *)((long)local_28 + 0xc) < 1;
      if (!bVar1) {
        _fprintf(*(FILE **)PTR____stderrp_100004010,"[Error %s] %s\n");
      }
      return bVar1;
    }
    local_28 = (undefined **)_match(local_20[0],&_pat_arg,&local_48,local_20);
    if ((local_28 == (undefined **)0x0) || (local_28 == &_pat_eos)) {
      _fprintf(*(FILE **)PTR____stderrp_100004010,"[Error %s] %s\n");
      return false;
    }
    if (*(int *)((long)local_28 + 0xc) != -1) break;
    _prec_booster = _prec_booster + 100;
  }
  lVar2 = (long)_l_queue;
  _l_queue = _l_queue + 1;
  lVar4 = lVar2 * 0x18;
  *(ulong *)(&DAT_100008288 + lVar4) = CONCAT44(iStack_3c,uStack_40);
  *(undefined8 *)(&_queue + lVar4) = local_48;
  (&DAT_100008290)[lVar2 * 3] = CONCAT44(uStack_34,local_38);
  _display(local_20[0]);
  do {
    local_28 = (undefined **)_match(local_20[0],&_pat_ops,&local_48,local_20);
    if (local_28 == (undefined **)0x0) {
      _fprintf(*(FILE **)PTR____stderrp_100004010,"[Error %s] %s\n");
      return false;
    }
    local_38 = *(undefined4 *)(local_28 + 1);
    iStack_3c = *(int *)((long)local_28 + 0xc);
    if (*(int *)((long)local_28 + 0xc) < 1) {
      if (*(int *)((long)local_28 + 0xc) == -1) {
        if (_prec_booster < 100) {
          _fprintf(*(FILE **)PTR____stderrp_100004010,"[Error %s] %s\n");
          return false;
        }
        iStack_3c = _prec_booster;
      }
    }
    else {
      iStack_3c = *(int *)((long)local_28 + 0xc) + _prec_booster;
    }
    while (_l_stack != 0) {
      lVar2 = (long)_l_stack;
      local_30 = &DAT_100009a68 + lVar2 * 0x18;
      if ((((&DAT_100009a74)[lVar2 * 6] != iStack_3c) || (*(int *)(&DAT_100009a78 + lVar2 * 3) != 1)
          ) && ((int)(&DAT_100009a74)[lVar2 * 6] <= iStack_3c)) break;
      lVar3 = (long)_l_queue;
      _l_queue = _l_queue + 1;
      lVar5 = lVar3 * 0x18;
      _l_stack = _l_stack + -1;
      lVar2 = (long)_l_stack;
      lVar4 = lVar2 * 0x18;
      uVar6 = *(undefined8 *)(&_stack + lVar4);
      *(undefined8 *)(&DAT_100008288 + lVar5) = *(undefined8 *)(&DAT_100009a88 + lVar4);
      *(undefined8 *)(&_queue + lVar5) = uVar6;
      (&DAT_100008290)[lVar3 * 3] = (&DAT_100009a90)[lVar2 * 3];
      _display(local_20[0]);
    }
    if (*(int *)((long)local_28 + 0xc) != -1) break;
    _prec_booster = _prec_booster + -100;
  } while( true );
  if (*(int *)((long)local_28 + 0xc) == 0) {
    _display(local_20[0]);
    if (_prec_booster == 0) {
      return true;
    }
    _fprintf(*(FILE **)PTR____stderrp_100004010,"[Error %s] %s\n");
    return false;
  }
  lVar2 = (long)_l_stack;
  _l_stack = _l_stack + 1;
  lVar4 = lVar2 * 0x18;
  *(ulong *)(&DAT_100009a88 + lVar4) = CONCAT44(iStack_3c,uStack_40);
  *(undefined8 *)(&_stack + lVar4) = local_48;
  (&DAT_100009a90)[lVar2 * 3] = CONCAT44(uStack_34,local_38);
  _display(local_20[0]);
  goto LAB_100003790;
}



undefined4 entry(void)

{
  uint uVar1;
  ulong uVar2;
  int local_60;
  undefined4 local_5c;
  long alStack_58 [8];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  _memcpy(alStack_58,&PTR_s_3___4___2_____1___5_____2___3_100004050,0x40);
  uVar2 = _init();
  if ((int)uVar2 == 0) {
    local_5c = 1;
  }
  else {
    for (local_60 = 0; alStack_58[local_60] != 0; local_60 = local_60 + 1) {
      _printf("Testing string `%s\'   <enter>\n");
      _getchar();
      _parse(alStack_58[local_60]);
      uVar1 = _printf("string `%s\': %s\n\n");
      uVar2 = (ulong)uVar1;
    }
    local_5c = 0;
  }
  if (*(long *)PTR____stack_chk_guard_100004008 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(uVar2);
  }
  return local_5c;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003da8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fprintf(FILE *param_1,char *param_2,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003db4. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fprintf_100004018)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _getchar(void)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003dc0. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__getchar_100004020)();
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _memcpy(void *param_1,void *param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003dcc. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__memcpy_100004028)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003dd8. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004030)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _puts(char *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003de4. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__puts_100004038)((int)param_1);
  return iVar1;
}



void _regcomp(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003df0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__regcomp_100004040)();
  return;
}



void _regexec(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003dfc. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__regexec_100004048)();
  return;
}


