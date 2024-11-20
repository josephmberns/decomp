#include "terminal-control-dimensions-1.h"



undefined8 entry(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = _open("/dev/tty",2);
  if (iVar1 < 0) {
    _err(1,"/dev/tty");
  }
  iVar2 = _ioctl(iVar1,0x40087468);
  if (iVar2 < 0) {
    _err(1,"/dev/tty");
  }
  _printf("%d rows by %d columns\n");
  _printf("(%d by %d pixels)\n");
  _close(iVar1);
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _close(int param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f40. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__close_100004000)(param_1);
  return iVar1;
}



void _err(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f4c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__err_100004008)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _ioctl(int param_1,ulong param_2,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f58. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__ioctl_100004010)(param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _open(char *param_1,int param_2,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f64. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__open_100004018)((int)param_1,param_2);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f70. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004020)((int)param_1);
  return iVar1;
}


