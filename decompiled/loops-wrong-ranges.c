#include "loops-wrong-ranges.h"



undefined8 entry(void)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int local_40;
  int iStack_3c;
  int iStack_38;
  int local_20;
  int local_1c;
  int local_18;
  
  for (local_18 = 0; local_18 < 9; local_18 = local_18 + 1) {
    uVar3 = *(undefined8 *)((long)local_18 * 0x18 + 0x100008008);
    uVar2 = *(undefined8 *)(&_examples + (long)local_18 * 0x18);
    _printf("%s\n");
    _printf("Range(%d, %d, %d) -> [");
    bVar1 = true;
    local_40 = (int)uVar2;
    local_20 = 0;
    for (local_1c = local_40; iStack_3c = (int)((ulong)uVar2 >> 0x20),
        local_1c <= iStack_3c && local_20 < 10; local_1c = local_1c + iStack_38) {
      _printf("%d ");
      bVar1 = false;
      iStack_38 = (int)uVar3;
      local_20 = local_20 + 1;
    }
    if (!bVar1) {
      _printf("\b");
    }
    _printf("]\n\n");
  }
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e64. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}


