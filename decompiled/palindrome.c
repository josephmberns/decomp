#include "palindrome.h"



undefined8 entry(void)

{
  uint uVar1;
  
  uVar1 = _isPalindrome(0);
  if (((uVar1 ^ 1) & 1) != 0) {
                    // WARNING: Subroutine does not return
    ___assert_rtn("main","palindrome.c",0x10,"isPalindrome(0)");
  }
  uVar1 = _isPalindrome();
  if (((uVar1 ^ 1) & 1) != 0) {
                    // WARNING: Subroutine does not return
    ___assert_rtn("main","palindrome.c",0x11,"isPalindrome(1)");
  }
  uVar1 = _isPalindrome(0x3021);
  if (((uVar1 ^ 1) & 1) != 0) {
                    // WARNING: Subroutine does not return
    ___assert_rtn("main","palindrome.c",0x12,"isPalindrome(12321)");
  }
  uVar1 = _isPalindrome(0x4d2);
  if ((uVar1 & 1) != 0) {
                    // WARNING: Subroutine does not return
    ___assert_rtn("main","palindrome.c",0x13,"!isPalindrome(1234)");
  }
  return 0;
}



bool _isPalindrome(int param_1)

{
  undefined4 local_8;
  undefined4 local_4;
  
  local_8 = 0;
  for (local_4 = param_1; local_4 != 0; local_4 = local_4 / 10) {
    local_8 = local_8 * 10 + local_4 % 10;
  }
  return param_1 == local_8;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void ___assert_rtn(char *param_1,char *param_2,int param_3,char *param_4)

{
                    // WARNING: Could not recover jumptable at 0x000100003f40. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____assert_rtn_100004000)(param_1,param_2,param_3);
  return;
}


