#include "rock-paper-scissors-2.h"



int _rand_i(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = 0;
  if (param_1 != 0) {
    iVar1 = 0x7fffffff / param_1;
  }
  iVar1 = 0x7fffffff - (0x7fffffff - iVar1 * param_1);
  do {
    iVar3 = _rand();
  } while (iVar1 <= iVar3);
  iVar2 = 0;
  if (param_1 != 0) {
    iVar2 = iVar1 / param_1;
  }
  iVar1 = 0;
  if (iVar2 != 0) {
    iVar1 = iVar3 / iVar2;
  }
  return iVar1;
}



int _weighed_rand(long param_1,int param_2)

{
  bool bVar1;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_14;
  
  local_2c = 0;
  for (local_28 = 0; local_28 < param_2; local_28 = local_28 + 1) {
    local_2c = local_2c + *(int *)(param_1 + (long)local_28 * 4);
  }
  if (local_2c == 0) {
    local_14 = _rand_i(param_2);
  }
  else {
    local_30 = _rand_i(local_2c);
    local_30 = local_30 + 1;
    local_28 = 0;
    while( true ) {
      bVar1 = false;
      if (local_28 < param_2) {
        local_30 = local_30 - *(int *)(param_1 + (long)local_28 * 4);
        bVar1 = 0 < local_30;
      }
      if (!bVar1) break;
      local_28 = local_28 + 1;
    }
    local_14 = local_28;
  }
  return local_14;
}



undefined8 entry(void)

{
  int iVar1;
  time_t tVar2;
  int local_160;
  int local_15c;
  int local_148 [3];
  char acStack_13b [255];
  undefined auStack_3c [10];
  undefined auStack_32 [10];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100004008;
  local_148[0] = 0;
  local_148[1] = 0;
  local_148[2] = 0;
  _printf("Hello, Welcome to rock-paper-scissors\nBy The Elite Noob\n");
LAB_100003a20:
  do {
    while( true ) {
      _printf("\n\nPlease type in 1 for Rock, 2 For Paper, 3 for Scissors, 4 to quit\n");
      tVar2 = _time((time_t *)0x0);
      _srand((uint)tVar2);
      iVar1 = _weighed_rand(local_148,3);
      local_160 = (iVar1 + 1) % 3;
      _fgets(acStack_13b,0xff,*(FILE **)PTR____stdinp_100004010);
      while (iVar1 = _sscanf(acStack_13b,"%d"), iVar1 != 1) {
        _printf("You have not entered an integer.\n");
        _fgets(acStack_13b,0xff,*(FILE **)PTR____stdinp_100004010);
      }
      if ((local_15c < 5) && (0 < local_15c)) break;
      _printf("Please enter a valid number!\n");
    }
    if (local_160 == 1) {
      ___strcpy_chk(auStack_3c,"Rock",10);
    }
    else if (local_160 == 2) {
      ___strcpy_chk(auStack_3c,"Paper",10);
    }
    else if (local_160 == 3) {
      ___strcpy_chk(auStack_3c,"Scissors",10);
    }
    else {
      _printf("Computer Error, set comp=1\n");
      local_160 = 1;
      ___strcpy_chk(auStack_3c,"Rock",10);
    }
    switch(local_15c) {
    case 1:
      ___strcpy_chk(auStack_32,"Rock",10);
      break;
    case 2:
      ___strcpy_chk(auStack_32,"Paper",10);
      break;
    case 3:
      ___strcpy_chk(auStack_32,"Scissors",10);
      break;
    case 4:
      iVar1 = _printf("Goodbye! Thanks for playing!\n");
      if (*(long *)PTR____stack_chk_guard_100004008 != local_28) {
                    // WARNING: Subroutine does not return
        ___stack_chk_fail(iVar1);
      }
      return 0;
    default:
      goto switchD_100003bec_caseD_4;
    }
    if ((local_15c + 1) % 3 == local_160) {
      _printf("Comp Played: %s\nYou Played: %s\nSorry, You Lost!\n");
    }
    else if (local_160 == local_15c) {
      _printf("Comp Played: %s\nYou Played: %s\nYou Tied :p\n");
    }
    else {
      _printf("Comp Played: %s\nYou Played: %s\nYay, You Won!\n");
    }
    local_148[local_15c + -1] = local_148[local_15c + -1] + 1;
  } while( true );
switchD_100003bec_caseD_4:
  _printf("Error, user number not between 1-4 exiting...");
  goto LAB_100003a20;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003d78. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



void ___strcpy_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003d84. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____strcpy_chk_100004018)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * _fgets(char *param_1,int param_2,FILE *param_3)

{
  char *pcVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003d90. Too many branches
                    // WARNING: Treating indirect jump as call
  pcVar1 = (char *)(*(code *)PTR__fgets_100004020)(param_1,param_2);
  return pcVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003d9c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004028)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _rand(void)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003da8. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__rand_100004030)();
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _srand(uint param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003db4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__srand_100004038)(param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _sscanf(char *param_1,char *param_2,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003dc0. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__sscanf_100004040)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

time_t _time(time_t *param_1)

{
  time_t tVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003dcc. Too many branches
                    // WARNING: Treating indirect jump as call
  tVar1 = (*(code *)PTR__time_100004048)();
  return tVar1;
}


