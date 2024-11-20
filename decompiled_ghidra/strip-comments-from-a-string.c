#include "strip-comments-from-a-string.h"



undefined8 entry(void)

{
  int iVar1;
  int local_88;
  char local_81;
  char acStack_7c [100];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  do {
    _printf("\nEnter the string :");
    _fgets(acStack_7c,100,*(FILE **)PTR____stdinp_100004010);
    for (local_88 = 0; acStack_7c[local_88] != '\0'; local_88 = local_88 + 1) {
      if ((acStack_7c[local_88] == '#') || (acStack_7c[local_88] == ';')) {
        acStack_7c[local_88] = '\0';
        break;
      }
    }
    _printf("\nThe modified string is : %s");
    _printf("\nDo you want to repeat (y/n): ");
    _scanf("%c");
    iVar1 = _fflush(*(FILE **)PTR____stdinp_100004010);
    if (local_81 != 'y' && local_81 != 'Y') {
      if (*(long *)PTR____stack_chk_guard_100004008 != local_18) {
                    // WARNING: Subroutine does not return
        ___stack_chk_fail(iVar1);
      }
      return 0;
    }
  } while( true );
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f20. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fflush(FILE *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f2c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fflush_100004018)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * _fgets(char *param_1,int param_2,FILE *param_3)

{
  char *pcVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f38. Too many branches
                    // WARNING: Treating indirect jump as call
  pcVar1 = (char *)(*(code *)PTR__fgets_100004020)(param_1,param_2);
  return pcVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f44. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004028)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _scanf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f50. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__scanf_100004030)((int)param_1);
  return iVar1;
}


