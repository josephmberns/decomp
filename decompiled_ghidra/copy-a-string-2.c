#include "copy-a-string-2.h"



undefined8 entry(void)

{
  int iVar1;
  ulong uVar2;
  char local_74 [8];
  undefined4 local_6c;
  undefined auStack_68 [80];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  local_6c = 0;
  builtin_strncpy(local_74,"Hello",6);
  uVar2 = ___strlcpy_chk(auStack_68,local_74,0x50);
  if (0x4f < uVar2) {
    _fputs("The buffer is too small!\n",*(FILE **)PTR____stderrp_100004010);
                    // WARNING: Subroutine does not return
    _exit(1);
  }
  builtin_strncpy(local_74,"----",4);
  local_74[4] = 0x2d;
  _printf("src: %s\n");
  iVar1 = _printf("dst: %s\n");
  if (*(long *)PTR____stack_chk_guard_100004008 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(iVar1);
  }
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f40. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



void ___strlcpy_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f4c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____strlcpy_chk_100004018)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _exit(int param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f58. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__exit_100004020)(param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fputs(char *param_1,FILE *param_2)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f64. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fputs_100004028)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f70. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004030)((int)param_1);
  return iVar1;
}


