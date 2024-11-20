#include "unicode-strings.h"



bool entry(void)

{
  long lVar1;
  
  lVar1 = _setlocale(2,"");
  if (lVar1 != 0) {
    _printf("airplane\n");
    _printf("club diamond club spade\n");
    _printf("for ty two\n");
  }
  else {
    _fprintf(*(FILE **)PTR____stderrp_100004000,"Locale failure, check your env vars\n");
  }
  return lVar1 == 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fprintf(FILE *param_1,char *param_2,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f34. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fprintf_100004008)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f40. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004010)((int)param_1);
  return iVar1;
}



void _setlocale(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f4c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__setlocale_100004018)();
  return;
}


