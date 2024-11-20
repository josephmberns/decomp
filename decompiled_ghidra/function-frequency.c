#include "function-frequency.h"



void _addToList(long *param_1,char *param_2,undefined8 param_3,ulong *param_4,size_t *param_5)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  void *pvVar4;
  size_t sVar5;
  uint local_44;
  int local_3c;
  
  for (local_3c = 0; local_3c < 0x20; local_3c = local_3c + 1) {
    iVar3 = _strcmp(param_2,(&PTR_s_auto_100008000)[local_3c]);
    if (iVar3 == 0) {
      return;
    }
  }
  if (*param_1 == 0) {
    *param_5 = 10;
    pvVar4 = _calloc(*param_5,0x10);
    *param_1 = (long)pvVar4;
    if (*param_1 == 0) {
      _printf("Failed to allocate %lu elements of %lu bytes each.\n");
                    // WARNING: Subroutine does not return
      _abort();
    }
    sVar5 = _strlen(param_2);
    pvVar4 = _malloc(sVar5 + 1);
    *(void **)*param_1 = pvVar4;
    if (*(long *)*param_1 == 0) {
      _strlen(param_2);
      _printf("Failed to allocate %lu bytes.\n");
                    // WARNING: Subroutine does not return
      _abort();
    }
    ___strcpy_chk(*(undefined8 *)*param_1,param_2,0xffffffffffffffff);
    *(undefined4 *)(*param_1 + 8) = 1;
    *(undefined *)(*param_1 + 0xc) = 0;
    *param_4 = 1;
  }
  else {
    bVar2 = false;
    for (local_44 = 0; (ulong)local_44 < *param_4; local_44 = local_44 + 1) {
      iVar3 = _strcmp(*(char **)(*param_1 + (ulong)local_44 * 0x10),param_2);
      if (iVar3 == 0) {
        bVar2 = true;
        lVar1 = *param_1 + (ulong)local_44 * 0x10;
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        break;
      }
    }
    if (!bVar2) {
      pvVar4 = _calloc(*param_5 + 10,0x10);
      if (pvVar4 == (void *)0x0) {
        _printf("Failed to allocate %lu elements of %lu bytes each.\n");
                    // WARNING: Subroutine does not return
        _abort();
      }
      ___memcpy_chk(pvVar4,*param_1,*param_5 << 4,0xffffffffffffffff);
      _free((void *)*param_1);
      *param_5 = *param_5 + 10;
      *param_1 = (long)pvVar4;
      sVar5 = _strlen(param_2);
      pvVar4 = _malloc(sVar5 + 1);
      *(void **)(*param_1 + *param_4 * 0x10) = pvVar4;
      if (*(long *)(*param_1 + *param_4 * 0x10) == 0) {
        _strlen(param_2);
        _printf("Failed to allocate %lu bytes.\n");
                    // WARNING: Subroutine does not return
        _abort();
      }
      ___strcpy_chk(*(undefined8 *)(*param_1 + *param_4 * 0x10),param_2,0xffffffffffffffff);
      *(undefined4 *)(*param_1 + *param_4 * 0x10 + 8) = 1;
      *(undefined *)(*param_1 + *param_4 * 0x10 + 0xc) = 0;
      *param_4 = *param_4 + 1;
    }
  }
  return;
}



long * _printList(long *param_1,ulong param_2)

{
  bool bVar1;
  uint uVar2;
  ulong local_38;
  ulong local_30;
  uint local_28;
  long *plVar3;
  
  local_30 = 0;
  plVar3 = param_1;
  for (local_28 = 0; local_28 < 10; local_28 = local_28 + 1) {
    bVar1 = false;
    for (local_38 = 0; local_38 < param_2; local_38 = local_38 + 1) {
      if (((!bVar1) ||
          (*(int *)(*param_1 + local_30 * 0x10 + 8) < *(int *)(*param_1 + local_38 * 0x10 + 8))) &&
         (*(char *)(*param_1 + local_38 * 0x10 + 0xc) == '\0')) {
        bVar1 = true;
        local_30 = local_38;
      }
    }
    *(undefined *)(*param_1 + local_30 * 0x10 + 0xc) = 1;
    uVar2 = _printf("%s() called %d times.\n");
    plVar3 = (long *)(ulong)uVar2;
  }
  return plVar3;
}



