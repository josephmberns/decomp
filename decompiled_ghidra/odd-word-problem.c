#include "odd-word-problem.h"



undefined8 entry(void)

{
  int local_24;
  
  local_24 = 1;
  do {
    local_24 = FUN_100003e74(local_24 == 0);
    if (local_24 == -1) {
      return 0;
    }
    if (local_24 != 0) {
      _putc(local_24,*(FILE **)PTR____stdoutp_100004008);
    }
  } while (local_24 != 0x2e);
  return 0;
}



int FUN_100003e74(int param_1)

{
  int iVar1;
  int local_14;
  
  local_14 = _getc(*(FILE **)PTR____stdinp_100004000);
  if (param_1 == 0) {
    _putc(local_14,*(FILE **)PTR____stdoutp_100004008);
    if ((local_14 == -1) || (local_14 == 0x2e)) {
      local_14 = -1;
    }
    else {
      iVar1 = _ispunct(local_14);
      if (iVar1 == 0) {
        FUN_100003e74(0);
        local_14 = 0;
      }
      else {
        local_14 = 0;
      }
    }
  }
  else {
    iVar1 = _ispunct(local_14);
    if (iVar1 == 0) {
      iVar1 = FUN_100003e74(param_1);
      _putc(local_14,*(FILE **)PTR____stdoutp_100004008);
      local_14 = iVar1;
    }
  }
  return local_14;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _getc(FILE *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f8c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__getc_100004010)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _ispunct(int _c)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f98. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__ispunct_100004018)(_c);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _putc(int param_1,FILE *param_2)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003fa4. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__putc_100004020)(param_1);
  return iVar1;
}


