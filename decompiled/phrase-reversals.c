#include "phrase-reversals.h"



long _reverse_section(long param_1,ulong param_2)

{
  undefined uVar1;
  undefined8 local_20;
  
  if (param_2 != 0) {
    for (local_20 = 0; local_20 < param_2 / 2 + 1; local_20 = local_20 + 1) {
      uVar1 = *(undefined *)(param_1 + local_20);
      *(undefined *)(param_1 + local_20) = *(undefined *)(param_1 + (param_2 - local_20));
      *(undefined *)(param_1 + (param_2 - local_20)) = uVar1;
    }
  }
  return param_1;
}



char * _reverse_words_in_order(char *param_1,byte param_2)

{
  bool bVar1;
  size_t sVar2;
  long local_38;
  ulong local_30;
  char *local_20;
  char *local_18;
  
  sVar2 = _strlen(param_1);
  local_18 = param_1;
  if (sVar2 != 0) {
    local_20 = param_1;
    for (local_30 = 0; sVar2 = _strlen(local_20), local_30 < sVar2 - 1; local_30 = local_30 + 1) {
      local_38 = 0;
      while( true ) {
        bVar1 = false;
        if (local_20[local_30 + local_38] != '\0') {
          bVar1 = (int)local_20[local_30 + local_38] != (uint)param_2;
        }
        if (!bVar1) break;
        local_38 = local_38 + 1;
      }
      _reverse_section(local_20 + local_30,local_38 + -1);
      local_20 = local_20 + local_38;
    }
    local_18 = local_20;
  }
  return local_18;
}



char * _reverse_string(char *param_1)

{
  size_t sVar1;
  char *local_20;
  
  sVar1 = _strlen(param_1);
  local_20 = param_1;
  if (sVar1 != 0) {
    sVar1 = _strlen(param_1);
    local_20 = (char *)_reverse_section(param_1,sVar1 - 1);
  }
  return local_20;
}



undefined8 _reverse_order_of_words(undefined8 param_1,char param_2)

{
  _reverse_string(param_1);
  _reverse_words_in_order(param_1,(long)param_2);
  return param_1;
}



undefined4 entry(void)

{
  long lVar1;
  int iVar2;
  undefined8 extraout_x8;
  long alStack_a0 [2];
  long local_90;
  undefined8 local_88;
  char *local_80;
  undefined8 local_78;
  long local_70;
  undefined4 local_68;
  undefined local_61;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined4 local_44;
  char local_40 [40];
  long local_18;
  
  local_58 = (undefined *)&local_90;
  local_18 = *(long *)PTR____stack_chk_guard_100004010;
  local_44 = 0;
  local_80 = local_40;
  builtin_strncpy(local_40,"rosetta code phrase reversal",0x1d);
  local_50 = 0x1d;
  local_88 = 0x1d;
  local_90 = 0x20;
  (*(code *)PTR____chkstk_darwin_100004000)();
  lVar1 = -local_90;
  local_70 = (long)&local_90 + lVar1;
  local_60 = local_88;
  local_61 = 0x20;
  *(undefined8 *)((long)alStack_a0 + lVar1) = extraout_x8;
  _printf("Original:       \"%s\"\n");
  local_78 = 0xffffffffffffffff;
  ___strncpy_chk(local_70,local_80,local_50);
  _reverse_string(local_70);
  *(long *)((long)alStack_a0 + lVar1) = local_70;
  _printf("Reversed:       \"%s\"\n");
  ___strncpy_chk(local_70,local_80,local_50,local_78);
  _reverse_words_in_order(local_70,local_61);
  *(long *)((long)alStack_a0 + lVar1) = local_70;
  _printf("Reversed words: \"%s\"\n");
  ___strncpy_chk(local_70,local_80,local_50,local_78);
  _reverse_order_of_words(local_70,local_61);
  *(long *)((long)alStack_a0 + lVar1) = local_70;
  iVar2 = _printf("Reversed order: \"%s\"\n");
  local_44 = 0;
  local_68 = 0;
  if (*(long *)PTR____stack_chk_guard_100004010 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(iVar2);
  }
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f00. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004008)();
  return;
}



void ___strncpy_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f0c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____strncpy_chk_100004018)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f18. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004020)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t _strlen(char *param_1)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f24. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__strlen_100004028)();
  return sVar1;
}


