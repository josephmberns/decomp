#include "aliquot-sequence-classifications-1.h"



long _bruteForceProperDivisorSum(ulong param_1)

{
  ulong uVar1;
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = 0;
  for (local_10 = 1; local_10 < (param_1 + 1) / 2; local_10 = local_10 + 1) {
    uVar1 = 0;
    if (local_10 != 0) {
      uVar1 = param_1 / local_10;
    }
    if ((param_1 == uVar1 * local_10) && (param_1 != local_10)) {
      local_18 = local_18 + local_10;
    }
  }
  return local_18;
}



int _printSeries(undefined8 param_1,int param_2)

{
  int iVar1;
  int local_2c;
  
  _printf("\nInteger : %llu, Type : %s, Series : ");
  for (local_2c = 0; local_2c < param_2 + -1; local_2c = local_2c + 1) {
    _printf("%llu, ");
  }
  iVar1 = _printf("%llu");
  return iVar1;
}



void _aliquotClassifier(long param_1)

{
  bool bVar1;
  long lVar2;
  char *local_d0;
  char *local_c8;
  char *local_c0;
  int local_a8;
  int local_a4;
  long local_98 [16];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  local_98[0] = param_1;
  local_a4 = 1;
  do {
    if (0xf < local_a4) {
      _printSeries(local_98,local_a4 + 1,"Non-Terminating");
LAB_100003d30:
      if (*(long *)PTR____stack_chk_guard_100004008 == local_18) {
        return;
      }
                    // WARNING: Subroutine does not return
      ___stack_chk_fail();
    }
    lVar2 = _bruteForceProperDivisorSum(local_98[local_a4 + -1]);
    local_98[local_a4] = lVar2;
    if (((local_98[local_a4] == 0) || (local_98[local_a4] == param_1)) ||
       ((local_98[local_a4] == local_98[local_a4 + -1] && (local_98[local_a4] != param_1)))) {
      if (local_98[local_a4] == 0) {
        local_c0 = "Terminating";
      }
      else {
        if ((local_98[local_a4] == param_1) && (local_a4 == 1)) {
          local_c8 = "Perfect";
        }
        else {
          if ((local_98[local_a4] == param_1) && (local_a4 == 2)) {
            local_d0 = "Amicable";
          }
          else {
            bVar1 = false;
            if (local_98[local_a4] == local_98[local_a4 + -1]) {
              bVar1 = local_98[local_a4] != param_1;
            }
            local_d0 = "Aspiring";
            if (!bVar1) {
              local_d0 = "Sociable";
            }
          }
          local_c8 = local_d0;
        }
        local_c0 = local_c8;
      }
      _printSeries(local_98,local_a4 + 1,local_c0);
      goto LAB_100003d30;
    }
    for (local_a8 = 1; local_a8 < local_a4; local_a8 = local_a8 + 1) {
      if (local_98[local_a8] == local_98[local_a4]) {
        _printSeries(local_98,local_a4 + 1,"Cyclic");
        goto LAB_100003d30;
      }
    }
    local_a4 = local_a4 + 1;
  } while( true );
}



void _processFile(char *param_1)

{
  int iVar1;
  FILE *pFVar2;
  char *pcVar3;
  char acStack_2d [21];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  pFVar2 = _fopen(param_1,"r");
  while (pcVar3 = _fgets(acStack_2d,0x15,pFVar2), pcVar3 != (char *)0x0) {
    _strtoull(acStack_2d,(char **)0x0,10);
    _aliquotClassifier();
  }
  iVar1 = _fclose(pFVar2);
  if (*(long *)PTR____stack_chk_guard_100004008 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(iVar1);
  }
  return;
}



undefined8 entry(int param_1,long param_2)

{
  char *pcVar1;
  
  if (param_1 == 2) {
    pcVar1 = _strchr(*(char **)(param_2 + 8),0x2e);
    if (pcVar1 == (char *)0x0) {
      _strtoull(*(char **)(param_2 + 8),(char **)0x0,10);
      _aliquotClassifier();
    }
    else {
      _processFile(*(undefined8 *)(param_2 + 8));
    }
  }
  else {
    _printf("Usage : %s <positive integer>");
  }
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003ebc. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fclose(FILE *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ec8. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fclose_100004010)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * _fgets(char *param_1,int param_2,FILE *param_3)

{
  char *pcVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ed4. Too many branches
                    // WARNING: Treating indirect jump as call
  pcVar1 = (char *)(*(code *)PTR__fgets_100004018)(param_1,param_2);
  return pcVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

FILE * _fopen(char *param_1,char *param_2)

{
  FILE *pFVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ee0. Too many branches
                    // WARNING: Treating indirect jump as call
  pFVar1 = (FILE *)(*(code *)PTR__fopen_100004020)();
  return pFVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003eec. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004028)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * _strchr(char *param_1,int param_2)

{
  char *pcVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ef8. Too many branches
                    // WARNING: Treating indirect jump as call
  pcVar1 = (char *)(*(code *)PTR__strchr_100004030)(param_1,param_2);
  return pcVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

ulonglong _strtoull(char *param_1,char **param_2,int param_3)

{
  ulonglong uVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f04. Too many branches
                    // WARNING: Treating indirect jump as call
  uVar1 = (*(code *)PTR__strtoull_100004038)(param_1,param_2,param_3);
  return uVar1;
}


