#include "24-game-solve.h"



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

float _eval(undefined8 param_1,undefined8 param_2)

{
  float local_48;
  float local_44;
  int local_24;
  int iStack_20;
  int local_1c;
  int iStack_18;
  float local_14;
  
  iStack_20 = (int)((ulong)param_1 >> 0x20);
  if (iStack_20 == -1) {
    local_24 = (int)param_1;
    local_14 = (float)((double)(long)local_24 * 1.0);
  }
  else {
    local_1c = (int)param_2;
    local_44 = (float)_eval(*(undefined8 *)(&_nodes + (long)local_1c * 0x10),
                            *(undefined8 *)(&DAT_100008010 + (long)local_1c * 0x10));
    iStack_18 = (int)((ulong)param_2 >> 0x20);
    local_48 = (float)_eval(*(undefined8 *)(&_nodes + (long)iStack_18 * 0x10),
                            *(undefined8 *)(&DAT_100008010 + (long)iStack_18 * 0x10));
    switch(iStack_20) {
    case 0:
      local_14 = local_44 + local_48;
      break;
    case 1:
      local_14 = local_44 - local_48;
      break;
    case 2:
      local_14 = local_48 - local_44;
      break;
    case 3:
      local_14 = local_44 * local_48;
      break;
    case 4:
      if (local_48 == 0.0) {
        __b = 1;
        local_44 = 0.0;
      }
      else {
        local_44 = local_44 / local_48;
      }
      local_14 = local_44;
      break;
    case 5:
      if (local_44 == 0.0) {
        __b = 1;
        local_48 = 0.0;
      }
      else {
        local_48 = local_48 / local_44;
      }
      local_14 = local_48;
    }
  }
  return local_14;
}



int _show(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iStack_1c;
  int local_18;
  int iStack_14;
  
  iStack_1c = (int)((ulong)param_1 >> 0x20);
  if (iStack_1c == -1) {
    iVar1 = _printf("%d");
  }
  else {
    _printf("(");
    local_18 = (int)param_2;
    iStack_14 = (int)((ulong)param_2 >> 0x20);
    switch(iStack_1c) {
    case 0:
      _show(*(undefined8 *)(&_nodes + (long)local_18 * 0x10),
            *(undefined8 *)(&DAT_100008010 + (long)local_18 * 0x10));
      _printf(" + ");
      _show(*(undefined8 *)(&_nodes + (long)iStack_14 * 0x10),
            *(undefined8 *)(&DAT_100008010 + (long)iStack_14 * 0x10));
      break;
    case 1:
      _show(*(undefined8 *)(&_nodes + (long)local_18 * 0x10),
            *(undefined8 *)(&DAT_100008010 + (long)local_18 * 0x10));
      _printf(" - ");
      _show(*(undefined8 *)(&_nodes + (long)iStack_14 * 0x10),
            *(undefined8 *)(&DAT_100008010 + (long)iStack_14 * 0x10));
      break;
    case 2:
      _show(*(undefined8 *)(&_nodes + (long)iStack_14 * 0x10),
            *(undefined8 *)(&DAT_100008010 + (long)iStack_14 * 0x10));
      _printf(" - ");
      _show(*(undefined8 *)(&_nodes + (long)local_18 * 0x10),
            *(undefined8 *)(&DAT_100008010 + (long)local_18 * 0x10));
      break;
    case 3:
      _show(*(undefined8 *)(&_nodes + (long)local_18 * 0x10),
            *(undefined8 *)(&DAT_100008010 + (long)local_18 * 0x10));
      _printf(" * ");
      _show(*(undefined8 *)(&_nodes + (long)iStack_14 * 0x10),
            *(undefined8 *)(&DAT_100008010 + (long)iStack_14 * 0x10));
      break;
    case 4:
      _show(*(undefined8 *)(&_nodes + (long)local_18 * 0x10),
            *(undefined8 *)(&DAT_100008010 + (long)local_18 * 0x10));
      _printf(" / ");
      _show(*(undefined8 *)(&_nodes + (long)iStack_14 * 0x10),
            *(undefined8 *)(&DAT_100008010 + (long)iStack_14 * 0x10));
      break;
    case 5:
      _show(*(undefined8 *)(&_nodes + (long)iStack_14 * 0x10),
            *(undefined8 *)(&DAT_100008010 + (long)iStack_14 * 0x10));
      _printf(" / ");
      _show(*(undefined8 *)(&_nodes + (long)local_18 * 0x10),
            *(undefined8 *)(&DAT_100008010 + (long)local_18 * 0x10));
    }
    iVar1 = _printf(")");
  }
  return iVar1;
}



