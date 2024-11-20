#include "truncatable-primes-3.h"



undefined4 _is_prime(int param_1)

{
  int iVar1;
  int iVar2;
  int local_c;
  undefined4 local_4;
  
  if (param_1 % 3 == 0) {
    local_4 = 0;
  }
  else {
    for (local_c = 6; local_c * local_c <= param_1; local_c = local_c + 6) {
      iVar1 = local_c + 1;
      iVar2 = 0;
      if (iVar1 != 0) {
        iVar2 = param_1 / iVar1;
      }
      if (param_1 == iVar2 * iVar1) {
        return 0;
      }
      iVar1 = local_c + 5;
      iVar2 = 0;
      if (iVar1 != 0) {
        iVar2 = param_1 / iVar1;
      }
      if (param_1 == iVar2 * iVar1) {
        return 0;
      }
    }
    local_4 = 1;
  }
  return local_4;
}



void _left(int param_1,int param_2)

{
  int iVar1;
  undefined4 local_1c;
  
  if (_maxl < param_1) {
    _maxl = param_1;
  }
  if (param_1 < 100000) {
    for (local_1c = 1; local_1c < 10; local_1c = local_1c + 1) {
      iVar1 = _is_prime();
      if (iVar1 != 0) {
        _left(local_1c * param_2 * 10 + param_1,param_2 * 10);
      }
    }
  }
  return;
}



void _right(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 local_18;
  
  if (_maxr < param_1) {
    _maxr = param_1;
  }
  if (param_1 < 100000) {
    for (local_18 = 1; local_18 < 4; local_18 = local_18 + 1) {
      iVar1 = *(int *)((long)local_18 * 4 + 0x100008000);
      iVar2 = _is_prime();
      if (iVar2 != 0) {
        _right(param_1 * 10 + iVar1);
      }
    }
  }
  return;
}



undefined4 entry(void)

{
  _left();
  _left(7,1);
  _right(3);
  _right(5);
  _right(7);
  _printf("%d %d\n");
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f94. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}


