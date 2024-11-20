#include "happy-numbers-1.h"



int _happy(int param_1)

{
  int iVar1;
  int local_24;
  int local_1c;
  
  local_1c = 0;
  local_24 = param_1;
  if (param_1 < 0x100) {
    if ((&_buf)[param_1] != '\0') {
      return 2 - (uint)(byte)(&_buf)[param_1];
    }
    (&_buf)[param_1] = 2;
  }
  for (; local_24 != 0; local_24 = local_24 / 10) {
    local_1c = local_1c + (local_24 % 10) * (local_24 % 10);
  }
  iVar1 = _happy(local_1c);
  if (param_1 < 0x100) {
    (&_buf)[param_1] = '\x02' - (char)iVar1;
  }
  return iVar1;
}



undefined8 entry(void)

{
  bool bVar1;
  int iVar2;
  int local_1c;
  int local_18;
  
  local_1c = 8;
  local_18 = 1;
  while( true ) {
    bVar1 = true;
    if (local_1c == 0) {
      iVar2 = _printf("\n");
      bVar1 = iVar2 == 0;
    }
    if (!bVar1) break;
    iVar2 = _happy(local_18);
    if (iVar2 != 0) {
      local_1c = local_1c + -1;
      _printf("%d ");
    }
    local_18 = local_18 + 1;
  }
  local_1c = 1000000;
  _printf("The %dth happy number: ");
  local_18 = 1;
  while (local_1c != 0) {
    iVar2 = _happy(local_18);
    if ((iVar2 != 0) && (local_1c = local_1c + -1, local_1c == 0)) {
      _printf("%d\n");
    }
    local_18 = local_18 + 1;
  }
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f80. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}


