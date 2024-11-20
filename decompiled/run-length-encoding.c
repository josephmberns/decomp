#include "run-length-encoding.h"



uint _sget(long param_1)

{
  undefined4 local_4;
  
  local_4 = (uint)*(byte *)(*(long *)(param_1 + 0x10) + (long)*(int *)(param_1 + 0x18));
  if (local_4 == 0) {
    local_4 = 0xffffffff;
  }
  else {
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  }
  return local_4;
}



undefined8 _sput(long param_1,int param_2)

{
  int iVar1;
  int local_1c;
  
  local_1c = param_2;
  if (param_2 == -1) {
    local_1c = 0;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  *(int *)(param_1 + 0x18) = iVar1 + 1;
  *(char *)(*(long *)(param_1 + 0x10) + (long)iVar1) = (char)local_1c;
  if (param_2 == -1) {
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  return 0;
}



int _file_put(long param_1,int param_2)

{
  int iVar1;
  
  iVar1 = _fputc(param_2,*(FILE **)(param_1 + 0x10));
  return iVar1;
}



void _output(long param_1,long param_2,int param_3)

{
  undefined4 local_28;
  
  (**(code **)(param_1 + 8))(param_1,param_3 + 0x80);
  for (local_28 = 0; local_28 < param_3; local_28 = local_28 + 1) {
    (**(code **)(param_1 + 8))(param_1,*(undefined *)(param_2 + local_28));
  }
  return;
}



void _encode(undefined8 *param_1,long param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  code *pcVar4;
  code *pcVar5;
  long lVar6;
  int local_16c;
  int local_13c;
  char local_128 [256];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100004008;
  local_13c = 0;
  bVar1 = false;
  bVar2 = false;
  pcVar4 = (code *)*param_1;
  pcVar5 = *(code **)(param_2 + 8);
LAB_100003a5c:
  if (bVar2) {
    (*pcVar5)(param_2,0xffffffff);
    if (*(long *)PTR____stack_chk_guard_100004008 == local_28) {
      return;
    }
                    // WARNING: Subroutine does not return
    ___stack_chk_fail();
  }
  iVar3 = (*pcVar4)(param_1);
  bVar2 = iVar3 == -1;
  if (!bVar2) goto LAB_100003aa4;
  goto LAB_100003adc;
LAB_100003aa4:
  lVar6 = (long)local_13c;
  local_13c = local_13c + 1;
  local_128[lVar6] = (char)iVar3;
  if (1 < local_13c) {
LAB_100003adc:
    if (bVar1) {
      if (local_128[local_13c + -1] != local_128[local_13c + -2]) {
        bVar1 = false;
      }
      if (((!bVar1) || (local_13c == 0x81)) || (bVar2)) {
        if (bVar2) {
          local_16c = local_13c;
        }
        else {
          local_16c = local_13c + -1;
        }
        (*pcVar5)(param_2,local_16c);
        (*pcVar5)(param_2,local_128[0]);
        local_128[0] = local_128[local_13c + -1];
        local_13c = 1;
      }
    }
    else if (local_128[local_13c + -1] == local_128[local_13c + -2]) {
      bVar1 = true;
      if (2 < local_13c) {
        _output(param_2,local_128,local_13c + -2);
        local_128[0] = local_128[local_13c + -1];
        local_13c = 2;
        local_128[1] = local_128[0];
      }
    }
    else if ((local_13c == 0x80) || (bVar2)) {
      _output(param_2,local_128,local_13c);
      local_13c = 0;
      bVar1 = false;
    }
  }
  goto LAB_100003a5c;
}



void _decode(undefined8 *param_1,long param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  int local_28;
  
  while (iVar1 = (*(code *)*param_1)(param_1), iVar1 != -1) {
    if (iVar1 < 0x81) {
      uVar2 = (*(code *)*param_1)(param_1);
      for (local_28 = 0; local_28 < iVar1; local_28 = local_28 + 1) {
        (**(code **)(param_2 + 8))(param_2,uVar2);
      }
    }
    else {
      for (local_28 = 0; local_28 < iVar1 + -0x80; local_28 = local_28 + 1) {
        pcVar4 = *(code **)(param_2 + 8);
        uVar3 = (*(code *)*param_1)(param_1);
        (*pcVar4)(param_2,uVar3);
      }
    }
  }
  return;
}



undefined8 entry(void)

{
  undefined8 local_188;
  code *local_180;
  undefined8 local_178;
  code *local_170;
  code *local_168;
  undefined *local_160;
  undefined4 local_158;
  code *local_150;
  undefined8 uStack_148;
  char *local_140;
  undefined8 uStack_138;
  undefined4 local_12c;
  undefined auStack_128 [256];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100004008;
  local_12c = 0;
  uStack_148 = 0;
  local_150 = _sget;
  uStack_138 = 0;
  local_140 = "WWWWWWWWWWWWBWWWWWWWWWWWWBBBWWWWWWWWWWWWWWWWWWWWWWWWBWWWWWWWWWWWWWW";
  local_170 = _sget;
  local_168 = _sput;
  local_160 = auStack_128;
  local_158 = 0;
  local_188 = 0;
  local_180 = _file_put;
  local_178 = *(undefined8 *)PTR____stdoutp_100004010;
  _encode(&local_150);
  _decode(&local_170,&local_188);
  if (*(long *)PTR____stack_chk_guard_100004008 != local_28) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail();
  }
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f3c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fputc(int param_1,FILE *param_2)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f48. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fputc_100004018)(param_1);
  return iVar1;
}


