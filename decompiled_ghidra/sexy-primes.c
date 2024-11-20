#include "sexy-primes.h"



void _sieve(undefined *param_1,int param_2)

{
  int local_14;
  int local_10;
  
  local_14 = 3;
  *param_1 = 1;
  param_1[1] = 1;
  while (local_10 = local_14 * local_14, local_10 < param_2) {
    for (; local_10 < param_2; local_10 = local_10 + local_14 * 2) {
      param_1[local_10] = 1;
    }
    do {
      local_14 = local_14 + 2;
    } while (param_1[local_14] != '\0');
  }
  return;
}



int _printHelper(char *param_1)

{
  int iVar1;
  
  _strcmp(param_1,"unsexy primes");
  _printf("Number of %s%s less than %\'d = %\'d\n");
  iVar1 = _printf("The last %d %s:\n");
  return iVar1;
}



int _printArray(undefined8 param_1,int param_2)

{
  int iVar1;
  int local_20;
  
  _printf("[");
  for (local_20 = 0; local_20 < param_2; local_20 = local_20 + 1) {
    _printf("%d ");
  }
  iVar1 = _printf("\b]");
  return iVar1;
}



undefined8 entry(void)

{
  int iVar1;
  void *pvVar2;
  int local_1b8;
  int local_1b4;
  int local_1b0;
  int local_1ac;
  int local_1a8;
  int local_1a4;
  int local_1a0;
  int local_19c;
  int local_198;
  int local_194;
  int local_190;
  int local_18c;
  int local_188;
  int local_184;
  int local_180;
  int local_170;
  int aiStack_168 [10];
  int aiStack_140 [25];
  int aiStack_dc [20];
  int aiStack_8c [15];
  int aiStack_50 [10];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100004008;
  local_180 = 0;
  local_184 = 0;
  local_188 = 0;
  local_18c = 0;
  local_190 = 2;
  local_194 = 0;
  local_198 = 0;
  local_19c = 0;
  local_1a0 = 0;
  local_1a4 = 2;
  local_1a8 = 5;
  local_1ac = 5;
  local_1b0 = 5;
  local_1b4 = 5;
  local_1b8 = 10;
  pvVar2 = _calloc(0xf4262,1);
  _setlocale(4,"");
  _sieve(pvVar2,0xf4263);
  for (local_170 = 3; local_170 < 0xf4263; local_170 = local_170 + 2) {
    if ((((local_170 < 6) || (0xf425c < local_170)) ||
        (*(char *)((long)pvVar2 + (long)local_170) != '\0')) ||
       ((*(char *)((long)pvVar2 + (long)(local_170 + -6)) == '\0' ||
        (*(char *)((long)pvVar2 + (long)(local_170 + 6)) == '\0')))) {
      if (((((local_170 < 0xf425d) &&
            ((*(char *)((long)pvVar2 + (long)local_170) == '\0' &&
             (*(char *)((long)pvVar2 + (long)(local_170 + 6)) == '\0')))) &&
           (local_180 = local_180 + 1, local_170 < 0xf4257)) &&
          (((*(char *)((long)pvVar2 + (long)(local_170 + 0xc)) == '\0' &&
            (local_184 = local_184 + 1, local_170 < 0xf4251)) &&
           (*(char *)((long)pvVar2 + (long)(local_170 + 0x12)) == '\0')))) &&
         ((local_188 = local_188 + 1, local_170 < 0xf424b &&
          (*(char *)((long)pvVar2 + (long)(local_170 + 0x18)) == '\0')))) {
        local_18c = local_18c + 1;
      }
    }
    else {
      local_190 = local_190 + 1;
    }
  }
  if (local_180 < 5) {
    local_1a8 = local_180;
  }
  if (local_184 < 5) {
    local_1ac = local_184;
  }
  if (local_188 < 5) {
    local_1b0 = local_188;
  }
  if (local_18c < 5) {
    local_1b4 = local_18c;
  }
  if (local_190 < 10) {
    local_1b8 = local_190;
  }
  for (local_170 = 3; local_170 < 0xf4263; local_170 = local_170 + 2) {
    if (((local_170 < 6) || (0xf425c < local_170)) ||
       ((*(char *)((long)pvVar2 + (long)local_170) != '\0' ||
        ((*(char *)((long)pvVar2 + (long)(local_170 + -6)) == '\0' ||
         (*(char *)((long)pvVar2 + (long)(local_170 + 6)) == '\0')))))) {
      if ((local_170 < 0xf425d) &&
         ((*(char *)((long)pvVar2 + (long)local_170) == '\0' &&
          (*(char *)((long)pvVar2 + (long)(local_170 + 6)) == '\0')))) {
        local_194 = local_194 + 1;
        if (local_180 - local_1a8 < local_194) {
          iVar1 = (local_194 + local_1a8 + -1) - local_180;
          aiStack_50[(long)iVar1 * 2] = local_170;
          aiStack_50[(long)iVar1 * 2 + 1] = local_170 + 6;
        }
        if ((local_170 < 0xf4257) && (*(char *)((long)pvVar2 + (long)(local_170 + 0xc)) == '\0')) {
          local_198 = local_198 + 1;
          if (local_184 - local_1ac < local_198) {
            iVar1 = (local_198 + local_1ac + -1) - local_184;
            aiStack_8c[(long)iVar1 * 3] = local_170;
            aiStack_8c[(long)iVar1 * 3 + 1] = local_170 + 6;
            aiStack_8c[(long)iVar1 * 3 + 2] = local_170 + 0xc;
          }
          if ((local_170 < 0xf4251) && (*(char *)((long)pvVar2 + (long)(local_170 + 0x12)) == '\0'))
          {
            local_19c = local_19c + 1;
            if (local_188 - local_1b0 < local_19c) {
              iVar1 = (local_19c + local_1b0 + -1) - local_188;
              aiStack_dc[(long)iVar1 * 4] = local_170;
              aiStack_dc[(long)iVar1 * 4 + 1] = local_170 + 6;
              aiStack_dc[(long)iVar1 * 4 + 2] = local_170 + 0xc;
              aiStack_dc[(long)iVar1 * 4 + 3] = local_170 + 0x12;
            }
            if (((local_170 < 0xf424b) &&
                (*(char *)((long)pvVar2 + (long)(local_170 + 0x18)) == '\0')) &&
               (local_1a0 = local_1a0 + 1, local_18c - local_1b4 < local_1a0)) {
              iVar1 = (local_1a0 + local_1b4 + -1) - local_18c;
              aiStack_140[(long)iVar1 * 5] = local_170;
              aiStack_140[(long)iVar1 * 5 + 1] = local_170 + 6;
              aiStack_140[(long)iVar1 * 5 + 2] = local_170 + 0xc;
              aiStack_140[(long)iVar1 * 5 + 3] = local_170 + 0x12;
              aiStack_140[(long)iVar1 * 5 + 4] = local_170 + 0x18;
            }
          }
        }
      }
    }
    else {
      local_1a4 = local_1a4 + 1;
      if (local_190 - local_1b8 < local_1a4) {
        aiStack_168[(local_1a4 + local_1b8 + -1) - local_190] = local_170;
      }
    }
  }
  _printHelper("pairs",local_180,0xf4263,local_1a8);
  _printf("  [");
  for (local_170 = 0; local_170 < local_1a8; local_170 = local_170 + 1) {
    _printArray(aiStack_50 + (long)local_170 * 2,2);
    _printf("\b] ");
  }
  _printf("\b]\n\n");
  _printHelper("triplets",local_184,0xf4263,local_1ac);
  _printf("  [");
  for (local_170 = 0; local_170 < local_1ac; local_170 = local_170 + 1) {
    _printArray(aiStack_8c + (long)local_170 * 3,3);
    _printf("\b] ");
  }
  _printf("\b]\n\n");
  _printHelper("quadruplets",local_188,0xf4263,local_1b0);
  _printf("  [");
  for (local_170 = 0; local_170 < local_1b0; local_170 = local_170 + 1) {
    _printArray(aiStack_dc + (long)local_170 * 4,4);
    _printf("\b] ");
  }
  _printf("\b]\n\n");
  _printHelper("quintuplets",local_18c,0xf4263,local_1b4);
  _printf("  [");
  for (local_170 = 0; local_170 < local_1b4; local_170 = local_170 + 1) {
    _printArray(aiStack_140 + (long)local_170 * 5,5);
    _printf("\b] ");
  }
  _printf("\b]\n\n");
  _printHelper("unsexy primes",local_190,0xf4263,local_1b8);
  _printf("  [");
  _printArray(aiStack_168,local_1b8);
  _printf("\b]\n");
  _free(pvVar2);
  if (*(long *)PTR____stack_chk_guard_100004008 == local_28) {
    return 0;
  }
                    // WARNING: Subroutine does not return
  ___stack_chk_fail();
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003ec0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _calloc(size_t param_1,size_t param_2)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ecc. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__calloc_100004010)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003ed8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004018)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ee4. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004020)((int)param_1);
  return iVar1;
}



void _setlocale(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003ef0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__setlocale_100004028)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _strcmp(char *param_1,char *param_2)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003efc. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__strcmp_100004030)((int)param_1);
  return iVar1;
}


