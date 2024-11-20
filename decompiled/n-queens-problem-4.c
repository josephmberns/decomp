#include "n-queens-problem-4.h"



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _solve(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint local_258;
  uint local_254;
  uint local_24c;
  uint *local_248;
  uint local_23c;
  int local_234;
  undefined auStack_22c [4];
  uint local_228 [32];
  uint auStack_1a8 [32];
  uint auStack_128 [32];
  uint auStack_a8 [32];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100004008;
  local_234 = 0;
  uVar4 = -(1 << (ulong)(0x20U - param_1 & 0x1f));
  _memset(auStack_22c,0,0x84);
  uVar2 = param_1 - 3;
  local_254 = 1 << (ulong)(0x1d - uVar2 & 0x1f);
  do {
    if (local_254 == 0) {
      __count = local_234 << 1;
      if (*(long *)PTR____stack_chk_guard_100004008 == local_28) {
        return;
      }
                    // WARNING: Subroutine does not return
      ___stack_chk_fail();
    }
    for (local_258 = local_254 << 2; local_258 != 0; local_258 = local_258 << 1) {
      auStack_1a8[(int)uVar2] = local_254 | local_258;
      auStack_a8[(int)uVar2] = local_258 << 1 | local_254 << 2;
      auStack_128[(int)uVar2] = local_258 >> 1 | local_254 >> 2;
      local_23c = uVar4 & ((auStack_a8[(int)uVar2] | auStack_128[(int)uVar2] |
                           auStack_1a8[(int)uVar2]) ^ 0xffffffff);
      local_228[0] = local_23c;
      local_24c = uVar2;
      local_248 = local_228;
      while (local_23c != 0) {
        do {
          if (local_24c == 0) goto LAB_100003da0;
          uVar1 = -local_23c & local_23c;
          if ((local_23c & ~uVar1) != 0) {
            *local_248 = local_23c & (uVar1 ^ 0xffffffff) | local_24c;
            local_248 = local_248 + 1;
          }
          uVar3 = local_24c - 1;
          auStack_a8[uVar3] = (auStack_a8[local_24c] | uVar1) << 1;
          auStack_128[uVar3] = (auStack_128[local_24c] | uVar1) >> 1;
          auStack_1a8[uVar3] = auStack_1a8[local_24c] | uVar1;
          local_23c = uVar4 & ((auStack_a8[uVar3] | auStack_128[uVar3] | auStack_1a8[uVar3]) ^
                              0xffffffff);
          if (local_23c == 0) goto LAB_100003da0;
          local_24c = uVar3;
        } while (uVar3 != 0);
        local_234 = local_234 + 1;
LAB_100003da0:
        local_24c = local_248[-1] & 0x1f;
        local_23c = local_248[-1] & 0xffffffe0;
        local_248 = local_248 + -1;
      }
    }
    local_254 = local_254 << 1;
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 entry(int param_1,long param_2)

{
  int local_24;
  
  if ((param_1 < 2) || (local_24 = _atoi(*(char **)(param_2 + 8)), local_24 < 1)) {
    local_24 = 8;
  }
  if (local_24 < 0x1c) {
    if (local_24 < 4) {
      __count = (uint)(local_24 == 1);
    }
    else {
      _solve(local_24);
    }
    _printf("\nSolutions: %d\n");
    return 0;
  }
  _fprintf(*(FILE **)PTR____stderrp_100004010,"Value too large, abort\n");
                    // WARNING: Subroutine does not return
  _exit(1);
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f38. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _atoi(char *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f44. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__atoi_100004018)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _exit(int param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f50. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__exit_100004020)(param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fprintf(FILE *param_1,char *param_2,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f5c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fprintf_100004028)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _memset(void *param_1,int param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f68. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__memset_100004030)(param_1,param_2);
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f74. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004038)((int)param_1);
  return iVar1;
}


