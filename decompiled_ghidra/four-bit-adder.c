#include "four-bit-adder.h"



void _halfadder(byte *param_1,byte *param_2,byte *param_3,byte *param_4)

{
  *param_3 = (*param_1 ^ 0xff) & 1 & *param_2 | *param_1 & (*param_2 ^ 0xff) & 1;
  *param_4 = *param_1 & *param_2;
  return;
}



void _fulladder(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               byte *param_5)

{
  byte local_59;
  byte *local_58;
  byte local_49;
  undefined *local_48;
  undefined uStack_39;
  byte *local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_48 = &uStack_39;
  local_58 = &local_49;
  local_38 = param_5;
  local_30 = param_4;
  local_28 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  _halfadder(param_1,param_2,local_48,local_58);
  _halfadder(local_48,local_28,local_30,&local_59);
  *local_38 = local_59 | *local_58;
  return;
}



void _fourbitsadder(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                   undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                   undefined8 param_13)

{
  undefined uStack_a9;
  undefined *local_a8;
  undefined uStack_99;
  undefined *local_98;
  undefined uStack_89;
  undefined *local_88;
  undefined local_79;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_58 = param_9;
  local_60 = param_10;
  local_68 = param_11;
  local_70 = param_12;
  local_78 = param_13;
  local_88 = &local_79;
  local_79 = 0;
  local_98 = &uStack_89;
  local_a8 = &uStack_99;
  local_50 = param_8;
  local_48 = param_7;
  local_40 = param_6;
  local_38 = param_5;
  local_30 = param_4;
  local_28 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  _fulladder(param_1,param_5,local_88,param_9,local_98);
  _fulladder(local_20,local_40,local_98,local_60,local_a8);
  _fulladder(local_28,local_48,local_a8,local_68,&uStack_a9);
  _fulladder(local_30,local_50,&uStack_a9,local_70,local_78);
  return;
}



undefined4 entry(void)

{
  undefined local_e1;
  undefined *local_e0;
  undefined local_d1;
  undefined *local_d0;
  undefined local_c1;
  undefined *local_c0;
  undefined local_b1;
  undefined *local_b0;
  undefined local_a1;
  undefined *local_a0;
  undefined local_91;
  undefined *local_90;
  undefined local_81;
  undefined *local_80;
  undefined local_71;
  undefined *local_70;
  undefined local_61;
  undefined *local_60;
  undefined local_51;
  undefined *local_50;
  undefined local_41;
  undefined *local_40;
  undefined local_31;
  undefined *local_30;
  undefined local_25;
  undefined4 local_24;
  
  local_24 = 0;
  local_30 = &local_25;
  local_40 = &local_31;
  local_50 = &local_41;
  local_60 = &local_51;
  local_70 = &local_61;
  local_80 = &local_71;
  local_90 = &local_81;
  local_a0 = &local_91;
  local_b0 = &local_a1;
  local_c0 = &local_b1;
  local_d0 = &local_c1;
  local_e0 = &local_d1;
  local_51 = 0;
  local_91 = 1;
  local_41 = 0;
  local_81 = 1;
  local_31 = 1;
  local_71 = 1;
  local_25 = 0;
  local_61 = 0;
  _fourbitsadder(local_30,local_40,local_50,local_60,local_70,local_80,local_90,local_a0,local_b0,
                 local_c0,local_d0,local_e0,&local_e1);
  _printf("%d%d%d%d + %d%d%d%d = %d%d%d%d, overflow = %d\n");
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


