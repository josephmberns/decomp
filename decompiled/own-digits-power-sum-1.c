#include "own-digits-power-sum-1.h"



void _getDigits(int param_1)

{
  long lVar1;
  int local_8;
  int local_4;
  
  local_8 = 0;
  for (local_4 = param_1; 0 < local_4; local_4 = local_4 / 10) {
    lVar1 = (long)local_8;
    local_8 = local_8 + 1;
    *(int *)(&_digits + lVar1 * 4) = local_4 % 10;
  }
  return;
}



undefined8 entry(void)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  double extraout_d0;
  int local_5c;
  int local_58;
  int local_50;
  int local_4c;
  int local_48;
  int aiStack_40 [10];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  _memcpy(aiStack_40,&PTR___mh_execute_header_100003f40,0x28);
  uVar2 = _printf("Own digits power sums for N = 3 to 9 inclusive:\n");
  uVar3 = (ulong)uVar2;
  for (local_48 = 3; local_48 < 10; local_48 = local_48 + 1) {
    for (local_4c = 2; local_4c < 10; local_4c = local_4c + 1) {
      aiStack_40[local_4c] = aiStack_40[local_4c] * local_4c;
    }
    uVar3 = _pow(0x4024000000000000,(double)(local_48 + -1));
    local_50 = (int)extraout_d0;
    iVar1 = local_50 * 10;
    local_58 = 0;
    while (local_50 < iVar1) {
      if (local_58 == 0) {
        uVar3 = _getDigits(local_50);
        local_5c = 0;
        for (local_4c = 0; local_4c < local_48; local_4c = local_4c + 1) {
          local_5c = local_5c + aiStack_40[*(int *)(&_digits + (long)local_4c * 4)];
        }
      }
      else if (local_58 == 1) {
        local_5c = local_5c + 1;
      }
      else {
        local_5c = local_5c + (aiStack_40[local_58] - aiStack_40[local_58 + -1]);
      }
      if (local_5c == local_50) {
        uVar2 = _printf("%d\n");
        if (local_58 == 0) {
          uVar2 = _printf("%d\n");
        }
        uVar3 = (ulong)uVar2;
        local_50 = local_50 + (10 - local_58);
        local_58 = 0;
      }
      else if (local_50 < local_5c) {
        local_50 = local_50 + (10 - local_58);
        local_58 = 0;
      }
      else {
        if (local_58 < 9) {
          local_58 = local_58 + 1;
        }
        else {
          local_58 = 0;
        }
        local_50 = local_50 + 1;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_100004008 == local_18) {
    return 0;
  }
                    // WARNING: Subroutine does not return
  ___stack_chk_fail(uVar3);
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f18. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _memcpy(void *param_1,void *param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f24. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__memcpy_100004010)();
  return pvVar1;
}



void _pow(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f30. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__pow_100004018)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f3c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004020)((int)param_1);
  return iVar1;
}


