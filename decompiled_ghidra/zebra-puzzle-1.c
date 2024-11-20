#include "zebra-puzzle-1.h"



void _printHouses(long param_1)

{
  int iVar1;
  int local_fc;
  undefined auStack_f0 [40];
  undefined auStack_c8 [40];
  undefined auStack_a0 [40];
  undefined auStack_78 [40];
  undefined auStack_50 [40];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100004010;
  _memcpy(auStack_50,&PTR_s_Red_100004030,0x28);
  _memcpy(auStack_78,&PTR_s_English_100004058,0x28);
  _memcpy(auStack_a0,&PTR_s_Tea_100004080,0x28);
  _memcpy(auStack_c8,&PTR_s_Dog_1000040a8,0x28);
  _memcpy(auStack_f0,&PTR_s_PallMall_1000040d0,0x28);
  iVar1 = _printf("%-10.10s%-10.10s%-10.10s%-10.10s%-10.10s%-10.10s\n");
  for (local_fc = 0; local_fc < 5; local_fc = local_fc + 1) {
    _printf("%-10d");
    if (*(int *)(param_1 + (long)local_fc * 0x14) < 0) {
      _printf("%-10.10s");
    }
    else {
      _printf("%-10.10s");
    }
    if (*(int *)(param_1 + (long)local_fc * 0x14 + 4) < 0) {
      _printf("%-10.10s");
    }
    else {
      _printf("%-10.10s");
    }
    if (*(int *)(param_1 + (long)local_fc * 0x14 + 8) < 0) {
      _printf("%-10.10s");
    }
    else {
      _printf("%-10.10s");
    }
    if (*(int *)(param_1 + (long)local_fc * 0x14 + 0xc) < 0) {
      _printf("%-10.10s");
    }
    else {
      _printf("%-10.10s");
    }
    if (*(int *)(param_1 + (long)local_fc * 0x14 + 0x10) < 0) {
      iVar1 = _printf("-\n");
    }
    else {
      iVar1 = _printf("%-10.10s\n");
    }
  }
  if (*(long *)PTR____stack_chk_guard_100004010 != local_28) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(iVar1);
  }
  return;
}



undefined4 _checkHouses(long param_1)

