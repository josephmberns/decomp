#include "tokenize-a-string-2.h"



int _doprint(void)

{
  int iVar1;
  
  iVar1 = _printf("%s.");
  return iVar1;
}



void _tokenize(byte *param_1,byte param_2,code *param_3)

{
  byte *pbVar1;
  bool bVar2;
  byte local_31;
  byte *local_18;
  
  local_31 = param_2;
  local_18 = param_1;
  while( true ) {
    pbVar1 = local_18;
    bVar2 = false;
    if (local_31 != 0) {
      bVar2 = *local_18 != 0;
    }
    if (!bVar2) break;
    while( true ) {
      bVar2 = false;
      if (*local_18 != 0) {
        bVar2 = (uint)param_2 != (int)(char)*local_18;
      }
      if (!bVar2) break;
      local_18 = local_18 + 1;
    }
    local_31 = *local_18;
    *local_18 = *local_18 ^ local_31;
    (*param_3)(pbVar1);
    *local_18 = *local_18 ^ local_31;
    local_18 = local_18 + 1;
  }
  return;
}



undefined8 entry(void)

{
  char local_30 [24];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  builtin_strncpy(local_30,"Hello,How,Are,You,Today",0x18);
  _tokenize(local_30,0x2c,_doprint);
  if (*(long *)PTR____stack_chk_guard_100004008 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail();
  }
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f7c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f88. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004010)((int)param_1);
  return iVar1;
}


