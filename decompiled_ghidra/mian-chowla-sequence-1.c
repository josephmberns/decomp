#include "mian-chowla-sequence-1.h"



undefined _Contains(long param_1,int param_2,int param_3)

{
  int local_1c;
  
  local_1c = param_3 + -1;
  while( true ) {
    if (local_1c < 0) {
      return 0;
    }
    if (param_2 == *(int *)(param_1 + (long)local_1c * 4)) break;
    local_1c = local_1c + -1;
  }
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined * _MianChowla(void)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  int local_4f28;
  int local_4f24;
  int local_4f20;
  int local_4f1c;
  int local_4f10 [5050];
  long local_28;
  
  (*(code *)PTR____chkstk_darwin_100004000)();
  local_28 = *(long *)PTR____stack_chk_guard_100004010;
  _DAT_100008000 = 1;
  local_4f10[0] = 2;
  local_4f1c = 1;
  local_4f20 = 1;
LAB_100003c64:
  iVar2 = local_4f1c;
  if (99 < local_4f20) {
    if (*(long *)PTR____stack_chk_guard_100004010 == local_28) {
      return &DAT_100008000;
    }
                    // WARNING: Subroutine does not return
    ___stack_chk_fail();
  }
  local_4f24 = *(int *)(&DAT_100008000 + (long)(local_4f20 + -1) * 4);
  do {
    local_4f24 = local_4f24 + 1;
    *(int *)(&DAT_100008000 + (long)local_4f20 * 4) = local_4f24;
    local_4f28 = 0;
    local_4f1c = iVar2;
    while( true ) {
      if (local_4f20 < local_4f28) {
        local_4f20 = local_4f20 + 1;
        goto LAB_100003c64;
      }
      iVar1 = *(int *)(&DAT_100008000 + (long)local_4f28 * 4);
      uVar3 = _Contains(local_4f10,iVar1 + local_4f24,local_4f1c);
      if ((uVar3 & 1) != 0) break;
      lVar4 = (long)local_4f1c;
      local_4f1c = local_4f1c + 1;
      local_4f10[lVar4] = iVar1 + local_4f24;
      local_4f28 = local_4f28 + 1;
    }
  } while( true );
}



undefined4 entry(void)

{
  int local_38;
  int local_34;
  
  _clock();
  _MianChowla();
  _clock();
  _printf("The first 30 terms of the Mian-Chowla sequence are:\n");
  for (local_34 = 0; local_34 < 0x1e; local_34 = local_34 + 1) {
    _printf("%d ");
  }
  _printf("\n\nTerms 91 to 100 of the Mian-Chowla sequence are:\n");
  for (local_38 = 0x5a; local_38 < 100; local_38 = local_38 + 1) {
    _printf("%d ");
  }
  _printf("\n\nComputation time was %f seconds.");
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003ee4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004008)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

clock_t _clock(void)

{
  clock_t cVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ef0. Too many branches
                    // WARNING: Treating indirect jump as call
  cVar1 = (*(code *)PTR__clock_100004018)();
  return cVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003efc. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004020)((int)param_1);
  return iVar1;
}


