#include "comma-quibbling.h"



void * _quib(undefined8 *param_1,ulong param_2)

{
  size_t sVar1;
  void *pvVar2;
  long local_40;
  ulong local_30;
  size_t local_28;
  
  if (param_2 < 2) {
    local_40 = 0;
  }
  else {
    local_40 = param_2 * 2 + 1;
  }
  local_28 = local_40 + 3;
  for (local_30 = 0; local_30 < param_2; local_30 = local_30 + 1) {
    sVar1 = _strlen((char *)param_1[local_30]);
    local_28 = local_28 + sVar1;
  }
  pvVar2 = _malloc(local_28);
  if (pvVar2 != (void *)0x0) {
    ___strcpy_chk(pvVar2,"{",0xffffffffffffffff);
    if (param_2 != 0) {
      if (param_2 == 1) {
        ___strcat_chk(pvVar2,*param_1,0xffffffffffffffff);
      }
      else {
        for (local_30 = 0; local_30 < param_2 - 1; local_30 = local_30 + 1) {
          ___strcat_chk(pvVar2,param_1[local_30],0xffffffffffffffff);
          if (local_30 < param_2 - 2) {
            ___strcat_chk(pvVar2,", ",0xffffffffffffffff);
          }
          else {
            ___strcat_chk(pvVar2," and ",0xffffffffffffffff);
          }
        }
        ___strcat_chk(pvVar2,param_1[local_30],0xffffffffffffffff);
      }
    }
    ___strcat_chk(pvVar2,"}",0xffffffffffffffff);
    return pvVar2;
  }
  _perror("Can\'t allocate memory!\n");
                    // WARNING: Subroutine does not return
  _exit(1);
}



undefined8 entry(void)

{
  void *pvVar1;
  ulong local_58;
  char *local_40;
  char *pcStack_38;
  char *local_30;
  char *pcStack_28;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  pcStack_38 = "DEF";
  local_40 = "ABC";
  pcStack_28 = "H";
  local_30 = "G";
  for (local_58 = 0; local_58 < 5; local_58 = local_58 + 1) {
    pvVar1 = (void *)_quib(&local_40,local_58);
    _printf("%s\n");
    _free(pvVar1);
  }
  if (*(long *)PTR____stack_chk_guard_100004008 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail();
  }
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f0c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



void ___strcat_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f18. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____strcat_chk_100004010)();
  return;
}



void ___strcpy_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f24. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____strcpy_chk_100004018)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _exit(int param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f30. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__exit_100004020)(param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f3c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004028)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f48. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004030)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _perror(char *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f54. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__perror_100004038)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f60. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004040)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t _strlen(char *param_1)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f6c. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__strlen_100004048)();
  return sVar1;
}


