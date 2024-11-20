#include "soloways-recurring-rainfall.h"



undefined8 entry(void)

{
  int iVar1;
  float fVar2;
  undefined4 uVar3;
  int local_30;
  int local_28;
  undefined4 local_24;
  
  local_24 = 0;
  local_28 = 0;
  while( true ) {
    while( true ) {
      _printf("Enter rainfall int, 99999 to quit: ");
      iVar1 = _scanf("%d");
      if (iVar1 != 0) break;
      _printf("Invalid input\n");
      do {
        iVar1 = _getchar();
      } while (iVar1 != 10);
    }
    if (local_30 == 99999) break;
    local_28 = local_28 + 1;
    fVar2 = (float)NEON_ucvtf(local_28);
    uVar3 = NEON_fmadd(1.0 / fVar2,(float)local_30,local_24);
    fVar2 = (float)NEON_ucvtf(local_28);
    local_24 = NEON_fmsub(1.0 / fVar2,local_24,uVar3);
    _printf("New Average: %f\n");
  }
  _printf("User requested quit.\n");
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _getchar(void)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f2c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__getchar_100004000)();
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f38. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004008)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _scanf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f44. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__scanf_100004010)((int)param_1);
  return iVar1;
}


