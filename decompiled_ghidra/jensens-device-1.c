#include "jensens-device-1.h"



undefined  [16] _sum(int *param_1,int param_2,int param_3,code *param_4)

{
  double dVar1;
  undefined auVar2 [16];
  undefined8 local_30;
  
  local_30 = 0.0;
  *param_1 = param_2;
  while (*param_1 <= param_3) {
    dVar1 = (double)(*param_4)();
    local_30 = local_30 + dVar1;
    *param_1 = *param_1 + 1;
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_30;
  return auVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined  [16] _term_func(void)

{
  undefined auVar1 [16];
  
  auVar1._0_8_ = 1.0 / (double)(long)__i;
  auVar1._8_8_ = 0;
  return auVar1;
}



undefined4 entry(void)

{
  _sum(&_i,1,100,_term_func);
  _printf("%f\n");
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f98. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}


