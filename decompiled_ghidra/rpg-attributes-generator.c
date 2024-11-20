#include "rpg-attributes-generator.h"



int _compareInts(int *param_1,int *param_2)

{
  return *param_1 - *param_2;
}



undefined8 entry(void)

{
  int iVar1;
  time_t tVar2;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int aiStack_40 [4];
  int aiStack_30 [6];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  tVar2 = _time((time_t *)0x0);
  _srand((uint)tVar2);
  do {
    do {
      local_54 = 0;
      for (local_48 = 0; local_48 < 6; local_48 = local_48 + 1) {
        for (local_4c = 0; local_4c < 4; local_4c = local_4c + 1) {
          iVar1 = _rand();
          aiStack_40[local_4c] = iVar1 % 6 + 1;
        }
        _qsort(aiStack_40,4,4,(int *)_compareInts);
        local_50 = 0;
        for (local_4c = 1; local_4c < 4; local_4c = local_4c + 1) {
          local_50 = local_50 + aiStack_40[local_4c];
        }
        aiStack_30[local_48] = local_50;
        local_54 = local_54 + aiStack_30[local_48];
      }
    } while (local_54 < 0x4b);
    local_58 = 0;
    for (local_4c = 0; local_4c < 6; local_4c = local_4c + 1) {
      if (0xe < aiStack_30[local_4c]) {
        local_58 = local_58 + 1;
      }
    }
  } while (local_58 < 2);
  _printf("The 6 random numbers generated are:\n");
  _printf("[");
  for (local_4c = 0; local_4c < 6; local_4c = local_4c + 1) {
    _printf("%d ");
  }
  _printf("\b]\n");
  iVar1 = _printf("\nTheir sum is %d and %d of them are >= 15\n");
  if (*(long *)PTR____stack_chk_guard_100004008 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(iVar1);
  }
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f04. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f10. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004010)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _qsort(void *param_1,size_t param_2,size_t param_3,int *param_4)

{
                    // WARNING: Could not recover jumptable at 0x000100003f1c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__qsort_100004018)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _rand(void)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f28. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__rand_100004020)();
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _srand(uint param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f34. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__srand_100004028)(param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

time_t _time(time_t *param_1)

{
  time_t tVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f40. Too many branches
                    // WARNING: Treating indirect jump as call
  tVar1 = (*(code *)PTR__time_100004030)();
  return tVar1;
}


