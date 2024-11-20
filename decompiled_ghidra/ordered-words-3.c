#include "ordered-words-3.h"



undefined4 _ordered(byte *param_1,long *param_2)

{
  byte *pbVar1;
  byte bVar2;
  bool bVar3;
  undefined4 local_14;
  byte *local_8;
  
  local_14 = 1;
  local_8 = param_1;
  while( true ) {
    pbVar1 = local_8 + 1;
    bVar3 = false;
    if ((local_8[1] != 10) && (bVar3 = false, *pbVar1 != 0xd)) {
      bVar3 = *pbVar1 != 0;
    }
    if (!bVar3) break;
    bVar2 = *local_8;
    local_8 = pbVar1;
    if ((int)(char)*pbVar1 < (int)(uint)bVar2) {
      local_14 = 0;
    }
  }
  *param_2 = (long)pbVar1;
  return local_14;
}



undefined8 entry(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int local_cc;
  stat sStack_c8;
  char *local_38;
  char *local_30;
  char *local_28;
  char *local_20;
  undefined4 local_14;
  
  local_14 = 0;
  local_cc = 0;
  iVar2 = _open("unixdict.txt",0);
  if (iVar2 == -1) {
    _err(1,"read error");
  }
  _fstat(iVar2,&sStack_c8);
  local_20 = (char *)_mmap(0,sStack_c8.st_size,3,2,iVar2,0);
  if (local_20 == (char *)0x0) {
    _err(1,"mmap");
  }
  local_28 = local_20;
  while (local_30 = local_28, local_28 < local_20 + sStack_c8.st_size) {
    while( true ) {
      bVar1 = true;
      if (*local_28 != '\r') {
        bVar1 = *local_28 == '\n';
      }
      if (!bVar1) break;
      local_28 = local_28 + 1;
    }
    iVar3 = _ordered(local_28,&local_30);
    if ((iVar3 != 0) && (iVar3 = ((int)local_30 - (int)local_28) + 1, local_cc <= iVar3)) {
      if (local_cc < iVar3) {
        local_38 = local_20;
        local_cc = iVar3;
      }
      ___memcpy_chk(local_38,local_28,(long)iVar3,0xffffffffffffffff);
      local_38 = local_38 + iVar3;
      *local_38 = '\0';
    }
    local_28 = local_30;
  }
  _printf(local_20);
  _munmap(local_20,sStack_c8.st_size);
  _close(iVar2);
  return 0;
}



void ___memcpy_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f28. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____memcpy_chk_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _close(int param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f34. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__close_100004008)(param_1);
  return iVar1;
}



void _err(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f40. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__err_100004010)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fstat(int param_1,stat *param_2)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f4c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fstat_100004018)(param_1);
  return iVar1;
}



void _mmap(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f58. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__mmap_100004020)();
  return;
}



void _munmap(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f64. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__munmap_100004028)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _open(char *param_1,int param_2,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f70. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__open_100004030)((int)param_1,param_2);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f7c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004038)((int)param_1);
  return iVar1;
}


