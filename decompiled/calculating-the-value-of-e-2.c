#include "calculating-the-value-of-e-2.h"



undefined8 entry(void)

{
  long lVar1;
  double dVar2;
  double dVar3;
  int local_34;
  double local_28;
  long local_20;
  
  local_20 = 1;
  local_28 = 2.0;
  local_34 = 2;
  do {
    lVar1 = (long)local_34;
    local_34 = local_34 + 1;
    local_20 = local_20 * lVar1;
    dVar3 = (double)NEON_ucvtf(local_20);
    dVar2 = local_28 + 1.0 / dVar3;
    dVar3 = dVar2 - local_28;
    local_28 = dVar2;
  } while (1e-15 <= ABS(dVar3));
  _printf("e = %.15f\n");
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


