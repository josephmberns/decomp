#include "law-of-cosines---triples-1.h"



undefined8 entry(void)

{
  int local_28;
  int local_24;
  int local_20;
  int local_18;
  
  for (local_18 = 0; local_18 < 3; local_18 = local_18 + 1) {
    for (local_20 = 1; local_20 < 0xe; local_20 = local_20 + 1) {
      for (local_24 = 1; local_24 <= local_20; local_24 = local_24 + 1) {
        for (local_28 = 1; local_28 < 0xe; local_28 = local_28 + 1) {
        }
      }
    }
    _printf("%s,  number of triangles = %d\n");
  }
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f84. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}


