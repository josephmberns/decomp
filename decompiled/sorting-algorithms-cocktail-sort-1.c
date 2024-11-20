#include "sorting-algorithms-cocktail-sort-1.h"



void _swap(uint *param_1,uint *param_2)

{
  if (param_1 != param_2) {
    *param_1 = *param_1 ^ *param_2;
    *param_2 = *param_2 ^ *param_1;
    *param_1 = *param_1 ^ *param_2;
  }
  return;
}



void _cocktailsort(long param_1,long param_2)

{
  bool bVar1;
  int local_6c;
  int local_68;
  long local_50 [4];
  undefined8 local_30;
  undefined8 local_28;
  long local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  do {
    local_28 = 1;
    local_20 = param_2 + -1;
    local_50[3] = param_2;
    local_30 = 0;
    local_50[1] = 0xffffffffffffffff;
    local_50[0] = 1;
    for (local_68 = 0; local_68 < 2; local_68 = local_68 + 1) {
      bVar1 = true;
      for (local_6c = (int)local_50[(long)local_68 + 5];
          (long)local_6c != local_50[(long)local_68 + 3];
          local_6c = local_6c + (int)local_50[local_68]) {
        if (*(int *)(param_1 + (long)local_6c * 4) < *(int *)(param_1 + (long)(local_6c + -1) * 4))
        {
          _swap(param_1 + (long)local_6c * 4 + -4,param_1 + (long)local_6c * 4);
          bVar1 = false;
        }
      }
      if (bVar1) {
        if (*(long *)PTR____stack_chk_guard_100004008 == local_18) {
          return;
        }
                    // WARNING: Subroutine does not return
        ___stack_chk_fail();
      }
    }
  } while( true );
}



undefined8 entry(void)

{
  uint uVar1;
  ulong uVar2;
  ulong local_58;
  undefined auStack_40 [40];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  _memcpy(auStack_40,&DAT_100003f70,0x28);
  uVar2 = _cocktailsort(auStack_40,10);
  for (local_58 = 0; local_58 < 10; local_58 = local_58 + 1) {
    uVar1 = _printf("%d ");
    uVar2 = (ulong)uVar1;
  }
  if (*(long *)PTR____stack_chk_guard_100004008 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(uVar2);
  }
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f44. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _memcpy(void *param_1,void *param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f50. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__memcpy_100004010)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f5c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004018)((int)param_1);
  return iVar1;
}