void _freeList(long *param_1,ulong param_2)

{
  undefined8 local_28;
  
  for (local_28 = 0; local_28 < param_2; local_28 = local_28 + 1) {
    _free(*(void **)(*param_1 + local_28 * 0x10));
  }
  _free((void *)*param_1);
  return;
}



char * _extractFunctionName(char *param_1)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  char *local_30;
  char *local_28;
  char *local_18;
  
  iVar3 = _isalpha((int)*param_1);
  local_28 = param_1;
  if ((iVar3 != 0) || (*param_1 == '_')) {
    while( true ) {
      iVar3 = _isalnum((int)*local_28);
      bVar2 = true;
      if (iVar3 == 0) {
        bVar2 = *local_28 == '_';
      }
      if (!bVar2) break;
      local_28 = local_28 + 1;
    }
  }
  local_30 = local_28;
  if (local_28 == param_1) {
    local_18 = (char *)0x0;
  }
  else {
    while (iVar3 = _isspace((int)*local_30), iVar3 != 0) {
      local_30 = local_30 + 1;
    }
    if (*local_30 == '(') {
      lVar1 = (long)local_28 - (long)param_1;
      local_18 = (char *)_malloc(lVar1 + 1);
      if (local_18 == (char *)0x0) {
        _printf("Failed to allocate %lu bytes.\n");
                    // WARNING: Subroutine does not return
        _abort();
      }
      local_18[lVar1] = '\0';
      ___memcpy_chk(local_18,param_1,lVar1,0xffffffffffffffff);
      iVar3 = _strcmp(local_18,"");
      if (iVar3 == 0) {
        _free(local_18);
        local_18 = (char *)0x0;
      }
    }
    else {
      local_18 = (char *)0x0;
    }
  }
  return local_18;
}



undefined8 entry(int param_1,long param_2)

