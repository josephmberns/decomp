#include "arithmetic-geometric-mean-1.h"



undefined  [16] _agm(double param_1,double param_2)

{
  double dVar1;
  undefined auVar2 [16];
  double local_20;
  double local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  if (0.0 <= param_1 * param_2) {
    while (1e-16 < ABS(local_18 - local_20)) {
      dVar1 = local_18 + local_20;
      local_20 = SQRT(local_18 * local_20);
      local_18 = dVar1 / 2.0;
    }
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_18;
    return auVar2;
  }
  _printf("arithmetic-geometric mean undefined when x*y<0\n");
                    // WARNING: Subroutine does not return
  _exit(1);
}



undefined4 entry(void)

{
  int iVar1;
  undefined8 local_28;
  undefined8 local_20;
  
  _printf("Enter two numbers: ");
  iVar1 = _scanf("%lf%lf");
  _agm(local_20,local_28,iVar1);
  _printf("The arithmetic-geometric mean is %lf\n");
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _exit(int param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f0c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__exit_100004000)(param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f18. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004008)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _scanf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f24. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__scanf_100004010)((int)param_1);
  return iVar1;
}


