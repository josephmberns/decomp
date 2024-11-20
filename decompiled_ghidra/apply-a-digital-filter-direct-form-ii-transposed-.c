#include "apply-a-digital-filter-direct-form-ii-transposed-.h"



undefined  [16] _extractVector(char *param_1)

{
  undefined auVar1 [16];
  void *pvVar2;
  long lVar3;
  double dVar4;
  char *local_38;
  int local_30;
  int local_2c;
  undefined4 uStack_14;
  
  local_2c = 0;
  local_30 = 1;
  while (param_1[local_2c] != '\0') {
    lVar3 = (long)local_2c;
    local_2c = local_2c + 1;
    if (param_1[lVar3] == ' ') {
      local_30 = local_30 + 1;
    }
  }
  pvVar2 = _malloc((long)local_30 << 2);
  local_38 = _strtok(param_1," ");
  local_2c = 0;
  while (local_38 != (char *)0x0) {
    dVar4 = _atof(local_38);
    lVar3 = (long)local_2c;
    local_2c = local_2c + 1;
    *(float *)((long)pvVar2 + lVar3 * 4) = (float)dVar4;
    local_38 = _strtok((char *)0x0," ");
  }
  auVar1._8_4_ = local_30;
  auVar1._0_8_ = pvVar2;
  auVar1._12_4_ = uStack_14;
  return auVar1;
}



undefined  [16] _processSignalFile(char *param_1)

{
  undefined auVar1 [16];
  FILE *pFVar2;
  void *pvVar3;
  int iVar4;
  undefined auVar5 [12];
  undefined auVar6 [12];
  undefined auVar7 [12];
  float local_434;
  int local_430;
  int local_42c;
  undefined4 uStack_414;
  char acStack_410 [1000];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100004008;
  pFVar2 = _fopen(param_1,"r");
  _fgets(acStack_410,1000,pFVar2);
  auVar5 = _extractVector(acStack_410);
  _fgets(acStack_410,1000,pFVar2);
  auVar6 = _extractVector(acStack_410);
  _fgets(acStack_410,1000,pFVar2);
  auVar7 = _extractVector(acStack_410);
  iVar4 = auVar7._8_4_;
  _fclose(pFVar2);
  pvVar3 = _calloc((long)iVar4,4);
  for (local_42c = 0; local_42c < iVar4; local_42c = local_42c + 1) {
    local_434 = 0.0;
    for (local_430 = 0; local_430 < auVar6._8_4_; local_430 = local_430 + 1) {
      if (-1 < local_42c - local_430) {
        local_434 = (float)NEON_fmadd(*(undefined4 *)(auVar6._0_8_ + (long)local_430 * 4),
                                      *(undefined4 *)
                                       (auVar7._0_8_ + (long)(local_42c - local_430) * 4),local_434)
        ;
      }
    }
    for (local_430 = 0; local_430 < auVar5._8_4_; local_430 = local_430 + 1) {
      if (-1 < local_42c - local_430) {
        local_434 = (float)NEON_fmsub(auVar5._0_8_[local_430],
                                      *(undefined4 *)
                                       ((long)pvVar3 + (long)(local_42c - local_430) * 4),local_434)
        ;
      }
    }
    *(float *)((long)pvVar3 + (long)local_42c * 4) = local_434 / *auVar5._0_8_;
  }
  auVar1._12_4_ = uStack_414;
  auVar1._8_4_ = iVar4;
  if (*(long *)PTR____stack_chk_guard_100004008 != local_28) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail();
  }
  auVar1._0_8_ = pvVar3;
  return auVar1;
}



int _printVector(undefined8 param_1,int param_2,char *param_3)

{
  int iVar1;
  FILE *pFVar2;
  int local_2c;
  
  if (param_3 == (char *)0x0) {
    _printf("[");
    for (local_2c = 0; local_2c < param_2; local_2c = local_2c + 1) {
      _printf("%.12f, ");
    }
    iVar1 = _printf("\b\b]");
  }
  else {
    pFVar2 = _fopen(param_3,"w");
    for (local_2c = 0; local_2c < param_2 + -1; local_2c = local_2c + 1) {
      _fprintf(pFVar2,"%.12f, ");
    }
    _fprintf(pFVar2,"%.12f");
    iVar1 = _fclose(pFVar2);
  }
  return iVar1;
}



undefined8 entry(int param_1,long param_2)

{
  size_t sVar1;
  size_t sVar2;
  void *pvVar3;
  undefined auVar4 [16];
  char *local_28;
  
  if ((param_1 < 2) || (3 < param_1)) {
    _printf("Usage : %s <name of signal data file and optional output file.>");
  }
  else {
    if (param_1 != 2) {
      sVar1 = _strlen(*(char **)(param_2 + 0x10));
      sVar2 = _strlen(local_28);
      pvVar3 = _malloc(sVar1 + sVar2 + 1);
      ___strcpy_chk(pvVar3,"written to ",0xffffffffffffffff);
      ___strcat_chk(pvVar3,*(undefined8 *)(param_2 + 0x10),0xffffffffffffffff);
    }
    _printf("Filtered signal %s");
    auVar4 = _processSignalFile(*(undefined8 *)(param_2 + 8));
    _printVector(auVar4._0_8_,auVar4._8_8_,*(undefined8 *)(param_2 + 0x10));
  }
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003e8c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



void ___strcat_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003e98. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____strcat_chk_100004010)();
  return;
}



void ___strcpy_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003ea4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____strcpy_chk_100004018)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

double _atof(char *param_1)

{
  double dVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003eb0. Too many branches
                    // WARNING: Treating indirect jump as call
  dVar1 = (double)(*(code *)PTR__atof_100004020)();
  return dVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _calloc(size_t param_1,size_t param_2)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ebc. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__calloc_100004028)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fclose(FILE *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ec8. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fclose_100004030)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * _fgets(char *param_1,int param_2,FILE *param_3)

{
  char *pcVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ed4. Too many branches
                    // WARNING: Treating indirect jump as call
  pcVar1 = (char *)(*(code *)PTR__fgets_100004038)(param_1,param_2);
  return pcVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

FILE * _fopen(char *param_1,char *param_2)

{
  FILE *pFVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ee0. Too many branches
                    // WARNING: Treating indirect jump as call
  pFVar1 = (FILE *)(*(code *)PTR__fopen_100004040)();
  return pFVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fprintf(FILE *param_1,char *param_2,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003eec. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fprintf_100004048)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ef8. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004050)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f04. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004058)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t _strlen(char *param_1)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f10. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__strlen_100004060)();
  return sVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * _strtok(char *param_1,char *param_2)

{
  char *pcVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f1c. Too many branches
                    // WARNING: Treating indirect jump as call
  pcVar1 = (char *)(*(code *)PTR__strtok_100004068)();
  return pcVar1;
}


