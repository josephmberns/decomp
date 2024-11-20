#include "non-continuous-subsequences-1.h"



undefined8 entry(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint local_2c;
  uint local_28;
  
  uVar1 = 1 << (ulong)(param_1 - 1U & 0x1f);
  local_28 = uVar1;
  if (uVar1 != 0) {
    while (uVar2 = local_28 - 1, local_28 != 0) {
      local_2c = uVar1;
      local_28 = uVar2;
      if ((uVar2 & uVar2 + (uVar2 & -uVar2)) != 0) {
        while (local_2c = local_2c >> 1, local_2c != 0) {
          if ((uVar2 & local_2c) != 0) {
            _printf("%s ");
          }
        }
        _putchar(10);
      }
    }
    return 0;
  }
                    // WARNING: Subroutine does not return
  ___assert_rtn("main","non-continuous-subsequences-1.c",7,"n");
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void ___assert_rtn(char *param_1,char *param_2,int param_3,char *param_4)

{
                    // WARNING: Could not recover jumptable at 0x000100003f60. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____assert_rtn_100004000)(param_1,param_2,param_3);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f6c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004008)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _putchar(int param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f78. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__putchar_100004010)(param_1);
  return iVar1;
}


