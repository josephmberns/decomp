#include "split-a-character-string-based-on-change-of-character.h"



undefined8 entry(void)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)PTR____stack_chk_guard_100004008;
  _split();
  iVar1 = _printf("%s\n");
  if (*(long *)PTR____stack_chk_guard_100004008 != lVar2) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(iVar1);
  }
  return 0;
}



void _split(byte *param_1)

{
  size_t sVar1;
  byte *pbVar2;
  byte *local_38;
  byte *local_30;
  byte local_19;
  
  local_19 = *param_1;
  sVar1 = _strlen((char *)param_1);
  pbVar2 = (byte *)_malloc(sVar1 * 3);
  local_30 = pbVar2;
  for (local_38 = param_1; *local_38 != 0; local_38 = local_38 + 1) {
    if ((int)(char)*local_38 != (uint)local_19) {
      ___strcpy_chk(local_30,", ",0xffffffffffffffff);
      local_30 = local_30 + 2;
      local_19 = *local_38;
    }
    *local_30 = *local_38;
    local_30 = local_30 + 1;
  }
  *local_30 = 0;
  sVar1 = _strlen((char *)pbVar2);
  _realloc(pbVar2,sVar1);
  return;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f54. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



void ___strcpy_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f60. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____strcpy_chk_100004010)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f6c. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004018)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f78. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004020)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _realloc(void *param_1,size_t param_2)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f84. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__realloc_100004028)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t _strlen(char *param_1)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f90. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__strlen_100004030)();
  return sVar1;
}


