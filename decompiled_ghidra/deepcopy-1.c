#include "deepcopy-1.h"



int _showCake(void)

{
  int iVar1;
  
  _printf("\ncake.d = %d");
  _printf("\ncake.e = %d");
  _printf("\ncake.l1.a = %d");
  _printf("\ncake.l2.b = %f");
  iVar1 = _printf("\ncake.l2.l1.a = %d");
  return iVar1;
}



undefined4 entry(void)

{
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  int local_2c;
  float fStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 local_14;
  
  local_14 = 0;
  local_1c = 1;
  uStack_18 = 2;
  uStack_20 = 3;
  fStack_28 = 4.0;
  local_2c = 5;
  _printf("Cake 1 is : ");
  uStack_68 = CONCAT44(uStack_20,uStack_24);
  local_70 = CONCAT44(fStack_28,local_2c);
  local_60 = CONCAT44(uStack_18,local_1c);
  _showCake(&local_70);
  uStack_48 = CONCAT44(uStack_20,uStack_24);
  local_40 = CONCAT44(uStack_18,local_1c);
  local_50 = CONCAT44(fStack_28 + (float)local_2c,local_2c);
  _printf("\nCake 2 is : ");
  uStack_88 = uStack_48;
  local_90 = local_50;
  local_80 = local_40;
  _showCake(&local_90);
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


