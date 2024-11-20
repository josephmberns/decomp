#include "md5-2.h"



uint _f0(long param_1)

{
  return *(uint *)(param_1 + 4) & *(uint *)(param_1 + 8) |
         *(uint *)(param_1 + 0xc) & (*(uint *)(param_1 + 4) ^ 0xffffffff);
}



uint _f1(long param_1)

{
  return *(uint *)(param_1 + 0xc) & *(uint *)(param_1 + 4) |
         *(uint *)(param_1 + 8) & (*(uint *)(param_1 + 0xc) ^ 0xffffffff);
}



uint _f2(long param_1)

{
  return *(uint *)(param_1 + 4) ^ *(uint *)(param_1 + 8) ^ *(uint *)(param_1 + 0xc);
}



uint _f3(long param_1)

{
  return *(uint *)(param_1 + 8) ^ (*(uint *)(param_1 + 4) | *(uint *)(param_1 + 0xc) ^ 0xffffffff);
}



long _calcKs(long param_1)

{
  double dVar1;
  double dVar2;
  undefined4 local_2c;
  
  dVar1 = (double)_pow(0x4000000000000000,0x4040000000000000);
  for (local_2c = 0; local_2c < 0x40; local_2c = local_2c + 1) {
    dVar2 = (double)_sin((double)(local_2c + 1));
    *(int *)(param_1 + (long)local_2c * 4) = (int)(ABS(dVar2) * dVar1);
  }
  return param_1;
}



uint _rol(uint param_1,short param_2)

{
  uint uVar1;
  
  uVar1 = (1 << (ulong)((int)param_2 & 0x1f)) - 1;
  return param_1 >> (ulong)(0x20U - (int)param_2 & 0x1f) & uVar1 |
         param_1 << (ulong)((int)param_2 & 0x1f) & (uVar1 ^ 0xffffffff);
}



// WARNING: Restarted to delay deadcode elimination for space: stack

undefined * _md5(undefined8 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_bc;
  void *local_b8;
  int local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  int aiStack_98 [16];
  undefined *local_58;
  int local_4c;
  short local_46;
  short local_44;
  short local_42;
  code *local_40;
  int local_34;
  undefined8 local_30;
  int local_28 [4];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004010;
  local_9c = 0;
  local_34 = param_2;
  local_30 = param_1;
  if (DAT_100008180 == 0) {
    DAT_100008180 = _calcKs(&DAT_100008080);
  }
  for (local_a8 = 0; local_a8 < 4; local_a8 = local_a8 + 1) {
    *(undefined4 *)(&DAT_100008188 + (long)local_a8 * 4) =
         *(undefined4 *)(&DAT_100008000 + (long)local_a8 * 4);
  }
  local_a4 = (local_34 + 8) / 0x40 + 1;
  local_b8 = _malloc((long)(local_a4 * 0x40));
  ___memcpy_chk(local_b8,local_30,(long)local_34,0xffffffffffffffff);
  *(undefined *)((long)local_b8 + (long)local_34) = 0x80;
  iVar3 = local_34;
  while (local_a8 = iVar3 + 1, local_a8 < local_a4 * 0x40) {
    *(undefined *)((long)local_b8 + (long)local_a8) = 0;
    iVar3 = local_a8;
  }
  local_bc = local_34 * 8;
  local_a8 = iVar3 + -7;
  ___memcpy_chk((long)local_b8 + (long)local_a8,&local_bc,4,0xffffffffffffffff);
  for (local_a0 = 0; local_a0 < local_a4; local_a0 = local_a0 + 1) {
    _memcpy(aiStack_98,(void *)((long)local_b8 + (long)local_9c),0x40);
    for (local_a8 = 0; local_a8 < 4; local_a8 = local_a8 + 1) {
      local_28[local_a8] = *(int *)(&DAT_100008188 + (long)local_a8 * 4);
    }
    for (local_ac = 0; local_ac < 4; local_ac = local_ac + 1) {
      local_40 = (code *)(&PTR__f0_100008010)[local_ac];
      local_58 = (&PTR_DAT_100008060)[local_ac];
      local_42 = *(short *)(&DAT_100008030 + (long)local_ac * 2);
      local_44 = *(short *)(&DAT_100008038 + (long)local_ac * 2);
      for (local_a8 = 0; iVar1 = local_28[1], iVar3 = local_28[0], local_a8 < 0x10;
          local_a8 = local_a8 + 1) {
        iVar2 = local_42 * local_a8 + (int)local_44;
        local_46 = (short)iVar2 + (short)(iVar2 / 0x10) * -0x10;
        iVar2 = (*local_40)(local_28);
        iVar3 = _rol(iVar3 + iVar2 +
                     *(int *)(DAT_100008180 + (long)(local_a8 + local_ac * 0x10) * 4) +
                     aiStack_98[local_46],(long)*(short *)(local_58 + (long)(local_a8 % 4) * 2));
        local_4c = iVar1 + iVar3;
        local_28[0] = local_28[3];
        local_28[3] = local_28[2];
        local_28[2] = local_28[1];
        local_28[1] = iVar1 + iVar3;
      }
    }
    for (local_ac = 0; local_ac < 4; local_ac = local_ac + 1) {
      *(int *)(&DAT_100008188 + (long)local_ac * 4) =
           *(int *)(&DAT_100008188 + (long)local_ac * 4) + local_28[local_ac];
    }
    local_9c = local_9c + 0x40;
  }
  if (local_b8 != (void *)0x0) {
    _free(local_b8);
  }
  if (*(long *)PTR____stack_chk_guard_100004010 == local_18) {
    return &DAT_100008188;
  }
                    // WARNING: Subroutine does not return
  ___stack_chk_fail();
}



undefined8 entry(void)

{
  size_t sVar1;
  int local_28;
  int local_24;
  
  sVar1 = _strlen("The quick brown fox jumps over the lazy dog.");
  _md5("The quick brown fox jumps over the lazy dog.",sVar1);
  _printf("= 0x");
  for (local_24 = 0; local_24 < 4; local_24 = local_24 + 1) {
    for (local_28 = 0; local_28 < 4; local_28 = local_28 + 1) {
      _printf("%02x");
    }
  }
  _printf("\n");
  return 0;
}



void ___memcpy_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003eec. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____memcpy_chk_100004000)();
  return;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003ef8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004008)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f04. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004018)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f10. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004020)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _memcpy(void *param_1,void *param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f1c. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__memcpy_100004028)();
  return pvVar1;
}



void _pow(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f28. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__pow_100004030)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f34. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004038)((int)param_1);
  return iVar1;
}



void _sin(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f40. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__sin_100004040)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t _strlen(char *param_1)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f4c. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__strlen_100004048)();
  return sVar1;
}


