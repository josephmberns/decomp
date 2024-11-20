#include "chaocipher.h"



void _chao(char *param_1,long param_2,int param_3,int param_4)

{
  size_t sVar1;
  char *pcVar2;
  int local_94;
  int local_90;
  int local_8c;
  char local_69 [26];
  undefined local_4f;
  char acStack_4e [27];
  char acStack_33 [27];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  sVar1 = _strlen(param_1);
  ___strcpy_chk(acStack_33,_l_alphabet);
  ___strcpy_chk(acStack_4e,_r_alphabet,0x1b);
  local_4f = 0;
  for (local_8c = 0; (ulong)(long)local_8c < sVar1; local_8c = local_8c + 1) {
    if (param_4 != 0) {
      _printf("%s  %s\n");
    }
    if (param_3 == 0) {
      pcVar2 = _strchr(acStack_4e,(int)param_1[local_8c]);
      local_94 = (int)pcVar2 - (int)acStack_4e;
      *(char *)(param_2 + local_8c) = acStack_33[local_94];
    }
    else {
      pcVar2 = _strchr(acStack_33,(int)param_1[local_8c]);
      local_94 = (int)pcVar2 - (int)acStack_33;
      *(char *)(param_2 + local_8c) = acStack_4e[local_94];
    }
    if ((long)local_8c == sVar1 - 1) break;
    for (local_90 = local_94; local_90 < 0x1a; local_90 = local_90 + 1) {
      local_69[local_90 - local_94] = acStack_33[local_90];
    }
    for (local_90 = 0; local_69[0xd] = local_69[1], local_90 < local_94; local_90 = local_90 + 1) {
      local_69[(0x1a - local_94) + local_90] = acStack_33[local_90];
    }
    for (local_90 = 2; local_90 < 0xe; local_90 = local_90 + 1) {
      local_69[local_90 + -1] = local_69[local_90];
    }
    ___strcpy_chk(acStack_33,local_69,0x1b);
    for (local_90 = local_94; local_90 < 0x1a; local_90 = local_90 + 1) {
      local_69[local_90 - local_94] = acStack_4e[local_90];
    }
    for (local_90 = 0; local_69[0x19] = local_69[0], local_90 < local_94; local_90 = local_90 + 1) {
      local_69[(0x1a - local_94) + local_90] = acStack_4e[local_90];
    }
    for (local_90 = 1; local_69[0xd] = local_69[2], local_90 < 0x1a; local_90 = local_90 + 1) {
      local_69[local_90 + -1] = local_69[local_90];
    }
    for (local_90 = 3; local_90 < 0xe; local_90 = local_90 + 1) {
      local_69[local_90 + -1] = local_69[local_90];
    }
    ___strcpy_chk(acStack_4e,local_69,0x1b);
  }
  if (*(long *)PTR____stack_chk_guard_100004008 == local_18) {
    return;
  }
                    // WARNING: Subroutine does not return
  ___stack_chk_fail();
}



undefined4 entry(void)

{
  size_t sVar1;
  void *pvVar2;
  void *pvVar3;
  
  sVar1 = _strlen("WELLDONEISBETTERTHANWELLSAID");
  pvVar2 = _malloc(sVar1 + 1);
  sVar1 = _strlen("WELLDONEISBETTERTHANWELLSAID");
  pvVar3 = _malloc(sVar1 + 1);
  _printf("The original plaintext is : %s\n");
  _printf("\nThe left and right alphabets after each permutation during encryption are :\n\n");
  _chao("WELLDONEISBETTERTHANWELLSAID",pvVar2,0);
  _printf("\nThe ciphertext is : %s\n");
  _chao(pvVar2,pvVar3,1,0);
  _printf("\nThe recovered plaintext is : %s\n");
  _free(pvVar2);
  _free(pvVar3);
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003e54. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



void ___strcpy_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003e60. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____strcpy_chk_100004010)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003e6c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004018)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e78. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004020)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e84. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004028)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * _strchr(char *param_1,int param_2)

{
  char *pcVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e90. Too many branches
                    // WARNING: Treating indirect jump as call
  pcVar1 = (char *)(*(code *)PTR__strchr_100004030)(param_1,param_2);
  return pcVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t _strlen(char *param_1)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e9c. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__strlen_100004038)();
  return sVar1;
}


