#include "cartesian-product-of-two-or-more-lists.h"



ulong _cartesianProduct(ulong param_1,long param_2,long param_3,int param_4,int param_5)

{
  uint uVar1;
  ulong uVar2;
  int local_38;
  int local_34;
  
  if (param_5 == param_4) {
    _printf("(");
    for (local_34 = 0; local_34 < param_5; local_34 = local_34 + 1) {
      _printf("%d,");
    }
    uVar1 = _printf("\b),");
    uVar2 = (ulong)uVar1;
  }
  else {
    uVar2 = param_1;
    for (local_38 = 0; local_38 < *(int *)(param_2 + (long)param_5 * 4); local_38 = local_38 + 1) {
      *(undefined4 *)(param_3 + (long)param_5 * 4) =
           *(undefined4 *)(*(long *)(param_1 + (long)param_5 * 8) + (long)local_38 * 4);
      uVar2 = _cartesianProduct(param_1,param_2,param_3,param_4,param_5 + 1);
    }
  }
  return uVar2;
}



int _printSets(undefined8 param_1,long param_2,int param_3)

{
  int iVar1;
  int local_2c;
  int local_28;
  
  iVar1 = _printf("\nNumber of sets : %d");
  for (local_28 = 0; local_28 < param_3 + 1; local_28 = local_28 + 1) {
    iVar1 = _printf("\nSet %d : ");
    for (local_2c = 0; local_2c < *(int *)(param_2 + (long)local_28 * 4); local_2c = local_2c + 1) {
      iVar1 = _printf(" %d ");
    }
  }
  return iVar1;
}



int _processInputString(char *param_1)

{
  int iVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  size_t sVar5;
  char *pcVar6;
  void *pvVar7;
  char *pcVar8;
  long lVar9;
  char *local_58;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  
  local_38 = 0;
  local_50 = 0;
  for (local_3c = 0; param_1[local_3c] != '\0'; local_3c = local_3c + 1) {
    if (param_1[local_3c] == 'x') {
      local_38 = local_38 + 1;
    }
  }
  if (local_38 == 0) {
    iVar1 = _printf("\n%s");
  }
  else {
    pvVar2 = _calloc(4,(long)(local_38 + 1));
    pvVar3 = _calloc(4,(long)(local_38 + 1));
    pvVar4 = _malloc((long)(local_38 + 1) << 3);
    local_58 = _strtok(param_1,"x");
    while (local_58 != (char *)0x0) {
      sVar5 = _strlen(local_58);
      pcVar6 = (char *)_malloc(sVar5);
      local_40 = 0;
      for (local_3c = 0; local_58[local_3c] != '\0'; local_3c = local_3c + 1) {
        if ((local_58[local_3c] < '0') || ('9' < local_58[local_3c])) {
          if (local_58[local_3c] == ',') {
            lVar9 = (long)local_40;
            local_40 = local_40 + 1;
            pcVar6[lVar9] = ' ';
          }
        }
        else {
          lVar9 = (long)local_40;
          local_40 = local_40 + 1;
          pcVar6[lVar9] = local_58[local_3c];
        }
      }
      pcVar6[local_40] = '\0';
      local_34 = 0;
      for (local_3c = 0; pcVar6[local_3c] != '\0'; local_3c = local_3c + 1) {
        if (pcVar6[local_3c] == ' ') {
          local_34 = local_34 + 1;
        }
      }
      if ((local_34 == 0) && (sVar5 = _strlen(pcVar6), sVar5 == 0)) {
        iVar1 = _printf("\n{}");
        return iVar1;
      }
      *(int *)((long)pvVar3 + (long)local_50 * 4) = local_34 + 1;
      pvVar7 = _malloc((long)(local_34 + 1) << 2);
      *(void **)((long)pvVar4 + (long)local_50 * 8) = pvVar7;
      local_44 = 0;
      local_4c = 0;
      for (local_48 = 0; pcVar6[local_48] != '\0'; local_48 = local_48 + 1) {
        if ((pcVar6[local_48 + 1] == ' ') || (pcVar6[local_48 + 1] == '\0')) {
          pcVar8 = (char *)_malloc((long)((local_48 + 1) - local_4c));
          ___strncpy_chk(pcVar8,pcVar6 + local_4c,(long)((local_48 + 1) - local_4c),
                         0xffffffffffffffff);
          iVar1 = _atoi(pcVar8);
          lVar9 = (long)local_44;
          local_44 = local_44 + 1;
          *(int *)(*(long *)((long)pvVar4 + (long)local_50 * 8) + lVar9 * 4) = iVar1;
          local_4c = local_48 + 2;
        }
      }
      local_50 = local_50 + 1;
      local_58 = _strtok((char *)0x0,"x");
    }
    _printf("\n{");
    _cartesianProduct(pvVar4,pvVar3,pvVar2,local_38 + 1,0);
    iVar1 = _printf("\b}");
  }
  return iVar1;
}



undefined8 entry(int param_1,long param_2)

{
  if (param_1 == 2) {
    _processInputString(*(undefined8 *)(param_2 + 8));
  }
  else {
    _printf("Usage : %s <Set product expression enclosed in double quotes>");
  }
  return 0;
}



void ___strncpy_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003edc. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____strncpy_chk_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _atoi(char *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ee8. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__atoi_100004008)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _calloc(size_t param_1,size_t param_2)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ef4. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__calloc_100004010)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f00. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004018)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f0c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004020)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t _strlen(char *param_1)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f18. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__strlen_100004028)();
  return sVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * _strtok(char *param_1,char *param_2)

{
  char *pcVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f24. Too many branches
                    // WARNING: Treating indirect jump as call
  pcVar1 = (char *)(*(code *)PTR__strtok_100004030)();
  return pcVar1;
}


