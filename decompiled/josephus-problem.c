#include "josephus-problem.h"



int _jos(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 local_10;
  undefined4 local_c;
  
  local_c = param_3;
  for (local_10 = param_3 + 1; local_10 <= param_1; local_10 = local_10 + 1) {
    iVar1 = 0;
    if (local_10 != 0) {
      iVar1 = (local_c + param_2) / local_10;
    }
    local_c = (local_c + param_2) - iVar1 * local_10;
  }
  return local_c;
}



ulong _jos_large(ulong param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_8;
  
  local_28 = param_3;
  local_20 = param_3;
  if (param_2 < 2) {
    local_8 = (param_1 - param_3) - 1;
  }
  else {
    while (local_28 < param_1) {
      local_30 = 0;
      if (param_2 - 1 != 0) {
        local_30 = (((local_28 - local_20) + param_2) - 2) / (param_2 - 1);
      }
      if (param_1 < local_28 + local_30) {
        local_30 = param_1 - local_28;
      }
      else if (local_30 == 0) {
        local_30 = 1;
      }
      local_20 = local_20 + local_30 * param_2;
      local_28 = local_28 + local_30;
      uVar1 = 0;
      if (local_28 != 0) {
        uVar1 = local_20 / local_28;
      }
      local_20 = local_20 - uVar1 * local_28;
    }
    local_8 = local_20;
  }
  return local_8;
}



undefined8 entry(void)

{
  long local_30;
  
  _jos(0x29,3,0);
  _printf("n = %llu, k = %llu, final survivor: %d\n");
  _printf("n = %llu, k = %llu, three survivors:");
  local_30 = 3;
  while( true ) {
    if (local_30 == 0) break;
    _jos_large(0x891087b8e3b70cb1,0x2eff,local_30 + -1);
    _printf(" %llu");
    local_30 = local_30 + -1;
  }
  _putchar(10);
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f34. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _putchar(int param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f40. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__putchar_100004008)(param_1);
  return iVar1;
}


