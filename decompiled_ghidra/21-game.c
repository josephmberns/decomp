#include "21-game.h"



int _update(undefined8 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = _printf("%8s:  %d = %d + %d\n\n");
  DAT_100008190 = DAT_100008190 + param_2;
  if (DAT_100008190 == 0x15) {
    iVar1 = _printf("The winner is %s.\n\n");
  }
  return iVar1;
}



undefined4 _ai(void)

{
  undefined4 local_14;
  
  _update("ai",*(undefined4 *)(&DAT_100003f24 + (long)DAT_100008190 * 4));
  return local_14;
}



void _human(void)

{
  bool bVar1;
  int iVar2;
  int local_12c;
  char acStack_128 [256];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100004008;
  while( true ) {
    _printf("enter your move to play (or enter 0 to exit game): ");
    _fgets(acStack_128,0x100,*(FILE **)PTR____stdinp_100004010);
    iVar2 = _sscanf(acStack_128,"%d");
    bVar1 = true;
    if ((((iVar2 == 1) && (bVar1 = false, local_12c != 0)) && (bVar1 = true, 0 < local_12c)) &&
       (bVar1 = true, local_12c < 4)) {
      bVar1 = 0x15 < DAT_100008190 + local_12c;
    }
    if (!bVar1) break;
    _puts("\nYour answer is not a valid choice.\n");
  }
  _putchar(10);
  if (local_12c != 0) {
    _update("human",local_12c);
    if (*(long *)PTR____stack_chk_guard_100004008 == local_28) {
      return;
    }
                    // WARNING: Subroutine does not return
    ___stack_chk_fail();
  }
                    // WARNING: Subroutine does not return
  _exit(0);
}



void entry(void)

{
  int iVar1;
  uint uVar2;
  time_t tVar3;
  ulong uVar4;
  
  tVar3 = _time((time_t *)0x0);
  _srand((uint)tVar3);
  _puts(s_21_Game_21_is_a_two_player_game__100008000);
  do {
    _puts("\n---- NEW GAME ----\n");
    _puts("\nThe running total is currently zero.\n");
    DAT_100008190 = 0;
    iVar1 = _rand();
    if (iVar1 % 2 == 0) {
      uVar2 = _puts("The first move is human move.\n");
      uVar4 = (ulong)uVar2;
    }
    else {
      iVar1 = _puts("The first move is AI move.\n");
      uVar4 = _ai(iVar1);
    }
    while (DAT_100008190 < 0x15) {
      _human(uVar4);
      uVar4 = _ai();
    }
  } while( true );
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003dac. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _exit(int param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003db8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__exit_100004018)(param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * _fgets(char *param_1,int param_2,FILE *param_3)

{
  char *pcVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003dc4. Too many branches
                    // WARNING: Treating indirect jump as call
  pcVar1 = (char *)(*(code *)PTR__fgets_100004020)(param_1,param_2);
  return pcVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003dd0. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004028)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _putchar(int param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ddc. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__putchar_100004030)(param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _puts(char *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003de8. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__puts_100004038)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _rand(void)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003df4. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__rand_100004040)();
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _srand(uint param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003e00. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__srand_100004048)(param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _sscanf(char *param_1,char *param_2,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e0c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__sscanf_100004050)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

time_t _time(time_t *param_1)

{
  time_t tVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e18. Too many branches
                    // WARNING: Treating indirect jump as call
  tVar1 = (*(code *)PTR__time_100004058)();
  return tVar1;
}


