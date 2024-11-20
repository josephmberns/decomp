#include "ascii-art-diagram-converter.h"



undefined4 entry(void)

{
  int iVar1;
  int local_28;
  
  iVar1 = _printf("Extract meta-data from bit-encoded text form\n");
  _make_test_hdr(iVar1);
  _idx_name = 0;
  for (local_28 = 0; (local_28 < 0xe && ((&_Lines)[local_28] != (undefined *)0x0));
      local_28 = local_28 + 1) {
    iVar1 = _bit_hdr((&_Lines)[local_28]);
    if (iVar1 < 1) {
      _bit_names((&_Lines)[local_28]);
    }
  }
  _dump_names();
  return 0;
}



void _make_test_hdr(void)

{
  _header = 0x400;
  DAT_100008078 = 0xc;
  DAT_10000807c = 0x22;
  DAT_100008080 = 0x38;
  DAT_100008084 = 0x4e;
  DAT_100008074 = 0xb50a;
  return;
}



int _bit_hdr(char *param_1)

{
  char *pcVar1;
  size_t sVar2;
  int local_30;
  int local_2c;
  int local_14;
  
  pcVar1 = _strchr(param_1,0x2b);
  if (pcVar1 == (char *)0x0) {
    local_14 = 0;
  }
  else {
    local_2c = 0;
    for (local_30 = 0; sVar2 = _strlen(pcVar1), (ulong)(long)local_30 < sVar2 - 1;
        local_30 = local_30 + 3) {
      if (((pcVar1[local_30] != '+') || (pcVar1[local_30 + 1] != '-')) ||
         (pcVar1[local_30 + 2] != '-')) {
        return 0;
      }
      local_2c = local_2c + 1;
    }
    local_14 = local_2c;
  }
  return local_14;
}



uint _bit_names(char *param_1)

{
  uint *puVar1;
  char *pcVar2;
  ulong uVar3;
  long lVar4;
  uint local_a0;
  uint local_9c;
  uint local_90;
  int local_8c;
  uint local_88;
  uint local_84;
  char *local_80;
  char acStack_68 [80];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  local_84 = 0;
  local_88 = 0xf;
  local_80 = param_1;
  while (pcVar2 = _strchr(local_80,0x7c), pcVar2 != (char *)0x0) {
    pcVar2 = pcVar2 + 1;
    local_80 = _strchr(pcVar2,0x7c);
    if (local_80 == (char *)0x0) break;
    local_84 = (int)local_80 - (int)pcVar2;
    acStack_68[local_84] = '\0';
    local_8c = 0;
    for (local_90 = 0; local_90 < local_84; local_90 = local_90 + 1) {
      if (' ' < pcVar2[(int)local_90]) {
        lVar4 = (long)local_8c;
        local_8c = local_8c + 1;
        acStack_68[lVar4] = pcVar2[(int)local_90];
      }
    }
    acStack_68[local_8c] = '\0';
    local_84 = local_84 + 1;
    uVar3 = (ulong)_idx_name;
    _idx_name = _idx_name + 1;
    lVar4 = uVar3 * 0x60;
    puVar1 = (uint *)(&_names + lVar4);
    ___strcpy_chk(lVar4 + 0x10000809c,acStack_68,0xffffffffffffffff);
    *puVar1 = local_84 / 3;
    if (*puVar1 < 0x10) {
      for (local_9c = 0; local_9c < *puVar1; local_9c = local_9c + 1) {
        *(uint *)(&DAT_100008094 + lVar4) =
             *(uint *)(&DAT_100008094 + lVar4) | 1 << (ulong)(local_88 & 0x1f);
        local_88 = local_88 - 1;
      }
      *(uint *)(&DAT_100008098 + lVar4) = (&_header)[_idx_hdr] & *(uint *)(&DAT_100008094 + lVar4);
      local_a0 = *(uint *)(&DAT_100008094 + lVar4);
      while ((local_a0 & 1) == 0) {
        local_a0 = local_a0 >> 1;
        *(uint *)(&DAT_100008098 + lVar4) = *(uint *)(&DAT_100008098 + lVar4) >> 1;
      }
      if (*(int *)(&DAT_100008094 + lVar4) == 0xf) {
        _idx_hdr = _idx_hdr + 1;
      }
    }
    else {
      uVar3 = (ulong)_idx_hdr;
      _idx_hdr = _idx_hdr + 1;
      *(undefined4 *)(&DAT_100008098 + lVar4) = (&_header)[uVar3];
    }
  }
  if (*(long *)PTR____stack_chk_guard_100004008 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail();
  }
  return local_84;
}



int _dump_names(void)

{
  int iVar1;
  int local_1c;
  
  _printf("-name-bits-mask-data-\n");
  local_1c = 0;
  while ((local_1c < 0x14 && (*(int *)(&_names + (long)local_1c * 0x60) != 0))) {
    _printf("%10s %2d X%04x = %u\n");
    local_1c = local_1c + 1;
  }
  iVar1 = _puts("bye..");
  return iVar1;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003d94. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



void ___strcpy_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003da0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____strcpy_chk_100004010)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003dac. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004018)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _puts(char *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003db8. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__puts_100004020)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * _strchr(char *param_1,int param_2)

{
  char *pcVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003dc4. Too many branches
                    // WARNING: Treating indirect jump as call
  pcVar1 = (char *)(*(code *)PTR__strchr_100004028)(param_1,param_2);
  return pcVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t _strlen(char *param_1)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003dd0. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__strlen_100004030)();
  return sVar1;
}


