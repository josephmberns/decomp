#include "read-entire-file-2.h"



undefined4 entry(void)

{
  int iVar1;
  stat sStack_b0;
  void *local_20;
  undefined4 local_14;
  
  local_14 = 0;
  iVar1 = _open("readentirefile_mm.c",0);
  if (iVar1 < 0) {
    local_14 = 1;
  }
  else {
    _fstat(iVar1,&sStack_b0);
    local_20 = (void *)_mmap(0,sStack_b0.st_size,1,2,iVar1,0);
    if (local_20 != (void *)0xffffffffffffffff) {
      _fwrite(local_20,sStack_b0.st_size,1,*(FILE **)PTR____stdoutp_100004000);
      _munmap(local_20,sStack_b0.st_size);
    }
    _close(iVar1);
    local_14 = 0;
  }
  return local_14;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _close(int param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f54. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__close_100004008)(param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fstat(int param_1,stat *param_2)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f60. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fstat_100004010)(param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t _fwrite(void *param_1,size_t param_2,size_t param_3,FILE *param_4)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f6c. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__fwrite_100004018)();
  return sVar1;
}



void _mmap(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f78. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__mmap_100004020)();
  return;
}



void _munmap(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f84. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__munmap_100004028)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _open(char *param_1,int param_2,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f90. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__open_100004030)((int)param_1,param_2);
  return iVar1;
}


