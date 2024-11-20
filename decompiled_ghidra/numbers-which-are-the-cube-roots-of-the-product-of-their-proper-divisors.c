#include "numbers-which-are-the-cube-roots-of-the-product-of-their-proper-divisors.h"



int _divisorCount(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_10;
  undefined4 local_8;
  
  local_10 = 0;
  iVar3 = 2;
  if (param_1 % 2 == 0) {
    iVar3 = 1;
  }
  for (local_8 = 1; local_8 * local_8 <= param_1; local_8 = local_8 + iVar3) {
    iVar1 = 0;
    if (local_8 != 0) {
      iVar1 = param_1 / local_8;
    }
    iVar2 = local_10;
    if (param_1 == iVar1 * local_8) {
      iVar1 = 0;
      if (local_8 != 0) {
        iVar1 = param_1 / local_8;
      }
      iVar2 = local_10 + 1;
      if (iVar1 != local_8) {
        iVar2 = local_10 + 2;
      }
    }
    local_10 = iVar2;
  }
  return local_10;
}



undefined8 entry(void)

{
  int iVar1;
  int local_100;
  int local_fc;
  int local_f8;
  int aiStack_f0 [50];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100004008;
  local_fc = 0;
  local_100 = 1;
  _printf("First 50 numbers which are the cube roots of the products of their proper divisors:\n");
  _setlocale(4,"");
  do {
    iVar1 = _divisorCount(local_100);
    if ((local_100 == 1) || (iVar1 == 8)) {
      iVar1 = local_fc + 1;
      if (iVar1 < 0x33) {
        aiStack_f0[local_fc] = local_100;
        local_fc = iVar1;
        if (iVar1 == 0x32) {
          for (local_f8 = 0; local_f8 < 0x32; local_f8 = local_f8 + 1) {
            _printf("%3d ");
            if ((local_f8 + 1) % 10 == 0) {
              _printf("\n");
            }
          }
        }
      }
      else if (iVar1 == 500) {
        _printf("\n500th   : %\'d\n");
        local_fc = iVar1;
      }
      else if (iVar1 == 5000) {
        _printf("5,000th : %\'d\n");
        local_fc = iVar1;
      }
      else {
        local_fc = iVar1;
        if (iVar1 == 50000) {
          iVar1 = _printf("50,000th: %\'d\n");
          if (*(long *)PTR____stack_chk_guard_100004008 != local_28) {
                    // WARNING: Subroutine does not return
            ___stack_chk_fail(iVar1);
          }
          return 0;
        }
      }
    }
    local_100 = local_100 + 1;
  } while( true );
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003ef8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f04. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004010)((int)param_1);
  return iVar1;
}



void _setlocale(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f10. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__setlocale_100004018)();
  return;
}


