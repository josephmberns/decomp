#include "strip-control-codes-and-extended-characters-from-a-string-1.h"



undefined4 _ascii(byte param_1)

{
  undefined4 local_4;
  
  if ((param_1 < 0x20) || (0x7e < param_1)) {
    local_4 = 0;
  }
  else {
    local_4 = 1;
  }
  return local_4;
}



bool _ascii_ext(byte param_1)

{
  return 0x7f < param_1;
}



long _strip(long param_1,ulong param_2,int param_3)

{
  int iVar1;
  ulong local_160;
  ulong local_150;
  ulong local_148;
  undefined auStack_128 [256];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100004010;
  _memset(auStack_128,0,0x100);
  local_148 = 0;
  local_150 = 0;
  local_160 = param_2;
  if (0xff < param_2) {
    local_160 = 0xff;
  }
  for (; local_148 < local_160; local_148 = local_148 + 1) {
    if (((param_3 != 0) && (iVar1 = _ascii_ext(*(undefined *)(param_1 + local_148)), iVar1 != 0)) ||
       (iVar1 = _ascii(*(undefined *)(param_1 + local_148)), iVar1 != 0)) {
      auStack_128[local_150] = *(undefined *)(param_1 + local_148);
      local_150 = local_150 + 1;
    }
  }
  ___memset_chk(param_1,0,local_160,0xffffffffffffffff);
  for (local_148 = 0; local_148 < local_150; local_148 = local_148 + 1) {
    *(undefined *)(param_1 + local_148) = auStack_128[local_148];
  }
  *(undefined *)(param_1 + local_150) = 0;
  if (*(long *)PTR____stack_chk_guard_100004010 == local_28) {
    return param_1;
  }
                    // WARNING: Subroutine does not return
  ___stack_chk_fail();
}



undefined8 entry(void)

{
  undefined *puVar1;
  int iVar2;
  ulong local_120;
  undefined auStack_f0 [100];
  undefined auStack_8c [100];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100004010;
  _memset(auStack_8c,0,100);
  _memset(auStack_f0,0,100);
  _srand(0x20d81);
  _fprintf(*(FILE **)PTR____stdoutp_100004018,"Original:\t");
  for (local_120 = 0; puVar1 = PTR____stdoutp_100004018, local_120 < 100; local_120 = local_120 + 1)
  {
    iVar2 = _rand();
    auStack_8c[local_120] = (char)iVar2;
    _fprintf(*(FILE **)PTR____stdoutp_100004018,"%c");
  }
  _fprintf(*(FILE **)PTR____stdoutp_100004018,"\n");
  _memcpy(auStack_f0,auStack_8c,100);
  _strip(auStack_8c,100,1);
  _fprintf(*(FILE **)puVar1,"\nEXT:\t%s\n");
  _strip(auStack_f0,100,0);
  iVar2 = _fprintf(*(FILE **)puVar1,"\nASCII:\t%s\n");
  if (*(long *)PTR____stack_chk_guard_100004010 != local_28) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(iVar2);
  }
  return 0;
}



void ___memset_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f2c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____memset_chk_100004000)();
  return;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f38. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004008)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fprintf(FILE *param_1,char *param_2,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f44. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fprintf_100004020)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _memcpy(void *param_1,void *param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f50. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__memcpy_100004028)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _memset(void *param_1,int param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f5c. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__memset_100004030)(param_1,param_2);
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _rand(void)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f68. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__rand_100004038)();
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _srand(uint param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f74. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__srand_100004040)(param_1);
  return;
}


