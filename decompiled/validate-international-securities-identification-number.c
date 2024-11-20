#include "validate-international-securities-identification-number.h"



bool _check_isin(long param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  int local_9c;
  int local_98;
  int local_90;
  int local_8c;
  int aiStack_78 [24];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  local_90 = 0;
  local_8c = 0;
  do {
    if (0xb < local_8c) {
      if (*(char *)(param_1 + local_8c) == '\0') {
        local_98 = 0;
        local_8c = local_90;
        while (local_8c = local_8c + -2, -1 < local_8c) {
          local_9c = aiStack_78[local_8c] * 2;
          if (9 < local_9c) {
            local_9c = local_9c + -9;
          }
          local_98 = local_98 + local_9c;
        }
        for (local_8c = local_90 + -1; -1 < local_8c; local_8c = local_8c + -2) {
          local_98 = local_98 + aiStack_78[local_8c];
        }
        bVar2 = local_98 % 10 == 0;
      }
      else {
        bVar2 = false;
      }
LAB_100003de0:
      if (*(long *)PTR____stack_chk_guard_100004008 != local_18) {
                    // WARNING: Subroutine does not return
        ___stack_chk_fail();
      }
      return bVar2;
    }
    iVar3 = (int)*(char *)(param_1 + local_8c);
    if ((iVar3 < 0x30) || (0x39 < iVar3)) {
      if ((iVar3 < 0x41) || (0x5a < iVar3)) {
        bVar2 = false;
        goto LAB_100003de0;
      }
      if (local_8c == 0xb) {
        bVar2 = false;
        goto LAB_100003de0;
      }
      iVar1 = local_90 + 1;
      aiStack_78[local_90] = (iVar3 + -0x37) / 10;
      local_90 = local_90 + 2;
      aiStack_78[iVar1] = (iVar3 + -0x37) % 10;
    }
    else {
      if (local_8c < 2) {
        bVar2 = false;
        goto LAB_100003de0;
      }
      lVar4 = (long)local_90;
      local_90 = local_90 + 1;
      aiStack_78[lVar4] = iVar3 + -0x30;
    }
    local_8c = local_8c + 1;
  } while( true );
}



undefined8 entry(void)

{
  uint uVar1;
  void *pvVar2;
  int local_58;
  undefined8 auStack_50 [7];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  pvVar2 = _memcpy(auStack_50,&PTR_s_US0378331005_100004020,0x38);
  for (local_58 = 0; local_58 < 7; local_58 = local_58 + 1) {
    _check_isin(auStack_50[local_58]);
    uVar1 = _printf("%c%c");
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
                    // WARNING: Could not recover jumptable at 0x000100003f28. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _memcpy(void *param_1,void *param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f34. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__memcpy_100004010)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f40. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004018)((int)param_1);
  return iVar1;
}


