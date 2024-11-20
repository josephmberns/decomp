#include "determine-if-a-string-is-collapsible.h"



undefined4 _strcmpi(char *param_1,char *param_2)

{
  size_t sVar1;
  size_t sVar2;
  int local_34;
  undefined4 local_14;
  
  sVar1 = _strlen(param_1);
  sVar2 = _strlen(param_2);
  if ((int)sVar1 == (int)sVar2) {
    for (local_34 = 0; local_34 < (int)sVar1; local_34 = local_34 + 1) {
      if (((('@' < param_1[local_34]) && (param_1[local_34] < '[')) && ('`' < param_2[local_34])) &&
         ((param_2[local_34] < '{' && (param_2[local_34] + -0x41 != (int)param_1[local_34])))) {
        return 1;
      }
      if ((('@' < param_2[local_34]) && (param_2[local_34] < '[')) &&
         (('`' < param_1[local_34] &&
          ((param_1[local_34] < '{' && (param_1[local_34] + -0x41 != (int)param_2[local_34])))))) {
        return 1;
      }
      if (param_1[local_34] != param_2[local_34]) {
        return 1;
      }
    }
    local_14 = 0;
  }
  else {
    local_14 = 1;
  }
  return local_14;
}



char * _strToCharList(char *param_1)

{
  size_t sVar1;
  char *pcVar2;
  char *pcVar3;
  char *local_30;
  int local_20;
  
  sVar1 = _strlen(param_1);
  pcVar2 = (char *)_malloc(0x10);
  *pcVar2 = *param_1;
  pcVar2[8] = '\0';
  pcVar2[9] = '\0';
  pcVar2[10] = '\0';
  pcVar2[0xb] = '\0';
  pcVar2[0xc] = '\0';
  pcVar2[0xd] = '\0';
  pcVar2[0xe] = '\0';
  pcVar2[0xf] = '\0';
  local_30 = pcVar2;
  for (local_20 = 1; local_20 < (int)sVar1; local_20 = local_20 + 1) {
    pcVar3 = (char *)_malloc(0x10);
    *pcVar3 = param_1[local_20];
    pcVar3[8] = '\0';
    pcVar3[9] = '\0';
    pcVar3[10] = '\0';
    pcVar3[0xb] = '\0';
    pcVar3[0xc] = '\0';
    pcVar3[0xd] = '\0';
    pcVar3[0xe] = '\0';
    pcVar3[0xf] = '\0';
    *(char **)(local_30 + 8) = pcVar3;
    local_30 = pcVar3;
  }
  return pcVar2;
}



void * _charListToString(undefined *param_1)

{
  void *pvVar1;
  int local_28;
  int local_24;
  undefined *local_20;
  
  local_24 = 0;
  for (local_20 = param_1; local_20 != (undefined *)0x0; local_20 = *(undefined **)(local_20 + 8)) {
    local_24 = local_24 + 1;
  }
  pvVar1 = _malloc((long)(local_24 + 1));
  local_20 = param_1;
  for (local_28 = 0; local_28 < local_24; local_28 = local_28 + 1) {
    *(undefined *)((long)pvVar1 + (long)local_28) = *local_20;
    local_20 = *(undefined **)(local_20 + 8);
  }
  _free(param_1);
  *(undefined *)((long)pvVar1 + (long)local_28) = 0;
  return pvVar1;
}



void _processString(undefined8 param_1,int param_2,byte param_3)

