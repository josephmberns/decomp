#include "host-introspection-1.h"



// WARNING: Removing unreachable block (ram,0x000100003f4c)

undefined8 entry(void)

{
  _printf("word size = %d bits\n");
  _printf("little endian\n");
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f74. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}


