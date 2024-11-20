#include "parsing-rpn-calculator-algorithm-1.h"



void _die(void)

{
  _fprintf(*(FILE **)PTR____stderrp_100004010,"%s");
                    // WARNING: Subroutine does not return
  _abort();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _push(undefined8 param_1)

{
  long lVar1;
  
  if (0xff < __depth) {
    _die("stack overflow\n");
  }
  lVar1 = (long)__depth;
  __depth = __depth + 1;
  *(undefined8 *)(&_stack + lVar1 * 8) = param_1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined  [16] _pop(void)

{
  undefined auVar1 [16];
  
  if (__depth == 0) {
    _die("stack underflow\n");
  }
  __depth = __depth + -1;
  auVar1._0_8_ = *(ulong *)(&_stack + (long)__depth * 8);
  auVar1._8_8_ = 0;
  return auVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _rpn(char *param_1)

{
  int iVar1;
  char *local_38;
  int local_2c;
  double local_28;
  double local_20;
  char *local_18;
  
  local_18 = param_1;
  local_18 = _strtok(param_1," \t\n\r\f");
  while (local_18 != (char *)0x0) {
    local_20 = _strtod(local_18,&local_38);
    if (local_18 < local_38) {
      iVar1 = _printf(" :");
      _push(local_20,iVar1);
    }
    else if (*local_18 == '+') {
      iVar1 = _printf("%c:");
      local_28 = (double)_pop(iVar1);
      local_20 = (double)_pop();
      _push(local_20 + local_28);
    }
    else if (*local_18 == '-') {
      iVar1 = _printf("%c:");
      local_28 = (double)_pop(iVar1);
      local_20 = (double)_pop();
      _push(local_20 - local_28);
    }
    else if (*local_18 == '*') {
      iVar1 = _printf("%c:");
      local_28 = (double)_pop(iVar1);
      local_20 = (double)_pop();
      _push(local_20 * local_28);
    }
    else if (*local_18 == '/') {
      iVar1 = _printf("%c:");
      local_28 = (double)_pop(iVar1);
      local_20 = (double)_pop();
      _push(local_20 / local_28);
    }
    else if (*local_18 == '^') {
      iVar1 = _printf("%c:");
      local_28 = (double)_pop(iVar1);
      local_20 = (double)_pop();
      _pow(local_20,local_28);
      _push();
    }
    else {
      _fprintf(*(FILE **)PTR____stderrp_100004010,"\'%c\': ");
      _die("unknown oeprator\n");
    }
    local_2c = __depth;
    while (local_2c != 0) {
      local_2c = local_2c + -1;
      _printf(" %g");
    }
    local_2c = local_2c + -1;
    _putchar(10);
    local_18 = _strtok((char *)0x0," \t\n\r\f");
  }
  if (__depth != 1) {
    _die("stack leftover\n");
  }
  _pop();
  return;
}



undefined8 entry(void)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)PTR____stack_chk_guard_100004008;
  _rpn();
  iVar1 = _printf("%g\n");
  if (*(long *)PTR____stack_chk_guard_100004008 != lVar2) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(iVar1);
  }
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003ed0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _abort(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003edc. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__abort_100004018)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fprintf(FILE *param_1,char *param_2,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ee8. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fprintf_100004020)((int)param_1);
  return iVar1;
}



void _pow(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003ef4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__pow_100004028)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f00. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004030)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _putchar(int param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f0c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__putchar_100004038)(param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

double _strtod(char *param_1,char **param_2)

{
  double dVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f18. Too many branches
                    // WARNING: Treating indirect jump as call
  dVar1 = (double)(*(code *)PTR__strtod_100004040)();
  return dVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * _strtok(char *param_1,char *param_2)

{
  char *pcVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f24. Too many branches
                    // WARNING: Treating indirect jump as call
  pcVar1 = (char *)(*(code *)PTR__strtok_100004048)();
  return pcVar1;
}


