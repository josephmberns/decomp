#include "anagrams-1.h"



char * _sortedWord(undefined8 param_1,char *param_2)

{
  char cVar1;
  bool bVar2;
  size_t sVar3;
  char *local_30;
  char *local_28;
  
  ___strcpy_chk(param_2,param_1,0xffffffffffffffff);
  sVar3 = _strlen(param_2);
  do {
    bVar2 = false;
    local_30 = param_2 + sVar3;
    for (local_28 = param_2; local_30 = local_30 + -1, local_28 < local_30; local_28 = local_28 + 1)
    {
      if (*local_28 < *local_30) {
        cVar1 = *local_30;
        *local_30 = *local_28;
        *local_28 = cVar1;
        bVar2 = true;
      }
    }
    local_28 = param_2;
    for (local_30 = param_2 + 1; local_30 < param_2 + sVar3; local_30 = local_30 + 1) {
      if (*local_28 < *local_30) {
        cVar1 = *local_30;
        *local_30 = *local_28;
        *local_28 = cVar1;
        bVar2 = true;
      }
      local_28 = local_28 + 1;
    }
  } while (bVar2);
  return param_2;
}



int _Str_Hash(char *param_1,int param_2)

{
  int iVar1;
  uint local_20;
  char *local_18;
  
  local_20 = 0x1ff316f;
  for (local_18 = param_1; *local_18 != '\0'; local_18 = local_18 + 1) {
    local_20 = ((int)local_20 >> 4 ^ 0x5c5cf5cU ^
               *(short *)(&DAT_100008000 + ((ulong)(long)*local_18 % 0x60) * 2) * 0x20 +
               local_20 * 2) & 0x3fffffff;
  }
  iVar1 = 0;
  if (param_2 != 0) {
    iVar1 = (int)local_20 / param_2;
  }
  return local_20 - iVar1 * param_2;
}



int _buildAnagrams(FILE *param_1)

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  undefined8 *puVar4;
  int local_9c;
  undefined8 *local_90;
  undefined8 *local_88;
  char *local_78;
  undefined auStack_68 [40];
  char local_40 [40];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  local_9c = 2;
  while (pcVar3 = _fgets(local_40,0x28,param_1), pcVar3 != (char *)0x0) {
    local_78 = local_40;
    while( true ) {
      bVar1 = false;
      if (*local_78 != '\0') {
        bVar1 = *local_78 != '\n';
      }
      if (!bVar1) break;
      local_78 = local_78 + 1;
    }
    *local_78 = '\0';
    pcVar3 = (char *)_sortedWord(local_40,auStack_68);
    iVar2 = _Str_Hash(pcVar3,0x2000);
    local_88 = *(undefined8 **)(&_hashTable + (long)iVar2 * 8);
    local_90 = (undefined8 *)(&_hashTable + (long)iVar2 * 8);
    while( true ) {
      bVar1 = false;
      if (local_88 != (undefined8 *)0x0) {
        iVar2 = _strcmp((char *)*local_88,pcVar3);
        bVar1 = iVar2 != 0;
      }
      if (!bVar1) break;
      local_90 = local_88 + 1;
      local_88 = (undefined8 *)local_88[1];
    }
    if (local_88 == (undefined8 *)0x0) {
      local_88 = (undefined8 *)_malloc(0x28);
      local_88[1] = 0;
      pcVar3 = _strdup(pcVar3);
      *local_88 = pcVar3;
      *(undefined2 *)(local_88 + 4) = 0;
      local_88[2] = 0;
      local_88[3] = 0;
      *local_90 = local_88;
    }
    puVar4 = (undefined8 *)_malloc(0x10);
    pcVar3 = _strdup(local_40);
    *puVar4 = pcVar3;
    puVar4[1] = local_88[2];
    local_88[2] = puVar4;
    *(short *)(local_88 + 4) = *(short *)(local_88 + 4) + 1;
    if (local_9c < *(short *)(local_88 + 4)) {
      local_9c = (int)*(short *)(local_88 + 4);
      _mostPerms = local_88;
      local_88[3] = 0;
    }
    else if (local_9c == *(short *)(local_88 + 4)) {
      local_88[3] = _mostPerms;
      _mostPerms = local_88;
    }
  }
  iVar2 = _printf("%d words in dictionary max ana=%d\n");
  if (*(long *)PTR____stack_chk_guard_100004008 == local_18) {
    return local_9c;
  }
                    // WARNING: Subroutine does not return
  ___stack_chk_fail(iVar2);
}



undefined8 entry(void)

{
  FILE *pFVar1;
  long local_28;
  long local_20;
  
  pFVar1 = _fopen("unixdict.txt","r");
  _buildAnagrams(pFVar1);
  _fclose(pFVar1);
  pFVar1 = _fopen("anaout.txt","w");
  for (local_20 = _mostPerms; local_20 != 0; local_20 = *(long *)(local_20 + 0x18)) {
    _fprintf(pFVar1,"%d:");
    for (local_28 = *(long *)(local_20 + 0x10); local_28 != 0; local_28 = *(long *)(local_28 + 8)) {
      _fprintf(pFVar1,"%s, ");
    }
    _fprintf(pFVar1,"\n");
  }
  _fclose(pFVar1);
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003ed8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



void ___strcpy_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003ee4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____strcpy_chk_100004010)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fclose(FILE *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ef0. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fclose_100004018)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * _fgets(char *param_1,int param_2,FILE *param_3)

{
  char *pcVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003efc. Too many branches
                    // WARNING: Treating indirect jump as call
  pcVar1 = (char *)(*(code *)PTR__fgets_100004020)(param_1,param_2);
  return pcVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

FILE * _fopen(char *param_1,char *param_2)

{
  FILE *pFVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f08. Too many branches
                    // WARNING: Treating indirect jump as call
  pFVar1 = (FILE *)(*(code *)PTR__fopen_100004028)();
  return pFVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fprintf(FILE *param_1,char *param_2,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f14. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fprintf_100004030)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f20. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004038)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f2c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004040)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _strcmp(char *param_1,char *param_2)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f38. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__strcmp_100004048)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * _strdup(char *param_1)

{
  char *pcVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f44. Too many branches
                    // WARNING: Treating indirect jump as call
  pcVar1 = (char *)(*(code *)PTR__strdup_100004050)();
  return pcVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t _strlen(char *param_1)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f50. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__strlen_100004058)();
  return sVar1;
}


