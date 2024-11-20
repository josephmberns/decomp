#include "sierpinski-carpet-1.h"



undefined8 entry(void)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  local_20 = 1;
  for (local_18 = 0; local_18 < 3; local_18 = local_18 + 1) {
    local_20 = local_20 * 3;
  }
  local_18 = 0;
  do {
    if (local_20 <= local_18) {
      return 0;
    }
    for (local_1c = 0; local_24 = local_20, local_1c < local_20; local_1c = local_1c + 1) {
      do {
        do {
          local_24 = local_24 / 3;
          if (local_24 == 0) goto LAB_100003f24;
          iVar2 = local_24 * 3;
          iVar3 = 0;
          if (iVar2 != 0) {
            iVar3 = local_18 / iVar2;
          }
          iVar4 = 0;
          if (local_24 != 0) {
            iVar4 = (local_18 - iVar3 * iVar2) / local_24;
          }
        } while (iVar4 != 1);
        iVar2 = local_24 * 3;
        iVar3 = 0;
        if (iVar2 != 0) {
          iVar3 = local_1c / iVar2;
        }
        iVar4 = 0;
        if (local_24 != 0) {
          iVar4 = (local_1c - iVar3 * iVar2) / local_24;
        }
      } while (iVar4 != 1);
LAB_100003f24:
      pcVar1 = "  ";
      if (local_24 == 0) {
        pcVar1 = "##";
      }
      _printf(pcVar1);
    }
    _printf("\n");
    local_18 = local_18 + 1;
  } while( true );
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f9c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}


