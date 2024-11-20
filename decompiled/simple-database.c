#include "simple-database.h"



undefined4 entry(int param_1,long param_2)

{
  bool bVar1;
  int iVar2;
  FILE *pFVar3;
  undefined8 uVar4;
  int local_1a4;
  undefined auStack_188 [80];
  undefined8 local_138;
  undefined8 local_c8;
  long alStack_c0 [6];
  undefined auStack_8c [100];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100004008;
  _memcpy(alStack_c0,&PTR_s__c_1000040c0,0x30);
  local_c8 = 0;
  pFVar3 = _fopen("database.csv","a+");
  if (pFVar3 == (FILE *)0x0) {
    _perror("f=fopen(DB,\"a+\")");
                    // WARNING: Subroutine does not return
    _exit(1);
  }
  if (param_1 < 2) {
LAB_100002ecc:
    _printf(
           "Usage: %s [commands]\n-c  Create new entry.\n-p  Print the latest entry.\n-t  Print all entries sorted by title.\n-d  Print all entries sorted by date.\n-a  Print all entries sorted by author.\n"
           );
    iVar2 = _fclose(pFVar3);
  }
  else {
    local_1a4 = 0;
    while( true ) {
      bVar1 = false;
      if (alStack_c0[local_1a4] != 0) {
        iVar2 = _strcmp(*(char **)(param_2 + 8),(char *)alStack_c0[local_1a4]);
        bVar1 = iVar2 != 0;
      }
      if (!bVar1) break;
      local_1a4 = local_1a4 + 1;
    }
    switch(local_1a4) {
    case 0:
      _printf("-c  Create a new entry.\n");
      _printf("Title           :");
      iVar2 = _scanf(" %25[^\n]");
      if (-1 < iVar2) {
        _printf("Author Firstname:");
        iVar2 = _scanf(" %25[^\n]");
        if (-1 < iVar2) {
          _printf("Author Lastname :");
          iVar2 = _scanf(" %25[^\n]");
          if (-1 < iVar2) {
            _printf("Date 10-12-2000 :");
            iVar2 = _scanf(" %10[^\n]");
            if (-1 < iVar2) {
              _printf("Publication     :");
              iVar2 = _scanf(" %99[^\n]");
              if (-1 < iVar2) {
                local_138 = FUN_10000335c(auStack_8c);
                FUN_1000033a8(0,pFVar3,auStack_188,0);
              }
            }
          }
        }
      }
      break;
    case 1:
      _printf("-p  Print the latest entry.\n");
      while (iVar2 = _feof(pFVar3), iVar2 == 0) {
        FUN_1000033a8(5,pFVar3,auStack_188,0);
      }
      FUN_1000033a8(1,pFVar3,auStack_188,0);
      break;
    case 2:
      _printf("-t  Print all entries sorted by title.\n");
      uVar4 = FUN_1000033a8(6,pFVar3,auStack_188);
      uVar4 = FUN_1000033a8(7,pFVar3,uVar4,FUN_100003a18);
      FUN_1000033a8(1,pFVar3,uVar4,0);
      FUN_1000033a8(8,pFVar3,uVar4,0);
      break;
    case 3:
      _printf("-d  Print all entries sorted by date.\n");
      uVar4 = FUN_1000033a8(6,pFVar3,auStack_188);
      uVar4 = FUN_1000033a8(7,pFVar3,uVar4,FUN_100003a4c);
      FUN_1000033a8(1,pFVar3,uVar4,0);
      FUN_1000033a8(8,pFVar3,uVar4,0);
      break;
    case 4:
      _printf("-a  Print all entries sorted by author.\n");
      uVar4 = FUN_1000033a8(6,pFVar3,auStack_188);
      uVar4 = FUN_1000033a8(7,pFVar3,uVar4,FUN_100003ac4);
      FUN_1000033a8(1,pFVar3,uVar4,0);
      FUN_1000033a8(8,pFVar3,uVar4,0);
      break;
    default:
      _strlen(*(char **)(param_2 + 8));
      _printf("Unknown command: %s.\n");
      goto LAB_100002ecc;
    }
    iVar2 = _fclose(pFVar3);
  }
  if (*(long *)PTR____stack_chk_guard_100004008 != local_28) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(iVar2);
  }
  return 0;
}



