#include "forward-difference-1.h"



void * _fwd_diff(void *param_1,uint param_2,uint param_3)

{
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_24;
  undefined8 local_20;
  undefined8 local_18;
  
  if (param_3 < param_2) {
    local_18 = _malloc((ulong)param_2 * 8);
    if (param_3 == 0) {
      ___memcpy_chk(local_18,param_1,(ulong)param_2 * 8,0xffffffffffffffff);
    }
    else {
      local_24 = param_2;
      local_20 = param_1;
      for (local_30 = 0; local_30 < param_3; local_30 = local_30 + 1) {
        local_24 = local_24 - 1;
        for (local_2c = 0; local_2c < local_24; local_2c = local_2c + 1) {
          *(double *)((long)local_18 + (ulong)local_2c * 8) =
               *(double *)((long)local_20 + (ulong)(local_2c + 1) * 8) -
               *(double *)((long)local_20 + (ulong)local_2c * 8);
        }
        local_20 = local_18;
      }
      local_18 = _realloc(local_18,(ulong)local_24 * 8);
    }
  }
  else {
    local_18 = (void *)0x0;
  }
  return local_18;
}



undefined8 entry(void)

{
  int iVar1;
  int local_7c;
  undefined auStack_68 [80];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004010;
  _memcpy(auStack_68,&DAT_100003f50,0x50);
  _fwd_diff(auStack_68,10,1);
  for (local_7c = 0; local_7c < 9; local_7c = local_7c + 1) {
    _printf("%g ");
  }
  iVar1 = _putchar(10);
  if (*(long *)PTR____stack_chk_guard_100004010 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(iVar1);
  }
  return 0;
}



void ___memcpy_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f04. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____memcpy_chk_100004000)();
  return;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f10. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004008)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f1c. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004018)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _memcpy(void *param_1,void *param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f28. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__memcpy_100004020)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f34. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004028)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _putchar(int param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f40. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__putchar_100004030)(param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _realloc(void *param_1,size_t param_2)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f4c. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__realloc_100004038)();
  return pvVar1;
}


