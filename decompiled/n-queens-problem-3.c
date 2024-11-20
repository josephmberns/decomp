#include "n-queens-problem-3.h"



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _solve(int param_1,uint param_2,int param_3,uint param_4)

{
  int *piVar1;
  uint uVar2;
  undefined4 local_24;
  
  if (param_1 == 0) {
    __count = __count + 1;
  }
  else {
    uVar2 = (param_2 | param_3 << 1 | param_4 >> 1) & __full;
    if (uVar2 != __full) {
      piVar1 = (int *)(__qs + (ulong)(param_1 - 1U) * 4);
      *piVar1 = 0;
      for (local_24 = 1; local_24 <= __full; local_24 = local_24 << 1) {
        if ((local_24 & uVar2) == 0) {
          _solve(param_1 - 1U,local_24 | param_2,local_24 | param_3 << 1,local_24 | param_4 >> 1);
        }
        *piVar1 = *piVar1 + 1;
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Restarted to delay deadcode elimination for space: ram

undefined4 entry(int param_1,long param_2)

{
  if ((param_1 < 2) || (__nn = _atoi(*(char **)(param_2 + 8)), __nn == 0)) {
    __nn = 8;
  }
  __qs = _calloc((ulong)__nn,4);
  __full = (1 << (ulong)(__nn & 0x1f)) + -1;
  _solve(__nn,0,0);
  _printf("\nSolutions: %d\n");
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _atoi(char *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f7c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__atoi_100004000)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _calloc(size_t param_1,size_t param_2)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f88. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__calloc_100004008)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f94. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004010)((int)param_1);
  return iVar1;
}