{
  int local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  undefined4 local_4;
  
  local_14 = 0;
  local_18 = 0;
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  local_28 = 0;
  local_2c = 0;
  local_30 = 0;
  local_34 = 0;
  local_38 = 0;
  if ((*(int *)(param_1 + 0x30) < 0) || (*(int *)(param_1 + 0x30) == 2)) {
    if ((*(int *)(param_1 + 4) < 0) || (*(int *)(param_1 + 4) == 4)) {
      for (local_3c = 0; local_3c < 5; local_3c = local_3c + 1) {
        if (-1 < *(int *)(param_1 + (long)local_3c * 0x14)) {
          local_14 = local_14 + (1 << (ulong)(*(uint *)(param_1 + (long)local_3c * 0x14) & 0x1f));
          local_18 = local_18 | 1 << (ulong)(*(uint *)(param_1 + (long)local_3c * 0x14) & 0x1f);
        }
        if (-1 < *(int *)(param_1 + (long)local_3c * 0x14 + 4)) {
          local_1c = local_1c +
                     (1 << (ulong)(*(uint *)(param_1 + (long)local_3c * 0x14 + 4) & 0x1f));
          local_20 = local_20 | 1 << (ulong)(*(uint *)(param_1 + (long)local_3c * 0x14 + 4) & 0x1f);
        }
        if (-1 < *(int *)(param_1 + (long)local_3c * 0x14 + 8)) {
          local_24 = local_24 +
                     (1 << (ulong)(*(uint *)(param_1 + (long)local_3c * 0x14 + 8) & 0x1f));
          local_28 = local_28 | 1 << (ulong)(*(uint *)(param_1 + (long)local_3c * 0x14 + 8) & 0x1f);
        }
        if (-1 < *(int *)(param_1 + (long)local_3c * 0x14 + 0xc)) {
          local_2c = local_2c +
                     (1 << (ulong)(*(uint *)(param_1 + (long)local_3c * 0x14 + 0xc) & 0x1f));
          local_30 = local_30 |
                     1 << (ulong)(*(uint *)(param_1 + (long)local_3c * 0x14 + 0xc) & 0x1f);
        }
        if (-1 < *(int *)(param_1 + (long)local_3c * 0x14 + 0x10)) {
          local_34 = local_34 +
                     (1 << (ulong)(*(uint *)(param_1 + (long)local_3c * 0x14 + 0x10) & 0x1f));
          local_38 = local_38 |
                     1 << (ulong)(*(uint *)(param_1 + (long)local_3c * 0x14 + 0x10) & 0x1f);
        }
        if (((-1 < *(int *)(param_1 + (long)local_3c * 0x14 + 4)) &&
            (-1 < *(int *)(param_1 + (long)local_3c * 0x14))) &&
           (((*(int *)(param_1 + (long)local_3c * 0x14 + 4) == 0 &&
             (*(int *)(param_1 + (long)local_3c * 0x14) != 0)) ||
            ((*(int *)(param_1 + (long)local_3c * 0x14 + 4) != 0 &&
             (*(int *)(param_1 + (long)local_3c * 0x14) == 0)))))) {
          return 0;
        }
        if (((-1 < *(int *)(param_1 + (long)local_3c * 0x14 + 4)) &&
            (-1 < *(int *)(param_1 + (long)local_3c * 0x14 + 0xc))) &&
           (((*(int *)(param_1 + (long)local_3c * 0x14 + 4) == 1 &&
             (*(int *)(param_1 + (long)local_3c * 0x14 + 0xc) != 0)) ||
            ((*(int *)(param_1 + (long)local_3c * 0x14 + 4) != 1 &&
             (*(int *)(param_1 + (long)local_3c * 0x14 + 0xc) == 0)))))) {
          return 0;
        }
        if (((-1 < *(int *)(param_1 + (long)local_3c * 0x14 + 4)) &&
            (-1 < *(int *)(param_1 + (long)local_3c * 0x14 + 8))) &&
           (((*(int *)(param_1 + (long)local_3c * 0x14 + 4) == 2 &&
             (*(int *)(param_1 + (long)local_3c * 0x14 + 8) != 0)) ||
            ((*(int *)(param_1 + (long)local_3c * 0x14 + 4) != 2 &&
             (*(int *)(param_1 + (long)local_3c * 0x14 + 8) == 0)))))) {
          return 0;
        }
        if (((0 < local_3c) && (-1 < *(int *)(param_1 + (long)local_3c * 0x14))) &&
           (((*(int *)(param_1 + (long)(local_3c + -1) * 0x14) == 1 &&
             (*(int *)(param_1 + (long)local_3c * 0x14) != 2)) ||
            ((*(int *)(param_1 + (long)(local_3c + -1) * 0x14) != 1 &&
             (*(int *)(param_1 + (long)local_3c * 0x14) == 2)))))) {
          return 0;
        }
        if (((-1 < *(int *)(param_1 + (long)local_3c * 0x14)) &&
            (-1 < *(int *)(param_1 + (long)local_3c * 0x14 + 8))) &&
           (((*(int *)(param_1 + (long)local_3c * 0x14) == 1 &&
             (*(int *)(param_1 + (long)local_3c * 0x14 + 8) != 1)) ||
            ((*(int *)(param_1 + (long)local_3c * 0x14) != 1 &&
             (*(int *)(param_1 + (long)local_3c * 0x14 + 8) == 1)))))) {
          return 0;
        }
        if (((-1 < *(int *)(param_1 + (long)local_3c * 0x14 + 0x10)) &&
            (-1 < *(int *)(param_1 + (long)local_3c * 0x14 + 0xc))) &&
           (((*(int *)(param_1 + (long)local_3c * 0x14 + 0x10) == 0 &&
             (*(int *)(param_1 + (long)local_3c * 0x14 + 0xc) != 1)) ||
            ((*(int *)(param_1 + (long)local_3c * 0x14 + 0x10) != 0 &&
             (*(int *)(param_1 + (long)local_3c * 0x14 + 0xc) == 1)))))) {
          return 0;
        }
        if (((-1 < *(int *)(param_1 + (long)local_3c * 0x14 + 0x10)) &&
            (-1 < *(int *)(param_1 + (long)local_3c * 0x14))) &&
           (((*(int *)(param_1 + (long)local_3c * 0x14 + 0x10) == 1 &&
             (*(int *)(param_1 + (long)local_3c * 0x14) != 3)) ||
            ((*(int *)(param_1 + (long)local_3c * 0x14 + 0x10) != 1 &&
             (*(int *)(param_1 + (long)local_3c * 0x14) == 3)))))) {
          return 0;
        }
        if (*(int *)(param_1 + (long)local_3c * 0x14 + 0x10) == 2) {
          if (((local_3c == 0) && (-1 < *(int *)(param_1 + 0x20))) &&
             (*(int *)(param_1 + 0x20) != 2)) {
            return 0;
          }
          if ((local_3c == 4) && (*(int *)(param_1 + 0x48) != 2)) {
            return 0;
          }
          if (((-1 < *(int *)(param_1 + (long)(local_3c + 1) * 0x14 + 0xc)) &&
              (*(int *)(param_1 + (long)(local_3c + 1) * 0x14 + 0xc) != 2)) &&
             (*(int *)(param_1 + (long)(local_3c + -1) * 0x14 + 0xc) != 2)) {
            return 0;
          }
        }
        if (*(int *)(param_1 + (long)local_3c * 0x14 + 0x10) == 1) {
          if (((local_3c == 0) && (-1 < *(int *)(param_1 + 0x20))) &&
             (*(int *)(param_1 + 0x20) != 3)) {
            return 0;
          }
          if ((local_3c == 4) && (*(int *)(param_1 + 0x48) != 3)) {
            return 0;
          }
          if (((-1 < *(int *)(param_1 + (long)(local_3c + 1) * 0x14 + 0xc)) &&
              (*(int *)(param_1 + (long)(local_3c + 1) * 0x14 + 0xc) != 3)) &&
             (*(int *)(param_1 + (long)(local_3c + -1) * 0x14 + 0xc) != 3)) {
            return 0;
          }
        }
        if (((-1 < *(int *)(param_1 + (long)local_3c * 0x14 + 0x10)) &&
            (-1 < *(int *)(param_1 + (long)local_3c * 0x14 + 8))) &&
           (((*(int *)(param_1 + (long)local_3c * 0x14 + 0x10) == 3 &&
             (*(int *)(param_1 + (long)local_3c * 0x14 + 8) != 3)) ||
            ((*(int *)(param_1 + (long)local_3c * 0x14 + 0x10) != 3 &&
             (*(int *)(param_1 + (long)local_3c * 0x14 + 8) == 3)))))) {
          return 0;
        }
        if (((-1 < *(int *)(param_1 + (long)local_3c * 0x14 + 4)) &&
            (-1 < *(int *)(param_1 + (long)local_3c * 0x14 + 0x10))) &&
           (((*(int *)(param_1 + (long)local_3c * 0x14 + 4) == 3 &&
             (*(int *)(param_1 + (long)local_3c * 0x14 + 0x10) != 4)) ||
            ((*(int *)(param_1 + (long)local_3c * 0x14 + 4) != 3 &&
             (*(int *)(param_1 + (long)local_3c * 0x14 + 0x10) == 4)))))) {
          return 0;
        }
        if ((*(int *)(param_1 + (long)local_3c * 0x14 + 4) == 4) &&
           ((((local_3c < 4 && (-1 < *(int *)(param_1 + (long)(local_3c + 1) * 0x14))) &&
             (*(int *)(param_1 + (long)(local_3c + 1) * 0x14) != 4)) ||
            ((0 < local_3c && (*(int *)(param_1 + (long)(local_3c + -1) * 0x14) != 4)))))) {
          return 0;
        }
        if (*(int *)(param_1 + (long)local_3c * 0x14 + 0x10) == 2) {
          if (((local_3c == 0) && (-1 < *(int *)(param_1 + 0x1c))) &&
             (*(int *)(param_1 + 0x1c) != 4)) {
            return 0;
          }
          if ((local_3c == 4) && (*(int *)(param_1 + 0x44) != 4)) {
            return 0;
          }
          if (((-1 < *(int *)(param_1 + (long)(local_3c + 1) * 0x14 + 8)) &&
              (*(int *)(param_1 + (long)(local_3c + 1) * 0x14 + 8) != 4)) &&
             (*(int *)(param_1 + (long)(local_3c + -1) * 0x14 + 8) != 4)) {
            return 0;
          }
        }
      }
      if (((local_14 == local_18) && (local_1c == local_20)) &&
         ((local_24 == local_28 && ((local_2c == local_30 && (local_34 == local_38)))))) {
        if ((((local_14 == 0x1f) && (local_1c == 0x1f)) && (local_24 == 0x1f)) &&
           ((local_2c == 0x1f && (local_34 == 0x1f)))) {
          local_4 = 2;
        }
        else {
          local_4 = 1;
        }
      }
      else {
        local_4 = 0;
      }
    }
    else {
      local_4 = 0;
    }
  }
  else {
    local_4 = 0;
  }
  return local_4;
}



