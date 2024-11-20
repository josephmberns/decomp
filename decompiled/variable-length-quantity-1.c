#include "variable-length-quantity-1.h"



void _to_seq(ulong param_1,long param_2)

{
  int local_18;
  int local_14;
  
  local_14 = 9;
  while ((0 < local_14 && ((param_1 & 0x7fL << ((ulong)(uint)(local_14 * 7) & 0x3f)) == 0))) {
    local_14 = local_14 + -1;
  }
  for (local_18 = 0; local_18 <= local_14; local_18 = local_18 + 1) {
    *(byte *)(param_2 + local_18) =
         (byte)(param_1 >> ((ulong)(uint)((local_14 - local_18) * 7) & 0x3f)) & 0x7f | 0x80;
  }
  *(byte *)(param_2 + local_14) = *(byte *)(param_2 + local_14) ^ 0x80;
  return;
}



ulong _from_seq(byte *param_1)

{
  byte bVar1;
  ulong local_10;
  byte *local_8;
  
  local_10 = 0;
  local_8 = param_1;
  do {
    local_10 = (long)(int)(*local_8 & 0x7f) | local_10 << 7;
    bVar1 = *local_8;
    local_8 = local_8 + 1;
  } while ((bVar1 & 0x80) != 0);
  return local_10;
}



undefined8 entry(void)

{
  uint uVar1;
  void *pvVar2;
  long lVar3;
  uint local_6c;
  int local_68;
  undefined8 local_60 [7];
  byte abStack_22 [10];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  pvVar2 = _memset(local_60,0,0x38);
  local_60[0] = 0x7f;
  local_60[1] = 0x4000;
  local_60[3] = 0x3ffffe;
  local_60[4] = 0x1fffff;
  local_60[5] = 0x200000;
  local_60[6] = 0x3311a1234df31413;
  for (local_6c = 0; local_6c < 7; local_6c = local_6c + 1) {
    _to_seq(local_60[(int)local_6c],abStack_22);
    _printf("seq from %llx: [ ");
    local_68 = 0;
    do {
      _printf("%02x ");
      lVar3 = (long)local_68;
      local_68 = local_68 + 1;
    } while ((abStack_22[lVar3] & 0x80) != 0);
    _from_seq(abStack_22);
    uVar1 = _printf("] back: %llx\n");
    pvVar2 = (void *)(ulong)uVar1;
  }
  if (*(long *)PTR____stack_chk_guard_100004008 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(pvVar2);
  }
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f54. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _memset(void *param_1,int param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f60. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__memset_100004010)(param_1,param_2);
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f6c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004018)((int)param_1);
  return iVar1;
}


