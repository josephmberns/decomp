#include "cusip.h"



int _cusipCheck(long param_1)

{
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_c = 0;
  for (local_10 = 0; local_10 < 8; local_10 = local_10 + 1) {
    if ((*(char *)(param_1 + local_10) < '0') || ('9' < *(char *)(param_1 + local_10))) {
      if ((*(char *)(param_1 + local_10) < 'A') || ('Z' < *(char *)(param_1 + local_10))) {
        if (*(char *)(param_1 + local_10) == '*') {
          local_14 = 0x24;
        }
        else if (*(char *)(param_1 + local_10) == '@') {
          local_14 = 0x25;
        }
        else if (*(char *)(param_1 + local_10) == '#') {
          local_14 = 0x26;
        }
      }
      else {
        local_14 = *(char *)(param_1 + local_10) + -0x37;
      }
    }
    else {
      local_14 = *(char *)(param_1 + local_10) + -0x30;
    }
    if (local_10 % 2 != 0) {
      local_14 = local_14 << 1;
    }
    local_c = local_c + local_14 / 10 + local_14 % 10;
  }
  return (10 - local_c % 10) % 10;
}



undefined8 entry(int param_1,long param_2)

{
  int iVar1;
  FILE *pFVar2;
  int local_40;
  int local_3c;
  undefined auStack_22 [10];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  if (param_1 == 1) {
    iVar1 = _printf("Usage : %s <full path of CUSIP Data file>");
  }
  else {
    pFVar2 = _fopen(*(char **)(param_2 + 8),"r");
    _fscanf(pFVar2,"%d");
    _printf("CUSIP       Verdict\n");
    _printf("-------------------");
    for (local_3c = 0; local_3c < local_40; local_3c = local_3c + 1) {
      _fscanf(pFVar2,"%s");
      _cusipCheck(auStack_22);
      _printf("\n%s : %s");
    }
    iVar1 = _fclose(pFVar2);
  }
  if (*(long *)PTR____stack_chk_guard_100004008 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(iVar1);
  }
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003ef8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fclose(FILE *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f04. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fclose_100004010)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

FILE * _fopen(char *param_1,char *param_2)

{
  FILE *pFVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f10. Too many branches
                    // WARNING: Treating indirect jump as call
  pFVar1 = (FILE *)(*(code *)PTR__fopen_100004018)();
  return pFVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fscanf(FILE *param_1,char *param_2,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f1c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fscanf_100004020)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f28. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004028)((int)param_1);
  return iVar1;
}


