#include "levenshtein-distance-alignment.h"



void _leven(char *param_1,char *param_2)

{
  long lVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  long lVar5;
  size_t sVar6;
  undefined8 *puVar7;
  void *pvVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  char *local_70;
  int local_28;
  int local_24;
  
  sVar6 = _strlen(param_1);
  iVar9 = (int)sVar6;
  sVar6 = _strlen(param_2);
  iVar10 = (int)sVar6;
  puVar7 = (undefined8 *)_malloc((long)(iVar9 + 1) * 8);
  pvVar8 = _calloc((long)((iVar9 + 1) * (iVar10 + 1)),0x10);
  *puVar7 = pvVar8;
  for (local_24 = 1; local_24 <= iVar9; local_24 = local_24 + 1) {
    puVar7[local_24] = puVar7[local_24 + -1] + (long)(iVar10 + 1) * 0x10;
  }
  while (local_24 = iVar9, -1 < local_24) {
    pcVar2 = param_1 + local_24;
    for (local_28 = iVar10; -1 < local_28; local_28 = local_28 + -1) {
      pcVar3 = param_2 + local_28;
      if ((*pcVar2 != '\0') || (*pcVar3 != '\0')) {
        pcVar4 = (char *)(puVar7[local_24] + (long)local_28 * 0x10);
        lVar11 = puVar7[local_24 + 1];
        lVar5 = puVar7[local_24 + 1] + (long)local_28 * 0x10;
        lVar1 = puVar7[local_24] + (long)(local_28 + 1) * 0x10;
        *pcVar4 = *pcVar2;
        pcVar4[1] = *pcVar3;
        if (*pcVar2 == '\0') {
          *(long *)(pcVar4 + 8) = lVar1;
          *(int *)(pcVar4 + 4) = *(int *)(*(long *)(pcVar4 + 8) + 4) + 1;
        }
        else if (*pcVar3 == '\0') {
          *(long *)(pcVar4 + 8) = lVar5;
          *(int *)(pcVar4 + 4) = *(int *)(*(long *)(pcVar4 + 8) + 4) + 1;
        }
        else {
          *(long *)(pcVar4 + 8) = lVar11 + (long)(local_28 + 1) * 0x10;
          if (*pcVar2 == *pcVar3) {
            *(undefined4 *)(pcVar4 + 4) = *(undefined4 *)(*(long *)(pcVar4 + 8) + 4);
          }
          else {
            if (*(int *)(lVar1 + 4) < *(int *)(*(long *)(pcVar4 + 8) + 4)) {
              *(long *)(pcVar4 + 8) = lVar1;
              *pcVar4 = '\0';
            }
            if (*(int *)(lVar5 + 4) < *(int *)(*(long *)(pcVar4 + 8) + 4)) {
              *(long *)(pcVar4 + 8) = lVar5;
              *pcVar4 = *pcVar2;
              pcVar4[1] = '\0';
            }
            *(int *)(pcVar4 + 4) = *(int *)(*(long *)(pcVar4 + 8) + 4) + 1;
          }
        }
      }
    }
    iVar9 = local_24 + -1;
  }
  local_70 = (char *)*puVar7;
  _printf("%s -> %s: %d edits\n");
  for (; *(long *)(local_70 + 8) != 0; local_70 = *(char **)(local_70 + 8)) {
    if (*local_70 == local_70[1]) {
      _printf("%c");
    }
    else {
      _putchar(0x28);
      if (*local_70 != '\0') {
        _putchar((int)*local_70);
      }
      _putchar(0x2c);
      if (local_70[1] != '\0') {
        _putchar((int)local_70[1]);
      }
      _putchar(0x29);
    }
  }
  _putchar(10);
  _free((void *)*puVar7);
  _free(puVar7);
  return;
}



undefined4 entry(void)

{
  _leven("raisethysword","rosettacode");
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _calloc(size_t param_1,size_t param_2)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f34. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__calloc_100004000)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f40. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004008)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f4c. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004010)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f58. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004018)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _putchar(int param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f64. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__putchar_100004020)(param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t _strlen(char *param_1)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f70. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__strlen_100004028)();
  return sVar1;
}


