#include "median-filter.h"



bool _write_ppm(int *param_1,char *param_2)

{
  FILE *pFVar1;
  
  pFVar1 = _fopen(param_2,"w");
  if (pFVar1 != (FILE *)0x0) {
    _fprintf(pFVar1,"P6\n%d %d\n255\n");
    _fwrite((void *)**(undefined8 **)(param_1 + 2),1,(long)*param_1 * 3 * (long)param_1[1],pFVar1);
    _fclose(pFVar1);
  }
  return pFVar1 != (FILE *)0x0;
}



int * _img_new(int param_1,int param_2)

{
  int *piVar1;
  int local_1c;
  
  piVar1 = (int *)_malloc((long)param_2 * 8 + 0x10 + (long)param_1 * 3 * (long)param_2);
  *piVar1 = param_1;
  piVar1[1] = param_2;
  *(int **)(piVar1 + 2) = piVar1 + 4;
  **(long **)(piVar1 + 2) = *(long *)(piVar1 + 2) + (long)param_2 * 8;
  for (local_1c = 1; local_1c < param_2; local_1c = local_1c + 1) {
    *(long *)(*(long *)(piVar1 + 2) + (long)local_1c * 8) =
         *(long *)(*(long *)(piVar1 + 2) + (long)(local_1c + -1) * 8) + (long)param_1 * 3;
  }
  return piVar1;
}



int _read_num(FILE *param_1)

{
  int iVar1;
  int local_24;
  
  do {
    iVar1 = _fscanf(param_1,"%d ");
    if (iVar1 != 0) {
      return local_24;
    }
    iVar1 = _fgetc(param_1);
    if (iVar1 != 0x23) {
      return 0;
    }
    do {
      local_24 = _fgetc(param_1);
      if (local_24 == 10) break;
    } while (local_24 != -1);
  } while( true );
}



long _read_ppm(char *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  FILE *pFVar4;
  long local_40;
  long local_18;
  
  pFVar4 = _fopen(param_1,"r");
  local_40 = 0;
  if (pFVar4 == (FILE *)0x0) {
    local_18 = 0;
  }
  else {
    iVar1 = _fgetc(pFVar4);
    if ((iVar1 == 0x50) && (iVar1 = _fgetc(pFVar4), iVar1 == 0x36)) {
      iVar1 = _fgetc(pFVar4);
      iVar1 = _isspace(iVar1);
      if (iVar1 != 0) {
        iVar1 = _read_num(pFVar4);
        iVar2 = _read_num(pFVar4);
        iVar3 = _read_num(pFVar4);
        if (((iVar1 != 0) && (iVar2 != 0)) && (iVar3 != 0)) {
          local_40 = _img_new(iVar1,iVar2);
          _fread((void *)**(undefined8 **)(local_40 + 8),1,(long)iVar1 * 3 * (long)iVar2,pFVar4);
        }
      }
    }
    if (pFVar4 != (FILE *)0x0) {
      _fclose(pFVar4);
    }
    local_18 = local_40;
  }
  return local_18;
}



void _del_pixels(int *param_1,int param_2,int param_3,int param_4,long param_5)

{
  bool bVar1;
  byte *pbVar2;
  int *piVar3;
  int local_24;
  
  if ((-1 < param_3) && (param_3 < *param_1)) {
    local_24 = param_2 - param_4;
    while( true ) {
      bVar1 = false;
      if (local_24 <= param_2 + param_4) {
        bVar1 = local_24 < param_1[1];
      }
      if (!bVar1) break;
      if (-1 < local_24) {
        pbVar2 = (byte *)(*(long *)(*(long *)(param_1 + 2) + (long)local_24 * 8) + (long)param_3 * 3
                         );
        piVar3 = (int *)(param_5 + (ulong)*pbVar2 * 4);
        *piVar3 = *piVar3 + -1;
        piVar3 = (int *)(param_5 + 0x400 + (ulong)pbVar2[1] * 4);
        *piVar3 = *piVar3 + -1;
        piVar3 = (int *)(param_5 + 0x800 + (ulong)pbVar2[2] * 4);
        *piVar3 = *piVar3 + -1;
        *(int *)(param_5 + 0xc00) = *(int *)(param_5 + 0xc00) + -1;
      }
      local_24 = local_24 + 1;
    }
  }
  return;
}



void _add_pixels(int *param_1,int param_2,int param_3,int param_4,long param_5)

{
  bool bVar1;
  byte *pbVar2;
  int *piVar3;
  int local_24;
  
  if ((-1 < param_3) && (param_3 < *param_1)) {
    local_24 = param_2 - param_4;
    while( true ) {
      bVar1 = false;
      if (local_24 <= param_2 + param_4) {
        bVar1 = local_24 < param_1[1];
      }
      if (!bVar1) break;
      if (-1 < local_24) {
        pbVar2 = (byte *)(*(long *)(*(long *)(param_1 + 2) + (long)local_24 * 8) + (long)param_3 * 3
                         );
        piVar3 = (int *)(param_5 + (ulong)*pbVar2 * 4);
        *piVar3 = *piVar3 + 1;
        piVar3 = (int *)(param_5 + 0x400 + (ulong)pbVar2[1] * 4);
        *piVar3 = *piVar3 + 1;
        piVar3 = (int *)(param_5 + 0x800 + (ulong)pbVar2[2] * 4);
        *piVar3 = *piVar3 + 1;
        *(int *)(param_5 + 0xc00) = *(int *)(param_5 + 0xc00) + 1;
      }
      local_24 = local_24 + 1;
    }
  }
  return;
}



