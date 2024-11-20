#include "utf-8-encode-and-decode-1.h"



int _codepoint_len(uint param_1)

{
  undefined **local_20;
  int local_18;
  
  local_18 = 0;
  for (local_20 = &_utf;
      (*local_20 != (undefined *)0x0 &&
      ((param_1 < *(uint *)(*local_20 + 4) || (*(uint *)(*local_20 + 8) < param_1))));
      local_20 = local_20 + 1) {
    local_18 = local_18 + 1;
  }
  if (local_18 < 5) {
    return local_18;
  }
                    // WARNING: Subroutine does not return
  _exit(1);
}



int _utf8_len(byte param_1)

{
  undefined **local_20;
  int local_18;
  
  local_18 = 0;
  local_20 = &_utf;
  while ((*local_20 != (undefined *)0x0 &&
         (((uint)param_1 & ((int)(char)**local_20 ^ 0xffffffffU)) != (int)(char)(*local_20)[1]))) {
    local_18 = local_18 + 1;
    local_20 = local_20 + 1;
  }
  if (local_18 < 5) {
    return local_18;
  }
                    // WARNING: Subroutine does not return
  _exit(1);
}



void _to_utf8(uint param_1)

{
  int iVar1;
  int local_20;
  uint local_1c;
  
  iVar1 = _codepoint_len(param_1);
  local_1c = *(int *)(_utf + 0xc) * (iVar1 + -1);
  DAT_100008090 = (byte)(param_1 >> (ulong)(local_1c & 0x1f)) & *(&_utf)[iVar1] | (&_utf)[iVar1][1];
  local_1c = local_1c - *(int *)(_utf + 0xc);
  for (local_20 = 1; local_20 < iVar1; local_20 = local_20 + 1) {
    (&DAT_100008090)[local_20] = (byte)(param_1 >> (ulong)(local_1c & 0x1f)) & *_utf | _utf[1];
    local_1c = local_1c - *(int *)(_utf + 0xc);
  }
  (&DAT_100008090)[iVar1] = 0;
  return;
}



uint _to_cp(byte *param_1)

{
  int iVar1;
  int local_28;
  uint local_24;
  uint local_20;
  byte *local_18;
  
  iVar1 = _utf8_len((long)(char)*param_1);
  local_20 = *(int *)(_utf + 0xc) * (iVar1 + -1);
  local_18 = param_1 + 1;
  local_24 = (int)(char)(*param_1 & *(&_utf)[iVar1]) << (ulong)(local_20 & 0x1f);
  for (local_28 = 1; local_28 < iVar1; local_28 = local_28 + 1) {
    local_20 = local_20 - *(int *)(_utf + 0xc);
    local_24 = local_24 | (int)(char)(*local_18 & *_utf) << (ulong)(local_20 & 0x1f);
    local_18 = local_18 + 1;
  }
  return local_24;
}



undefined8 entry(void)

{
  int iVar1;
  long lVar2;
  int local_50;
  int *local_40;
  int local_30 [6];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  local_30[2] = 0x416;
  local_30[3] = 0x20ac;
  local_30[0] = 0x41;
  local_30[1] = 0xf6;
  local_30[4] = 0x1d11e;
  local_30[5] = 0;
  _printf("Character  Unicode  UTF-8 encoding (hex)\n");
  iVar1 = _printf("----------------------------------------\n");
  for (local_40 = local_30; *local_40 != 0; local_40 = local_40 + 1) {
    lVar2 = _to_utf8(*local_40);
    _to_cp(lVar2);
    _printf("%s          U+%-7.4x");
    for (local_50 = 0; *(char *)(lVar2 + local_50) != '\0' && local_50 < 4; local_50 = local_50 + 1)
    {
      _printf("%hhx ");
    }
    iVar1 = _printf("\n");
  }
  if (*(long *)PTR____stack_chk_guard_100004008 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(iVar1);
  }
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f00. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _exit(int param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f0c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__exit_100004010)(param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f18. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004018)((int)param_1);
  return iVar1;
}


