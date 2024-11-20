#include "selectively-replace-multiple-instances-of-a-character-within-a-string.h"



undefined8 entry(void)

{
  char cVar1;
  char *pcVar2;
  char *local_58;
  char *local_50;
  char *local_48;
  char *local_40;
  char local_28 [16];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  builtin_strncpy(local_28,"abracadabra",0xc);
  pcVar2 = (char *)_malloc(0xc);
  ___strcpy_chk(pcVar2,local_28,0xffffffffffffffff);
  local_40 = "ABaCD";
  local_48 = "E";
  local_50 = "rF";
  for (local_58 = pcVar2; *local_58 != '\0'; local_58 = local_58 + 1) {
    cVar1 = *local_58;
    if (cVar1 == 'a') {
      if (*local_40 != '\0') {
        *local_58 = *local_40;
        local_40 = local_40 + 1;
      }
    }
    else if (cVar1 == 'b') {
      if (*local_48 != '\0') {
        *local_58 = *local_48;
        local_48 = local_48 + 1;
      }
    }
    else if ((cVar1 == 'r') && (*local_50 != '\0')) {
      *local_58 = *local_50;
      local_50 = local_50 + 1;
    }
  }
  _printf("%s\n");
  _free(pcVar2);
  if (*(long *)PTR____stack_chk_guard_100004008 == local_18) {
    return 0;
  }
                    // WARNING: Subroutine does not return
  ___stack_chk_fail();
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f58. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



void ___strcpy_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f64. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____strcpy_chk_100004010)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f70. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004018)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f7c. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004020)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f88. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004028)((int)param_1);
  return iVar1;
}


