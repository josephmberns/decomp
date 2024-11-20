#include "square-form-factorization-1.h"



ulong _gcd(ulong param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 local_10;
  undefined8 local_8;
  
  local_10 = param_2;
  local_8 = param_1;
  while (local_10 != 0) {
    uVar1 = 0;
    if (local_10 != 0) {
      uVar1 = local_8 / local_10;
    }
    uVar2 = local_10;
    local_10 = local_8 - uVar1 * local_10;
    local_8 = uVar2;
  }
  return local_8;
}



ulong _SQUFOF(ulong param_1)

{
  long lVar1;
  ulong uVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  double dVar7;
  uint local_8c;
  ulong local_88;
  ulong local_68;
  ulong local_50;
  ulong local_48;
  long local_38;
  ulong local_18;
  
  dVar7 = (double)NEON_ucvtf(param_1);
  local_18 = (ulong)(SQRT(dVar7) + 0.5);
  if (local_18 * local_18 - param_1 != 0) {
    local_8c = 0;
    while( true ) {
      bVar3 = false;
      if (local_8c < 0x10) {
        uVar6 = 0;
        if (*(ulong *)(&_multiplier + (long)(int)local_8c * 8) != 0) {
          uVar6 = 0xffffffffffffffff / *(ulong *)(&_multiplier + (long)(int)local_8c * 8);
        }
        bVar3 = param_1 <= uVar6;
      }
      if (!bVar3) break;
      lVar4 = *(long *)(&_multiplier + (long)(int)local_8c * 8) * param_1;
      dVar7 = (double)NEON_ucvtf(lVar4);
      lVar5 = (long)SQRT(dVar7);
      local_50 = 1;
      uVar6 = (long)(SQRT((double)(local_18 * 2)) * 2.0) * 3;
      local_48 = lVar4 - lVar5 * lVar5;
      local_38 = lVar5;
      for (local_88 = 2; local_88 < uVar6; local_88 = local_88 + 1) {
        uVar2 = 0;
        if (local_48 != 0) {
          uVar2 = (ulong)(lVar5 + local_38) / local_48;
        }
        lVar1 = uVar2 * local_48 - local_38;
        uVar2 = local_50 + uVar2 * (local_38 - lVar1);
        dVar7 = (double)NEON_ucvtf(uVar2);
        local_68 = (ulong)(SQRT(dVar7) + 0.5);
        local_38 = lVar1;
        if (((local_88 & 1) == 0) && (local_68 * local_68 - uVar2 == 0)) break;
        local_50 = local_48;
        local_48 = uVar2;
      }
      if (local_88 < uVar6) {
        uVar6 = 0;
        if (local_68 != 0) {
          uVar6 = (ulong)(lVar5 - local_38) / local_68;
        }
        local_38 = uVar6 * local_68 + local_38;
        local_50 = local_68;
        uVar6 = 0;
        if (local_68 != 0) {
          uVar6 = (ulong)(lVar4 - local_38 * local_38) / local_68;
        }
        do {
          local_48 = uVar6;
          uVar6 = 0;
          if (local_48 != 0) {
            uVar6 = (ulong)(lVar5 + local_38) / local_48;
          }
          lVar4 = uVar6 * local_48 - local_38;
          uVar6 = local_50 + uVar6 * (local_38 - lVar4);
          local_50 = local_48;
          bVar3 = lVar4 != local_38;
          local_38 = lVar4;
        } while (bVar3);
        local_68 = _gcd(param_1,local_48);
        if ((local_68 != 1) && (local_68 != param_1)) {
          return local_68;
        }
      }
      local_8c = local_8c + 1;
    }
    local_18 = 0;
  }
  return local_18;
}



undefined4 entry(void)

{
  uint uVar1;
  void *pvVar2;
  long lVar3;
  uint local_120;
  undefined8 auStack_108 [28];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100004008;
  pvVar2 = _memcpy(auStack_108,&DAT_100003e78,0xe0);
  for (local_120 = 0; local_120 < 0x1c; local_120 = local_120 + 1) {
    lVar3 = _SQUFOF(auStack_108[(int)local_120]);
    if (lVar3 == 0) {
      uVar1 = _printf("%llu was not factored.\n");
    }
    else {
      uVar1 = _printf("Integer %llu has factors %llu and %llu\n");
    }
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
                    // WARNING: Could not recover jumptable at 0x000100003ddc. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _memcpy(void *param_1,void *param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003de8. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__memcpy_100004010)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003df4. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004018)((int)param_1);
  return iVar1;
}


