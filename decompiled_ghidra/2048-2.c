#include "2048-2.h"



void _remove_whitespace_horizontaly(long param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 local_14;
  
  for (local_14 = param_3; local_14 < 3; local_14 = local_14 + 1) {
    uVar1 = *(undefined4 *)(param_1 + (long)param_2 * 0x10 + (long)local_14 * 4);
    *(undefined4 *)(param_1 + (long)param_2 * 0x10 + (long)local_14 * 4) =
         *(undefined4 *)(param_1 + (long)param_2 * 0x10 + (long)(local_14 + 1) * 4);
    *(undefined4 *)(param_1 + (long)param_2 * 0x10 + (long)(local_14 + 1) * 4) = uVar1;
  }
  return;
}



void _remove_whitespace_verticaly(long param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 local_14;
  
  for (local_14 = param_3; local_14 < 3; local_14 = local_14 + 1) {
    uVar1 = *(undefined4 *)(param_1 + (long)local_14 * 0x10 + (long)param_2 * 4);
    *(undefined4 *)(param_1 + (long)local_14 * 0x10 + (long)param_2 * 4) =
         *(undefined4 *)(param_1 + (long)(local_14 + 1) * 0x10 + (long)param_2 * 4);
    *(undefined4 *)(param_1 + (long)(local_14 + 1) * 0x10 + (long)param_2 * 4) = uVar1;
  }
  return;
}



void _add_tiles_horizontaly(long param_1)

{
  int *piVar1;
  int local_24;
  int local_20;
  int local_1c;
  
  for (local_1c = 0; local_1c < 4; local_1c = local_1c + 1) {
    local_24 = 0;
    for (local_20 = 0; local_20 < 3 && local_24 != 4; local_20 = local_20 + 1) {
      if (*(int *)(param_1 + (long)local_1c * 0x10 + (long)local_20 * 4) == 0) {
        _remove_whitespace_horizontaly(param_1,local_1c,local_20);
        local_20 = local_20 + -1;
        local_24 = local_24 + 1;
      }
      else if (*(int *)(param_1 + (long)local_1c * 0x10 + (long)(local_20 + 1) * 4) == 0) {
        *(undefined4 *)(param_1 + (long)local_1c * 0x10 + (long)(local_20 + 1) * 4) =
             *(undefined4 *)(param_1 + (long)local_1c * 0x10 + (long)local_20 * 4);
        *(undefined4 *)(param_1 + (long)local_1c * 0x10 + (long)local_20 * 4) = 0;
        local_20 = local_20 + -1;
      }
      else if (*(int *)(param_1 + (long)local_1c * 0x10 + (long)local_20 * 4) ==
               *(int *)(param_1 + (long)local_1c * 0x10 + (long)(local_20 + 1) * 4)) {
        piVar1 = (int *)(param_1 + (long)local_1c * 0x10 + (long)local_20 * 4);
        *piVar1 = *piVar1 + *(int *)(param_1 + (long)local_1c * 0x10 + (long)(local_20 + 1) * 4);
        *(undefined4 *)(param_1 + (long)local_1c * 0x10 + (long)(local_20 + 1) * 4) = 0;
      }
    }
  }
  return;
}



void _add_tiles_verticaly(long param_1)

{
  int *piVar1;
  int local_24;
  int local_20;
  int local_1c;
  
  for (local_1c = 0; local_1c < 4; local_1c = local_1c + 1) {
    local_24 = 0;
    for (local_20 = 0; local_20 < 3 && local_24 != 4; local_20 = local_20 + 1) {
      if (*(int *)(param_1 + (long)local_20 * 0x10 + (long)local_1c * 4) == 0) {
        _remove_whitespace_verticaly(param_1,local_1c,local_20);
        local_20 = local_20 + -1;
        local_24 = local_24 + 1;
      }
      else if (*(int *)(param_1 + (long)(local_20 + 1) * 0x10 + (long)local_1c * 4) == 0) {
        *(undefined4 *)(param_1 + (long)(local_20 + 1) * 0x10 + (long)local_1c * 4) =
             *(undefined4 *)(param_1 + (long)local_20 * 0x10 + (long)local_1c * 4);
        *(undefined4 *)(param_1 + (long)local_20 * 0x10 + (long)local_1c * 4) = 0;
        local_20 = local_20 + -1;
      }
      else if (*(int *)(param_1 + (long)local_20 * 0x10 + (long)local_1c * 4) ==
               *(int *)(param_1 + (long)(local_20 + 1) * 0x10 + (long)local_1c * 4)) {
        piVar1 = (int *)(param_1 + (long)local_20 * 0x10 + (long)local_1c * 4);
        *piVar1 = *piVar1 + *(int *)(param_1 + (long)(local_20 + 1) * 0x10 + (long)local_1c * 4);
        *(undefined4 *)(param_1 + (long)(local_20 + 1) * 0x10 + (long)local_1c * 4) = 0;
      }
    }
  }
  return;
}



