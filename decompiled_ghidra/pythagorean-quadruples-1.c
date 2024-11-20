#include "pythagorean-quadruples-1.h"



undefined4 entry(void)

{
  int iVar1;
  int iVar2;
  uint local_22ac;
  uint local_22a8;
  uint local_22a4;
  int aiStack_228c [2201];
  long local_28;
  
  (*(code *)PTR____chkstk_darwin_100004000)();
  local_28 = *(long *)PTR____stack_chk_guard_100004010;
  _bzero(aiStack_228c,0x2264);
  for (local_22a4 = 1; (int)local_22a4 < 0x899; local_22a4 = local_22a4 + 1) {
    for (local_22a8 = local_22a4; (int)local_22a8 < 0x899; local_22a8 = local_22a8 + 1) {
      if (((local_22a4 & 1) == 0) || ((local_22a8 & 1) == 0)) {
        for (local_22ac = local_22a8; (int)local_22ac < 0x899; local_22ac = local_22ac + 1) {
          iVar1 = local_22a4 * local_22a4 + local_22a8 * local_22a8 + local_22ac * local_22ac;
          iVar2 = (int)SQRT((float)iVar1);
          if ((iVar1 == iVar2 * iVar2) && (iVar2 < 0x899)) {
            aiStack_228c[iVar2] = 1;
          }
        }
      }
    }
  }
  for (local_22a4 = 1; (int)local_22a4 < 0x899; local_22a4 = local_22a4 + 1) {
    if (aiStack_228c[(int)local_22a4] == 0) {
      _printf("%d ");
    }
  }
  iVar1 = _printf("\n");
  if (*(long *)PTR____stack_chk_guard_100004010 == local_28) {
    return 0;
  }
                    // WARNING: Subroutine does not return
  ___stack_chk_fail(iVar1);
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f84. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004008)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _bzero(void *param_1,size_t param_2)

{
                    // WARNING: Could not recover jumptable at 0x000100003f90. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__bzero_100004018)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f9c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004020)((int)param_1);
  return iVar1;
}


