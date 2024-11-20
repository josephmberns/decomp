#include "copy-a-string-1.h"



undefined8 entry(void)

{
  char *pcVar1;
  char local_e0 [8];
  size_t local_d8;
  undefined4 local_cc;
  undefined auStack_c8 [80];
  undefined auStack_78 [80];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100004010;
  local_cc = 0;
  builtin_strncpy(local_e0,"Hello",6);
  ___strcpy_chk(auStack_78,local_e0,0x50);
  local_d8 = _strlen(local_e0);
  if (0x4f < local_d8) {
    _fputs("The buffer is too small!\n",*(FILE **)PTR____stderrp_100004018);
                    // WARNING: Subroutine does not return
    _exit(1);
  }
  ___memcpy_chk(auStack_c8,local_e0,local_d8 + 1,0x50);
  pcVar1 = _strdup(local_e0);
  if (pcVar1 == (char *)0x0) {
    _perror("strdup");
                    // WARNING: Subroutine does not return
    _exit(1);
  }
  builtin_strncpy(local_e0,"----",4);
  local_e0[4] = 0x2d;
  _printf(" src: %s\n");
  _printf("dst1: %s\n");
  _printf("dst2: %s\n");
  _printf("dst3: %s\n");
  _printf(" ref: %s\n");
  _free(pcVar1);
  if (*(long *)PTR____stack_chk_guard_100004010 != local_28) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail();
  }
  return 0;
}



void ___memcpy_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003edc. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____memcpy_chk_100004000)();
  return;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003ee8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004008)();
  return;
}



void ___strcpy_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003ef4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____strcpy_chk_100004020)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _exit(int param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f00. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__exit_100004028)(param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fputs(char *param_1,FILE *param_2)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f0c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fputs_100004030)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f18. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004038)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _perror(char *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f24. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__perror_100004040)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f30. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004048)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * _strdup(char *param_1)

{
  char *pcVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f3c. Too many branches
                    // WARNING: Treating indirect jump as call
  pcVar1 = (char *)(*(code *)PTR__strdup_100004050)();
  return pcVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t _strlen(char *param_1)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f48. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__strlen_100004058)();
  return sVar1;
}


