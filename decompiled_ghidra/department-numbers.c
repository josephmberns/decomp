#include "department-numbers.h"



undefined8 entry(void)

{
  int local_20;
  int local_1c;
  int local_18;
  
  _printf("Police     Sanitation         Fire\n");
  _printf("----------------------------------");
  for (local_18 = 2; local_18 < 7; local_18 = local_18 + 2) {
    for (local_1c = 1; local_1c < 8; local_1c = local_1c + 1) {
      for (local_20 = 1; local_20 < 8; local_20 = local_20 + 1) {
        if ((((local_18 != local_1c) && (local_1c != local_20)) && (local_20 != local_18)) &&
           (local_18 + local_20 + local_1c == 0xc)) {
          _printf("\n%d\t\t%d\t\t%d");
        }
      }
    }
  }
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f50. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}


