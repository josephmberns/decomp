#include "99-bottles-of-beer-2.h"



int entry(int param_1,long *param_2)

{
  int local_18;
  int local_14;
  
  if (param_1 == 99) {
    local_14 = 99;
  }
  else {
    local_18 = param_1;
    if (*param_2 != 0) {
      *param_2 = 0;
      local_18 = 0;
    }
    local_14 = entry(local_18 + 1,param_2);
    _printf("%d bottle%c of beer on the wall\n");
    _printf("%d bottle%c of beer\n");
    _printf("Take one down, pass it around\n");
    _printf("%d bottle%c of beer on the wall\n\n");
    local_14 = local_14 + -1;
  }
  return local_14;
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


