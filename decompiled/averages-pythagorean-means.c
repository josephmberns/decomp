#include "averages-pythagorean-means.h"



undefined8 entry(int param_1,long param_2)

{
  int iVar1;
  double dVar2;
  double local_40;
  int local_28;
  int local_24;
  
  local_28 = 0;
  local_40 = 1.0;
  for (local_24 = 1; local_24 < param_1; local_24 = local_24 + 1) {
    dVar2 = _atof(*(char **)(param_2 + (long)local_24 * 8));
    local_28 = local_28 + 1;
    local_40 = local_40 * dVar2;
  }
  iVar1 = _printf("Arithmetic mean = %f\n");
  _pow(local_40,1.0 / (double)(long)local_28,iVar1);
  _printf("Geometric mean = %f\n");
  _printf("Harmonic mean = %f\n");
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

double _atof(char *param_1)

{
  double dVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f4c. Too many branches
                    // WARNING: Treating indirect jump as call
  dVar1 = (double)(*(code *)PTR__atof_100004000)();
  return dVar1;
}



void _pow(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f58. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__pow_100004008)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f64. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004010)((int)param_1);
  return iVar1;
}


