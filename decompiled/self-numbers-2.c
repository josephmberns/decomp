#include "self-numbers-2.h"



void _init(void)

{
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_4;
  
  local_4 = 9999;
  for (local_10 = 9; -1 < local_10; local_10 = local_10 + -1) {
    for (local_14 = 9; -1 < local_14; local_14 = local_14 + -1) {
      for (local_18 = 9; -1 < local_18; local_18 = local_18 + -1) {
        for (local_1c = 9; -1 < local_1c; local_1c = local_1c + -1) {
          *(int *)(&_digitSum + (long)local_4 * 4) = local_10 + local_14 + local_18 + local_1c;
          local_4 = local_4 + -1;
        }
      }
    }
  }
  return;
}



void _sieve(long param_1)

{
  long local_28;
  long local_20;
  int local_14;
  int local_10;
  int local_c;
  
  local_28 = 0;
  for (local_c = 0; local_c < 0x67; local_c = local_c + 1) {
    for (local_10 = 0; local_10 < 10000; local_10 = local_10 + 1) {
      local_20 = local_28 +
                 (*(int *)(&_digitSum + (long)local_c * 4) +
                 *(int *)(&_digitSum + (long)local_10 * 4));
      for (local_14 = 0; local_14 < 10000; local_14 = local_14 + 1) {
        *(undefined *)(param_1 + *(int *)(&_digitSum + (long)local_14 * 4) + local_20) = 1;
        local_20 = local_20 + 1;
      }
      local_28 = local_28 + 10000;
    }
  }
  return;
}



undefined8 entry(void)

{
  char *pcVar1;
  char *local_40;
  long local_28;
  long local_20;
  
  local_20 = 0;
  local_28 = 1;
  _clock();
  pcVar1 = (char *)_calloc(0x265ed8764,1);
  _init();
  _sieve(pcVar1);
  _clock();
  _printf("Sieving took %lf seconds.\n");
  _printf("\nThe first 50 self numbers are:\n");
  for (local_40 = pcVar1; local_40 < pcVar1 + 0x265ed8764; local_40 = local_40 + 1) {
    if (*local_40 == '\0') {
      local_20 = local_20 + 1;
      if (0x32 < local_20) {
        _printf("\n\n     Index  Self number\n");
        break;
      }
      _printf("%ld ");
    }
  }
  local_20 = 0;
  for (local_40 = pcVar1; local_40 < pcVar1 + 0x265ed8764; local_40 = local_40 + 1) {
    if ((*local_40 == '\0') && (local_20 = local_20 + 1, local_20 == local_28)) {
      _printf("%10lld  %11ld\n");
      local_28 = local_28 * 10;
      if (local_28 == 10000000000) break;
    }
  }
  _free(pcVar1);
  _clock();
  _printf("\nOverall took %lf seconds.\n");
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _calloc(size_t param_1,size_t param_2)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ee0. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__calloc_100004000)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

clock_t _clock(void)

{
  clock_t cVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003eec. Too many branches
                    // WARNING: Treating indirect jump as call
  cVar1 = (*(code *)PTR__clock_100004008)();
  return cVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003ef8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004010)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f04. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004018)((int)param_1);
  return iVar1;
}


