#include "burrows-wheeler-transform.h"



int _compareStrings(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  
  iVar1 = _strcmp((char *)*param_1,(char *)*param_2);
  return iVar1;
}



undefined4 _bwt(char *param_1,long param_2)

{
  int iVar1;
  size_t sVar2;
  char *pcVar3;
  void *pvVar4;
  void *pvVar5;
  void *pvVar6;
  int iVar7;
  int local_2c;
  undefined4 local_14;
  
  sVar2 = _strlen(param_1);
  iVar1 = (int)sVar2;
  iVar7 = iVar1 + 2;
  pcVar3 = _strchr(param_1,2);
  if ((pcVar3 == (char *)0x0) && (pcVar3 = _strchr(param_1,3), pcVar3 == (char *)0x0)) {
    pvVar4 = _calloc((long)(iVar1 + 3),1);
    ___sprintf_chk(pvVar4,0,0xffffffffffffffff,"%c%s%c");
    pvVar5 = _malloc((long)iVar7 << 3);
    for (local_2c = 0; local_2c < iVar7; local_2c = local_2c + 1) {
      pvVar6 = _calloc((long)(iVar1 + 3),1);
      ___strcpy_chk(pvVar6,(long)pvVar4 + (long)local_2c,0xffffffffffffffff);
      if (0 < local_2c) {
        ___strncat_chk(pvVar6,pvVar4,(long)local_2c,0xffffffffffffffff);
      }
      *(void **)((long)pvVar5 + (long)local_2c * 8) = pvVar6;
    }
    _qsort(pvVar5,(long)iVar7,8,(int *)_compareStrings);
    for (local_2c = 0; local_2c < iVar7; local_2c = local_2c + 1) {
      *(undefined *)(param_2 + local_2c) =
           *(undefined *)(*(long *)((long)pvVar5 + (long)local_2c * 8) + (long)(iVar1 + 1));
      _free(*(void **)((long)pvVar5 + (long)local_2c * 8));
    }
    _free(pvVar5);
    _free(pvVar4);
    local_14 = 0;
  }
  else {
    local_14 = 1;
  }
  return local_14;
}



void _ibwt(char *param_1,undefined8 param_2)

{
  size_t sVar1;
  void *pvVar2;
  void *pvVar3;
  int iVar4;
  int local_28;
  int local_24;
  
  sVar1 = _strlen(param_1);
  iVar4 = (int)sVar1;
  pvVar2 = _malloc((long)iVar4 << 3);
  for (local_24 = 0; local_24 < iVar4; local_24 = local_24 + 1) {
    pvVar3 = _calloc((long)(iVar4 + 1),1);
    *(void **)((long)pvVar2 + (long)local_24 * 8) = pvVar3;
  }
  for (local_24 = 0; local_24 < iVar4; local_24 = local_24 + 1) {
    for (local_28 = 0; local_28 < iVar4; local_28 = local_28 + 1) {
      ___memmove_chk(*(long *)((long)pvVar2 + (long)local_28 * 8) + 1,
                     *(undefined8 *)((long)pvVar2 + (long)local_28 * 8),(long)iVar4,
                     0xffffffffffffffff);
      **(char **)((long)pvVar2 + (long)local_28 * 8) = param_1[local_28];
    }
    _qsort(pvVar2,(long)iVar4,8,(int *)_compareStrings);
  }
  local_24 = 0;
  do {
    if (iVar4 <= local_24) {
LAB_100003b14:
      for (local_24 = 0; local_24 < iVar4; local_24 = local_24 + 1) {
        _free(*(void **)((long)pvVar2 + (long)local_24 * 8));
      }
      _free(pvVar2);
      return;
    }
    if (*(char *)(*(long *)((long)pvVar2 + (long)local_24 * 8) + (long)(iVar4 + -1)) == '\x03') {
      ___strncpy_chk(param_2,*(long *)((long)pvVar2 + (long)local_24 * 8) + 1,(long)(iVar4 + -2),
                     0xffffffffffffffff);
      goto LAB_100003b14;
    }
    local_24 = local_24 + 1;
  } while( true );
}



void _makePrintable(undefined8 param_1,char *param_2)

{
  char *local_20;
  
  ___strcpy_chk(param_2,param_1,0xffffffffffffffff);
  for (local_20 = param_2; *local_20 != '\0'; local_20 = local_20 + 1) {
    if (*local_20 == '\x02') {
      *local_20 = '^';
    }
    else if (*local_20 == '\x03') {
      *local_20 = '|';
    }
  }
  return;
}



undefined8 entry(void)

{
  int iVar1;
  size_t sVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  int iVar6;
  int local_50;
  char *local_48 [4];
  char *local_28;
  char *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004018;
  local_48[0] = "banana";
  local_48[1] = "appellee";
  local_48[2] = "dogwood";
  local_48[3] = "TO BE OR NOT TO BE OR WANT TO BE OR NOT?";
  local_28 = "SIX.MIXED.PIXIES.SIFT.SIXTY.PIXIE.DUST.BOXES";
  local_20 = "\x02ABC\x03";
  for (local_50 = 0; local_50 < 6; local_50 = local_50 + 1) {
    sVar2 = _strlen(local_48[local_50]);
    iVar6 = (int)sVar2;
    pvVar3 = _calloc((long)(iVar6 + 1),1);
    _makePrintable(local_48[local_50],pvVar3);
    _printf("%s\n");
    _printf(" --> ");
    pvVar4 = _calloc((long)(iVar6 + 3),1);
    iVar1 = _bwt(local_48[local_50],pvVar4);
    if (iVar1 == 1) {
      _printf("ERROR: String can\'t contain STX or ETX\n");
    }
    else {
      _makePrintable(pvVar4,pvVar3);
      _printf("%s\n");
    }
    pvVar5 = _calloc((long)(iVar6 + 1),1);
    _ibwt(pvVar4,pvVar5);
    _makePrintable(pvVar5,pvVar3);
    _printf(" --> %s\n\n");
    _free(pvVar3);
    _free(pvVar4);
    _free(pvVar5);
  }
  if (*(long *)PTR____stack_chk_guard_100004018 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail();
  }
  return 0;
}



void ___memmove_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003e4c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____memmove_chk_100004000)();
  return;
}



void ___sprintf_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003e58. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____sprintf_chk_100004008)();
  return;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003e64. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004010)();
  return;
}



void ___strcpy_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003e70. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____strcpy_chk_100004020)();
  return;
}



void ___strncat_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003e7c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____strncat_chk_100004028)();
  return;
}



void ___strncpy_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003e88. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____strncpy_chk_100004030)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _calloc(size_t param_1,size_t param_2)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e94. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__calloc_100004038)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003ea0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004040)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003eac. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004048)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003eb8. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004050)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _qsort(void *param_1,size_t param_2,size_t param_3,int *param_4)

{
                    // WARNING: Could not recover jumptable at 0x000100003ec4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__qsort_100004058)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * _strchr(char *param_1,int param_2)

{
  char *pcVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ed0. Too many branches
                    // WARNING: Treating indirect jump as call
  pcVar1 = (char *)(*(code *)PTR__strchr_100004060)(param_1,param_2);
  return pcVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _strcmp(char *param_1,char *param_2)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003edc. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__strcmp_100004068)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t _strlen(char *param_1)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ee8. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__strlen_100004070)();
  return sVar1;
}


