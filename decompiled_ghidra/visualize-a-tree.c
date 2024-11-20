#include "visualize-a-tree.h"



ulong _tree(int param_1,undefined **param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  undefined *local_48;
  undefined **local_38;
  undefined *local_30;
  undefined8 local_28;
  undefined **local_20;
  int local_14;
  
  local_30 = (undefined *)0x0;
  local_28 = 0;
  local_20 = param_2;
  local_14 = param_1;
  for (local_38 = param_2;
      (local_38 != (undefined **)0x0 && (_printf("%s"), local_38[1] != (undefined *)0x0));
      local_38 = (undefined **)local_38[1]) {
  }
  uVar2 = _printf("--%d\n");
  uVar4 = (ulong)uVar2;
  if (1 < local_14) {
    if ((local_38 != (undefined **)0x0) && (*local_38 == PTR_s___100008008)) {
      *local_38 = PTR_s__100008010;
    }
    if (local_38 == (undefined **)0x0) {
      local_20 = &local_30;
      local_38 = local_20;
    }
    else {
      local_38[1] = (undefined *)&local_30;
    }
    while (local_14 != 0) {
      iVar3 = _rand();
      iVar1 = 0;
      if (local_14 != 0) {
        iVar1 = iVar3 / local_14;
      }
      iVar1 = (iVar3 - iVar1 * local_14) + 1;
      local_14 = local_14 - iVar1;
      if (local_14 == 0) {
        local_48 = PTR_s___100008008;
      }
      else {
        local_48 = PTR_s___100008000;
      }
      local_30 = local_48;
      uVar4 = _tree(iVar1,local_20);
    }
    local_38[1] = (undefined *)0x0;
  }
  return uVar4;
}



undefined8 entry(int param_1,long param_2)

{
  int local_24;
  
  if ((param_1 < 2) || (local_24 = _atoi(*(char **)(param_2 + 8)), local_24 < 0)) {
    local_24 = 8;
  }
  _tree(local_24,0);
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _atoi(char *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f74. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__atoi_100004000)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f80. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004008)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _rand(void)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f8c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__rand_100004010)();
  return iVar1;
}


