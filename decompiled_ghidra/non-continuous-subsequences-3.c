#include "non-continuous-subsequences-3.h"



ulong _pick(ulong param_1,byte param_2,byte param_3,undefined8 param_4,ulong param_5)

{
  uint uVar1;
  int local_30;
  int local_2c;
  
  if (param_2 == (byte)param_1) {
    if (param_3 == 3) {
      local_30 = 1;
      for (local_2c = 0; local_2c < (int)(uint)(byte)param_1; local_2c = local_2c + 1) {
        if (((long)local_30 & param_5) != 0) {
          _printf("%s ");
        }
        local_30 = local_30 << 1;
      }
      uVar1 = _putchar(10);
      param_1 = (ulong)uVar1;
    }
  }
  else {
    _pick(param_1 & 0xff,param_2 + 1,(&_tbl)[(ulong)param_3 * 2],param_4,param_5 << 1);
    param_1 = _pick(param_1 & 0xff,param_2 + 1,(&DAT_100008001)[(ulong)param_3 * 2],param_4,
                    param_5 << 1 | 1);
  }
  return param_1;
}



undefined8 entry(int param_1,long param_2)

{
  if (param_1 - 1U < 0x20) {
    _pick(param_1 - 1U & 0xff,0,0,param_2 + 8,0);
  }
  else {
    _printf("Too many items");
  }
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f84. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _putchar(int param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f90. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__putchar_100004008)(param_1);
  return iVar1;
}