{
  byte bVar1;
  bool bVar2;
  byte *pbVar3;
  char *local_38;
  byte *local_30;
  
  pbVar3 = (byte *)_strToCharList(param_1);
  local_30 = pbVar3;
  if (param_2 == 1) {
    for (; local_30 != (byte *)0x0; local_30 = *(byte **)(local_30 + 8)) {
      if ((int)(char)*local_30 == (uint)param_3) {
        local_38 = *(char **)(local_30 + 8);
        while( true ) {
          bVar2 = false;
          if (local_38 != (char *)0x0) {
            bVar2 = (int)*local_38 == (uint)param_3;
          }
          if (!bVar2) break;
          *(undefined8 *)(local_30 + 8) = *(undefined8 *)(local_38 + 8);
          local_38[8] = '\0';
          local_38[9] = '\0';
          local_38[10] = '\0';
          local_38[0xb] = '\0';
          local_38[0xc] = '\0';
          local_38[0xd] = '\0';
          local_38[0xe] = '\0';
          local_38[0xf] = '\0';
          _free(local_38);
          local_38 = *(char **)(local_30 + 8);
        }
      }
    }
  }
  else {
    while( true ) {
      bVar2 = false;
      if (local_30 != (byte *)0x0) {
        bVar2 = *(long *)(local_30 + 8) != 0;
      }
      if (!bVar2) break;
      if (*local_30 == **(byte **)(local_30 + 8)) {
        local_38 = *(char **)(local_30 + 8);
        bVar1 = *local_30;
        while( true ) {
          bVar2 = false;
          if (local_38 != (char *)0x0) {
            bVar2 = (int)*local_38 == (uint)bVar1;
          }
          if (!bVar2) break;
          *(undefined8 *)(local_30 + 8) = *(undefined8 *)(local_38 + 8);
          local_38[8] = '\0';
          local_38[9] = '\0';
          local_38[10] = '\0';
          local_38[0xb] = '\0';
          local_38[0xc] = '\0';
          local_38[0xd] = '\0';
          local_38[0xe] = '\0';
          local_38[0xf] = '\0';
          _free(local_38);
          local_38 = *(char **)(local_30 + 8);
        }
      }
      local_30 = *(byte **)(local_30 + 8);
    }
  }
  _charListToString(pbVar3);
  return;
}



int _printResults(char *param_1,char *param_2,int param_3)

{
  int iVar1;
  
  if (param_3 == 1) {
    _printf("Specified Operation : SQUEEZE\nTarget Character : %c");
  }
  else {
    _printf("Specified Operation : COLLAPSE");
  }
  _strlen(param_1);
  _printf("\nOriginal %c%c%c%s%c%c%c\nLength : %d");
  _strlen(param_2);
  iVar1 = _printf("\nFinal    %c%c%c%s%c%c%c\nLength : %d\n");
  return iVar1;
}



undefined4 entry(int param_1,long param_2)

{
  int iVar1;
  size_t sVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined local_25;
  undefined4 local_24;
  
  if ((param_1 < 3) || (4 < param_1)) {
    _printf(
           "Usage : %s <SQUEEZE|COLLAPSE> <String to be processed> <Character to be squeezed, if operation is SQUEEZE>\n"
           );
  }
  else {
    iVar1 = _strcmpi(*(undefined8 *)(param_2 + 8),"SQUEEZE");
    if ((iVar1 == 0) && (param_1 != 4)) {
      _scanf("Please enter characted to be squeezed : %c");
      local_24 = 1;
    }
    else if (param_1 == 4) {
      local_24 = 1;
      local_25 = **(undefined **)(param_2 + 0x18);
    }
    else {
      iVar1 = _strcmpi(*(undefined8 *)(param_2 + 8),"COLLAPSE");
      if (iVar1 == 0) {
        local_24 = 0;
      }
    }
    sVar2 = _strlen(*(char **)(param_2 + 0x10));
    if (sVar2 < 2) {
      _printResults(*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x10),local_24,
                    local_25);
    }
    else {
      uVar4 = *(undefined8 *)(param_2 + 0x10);
      uVar3 = _processString(*(undefined8 *)(param_2 + 0x10),local_24,local_25);
      _printResults(uVar4,uVar3,local_24,local_25);
    }
  }
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003e2c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e38. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004008)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e44. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004010)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _scanf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e50. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__scanf_100004018)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t _strlen(char *param_1)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e5c. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__strlen_100004020)();
  return sVar1;
}


