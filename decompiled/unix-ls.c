#include "unix-ls.h"



int _cmpstr(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  
  iVar1 = _strcmp((char *)*param_1,(char *)*param_2);
  return iVar1;
}



undefined4 entry(void)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  int local_454;
  int local_450;
  int local_44c;
  void *local_448;
  undefined4 local_42c;
  char acStack_428 [1024];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100004008;
  local_44c = 0x80;
  local_450 = 0;
  local_448 = _malloc(0x400);
  if (local_448 == (void *)0x0) {
    _perror("malloc error:");
    local_42c = 1;
  }
  else {
    pcVar1 = _getcwd(acStack_428,0x400);
    if (pcVar1 == (char *)0x0) {
      _perror("getcwd error:");
      local_42c = 1;
    }
    else {
      lVar2 = _opendir(acStack_428);
      if (lVar2 == 0) {
        _perror("opendir error:");
        local_42c = 1;
      }
      else {
        while (lVar3 = _readdir(lVar2), lVar3 != 0) {
          if (local_44c <= local_450) {
            local_44c = local_44c << 1;
            local_448 = _realloc(local_448,(long)local_44c << 3);
            if (local_448 == (void *)0x0) {
              _perror("realloc error:");
              local_42c = 1;
              goto LAB_100003e84;
            }
          }
          pcVar1 = _strdup((char *)(lVar3 + 0x15));
          lVar3 = (long)local_450;
          local_450 = local_450 + 1;
          *(char **)((long)local_448 + lVar3 * 8) = pcVar1;
        }
        _qsort(local_448,(long)local_450,8,(int *)_cmpstr);
        for (local_454 = 0; local_454 < local_450; local_454 = local_454 + 1) {
          if (**(char **)((long)local_448 + (long)local_454 * 8) != '.') {
            _printf("%s\n");
          }
        }
        for (local_454 = 0; local_454 < local_450; local_454 = local_454 + 1) {
          _free(*(void **)((long)local_448 + (long)local_454 * 8));
        }
        _free(local_448);
        _closedir(lVar2);
        local_42c = 0;
      }
    }
  }
LAB_100003e84:
  if (*(long *)PTR____stack_chk_guard_100004008 == local_28) {
    return local_42c;
  }
                    // WARNING: Subroutine does not return
  ___stack_chk_fail();
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003ecc. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



void _closedir(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003ed8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__closedir_100004010)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003ee4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004018)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * _getcwd(char *param_1,size_t param_2)

{
  char *pcVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ef0. Too many branches
                    // WARNING: Treating indirect jump as call
  pcVar1 = (char *)(*(code *)PTR__getcwd_100004020)();
  return pcVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003efc. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004028)();
  return pvVar1;
}



void _opendir(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f08. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__opendir_100004030)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _perror(char *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f14. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__perror_100004038)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f20. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004040)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _qsort(void *param_1,size_t param_2,size_t param_3,int *param_4)

{
                    // WARNING: Could not recover jumptable at 0x000100003f2c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__qsort_100004048)();
  return;
}



void _readdir(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f38. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__readdir_100004050)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _realloc(void *param_1,size_t param_2)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f44. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__realloc_100004058)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _strcmp(char *param_1,char *param_2)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f50. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__strcmp_100004060)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * _strdup(char *param_1)

{
  char *pcVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f5c. Too many branches
                    // WARNING: Treating indirect jump as call
  pcVar1 = (char *)(*(code *)PTR__strdup_100004068)();
  return pcVar1;
}


