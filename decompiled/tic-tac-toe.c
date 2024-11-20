#include "tic-tac-toe.h"



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int _check_winner(void)

{
  int local_8;
  int local_4;
  
  local_8 = 0;
  while( true ) {
    if (2 < local_8) {
      if (_DAT_100008010 == 0) {
        local_4 = 0;
      }
      else if ((_DAT_100008010 == __b) && (_DAT_100008020 == __b)) {
        local_4 = __b;
      }
      else if ((_DAT_100008010 == _DAT_100008018) && (_DAT_100008008 == _DAT_100008010)) {
        local_4 = _DAT_100008010;
      }
      else {
        local_4 = 0;
      }
      return local_4;
    }
    if (((*(int *)(&_b + (long)local_8 * 0xc) != 0) &&
        (*(int *)((long)local_8 * 0xc + 0x100008004) == *(int *)(&_b + (long)local_8 * 0xc))) &&
       (*(int *)(&DAT_100008008 + (long)local_8 * 0xc) == *(int *)(&_b + (long)local_8 * 0xc)))
    break;
    if (((*(int *)(&_b + (long)local_8 * 4) != 0) &&
        (*(int *)((long)local_8 * 4 + 0x10000800c) == *(int *)(&_b + (long)local_8 * 4))) &&
       (*(int *)(&DAT_100008018 + (long)local_8 * 4) == *(int *)(&_b + (long)local_8 * 4))) {
      return *(int *)(&_b + (long)local_8 * 4);
    }
    local_8 = local_8 + 1;
  }
  return *(int *)(&_b + (long)local_8 * 0xc);
}



int _showboard(void)

{
  int iVar1;
  int local_20;
  int local_1c;
  
  local_1c = 0;
  while (local_1c < 3) {
    for (local_20 = 0; local_20 < 3; local_20 = local_20 + 1) {
      _printf("%c ");
    }
    local_1c = local_1c + 1;
    _putchar(10);
  }
  iVar1 = _printf("-----\n");
  return iVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int _test_move(int param_1,int param_2)

{
  int iVar1;
  int local_4c;
  int local_30;
  int local_2c;
  int local_24;
  int local_20;
  int local_14;
  
  local_2c = -1;
  local_30 = 0;
  iVar1 = _check_winner();
  if (iVar1 == 0) {
    for (local_20 = 0; local_20 < 3; local_20 = local_20 + 1) {
      for (local_24 = 0; local_24 < 3; local_24 = local_24 + 1) {
        if (*(int *)(&_b + (long)local_24 * 4 + (long)local_20 * 0xc) == 0) {
          *(int *)(&_b + (long)local_24 * 4 + (long)local_20 * 0xc) = param_1;
          iVar1 = _test_move(-param_1,param_2 + 1);
          iVar1 = -iVar1;
          *(undefined4 *)(&_b + (long)local_24 * 4 + (long)local_20 * 0xc) = 0;
          local_30 = param_1;
          if ((local_2c < iVar1) && (local_2c = iVar1, param_2 == 0)) {
            __best_i = local_20;
            __best_j = local_24;
          }
        }
      }
    }
    if (local_30 == 0) {
      local_4c = 0;
    }
    else {
      local_4c = local_2c;
    }
    local_14 = local_4c;
  }
  else {
    local_14 = -1;
    if (iVar1 == param_1) {
      local_14 = 1;
    }
  }
  return local_14;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

char * _game(uint param_1)

{
  uint uVar1;
  ulong uVar2;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  uint local_1c;
  char *local_18;
  
  for (local_20 = 0; local_20 < 3; local_20 = local_20 + 1) {
    for (local_24 = 0; local_24 < 3; local_24 = local_24 + 1) {
      *(undefined4 *)(&_b + (long)local_24 * 4 + (long)local_20 * 0xc) = 0;
    }
  }
  _printf("Board postions are numbered so:\n1 2 3\n4 5 6\n7 8 9\n");
  uVar1 = _printf("You have O, I have X.\n\n");
  uVar2 = (ulong)uVar1;
  local_28 = 0;
  local_1c = param_1;
  do {
    if (8 < local_28) {
      local_18 = "A draw.\n\n";
      return local_18;
    }
    do {
      do {
        while( true ) {
          if (local_1c == 0) goto LAB_100003d10;
          _printf("your move: ");
          uVar1 = _scanf("%d");
          uVar2 = (ulong)uVar1;
          if (uVar1 != 0) break;
          uVar1 = _scanf("%*s");
          uVar2 = (ulong)uVar1;
        }
        local_2c = local_2c + -1;
      } while ((local_2c < 0) || (8 < local_2c));
    } while (*(int *)(&_b + (long)(local_2c % 3) * 4 + (long)(local_2c / 3) * 0xc) != 0);
    *(undefined4 *)(&_b + (long)(local_2c % 3) * 4 + (long)(local_2c / 3) * 0xc) = 1;
LAB_100003d10:
    if (local_1c == 0) {
      if (local_28 == 0) {
        __best_i = _rand();
        __best_i = __best_i % 3;
        __best_j = _rand();
        __best_j = __best_j % 3;
      }
      else {
        _test_move(0xffffffff,0);
      }
      *(undefined4 *)(&_b + (long)__best_j * 4 + (long)__best_i * 0xc) = 0xffffffff;
      uVar1 = _printf("My move: %d\n");
      uVar2 = (ulong)uVar1;
    }
    _showboard(uVar2);
    uVar2 = _check_winner();
    if ((int)uVar2 != 0) {
      if ((int)uVar2 == 1) {
        return "You win.\n\n";
      }
      return "I win.\n\n";
    }
    local_28 = local_28 + 1;
    local_1c = (uint)(local_1c == 0);
  } while( true );
}



void entry(void)

{
  do {
    _game();
    _printf("%s");
  } while( true );
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003edc. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _putchar(int param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ee8. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__putchar_100004008)(param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _rand(void)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ef4. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__rand_100004010)();
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _scanf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f00. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__scanf_100004018)((int)param_1);
  return iVar1;
}