void _init_histo(int *param_1,undefined4 param_2,int param_3,undefined8 param_4)

{
  bool bVar1;
  undefined4 local_2c;
  
  ___memset_chk(param_4,0,0xc04,0xffffffffffffffff);
  local_2c = 0;
  while( true ) {
    bVar1 = false;
    if (local_2c < param_3) {
      bVar1 = local_2c < *param_1;
    }
    if (!bVar1) break;
    _add_pixels(param_1,param_2,local_2c,param_3,param_4);
    local_2c = local_2c + 1;
  }
  return;
}



int _median(long param_1,int param_2)

{
  bool bVar1;
  undefined4 local_10;
  undefined4 local_c;
  
  local_c = param_2 / 2;
  local_10 = 0;
  while( true ) {
    bVar1 = false;
    if (local_10 < 0x100) {
      local_c = local_c - *(int *)(param_1 + (long)local_10 * 4);
      bVar1 = 0 < local_c;
    }
    if (!bVar1) break;
    local_10 = local_10 + 1;
  }
  return local_10;
}



void _median_color(undefined *param_1,long param_2)

{
  undefined uVar1;
  
  uVar1 = _median(param_2,*(undefined4 *)(param_2 + 0xc00));
  *param_1 = uVar1;
  uVar1 = _median(param_2 + 0x400,*(undefined4 *)(param_2 + 0xc00));
  param_1[1] = uVar1;
  uVar1 = _median(param_2 + 0x800,*(undefined4 *)(param_2 + 0xc00));
  param_1[2] = uVar1;
  return;
}



// WARNING: Restarted to delay deadcode elimination for space: stack

long _median_filter(int *param_1,int param_2)

{
  undefined auStack_c44 [3076];
  long local_40;
  int local_34;
  int local_30;
  int local_2c;
  int *local_28;
  
  local_2c = param_2;
  local_28 = param_1;
  local_40 = _img_new(*param_1,param_1[1]);
  for (local_30 = 0; local_30 < local_28[1]; local_30 = local_30 + 1) {
    for (local_34 = 0; local_34 < *local_28; local_34 = local_34 + 1) {
      if (local_34 == 0) {
        _init_histo(local_28,local_30,local_2c,auStack_c44);
      }
      else {
        _del_pixels(local_28,local_30,local_34 - local_2c,local_2c);
        _add_pixels(local_28,local_30,local_34 + local_2c,local_2c,auStack_c44);
      }
      _median_color(*(long *)(*(long *)(local_40 + 8) + (long)local_30 * 8) + (long)local_34 * 3,
                    auStack_c44);
    }
  }
  return local_40;
}



undefined4 entry(int param_1,long param_2)

{
  void *pvVar1;
  void *pvVar2;
  int local_24;
  
  if (param_1 < 4) {
    _printf("Usage: %s size ppm_in ppm_out\n");
  }
  else {
    local_24 = _atoi(*(char **)(param_2 + 8));
    _printf("filter size %d\n");
    if (local_24 < 0) {
      local_24 = 1;
    }
    pvVar1 = (void *)_read_ppm(*(undefined8 *)(param_2 + 0x10));
    pvVar2 = (void *)_median_filter(pvVar1,local_24);
    _write_ppm(pvVar2,*(undefined8 *)(param_2 + 0x18));
    _free(pvVar1);
    _free(pvVar2);
  }
  return 0;
}



void ___memset_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003eac. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____memset_chk_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _atoi(char *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003eb8. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__atoi_100004008)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fclose(FILE *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ec4. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fclose_100004010)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fgetc(FILE *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ed0. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fgetc_100004018)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

FILE * _fopen(char *param_1,char *param_2)

{
  FILE *pFVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003edc. Too many branches
                    // WARNING: Treating indirect jump as call
  pFVar1 = (FILE *)(*(code *)PTR__fopen_100004020)();
  return pFVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fprintf(FILE *param_1,char *param_2,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ee8. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fprintf_100004028)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t _fread(void *param_1,size_t param_2,size_t param_3,FILE *param_4)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ef4. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__fread_100004030)();
  return sVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f00. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004038)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fscanf(FILE *param_1,char *param_2,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f0c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fscanf_100004040)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t _fwrite(void *param_1,size_t param_2,size_t param_3,FILE *param_4)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f18. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__fwrite_100004048)();
  return sVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _isspace(int _c)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f24. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__isspace_100004050)(_c);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f30. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004058)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f3c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004060)((int)param_1);
  return iVar1;
}


