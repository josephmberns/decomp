#include "iterated-digits-squaring-1.h"



undefined4 _is89(int param_1)

{
  int local_c;
  int local_8;
  
  local_8 = param_1;
  while( true ) {
    local_c = 0;
    do {
      local_c = local_c + (local_8 % 10) * (local_8 % 10);
      local_8 = local_8 / 10;
    } while (local_8 != 0);
    if (local_c == 0x59) break;
    local_8 = local_c;
    if (local_c == 1) {
      return 0;
    }
  }
  return 1;
}



undefined8 entry(void)

{
  int iVar1;
  int local_5154;
  long local_5150;
  int local_5140;
  int local_513c;
  int local_5138;
  ulong local_5130 [2593];
  long local_28;
  
  (*(code *)PTR____chkstk_darwin_100004000)();
  local_28 = *(long *)PTR____stack_chk_guard_100004010;
  _bzero(local_5130,0x5108);
  local_5130[0] = 1;
  local_5138 = 1;
  do {
    for (local_513c = local_5138 * 0x51; local_513c != 0; local_513c = local_513c + -1) {
      for (local_5140 = 1; (local_5140 < 10 && (local_5140 * local_5140 <= local_513c));
          local_5140 = local_5140 + 1) {
        local_5130[local_513c] =
             local_5130[local_513c] + local_5130[local_513c - local_5140 * local_5140];
      }
    }
    local_5150 = 0;
    for (local_5154 = 1; local_5154 < local_5138 * 0x51 + 1; local_5154 = local_5154 + 1) {
      iVar1 = _is89(local_5154);
      if (iVar1 != 0) {
        if (-local_5150 - 1U < local_5130[local_5154]) {
          iVar1 = _printf("counter overflow for 10^%d\n");
          if (*(long *)PTR____stack_chk_guard_100004010 == local_28) {
            return 0;
          }
                    // WARNING: Subroutine does not return
          ___stack_chk_fail(iVar1);
        }
        local_5150 = local_5150 + local_5130[local_5154];
      }
    }
    _printf("1->10^%d: %llu\n");
    local_5138 = local_5138 + 1;
  } while( true );
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f58. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004008)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _bzero(void *param_1,size_t param_2)

{
                    // WARNING: Could not recover jumptable at 0x000100003f64. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__bzero_100004018)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f70. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004020)((int)param_1);
  return iVar1;
}


