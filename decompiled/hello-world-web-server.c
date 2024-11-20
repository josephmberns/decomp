#include "hello-world-web-server.h"



void entry(void)

{
  int iVar1;
  int iVar2;
  socklen_t local_48;
  int local_44;
  undefined4 local_40;
  undefined4 local_3c;
  sockaddr sStack_38;
  sockaddr sStack_28;
  undefined8 local_18;
  
  local_18 = *(undefined8 *)PTR____stack_chk_guard_100004000;
  local_3c = 0;
  local_40 = 1;
  local_48 = 0x10;
  iVar1 = _socket(2,1,0);
  if (iVar1 < 0) {
    _err(1,"can\'t open socket");
  }
  _setsockopt(iVar1,0xffff,4,&local_40,4);
  sStack_28.sa_family = '\x02';
  sStack_28.sa_data[2] = '\0';
  sStack_28.sa_data[3] = '\0';
  sStack_28.sa_data[4] = '\0';
  sStack_28.sa_data[5] = '\0';
  sStack_28.sa_data._0_2_ = FUN_100003ec8(0x1f90);
  iVar2 = _bind(iVar1,&sStack_28,0x10);
  if (iVar2 == -1) {
    _close(iVar1);
    _err(1,"Can\'t bind");
  }
  _listen(iVar1,5);
  do {
    while( true ) {
      local_44 = _accept(iVar1,&sStack_38,&local_48);
      _printf("got connection\n");
      if (local_44 != -1) break;
      _perror("Can\'t accept");
    }
    _write(local_44,_response,299);
    _close(local_44);
  } while( true );
}



uint FUN_100003ec8(ushort param_1)

{
  return (int)(uint)param_1 >> 8 | (param_1 & 0xff) << 8;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _accept(int param_1,sockaddr *param_2,socklen_t *param_3)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ef4. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__accept_100004008)(param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _bind(int param_1,sockaddr *param_2,socklen_t param_3)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f00. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__bind_100004010)(param_1,param_2,param_3);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _close(int param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f0c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__close_100004018)(param_1);
  return iVar1;
}



void _err(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f18. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__err_100004020)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _listen(int param_1,int param_2)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f24. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__listen_100004028)(param_1,param_2);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _perror(char *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f30. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__perror_100004030)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f3c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004038)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _setsockopt(int param_1,int param_2,int param_3,void *param_4,socklen_t param_5)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f48. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__setsockopt_100004040)(param_1,param_2,param_3,param_4,param_5);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _socket(int param_1,int param_2,int param_3)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f54. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__socket_100004048)(param_1,param_2,param_3);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

ssize_t _write(int param_1,void *param_2,size_t param_3)

{
  ssize_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f60. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__write_100004050)(param_1);
  return sVar1;
}


