#include "terminal-control-preserve-screen.h"



undefined8 entry(void)

{
  int local_18;
  
  _printf("\x1b[?1049h\x1b[H");
  _printf("Alternate screen buffer\n");
  for (local_18 = 5; local_18 != 0; local_18 = local_18 + -1) {
    _printf("\rgoing back in %d...");
    _fflush(*(FILE **)PTR____stdoutp_100004000);
    _sleep(1);
  }
  _printf("\x1b[?1049l");
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fflush(FILE *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f48. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fflush_100004008)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f54. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004010)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

uint _sleep(uint param_1)

{
  uint uVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f60. Too many branches
                    // WARNING: Treating indirect jump as call
  uVar1 = (*(code *)PTR__sleep_100004018)(param_1);
  return uVar1;
}


