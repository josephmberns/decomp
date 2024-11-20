#include "ordered-partitions-2.h"



int _show_part(uint param_1)

{
  int iVar1;
  uint local_18;
  
  _putchar(0x7b);
  for (local_18 = 0; (uint)(1 << (ulong)(local_18 & 0x1f)) <= param_1; local_18 = local_18 + 1) {
    if ((param_1 & 1 << (ulong)(local_18 & 0x1f)) != 0) {
      _printf(" %d");
    }
  }
  iVar1 = _printf("%s");
  return iVar1;
}



ulong _gen_bits(ulong param_1,uint param_2,uint param_3,int param_4,int param_5)

{
  uint uVar1;
  long lVar2;
  uint local_28;
  int local_24;
  int local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  
  local_14 = (uint)param_1;
  local_24 = param_5;
  local_20 = param_4;
  local_1c = param_3;
  local_18 = param_2;
  while( true ) {
    if (local_20 != 0) {
      while (local_14 != 0) {
        uVar1 = local_14 & -local_14;
        local_14 = local_14 & (uVar1 ^ 0xffffffff);
        param_1 = _gen_bits(local_14,local_18,local_1c | uVar1,local_20 + -1,local_24);
      }
      return param_1;
    }
    lVar2 = (long)local_24;
    local_24 = local_24 + 1;
    *(uint *)(&_bits + lVar2 * 4) = local_1c;
    if (local_24 == 3) break;
    local_18 = local_18 & (local_1c ^ 0xffffffff);
    local_1c = 0;
    local_20 = (&_parts)[local_24];
    local_14 = local_18;
  }
  for (local_28 = 0; local_28 < 3; local_28 = local_28 + 1) {
    _show_part(*(undefined4 *)(&_bits + (ulong)local_28 * 4));
  }
  uVar1 = _putchar(10);
  return (ulong)uVar1;
}



undefined4 entry(void)

{
  int local_1c;
  uint local_18;
  
  local_1c = 1;
  for (local_18 = 0; local_18 < 3; local_18 = local_18 + 1) {
    local_1c = local_1c << (ulong)((&_parts)[local_18] & 0x1f);
  }
  _gen_bits(local_1c + -1,local_1c + -1,0,_parts);
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f8c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _putchar(int param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f98. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__putchar_100004008)(param_1);
  return iVar1;
}


