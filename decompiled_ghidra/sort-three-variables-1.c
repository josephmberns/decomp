#include "sort-three-variables-1.h"



undefined8 entry(void)

{
  bool bVar1;
  double dVar2;
  int local_1dc;
  int local_1d8;
  double adStack_1d0 [3];
  undefined auStack_1b8 [100];
  char acStack_154 [300];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100004008;
  bVar1 = false;
  for (local_1d8 = 0; local_1d8 < 3; local_1d8 = local_1d8 + 1) {
    _printf("Enter %d%s value : ");
    _fgets(acStack_154 + (long)local_1d8 * 100,100,*(FILE **)PTR____stdinp_100004010);
    local_1dc = 0;
    while (acStack_154[(long)local_1dc + (long)local_1d8 * 100] != '\0') {
      if ((((acStack_154[(long)local_1dc + (long)local_1d8 * 100] < '0') ||
           ('9' < acStack_154[(long)local_1dc + (long)local_1d8 * 100])) &&
          ((acStack_154[(long)local_1dc + (long)local_1d8 * 100] != '.' ||
           ((acStack_154[(long)local_1dc + (long)local_1d8 * 100] != '-' ||
            (acStack_154[(long)local_1dc + (long)local_1d8 * 100] != '+')))))) ||
         (((acStack_154[(long)local_1dc + (long)local_1d8 * 100] == '.' ||
           ((acStack_154[(long)local_1dc + (long)local_1d8 * 100] == '-' ||
            (acStack_154[(long)local_1dc + (long)local_1d8 * 100] == '+')))) &&
          ((acStack_154[(long)(local_1dc + 1) + (long)local_1d8 * 100] < '0' ||
           ('9' < acStack_154[(long)(local_1dc + 1) + (long)local_1d8 * 100])))))) {
        bVar1 = true;
      }
      local_1dc = local_1dc + 1;
    }
  }
  if (!bVar1) {
    for (local_1d8 = 0; local_1d8 < 3; local_1d8 = local_1d8 + 1) {
      dVar2 = _atof(acStack_154 + (long)local_1d8 * 100);
      adStack_1d0[local_1d8] = dVar2;
    }
  }
  for (local_1d8 = 0; local_1dc = local_1d8, local_1d8 < 2; local_1d8 = local_1d8 + 1) {
    while (local_1dc = local_1dc + 1, local_1dc < 3) {
      if ((bVar1) || (adStack_1d0[local_1d8] <= adStack_1d0[local_1dc])) {
        if (acStack_154[(long)local_1dc * 100] < acStack_154[(long)local_1d8 * 100]) {
          ___strcpy_chk(auStack_1b8,acStack_154 + (long)local_1dc * 100,100);
          ___strcpy_chk(acStack_154 + (long)local_1dc * 100,acStack_154 + (long)local_1d8 * 100);
          ___strcpy_chk(acStack_154 + (long)local_1d8 * 100,auStack_1b8,0xffffffffffffffff);
        }
      }
      else {
        dVar2 = adStack_1d0[local_1dc];
        adStack_1d0[local_1dc] = adStack_1d0[local_1d8];
        adStack_1d0[local_1d8] = dVar2;
      }
    }
  }
  for (local_1d8 = 0; local_1d8 < 3; local_1d8 = local_1d8 + 1) {
    if (bVar1) {
      _printf("%c = %s");
    }
    else {
      _printf("%c = %lf");
    }
  }
  if (*(long *)PTR____stack_chk_guard_100004008 == local_28) {
    return 0;
  }
                    // WARNING: Subroutine does not return
  ___stack_chk_fail();
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f44. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



void ___strcpy_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f50. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____strcpy_chk_100004018)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

double _atof(char *param_1)

{
  double dVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f5c. Too many branches
                    // WARNING: Treating indirect jump as call
  dVar1 = (double)(*(code *)PTR__atof_100004020)();
  return dVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * _fgets(char *param_1,int param_2,FILE *param_3)

{
  char *pcVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f68. Too many branches
                    // WARNING: Treating indirect jump as call
  pcVar1 = (char *)(*(code *)PTR__fgets_100004028)(param_1,param_2);
  return pcVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f74. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004030)((int)param_1);
  return iVar1;
}


