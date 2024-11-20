#include "fibonacci.h"



int _fib(int param_1)

{
  int iVar1;
  int local_14;
  
  if (param_1 < 1) {
    _fprintf(*(FILE **)PTR____stderrp_100004008,"Illegal Argument Is Passed!\n");
                    // WARNING: Subroutine does not return
    _exit(1);
  }
  if (param_1 == 1) {
    local_14 = 0;
  }
  else if (param_1 == 2) {
    local_14 = 1;
  }
  else {
    local_14 = _fib(param_1 + -1);
    iVar1 = _fib(param_1 + -2);
    local_14 = local_14 + iVar1;
  }
  return local_14;
}



int _getInput(void)

{
  int iVar1;
  long lVar2;
  char *local_28;
  char local_1b;
  char local_1a;
  char local_19;
  int local_18;
  int local_14;
  
  do {
    _printf("Please enter a valid number:");
    _fgets(&local_1b,3,*(FILE **)PTR____stdinp_100004010);
    local_18 = 0;
    if (((local_1b != '\n') && (local_1a != '\n')) && (local_19 != '\n')) {
      while (iVar1 = _getchar(), iVar1 != 10) {
        local_18 = local_18 + 1;
      }
    }
    lVar2 = _strtol(&local_1b,&local_28,10);
    local_14 = (int)lVar2;
  } while ((((0 < local_18) || (0x30 < local_14)) || ((*local_28 != '\0' && (*local_28 != '\n'))))
          || (local_28 == &local_1b));
  _printf("\nEntered digit: %d (it might take sometime)\n");
  return local_14;
}



undefined4 entry(void)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_100003ce8();
  _printf("Tests passed...\n");
  iVar1 = _printf(
                 "Enter n to find nth fibonacci element...\nNote: You would be asked to enter input until valid number ( less than or equal to 48 ) is entered.\n"
                 );
  uVar2 = _getInput(iVar1);
  _clock();
  _fib(uVar2);
  _printf("Fibonacci element %d is %u ");
  _clock();
  _printf("in %.3f seconds.\n");
  return 0;
}



void FUN_100003ce8(void)

{
  int iVar1;
  
  iVar1 = _fib(5);
  if (iVar1 != 3) {
                    // WARNING: Subroutine does not return
    ___assert_rtn("test","fibonacci.c",0x5e,"fib(5) == 3");
  }
  iVar1 = _fib(2);
  if (iVar1 != 1) {
                    // WARNING: Subroutine does not return
    ___assert_rtn("test","fibonacci.c",0x5f,"fib(2) == 1");
  }
  iVar1 = _fib(9);
  if (iVar1 != 0x15) {
                    // WARNING: Subroutine does not return
    ___assert_rtn("test","fibonacci.c",0x60,"fib(9) == 21");
  }
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void ___assert_rtn(char *param_1,char *param_2,int param_3,char *param_4)

{
                    // WARNING: Could not recover jumptable at 0x000100003dd8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____assert_rtn_100004000)(param_1,param_2,param_3);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

clock_t _clock(void)

{
  clock_t cVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003de4. Too many branches
                    // WARNING: Treating indirect jump as call
  cVar1 = (*(code *)PTR__clock_100004018)();
  return cVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _exit(int param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003df0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__exit_100004020)(param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * _fgets(char *param_1,int param_2,FILE *param_3)

{
  char *pcVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003dfc. Too many branches
                    // WARNING: Treating indirect jump as call
  pcVar1 = (char *)(*(code *)PTR__fgets_100004028)(param_1,param_2);
  return pcVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fprintf(FILE *param_1,char *param_2,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e08. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fprintf_100004030)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _getchar(void)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e14. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__getchar_100004038)();
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e20. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004040)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

long _strtol(char *param_1,char **param_2,int param_3)

{
  long lVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e2c. Too many branches
                    // WARNING: Treating indirect jump as call
  lVar1 = (*(code *)PTR__strtol_100004048)(param_1,param_2,param_3);
  return lVar1;
}


