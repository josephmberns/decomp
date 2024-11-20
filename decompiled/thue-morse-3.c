#include "thue-morse-3.h"



int _count_bits(uint param_1)

{
  undefined4 local_8;
  undefined4 local_4;
  
  local_8 = 0;
  for (local_4 = param_1; local_4 != 0; local_4 = local_4 >> 1) {
    local_8 = local_8 + (local_4 & 1);
  }
  return local_8;
}



// WARNING: Removing unreachable block (ram,0x000100003e4c)
// WARNING: Removing unreachable block (ram,0x000100003e60)
// WARNING: Removing unreachable block (ram,0x000100003e84)
// WARNING: Removing unreachable block (ram,0x000100003e9c)
// WARNING: Removing unreachable block (ram,0x000100003ea4)
// WARNING: Removing unreachable block (ram,0x000100003ec4)
// WARNING: Removing unreachable block (ram,0x000100003ee8)
// WARNING: Removing unreachable block (ram,0x000100003ed4)
// WARNING: Removing unreachable block (ram,0x000100003f2c)

void entry(void)

{
  _printf("Sequence length: ");
  do {
    _scanf("%u");
  } while( true );
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _getchar(void)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f4c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__getchar_100004000)();
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f58. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004008)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _putchar(int param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f64. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__putchar_100004010)(param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _scanf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f70. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__scanf_100004018)((int)param_1);
  return iVar1;
}


