#include "joystick-position.h"



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _clear(void)

{
  int in_w0;
  int local_14;
  
  for (local_14 = 0; local_14 < 10; local_14 = local_14 + 1) {
    in_w0 = _printf("\r\n\r\n\r\n\r\n\r\n\r\n\r\n\r\r\n\r\n\r\n");
  }
  return in_w0;
}



undefined8 entry(void)

{
  uint uVar1;
  char local_15;
  
  _clear();
  _system("stty raw");
  _printf("00000\r\n00+00\r\n00000\r\n");
  _printf("space to exit; wasd to move\r\n");
  local_15 = '\x01';
  while (local_15 != '\0') {
    uVar1 = _getc(*(FILE **)PTR____stdinp_100004000);
    local_15 = (char)uVar1;
    _clear();
    uVar1 = uVar1 & 0xff;
    if (uVar1 == 0x20) {
      local_15 = '\0';
    }
    else if (uVar1 == 0x61) {
      _printf("00000\r\n<--00\r\n00000\r\n");
    }
    else if (uVar1 == 100) {
      _printf("00000\r\n00-->\r\n00000\r\n");
    }
    else if (uVar1 == 0x73) {
      _printf("00000\r\n00|00\r\n00v00\r\n");
    }
    else if (uVar1 == 0x77) {
      _printf("00^00\r\n00|00\r\n00000\r\n");
    }
    else {
      _printf("00000\r\n00+00\r\n00000\r\n");
    }
    _printf("space to exit; wasd key to move\r\n");
  }
  _system("stty cooked");
  _system("clear");
  return 1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _getc(FILE *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003eac. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__getc_100004008)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003eb8. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004010)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _system(char *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ec4. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__system_100004018)((int)param_1);
  return iVar1;
}


