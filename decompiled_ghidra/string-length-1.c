#include "string-length-1.h"



undefined4 entry(void)

{
  _strlen("Hello, world!");
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t _strlen(char *param_1)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f94. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__strlen_100004000)();
  return sVar1;
}


