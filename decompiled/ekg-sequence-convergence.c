#include "ekg-sequence-convergence.h"



int _compareInts(int *param_1,int *param_2)

{
  return *param_1 - *param_2;
}



undefined4 _contains(long param_1,int param_2,ulong param_3)

{
  int local_24;
  
  local_24 = 0;
  while( true ) {
    if (param_3 <= (ulong)(long)local_24) {
      return 0;
    }
    if (*(int *)(param_1 + (long)local_24 * 4) == param_2) break;
    local_24 = local_24 + 1;
  }
  return 1;
}



int _gcd(int param_1,int param_2)

{
  undefined4 local_8;
  undefined4 local_4;
  
  local_8 = param_2;
  local_4 = param_1;
  while (local_4 != local_8) {
    if (local_8 < local_4) {
      local_4 = local_4 - local_8;
    }
    else {
      local_8 = local_8 - local_4;
    }
  }
  return local_4;
}



undefined4 _areSame(void *param_1,void *param_2,ulong param_3)

{
  int local_34;
  
  _qsort(param_1,param_3,4,(int *)_compareInts);
  _qsort(param_2,param_3,4,(int *)_compareInts);
  local_34 = 0;
  while( true ) {
    if (param_3 <= (ulong)(long)local_34) {
      return 1;
    }
    if (*(int *)((long)param_1 + (long)local_34 * 4) != *(int *)((long)param_2 + (long)local_34 * 4)
       ) break;
    local_34 = local_34 + 1;
  }
  return 0;
}



undefined4 entry(void)

{
  int iVar1;
  int local_820;
  int local_81c;
  int local_818;
  int aiStack_810 [100];
  int aiStack_680 [100];
  int aiStack_4f0 [300];
  int local_40 [6];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100004008;
  local_40[2] = 7;
  local_40[3] = 9;
  local_40[0] = 2;
  local_40[1] = 5;
  local_40[4] = 10;
  for (local_818 = 0; local_818 < 5; local_818 = local_818 + 1) {
    aiStack_810[(long)local_818 * 100] = 1;
    aiStack_810[(long)local_818 * 100 + 1] = local_40[local_818];
    for (local_81c = 2; local_81c < 100; local_81c = local_81c + 1) {
      local_820 = 2;
      while ((iVar1 = _contains(aiStack_810 + (long)local_818 * 100,local_820,(long)local_81c),
             iVar1 != 0 ||
             (iVar1 = _gcd(aiStack_810[(long)local_818 * 100 + (long)(local_81c + -1)],local_820),
             iVar1 < 2))) {
        local_820 = local_820 + 1;
      }
      aiStack_810[(long)local_818 * 100 + (long)local_81c] = local_820;
    }
    _printf("EKG(%2d): [");
    for (local_820 = 0; local_820 < 0x1e; local_820 = local_820 + 1) {
      _printf("%d ");
    }
    _printf("\b]\n");
  }
  local_820 = 2;
  do {
    if (99 < local_820) {
      iVar1 = _printf("\nEKG5(5) and EKG(7) do not converge within %d terms\n");
LAB_100003e9c:
      if (*(long *)PTR____stack_chk_guard_100004008 != local_28) {
                    // WARNING: Subroutine does not return
        ___stack_chk_fail(iVar1);
      }
      return 0;
    }
    if ((aiStack_680[local_820] == aiStack_4f0[local_820]) &&
       (iVar1 = _areSame(aiStack_680,aiStack_4f0,(long)local_820), iVar1 != 0)) {
      iVar1 = _printf("\nEKG(5) and EKG(7) converge at term %d\n");
      goto LAB_100003e9c;
    }
    local_820 = local_820 + 1;
  } while( true );
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003ee4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ef0. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004010)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _qsort(void *param_1,size_t param_2,size_t param_3,int *param_4)

{
                    // WARNING: Could not recover jumptable at 0x000100003efc. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__qsort_100004018)();
  return;
}


