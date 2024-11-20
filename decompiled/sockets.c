#include "sockets.h"



undefined4 entry(void)

{
  int iVar1;
  size_t sVar2;
  ssize_t sVar3;
  char *local_68;
  addrinfo *local_60;
  addrinfo aStack_58;
  int local_24;
  int local_20;
  int local_1c;
  undefined4 local_14;
  
  local_14 = 0;
  _memset(&aStack_58,0,0x30);
  aStack_58.ai_family = 0;
  aStack_58.ai_socktype = 1;
  iVar1 = _getaddrinfo("localhost","256",&aStack_58,&local_60);
  if (iVar1 == 0) {
    local_1c = _socket(local_60->ai_family,local_60->ai_socktype,local_60->ai_protocol);
    if (-1 < local_1c) {
      iVar1 = _connect(local_1c,local_60->ai_addr,local_60->ai_addrlen);
      if (-1 < iVar1) {
        local_68 = _msg;
        do {
          sVar2 = _strlen(local_68);
          local_20 = (int)sVar2;
          sVar3 = _send(local_1c,local_68,(long)local_20,0);
          local_24 = (int)sVar3;
          local_68 = local_68 + local_24;
        } while (-1 < local_24 && local_24 < local_20);
      }
      _close(local_1c);
    }
    _freeaddrinfo(local_60);
  }
  return local_14;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _close(int param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f2c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__close_100004000)(param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _connect(int param_1,sockaddr *param_2,socklen_t param_3)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f38. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__connect_100004008)(param_1,param_2,param_3);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _freeaddrinfo(addrinfo *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f44. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__freeaddrinfo_100004010)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _getaddrinfo(char *param_1,char *param_2,addrinfo *param_3,addrinfo **param_4)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f50. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__getaddrinfo_100004018)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _memset(void *param_1,int param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f5c. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__memset_100004020)(param_1,param_2);
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

ssize_t _send(int param_1,void *param_2,size_t param_3,int param_4)

{
  ssize_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f68. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__send_100004028)(param_1,param_2,param_3,param_4);
  return sVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _socket(int param_1,int param_2,int param_3)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f74. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__socket_100004030)(param_1,param_2,param_3);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t _strlen(char *param_1)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f80. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__strlen_100004038)();
  return sVar1;
}


