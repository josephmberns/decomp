#include "last-friday-of-each-month.h"



undefined4 entry(int param_1,long param_2)

{
  uint uVar1;
  void *pvVar2;
  uint local_6c;
  uint local_68;
  int local_5c;
  undefined4 local_4c;
  undefined auStack_48 [4];
  int local_44;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  pvVar2 = _memcpy(auStack_48,&DAT_100003f6c,0x30);
  if (1 < param_1) {
    uVar1 = _atoi(*(char **)(param_2 + 8));
    pvVar2 = (void *)(ulong)uVar1;
    if (0x6a4 < (int)uVar1) {
      local_68 = 1;
      if ((int)uVar1 % 4 == 0) {
        local_6c = 0;
        if ((int)uVar1 % 100 == 0) {
          local_6c = (uint)((int)uVar1 % 400 != 0);
        }
        local_68 = local_6c;
      }
      local_44 = local_44 - local_68;
      for (local_5c = 0; local_5c < 0xc; local_5c = local_5c + 1) {
        uVar1 = _printf("%d-%02d-%d\n");
        pvVar2 = (void *)(ulong)uVar1;
      }
      local_4c = 0;
      goto LAB_100003f00;
    }
  }
  local_4c = 1;
LAB_100003f00:
  if (*(long *)PTR____stack_chk_guard_100004008 == local_18) {
    return local_4c;
  }
                    // WARNING: Subroutine does not return
  ___stack_chk_fail(pvVar2);
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f44. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _atoi(char *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f50. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__atoi_100004010)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _memcpy(void *param_1,void *param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f5c. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__memcpy_100004018)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f68. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004020)((int)param_1);
  return iVar1;
}


