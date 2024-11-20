#include "knuth-shuffle-2.h"



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



void _shuffle_int(long param_1,long param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 local_20;
  
  for (local_20 = param_2; local_20 != 0; local_20 = local_20 + -1) {
    iVar2 = _irand(local_20);
    if ((long)iVar2 != local_20 + -1) {
      uVar1 = *(undefined4 *)(param_1 + (long)iVar2 * 4);
      *(undefined4 *)(param_1 + (long)iVar2 * 4) = *(undefined4 *)(param_1 + (local_20 + -1) * 4);
      *(undefined4 *)(param_1 + (local_20 + -1) * 4) = uVar1;
    }
  }
  return;
}



undefined8 entry(void)

{
  bool bVar1;
  int iVar2;
  int local_70;
  int aiStack_68 [20];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  for (local_70 = 0; local_70 < 0x14; local_70 = local_70 + 1) {
    aiStack_68[local_70] = local_70;
  }
  _printf("before:");
  local_70 = 0;
  while( true ) {
    bVar1 = true;
    if (0x13 < local_70) {
      iVar2 = _printf("\n");
      bVar1 = iVar2 == 0;
    }
    if (!bVar1) break;
    _printf(" %d");
    local_70 = local_70 + 1;
  }
  _shuffle_int(aiStack_68,0x14);
  iVar2 = _printf("after: ");
  local_70 = 0;
  while( true ) {
    bVar1 = true;
    if (0x13 < local_70) {
      iVar2 = _printf("\n");
      bVar1 = iVar2 == 0;
    }
    if (!bVar1) break;
    iVar2 = _printf(" %d");
    local_70 = local_70 + 1;
  }
  if (*(long *)PTR____stack_chk_guard_100004008 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(iVar2);
  }
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f74. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f80. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004010)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _rand(void)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f8c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__rand_100004018)();
  return iVar1;
}


