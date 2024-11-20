#include "sort-numbers-lexicographically.h"



int _compareStrings(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  
  iVar1 = _strcmp((char *)*param_1,(char *)*param_2);
  return iVar1;
}



void _lexOrder(int param_1,long param_2)

{
  int iVar1;
  void *pvVar2;
  void *pvVar3;
  double dVar4;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  local_30 = 1;
  local_38 = param_1;
  local_34 = param_1;
  if (param_1 < 1) {
    local_34 = 1;
    local_38 = 2 - param_1;
    local_30 = param_1;
  }
  pvVar2 = _malloc((long)local_38 << 3);
  for (local_2c = local_30; local_2c <= local_34; local_2c = local_2c + 1) {
    if (local_2c < 1) {
      if (local_2c == 0) {
        local_3c = 2;
      }
      else {
        dVar4 = (double)_log10((double)-local_2c);
        local_3c = (int)dVar4 + 3;
      }
    }
    else {
      dVar4 = (double)_log10((double)(long)local_2c);
      local_3c = (int)dVar4 + 2;
    }
    pvVar3 = _malloc((long)local_3c);
    *(void **)((long)pvVar2 + (long)(local_2c - local_30) * 8) = pvVar3;
    ___sprintf_chk(*(undefined8 *)((long)pvVar2 + (long)(local_2c - local_30) * 8),0,
                   0xffffffffffffffff,"%d");
  }
  _qsort(pvVar2,(long)local_38,8,(int *)_compareStrings);
  for (local_2c = 0; local_2c < local_38; local_2c = local_2c + 1) {
    iVar1 = _atoi(*(char **)((long)pvVar2 + (long)local_2c * 8));
    *(int *)(param_2 + (long)local_2c * 4) = iVar1;
    _free(*(void **)((long)pvVar2 + (long)local_2c * 8));
  }
  _free(pvVar2);
  return;
}



undefined8 entry(void)

{
  int iVar1;
  void *pvVar2;
  int local_40;
  int local_3c;
  int local_38;
  int local_30 [6];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004010;
  local_30[2] = 0xd;
  local_30[3] = 0x15;
  local_30[0] = 0;
  local_30[1] = 5;
  local_30[4] = 0xffffffea;
  _printf("In lexicographical order:\n\n");
  for (local_38 = 0; local_38 < 5; local_38 = local_38 + 1) {
    iVar1 = local_30[local_38];
    local_40 = iVar1;
    if (iVar1 < 1) {
      local_40 = 2 - iVar1;
    }
    pvVar2 = _malloc((long)local_40 << 2);
    _lexOrder(iVar1,pvVar2);
    _printf("%3d: [");
    for (local_3c = 0; local_3c < local_40; local_3c = local_3c + 1) {
      _printf("%d ");
    }
    _printf("\b]\n");
    _free(pvVar2);
  }
  if (*(long *)PTR____stack_chk_guard_100004010 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail();
  }
  return 0;
}



void ___sprintf_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f00. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____sprintf_chk_100004000)();
  return;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f0c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004008)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _atoi(char *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f18. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__atoi_100004018)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f24. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004020)();
  return;
}



void _log10(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f30. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__log10_100004028)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f3c. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004030)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f48. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004038)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _qsort(void *param_1,size_t param_2,size_t param_3,int *param_4)

{
                    // WARNING: Could not recover jumptable at 0x000100003f54. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__qsort_100004040)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _strcmp(char *param_1,char *param_2)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f60. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__strcmp_100004048)((int)param_1);
  return iVar1;
}


