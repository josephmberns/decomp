#include "echo-server.h"



void _wait_for_zombie(void)

{
  pid_t pVar1;
  
  do {
    pVar1 = _waitpid(-1,(int *)0x0,1);
  } while (0 < pVar1);
  return;
}



void _echo_lines(int param_1)

{
  ssize_t sVar1;
  undefined auStack_128 [256];
  undefined8 local_28;
  
  local_28 = *(undefined8 *)PTR____stack_chk_guard_100004000;
  while( true ) {
    sVar1 = _read(param_1,auStack_128,0x100);
    if ((int)sVar1 < 1) break;
    _write(param_1,auStack_128,(long)(int)sVar1);
  }
                    // WARNING: Subroutine does not return
  _exit(0);
}



void _take_connections_forever(int param_1)

{
  int iVar1;
  pid_t pVar2;
  socklen_t local_28;
  sockaddr sStack_24;
  int local_14;
  
  local_14 = param_1;
  do {
    while( true ) {
      while( true ) {
        local_28 = 0x10;
        iVar1 = _accept(local_14,&sStack_24,&local_28);
        if (iVar1 != -1) break;
        _perror("accept");
      }
      pVar2 = _fork();
      if (pVar2 != 0) break;
      _close(local_14);
      _echo_lines(iVar1);
    }
    _close(iVar1);
  } while( true );
}



undefined8 entry(void)

{
  int iVar1;
  int iVar2;
  sigaction local_60;
  addrinfo *local_50;
  addrinfo local_48;
  undefined4 local_14;
  
  local_14 = 0;
  _memset(&local_48,0,0x30);
  local_48.ai_family = 0;
  local_48.ai_socktype = 1;
  local_48.ai_flags = 1;
  iVar1 = _getaddrinfo((char *)0x0,"12321",&local_48,&local_50);
  if (iVar1 != 0) {
    _perror("getaddrinfo");
                    // WARNING: Subroutine does not return
    _exit(1);
  }
  iVar1 = _socket(local_50->ai_family,local_50->ai_socktype,local_50->ai_protocol);
  if (iVar1 == -1) {
    _perror("socket");
                    // WARNING: Subroutine does not return
    _exit(1);
  }
  local_60.__sigaction_u.__sa_handler = _wait_for_zombie;
  local_60.sa_mask = 0;
  local_60.sa_flags = 2;
  iVar2 = _sigaction(0x14,&local_60,(sigaction *)0x0);
  if (iVar2 == -1) {
    _perror("sigaction");
                    // WARNING: Subroutine does not return
    _exit(1);
  }
  iVar2 = _bind(iVar1,local_50->ai_addr,local_50->ai_addrlen);
  if (iVar2 != 0) {
    _perror("bind");
                    // WARNING: Subroutine does not return
    _exit(1);
  }
  _freeaddrinfo(local_50);
  iVar2 = _listen(iVar1,0x14);
  if (iVar2 != 0) {
    _perror("listen");
                    // WARNING: Subroutine does not return
    _exit(1);
  }
  _take_connections_forever(iVar1);
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _accept(int param_1,sockaddr *param_2,socklen_t *param_3)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ebc. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__accept_100004008)(param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _bind(int param_1,sockaddr *param_2,socklen_t param_3)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ec8. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__bind_100004010)(param_1,param_2,param_3);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _close(int param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ed4. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__close_100004018)(param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _exit(int param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003ee0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__exit_100004020)(param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

pid_t _fork(void)

{
  pid_t pVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003eec. Too many branches
                    // WARNING: Treating indirect jump as call
  pVar1 = (*(code *)PTR__fork_100004028)();
  return pVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _freeaddrinfo(addrinfo *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003ef8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__freeaddrinfo_100004030)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _getaddrinfo(char *param_1,char *param_2,addrinfo *param_3,addrinfo **param_4)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f04. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__getaddrinfo_100004038)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _listen(int param_1,int param_2)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f10. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__listen_100004040)(param_1,param_2);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _memset(void *param_1,int param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f1c. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__memset_100004048)(param_1,param_2);
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _perror(char *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f28. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__perror_100004050)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

ssize_t _read(int param_1,void *param_2,size_t param_3)

{
  ssize_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f34. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__read_100004058)(param_1);
  return sVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _sigaction(int param_1,sigaction *param_2,sigaction *param_3)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f40. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__sigaction_100004060)(param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _socket(int param_1,int param_2,int param_3)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f4c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__socket_100004068)(param_1,param_2,param_3);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

pid_t _waitpid(pid_t param_1,int *param_2,int param_3)

{
  pid_t pVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f58. Too many branches
                    // WARNING: Treating indirect jump as call
  pVar1 = (*(code *)PTR__waitpid_100004070)(param_1,param_2,param_3);
  return pVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

ssize_t _write(int param_1,void *param_2,size_t param_3)

{
  ssize_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f64. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__write_100004078)(param_1);
  return sVar1;
}


