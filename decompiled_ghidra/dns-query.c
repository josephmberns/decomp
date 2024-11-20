#include "dns-query.h"



undefined8 entry(void)

{
  int iVar1;
  FILE *pFVar2;
  addrinfo *local_470;
  addrinfo *local_468;
  addrinfo aStack_460;
  undefined4 local_430;
  char acStack_429 [1025];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100004008;
  local_430 = 0;
  _memset(&aStack_460,0,0x30);
  aStack_460.ai_family = 0;
  aStack_460.ai_socktype = 2;
  iVar1 = _getaddrinfo("www.kame.net",(char *)0x0,&aStack_460,&local_470);
  if (iVar1 != 0) {
    pFVar2 = *(FILE **)PTR____stderrp_100004010;
    _gai_strerror(iVar1);
    _fprintf(pFVar2,"%s\n");
                    // WARNING: Subroutine does not return
    _exit(1);
  }
  for (local_468 = local_470; local_468 != (addrinfo *)0x0; local_468 = local_468->ai_next) {
    iVar1 = _getnameinfo(local_468->ai_addr,local_468->ai_addrlen,acStack_429,0x401,(char *)0x0,0,2)
    ;
    if (iVar1 == 0) {
      _printf("%s\n");
    }
    else {
      pFVar2 = *(FILE **)PTR____stderrp_100004010;
      _gai_strerror(iVar1);
      _fprintf(pFVar2,"%s\n");
    }
  }
  _freeaddrinfo(local_470);
  if (*(long *)PTR____stack_chk_guard_100004008 != local_28) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail();
  }
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f30. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _exit(int param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f3c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__exit_100004018)(param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fprintf(FILE *param_1,char *param_2,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f48. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fprintf_100004020)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _freeaddrinfo(addrinfo *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f54. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__freeaddrinfo_100004028)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * _gai_strerror(int param_1)

{
  char *pcVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f60. Too many branches
                    // WARNING: Treating indirect jump as call
  pcVar1 = (char *)(*(code *)PTR__gai_strerror_100004030)(param_1);
  return pcVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _getaddrinfo(char *param_1,char *param_2,addrinfo *param_3,addrinfo **param_4)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f6c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__getaddrinfo_100004038)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _getnameinfo(sockaddr *param_1,socklen_t param_2,char *param_3,socklen_t param_4,char *param_5,
                socklen_t param_6,int param_7)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f78. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__getnameinfo_100004040)
                    ((int)param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _memset(void *param_1,int param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f84. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__memset_100004048)(param_1,param_2);
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f90. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004050)((int)param_1);
  return iVar1;
}


