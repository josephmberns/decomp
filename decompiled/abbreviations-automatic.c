#include "abbreviations-automatic.h"



void _process(undefined8 param_1,long param_2)

{
  bool bVar1;
  int iVar2;
  int local_210;
  int local_20c;
  int local_208;
  int local_204;
  int local_200;
  int local_1fc;
  char acStack_1e8 [448];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100004008;
  local_1fc = 0;
  local_200 = 0;
  local_204 = 0;
  do {
    if (*(char *)(param_2 + local_1fc) == '\0') {
LAB_100003b70:
      if (*(char *)(param_2 + local_1fc) == '\0') {
        acStack_1e8[(long)local_204 + (long)local_200 * 0x40] = '\0';
        local_200 = local_200 + 1;
      }
      if (local_200 < 7) {
        iVar2 = _printf("There aren\'t 7 days in line %d\n");
      }
      else {
        local_208 = 1;
LAB_100003bf8:
        if (local_208 < 0x40) {
          for (local_20c = 0; local_210 = local_20c, local_20c < 7; local_20c = local_20c + 1) {
            while (local_210 = local_210 + 1, local_210 < 7) {
              bVar1 = false;
              for (local_1fc = 0; local_1fc < local_208; local_1fc = local_1fc + 1) {
                if (acStack_1e8[(long)local_1fc + (long)local_20c * 0x40] !=
                    acStack_1e8[(long)local_1fc + (long)local_210 * 0x40]) {
                  bVar1 = true;
                  break;
                }
              }
              if (!bVar1) {
                local_208 = local_208 + 1;
                goto LAB_100003bf8;
              }
            }
          }
          _printf("%2d ");
          for (local_1fc = 0; local_1fc < 7; local_1fc = local_1fc + 1) {
            _printf(" %s");
          }
          iVar2 = _printf("\n");
        }
        else {
          iVar2 = _printf("Failed to find uniqueness within the bounds.");
        }
      }
LAB_100003dac:
      if (*(long *)PTR____stack_chk_guard_100004008 == local_28) {
        return;
      }
                    // WARNING: Subroutine does not return
      ___stack_chk_fail(iVar2);
    }
    if (*(char *)(param_2 + local_1fc) == ' ') {
      acStack_1e8[(long)local_204 + (long)local_200 * 0x40] = '\0';
      local_200 = local_200 + 1;
      local_204 = 0;
    }
    else {
      if ((*(char *)(param_2 + local_1fc) == '\n') || (*(char *)(param_2 + local_1fc) == '\r')) {
        acStack_1e8[(long)local_204 + (long)local_200 * 0x40] = '\0';
        local_200 = local_200 + 1;
        goto LAB_100003b70;
      }
      acStack_1e8[(long)local_204 + (long)local_200 * 0x40] = *(char *)(param_2 + local_1fc);
      local_204 = local_204 + 1;
    }
    if (6 < local_200) {
      iVar2 = _printf("There aren\'t 7 days in line %d\n");
      goto LAB_100003dac;
    }
    local_1fc = local_1fc + 1;
  } while( true );
}



undefined8 entry(void)

{
  int iVar1;
  FILE *pFVar2;
  size_t sVar3;
  int local_430;
  char acStack_428 [1024];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100004008;
  local_430 = 1;
  pFVar2 = _fopen("days_of_week.txt","r");
  while( true ) {
    _bzero(acStack_428,0x400);
    _fgets(acStack_428,0x400,pFVar2);
    sVar3 = _strlen(acStack_428);
    if (((int)sVar3 == 0) || (acStack_428[(int)sVar3 + -1] == '\0')) break;
    _process(local_430,acStack_428);
    local_430 = local_430 + 1;
  }
  iVar1 = _fclose(pFVar2);
  if (*(long *)PTR____stack_chk_guard_100004008 == local_28) {
    return 0;
  }
                    // WARNING: Subroutine does not return
  ___stack_chk_fail(iVar1);
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003ef0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _bzero(void *param_1,size_t param_2)

{
                    // WARNING: Could not recover jumptable at 0x000100003efc. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__bzero_100004010)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fclose(FILE *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f08. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fclose_100004018)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * _fgets(char *param_1,int param_2,FILE *param_3)

{
  char *pcVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f14. Too many branches
                    // WARNING: Treating indirect jump as call
  pcVar1 = (char *)(*(code *)PTR__fgets_100004020)(param_1,param_2);
  return pcVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

FILE * _fopen(char *param_1,char *param_2)

{
  FILE *pFVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f20. Too many branches
                    // WARNING: Treating indirect jump as call
  pFVar1 = (FILE *)(*(code *)PTR__fopen_100004028)();
  return pFVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f2c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004030)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t _strlen(char *param_1)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f38. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__strlen_100004038)();
  return sVar1;
}


