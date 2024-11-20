#include "fibonacci-word-fractal.h"



undefined8 entry(void)

{
  byte local_15;
  
  _puts(
       "%!PS-Adobe-3.0 EPSF\n%%BoundingBox: -10 -10 400 565\n/a{0 0 moveto 0 .4 translate 0 0 lineto stroke -1 1 scale}def\n/b{a 90 rotate}def"
       );
  for (local_15 = 99; local_15 < 0x7b; local_15 = local_15 + 1) {
    _printf("/%c{%c %c}def\n");
  }
  _puts("0 setlinewidth z showpage\n%%EOF");
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ee4. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _puts(char *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ef0. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__puts_100004008)((int)param_1);
  return iVar1;
}


