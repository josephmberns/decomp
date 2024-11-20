#include "temperature-conversion.h"



undefined  [16] _kelvinToCelsius(double param_1)

{
  undefined auVar1 [16];
  
  auVar1._0_8_ = param_1 - 273.15;
  auVar1._8_8_ = 0;
  return auVar1;
}



undefined  [16] _kelvinToFahrenheit(undefined8 param_1)

{
  undefined auVar1 [16];
  
  auVar1._0_8_ = NEON_fmadd(param_1,0x3ffccccccccccccd,0xc07cbab851eb851f);
  auVar1._8_8_ = 0;
  return auVar1;
}



undefined  [16] _kelvinToRankine(double param_1)

{
  undefined auVar1 [16];
  
  auVar1._0_8_ = param_1 * 1.8;
  auVar1._8_8_ = 0;
  return auVar1;
}



int _convertKelvin(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = _printf("K %.2f\n");
  _kelvinToCelsius(param_1,iVar1);
  iVar1 = _printf("C %.2f\n");
  _kelvinToFahrenheit(param_1,iVar1);
  iVar1 = _printf("F %.2f\n");
  _kelvinToRankine(param_1,iVar1);
  iVar1 = _printf("R %.2f");
  return iVar1;
}



undefined8 entry(int param_1,long param_2)

{
  double dVar1;
  
  if (1 < param_1) {
    dVar1 = _atof(*(char **)(param_2 + 8));
    _convertKelvin(dVar1);
  }
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

double _atof(char *param_1)

{
  double dVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f58. Too many branches
                    // WARNING: Treating indirect jump as call
  dVar1 = (double)(*(code *)PTR__atof_100004000)();
  return dVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f64. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004008)((int)param_1);
  return iVar1;
}