int _print_board(void)

{
  int iVar1;
  int local_20;
  int local_1c;
  
  for (local_1c = 0; local_1c < 4; local_1c = local_1c + 1) {
    _printf("\n");
    for (local_20 = 0; local_20 < 4; local_20 = local_20 + 1) {
      _printf("%5i");
    }
  }
  iVar1 = _printf("\n");
  return iVar1;
}



void _reverse_board(char *param_1,long param_2)

{
  undefined4 uVar1;
  int iVar2;
  int local_2c;
  int local_28;
  int local_24;
  
  iVar2 = _strcmp(param_1,"right");
  if (iVar2 == 0) {
    for (local_24 = 0; local_24 < 4; local_24 = local_24 + 1) {
      local_2c = 3;
      for (local_28 = 0; local_28 < 2; local_28 = local_28 + 1) {
        uVar1 = *(undefined4 *)(param_2 + (long)local_24 * 0x10 + (long)local_28 * 4);
        *(undefined4 *)(param_2 + (long)local_24 * 0x10 + (long)local_28 * 4) =
             *(undefined4 *)(param_2 + (long)local_24 * 0x10 + (long)local_2c * 4);
        *(undefined4 *)(param_2 + (long)local_24 * 0x10 + (long)local_2c * 4) = uVar1;
        local_2c = local_2c + -1;
      }
    }
  }
  else {
    iVar2 = _strcmp(param_1,"down");
    if (iVar2 == 0) {
      for (local_24 = 0; local_24 < 4; local_24 = local_24 + 1) {
        local_2c = 3;
        for (local_28 = 0; local_28 < 2; local_28 = local_28 + 1) {
          uVar1 = *(undefined4 *)(param_2 + (long)local_28 * 0x10 + (long)local_24 * 4);
          *(undefined4 *)(param_2 + (long)local_28 * 0x10 + (long)local_24 * 4) =
               *(undefined4 *)(param_2 + (long)local_2c * 0x10 + (long)local_24 * 4);
          *(undefined4 *)(param_2 + (long)local_2c * 0x10 + (long)local_24 * 4) = uVar1;
          local_2c = local_2c + -1;
        }
      }
    }
  }
  return;
}



int _check_board(long param_1)

{
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_14 = 0;
  local_18 = 0;
  for (local_c = 0; local_c < 4; local_c = local_c + 1) {
    for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
      if (*(int *)(param_1 + (long)local_c * 0x10 + (long)local_10 * 4) == 0x800) {
        local_14 = -1;
      }
      else if (*(int *)(param_1 + (long)local_c * 0x10 + (long)local_10 * 4) == 0) {
        local_18 = local_18 + 1;
      }
    }
  }
  if (local_14 == -1) {
    local_1c = local_14;
  }
  else {
    local_1c = local_18;
  }
  return local_1c;
}



void _generate_random(long param_1,int param_2)

{
  int iVar1;
  time_t tVar2;
  undefined4 uVar3;
  int local_28;
  int local_24;
  int local_20;
  
  tVar2 = _time((time_t *)0x0);
  _srand((uint)tVar2);
  local_28 = _rand();
  iVar1 = 0;
  if (param_2 != 0) {
    iVar1 = local_28 / param_2;
  }
  local_28 = local_28 - iVar1 * param_2;
  iVar1 = _rand();
  uVar3 = 4;
  if (iVar1 % 9 != 4) {
    uVar3 = 2;
  }
  local_20 = 0;
  do {
    if (3 < local_20) {
      return;
    }
    for (local_24 = 0; local_24 < 4; local_24 = local_24 + 1) {
      if ((*(int *)(param_1 + (long)local_20 * 0x10 + (long)local_24 * 4) == 0) && (local_28 != 0))
      {
        local_28 = local_28 + -1;
      }
      else if ((*(int *)(param_1 + (long)local_20 * 0x10 + (long)local_24 * 4) == 0) &&
              (local_28 == 0)) {
        *(undefined4 *)(param_1 + (long)local_20 * 0x10 + (long)local_24 * 4) = uVar3;
        return;
      }
    }
    local_20 = local_20 + 1;
  } while( true );
}



undefined4 _play_game(undefined8 param_1)

