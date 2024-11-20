#include "the-twelve-days-of-christmas.h"



undefined8 entry(void)

{
  uint uVar1;
  void *pvVar2;
  int local_238;
  int local_234;
  undefined auStack_22c [396];
  undefined auStack_a0 [120];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100004008;
  _memcpy(auStack_a0,"First",0x78);
  pvVar2 = _memcpy(auStack_22c,"Twelve drummers drumming",0x18c);
  for (local_234 = 0; local_234 < 0xc; local_234 = local_234 + 1) {
    uVar1 = _printf("\n\nOn the %s day of Christmas\nMy true love gave to me:");
    for (local_238 = local_234; pvVar2 = (void *)(ulong)uVar1, -1 < local_238;
        local_238 = local_238 + -1) {
      if (local_234 == 0) {
        uVar1 = _printf("\nA partridge in a pear tree.");
      }
      else {
        uVar1 = _printf("\n%s%c");
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_100004008 != local_28) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(pvVar2);
  }
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003d2c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _memcpy(void *param_1,void *param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003d38. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__memcpy_100004010)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003d44. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004018)((int)param_1);
  return iVar1;
}