int _bruteFill(void *param_1,int param_2,int param_3)

{
  int iVar1;
  int local_a0;
  int local_9c;
  int local_98;
  int local_80;
  int aiStack_7c [25];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004010;
  local_80 = _checkHouses(param_1);
  if ((local_80 != 2) && (local_80 != 0)) {
    _memcpy(aiStack_7c,param_1,100);
    for (local_98 = 0; local_98 < 5; local_98 = local_98 + 1) {
      aiStack_7c[(long)param_2 * 5 + (long)param_3] = local_98;
      iVar1 = _checkHouses();
      if (iVar1 != 0) {
        if (param_3 < 4) {
          local_a0 = param_3 + 1;
          local_9c = param_2;
        }
        else {
          local_a0 = 0;
          local_9c = param_2 + 1;
        }
        local_80 = _bruteFill(aiStack_7c,local_9c,local_a0);
        if (local_80 != 0) {
          ___memcpy_chk(param_1,aiStack_7c,100,0xffffffffffffffff);
          goto LAB_100003d84;
        }
      }
    }
    local_80 = 0;
  }
LAB_100003d84:
  if (*(long *)PTR____stack_chk_guard_100004010 == local_18) {
    return local_80;
  }
                    // WARNING: Subroutine does not return
  ___stack_chk_fail();
}



undefined8 entry(void)

{
  undefined auStack_7c [100];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004010;
  _memset(auStack_7c,-1,100);
  _bruteFill(auStack_7c,0);
  _printHouses(auStack_7c);
  if (*(long *)PTR____stack_chk_guard_100004010 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail();
  }
  return 0;
}



void ___memcpy_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003e50. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____memcpy_chk_100004000)();
  return;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003e5c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004008)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _memcpy(void *param_1,void *param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e68. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__memcpy_100004018)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _memset(void *param_1,int param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e74. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__memset_100004020)(param_1,param_2);
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e80. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004028)((int)param_1);
  return iVar1;
}


