#include "record-sound.h"



void * _record(size_t param_1)

{
  int iVar1;
  void *local_18;
  
  iVar1 = _open("/dev/dsp",0);
  if (iVar1 == -1) {
    local_18 = (void *)0x0;
  }
  else {
    local_18 = _malloc(param_1);
    _read(iVar1,local_18,param_1);
    _close(iVar1);
  }
  return local_18;
}



bool _play(void *param_1,size_t param_2)

{
  int iVar1;
  
  iVar1 = _open("/dev/dsp",1);
  if (iVar1 != -1) {
    _write(iVar1,param_1,param_2);
    _close(iVar1);
  }
  return iVar1 != -1;
}



undefined4 entry(void)

{
  undefined8 uVar1;
  
  uVar1 = _record();
  _play(uVar1,0x10000);
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _close(int param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f68. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__close_100004000)(param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f74. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004008)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _open(char *param_1,int param_2,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f80. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__open_100004010)((int)param_1,param_2);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

ssize_t _read(int param_1,void *param_2,size_t param_3)

{
  ssize_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f8c. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__read_100004018)(param_1);
  return sVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

ssize_t _write(int param_1,void *param_2,size_t param_3)

{
  ssize_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f98. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__write_100004020)(param_1);
  return sVar1;
}


