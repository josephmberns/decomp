#include "bitwise-io.h"



undefined8 * _b_attach(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)_malloc(0x10);
  *(undefined4 *)(puVar1 + 1) = 0;
  *(undefined4 *)((long)puVar1 + 0xc) = 0;
  *puVar1 = param_1;
  return puVar1;
}



ulong _b_write(ulong param_1,long param_2,ulong param_3,undefined8 *param_4)

{
  uint uVar1;
  uint local_38;
  uint local_34;
  ulong local_28;
  long local_20;
  byte *local_18;
  
  local_34 = *(uint *)(param_4 + 1);
  local_38 = *(uint *)((long)param_4 + 0xc);
  local_18 = (byte *)(param_1 + param_3 / 8);
  local_28 = param_3 % 8;
  local_20 = param_2;
  while (local_20 != 0 || 7 < (int)local_38) {
    while (7 < (int)local_38) {
      local_38 = local_38 - 8;
      uVar1 = _fputc(local_34 >> (ulong)(local_38 & 0x1f),(FILE *)*param_4);
      param_1 = (ulong)uVar1;
      local_34 = local_34 & (1 << (ulong)(local_38 & 0x1f)) - 1U;
    }
    while ((int)local_38 < 8 && local_20 != 0) {
      local_34 = (int)(0x80 >> ((uint)local_28 & 0x1f) & (uint)*local_18) >>
                 (7 - (uint)local_28 & 0x1f) | local_34 << 1;
      local_20 = local_20 + -1;
      local_38 = local_38 + 1;
      local_28 = local_28 + 1;
      if (local_28 == 8) {
        local_28 = 0;
        local_18 = local_18 + 1;
      }
    }
  }
  *(uint *)(param_4 + 1) = local_34;
  *(uint *)((long)param_4 + 0xc) = local_38;
  return param_1;
}



undefined8 _b_read(long param_1,long param_2,ulong param_3,undefined8 *param_4)

{
  byte bVar1;
  uint uVar2;
  int local_38;
  uint local_34;
  ulong local_28;
  long local_20;
  byte *local_18;
  
  local_34 = *(uint *)(param_4 + 1);
  local_38 = *(int *)((long)param_4 + 0xc);
  local_18 = (byte *)(param_1 + param_3 / 8);
  local_28 = param_3 % 8;
  local_20 = param_2;
  while (local_20 != 0) {
    while (local_38 != 0 && local_20 != 0) {
      bVar1 = (byte)(0x80 >> ((uint)local_28 & 0x1f));
      if ((local_34 & 1 << (ulong)(local_38 - 1U & 0x1f)) == 0) {
        *local_18 = *local_18 & (bVar1 ^ 0xff);
      }
      else {
        *local_18 = *local_18 | bVar1;
      }
      local_20 = local_20 + -1;
      local_38 = local_38 + -1;
      local_28 = local_28 + 1;
      if (7 < local_28) {
        local_28 = 0;
        local_18 = local_18 + 1;
      }
    }
    if (local_20 == 0) break;
    uVar2 = _fgetc((FILE *)*param_4);
    local_34 = uVar2 | local_34 << 8;
    local_38 = local_38 + 8;
  }
  *(uint *)(param_4 + 1) = local_34;
  *(int *)((long)param_4 + 0xc) = local_38;
  return 0;
}



void _b_detach(undefined8 *param_1)

{
  if (*(int *)((long)param_1 + 0xc) != 0) {
    *(int *)(param_1 + 1) =
         *(int *)(param_1 + 1) << (ulong)(8U - *(int *)((long)param_1 + 0xc) & 0x1f);
    _fputc(*(int *)(param_1 + 1),(FILE *)*param_1);
  }
  _free(param_1);
  return;
}



undefined8 entry(void)

{
  int iVar1;
  FILE *pFVar2;
  undefined8 uVar3;
  int local_40;
  undefined7 local_38;
  undefined4 uStack_31;
  char local_28 [16];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  builtin_strncpy(local_28,"abcdefghijk",0xc);
  local_38 = 0;
  uStack_31 = 0;
  pFVar2 = _fopen("test.bin","wb");
  uVar3 = _b_attach(pFVar2);
  for (local_40 = 0; local_40 < 10; local_40 = local_40 + 1) {
    _b_write(local_28 + local_40,7,1,uVar3);
  }
  _b_detach(uVar3);
  _fclose(pFVar2);
  pFVar2 = _fopen("test.bin","rb");
  uVar3 = _b_attach(pFVar2);
  for (local_40 = 0; local_40 < 10; local_40 = local_40 + 1) {
    _b_read((long)&local_38 + (long)local_40,7,1,uVar3);
  }
  _b_detach(uVar3);
  _fclose(pFVar2);
  iVar1 = _printf("%10s\n");
  if (*(long *)PTR____stack_chk_guard_100004008 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(iVar1);
  }
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f2c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fclose(FILE *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f38. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fclose_100004010)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fgetc(FILE *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f44. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fgetc_100004018)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

FILE * _fopen(char *param_1,char *param_2)

{
  FILE *pFVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f50. Too many branches
                    // WARNING: Treating indirect jump as call
  pFVar1 = (FILE *)(*(code *)PTR__fopen_100004020)();
  return pFVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fputc(int param_1,FILE *param_2)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f5c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fputc_100004028)(param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f68. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004030)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f74. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004038)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f80. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004040)((int)param_1);
  return iVar1;
}


