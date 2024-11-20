#include "wieferich-primes.h"



long _modpow(ulong param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 local_28;
  undefined8 local_18;
  undefined8 local_10;
  undefined8 local_8;
  
  local_28 = 1;
  if (param_3 == 1) {
    local_8 = 0;
  }
  else {
    uVar1 = 0;
    if (param_3 != 0) {
      uVar1 = param_1 / param_3;
    }
    local_10 = param_1 - uVar1 * param_3;
    for (local_18 = param_2; local_18 != 0; local_18 = local_18 >> 1) {
      if ((local_18 & 1) == 1) {
        uVar1 = 0;
        if (param_3 != 0) {
          uVar1 = (ulong)(local_28 * local_10) / param_3;
        }
        local_28 = local_28 * local_10 - uVar1 * param_3;
      }
      uVar1 = 0;
      if (param_3 != 0) {
        uVar1 = (ulong)(local_10 * local_10) / param_3;
      }
      local_10 = local_10 * local_10 - uVar1 * param_3;
    }
    local_8 = local_28;
  }
  return local_8;
}



ulong _wieferich_primes(ulong param_1)

{
  uint uVar1;
  ulong local_18;
  
  for (local_18 = 2; local_18 < 5000; local_18 = local_18 + 1) {
    if ((((&DAT_100008000)[local_18] & 1) != 0) &&
       (param_1 = _modpow(2,local_18 - 1,local_18 * local_18), param_1 == 1)) {
      uVar1 = _printf("%lld\n");
      param_1 = (ulong)uVar1;
    }
  }
  return param_1;
}



undefined4 entry(void)

{
  int iVar1;
  
  FUN_100003de4();
  iVar1 = _printf("Wieferich primes less than %d:\n");
  _wieferich_primes(iVar1);
  return 0;
}



void FUN_100003de4(void)

{
  ulong local_18;
  int local_c;
  long local_8;
  
  DAT_100008000 = 0;
  DAT_100008001 = 0;
  for (local_c = 2; local_c < 5000; local_c = local_c + 1) {
    (&DAT_100008000)[local_c] = 1;
  }
  for (local_c = 4; local_c < 5000; local_c = local_c + 2) {
    (&DAT_100008000)[local_c] = 0;
  }
  for (local_8 = 3; local_18 = local_8 * local_8, local_18 < 5000; local_8 = local_8 + 2) {
    if (((&DAT_100008000)[local_8] & 1) != 0) {
      for (; local_18 < 5000; local_18 = local_18 + local_8 * 2) {
        (&DAT_100008000)[local_18] = 0;
      }
    }
  }
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f6c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}


