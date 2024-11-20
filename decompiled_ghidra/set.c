#include "set.h"



int _show_set(uint param_1)

{
  int iVar1;
  uint local_24;
  
  _printf("%s is:");
  for (local_24 = 0; (uint)(1 << (ulong)(local_24 & 0x1f)) <= param_1; local_24 = local_24 + 1) {
    if ((param_1 & 1 << (ulong)(local_24 & 0x1f)) != 0) {
      _printf(" %d");
    }
  }
  iVar1 = _putchar(10);
  return iVar1;
}



undefined4 entry(void)

{
  uint uVar1;
  uint local_1c;
  uint local_18;
  
  local_1c = 0;
  for (local_18 = 0; (int)local_18 < 10; local_18 = local_18 + 3) {
    local_1c = local_1c | 1 << (ulong)(local_18 & 0x1f);
  }
  _show_set(local_1c,"a");
  for (local_18 = 0; (int)local_18 < 5; local_18 = local_18 + 1) {
    _printf("\t%d%s in set a\n");
  }
  uVar1 = local_1c & 0xfffffffe | 0x420;
  _show_set(uVar1,"b");
  _show_set(local_1c | uVar1,"union(a, b)");
  _show_set(local_1c & uVar1,"c = common(a, b)");
  _show_set(local_1c & (uVar1 ^ 0xffffffff),"a - b");
  _show_set(uVar1 & (local_1c ^ 0xffffffff),"b - a");
  _printf("b is%s a subset of a\n");
  _printf("c is%s a subset of a\n");
  _printf("union(a, b) - common(a, b) %s union(a - b, b - a)\n");
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ed4. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _putchar(int param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ee0. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__putchar_100004008)(param_1);
  return iVar1;
}


