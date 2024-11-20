#include "abelian-sandpile-model.h"



undefined4 entry(int param_1,long param_2)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  void *pvVar6;
  size_t sVar7;
  size_t sVar8;
  char *pcVar9;
  FILE *pFVar10;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_28;
  int local_24;
  
  bVar2 = true;
  if (param_1 == 3) {
    iVar3 = _atoi(*(char **)(param_2 + 8));
    iVar4 = _atoi(*(char **)(param_2 + 0x10));
    if ((iVar3 < 1) || (iVar4 < 1)) {
      _printf("Sand pile and center pile dimensions must be positive integers.");
    }
    else {
      pvVar5 = _malloc((long)iVar3 << 3);
      for (local_24 = 0; local_24 < iVar3; local_24 = local_24 + 1) {
        pvVar6 = _calloc((long)iVar3,4);
        *(void **)((long)pvVar5 + (long)local_24 * 8) = pvVar6;
      }
      *(int *)(*(long *)((long)pvVar5 + (long)(iVar3 / 2) * 8) + (long)(iVar3 / 2) * 4) = iVar4;
      _printf("Initial sand pile :\n\n");
      for (local_24 = 0; local_24 < iVar3; local_24 = local_24 + 1) {
        for (local_28 = 0; local_28 < iVar3; local_28 = local_28 + 1) {
          _printf("%3d");
        }
        _printf("\n");
      }
      while (bVar2) {
        bVar2 = false;
        local_38 = 0;
        local_3c = 0;
        local_40 = 0;
        local_44 = 0;
        for (local_24 = 0; local_24 < iVar3; local_24 = local_24 + 1) {
          for (local_28 = 0; local_28 < iVar3; local_28 = local_28 + 1) {
            if (3 < *(int *)(*(long *)((long)pvVar5 + (long)local_24 * 8) + (long)local_28 * 4)) {
              if (-1 < local_24 + -1) {
                local_38 = 1;
                piVar1 = (int *)(*(long *)((long)pvVar5 + (long)(local_24 + -1) * 8) +
                                (long)local_28 * 4);
                *piVar1 = *piVar1 + 1;
                if (3 < *(int *)(*(long *)((long)pvVar5 + (long)(local_24 + -1) * 8) +
                                (long)local_28 * 4)) {
                  bVar2 = true;
                }
              }
              if (local_24 + 1 < iVar3) {
                local_3c = 1;
                piVar1 = (int *)(*(long *)((long)pvVar5 + (long)(local_24 + 1) * 8) +
                                (long)local_28 * 4);
                *piVar1 = *piVar1 + 1;
                if (3 < *(int *)(*(long *)((long)pvVar5 + (long)(local_24 + 1) * 8) +
                                (long)local_28 * 4)) {
                  bVar2 = true;
                }
              }
              if (-1 < local_28 + -1) {
                local_40 = 1;
                piVar1 = (int *)(*(long *)((long)pvVar5 + (long)local_24 * 8) +
                                (long)(local_28 + -1) * 4);
                *piVar1 = *piVar1 + 1;
                if (3 < *(int *)(*(long *)((long)pvVar5 + (long)local_24 * 8) +
                                (long)(local_28 + -1) * 4)) {
                  bVar2 = true;
                }
              }
              if (local_28 + 1 < iVar3) {
                local_44 = 1;
                piVar1 = (int *)(*(long *)((long)pvVar5 + (long)local_24 * 8) +
                                (long)(local_28 + 1) * 4);
                *piVar1 = *piVar1 + 1;
                if (3 < *(int *)(*(long *)((long)pvVar5 + (long)local_24 * 8) +
                                (long)(local_28 + 1) * 4)) {
                  bVar2 = true;
                }
              }
              piVar1 = (int *)(*(long *)((long)pvVar5 + (long)local_24 * 8) + (long)local_28 * 4);
              *piVar1 = *piVar1 - (local_38 + local_3c + local_40 + local_44);
              if (3 < *(int *)(*(long *)((long)pvVar5 + (long)local_24 * 8) + (long)local_28 * 4)) {
                bVar2 = true;
              }
            }
          }
        }
      }
      _printf("Final sand pile : \n\n");
      for (local_24 = 0; local_24 < iVar3; local_24 = local_24 + 1) {
        for (local_28 = 0; local_28 < iVar3; local_28 = local_28 + 1) {
          _printf("%3d");
        }
        _printf("\n");
      }
      sVar7 = _strlen(*(char **)(param_2 + 8));
      sVar8 = _strlen(*(char **)(param_2 + 0x10));
      pcVar9 = (char *)_malloc(sVar7 + sVar8 + 0x17);
      ___strcpy_chk(pcVar9,"Final_Sand_Pile_");
      ___strcat_chk(pcVar9,*(undefined8 *)(param_2 + 8),0xffffffffffffffff);
      ___strcat_chk(pcVar9,"_",0xffffffffffffffff);
      ___strcat_chk(pcVar9,*(undefined8 *)(param_2 + 0x10),0xffffffffffffffff);
      ___strcat_chk(pcVar9,".ppm",0xffffffffffffffff);
      pFVar10 = _fopen(pcVar9,"wb");
      _fprintf(pFVar10,"P6\n%d %d\n255\n");
      for (local_24 = 0; local_24 < iVar3; local_24 = local_24 + 1) {
        for (local_28 = 0; local_28 < iVar3; local_28 = local_28 + 1) {
          DAT_100008000 =
               (char)*(undefined4 *)
                      (*(long *)((long)pvVar5 + (long)local_24 * 8) + (long)local_28 * 4) +
               (char)local_24;
          DAT_100008001 =
               (char)*(undefined4 *)
                      (*(long *)((long)pvVar5 + (long)local_24 * 8) + (long)local_28 * 4) +
               (char)local_28;
          DAT_100008002 =
               (char)*(undefined4 *)
                      (*(long *)((long)pvVar5 + (long)local_24 * 8) + (long)local_28 * 4) +
               (char)local_24 * (char)local_28;
          _fwrite(&DAT_100008000,1,3,pFVar10);
        }
      }
      _fclose(pFVar10);
      _printf("\nImage file written to %s\n");
    }
  }
  else {
    _printf("Usage: %s <Sand pile side> <Center pile height>");
  }
  return 0;
}



void ___strcat_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003e44. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____strcat_chk_100004000)();
  return;
}



void ___strcpy_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003e50. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____strcpy_chk_100004008)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _atoi(char *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e5c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__atoi_100004010)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _calloc(size_t param_1,size_t param_2)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e68. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__calloc_100004018)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fclose(FILE *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e74. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fclose_100004020)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

FILE * _fopen(char *param_1,char *param_2)

{
  FILE *pFVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e80. Too many branches
                    // WARNING: Treating indirect jump as call
  pFVar1 = (FILE *)(*(code *)PTR__fopen_100004028)();
  return pFVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fprintf(FILE *param_1,char *param_2,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e8c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fprintf_100004030)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t _fwrite(void *param_1,size_t param_2,size_t param_3,FILE *param_4)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e98. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__fwrite_100004038)();
  return sVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ea4. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004040)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003eb0. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004048)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t _strlen(char *param_1)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ebc. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__strlen_100004050)();
  return sVar1;
}


