#include "doomsday-rule.h"



bool _leap(ushort param_1)

{
  bool bVar1;
  
  bVar1 = false;
  if (((uint)param_1 % 4 == 0) && (bVar1 = true, (uint)param_1 % 100 == 0)) {
    bVar1 = (uint)param_1 % 400 == 0;
  }
  return bVar1;
}



undefined * _weekday(undefined8 param_1)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint local_20;
  undefined2 local_14;
  byte bStack_12;
  byte bStack_11;
  
  local_20 = (uint)param_1;
  local_14 = (undefined2)param_1;
  uVar2 = (local_20 & 0xffff) % 100;
  uVar3 = uVar2 % 0xc;
  uVar4 = _leap(local_14);
  puVar1 = &UNK_100003eb0;
  if ((uVar4 & 1) == 0) {
    puVar1 = &UNK_100003ebc;
  }
  bStack_12 = (byte)((ulong)param_1 >> 0x10);
  bStack_11 = (byte)((ulong)param_1 >> 0x18);
  return (&PTR_s_Sunday_100008000)
         [((((uVar2 / 0xc + uVar3 + uVar3 / 4 + ((((local_20 & 0xffff) / 100) % 4) * 5 + 2) % 7) % 7
            + (uint)bStack_11) - (uint)(byte)puVar1[(int)(bStack_12 - 1)]) + 7) % 7];
}



undefined8 entry(void)

{
  uint uVar1;
  void *pvVar2;
  undefined4 uStack_d4;
  uint local_cc;
  undefined8 local_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined8 uStack_9c;
  undefined auStack_90 [104];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100004008;
  pvVar2 = _memcpy(auStack_90,&PTR_s__100004020,0x68);
  uStack_a8 = 0x70c077b;
  local_b0 = 0x1d03075306010708;
  uStack_9c = 0x20408350c02081d;
  uStack_a4 = 0x170c07b2;
  uStack_a0 = 0xe0507fb;
  for (local_cc = 0; local_cc < 7; local_cc = local_cc + 1) {
    _weekday(CONCAT44(uStack_d4,*(undefined4 *)((long)&local_b0 + (long)(int)local_cc * 4)));
    uVar1 = _printf("%s %d, %d %s on a %s.\n");
    pvVar2 = (void *)(ulong)uVar1;
  }
  if (*(long *)PTR____stack_chk_guard_100004008 != local_28) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(pvVar2);
  }
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003e94. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _memcpy(void *param_1,void *param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ea0. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__memcpy_100004010)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003eac. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004018)((int)param_1);
  return iVar1;
}


