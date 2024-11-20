#include "show-ascii-table.h"



undefined8 entry(void)

{
  undefined auStack_20 [4];
  int local_1c;
  int local_18;
  undefined4 local_14;
  
  local_14 = 0;
  for (local_18 = 0; local_18 < 0x10; local_18 = local_18 + 1) {
    for (local_1c = local_18 + 0x20; local_1c < 0x80; local_1c = local_1c + 0x10) {
      if (local_1c == 0x20) {
        ___sprintf_chk(auStack_20,0,4,"Spc");
      }
      else if (local_1c == 0x7f) {
        ___sprintf_chk(auStack_20,0,4,"Del");
      }
      else {
        ___sprintf_chk(auStack_20,0,4,"%c");
      }
      _printf("%3d : %-3s   ");
    }
    _printf("\n");
  }
  return 0;
}



void ___sprintf_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f7c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____sprintf_chk_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f88. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004008)((int)param_1);
  return iVar1;
}


