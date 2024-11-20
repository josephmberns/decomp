#include "luhn-test-of-credit-card-numbers.h"



bool _luhn(char *param_1)

{
  bool bVar1;
  size_t sVar2;
  int local_5c;
  int local_54;
  int local_4c;
  int aiStack_40 [10];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  _memcpy(aiStack_40,&DAT_100003f30,0x28);
  bVar1 = true;
  local_54 = 0;
  sVar2 = _strlen(param_1);
  local_4c = (int)sVar2;
  while (local_4c != 0) {
    local_5c = param_1[local_4c + -1] + -0x30;
    if (!bVar1) {
      local_5c = aiStack_40[local_5c];
    }
    local_54 = local_54 + local_5c;
    bVar1 = !bVar1;
    local_4c = local_4c + -1;
  }
  if (*(long *)PTR____stack_chk_guard_100004008 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail();
  }
  return local_54 % 10 == 0;
}



undefined8 entry(void)

{
  uint uVar1;
  void *pvVar2;
  int local_48;
  long alStack_40 [5];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  pvVar2 = _memcpy(alStack_40,&PTR_s_49927398716_100004028,0x28);
  for (local_48 = 0; alStack_40[local_48] != 0; local_48 = local_48 + 1) {
    _luhn(alStack_40[local_48]);
    uVar1 = _printf("%16s\t%s\n");
    pvVar2 = (void *)(ulong)uVar1;
  }
  if (*(long *)PTR____stack_chk_guard_100004008 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(pvVar2);
  }
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f08. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _memcpy(void *param_1,void *param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f14. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__memcpy_100004010)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f20. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004018)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t _strlen(char *param_1)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f2c. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__strlen_100004020)();
  return sVar1;
}


