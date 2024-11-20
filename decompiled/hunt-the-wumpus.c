#include "hunt-the-wumpus.h"



void _initialize_cave(void)

{
  int iVar1;
  int local_18;
  int local_14;
  
  for (local_14 = 1; local_14 < 0x15; local_14 = local_14 + 1) {
    for (local_18 = 0; local_18 < 3; local_18 = local_18 + 1) {
      *(int *)(&_cave + (long)local_18 * 4 + (long)local_14 * 0x18) =
           (local_14 + local_18) % 0x14 + 1;
    }
    *(undefined4 *)((long)local_14 * 0x18 + 0x10000800c) = 0;
    *(undefined4 *)((long)local_14 * 0x18 + 0x100008010) = 0;
    *(undefined4 *)((long)local_14 * 0x18 + 0x100008014) = 0;
  }
  iVar1 = _rand();
  *(undefined4 *)((long)(iVar1 % 0x14 + 1) * 0x18 + 0x10000800c) = 1;
  for (local_14 = 0; local_14 < 2; local_14 = local_14 + 1) {
    iVar1 = _rand();
    *(undefined4 *)((long)(iVar1 % 0x14 + 1) * 0x18 + 0x100008010) = 1;
    iVar1 = _rand();
    *(undefined4 *)((long)(iVar1 % 0x14 + 1) * 0x18 + 0x100008014) = 1;
  }
  return;
}



int _sense(int param_1)

{
  int iVar1;
  int iVar2;
  int local_18;
  
  iVar2 = _printf("You are in room %d.\n");
  for (local_18 = 0; local_18 < 3; local_18 = local_18 + 1) {
    iVar1 = *(int *)(&_cave + (long)local_18 * 4 + (long)param_1 * 0x18);
    if (*(int *)((long)iVar1 * 0x18 + 0x10000800c) != 0) {
      iVar2 = _printf("You smell something terrible nearby.\n");
    }
    if (*(int *)((long)iVar1 * 0x18 + 0x100008010) != 0) {
      iVar2 = _printf("You hear a rustling.\n");
    }
    if (*(int *)((long)iVar1 * 0x18 + 0x100008014) != 0) {
      iVar2 = _printf("You feel a cold wind blowing from a nearby cavern.\n");
    }
  }
  return iVar2;
}



int _move(int param_1,int param_2)

{
  int iVar1;
  int local_1c;
  
  _printf("Choose an adjacent room to move into: ");
  iVar1 = _scanf("%d");
  if ((local_1c < 1) || (3 < local_1c)) {
    _printf("Invalid choice. Please choose a number between 1 and 3.\n");
    iVar1 = _move(param_1,param_2);
  }
  else {
    *(int *)(ulong)(uint)param_1 =
         *(int *)(&_cave + (long)(local_1c + -1) * 4 + (long)*(int *)(ulong)(uint)param_1 * 0x18);
  }
  return iVar1;
}



ulong _shoot(int param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  int local_2c;
  
  _printf("Choose an adjacent room to shoot into: ");
  _scanf("%d");
  if ((local_2c < 1) || (3 < local_2c)) {
    _printf("Invalid choice. Please choose a number between 1 and 3.\n");
    uVar4 = _shoot(param_1,param_2,param_3);
  }
  else {
    iVar1 = *(int *)(&_cave + (long)(local_2c + -1) * 4 + (long)param_1 * 0x18);
    if (*(int *)((long)iVar1 * 0x18 + 0x10000800c) == 0) {
      iVar3 = _rand();
      if ((iVar3 % 4 == 0) || (*(int *)((long)iVar1 * 0x18 + 0x10000800c) == 0)) {
        uVar2 = _printf("You missed! The Wumpus is still asleep.\n");
        uVar4 = (ulong)uVar2;
        *param_2 = *param_2 + -1;
      }
      else {
        uVar2 = _printf("The Wumpus has woken up and eaten you!\n");
        uVar4 = (ulong)uVar2;
        *param_3 = 1;
      }
    }
    else {
      uVar2 = _printf("Congratulations! You\'ve killed the Wumpus!\n");
      uVar4 = (ulong)uVar2;
      *param_3 = 1;
    }
  }
  return uVar4;
}



undefined8 entry(void)

{
  time_t tVar1;
  int extraout_w1;
  int iVar2;
  int local_24;
  int local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_14 = 0;
  tVar1 = _time((time_t *)0x0);
  _srand((uint)tVar1);
  _initialize_cave();
  local_18 = 1;
  local_1c = 5;
  local_20 = 0;
  _printf("Welcome to Hunt the Wumpus!\n");
  while (local_20 == 0) {
    _sense(local_18);
    iVar2 = extraout_w1;
    _printf("Choose your action:\n");
    _printf("1. Move to an adjacent room\n");
    _printf("2. Shoot into an adjacent room\n");
    _printf("Enter your choice (1 or 2): ");
    _scanf("%d");
    if (local_24 == 1) {
      _move((int)&stack0xfffffffffffffff0 + -8,iVar2);
    }
    else if (local_24 == 2) {
      if (local_1c < 1) {
        _printf("You\'re out of arrows! You lost the game.\n");
        local_20 = 1;
      }
      else {
        _shoot(local_18,&local_1c,&local_20);
      }
    }
    else {
      _printf("Invalid choice. Please choose 1 or 2.\n");
    }
  }
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003d08. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _rand(void)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003d14. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__rand_100004008)();
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _scanf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003d20. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__scanf_100004010)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _srand(uint param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003d2c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__srand_100004018)(param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

time_t _time(time_t *param_1)

{
  time_t tVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003d38. Too many branches
                    // WARNING: Treating indirect jump as call
  tVar1 = (*(code *)PTR__time_100004020)();
  return tVar1;
}


