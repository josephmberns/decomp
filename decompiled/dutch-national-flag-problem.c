#include "dutch-national-flag-problem.h"



int _compar(char *param_1,char *param_2)

{
  return (int)*param_1 - (int)*param_2;
}



undefined _issorted(long param_1)

{
  char cVar1;
  int local_14;
  
  cVar1 = '\0';
  local_14 = 0;
  while( true ) {
    if (4 < local_14) {
      return 1;
    }
    if (*(char *)(param_1 + local_14) < cVar1) break;
    if (cVar1 < *(char *)(param_1 + local_14)) {
      cVar1 = *(char *)(param_1 + local_14);
    }
    local_14 = local_14 + 1;
  }
  return 0;
}



int _printout(long param_1)

{
  int iVar1;
  undefined local_28;
  undefined auStack_22 [6];
  int local_1c;
  long local_18;
  
  for (local_1c = 0; local_1c < 5; local_1c = local_1c + 1) {
    if (*(char *)(param_1 + local_1c) == '\0') {
      local_28 = 0x72;
    }
    else {
      local_28 = 0x77;
      if (*(char *)(param_1 + local_1c) != '\x01') {
        local_28 = 0x62;
      }
    }
    auStack_22[local_1c] = local_28;
  }
  local_18 = param_1;
  iVar1 = _printf("%s\n");
  return iVar1;
}



undefined8 entry(void)

{
  int iVar1;
  time_t tVar2;
  ulong uVar3;
  int local_20;
  undefined auStack_19 [5];
  undefined4 local_14;
  
  local_14 = 0;
  tVar2 = _time((time_t *)0x0);
  _srand((uint)tVar2);
  _rand();
  for (local_20 = 0; local_20 < 5; local_20 = local_20 + 1) {
    iVar1 = _rand();
    auStack_19[local_20] = (char)(int)(((double)iVar1 / 2147483647.0) * 3.0);
  }
  while (uVar3 = _issorted(auStack_19), (uVar3 & 1) != 0) {
    _printf("Accidentally still sorted: ");
    _printout(auStack_19);
    for (local_20 = 0; local_20 < 5; local_20 = local_20 + 1) {
      iVar1 = _rand();
      auStack_19[local_20] = (char)(int)(((double)iVar1 / 2147483647.0) * 3.0);
    }
  }
  _printf("Non-sorted: ");
  _printout();
  _qsort(auStack_19,5,1,(int *)_compar);
  uVar3 = _issorted(auStack_19);
  if ((uVar3 & 1) == 0) {
    _printf("Sort failed: ");
    _printout(auStack_19);
  }
  else {
    _printf("Sorted: ");
    _printout(auStack_19);
  }
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f1c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _qsort(void *param_1,size_t param_2,size_t param_3,int *param_4)

{
                    // WARNING: Could not recover jumptable at 0x000100003f28. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__qsort_100004008)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _rand(void)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f34. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__rand_100004010)();
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _srand(uint param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f40. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__srand_100004018)(param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

time_t _time(time_t *param_1)

{
  time_t tVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f4c. Too many branches
                    // WARNING: Treating indirect jump as call
  tVar1 = (*(code *)PTR__time_100004020)();
  return tVar1;
}


