#include "best-shuffle-4.h"



char * _best_shuffle(char *param_1,int *param_2)

{
  int iVar1;
  size_t sVar2;
  char *pcVar3;
  int iVar4;
  long lVar5;
  int local_344;
  int local_340;
  int local_33c;
  byte abStack_328 [256];
  int aiStack_228 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100004008;
  local_340 = 0;
  local_344 = 0;
  sVar2 = _strlen(param_1);
  iVar4 = (int)sVar2;
  _bzero(aiStack_228,0x200);
  _memset(abStack_328,0,0x100);
  for (local_33c = 0; local_33c < iVar4; local_33c = local_33c + 1) {
    iVar1 = aiStack_228[param_1[local_33c]] + 1;
    aiStack_228[param_1[local_33c]] = iVar1;
    if (local_344 < iVar1) {
      local_344 = aiStack_228[param_1[local_33c]];
    }
  }
  for (local_33c = 0; local_33c < 0x80; local_33c = local_33c + 1) {
    while (iVar1 = aiStack_228[local_33c], aiStack_228[local_33c] = iVar1 + -1, iVar1 != 0) {
      lVar5 = (long)local_340;
      local_340 = local_340 + 1;
      abStack_328[lVar5] = (byte)local_33c;
    }
  }
  pcVar3 = _strdup(param_1);
  local_33c = 0;
  do {
    if (iVar4 <= local_33c) {
      *param_2 = 0;
      for (local_33c = 0; local_33c < iVar4; local_33c = local_33c + 1) {
        *param_2 = *param_2 + (uint)(pcVar3[local_33c] == param_1[local_33c]);
      }
      if (*(long *)PTR____stack_chk_guard_100004008 == local_28) {
        return pcVar3;
      }
                    // WARNING: Subroutine does not return
      ___stack_chk_fail();
    }
    for (local_340 = 0; local_340 < iVar4; local_340 = local_340 + 1) {
      if (pcVar3[local_33c] == abStack_328[local_340]) {
        iVar1 = 0;
        if (iVar4 != 0) {
          iVar1 = (local_340 + local_344) / iVar4;
        }
        pcVar3[local_33c] = abStack_328[(local_340 + local_344) - iVar1 * iVar4] & 0x7f;
        abStack_328[local_340] = abStack_328[local_340] | 0x80;
        break;
      }
    }
    local_33c = local_33c + 1;
  } while( true );
}



undefined8 entry(void)

{
  uint uVar1;
  void *pvVar2;
  undefined local_5c [4];
  int local_58;
  undefined4 local_54;
  long alStack_50 [7];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  local_54 = 0;
  pvVar2 = _memcpy(alStack_50,&PTR_s_abracadabra_100004040,0x38);
  for (local_58 = 0; alStack_50[local_58] != 0; local_58 = local_58 + 1) {
    _best_shuffle(alStack_50[local_58],local_5c);
    uVar1 = _printf("%s %s (%d)\n");
    pvVar2 = (void *)(ulong)uVar1;
  }
  if (*(long *)PTR____stack_chk_guard_100004008 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(pvVar2);
  }
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f24. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _bzero(void *param_1,size_t param_2)

{
                    // WARNING: Could not recover jumptable at 0x000100003f30. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__bzero_100004010)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _memcpy(void *param_1,void *param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f3c. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__memcpy_100004018)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _memset(void *param_1,int param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f48. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__memset_100004020)(param_1,param_2);
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f54. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004028)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * _strdup(char *param_1)

{
  char *pcVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f60. Too many branches
                    // WARNING: Treating indirect jump as call
  pcVar1 = (char *)(*(code *)PTR__strdup_100004030)();
  return pcVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t _strlen(char *param_1)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f6c. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__strlen_100004038)();
  return sVar1;
}


