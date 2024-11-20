#include "look-and-say-sequence.h"



undefined8 entry(void)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  char *pcVar4;
  int iVar5;
  char *pcVar6;
  int local_3c;
  char *local_28;
  char *local_20;
  
  local_20 = (char *)_malloc(2);
  local_28 = (char *)0x0;
  local_3c = 1;
  ___sprintf_chk(local_20,0,0xffffffffffffffff,"1");
  while (pcVar4 = local_20, pcVar6 = (char *)_realloc(local_28,(long)(local_3c * 2 + 1)),
        pcVar6 != (char *)0x0) {
    _puts(local_20);
    local_3c = 0;
    while (cVar3 = *local_20, cVar3 != '\0') {
      pcVar2 = local_20 + 1;
      pcVar1 = local_20 + 1;
      local_20 = pcVar2;
      if ((cVar3 != *pcVar1) && (cVar3 != '\0')) {
        iVar5 = ___sprintf_chk(pcVar6 + local_3c,0,0xffffffffffffffff,"%d%c");
        local_3c = local_3c + iVar5;
      }
    }
    local_28 = pcVar4;
    local_20 = pcVar6;
  }
  return 0;
}



void ___sprintf_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f78. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____sprintf_chk_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f84. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004008)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _puts(char *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f90. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__puts_100004010)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _realloc(void *param_1,size_t param_2)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f9c. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__realloc_100004018)();
  return pvVar1;
}


