#include "terminal-control-coloured-text.h"



int _table(void)

{
  int iVar1;
  int local_28;
  int local_24;
  
  iVar1 = _printf("\n\x1b[1m%s\x1b[m\n bg\t fg\n");
  for (local_28 = 0x28; local_28 < 0x6c; local_28 = local_28 + 1) {
    if (local_28 == 0x30) {
      local_28 = 100;
    }
    _printf("%3d\t\x1b[%s%dm");
    for (local_24 = 0x1e; local_24 < 0x62; local_24 = local_24 + 1) {
      if (local_24 == 0x26) {
        local_24 = 0x5a;
      }
      _printf("\x1b[%dm%3d ");
    }
    iVar1 = _puts("\x1b[m");
  }
  return iVar1;
}



undefined4 entry(void)

{
  _table("normal ( ESC[22m or ESC[m )","22;");
  _table("bold ( ESC[1m )","1;");
  _table("faint ( ESC[2m ), not well supported","2;");
  _table("italic ( ESC[3m ), not well supported","3;");
  _table("underline ( ESC[4m ), support varies","4;");
  _table("blink ( ESC[5m )","5;");
  _table("inverted ( ESC[7m )","7;");
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e90. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _puts(char *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e9c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__puts_100004008)((int)param_1);
  return iVar1;
}


