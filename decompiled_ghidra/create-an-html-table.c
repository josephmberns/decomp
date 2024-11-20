#include "create-an-html-table.h"



undefined8 entry(void)

{
  int local_18;
  
  _printf(
         "<table style=\"text-align:center; border: 1px solid\"><th></th><th>X</th><th>Y</th><th>Z</th>"
         );
  for (local_18 = 0; local_18 < 4; local_18 = local_18 + 1) {
    _rand();
    _rand();
    _rand();
    _printf("<tr><th>%d</th><td>%d</td><td>%d</td><td>%d</td></tr>");
  }
  _printf("</table>");
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003efc. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _rand(void)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f08. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__rand_100004008)();
  return iVar1;
}


