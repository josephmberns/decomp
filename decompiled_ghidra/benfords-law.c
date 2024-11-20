#include "benfords-law.h"



undefined8 _benford_distribution(void)

{
  undefined4 uVar1;
  undefined4 local_14;
  
  for (local_14 = 1; local_14 < 10; local_14 = local_14 + 1) {
    uVar1 = _log10f((float)(1.0 / (double)(long)local_14 + 1.0));
    *(undefined4 *)((long)(local_14 + -1) * 4 + 0x100008000) = uVar1;
  }
  return 0x100008000;
}



undefined8 _get_actual_distribution(char *param_1)

{
  int iVar1;
  FILE *pFVar2;
  int local_5c;
  int local_58;
  char local_51;
  int aiStack_3c [9];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  pFVar2 = _fopen(param_1,"r");
  if (pFVar2 == (FILE *)0x0) {
    _perror("Can\'t open file");
                    // WARNING: Subroutine does not return
    _exit(1);
  }
  _memset(aiStack_3c,0,0x24);
  local_58 = 0;
  while( true ) {
    iVar1 = _getc(pFVar2);
    local_51 = (char)iVar1;
    if (local_51 == -1) break;
    while (local_51 < '1' || '9' < local_51) {
      iVar1 = _getc(pFVar2);
      local_51 = (char)iVar1;
    }
    aiStack_3c[local_51 + -0x31] = aiStack_3c[local_51 + -0x31] + 1;
    local_58 = local_58 + 1;
    do {
      iVar1 = _getc(pFVar2);
    } while ((char)iVar1 != '\n' && (char)iVar1 != -1);
  }
  iVar1 = _fclose(pFVar2);
  for (local_5c = 0; local_5c < 9; local_5c = local_5c + 1) {
    *(float *)((long)local_5c * 4 + 0x100008024) = (float)aiStack_3c[local_5c] / (float)local_58;
  }
  if (*(long *)PTR____stack_chk_guard_100004008 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(iVar1);
  }
  return 0x100008024;
}



undefined4 entry(int param_1,long param_2)

{
  int local_34;
  undefined4 local_14;
  
  if (param_1 == 2) {
    _get_actual_distribution(*(undefined8 *)(param_2 + 8));
    _benford_distribution();
    _puts("digit\tactual\texpected");
    for (local_34 = 0; local_34 < 9; local_34 = local_34 + 1) {
      _printf("%d\t%.3f\t%.3f\n");
    }
    local_14 = 0;
  }
  else {
    _printf("Usage: benford <file>\n");
    local_14 = 1;
  }
  return local_14;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003ee8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _exit(int param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003ef4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__exit_100004010)(param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fclose(FILE *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f00. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fclose_100004018)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

FILE * _fopen(char *param_1,char *param_2)

{
  FILE *pFVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f0c. Too many branches
                    // WARNING: Treating indirect jump as call
  pFVar1 = (FILE *)(*(code *)PTR__fopen_100004020)();
  return pFVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _getc(FILE *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f18. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__getc_100004028)((int)param_1);
  return iVar1;
}



void _log10f(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f24. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__log10f_100004030)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _memset(void *param_1,int param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f30. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__memset_100004038)(param_1,param_2);
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _perror(char *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f3c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__perror_100004040)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f48. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004048)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _puts(char *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f54. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__puts_100004050)((int)param_1);
  return iVar1;
}


