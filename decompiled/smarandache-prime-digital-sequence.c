#include "smarandache-prime-digital-sequence.h"



int _next_prime_digit_number(uint param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 local_14;
  
  if (param_1 == 0) {
    local_14 = 2;
  }
  else {
    uVar1 = param_1 % 10;
    if (uVar1 == 2) {
      local_14 = param_1 + 1;
    }
    else if ((uVar1 == 3) || (uVar1 == 5)) {
      local_14 = param_1 + 2;
    }
    else {
      iVar2 = _next_prime_digit_number(param_1 / 10);
      local_14 = iVar2 * 10 + 2;
    }
  }
  return local_14;
}



bool _is_prime(uint param_1)

{
  uint uVar1;
  int local_10;
  uint local_c;
  bool local_1;
  
  if (param_1 < 2) {
    local_1 = false;
  }
  else if (param_1 % 2 == 0) {
    local_1 = param_1 == 2;
  }
  else if (param_1 % 3 == 0) {
    local_1 = param_1 == 3;
  }
  else {
    if (param_1 % 5 != 0) {
      local_c = 7;
      do {
        for (local_10 = 0; local_10 < 8; local_10 = local_10 + 1) {
          if (param_1 < local_c * local_c) {
            return true;
          }
          uVar1 = 0;
          if (local_c != 0) {
            uVar1 = param_1 / local_c;
          }
          if (param_1 == uVar1 * local_c) {
            return false;
          }
          local_c = local_c + *(int *)(&DAT_100003ee0 + (long)local_10 * 4);
        }
      } while( true );
    }
    local_1 = param_1 == 5;
  }
  return local_1;
}



undefined8 entry(void)

{
  ulong uVar1;
  int local_24;
  uint local_1c;
  
  _setlocale(0,"");
  local_1c = 0;
  _printf("First 25 SPDS primes:\n");
  local_24 = 0;
  while (local_1c < 1000000000) {
    local_1c = _next_prime_digit_number(local_1c);
    uVar1 = _is_prime(local_1c);
    if ((uVar1 & 1) != 0) {
      if (local_24 < 0x19) {
        if (0 < local_24) {
          _printf(" ");
        }
        _printf("%\'u");
      }
      else if (local_24 == 0x19) {
        _printf("\n");
      }
      local_24 = local_24 + 1;
      if (local_24 == 100) {
        _printf("Hundredth SPDS prime: %\'u\n");
      }
      else if (local_24 == 1000) {
        _printf("Thousandth SPDS prime: %\'u\n");
      }
      else if (local_24 == 10000) {
        _printf("Ten thousandth SPDS prime: %\'u\n");
      }
    }
  }
  _printf("Largest SPDS prime less than %\'u: %\'u\n");
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ed0. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}



void _setlocale(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003edc. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__setlocale_100004008)();
  return;
}


