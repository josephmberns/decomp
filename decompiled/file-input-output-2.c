#include "file-input-output-2.h"



uint _copy_file(void)

{
  uint uVar1;
  ulong uVar2;
  undefined auVar3 [16];
  stat sStack_80e8;
  size_t local_8058;
  uint local_804c;
  uint local_8048;
  uint local_8044;
  char *local_8040;
  char *local_8038;
  uint local_802c;
  undefined auStack_8028 [32768];
  long local_28;
  
  auVar3 = (*(code *)PTR____chkstk_darwin_100004000)();
  local_8040 = auVar3._8_8_;
  local_8038 = auVar3._0_8_;
  local_28 = *(long *)PTR____stack_chk_guard_100004010;
  local_8044 = 0;
  local_8048 = _open(local_8038,0);
  uVar2 = (ulong)local_8048;
  if (local_8048 == 0xffffffff) {
    local_802c = 0;
  }
  else {
    uVar1 = _fstat(local_8048,&sStack_80e8);
    uVar2 = (ulong)uVar1;
    if (uVar1 == 0) {
      local_804c = _open(local_8040,0x601);
      uVar2 = (ulong)local_804c;
      if (local_804c != 0xffffffff) {
        while (uVar2 = _read(local_8048,auStack_8028,0x1000), local_8058 = uVar2, 0 < (long)uVar2) {
          _write(local_804c,auStack_8028,uVar2);
        }
        local_8044 = (uint)(uVar2 == 0);
      }
    }
    if (local_8048 != 0xffffffff) {
      uVar1 = _close(local_8048);
      uVar2 = (ulong)uVar1;
    }
    if (local_804c != 0xffffffff) {
      uVar1 = _close(local_804c);
      uVar2 = (ulong)uVar1;
    }
    local_802c = local_8044;
  }
  if (*(long *)PTR____stack_chk_guard_100004010 == local_28) {
    return local_802c;
  }
                    // WARNING: Subroutine does not return
  ___stack_chk_fail(uVar2);
}



undefined4 entry(void)

{
  _copy_file("infile","outfile");
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f50. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004008)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _close(int param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f5c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__close_100004018)(param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fstat(int param_1,stat *param_2)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f68. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fstat_100004020)(param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _open(char *param_1,int param_2,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f74. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__open_100004028)((int)param_1,param_2);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

ssize_t _read(int param_1,void *param_2,size_t param_3)

{
  ssize_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f80. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__read_100004030)(param_1);
  return sVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

ssize_t _write(int param_1,void *param_2,size_t param_3)

{
  ssize_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f8c. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__write_100004038)(param_1);
  return sVar1;
}


