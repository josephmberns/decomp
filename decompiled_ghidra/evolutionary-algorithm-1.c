#include "evolutionary-algorithm-1.h"



int _irand(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = 0;
  if (param_1 != 0) {
    iVar1 = 0x7fffffff / param_1;
  }
  iVar1 = 0x7fffffff - (0x7fffffff - iVar1 * param_1);
  do {
    iVar3 = _rand();
  } while (iVar1 <= iVar3);
  iVar2 = 0;
  if (param_1 != 0) {
    iVar2 = iVar1 / param_1;
  }
  iVar1 = 0;
  if (iVar2 != 0) {
    iVar1 = iVar3 / iVar2;
  }
  return iVar1;
}



int _unfitness(long param_1,long param_2)

{
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = 0;
  for (local_14 = 0; *(char *)(param_1 + local_14) != '\0'; local_14 = local_14 + 1) {
    local_18 = local_18 + (uint)(*(char *)(param_1 + local_14) != *(char *)(param_2 + local_14));
  }
  return local_18;
}



void _mutate(long param_1,long param_2)

{
  char cVar1;
  int iVar2;
  int local_24;
  
  for (local_24 = 0; *(char *)(param_1 + local_24) != '\0'; local_24 = local_24 + 1) {
    iVar2 = _irand(0xf);
    if (iVar2 == 0) {
      iVar2 = _irand(0x1b);
      cVar1 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ "[iVar2];
    }
    else {
      cVar1 = *(char *)(param_1 + local_24);
    }
    *(char *)(param_2 + local_24) = cVar1;
  }
  *(undefined *)(param_2 + local_24) = 0;
  return;
}



undefined8 entry(void)

{
  int iVar1;
  int local_3a4;
  int local_39c;
  int local_398;
  char acStack_38e [870];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100004008;
  for (local_398 = 0; "METHINKS IT IS LIKE A WEASEL"[local_398] != '\0'; local_398 = local_398 + 1)
  {
    iVar1 = _irand(0x1b);
    acStack_38e[local_398] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ "[iVar1];
  }
  acStack_38e[local_398] = '\0';
  do {
    for (local_398 = 1; local_398 < 0x1e; local_398 = local_398 + 1) {
      _mutate(acStack_38e,acStack_38e + (long)local_398 * 0x1d);
    }
    local_39c = 0;
    for (local_398 = 0; local_398 < 0x1e; local_398 = local_398 + 1) {
      iVar1 = _unfitness("METHINKS IT IS LIKE A WEASEL",acStack_38e + (long)local_398 * 0x1d);
      if ((iVar1 < local_3a4) || (local_398 == 0)) {
        local_39c = local_398;
        local_3a4 = iVar1;
      }
    }
    if (local_39c != 0) {
      ___strcpy_chk(acStack_38e,acStack_38e + (long)local_39c * 0x1d,0x1d);
    }
    iVar1 = _printf("iter %d, score %d: %s\n");
  } while (local_3a4 != 0);
  if (*(long *)PTR____stack_chk_guard_100004008 == local_28) {
    return 0;
  }
                    // WARNING: Subroutine does not return
  ___stack_chk_fail(iVar1);
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f20. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



void ___strcpy_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f2c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____strcpy_chk_100004010)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f38. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004018)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _rand(void)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f44. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__rand_100004020)();
  return iVar1;
}