void FUN_10000335c(char *param_1)

{
  tm tStack_50;
  char *local_18;
  
  local_18 = param_1;
  _memset(&tStack_50,0,0x38);
  _strptime(local_18,"%m-%d-%Y",&tStack_50);
  _mktime(&tStack_50);
  return;
}



void * FUN_1000033a8(undefined4 param_1,FILE *param_2,void *param_3,int *param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  void *pvVar4;
  int local_d4;
  void *local_c8;
  void *local_b0;
  undefined auStack_8c [100];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100004008;
  local_c8 = (void *)0x0;
  local_d4 = 0;
  local_b0 = param_3;
  switch(param_1) {
  case 0:
    _fprintf(param_2,"\"%s\",");
    _fprintf(param_2,"\"%s\",");
    _fprintf(param_2,"\"%s\",");
    FUN_100003b00((long)param_3 + 0x50);
    _fprintf(param_2,"\"%s\",");
    _fprintf(param_2,"\"%s\" \n");
    break;
  case 1:
    for (; local_b0 != (void *)0x0; local_b0 = *(void **)((long)local_b0 + 0xc0)) {
      _printf("Title       : %s\n");
      _printf("Author      : %s %s\n");
      FUN_100003b00((long)local_b0 + 0x50);
      _printf("Date        : %s\n");
      _printf("Publication : %s\n\n");
      if ((local_d4 + 1) % 3 == 0) {
        _printf("Press Enter to continue.\n");
        iVar1 = _scanf("%*[^\n]");
        if (iVar1 < 0) goto LAB_1000039b4;
        _getchar();
      }
      local_d4 = local_d4 + 1;
    }
    break;
  case 5:
    iVar1 = _fscanf(param_2," \"%[^\"]\",");
    if ((((-1 < iVar1) && (iVar1 = _fscanf(param_2," \"%[^\"]\","), -1 < iVar1)) &&
        (iVar1 = _fscanf(param_2," \"%[^\"]\","), -1 < iVar1)) &&
       ((iVar1 = _fscanf(param_2," \"%[^\"]\","), -1 < iVar1 &&
        (iVar1 = _fscanf(param_2," \"%[^\"]\" "), -1 < iVar1)))) {
      uVar2 = FUN_10000335c(auStack_8c);
      *(undefined8 *)((long)param_3 + 0x50) = uVar2;
    }
    break;
  case 6:
    while (iVar1 = _feof(param_2), iVar1 == 0) {
      FUN_1000033a8(5,param_2,param_3,0);
      pvVar4 = _malloc(200);
      if (pvVar4 == (void *)0x0) {
        _perror("rec=malloc(sizeof(db_t))");
                    // WARNING: Subroutine does not return
        _exit(1);
      }
      _memcpy(pvVar4,param_3,200);
      *(void **)((long)pvVar4 + 0xc0) = local_c8;
      local_d4 = local_d4 + 1;
      local_c8 = pvVar4;
    }
    if (local_d4 < 2) {
      _puts("Empty database. Please create some entries.");
      _fclose(param_2);
                    // WARNING: Subroutine does not return
      _exit(0);
    }
    break;
  case 7:
    for (; local_b0 != (void *)0x0; local_b0 = *(void **)((long)local_b0 + 0xc0)) {
      local_d4 = local_d4 + 1;
    }
    puVar3 = (undefined8 *)_malloc((long)local_d4 << 3);
    if (puVar3 == (undefined8 *)0x0) {
      _perror("pdb=malloc(i*sizeof(pdb_t))");
                    // WARNING: Subroutine does not return
      _exit(1);
    }
    local_d4 = 0;
    for (local_b0 = param_3; local_b0 != (void *)0x0; local_b0 = *(void **)((long)local_b0 + 0xc0))
    {
      puVar3[local_d4] = local_b0;
      local_d4 = local_d4 + 1;
    }
    _qsort(puVar3,(long)local_d4,8,param_4);
    *(undefined8 *)(puVar3[local_d4 + -1] + 0xc0) = 0;
    iVar1 = local_d4;
    while (local_d4 = iVar1 + -1, local_d4 != 0) {
      *(undefined8 *)(puVar3[iVar1 + -2] + 0xc0) = puVar3[local_d4];
      iVar1 = local_d4;
    }
    local_c8 = (void *)*puVar3;
    if (puVar3 != (undefined8 *)0x0) {
      _free(puVar3);
    }
    break;
  case 8:
    pvVar4 = param_3;
    while (local_b0 = pvVar4, local_c8 = local_b0, local_b0 != (void *)0x0) {
      pvVar4 = *(void **)((long)local_b0 + 0xc0);
      if (local_b0 != (void *)0x0) {
        _free(local_b0);
      }
    }
  }
LAB_1000039b4:
  if (*(long *)PTR____stack_chk_guard_100004008 == local_28) {
    return local_c8;
  }
                    // WARNING: Subroutine does not return
  ___stack_chk_fail();
}



