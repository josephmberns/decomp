#include "nth-root.h"



undefined  [16] _pow_(double param_1,int param_2)

{
  undefined auVar1 [16];
  undefined8 local_18;
  undefined4 local_10;
  
  local_18 = 1.0;
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    local_18 = local_18 * param_1;
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_18;
  return auVar1;
}



undefined  [16] _root(double param_1,uint param_2)

{
  double dVar1;
  undefined auVar2 [16];
  double local_38;
  double local_18;
  
  local_38 = 1.0;
  if (param_1 == 0.0) {
    local_18 = 0.0;
  }
  else if (((int)param_2 < 1) || ((param_1 < 0.0 && ((param_2 & 1) == 0)))) {
    local_18 = NAN;
  }
  else {
    do {
      dVar1 = (double)_pow_(local_38,param_2 - 1);
      dVar1 = (param_1 / dVar1 - local_38) / (double)(long)(int)param_2;
      local_38 = local_38 + dVar1;
      local_18 = local_38;
    } while (2.220446049250313e-15 <= dVar1 || dVar1 <= -2.220446049250313e-15);
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_18;
  return auVar2;
}



undefined4 entry(void)

{
  undefined8 uVar1;
  
  uVar1 = _pow_(0xc00921f9f01b866e);
  _root(uVar1,0xf);
  _printf("root(%d, %g) = %g\n");
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f64. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}


