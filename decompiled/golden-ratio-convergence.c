#include "golden-ratio-convergence.h"



undefined8 entry(void)

{
  int iVar1;
  
  FUN_100003d58();
  iVar1 = _printf("\n");
  FUN_100003e44(iVar1);
  return 0;
}



int FUN_100003d58(void)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float local_18;
  
  local_18 = 1.0;
  do {
    fVar3 = 1.0 / local_18 + 1.0;
    fVar1 = fVar3 - local_18;
    local_18 = fVar3;
  } while (1e-05 < ABS(fVar1));
  _printf("Using type float --\n");
  _printf("Result: %f after %d iterations\n");
  NEON_fmadd(0xbf000000,0x404f1bbd,fVar3);
  iVar2 = _printf("The error is approximately %f\n");
  return iVar2;
}



int FUN_100003e44(void)

{
  double dVar1;
  int iVar2;
  double dVar3;
  double local_20;
  
  local_20 = 1.0;
  do {
    dVar3 = 1.0 / local_20 + 1.0;
    dVar1 = dVar3 - local_20;
    local_20 = dVar3;
  } while (1e-05 < ABS(dVar1));
  _printf("Using type double --\n");
  _printf("Result: %f after %d iterations\n");
  NEON_fmadd(0xbfe0000000000000,0x4009e3779b97f4a8,dVar3);
  iVar2 = _printf("The error is approximately %f\n");
  return iVar2;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f2c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}


