#include "self-numbers-1.h"



void _sieve(long param_1)

{
  long lVar1;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100004008;
  local_44 = 0;
  for (local_48 = 0; local_48 < 2; local_48 = local_48 + 1) {
    for (local_4c = 0; local_4c < 10; local_4c = local_4c + 1) {
      for (local_50 = 0; local_50 < 10; local_50 = local_50 + 1) {
        for (local_54 = 0; local_54 < 10; local_54 = local_54 + 1) {
          for (local_58 = 0; local_58 < 10; local_58 = local_58 + 1) {
            for (local_5c = 0; local_5c < 10; local_5c = local_5c + 1) {
              for (local_60 = 0; local_60 < 10; local_60 = local_60 + 1) {
                for (local_64 = 0; local_64 < 10; local_64 = local_64 + 1) {
                  for (local_68 = 0; local_68 < 10; local_68 = local_68 + 1) {
                    for (local_6c = 0; local_6c < 10; local_6c = local_6c + 1) {
                      *(undefined *)
                       (param_1 +
                       (local_48 + local_4c + local_50 + local_54 + local_58 + local_5c + local_60 +
                        local_64 + local_68 + local_6c + local_44)) = 1;
                      local_44 = local_44 + 1;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_100004008 != lVar1) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail();
  }
  return;
}



undefined8 entry(void)

{
  char *pcVar1;
  char *local_28;
  int local_18;
  
  local_18 = 0;
  _clock();
  pcVar1 = (char *)_calloc(0x77359452,1);
  _sieve(pcVar1);
  _printf("The first 50 self numbers are:\n");
  local_28 = pcVar1;
  do {
    if (pcVar1 + 0x77359452 <= local_28) {
LAB_100003ebc:
      _free(pcVar1);
      _clock();
      _printf("Took %lf seconds.\n");
      return 0;
    }
    if (*local_28 == '\0') {
      local_18 = local_18 + 1;
      if (local_18 < 0x33) {
        _printf("%ld ");
      }
      if (local_18 == 100000000) {
        _printf("\n\nThe 100 millionth self number is %ld\n");
        goto LAB_100003ebc;
      }
    }
    local_28 = local_28 + 1;
  } while( true );
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f0c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _calloc(size_t param_1,size_t param_2)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f18. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__calloc_100004010)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

clock_t _clock(void)

{
  clock_t cVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f24. Too many branches
                    // WARNING: Treating indirect jump as call
  cVar1 = (*(code *)PTR__clock_100004018)();
  return cVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f30. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004020)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f3c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004028)((int)param_1);
  return iVar1;
}


