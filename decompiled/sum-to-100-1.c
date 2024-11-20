#include "sum-to-100-1.h"



int _compareExpressionBySum(int *param_1,int *param_2)

{
  return *param_1 - *param_2;
}



int _compareCountSumsByCount(int *param_1,int *param_2)

{
  return *param_1 - *param_2;
}



int _evaluate(int param_1)

{
  int iVar1;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_8 = 0;
  local_c = 0;
  local_10 = 1;
  local_4 = param_1;
  for (local_14 = 9; 0 < local_14; local_14 = local_14 + -1) {
    local_c = local_10 * local_14 + local_c;
    iVar1 = local_4 % 3;
    if (iVar1 == 0) {
      local_8 = local_8 + local_c;
      local_c = 0;
      local_10 = 1;
    }
    else if (iVar1 == 1) {
      local_8 = local_8 - local_c;
      local_c = 0;
      local_10 = 1;
    }
    else if (iVar1 == 2) {
      local_10 = local_10 * 10;
    }
    local_4 = local_4 / 3;
  }
  return local_8;
}



int _print(int param_1)

{
  int iVar1;
  int iVar2;
  int local_2c;
  int local_28;
  int local_24;
  char *local_20;
  
  local_20 = &DAT_10003b428;
  local_24 = 0x4ce3;
  local_28 = 0x19a1;
  for (local_2c = 1; local_2c < 10; local_2c = local_2c + 1) {
    iVar2 = 0;
    if (local_24 != 0) {
      iVar2 = param_1 / local_24;
    }
    iVar1 = 0;
    if (local_28 != 0) {
      iVar1 = (param_1 - iVar2 * local_24) / local_28;
    }
    if (iVar1 == 0) {
      if (1 < local_2c) {
        *local_20 = '+';
        local_20 = local_20 + 1;
      }
    }
    else if (iVar1 == 1) {
      *local_20 = '-';
      local_20 = local_20 + 1;
    }
    local_24 = local_28;
    local_28 = local_28 / 3;
    *local_20 = (char)local_2c + '0';
    local_20 = local_20 + 1;
  }
  *local_20 = '\0';
  _evaluate(param_1);
  iVar2 = _printf("%9d = %s\n");
  return iVar2;
}



void _comment(void *ctx,xmlChar *value)

{
  _printf("\n\n%s\n\n");
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _init(void)

{
  undefined4 uVar1;
  int local_1c;
  int local_18;
  int local_14;
  
  for (local_14 = 0; local_14 < 0x3342; local_14 = local_14 + 1) {
    uVar1 = _evaluate(local_14);
    *(undefined4 *)(&_expressions + (long)local_14 * 8) = uVar1;
    *(int *)((long)local_14 * 8 + 0x100021a1c) = local_14;
  }
  __expressionsLength = 0x3342;
  _qsort(&_expressions,0x3342,8,(int *)_compareExpressionBySum);
  local_18 = 0;
  __countSums = 1;
  _DAT_10000800c = __expressions;
  for (local_1c = 0; local_1c < __expressionsLength; local_1c = local_1c + 1) {
    if (*(int *)(&DAT_10000800c + (long)local_18 * 8) ==
        *(int *)(&_expressions + (long)local_1c * 8)) {
      *(int *)(&_countSums + (long)local_18 * 8) = *(int *)(&_countSums + (long)local_18 * 8) + 1;
    }
    else {
      local_18 = local_18 + 1;
      *(undefined4 *)(&_countSums + (long)local_18 * 8) = 1;
      *(undefined4 *)(&DAT_10000800c + (long)local_18 * 8) =
           *(undefined4 *)(&_expressions + (long)local_1c * 8);
    }
  }
  __countSumsLength = local_18 + 1;
  _qsort(&_countSums,(long)__countSumsLength,8,(int *)_compareCountSumsByCount);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 entry(void)

{
  int *piVar1;
  bool bVar2;
  void *pvVar3;
  xmlChar *value;
  xmlChar *pxVar4;
  xmlChar *extraout_x1;
  int local_3c;
  int local_38 [4];
  int *local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  
  local_14 = 0;
  _init();
  _comment("Show all solutions that sum to 100",value);
  local_18 = 100;
  local_20 = 100;
  pxVar4 = &_expressions;
  local_28 = (int *)_bsearch(&local_20,&_expressions,(long)__expressionsLength,8,
                             (int *)_compareExpressionBySum);
  if (local_28 != (int *)0x0) {
    while( true ) {
      bVar2 = false;
      if (local_28 != (int *)&_expressions) {
        bVar2 = local_28[-2] == 100;
      }
      if (!bVar2) break;
      local_28 = local_28 + -2;
    }
    while( true ) {
      bVar2 = false;
      if (local_28 != (int *)(&_expressions + (long)__expressionsLength * 8)) {
        bVar2 = *local_28 == 100;
      }
      if (!bVar2) break;
      piVar1 = local_28 + 1;
      local_28 = local_28 + 2;
      _print(*piVar1);
      pxVar4 = extraout_x1;
    }
  }
  _comment("Show the positve sum that has the maximum number of solutions",pxVar4);
  local_38[3] = __countSumsLength;
  do {
    local_38[3] = local_38[3] + -1;
  } while (*(int *)(&DAT_10000800c + (long)local_38[3] * 8) < 0);
  _printf("%d has %d solutions\n");
  _comment("Show the lowest positive number that can\'t be expressed",pxVar4);
  local_38[2] = 0;
  while( true ) {
    local_38[0] = local_38[2];
    local_38[1] = 0;
    pxVar4 = &_expressions;
    pvVar3 = _bsearch(local_38,&_expressions,(long)__expressionsLength,8,
                      (int *)_compareExpressionBySum);
    if (pvVar3 == (void *)0x0) break;
    local_38[2] = local_38[2] + 1;
  }
  _printf("%d\n");
  _comment("Show the ten highest numbers that can be expressed",pxVar4);
  local_3c = __expressionsLength;
  while (local_3c = local_3c + -1, __expressionsLength + -10 <= local_3c) {
    _print(*(undefined4 *)((long)local_3c * 8 + 0x100021a1c));
  }
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _bsearch(void *param_1,void *param_2,size_t param_3,size_t param_4,int *param_5)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e7c. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__bsearch_100004000)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e88. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004008)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _qsort(void *param_1,size_t param_2,size_t param_3,int *param_4)

{
                    // WARNING: Could not recover jumptable at 0x000100003e94. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__qsort_100004010)();
  return;
}


