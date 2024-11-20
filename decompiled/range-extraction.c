#include "range-extraction.h"



long _rprint(long param_1,long param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  long local_60;
  long local_48;
  long local_38;
  int local_2c;
  int local_28;
  
  local_28 = 0;
  local_38 = param_1;
  while (local_2c = local_28, local_28 < param_3) {
    while( true ) {
      bVar1 = false;
      if (local_2c < param_3 + -1) {
        bVar1 = *(int *)(param_2 + (long)(local_2c + 1) * 4) ==
                *(int *)(param_2 + (long)local_2c * 4) + 1;
      }
      if (!bVar1) break;
      local_2c = local_2c + 1;
    }
    if (local_28 + 1 < local_2c) {
      local_48 = param_1;
      if (param_1 != 0) {
        local_48 = local_38;
      }
      uVar3 = 100;
      if (param_1 == 0) {
        uVar3 = 0;
      }
      iVar2 = ___snprintf_chk(local_48,uVar3,0,0xffffffffffffffff,"%s%d-%d");
      local_38 = local_38 + iVar2;
    }
    else {
      while (local_28 <= local_2c) {
        local_60 = param_1;
        if (param_1 != 0) {
          local_60 = local_38;
        }
        uVar3 = 100;
        if (param_1 == 0) {
          uVar3 = 0;
        }
        local_28 = local_28 + 1;
        iVar2 = ___snprintf_chk(local_60,uVar3,0,0xffffffffffffffff,"%s%d");
        local_38 = local_38 + iVar2;
      }
    }
    local_28 = local_2c + 1;
  }
  return local_38 - param_1;
}



undefined8 entry(void)

{
  int iVar1;
  long lVar2;
  void *pvVar3;
  undefined auStack_9c [132];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004010;
  _memcpy(auStack_9c,&PTR___mh_execute_header_100003f24,0x84);
  lVar2 = _rprint(0,auStack_9c);
  pvVar3 = _malloc(lVar2 + 1);
  _rprint(pvVar3,auStack_9c,0x21);
  iVar1 = _printf("%s\n");
  if (*(long *)PTR____stack_chk_guard_100004010 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(iVar1);
  }
  return 0;
}



void ___snprintf_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003edc. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____snprintf_chk_100004000)();
  return;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003ee8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004008)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ef4. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004018)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _memcpy(void *param_1,void *param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f00. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__memcpy_100004020)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f0c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004028)((int)param_1);
  return iVar1;
}


