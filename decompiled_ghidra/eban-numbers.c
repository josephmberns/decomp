#include "eban-numbers.h"



undefined8 entry(void)

{
  int iVar1;
  uint uVar2;
  void *pvVar3;
  undefined8 uVar4;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_98;
  int local_90;
  int iStack_8c;
  uint local_80;
  undefined8 uStack_78;
  uint auStack_70 [22];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  pvVar3 = _memcpy(&uStack_78,&DAT_100003ee0,0x60);
  for (local_80 = 0; local_80 < 8; local_80 = local_80 + 1) {
    uVar4 = *(undefined8 *)((long)&uStack_78 + (long)(int)local_80 * 0xc);
    uVar2 = auStack_70[(long)(int)local_80 * 3];
    local_90 = (int)uVar4;
    iStack_8c = (int)((ulong)uVar4 >> 0x20);
    if (local_90 == 2) {
      _printf("eban numbers up to and including %d:\n");
    }
    else {
      _printf("eban numbers between %d and %d (inclusive:)");
    }
    for (local_98 = local_90; local_98 <= iStack_8c; local_98 = local_98 + 2) {
      iVar1 = local_98 / 1000000000;
      local_a4 = (local_98 % 1000000000) / 1000000;
      local_a8 = (local_98 % 1000000) / 1000;
      local_a0 = (local_98 % 1000000) % 1000;
      if ((0x1d < local_a4) && (local_a4 < 0x43)) {
        local_a4 = local_a4 % 10;
      }
      if ((0x1d < local_a8) && (local_a8 < 0x43)) {
        local_a8 = local_a8 % 10;
      }
      if ((0x1d < local_a0) && (local_a0 < 0x43)) {
        local_a0 = local_a0 % 10;
      }
      if ((((((((iVar1 == 0) || (iVar1 == 2)) || (iVar1 == 4)) || (iVar1 == 6)) &&
            (((local_a4 == 0 || (local_a4 == 2)) || ((local_a4 == 4 || (local_a4 == 6)))))) &&
           (((local_a8 == 0 || (local_a8 == 2)) || ((local_a8 == 4 || (local_a8 == 6)))))) &&
          ((((local_a0 == 0 || (local_a0 == 2)) || (local_a0 == 4)) || (local_a0 == 6)))) &&
         ((uVar2 & 1) != 0)) {
        _printf("%d ");
      }
    }
    if ((uVar2 & 1) != 0) {
      _printf("\n");
    }
    uVar2 = _printf("count = %d\n\n");
    pvVar3 = (void *)(ulong)uVar2;
  }
  if (*(long *)PTR____stack_chk_guard_100004008 == local_18) {
    return 0;
  }
                    // WARNING: Subroutine does not return
  ___stack_chk_fail(pvVar3);
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003ec4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _memcpy(void *param_1,void *param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ed0. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__memcpy_100004010)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003edc. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004018)((int)param_1);
  return iVar1;
}


