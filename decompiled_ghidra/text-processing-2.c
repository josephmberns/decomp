#include "text-processing-2.h"



int _cmp_rec(long *param_1,long *param_2)

{
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  if (*param_1 == *param_2) {
    local_34 = 0;
  }
  else {
    if (*param_1 == 0) {
      local_38 = 1;
    }
    else {
      if (*param_2 == 0) {
        local_3c = -1;
      }
      else {
        local_3c = _strncmp((char *)*param_1,(char *)*param_2,10);
      }
      local_38 = local_3c;
    }
    local_34 = local_38;
  }
  return local_34;
}



undefined4 _read_file(char *param_1)

{
  bool bVar1;
  int iVar2;
  size_t sVar3;
  long lVar4;
  double dVar5;
  char *local_100;
  char *local_f8;
  undefined8 *local_f0;
  int local_e8;
  int local_e4;
  int local_e0;
  int local_dc;
  int local_d8;
  int local_d4;
  void *local_d0;
  stat sStack_c8;
  int local_34;
  char *local_30;
  
  local_30 = param_1;
  local_34 = _open(param_1,0);
  if (local_34 != -1) {
    _fstat(local_34,&sStack_c8);
    local_d0 = _malloc(sStack_c8.st_size);
    _read(local_34,local_d0,sStack_c8.st_size);
    _close(local_34);
    local_dc = 0;
    for (local_d4 = 0; local_d4 < sStack_c8.st_size; local_d4 = local_d4 + 1) {
      if (*(char *)((long)local_d0 + (long)local_d4) == '\n') {
        *(undefined *)((long)local_d0 + (long)local_d4) = 0;
        local_dc = local_dc + 1;
      }
    }
    local_f0 = (undefined8 *)_calloc(0x10,(long)local_dc);
    *local_f0 = local_d0;
    *(undefined4 *)(local_f0 + 1) = 1;
    for (local_d4 = 0; local_d4 < local_dc; local_d4 = local_d4 + 1) {
      if (local_d4 + 1 < local_dc) {
        lVar4 = local_f0[(long)local_d4 * 2];
        sVar3 = _strlen((char *)local_f0[(long)local_d4 * 2]);
        local_f0[(long)(local_d4 + 1) * 2] = lVar4 + sVar3 + 1;
        *(int *)(local_f0 + (long)(local_d4 + 1) * 2 + 1) = local_d4 + 2;
      }
      iVar2 = _sscanf((char *)local_f0[(long)local_d4 * 2],"%4d-%2d-%2d");
      if (iVar2 == 3) {
        local_f8 = (char *)(local_f0[(long)local_d4 * 2] + 10);
        local_e0 = 0;
        local_d8 = 0;
        while ((local_d8 < 0x19 &&
               ((dVar5 = _strtod(local_f8,&local_100), dVar5 != 0.0 || (local_100 != local_f8))))) {
          local_e0 = local_e0 + 1;
          local_f8 = local_100;
          lVar4 = _strtol(local_100,&local_100,10);
          local_e4 = (int)lVar4;
          if ((local_e4 == 0) && (local_100 == local_f8)) break;
          local_e0 = local_e0 + 1;
          local_f8 = local_100;
          if (local_e4 < 1) {
            *(undefined4 *)((long)local_f0 + (long)local_d4 * 0x10 + 0xc) = 1;
          }
          local_d8 = local_d8 + 1;
        }
        if (local_e0 != 0x30) {
          _printf("bad format at line %d: %s\n");
          local_f0[(long)local_d4 * 2] = 0;
        }
      }
      else {
        _printf("bad line %d: %s\n");
        local_f0[(long)local_d4 * 2] = 0;
      }
    }
    _qsort(local_f0,(long)local_dc,0x10,(int *)_cmp_rec);
    local_d4 = 1;
    local_e8 = *(int *)((long)local_f0 + 0xc);
    local_d8 = 0;
    while( true ) {
      bVar1 = false;
      if (local_d4 < local_dc) {
        bVar1 = local_f0[(long)local_d4 * 2] != 0;
      }
      if (!bVar1) break;
      if (*(int *)((long)local_f0 + (long)local_d4 * 0x10 + 0xc) != 0) {
        local_e8 = local_e8 + 1;
      }
      iVar2 = _strncmp((char *)local_f0[(long)local_d4 * 2],(char *)local_f0[(long)local_d8 * 2],10)
      ;
      if (iVar2 == 0) {
        _printf("dup line %d: %.10s\n");
      }
      else {
        local_d8 = local_d4;
      }
      local_d4 = local_d4 + 1;
    }
    _free(local_f0);
    _free(local_d0);
    _printf("\n%d out %d lines good\n");
  }
  return 0;
}



undefined4 entry(void)

{
  _read_file("readings.txt");
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _calloc(size_t param_1,size_t param_2)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e90. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__calloc_100004000)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _close(int param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e9c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__close_100004008)(param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003ea8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004010)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fstat(int param_1,stat *param_2)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003eb4. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fstat_100004018)(param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ec0. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004020)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _open(char *param_1,int param_2,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ecc. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__open_100004028)((int)param_1,param_2);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ed8. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004030)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _qsort(void *param_1,size_t param_2,size_t param_3,int *param_4)

{
                    // WARNING: Could not recover jumptable at 0x000100003ee4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__qsort_100004038)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

ssize_t _read(int param_1,void *param_2,size_t param_3)

{
  ssize_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ef0. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__read_100004040)(param_1);
  return sVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _sscanf(char *param_1,char *param_2,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003efc. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__sscanf_100004048)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t _strlen(char *param_1)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f08. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__strlen_100004050)();
  return sVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _strncmp(char *param_1,char *param_2,size_t param_3)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f14. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__strncmp_100004058)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

double _strtod(char *param_1,char **param_2)

{
  double dVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f20. Too many branches
                    // WARNING: Treating indirect jump as call
  dVar1 = (double)(*(code *)PTR__strtod_100004060)();
  return dVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

long _strtol(char *param_1,char **param_2,int param_3)

{
  long lVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f2c. Too many branches
                    // WARNING: Treating indirect jump as call
  lVar1 = (*(code *)PTR__strtol_100004068)(param_1,param_2,param_3);
  return lVar1;
}


