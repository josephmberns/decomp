#include "modular-arithmetic.h"



undefined8 _make(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_2 != 0) {
    iVar1 = param_1 / param_2;
  }
  return CONCAT44(param_2,param_1 - iVar1 * param_2);
}



undefined8 _add(undefined8 param_1,int param_2)

{
  undefined8 uVar1;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  local_20 = (int)param_1;
  uStack_1c = (undefined4)((ulong)param_1 >> 0x20);
  uVar1 = _make(local_20 + param_2,uStack_1c);
  return uVar1;
}



undefined8 _addi(undefined8 param_1,int param_2)

{
  undefined8 uVar1;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  local_20 = (int)param_1;
  uStack_1c = (undefined4)((ulong)param_1 >> 0x20);
  uVar1 = _make(local_20 + param_2,uStack_1c);
  return uVar1;
}



undefined8 _mul(undefined8 param_1,int param_2)

{
  undefined8 uVar1;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  local_20 = (int)param_1;
  uStack_1c = (undefined4)((ulong)param_1 >> 0x20);
  uVar1 = _make(local_20 * param_2,uStack_1c);
  return uVar1;
}



undefined8 _pow(undefined8 param_1,int param_2)

{
  undefined4 local_24;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  uStack_1c = (undefined4)((ulong)param_1 >> 0x20);
  local_18 = _make(1,uStack_1c);
  local_24 = param_2;
  while( true ) {
    if (local_24 < 1) break;
    local_18 = _mul(local_18,param_1);
    local_24 = local_24 + -1;
  }
  return local_18;
}



int _print(void)

{
  int iVar1;
  
  iVar1 = _printf("ModularArithmetic(%d, %d)");
  return iVar1;
}



undefined8 _f(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = _pow(param_1,100);
  uVar1 = _add(uVar1,param_1);
  uVar1 = _addi(uVar1,1);
  return uVar1;
}



undefined4 entry(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = _make(10,0xd);
  uVar2 = _f(uVar1);
  _printf("f(");
  _print(uVar1);
  _printf(") = ");
  _print(uVar2);
  _printf("\n");
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f78. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}


