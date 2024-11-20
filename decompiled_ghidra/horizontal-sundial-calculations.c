#include "horizontal-sundial-calculations.h"



undefined8 entry(void)

{
  int iVar1;
  double dVar2;
  double dVar3;
  int local_3c;
  double local_38;
  double local_30;
  double local_20;
  
  _printf("%s: ");
  _scanf("%lf");
  _printf("%s: ");
  _scanf("%lf");
  _printf("%s: ");
  _scanf("%lf");
  iVar1 = _printf("\n");
  dVar2 = (double)_sin((local_20 * 3.141592653589793) / 180.0,iVar1);
  _printf("sine of latitude: %.3f\n");
  _printf("diff longitude: %.3f\n\n");
  iVar1 = _printf("Hour, sun hour angle, dial hour line angle from 6am to 6pm\n");
  for (local_3c = -6; local_3c < 7; local_3c = local_3c + 1) {
    dVar3 = (double)_tan(((((double)(long)local_3c * 15.0 - local_30) + local_38) *
                         3.141592653589793) / 180.0,iVar1);
    _atan(dVar2 * dVar3);
    iVar1 = _printf("HR= %3d;  \t  HRA=%7.3f;  \t  HLA= %7.3f\n");
  }
  return 0;
}



void _atan(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003e8c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__atan_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e98. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004008)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _scanf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ea4. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__scanf_100004010)((int)param_1);
  return iVar1;
}



void _sin(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003eb0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__sin_100004018)();
  return;
}



void _tan(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003ebc. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__tan_100004020)();
  return;
}


