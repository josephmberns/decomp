#include "trigonometric-functions.h"



undefined4 entry(void)

{
  int iVar1;
  double dVar2;
  double dVar3;
  
  dVar2 = (double)_atan(0x3ff0000000000000);
  dVar2 = dVar2 * 4.0;
  dVar3 = dVar2 / 4.0;
  _sin(dVar3);
  _sin((dVar2 * 45.0) / 180.0);
  iVar1 = _printf("%f %f\n");
  _cos(dVar3,iVar1);
  _cos((dVar2 * 45.0) / 180.0);
  iVar1 = _printf("%f %f\n");
  _tan(dVar3,iVar1);
  _tan((dVar2 * 45.0) / 180.0);
  iVar1 = _printf("%f %f\n");
  _sin(dVar3,iVar1);
  _asin();
  iVar1 = _printf("%f %f\n");
  _cos(dVar3,iVar1);
  _acos();
  iVar1 = _printf("%f %f\n");
  _tan(dVar3,iVar1);
  _atan();
  _printf("%f %f\n");
  return 0;
}



void _acos(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f44. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__acos_100004000)();
  return;
}



void _asin(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f50. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__asin_100004008)();
  return;
}



void _atan(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f5c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__atan_100004010)();
  return;
}



void _cos(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f68. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__cos_100004018)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f74. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004020)((int)param_1);
  return iVar1;
}



void _sin(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f80. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__sin_100004028)();
  return;
}



void _tan(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f8c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__tan_100004030)();
  return;
}


