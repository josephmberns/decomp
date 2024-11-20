#include "string-matching-2.h"



undefined4 _s_cmp(char *param_1,char *param_2)

{
  char local_1a;
  char local_19;
  char *local_18;
  char *local_10;
  undefined4 local_4;
  
  local_19 = '\0';
  local_1a = '\0';
  local_18 = param_2;
  local_10 = param_1;
  do {
    if (local_19 != local_1a) {
      return 0;
    }
    local_19 = *local_10;
    local_1a = *local_18;
    local_18 = local_18 + 1;
    local_10 = local_10 + 1;
  } while (local_1a != '\0');
  local_4 = 1;
  if (local_19 == '\0') {
    local_4 = 0xffffffff;
  }
  return local_4;
}



int _s_match(long param_1,undefined8 param_2)

{
  int iVar1;
  int local_30;
  int local_2c;
  
  local_2c = 0;
  local_30 = 0;
  _printf("matching `%s\' with `%s\':\n");
  while( true ) {
    if (*(char *)(param_1 + local_2c) == '\0') {
      _printf("end match\n\n");
      return local_30;
    }
    iVar1 = _s_cmp(param_1 + local_2c,param_2);
    if (iVar1 == -1) break;
    if (iVar1 == 1) {
      _printf("matched: pos %d\n");
      local_30 = local_30 + 1;
    }
    local_2c = local_2c + 1;
  }
  _printf("matched: pos %d (at end)\n\n");
  return local_30 + 1;
}



undefined4 entry(void)

{
  _s_match("A Short String","ort S");
  _s_match("aBaBaBaBa","aBa");
  _s_match("something random","Rand");
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f10. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}