{
  off_t oVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  char *pcVar5;
  size_t sVar6;
  char *local_110;
  stat sStack_100;
  undefined8 local_70;
  undefined8 local_68;
  char *local_60;
  undefined8 local_58;
  undefined8 local_50;
  int local_48;
  char local_41;
  FILE *local_40;
  int local_34;
  long local_30;
  int local_28;
  undefined4 local_24;
  
  local_24 = 0;
  local_34 = 1;
  local_30 = param_2;
  local_28 = param_1;
  while( true ) {
    if (local_28 <= local_34) {
      return 0;
    }
    piVar3 = ___error();
    *piVar3 = 0;
    local_40 = _fopen(*(char **)(local_30 + (long)local_34 * 8),"r");
    piVar3 = ___error();
    if ((*piVar3 != 0) || (local_40 == (FILE *)0x0)) {
      piVar3 = ___error();
      _strerror(*piVar3);
      _printf("fopen() failed with error code \"%s\"\n");
                    // WARNING: Subroutine does not return
      _abort();
    }
    local_41 = '\0';
    local_48 = 0;
    local_50 = 0;
    local_68 = 0;
    local_70 = 0;
    piVar3 = ___error();
    *piVar3 = 0;
    iVar2 = _fileno(local_40);
    iVar2 = _fstat(iVar2,&sStack_100);
    oVar1 = sStack_100.st_size;
    if (iVar2 < 0) {
      piVar3 = ___error();
      _strerror(*piVar3);
      _printf("fstat() returned error \"%s\"\n");
                    // WARNING: Subroutine does not return
      _abort();
    }
    iVar2 = _fileno(local_40);
    pcVar4 = (char *)_mmap(0,oVar1,1,2,iVar2,0);
    piVar3 = ___error();
    if (*piVar3 != 0) break;
    local_110 = pcVar4;
    if (pcVar4 == (char *)0x0) {
      _printf("mmap() returned NULL.\n");
                    // WARNING: Subroutine does not return
      _abort();
    }
    while (local_110 < pcVar4 + sStack_100.st_size) {
      for (; *local_110 != '\0'; local_110 = local_110 + 1) {
        if (local_48 == 0) {
          if ((*local_110 == '/') && (iVar2 = _strncmp(local_110,"/*",2), iVar2 == 0)) {
            local_41 = '\x01';
          }
          if ((*local_110 == '*') && (iVar2 = _strncmp(local_110,"*/",2), iVar2 == 0)) {
            local_41 = '\0';
          }
        }
        if (local_41 == '\0') {
          if (*local_110 == '\"') {
            if (local_48 == 0) {
              local_48 = 1;
            }
            else if ((local_48 == 1) && (iVar2 = _strncmp(local_110 + -1,"\\\"",2), iVar2 != 0)) {
              local_48 = 0;
            }
          }
          if (*local_110 == '\'') {
            if (local_48 == 0) {
              local_48 = 2;
            }
            else if ((local_48 == 2) && (iVar2 = _strncmp(local_110 + -1,"\\\'",2), iVar2 != 0)) {
              local_48 = 0;
            }
          }
        }
        if ((local_41 == '\0') && (local_48 == 0)) {
          pcVar5 = (char *)_extractFunctionName(local_110);
          if (pcVar5 != (char *)0x0) {
            local_60 = pcVar5;
            _addToList(&local_50,pcVar5,local_58,&local_68,&local_70);
            sVar6 = _strlen(pcVar5);
            local_110 = local_110 + sVar6;
          }
          _free(pcVar5);
        }
      }
    }
    piVar3 = ___error();
    *piVar3 = 0;
    _munmap(pcVar4,sStack_100.st_size);
    piVar3 = ___error();
    if (*piVar3 != 0) {
      piVar3 = ___error();
      _strerror(*piVar3);
      _printf("munmap() returned error \"%s\"\n");
                    // WARNING: Subroutine does not return
      _abort();
    }
    piVar3 = ___error();
    *piVar3 = 0;
    _fclose(local_40);
    piVar3 = ___error();
    if (*piVar3 != 0) {
      piVar3 = ___error();
      _strerror(*piVar3);
      _printf("fclose() returned error \"%s\"\n");
                    // WARNING: Subroutine does not return
      _abort();
    }
    _printList(&local_50,local_68);
    _freeList(&local_50,local_68);
    local_34 = local_34 + 1;
  }
  piVar3 = ___error();
  _strerror(*piVar3);
  _printf("mmap() failed with error \"%s\"\n");
                    // WARNING: Subroutine does not return
  _abort();
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int * ___error(void)

{
  int *piVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003cb8. Too many branches
                    // WARNING: Treating indirect jump as call
  piVar1 = (int *)(*(code *)PTR____error_100004000)();
  return piVar1;
}



void ___memcpy_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003cc4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____memcpy_chk_100004008)();
  return;
}



void ___strcpy_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003cd0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____strcpy_chk_100004010)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _abort(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003cdc. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__abort_100004018)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _calloc(size_t param_1,size_t param_2)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ce8. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__calloc_100004020)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fclose(FILE *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003cf4. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fclose_100004028)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fileno(FILE *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003d00. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fileno_100004030)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

FILE * _fopen(char *param_1,char *param_2)

{
  FILE *pFVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003d0c. Too many branches
                    // WARNING: Treating indirect jump as call
  pFVar1 = (FILE *)(*(code *)PTR__fopen_100004038)();
  return pFVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003d18. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004040)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fstat(int param_1,stat *param_2)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003d24. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fstat_100004048)(param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _isalnum(int _c)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003d30. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__isalnum_100004050)(_c);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _isalpha(int _c)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003d3c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__isalpha_100004058)(_c);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _isspace(int _c)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003d48. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__isspace_100004060)(_c);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003d54. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004068)();
  return pvVar1;
}



void _mmap(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003d60. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__mmap_100004070)();
  return;
}



void _munmap(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003d6c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__munmap_100004078)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003d78. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004080)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _strcmp(char *param_1,char *param_2)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003d84. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__strcmp_100004088)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * _strerror(int param_1)

{
  char *pcVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003d90. Too many branches
                    // WARNING: Treating indirect jump as call
  pcVar1 = (char *)(*(code *)PTR__strerror_100004090)(param_1);
  return pcVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t _strlen(char *param_1)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003d9c. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__strlen_100004098)();
  return sVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _strncmp(char *param_1,char *param_2,size_t param_3)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003da8. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__strncmp_1000040a0)((int)param_1);
  return iVar1;
}


