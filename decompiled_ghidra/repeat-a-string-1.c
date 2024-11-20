#include "repeat-a-string-1.h"



undefined * _string_repeat(int param_1,char *param_2)

{
  size_t sVar1;
  undefined *puVar2;
  undefined *local_40;
  int local_34;
  
  sVar1 = _strlen(param_2);
  puVar2 = (undefined *)_malloc((long)param_1 * sVar1 + 1);
  local_40 = puVar2;
  for (local_34 = 0; local_34 < param_1; local_34 = local_34 + 1) {
    ___memcpy_chk(local_40,param_2,sVar1,0xffffffffffffffff);
    local_40 = local_40 + sVar1;
  }
  *local_40 = 0;
  return puVar2;
}



undefined4 entry(void)

{
  char *pcVar1;
  
  pcVar1 = (char *)_string_repeat(5,"ha");
  _puts(pcVar1);
  _free(pcVar1);
  return 0;
}



void ___memcpy_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f70. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____memcpy_chk_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f7c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004008)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f88. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004010)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _puts(char *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f94. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__puts_100004018)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t _strlen(char *param_1)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003fa0. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__strlen_100004020)();
  return sVar1;
}


