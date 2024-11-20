#include "determine-if-only-one-instance-is-running-1.h"



void _fail(char *param_1)

{
  _perror(param_1);
                    // WARNING: Subroutine does not return
  _exit(1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int _ooi_unlink(void)

{
  int iVar1;
  
  iVar1 = _unlink(_DAT_100008000);
  return iVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Restarted to delay deadcode elimination for space: ram

int _only_one_instance(void)

{
  int iVar1;
  char *pcVar2;
  size_t sVar3;
  
  pcVar2 = _getenv("HOME");
  if ((pcVar2 == (char *)0x0) || (*pcVar2 != '/')) {
    _fputs("Bad home directory.\n",*(FILE **)PTR____stderrp_100004008);
                    // WARNING: Subroutine does not return
    _exit(1);
  }
  sVar3 = _strlen(pcVar2);
  _DAT_100008000 = (char *)_malloc(sVar3 + 0x13);
  if (_DAT_100008000 == (char *)0x0) {
    _fail("malloc");
  }
  ___memcpy_chk(_DAT_100008000,pcVar2,sVar3);
  ___memcpy_chk(_DAT_100008000 + sVar3,"/rosetta-code-lock",0x13,0xffffffffffffffff);
  iVar1 = _open(_DAT_100008000,0x202);
  if (iVar1 < 0) {
    _fail(_DAT_100008000);
  }
  iVar1 = _fcntl(iVar1,8);
  if (-1 < iVar1) {
    iVar1 = _atexit(_ooi_unlink);
    return iVar1;
  }
  _fputs("Another instance of this program is running.\n",*(FILE **)PTR____stderrp_100004008);
                    // WARNING: Subroutine does not return
  _exit(1);
}



undefined8 entry(void)

{
  int local_18;
  
  _only_one_instance();
  for (local_18 = 10; 0 < local_18; local_18 = local_18 + -1) {
    _printf("%d...%s");
    _fflush(*(FILE **)PTR____stdoutp_100004010);
    _sleep(1);
  }
  _puts("Fin!");
  return 0;
}



void ___memcpy_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003e88. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____memcpy_chk_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _atexit(void *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e94. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__atexit_100004018)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _exit(int param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003ea0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__exit_100004020)(param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fcntl(int param_1,int param_2,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003eac. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fcntl_100004028)(param_1,param_2);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fflush(FILE *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003eb8. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fflush_100004030)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fputs(char *param_1,FILE *param_2)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ec4. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fputs_100004038)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * _getenv(char *param_1)

{
  char *pcVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ed0. Too many branches
                    // WARNING: Treating indirect jump as call
  pcVar1 = (char *)(*(code *)PTR__getenv_100004040)();
  return pcVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003edc. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004048)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _open(char *param_1,int param_2,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ee8. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__open_100004050)((int)param_1,param_2);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _perror(char *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003ef4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__perror_100004058)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f00. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004060)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _puts(char *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f0c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__puts_100004068)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

uint _sleep(uint param_1)

{
  uint uVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f18. Too many branches
                    // WARNING: Treating indirect jump as call
  uVar1 = (*(code *)PTR__sleep_100004070)(param_1);
  return uVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t _strlen(char *param_1)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f24. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__strlen_100004078)();
  return sVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _unlink(char *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f30. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__unlink_100004080)((int)param_1);
  return iVar1;
}


