#include "non-decimal-radices-convert.h"



undefined * _to_base(ulong param_1,int param_2)

{
  ulong uVar1;
  uint uVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  ulong local_a8;
  int local_98;
  uint local_94;
  ulong local_90;
  undefined *local_68;
  char acStack_5a [66];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  _memset(acStack_5a,0,0x42);
  local_98 = 0;
  if (param_2 < 0x25) {
    uVar2 = (uint)((long)param_1 < 0);
    local_a8 = param_1;
    if ((long)param_1 < 0) {
      local_a8 = ~param_1 + 1;
    }
    local_90 = local_a8;
    do {
      uVar5 = (ulong)param_2;
      uVar1 = 0;
      if (uVar5 != 0) {
        uVar1 = local_90 / uVar5;
      }
      lVar4 = (long)local_98;
      local_98 = local_98 + 1;
      acStack_5a[lVar4] = "0123456789abcdefghijklmnopqrstuvwxyz"[local_90 - uVar1 * uVar5];
      uVar1 = 0;
      if ((long)param_2 != 0) {
        uVar1 = local_90 / (ulong)(long)param_2;
      }
      local_90 = uVar1;
    } while (uVar1 != 0);
    puVar3 = (undefined *)_malloc((long)(int)(local_98 + uVar2 + 1));
    local_94 = uVar2;
    while (0 < local_98) {
      local_98 = local_98 + -1;
      puVar3[(int)local_94] = acStack_5a[local_98];
      local_94 = local_94 + 1;
    }
    local_68 = puVar3;
    if (uVar2 != 0) {
      *puVar3 = 0x2d;
    }
  }
  else {
    uVar2 = _fprintf(*(FILE **)PTR____stderrp_100004010,"base %d too large\n");
    puVar3 = (undefined *)(ulong)uVar2;
    local_68 = (undefined *)0x0;
  }
  if (*(long *)PTR____stack_chk_guard_100004008 == local_18) {
    return local_68;
  }
                    // WARNING: Subroutine does not return
  ___stack_chk_fail(puVar3);
}



long _from_base(char *param_1,int param_2)

{
  long lVar1;
  char *pcStack_28;
  int local_1c;
  char *local_18;
  
  local_1c = param_2;
  local_18 = param_1;
  lVar1 = _strtol(param_1,&pcStack_28,param_2);
  return (long)(int)lVar1;
}



undefined4 entry(void)

{
  _to_base(0x8000000000000000,2);
  _printf("%lld in base 2: %s\n");
  _to_base(0x17f,0x10);
  _printf("%lld in base 16: %s\n");
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f04. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fprintf(FILE *param_1,char *param_2,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f10. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fprintf_100004018)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f1c. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004020)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _memset(void *param_1,int param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f28. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__memset_100004028)(param_1,param_2);
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f34. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004030)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

long _strtol(char *param_1,char **param_2,int param_3)

{
  long lVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f40. Too many branches
                    // WARNING: Treating indirect jump as call
  lVar1 = (*(code *)PTR__strtol_100004038)(param_1,param_2,param_3);
  return lVar1;
}


