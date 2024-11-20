#include "get-system-command-output.h"



undefined4 entry(ulong param_1,long param_2)

{
  uint uVar1;
  FILE *pFVar2;
  size_t sVar3;
  void *local_160;
  size_t local_158;
  ulong local_150;
  undefined4 local_12c;
  undefined auStack_128 [256];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100004010;
  if ((int)param_1 < 2) {
    local_12c = 1;
  }
  else {
    pFVar2 = _popen(*(char **)(param_2 + 8),"r");
    if (pFVar2 == (FILE *)0x0) {
      local_12c = 1;
      param_1 = 0;
    }
    else {
      local_150 = 0x100;
      local_158 = 0;
      local_160 = _malloc(0x100);
      while( true ) {
        sVar3 = _fread(auStack_128,1,0x100,pFVar2);
        if (sVar3 == 0) break;
        if (local_150 <= local_158 + sVar3) {
          local_150 = local_150 << 1;
          local_160 = _realloc(local_160,local_150);
        }
        ___memmove_chk((long)local_160 + local_158,auStack_128,sVar3,0xffffffffffffffff);
        local_158 = local_158 + sVar3;
      }
      _fwrite(local_160,1,local_158,*(FILE **)PTR____stdoutp_100004018);
      _free(local_160);
      uVar1 = _pclose(pFVar2);
      param_1 = (ulong)uVar1;
      local_12c = 0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_100004010 != local_28) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(param_1);
  }
  return local_12c;
}



void ___memmove_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f40. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____memmove_chk_100004000)();
  return;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f4c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004008)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t _fread(void *param_1,size_t param_2,size_t param_3,FILE *param_4)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f58. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__fread_100004020)();
  return sVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f64. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004028)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t _fwrite(void *param_1,size_t param_2,size_t param_3,FILE *param_4)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f70. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__fwrite_100004030)();
  return sVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f7c. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004038)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _pclose(FILE *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f88. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__pclose_100004040)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

FILE * _popen(char *param_1,char *param_2)

{
  FILE *pFVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f94. Too many branches
                    // WARNING: Treating indirect jump as call
  pFVar1 = (FILE *)(*(code *)PTR__popen_100004048)();
  return pFVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _realloc(void *param_1,size_t param_2)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003fa0. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__realloc_100004050)();
  return pvVar1;
}


