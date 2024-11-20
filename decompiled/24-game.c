#include "24-game.h"



void _gen_digits(void)

{
  int iVar1;
  undefined4 local_14;
  
  for (local_14 = 0; local_14 < 4; local_14 = local_14 + 1) {
    iVar1 = _rand();
    *(int *)((long)local_14 * 0x20 + 0x1000080c4) = iVar1 % 9 + 1;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _reset(void)

{
  int local_4;
  
  __msg = 0;
  __pos = 0;
  __pool_ptr = 0;
  for (local_4 = 0; local_4 < 8; local_4 = local_4 + 1) {
    *(undefined4 *)(&_pool + (long)local_4 * 0x20) = 0;
    *(undefined8 *)((long)local_4 * 0x20 + 0x100008160) = 0;
    *(undefined8 *)((long)local_4 * 0x20 + 0x100008158) = 0;
  }
  for (local_4 = 0; local_4 < 4; local_4 = local_4 + 1) {
    *(undefined4 *)((long)local_4 * 0x20 + 0x1000080c8) = 0;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _bail(undefined8 param_1)

{
  __msg = param_1;
                    // WARNING: Subroutine does not return
  _longjmp((int *)&_ctx,1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined * _new_expr(void)

{
  long lVar1;
  undefined *local_8;
  
  if (__pool_ptr < 8) {
    lVar1 = (long)__pool_ptr;
    __pool_ptr = __pool_ptr + 1;
    local_8 = &_pool + lVar1 * 0x20;
  }
  else {
    local_8 = (undefined *)0x0;
  }
  return local_8;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

long _next_tok(void)

{
  int iVar1;
  
  while (iVar1 = _isspace((int)(char)(&_str)[__pos]), iVar1 != 0) {
    __pos = __pos + 1;
  }
  return (long)(char)(&_str)[__pos];
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int _take(void)

{
  int local_4;
  
  if ((&_str)[__pos] == '\0') {
    local_4 = 0;
  }
  else {
    __pos = __pos + 1;
    local_4 = __pos;
  }
  return local_4;
}



undefined4 * _get_expr(void)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 *local_30;
  
  local_30 = (undefined4 *)_get_term();
  if (local_30 == (undefined4 *)0x0) {
    _bail("Expected term");
  }
  while (iVar1 = _next_tok(), iVar1 == 0x2b || iVar1 == 0x2d) {
    iVar2 = _take();
    if (iVar2 == 0) {
      _bail("Unexpected end of input");
    }
    lVar3 = _get_term();
    if (lVar3 == 0) {
      _bail("Expected term");
    }
    puVar4 = (undefined4 *)_new_expr();
    uVar5 = 2;
    if (iVar1 != 0x2b) {
      uVar5 = 3;
    }
    *puVar4 = uVar5;
    *(undefined4 **)(puVar4 + 4) = local_30;
    *(long *)(puVar4 + 6) = lVar3;
    local_30 = puVar4;
  }
  return local_30;
}



undefined4 * _get_term(void)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 *local_30;
  
  local_30 = (undefined4 *)_get_fact();
  while (iVar1 = _next_tok(), iVar1 == 0x2a || iVar1 == 0x2f) {
    iVar2 = _take();
    if (iVar2 == 0) {
      _bail("Unexpected end of input");
    }
    uVar3 = _get_fact();
    puVar4 = (undefined4 *)_new_expr();
    uVar5 = 4;
    if (iVar1 != 0x2a) {
      uVar5 = 5;
    }
    *puVar4 = uVar5;
    *(undefined4 **)(puVar4 + 4) = local_30;
    *(undefined8 *)(puVar4 + 6) = uVar3;
    local_30 = puVar4;
  }
  return local_30;
}



undefined4 * _get_digit(void)

{
  int iVar1;
  undefined4 *puVar2;
  int local_1c;
  
  iVar1 = _next_tok();
  if ((0x2f < iVar1) && (iVar1 < 0x3a)) {
    _take();
    puVar2 = (undefined4 *)_new_expr();
    *puVar2 = 1;
    puVar2[1] = iVar1 + -0x30;
    for (local_1c = 0; local_1c < 4; local_1c = local_1c + 1) {
      if ((*(int *)((long)local_1c * 0x20 + 0x1000080c4) == puVar2[1]) &&
         (*(int *)((long)local_1c * 0x20 + 0x1000080c8) == 0)) {
        *(undefined4 *)((long)local_1c * 0x20 + 0x1000080c8) = 1;
        return puVar2;
      }
    }
    _bail("Invalid digit");
  }
  return (undefined4 *)0x0;
}



long _get_fact(void)

{
  int iVar1;
  long local_18;
  
  local_18 = _get_digit();
  if (local_18 == 0) {
    iVar1 = _next_tok();
    if (iVar1 == 0x28) {
      _take();
      local_18 = _get_expr();
      iVar1 = _next_tok();
      if (iVar1 != 0x29) {
        _bail("Unbalanced parens");
      }
      _take();
    }
    else {
      local_18 = 0;
    }
  }
  return local_18;
}



undefined8 _parse(void)

{
  int iVar1;
  undefined8 uVar2;
  int local_14;
  
  uVar2 = _get_expr();
  iVar1 = _next_tok();
  if (iVar1 != 0) {
    _bail("Trailing garbage");
  }
  for (local_14 = 0; local_14 < 4; local_14 = local_14 + 1) {
    if (*(int *)((long)local_14 * 0x20 + 0x1000080c8) == 0) {
      _bail("Not all digits are used");
    }
  }
  return uVar2;
}



int _gcd(int param_1,int param_2)

{
  int iVar1;
  undefined4 local_8;
  undefined4 local_4;
  
  local_8 = param_2;
  local_4 = param_1;
  while (local_4 != 0) {
    iVar1 = 0;
    if (local_4 != 0) {
      iVar1 = local_8 / local_4;
    }
    iVar1 = local_8 - iVar1 * local_4;
    local_8 = local_4;
    local_4 = iVar1;
  }
  return local_8;
}



void _eval_tree(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int *local_20;
  int *local_18;
  
  if (*param_1 == 1) {
    param_2[1] = param_1[1];
    *param_2 = 1;
  }
  else {
    local_20 = param_2;
    local_18 = param_1;
    _eval_tree(*(undefined8 *)(param_1 + 4),&local_28);
    _eval_tree(*(undefined8 *)(local_18 + 6),&local_30);
    switch(*local_18) {
    case 2:
      local_20[1] = local_24 * local_30 + local_28 * local_2c;
      *local_20 = local_28 * local_30;
      break;
    case 3:
      local_20[1] = local_24 * local_30 - local_28 * local_2c;
      *local_20 = local_28 * local_30;
      break;
    case 4:
      local_20[1] = local_24 * local_2c;
      *local_20 = local_28 * local_30;
      break;
    case 5:
      local_20[1] = local_24 * local_30;
      *local_20 = local_28 * local_2c;
    }
    iVar2 = _gcd(*local_20,local_20[1]);
    if (iVar2 != 0) {
      iVar1 = 0;
      if (iVar2 != 0) {
        iVar1 = *local_20 / iVar2;
      }
      *local_20 = iVar1;
      iVar1 = 0;
      if (iVar2 != 0) {
        iVar1 = local_20[1] / iVar2;
      }
      local_20[1] = iVar1;
    }
  }
  return;
}



void _get_input(void)

{
  int local_14;
  
  while( true ) {
    do {
      _reset();
      _printf("\nAvailable digits are:");
      for (local_14 = 0; local_14 < 4; local_14 = local_14 + 1) {
        _printf(" %d");
      }
      _printf(
             ". Type an expression and I\'ll check it for you, or make new numbers.\nYour choice? [Expr/n/q] "
             );
      for (local_14 = 0; local_14 < 0x40; local_14 = local_14 + 1) {
        (&_str)[local_14] = 10;
      }
      _fgets(&_str,0x40,*(FILE **)PTR____stdinp_100004000);
    } while (_str == '\0');
    if (DAT_10000828f != '\n') {
      _bail("string too long");
    }
    for (local_14 = 0; local_14 < 0x40; local_14 = local_14 + 1) {
      if ((&_str)[local_14] == '\n') {
        (&_str)[local_14] = 0;
      }
    }
    if (_str == 'q') break;
    if (_str != 'n') {
      return;
    }
    _gen_digits();
  }
  _printf("Bye\n");
                    // WARNING: Subroutine does not return
  _exit(0);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void entry(void)

{
  int iVar1;
  uint uVar2;
  time_t tVar3;
  ulong uVar4;
  undefined8 uVar5;
  int local_1c;
  int local_18;
  undefined4 local_14;
  
  local_14 = 0;
  tVar3 = _time((time_t *)0x0);
  _srand((uint)tVar3);
  uVar4 = _gen_digits();
  do {
    while( true ) {
      _get_input(uVar4);
      iVar1 = _setjmp((int *)&_ctx);
      if (__msg == 0) break;
      uVar2 = _printf("%s at \'%.*s\'\n");
      uVar4 = (ulong)uVar2;
    }
    uVar5 = _parse(iVar1);
    _eval_tree(uVar5,&local_1c);
    if (local_1c == 0) {
      _bail("Divide by zero");
    }
    if ((local_1c == 1) && (local_18 == 0x18)) {
      uVar2 = _printf("You got 24.  Very good.\n");
    }
    else {
      if (local_1c == 1) {
        _printf("Eval to: %d, ");
      }
      else {
        _printf("Eval to: %d/%d, ");
      }
      uVar2 = _printf("no good.  Try again.\n");
    }
    uVar4 = (ulong)uVar2;
  } while( true );
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _exit(int param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003dac. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__exit_100004008)(param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * _fgets(char *param_1,int param_2,FILE *param_3)

{
  char *pcVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003db8. Too many branches
                    // WARNING: Treating indirect jump as call
  pcVar1 = (char *)(*(code *)PTR__fgets_100004010)(param_1,param_2);
  return pcVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _isspace(int _c)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003dc4. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__isspace_100004018)(_c);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _longjmp(int *param_1,int param_2)

{
                    // WARNING: Could not recover jumptable at 0x000100003dd0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__longjmp_100004020)(param_1,param_2);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ddc. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004028)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _rand(void)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003de8. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__rand_100004030)();
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _setjmp(int *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003df4. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__setjmp_100004038)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _srand(uint param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003e00. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__srand_100004040)(param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

time_t _time(time_t *param_1)

{
  time_t tVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e0c. Too many branches
                    // WARNING: Treating indirect jump as call
  tVar1 = (*(code *)PTR__time_100004048)();
  return tVar1;
}


