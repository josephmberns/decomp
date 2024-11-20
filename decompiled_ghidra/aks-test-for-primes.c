#include "aks-test-for-primes.h"



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _coef(int param_1)

{
  int local_1c;
  int local_18;
  
  if ((-1 < param_1) && (param_1 < 0x40)) {
    __c = 1;
    for (local_18 = 0; local_18 < param_1; local_18 = local_18 + 1) {
      local_1c = local_18;
      *(undefined8 *)(&_c + (long)(local_18 + 1) * 8) = 1;
      for (; 0 < local_1c; local_1c = local_1c + -1) {
        *(long *)(&_c + (long)local_1c * 8) =
             *(long *)(&_c + (long)(local_1c + -1) * 8) - *(long *)(&_c + (long)local_1c * 8);
      }
      __c = -__c;
    }
    return;
  }
                    // WARNING: Subroutine does not return
  _abort();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

bool _is_prime(int param_1)

{
  long lVar1;
  int iVar2;
  bool bVar3;
  long lVar4;
  int local_18;
  
  _coef(param_1);
  __c = __c + 1;
  *(long *)(&_c + (long)param_1 * 8) = *(long *)(&_c + (long)param_1 * 8) + -1;
  local_18 = param_1;
  do {
    iVar2 = local_18 + -1;
    bVar3 = false;
    if (local_18 != 0) {
      lVar4 = (long)param_1;
      lVar1 = 0;
      if (lVar4 != 0) {
        lVar1 = *(long *)(&_c + (long)iVar2 * 8) / lVar4;
      }
      bVar3 = *(long *)(&_c + (long)iVar2 * 8) == lVar1 * lVar4;
    }
    local_18 = iVar2;
  } while (bVar3);
  return iVar2 < 0;
}



int _show(int param_1)

{
  bool bVar1;
  int iVar2;
  int local_14;
  
  local_14 = param_1;
  do {
    iVar2 = _printf("%+lldx^%d");
    bVar1 = local_14 != 0;
    local_14 = local_14 + -1;
  } while (bVar1);
  return iVar2;
}



undefined8 entry(void)

{
  int iVar1;
  int local_18;
  
  for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
    _coef(local_18);
    _printf("(x-1)^%d = ");
    _show(local_18);
    _putchar(10);
  }
  _printf("\nprimes (never mind the 1):");
  for (local_18 = 1; local_18 < 0x40; local_18 = local_18 + 1) {
    iVar1 = _is_prime(local_18);
    if (iVar1 != 0) {
      _printf(" %d");
    }
  }
  _putchar(10);
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _abort(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f54. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__abort_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f60. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004008)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _putchar(int param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f6c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__putchar_100004010)(param_1);
  return iVar1;
}