int FUN_100003a18(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  
  iVar1 = _strcmp((char *)*param_1,(char *)*param_2);
  return iVar1;
}



uint FUN_100003a4c(long *param_1,long *param_2)

{
  undefined4 local_4;
  
  if (*(long *)(*param_1 + 0x50) < *(long *)(*param_2 + 0x50)) {
    local_4 = 0xffffffff;
  }
  else {
    local_4 = (uint)(*(long *)(*param_2 + 0x50) < *(long *)(*param_1 + 0x50));
  }
  return local_4;
}



int FUN_100003ac4(long *param_1,long *param_2)

{
  int iVar1;
  
  iVar1 = _strcmp((char *)(*param_1 + 0x34),(char *)(*param_2 + 0x34));
  return iVar1;
}



undefined8 FUN_100003b00(time_t *param_1)

{
  tm *ptVar1;
  
  ptVar1 = _localtime(param_1);
  _strftime((char *)0x100008000,0xff,"%m-%d-%Y",ptVar1);
  return 0x100008000;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003b54. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _exit(int param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003b60. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__exit_100004010)(param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fclose(FILE *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003b6c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fclose_100004018)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _feof(FILE *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003b78. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__feof_100004020)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

FILE * _fopen(char *param_1,char *param_2)

{
  FILE *pFVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003b84. Too many branches
                    // WARNING: Treating indirect jump as call
  pFVar1 = (FILE *)(*(code *)PTR__fopen_100004028)();
  return pFVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fprintf(FILE *param_1,char *param_2,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003b90. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fprintf_100004030)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003b9c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004038)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fscanf(FILE *param_1,char *param_2,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ba8. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fscanf_100004040)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _getchar(void)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003bb4. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__getchar_100004048)();
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

tm * _localtime(time_t *param_1)

{
  tm *ptVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003bc0. Too many branches
                    // WARNING: Treating indirect jump as call
  ptVar1 = (tm *)(*(code *)PTR__localtime_100004050)();
  return ptVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003bcc. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004058)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _memcpy(void *param_1,void *param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003bd8. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__memcpy_100004060)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _memset(void *param_1,int param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003be4. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__memset_100004068)(param_1,param_2);
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

time_t _mktime(tm *param_1)

{
  time_t tVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003bf0. Too many branches
                    // WARNING: Treating indirect jump as call
  tVar1 = (*(code *)PTR__mktime_100004070)();
  return tVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _perror(char *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003bfc. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__perror_100004078)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003c08. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004080)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _puts(char *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003c14. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__puts_100004088)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _qsort(void *param_1,size_t param_2,size_t param_3,int *param_4)

{
                    // WARNING: Could not recover jumptable at 0x000100003c20. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__qsort_100004090)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _scanf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003c2c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__scanf_100004098)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _strcmp(char *param_1,char *param_2)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003c38. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__strcmp_1000040a0)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t _strftime(char *param_1,size_t param_2,char *param_3,tm *param_4)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003c44. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__strftime_1000040a8)();
  return sVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t _strlen(char *param_1)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003c50. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__strlen_1000040b0)();
  return sVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * _strptime(char *param_1,char *param_2,tm *param_3)

{
  char *pcVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003c5c. Too many branches
                    // WARNING: Treating indirect jump as call
  pcVar1 = (char *)(*(code *)PTR__strptime_1000040b8)();
  return pcVar1;
}


