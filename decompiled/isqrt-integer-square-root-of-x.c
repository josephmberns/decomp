#include "isqrt-integer-square-root-of-x.h"



long _isqrt(long param_1)

{
  long lVar1;
  undefined8 local_18;
  undefined8 local_10;
  undefined8 local_8;
  
  local_18 = 0;
  for (local_10 = 1; local_8 = param_1, (long)local_10 <= param_1; local_10 = local_10 << 2) {
  }
  while (1 < local_10) {
    local_10 = (long)local_10 >> 2;
    lVar1 = (local_8 - local_18) - local_10;
    local_18 = local_18 >> 1;
    if (-1 < lVar1) {
      local_18 = local_18 + local_10;
      local_8 = lVar1;
    }
  }
  return local_18;
}



undefined4 entry(void)

{
  int local_24;
  long local_20;
  
  _printf("Integer square root for numbers 0 to 65:\n");
  for (local_24 = 0; local_24 < 0x42; local_24 = local_24 + 1) {
    _isqrt((long)local_24);
    _printf("%lld ");
  }
  _printf("\n\n");
  _printf("Integer square roots of odd powers of 7 from 1 to 21:\n");
  _printf(" n |              7 ^ n | isqrt(7 ^ n)\n");
  local_20 = 7;
  for (local_24 = 1; local_24 < 0x16; local_24 = local_24 + 2) {
    _isqrt(local_20);
    _printf("%2d | %18lld | %12lld\n");
    local_20 = local_20 * 0x31;
  }
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ef0. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}


