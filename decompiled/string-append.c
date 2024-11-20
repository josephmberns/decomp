#include "string-append.h"



undefined8 entry(void)

{
  uint uVar1;
  size_t sVar2;
  size_t sVar3;
  size_t sVar4;
  char local_30 [24];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004010;
  builtin_strncpy(local_30,"Good Morning",0xd);
  local_30[0xd] = '\0';
  local_30[0xe] = '\0';
  local_30[0xf] = '\0';
  local_30[0x10] = '\0';
  local_30[0x11] = '\0';
  local_30[0x12] = '\0';
  local_30[0x13] = '\0';
  local_30[0x14] = '\0';
  local_30[0x15] = '\0';
  local_30[0x16] = '\0';
  local_30[0x17] = '\0';
  sVar2 = _strlen(local_30);
  sVar3 = _strlen(" to all");
  sVar4 = _strlen(" !!!");
  if (sVar2 + sVar3 + sVar4 < 0x18) {
    ___strcat_chk(local_30," to all",0x18);
    sVar2 = _strlen(local_30);
    ___sprintf_chk(local_30 + (int)sVar2,0,0xffffffffffffffff,"%s");
    uVar1 = _printf("%s\n");
    sVar4 = (size_t)uVar1;
  }
  if (*(long *)PTR____stack_chk_guard_100004010 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(sVar4);
  }
  return 0;
}



void ___sprintf_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f48. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____sprintf_chk_100004000)();
  return;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f54. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004008)();
  return;
}



void ___strcat_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f60. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____strcat_chk_100004018)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f6c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004020)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t _strlen(char *param_1)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f78. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__strlen_100004028)();
  return sVar1;
}


