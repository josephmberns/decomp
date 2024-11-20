#include "pells-equation.h"



undefined  [16] _makePair(undefined8 param_1,undefined8 param_2)

{
  undefined auVar1 [16];
  
  auVar1._8_8_ = param_2;
  auVar1._0_8_ = param_1;
  return auVar1;
}



undefined  [16] _solvePell(int param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  undefined auVar5 [16];
  undefined auVar6 [16];
  long local_60;
  long lStack_58;
  long local_50;
  long lStack_48;
  int local_34;
  int local_30;
  int local_2c;
  
  iVar4 = (int)SQRT((double)(long)param_1);
  if (iVar4 * iVar4 == param_1) {
    auVar5 = _makePair(1,0);
  }
  else {
    local_30 = 1;
    local_34 = iVar4 * 2;
    auVar5 = _makePair();
    auVar6 = _makePair(0,1);
    local_2c = iVar4;
    do {
      lStack_58 = auVar6._8_8_;
      local_60 = auVar6._0_8_;
      lStack_48 = auVar5._8_8_;
      local_50 = auVar5._0_8_;
      local_2c = local_34 * local_30 - local_2c;
      iVar2 = 0;
      if (local_30 != 0) {
        iVar2 = (param_1 - local_2c * local_2c) / local_30;
      }
      local_34 = 0;
      if (iVar2 != 0) {
        local_34 = (iVar4 + local_2c) / iVar2;
      }
      auVar5 = _makePair(lStack_48,local_34 * lStack_48 + local_50);
      auVar6 = _makePair(lStack_58,local_34 * lStack_58 + local_60);
      lVar3 = auVar6._8_8_;
      lVar1 = auVar5._8_8_ + iVar4 * lVar3;
      local_30 = iVar2;
    } while (lVar1 * lVar1 - param_1 * lVar3 * lVar3 != 1);
    auVar5 = _makePair(lVar1,lVar3);
  }
  return auVar5;
}



int _test(undefined4 param_1)

{
  int iVar1;
  
  _solvePell(param_1);
  iVar1 = _printf("x^2 - %3d * y^2 = 1 for x = %21llu and y = %21llu\n");
  return iVar1;
}



undefined4 entry(void)

{
  _test(0x3d);
  _test(0x6d);
  _test(0xb5);
  _test(0x115);
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f68. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}


