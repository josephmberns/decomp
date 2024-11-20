#include "random-number-generator-device--2.h"



undefined4 entry(void)

{
  _arc4random();
  _printf("%u\n");
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

u_int32_t _arc4random(void)

{
  u_int32_t uVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f94. Too many branches
                    // WARNING: Treating indirect jump as call
  uVar1 = (*(code *)PTR__arc4random_100004000)();
  return uVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003fa0. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004008)((int)param_1);
  return iVar1;
}


