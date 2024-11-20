#include "symmetric-difference-1.h"



void _uniq(long param_1,int param_2)

{
  int iVar1;
  int local_24;
  int local_20;
  
  for (local_20 = 0; local_24 = local_20, local_20 < param_2; local_20 = local_20 + 1) {
    while (local_24 = local_24 + 1, local_24 < param_2) {
      if (((*(long *)(param_1 + (long)local_24 * 8) != 0) &&
          (*(long *)(param_1 + (long)local_20 * 8) != 0)) &&
         (iVar1 = _strcmp(*(char **)(param_1 + (long)local_20 * 8),
                          *(char **)(param_1 + (long)local_24 * 8)), iVar1 == 0)) {
        *(undefined8 *)(param_1 + (long)local_24 * 8) = 0;
      }
    }
  }
  return;
}



undefined4 _in_set(long param_1,int param_2,char *param_3)

{
  int iVar1;
  int local_34;
  
  local_34 = 0;
  while( true ) {
    if (param_2 <= local_34) {
      return 0;
    }
    if ((*(long *)(param_1 + (long)local_34 * 8) != 0) &&
       (iVar1 = _strcmp(*(char **)(param_1 + (long)local_34 * 8),param_3), iVar1 == 0)) break;
    local_34 = local_34 + 1;
  }
  return 1;
}



ulong _show_diff(ulong param_1,int param_2,undefined8 param_3,undefined4 param_4)

{
  uint uVar1;
  ulong uVar2;
  int local_30;
  
  uVar2 = param_1;
  for (local_30 = 0; local_30 < param_2; local_30 = local_30 + 1) {
    if ((*(long *)(param_1 + (long)local_30 * 8) != 0) &&
       (uVar2 = _in_set(param_3,param_4,*(undefined8 *)(param_1 + (long)local_30 * 8)),
       (int)uVar2 == 0)) {
      uVar1 = _printf("  %s\n");
      uVar2 = (ulong)uVar1;
    }
  }
  return uVar2;
}



void _show_sym_diff(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  _show_diff(param_1,param_2,param_3,param_4);
  _show_diff(param_3,param_4,param_1,param_2);
  return;
}



undefined4 entry(void)

{
  _uniq();
  _uniq(&_B,5);
  _printf("A \\ B:\n");
  _show_diff(&_A,5,&_B);
  _printf("\nB \\ A:\n");
  _show_diff(&_B,5,&_A);
  _printf("\nA ^ B:\n");
  _show_sym_diff(&_A,5,&_B);
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f5c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _strcmp(char *param_1,char *param_2)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f68. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__strcmp_100004008)((int)param_1);
  return iVar1;
}


