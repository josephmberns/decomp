#include "15-puzzle-game-2.h"



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 _Game_update(uint param_1)

{
  int iVar1;
  int iVar2;
  undefined4 local_44;
  int local_40 [10];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  local_40[6] = -1;
  local_40[7] = 1;
  local_40[4] = 0;
  local_40[5] = 0;
  local_40[2] = 0;
  local_40[3] = 0;
  local_40[0] = -1;
  local_40[1] = 1;
  iVar1 = __holeRow + local_40[param_1];
  iVar2 = __holeCollumn + local_40[(ulong)param_1 + 4];
  if ((((iVar1 < 0) || (3 < iVar1)) || (iVar2 < 0)) || (3 < iVar2)) {
    local_44 = 0;
  }
  else {
    *(undefined4 *)(&_cells + (long)__holeCollumn * 4 + (long)__holeRow * 0x10) =
         *(undefined4 *)(&_cells + (long)iVar2 * 4 + (long)iVar1 * 0x10);
    *(undefined4 *)(&_cells + (long)iVar2 * 4 + (long)iVar1 * 0x10) = 0;
    local_44 = 1;
    __holeCollumn = iVar2;
    __holeRow = iVar1;
  }
  if (*(long *)PTR____stack_chk_guard_100004008 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail();
  }
  return local_44;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _Game_setup(void)

{
  int iVar1;
  int local_1c;
  int local_18;
  int local_14;
  
  for (local_14 = 0; local_14 < 4; local_14 = local_14 + 1) {
    for (local_18 = 0; local_18 < 4; local_18 = local_18 + 1) {
      *(int *)(&_cells + (long)local_18 * 4 + (long)local_14 * 0x10) = local_18 + local_14 * 4 + 1;
    }
  }
  _DAT_10000803c = 0;
  __holeRow = 3;
  __holeCollumn = 3;
  for (local_1c = 0; local_1c < 100; local_1c = local_1c + iVar1) {
    iVar1 = _rand();
    iVar1 = _Game_update(iVar1 % 4);
  }
  return;
}



undefined4 _Game_isFinished(void)

{
  bool bVar1;
  int local_10;
  int local_c;
  int local_8;
  
  local_10 = 1;
  local_8 = 0;
  do {
    if (3 < local_8) {
      return 1;
    }
    for (local_c = 0; local_c < 4; local_c = local_c + 1) {
      if ((local_10 < 0x10) &&
         (bVar1 = *(int *)(&_cells + (long)local_c * 4 + (long)local_8 * 0x10) != local_10,
         local_10 = local_10 + 1, bVar1)) {
        return 0;
      }
    }
    local_8 = local_8 + 1;
  } while( true );
}



int _View_showBoard(void)

{
  char *pcVar1;
  int iVar2;
  int local_18;
  int local_14;
  
  _putchar(10);
  for (local_14 = 0; local_14 < 4; local_14 = local_14 + 1) {
    for (local_18 = 0; local_18 < 4; local_18 = local_18 + 1) {
      if (*(int *)(&_cells + (long)local_18 * 4 + (long)local_14 * 0x10) == 0) {
        pcVar1 = " %2s ";
        if (local_18 == 3) {
          pcVar1 = " %2s \n";
        }
        _printf(pcVar1);
      }
      else {
        pcVar1 = " %2d ";
        if (local_18 == 3) {
          pcVar1 = " %2d \n";
        }
        _printf(pcVar1);
      }
    }
  }
  iVar2 = _putchar(10);
  return iVar2;
}



int _View_displayMessage(void)

{
  int iVar1;
  
  iVar1 = _printf("\n%s\n");
  return iVar1;
}



undefined4 _Controller_getMove(void)

{
  int iVar1;
  int iVar2;
  
  while( true ) {
    _printf("%s");
    iVar1 = _getchar();
    do {
      iVar2 = _getchar();
    } while (iVar2 != 10);
    if (iVar1 == 0x1b) {
                    // WARNING: Subroutine does not return
      _exit(0);
    }
    if (iVar1 == 100) {
      return 0;
    }
    if (iVar1 == 0x6c) break;
    if (iVar1 == 0x72) {
      return 2;
    }
    if (iVar1 == 0x75) {
      return 1;
    }
  }
  return 3;
}



int _Controller_pause(void)

{
  int iVar1;
  
  iVar1 = _getchar();
  return iVar1;
}



undefined8 entry(void)

{
  int iVar1;
  time_t tVar2;
  
  tVar2 = _time((time_t *)0x0);
  _srand((uint)tVar2);
  do {
    _Game_setup();
    iVar1 = _Game_isFinished();
  } while (iVar1 != 0);
  _View_showBoard();
  while( true ) {
    iVar1 = _Game_isFinished();
    if (iVar1 != 0) break;
    _Controller_getMove();
    _Game_update();
    _View_showBoard();
  }
  _View_displayMessage("You win");
  _Controller_pause();
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003ed8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _exit(int param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003ee4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__exit_100004010)(param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _getchar(void)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ef0. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__getchar_100004018)();
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003efc. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004020)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _putchar(int param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f08. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__putchar_100004028)(param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _rand(void)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f14. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__rand_100004030)();
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _srand(uint param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f20. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__srand_100004038)(param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

time_t _time(time_t *param_1)

{
  time_t tVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f2c. Too many branches
                    // WARNING: Treating indirect jump as call
  tVar1 = (*(code *)PTR__time_100004040)();
  return tVar1;
}


