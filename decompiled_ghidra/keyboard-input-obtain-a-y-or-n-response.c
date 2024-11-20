#include "keyboard-input-obtain-a-y-or-n-response.h"



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int _set_mode(int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    iVar1 = _tcsetattr(0,0,(termios *)0x100008000);
  }
  else {
    _tcgetattr(0,(termios *)0x100008000);
    _memcpy((void *)0x100008048,(void *)0x100008000,0x48);
    _DAT_100008060 = _DAT_100008060 & 0xfffffffffffffeff;
    iVar1 = _tcsetattr(0,0,(termios *)0x100008048);
  }
  return iVar1;
}



int _get_key(int param_1)

{
  bool bVar1;
  timeval *local_110;
  fd_set afStack_f8 [32];
  timeval local_78;
  int local_68;
  int local_64;
  fd_set *local_60;
  int local_54;
  fd_set *local_50;
  int local_48;
  uint local_44;
  fd_set *local_40;
  undefined4 local_38;
  int local_34;
  fd_set *local_30;
  undefined4 local_28;
  int local_24;
  
  bVar1 = PTR____darwin_check_fd_set_overflow_100004000 == (undefined *)0x0;
  local_68 = 0;
  local_78.tv_sec = 0;
  local_78.tv_usec = 0;
  local_64 = param_1;
  _memset(afStack_f8,0,0x80);
  local_54 = 0;
  local_28 = 0;
  local_60 = afStack_f8;
  local_30 = afStack_f8;
  if (bVar1) {
    local_24 = 1;
  }
  else {
    local_24 = ___darwin_check_fd_set_overflow(0,afStack_f8,0);
  }
  if (local_24 != 0) {
    *(uint *)(local_60 + (ulong)(long)local_54 / 0x20) =
         *(uint *)(local_60 + (ulong)(long)local_54 / 0x20) |
         (uint)(1L << (ulong)(long)local_54 % 0x20);
  }
  if (local_64 == 0) {
    local_110 = &local_78;
  }
  else {
    local_110 = (timeval *)0x0;
  }
  _select(1,afStack_f8,(fd_set *)0x0,(fd_set *)0x0,local_110);
  local_48 = 0;
  local_38 = 0;
  local_50 = afStack_f8;
  local_40 = afStack_f8;
  if (bVar1) {
    local_34 = 1;
  }
  else {
    local_34 = ___darwin_check_fd_set_overflow(0,afStack_f8,0);
  }
  if (local_34 == 0) {
    local_44 = 0;
  }
  else {
    local_44 = *(uint *)(local_50 + (ulong)(long)local_48 / 0x20) &
               (uint)(1L << (ulong)(long)local_48 % 0x20);
  }
  if (local_44 != 0) {
    local_68 = _getchar();
    _set_mode(0);
  }
  return local_68;
}



undefined8 entry(void)

{
  int iVar1;
  
  while( true ) {
    while( true ) {
      _set_mode(1);
      do {
        iVar1 = _get_key(0);
      } while (iVar1 != 0);
      _printf("Prompt again [Y/N]? ");
      _fflush(*(FILE **)PTR____stdoutp_100004008);
      iVar1 = _get_key(1);
      if ((iVar1 != 0x59) && (iVar1 != 0x79)) break;
      _printf("\n");
    }
    if ((iVar1 == 0x4e) || (iVar1 == 0x6e)) break;
    _printf("\nYes or no?\n");
  }
  _printf("\nDone\n");
  return 0;
}



void ___darwin_check_fd_set_overflow(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f10. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____darwin_check_fd_set_overflow_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fflush(FILE *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f1c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fflush_100004010)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _getchar(void)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f28. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__getchar_100004018)();
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _memcpy(void *param_1,void *param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f34. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__memcpy_100004020)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _memset(void *param_1,int param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f40. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__memset_100004028)(param_1,param_2);
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f4c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004030)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _select(int param_1,fd_set *param_2,fd_set *param_3,fd_set *param_4,timeval *param_5)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f58. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__select_100004038)(param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _tcgetattr(int param_1,termios *param_2)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f64. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__tcgetattr_100004040)(param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _tcsetattr(int param_1,int param_2,termios *param_3)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f70. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__tcsetattr_100004048)(param_1,param_2);
  return iVar1;
}


