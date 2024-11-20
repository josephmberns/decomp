#include "top-rank-per-group.h"



uint _pcmp(long param_1,long param_2)

{
  undefined4 local_40;
  undefined4 local_14;
  
  local_14 = _strcmp(*(char **)(param_1 + 0x10),*(char **)(param_2 + 0x10));
  if (local_14 == 0) {
    if (*(int *)(param_2 + 0x18) < *(int *)(param_1 + 0x18)) {
      local_40 = 0xffffffff;
    }
    else {
      local_40 = (uint)(*(int *)(param_1 + 0x18) < *(int *)(param_2 + 0x18));
    }
    local_14 = local_40;
  }
  return local_14;
}



void _top(int param_1)

{
  int iVar1;
  int local_1c;
  uint local_18;
  
  _qsort(&_ppl,0xd,0x20,(int *)_pcmp);
  local_1c = 0;
  for (local_18 = 0; local_18 < 0xd; local_18 = local_18 + 1) {
    if (local_18 != 0) {
      iVar1 = _strcmp((&PTR_s_D101_100008010)[(long)(int)local_18 * 4],
                      (&PTR_s_D101_100008010)[(long)(int)(local_18 - 1) * 4]);
      if (iVar1 != 0) {
        local_1c = 0;
        _printf("\n");
      }
    }
    if (local_1c < param_1) {
      _printf("%s %d: %s\n");
    }
    local_1c = local_1c + 1;
  }
  return;
}



undefined4 entry(void)

{
  _top(2);
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e60. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _qsort(void *param_1,size_t param_2,size_t param_3,int *param_4)

{
                    // WARNING: Could not recover jumptable at 0x000100003e6c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__qsort_100004008)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _strcmp(char *param_1,char *param_2)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e78. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__strcmp_100004010)((int)param_1);
  return iVar1;
}