{
  int iVar1;
  undefined4 local_70;
  char acStack_69 [81];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  _printf(
         "this is the 2048 game\nThe goal of this game is make a tile reach the value of 2048\nThe board starts of with only one occupied tile.\nOn each round a new tile gets added with the value of 2\nor at 10%% of the times with the value of 4\nIf you run out of tiles you lose\nThere are 4 movements you can supply to the game\nright, left, up, and down.\nFor each of this movements the tiles move to the direction specified\nIf two tiles have the same value the get added up just once.\nIf 2 occupied tiles share the same row or column but are seperated by empty tiles\nthen the occupied tiles travel along the empty tiles stacking in the direction\nthey were directed\nFor a more visual explanation you can check the wikipedia entry\n if you search for 2058 board game\nHere we go\n"
         );
  _print_board(param_1);
  do {
    while( true ) {
      _printf("(enter: left,right,up,down,exit)>> ");
      _scanf("%s");
      iVar1 = _strcmp(acStack_69,"down");
      if (iVar1 != 0) break;
      _reverse_board(acStack_69,param_1);
      _add_tiles_verticaly(param_1);
      iVar1 = _check_board(param_1);
      if (iVar1 == -1) {
        local_70 = 0xffffffff;
        goto LAB_1000039ec;
      }
      if (iVar1 == 0) {
        local_70 = 0;
        goto LAB_1000039ec;
      }
      _generate_random(param_1,iVar1);
      _reverse_board(acStack_69,param_1);
LAB_1000039e0:
      _print_board(param_1);
    }
    iVar1 = _strcmp(acStack_69,"up");
    if (iVar1 == 0) {
      _add_tiles_verticaly(param_1);
      iVar1 = _check_board(param_1);
      if (iVar1 == -1) {
        local_70 = 0xffffffff;
      }
      else {
        if (iVar1 != 0) {
          _generate_random(param_1,iVar1);
          goto LAB_1000039e0;
        }
        local_70 = 0;
      }
      goto LAB_1000039ec;
    }
    iVar1 = _strcmp(acStack_69,"right");
    if (iVar1 == 0) {
      _reverse_board(acStack_69,param_1);
      _add_tiles_horizontaly(param_1);
      iVar1 = _check_board(param_1);
      if (iVar1 == -1) {
        local_70 = 0xffffffff;
      }
      else {
        if (iVar1 != 0) {
          _generate_random(param_1,iVar1);
          _reverse_board(acStack_69,param_1);
          goto LAB_1000039e0;
        }
        local_70 = 0;
      }
      goto LAB_1000039ec;
    }
    iVar1 = _strcmp(acStack_69,"left");
    if (iVar1 == 0) {
      _add_tiles_horizontaly(param_1);
      iVar1 = _check_board(param_1);
      if (iVar1 == -1) {
        local_70 = 0xffffffff;
      }
      else {
        if (iVar1 != 0) {
          _generate_random(param_1,iVar1);
          goto LAB_1000039e0;
        }
        local_70 = 0;
      }
      goto LAB_1000039ec;
    }
    iVar1 = _strcmp(acStack_69,"exit");
    if (iVar1 == 0) {
      local_70 = 1;
LAB_1000039ec:
      if (*(long *)PTR____stack_chk_guard_100004008 == local_18) {
        return local_70;
      }
                    // WARNING: Subroutine does not return
      ___stack_chk_fail();
    }
    _printf("Do not recognize this movement please type again\n");
  } while( true );
}



undefined8 entry(void)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  undefined auStack_58 [64];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  _memset(auStack_58,0,0x40);
  _generate_random(auStack_58,0x10);
  uVar3 = _play_game(auStack_58);
  iVar1 = (int)uVar3;
  if (iVar1 == -1) {
    uVar2 = _printf("WooooW you did it, Good job!!!\nSee ya later homie\n");
    uVar3 = (ulong)uVar2;
  }
  else if (iVar1 == 0) {
    uVar2 = _printf("Ohh noo, you run out of tiles\nRun me agan to play some more\nByyyeee\n");
    uVar3 = (ulong)uVar2;
  }
  else if (iVar1 == 1) {
    uVar2 = _printf("But you are not done yet!!!\nFine, see you another day\n");
    uVar3 = (ulong)uVar2;
  }
  if (*(long *)PTR____stack_chk_guard_100004008 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(uVar3);
  }
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003b20. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _memset(void *param_1,int param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003b2c. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__memset_100004010)(param_1,param_2);
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003b38. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004018)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _rand(void)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003b44. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__rand_100004020)();
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _scanf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003b50. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__scanf_100004028)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _srand(uint param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003b5c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__srand_100004030)(param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _strcmp(char *param_1,char *param_2)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003b68. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__strcmp_100004038)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

time_t _time(time_t *param_1)

{
  time_t tVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003b74. Too many branches
                    // WARNING: Treating indirect jump as call
  tVar1 = (*(code *)PTR__time_100004040)();
  return tVar1;
}


