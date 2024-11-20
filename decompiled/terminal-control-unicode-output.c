#include "terminal-control-unicode-output.h"



undefined8 entry(void)

{
  char *pcVar1;
  int local_18;
  
  pcVar1 = _getenv("LANG");
  local_18 = 0;
  do {
    if (pcVar1[local_18 + 2] == '\0') {
LAB_100003ef0:
      if (local_18 != -1) {
        _printf("Unicode is not supported on this terminal.");
      }
      return 0;
    }
    if ((((pcVar1[local_18] == 'u') && (pcVar1[local_18 + 1] == 't')) &&
        (pcVar1[local_18 + 2] == 'f')) ||
       (((pcVar1[local_18] == 'U' && (pcVar1[local_18 + 1] == 'T')) && (pcVar1[local_18 + 2] == 'F')
        ))) {
      _printf(s_Unicode_is_supported_on_this_ter_100003f41);
      local_18 = -1;
      goto LAB_100003ef0;
    }
    local_18 = local_18 + 1;
  } while( true );
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * _getenv(char *param_1)

{
  char *pcVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f2c. Too many branches
                    // WARNING: Treating indirect jump as call
  pcVar1 = (char *)(*(code *)PTR__getenv_100004000)();
  return pcVar1;
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


