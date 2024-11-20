#include "combinations-1.h"



ulong _comb(ulong param_1,int param_2,ulong param_3,uint param_4)

{
  uint uVar1;
  uint local_24;
  
  if ((int)(param_2 + param_4) <= (int)param_1) {
    if (param_2 == 0) {
      for (local_24 = 0; (int)local_24 < (int)param_1; local_24 = local_24 + 1) {
        if ((param_3 & _one << ((ulong)local_24 & 0x3f)) != 0) {
          _printf("%d ");
        }
      }
      uVar1 = _printf("\n");
      param_1 = (ulong)uVar1;
    }
    else {
      _comb(param_1 & 0xffffffff,param_2 + -1,param_3 | _one << ((ulong)param_4 & 0x3f),param_4 + 1)
      ;
      param_1 = _comb(param_1 & 0xffffffff,param_2,param_3,param_4 + 1);
    }
  }
  return param_1;
}



undefined4 entry(void)

{
  _comb(5,3,0);
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f9c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}


