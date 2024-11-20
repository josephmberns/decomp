#include "world-cup-group-stage.h"



int _compare(int *param_1,int *param_2)

{
  return (uint)(*param_2 < *param_1) - (uint)(*param_1 < *param_2);
}



undefined _next_result(void)

{
  int iVar1;
  long local_30;
  int local_24;
  char *local_20;
  undefined local_11;
  
  local_20 = &DAT_100008055;
  local_24 = 0;
  iVar1 = _strcmp(&_results,"222222");
  if (iVar1 == 0) {
    local_11 = 0;
  }
  else {
    for (local_30 = 0; (&_results)[local_30] != '\0'; local_30 = local_30 + 1) {
      local_24 = local_24 * 3 + (char)(&_results)[local_30] + -0x30;
    }
    local_24 = local_24 + 1;
    while (0 < local_24) {
      iVar1 = local_24 % 3;
      local_24 = local_24 / 3;
      *local_20 = (char)iVar1 + '0';
      local_20 = local_20 + -1;
    }
    while (&_results < local_20) {
      *local_20 = '0';
      local_20 = local_20 + -1;
    }
    local_11 = 1;
  }
  return local_11;
}



undefined8 entry(void)

{
  char cVar1;
  int iVar2;
  ulong uVar3;
  ulong local_e0;
  ulong local_d8;
  int local_c8 [44];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  ___strcpy_chk(&_results,"000000",7);
  for (local_d8 = 0; local_d8 < 4; local_d8 = local_d8 + 1) {
    for (local_e0 = 0; local_e0 < 10; local_e0 = local_e0 + 1) {
      local_c8[local_d8 * 10 + local_e0 + 4] = 0;
    }
  }
  do {
    local_c8[0] = 0;
    local_c8[1] = 0;
    local_c8[2] = 0;
    local_c8[3] = 0;
    for (local_d8 = 0; local_d8 < 6; local_d8 = local_d8 + 1) {
      cVar1 = (&_results)[local_d8];
      if (cVar1 == '0') {
        local_c8[(char)(&_games)[local_d8][1] + -0x31] =
             local_c8[(char)(&_games)[local_d8][1] + -0x31] + 3;
      }
      else if (cVar1 == '1') {
        local_c8[(char)*(&_games)[local_d8] + -0x31] =
             local_c8[(char)*(&_games)[local_d8] + -0x31] + 1;
        local_c8[(char)(&_games)[local_d8][1] + -0x31] =
             local_c8[(char)(&_games)[local_d8][1] + -0x31] + 1;
      }
      else if (cVar1 == '2') {
        local_c8[(char)*(&_games)[local_d8] + -0x31] =
             local_c8[(char)*(&_games)[local_d8] + -0x31] + 3;
      }
    }
    _qsort(local_c8,4,4,(int *)_compare);
    for (local_d8 = 0; local_d8 < 4; local_d8 = local_d8 + 1) {
      local_c8[local_d8 * 10 + (long)local_c8[local_d8] + 4] =
           local_c8[local_d8 * 10 + (long)local_c8[local_d8] + 4] + 1;
    }
    uVar3 = _next_result();
  } while ((uVar3 & 1) != 0);
  _printf("POINTS       0    1    2    3    4    5    6    7    8    9\n");
  iVar2 = _printf("-----------------------------------------------------------\n");
  for (local_d8 = 0; local_d8 < 4; local_d8 = local_d8 + 1) {
    _printf("%s place");
    for (local_e0 = 0; local_e0 < 10; local_e0 = local_e0 + 1) {
      _printf("%5d");
    }
    iVar2 = _printf("\n");
  }
  if (*(long *)PTR____stack_chk_guard_100004008 == local_18) {
    return 0;
  }
                    // WARNING: Subroutine does not return
  ___stack_chk_fail(iVar2);
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003eb0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



void ___strcpy_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003ebc. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____strcpy_chk_100004010)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ec8. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004018)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _qsort(void *param_1,size_t param_2,size_t param_3,int *param_4)

{
                    // WARNING: Could not recover jumptable at 0x000100003ed4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__qsort_100004020)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _strcmp(char *param_1,char *param_2)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ee0. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__strcmp_100004028)((int)param_1);
  return iVar1;
}


