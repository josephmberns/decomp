#include "square-form-factorization-2.h"



ulong _squfof(ulong param_1)

{
  long lVar1;
  ulong uVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  double dVar7;
  int local_7c;
  int local_74;
  ulong local_70;
  long local_60;
  ulong local_40;
  long local_38;
  ulong local_30;
  ulong local_28;
  long local_20;
  ulong local_18;
  ulong local_8;
  
  local_7c = 0;
  if ((param_1 & 1) == 0) {
    local_8 = 2;
  }
  else {
    dVar7 = (double)NEON_ucvtf(param_1);
    local_8 = (ulong)(SQRT(dVar7) + 0.5);
    if (local_8 * local_8 - param_1 != 0) {
      while (*(long *)(&_m + (long)local_7c * 8) != 0) {
        if (local_7c != 0) {
          uVar5 = *(ulong *)(&_m + (long)local_7c * 8);
          uVar4 = 0;
          if (uVar5 != 0) {
            uVar4 = param_1 / uVar5;
          }
          if (param_1 == uVar4 * uVar5) {
            return *(ulong *)(&_m + (long)local_7c * 8);
          }
        }
        uVar4 = 0;
        if (*(ulong *)(&_m + (long)local_7c * 8) != 0) {
          uVar4 = 0x4000000000000000 / *(ulong *)(&_m + (long)local_7c * 8);
        }
        if (uVar4 < param_1) break;
        lVar6 = (long)local_7c;
        local_7c = local_7c + 1;
        uVar4 = param_1 * *(long *)(&_m + lVar6 * 8);
        dVar7 = (double)NEON_ucvtf(uVar4);
        local_60 = (long)SQRT(dVar7);
        if (uVar4 <= (ulong)(local_60 * local_60) && local_60 * local_60 - uVar4 != 0) {
          local_60 = local_60 + -1;
        }
        local_18 = 1;
        local_20 = (ulong)(local_60 * 2) / 1 - local_60;
        local_28 = (uVar4 - local_20 * local_20) / 1;
        for (local_74 = 2; local_74 < (int)((double)(long)SQRT((double)(ulong)(local_60 * 2)) * 4.0)
            ; local_74 = local_74 + 2) {
          uVar5 = 0;
          if (local_28 != 0) {
            uVar5 = (ulong)(local_60 + local_20) / local_28;
          }
          lVar6 = uVar5 * local_28 - local_20;
          local_18 = local_18 + uVar5 * (local_20 - lVar6);
          dVar7 = (double)NEON_ucvtf(local_18);
          local_30 = (ulong)(SQRT(dVar7) + 0.5);
          if (local_30 * local_30 - local_18 == 0) {
            uVar5 = 0;
            if (local_30 != 0) {
              uVar5 = (ulong)(local_60 - lVar6) / local_30;
            }
            local_38 = uVar5 * local_30 + lVar6;
            local_40 = 0;
            if (local_30 != 0) {
              local_40 = (uVar4 - local_38 * local_38) / local_30;
            }
            do {
              uVar2 = local_30;
              local_30 = local_40;
              uVar5 = 0;
              if (local_40 != 0) {
                uVar5 = (ulong)(local_60 + local_38) / local_40;
              }
              lVar1 = uVar5 * local_40 - local_38;
              local_40 = uVar2 + uVar5 * (local_38 - lVar1);
              bVar3 = lVar1 != local_38;
              local_70 = param_1;
              local_38 = lVar1;
            } while (bVar3);
            while (local_30 != 0) {
              uVar5 = 0;
              if (local_30 != 0) {
                uVar5 = local_70 / local_30;
              }
              uVar5 = local_70 - uVar5 * local_30;
              local_70 = local_30;
              local_30 = uVar5;
            }
            if (local_70 != 1) {
              return local_70;
            }
          }
          uVar5 = 0;
          if (local_18 != 0) {
            uVar5 = (ulong)(local_60 + lVar6) / local_18;
          }
          local_20 = uVar5 * local_18 - lVar6;
          local_28 = local_28 + uVar5 * (lVar6 - local_20);
        }
      }
      local_8 = 1;
    }
  }
  return local_8;
}



void entry(void)

{
  ulong uVar1;
  uint uVar2;
  void *pvVar3;
  ulong uVar4;
  long lVar5;
  int local_144;
  ulong local_140;
  ulong auStack_130 [33];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100004008;
  pvVar3 = _memcpy(auStack_130,&DAT_100003e70,0x108);
  local_144 = 0;
  while( true ) {
    lVar5 = (long)local_144;
    local_144 = local_144 + 1;
    uVar4 = auStack_130[lVar5];
    if (uVar4 < 2) break;
    _printf("N = %llu\n");
    local_140 = _squfof(uVar4);
    uVar1 = 0;
    if (local_140 != 0) {
      uVar1 = uVar4 / local_140;
    }
    if (uVar4 != uVar1 * local_140) {
      local_140 = 1;
    }
    if (local_140 == 1) {
      uVar2 = _printf("fail\n\n");
    }
    else {
      uVar2 = _printf("f = %llu  N/f = %llu\n\n");
    }
    pvVar3 = (void *)(ulong)uVar2;
  }
  if (*(long *)PTR____stack_chk_guard_100004008 != local_28) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(pvVar3);
  }
  return;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003e24. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _memcpy(void *param_1,void *param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e30. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__memcpy_100004010)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e3c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004018)((int)param_1);
  return iVar1;
}


