#include "walk-a-directory-non-recursively.h"



undefined4 _walker(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined auStack_50 [32];
  long local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_14;
  
  local_28 = param_2;
  local_20 = param_1;
  iVar1 = _regcomp(auStack_50,param_2,5);
  if (iVar1 == 0) {
    lVar2 = _opendir(local_20);
    if (lVar2 == 0) {
      local_14 = 2;
    }
    else {
      while (local_30 = _readdir(lVar2), local_30 != 0) {
        iVar1 = _regexec(auStack_50,local_30 + 0x15,0,0,0);
        if (iVar1 == 0) {
          _puts((char *)(local_30 + 0x15));
        }
      }
      _closedir(lVar2);
      _regfree(auStack_50);
      local_14 = 0;
    }
  }
  else {
    local_14 = 1;
  }
  return local_14;
}



undefined4 entry(void)

{
  _walker(".",".\\.c$");
  return 0;
}



void _closedir(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f54. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__closedir_100004000)();
  return;
}



void _opendir(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f60. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__opendir_100004008)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _puts(char *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f6c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__puts_100004010)((int)param_1);
  return iVar1;
}



void _readdir(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f78. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__readdir_100004018)();
  return;
}



void _regcomp(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f84. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__regcomp_100004020)();
  return;
}



void _regexec(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f90. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__regexec_100004028)();
  return;
}



void _regfree(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f9c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__regfree_100004030)();
  return;
}


