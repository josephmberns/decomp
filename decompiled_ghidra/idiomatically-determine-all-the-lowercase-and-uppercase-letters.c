#include "idiomatically-determine-all-the-lowercase-and-uppercase-letters.h"



undefined8 entry(void)

{
  undefined local_22;
  undefined local_21;
  
  for (local_21 = 'A'; local_21 < '['; local_21 = local_21 + '\x01') {
    _putchar((int)local_21);
  }
  _putchar(10);
  for (local_22 = 'a'; local_22 < '{'; local_22 = local_22 + '\x01') {
    _putchar((int)local_22);
  }
  _putchar(10);
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _putchar(int param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003fa4. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__putchar_100004000)(param_1);
  return iVar1;
}