bool _float_fix(float param_1)

{
  return param_1 < 1e-05 && -1e-05 < param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Restarted to delay deadcode elimination for space: ram

ulong _solutions(float param_1,ulong param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  float extraout_s0;
  undefined8 uVar6;
  int local_44;
  int local_3c;
  
  if (param_4 == param_3) {
    __b = 0;
    uVar4 = _eval(__nodes,_DAT_100008010);
    if ((__b == 0) && (uVar4 = _float_fix(extraout_s0 - param_1), (int)uVar4 != 0)) {
      _show(__nodes,_DAT_100008010);
      uVar3 = _printf("\n");
      uVar4 = (ulong)uVar3;
    }
  }
  else {
    lVar5 = (long)__iNodes;
    __iNodes = __iNodes + 1;
    uVar1 = *(undefined4 *)(param_2 + (long)param_4 * 4);
    *(undefined8 *)(&DAT_100008010 + lVar5 * 0x10) = 0xffffffffffffffff;
    *(ulong *)(&_nodes + lVar5 * 0x10) = CONCAT44(0xffffffff,uVar1);
    uVar4 = param_2;
    for (local_3c = 0; local_3c < 6; local_3c = local_3c + 1) {
      iVar2 = __iNodes + -1;
      for (local_44 = 0; local_44 < iVar2; local_44 = local_44 + 1) {
        lVar5 = (long)__iNodes;
        __iNodes = __iNodes + 1;
        uVar6 = *(undefined8 *)(&_nodes + (long)local_44 * 0x10);
        *(undefined8 *)(&DAT_100008010 + lVar5 * 0x10) =
             *(undefined8 *)(&DAT_100008010 + (long)local_44 * 0x10);
        *(undefined8 *)(&_nodes + lVar5 * 0x10) = uVar6;
        *(ulong *)(&DAT_100008010 + (long)local_44 * 0x10) = CONCAT44(__iNodes + -2,__iNodes + -1);
        *(ulong *)(&_nodes + (long)local_44 * 0x10) = CONCAT44(local_3c,0xffffffff);
        uVar4 = _solutions(param_1,param_2,param_3,param_4 + 1);
        __iNodes = __iNodes + -1;
        uVar6 = *(undefined8 *)(&_nodes + (long)__iNodes * 0x10);
        *(undefined8 *)(&DAT_100008010 + (long)local_44 * 0x10) =
             *(undefined8 *)(&DAT_100008010 + (long)__iNodes * 0x10);
        *(undefined8 *)(&_nodes + (long)local_44 * 0x10) = uVar6;
      }
    }
    __iNodes = __iNodes + -1;
  }
  return uVar4;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 entry(void)

{
  undefined8 local_30;
  undefined8 uStack_28;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  uStack_28 = 0x300000008;
  local_30 = 0x300000008;
  _DAT_100008010 = 0xffffffffffffffff;
  __nodes = 0xffffffff00000008;
  __iNodes = 1;
  _solutions(0x41c00000,&local_30,4);
  if (*(long *)PTR____stack_chk_guard_100004008 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail();
  }
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f40. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f4c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004010)((int)param_1);
  return iVar1;
}


