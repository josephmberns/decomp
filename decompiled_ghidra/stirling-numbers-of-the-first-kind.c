#include "stirling-numbers-of-the-first-kind.h"



uint _stirling_number1(int *param_1,int param_2,int param_3)

{
  uint local_4;
  
  if (param_3 == 0) {
    local_4 = (uint)(param_2 == 0);
  }
  else if ((*param_1 < param_2) || (param_2 < param_3)) {
    local_4 = 0;
  }
  else {
    local_4 = *(uint *)(*(long *)(param_1 + 2) +
                       (long)((param_2 * (param_2 + -1)) / 2 + param_3 + -1) * 4);
  }
  return local_4;
}



undefined _stirling_cache_create(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  int local_38;
  int local_34;
  undefined local_11;
  
  pvVar3 = _calloc((long)((param_2 * (param_2 + 1)) / 2),4);
  if (pvVar3 == (void *)0x0) {
    local_11 = 0;
  }
  else {
    *param_1 = param_2;
    *(void **)(param_1 + 2) = pvVar3;
    for (local_34 = 1; local_34 <= param_2; local_34 = local_34 + 1) {
      for (local_38 = 1; local_38 <= local_34; local_38 = local_38 + 1) {
        iVar1 = _stirling_number1(param_1,local_34 + -1,local_38 + -1);
        iVar2 = _stirling_number1(param_1,local_34 + -1,local_38);
        *(int *)((long)pvVar3 + (long)((local_34 * (local_34 + -1)) / 2 + local_38 + -1) * 4) =
             iVar1 + iVar2 * (local_34 + -1);
      }
    }
    local_11 = 1;
  }
  return local_11;
}



void _stirling_cache_destroy(long param_1)

{
  _free(*(void **)(param_1 + 8));
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



int _print_stirling_numbers(undefined8 param_1,int param_2)

{
  char *pcVar1;
  int iVar2;
  int local_28;
  int local_24;
  int local_20;
  
  _printf("Unsigned Stirling numbers of the first kind:\nn/k");
  for (local_20 = 0; local_20 <= param_2; local_20 = local_20 + 1) {
    pcVar1 = "%2d";
    if (local_20 != 0) {
      pcVar1 = "%10d";
    }
    _printf(pcVar1);
  }
  iVar2 = _printf("\n");
  for (local_24 = 0; local_24 <= param_2; local_24 = local_24 + 1) {
    _printf("%2d ");
    for (local_28 = 0; local_28 <= local_24; local_28 = local_28 + 1) {
      pcVar1 = "%2d";
      if (local_28 != 0) {
        pcVar1 = "%10d";
      }
      _stirling_number1(param_1,local_24,local_28);
      _printf(pcVar1);
    }
    iVar2 = _printf("\n");
  }
  return iVar2;
}



bool entry(void)

{
  bool bVar1;
  ulong uVar2;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_14;
  
  local_14 = 0;
  local_28 = 0;
  local_20 = 0;
  uVar2 = _stirling_cache_create(&local_28);
  bVar1 = (uVar2 & 1) != 0;
  if (bVar1) {
    _print_stirling_numbers(&local_28,0xc);
    _stirling_cache_destroy(&local_28);
  }
  else {
    _fprintf(*(FILE **)PTR____stderrp_100004000,"Out of memory\n");
  }
  return !bVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _calloc(size_t param_1,size_t param_2)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f28. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__calloc_100004008)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fprintf(FILE *param_1,char *param_2,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f34. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fprintf_100004010)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f40. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004018)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f4c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004020)((int)param_1);
  return iVar1;
}


