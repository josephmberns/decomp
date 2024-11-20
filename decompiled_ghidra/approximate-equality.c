#include "approximate-equality.h"



bool _approxEquals(double param_1,double param_2,double param_3)

{
  return ABS(param_1 - param_2) < param_3;
}



int _test(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  _approxEquals(param_1,param_2,0x3c32725dd1d243ac);
  iVar1 = _printf("%f, %f => %d\n");
  return iVar1;
}



undefined4 entry(void)

{
  _test(0x42d6bcc41e900001);
  _test(0x405900a3d70a3d71,0x405900b439581062);
  _test(0x41cdcd6500000002,0x41cdcd6500000001);
  _test(0x3f50624dd2f1a9fc,0x3f50624dee6e89d6);
  _test(0x3b5e867f1a7e0120,0);
  _test(0x4000000000000001);
  _test(0xc000000000000001,0xc000000000000000);
  _test(0x400921fb54442d18);
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f3c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}


