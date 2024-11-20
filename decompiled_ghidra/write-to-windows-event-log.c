#include "write-to-windows-event-log.h"



undefined8 entry(int param_1)

{
  int iVar1;
  char acStack_410 [1000];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100004010;
  if (param_1 == 5) {
    ___sprintf_chk(acStack_410,0,1000,"EventCreate /t %s /id %s /l APPLICATION /so %s /d \"%s\"");
    iVar1 = _system(acStack_410);
  }
  else {
    iVar1 = _printf("Usage : %s < Followed by level, id, source string and description>");
  }
  if (*(long *)PTR____stack_chk_guard_100004010 != local_28) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(iVar1);
  }
  return 0;
}



void ___sprintf_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f04. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____sprintf_chk_100004000)();
  return;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f10. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004008)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f1c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004018)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _system(char *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f28. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__system_100004020)((int)param_1);
  return iVar1;
}


