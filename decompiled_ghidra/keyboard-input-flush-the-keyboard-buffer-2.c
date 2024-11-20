#include "keyboard-input-flush-the-keyboard-buffer-2.h"



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



int _get_key(void)

{
  bool bVar1;
  fd_set afStack_d4 [32];
  int local_54;
  fd_set *local_50;
  int local_44;
  fd_set *local_40;
  int local_38;
  uint local_34;
  fd_set *local_30;
  undefined4 local_28;
  int local_24;
  fd_set *local_20;
  undefined4 local_18;
  int local_14;
  
  bVar1 = PTR____darwin_check_fd_set_overflow_100004000 == (undefined *)0x0;
  local_54 = 0;
  _memset(afStack_d4,0,0x80);
  local_44 = 0;
  local_18 = 0;
  local_50 = afStack_d4;
  local_20 = afStack_d4;
  if (bVar1) {
    local_14 = 1;
  }
  else {
    local_14 = ___darwin_check_fd_set_overflow(0,afStack_d4,0);
  }
  if (local_14 != 0) {
    *(uint *)(local_50 + (ulong)(long)local_44 / 0x20) =
         *(uint *)(local_50 + (ulong)(long)local_44 / 0x20) |
         (uint)(1L << (ulong)(long)local_44 % 0x20);
  }
  _select(1,afStack_d4,(fd_set *)0x0,(fd_set *)0x0,(timeval *)0x0);
  local_38 = 0;
  local_28 = 0;
  local_40 = afStack_d4;
  local_30 = afStack_d4;
  if (bVar1) {
    local_24 = 1;
  }
  else {
    local_24 = ___darwin_check_fd_set_overflow(0,afStack_d4,0);
  }
  if (local_24 == 0) {
    local_34 = 0;
  }
  else {
    local_34 = *(uint *)(local_40 + (ulong)(long)local_38 / 0x20) &
               (uint)(1L << (ulong)(long)local_38 % 0x20);
  }
  if (local_34 != 0) {
    local_54 = _getchar();
    _set_mode(0);
  }
  return local_54;
}



undefined8 entry(void)

{
  int iVar1;
  int local_18;
  
  local_18 = 0;
  while (local_18 != 0x6e) {
    _set_mode();
    _tcflush(0,1);
    _printf("Show this prompt again [Yes/No/Ignore you]? ");
    iVar1 = _fflush(*(FILE **)PTR____stdoutp_100004008);
    iVar1 = _get_key(iVar1);
    local_18 = _tolower(iVar1);
    if (local_18 == 0x69) {
      _puts("\nI\'ll ignore keys for 5 seconds");
      _sleep(5);
      _putchar(10);
    }
    else if (local_18 == 0x6e) {
      _printf("\nDone\n");
    }
    else if (local_18 == 0x79) {
      _putchar(10);
    }
    else {
      _puts("\nAssume that was the cat.");
    }
  }
  return 0;
}



void ___darwin_check_fd_set_overflow(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003e98. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____darwin_check_fd_set_overflow_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fflush(FILE *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ea4. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fflush_100004010)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _getchar(void)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003eb0. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__getchar_100004018)();
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _memcpy(void *param_1,void *param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ebc. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__memcpy_100004020)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _memset(void *param_1,int param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ec8. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__memset_100004028)(param_1,param_2);
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ed4. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004030)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _putchar(int param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ee0. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__putchar_100004038)(param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _puts(char *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003eec. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__puts_100004040)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _select(int param_1,fd_set *param_2,fd_set *param_3,fd_set *param_4,timeval *param_5)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ef8. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__select_100004048)(param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

uint _sleep(uint param_1)

{
  uint uVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f04. Too many branches
                    // WARNING: Treating indirect jump as call
  uVar1 = (*(code *)PTR__sleep_100004050)(param_1);
  return uVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _tcflush(int param_1,int param_2)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f10. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__tcflush_100004058)(param_1,param_2);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _tcgetattr(int param_1,termios *param_2)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f1c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__tcgetattr_100004060)(param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _tcsetattr(int param_1,int param_2,termios *param_3)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f28. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__tcsetattr_100004068)(param_1,param_2);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _tolower(int _c)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f34. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__tolower_100004070)(_c);
  return iVar1;
}


