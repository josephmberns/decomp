#include "copy-stdin-to-stdout.h"



undefined8 entry(void)

{
  int iVar1;
  
  while( true ) {
    iVar1 = _getchar();
    if (iVar1 == -1) break;
    _putchar(iVar1);
  }
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _getchar(void)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f98. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__getchar_100004000)();
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _putchar(int param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003fa4. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__putchar_100004008)(param_1);
  return iVar1;
}


