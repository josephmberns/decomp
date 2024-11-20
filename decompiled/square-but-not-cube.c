#include "square-but-not-cube.h"



undefined8 entry(ulong param_1)

{
  uint uVar1;
  int iVar2;
  double dVar3;
  int local_1c;
  int local_18;
  
  local_18 = 1;
  local_1c = 0;
  while (local_1c < 0x1e) {
    dVar3 = (double)_cbrt((double)(long)(local_18 * local_18),param_1);
    iVar2 = (int)dVar3;
    if (iVar2 * iVar2 * iVar2 == local_18 * local_18) {
      uVar1 = _printf("%d is square and cube\n");
    }
    else {
      local_1c = local_1c + 1;
      uVar1 = _printf("%d\n");
    }
    param_1 = (ulong)uVar1;
    local_18 = local_18 + 1;
  }
  return 0;
}



void _cbrt(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f7c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__cbrt_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f88. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004008)((int)param_1);
  return iVar1;
}


