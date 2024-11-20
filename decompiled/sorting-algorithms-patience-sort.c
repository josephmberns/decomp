#include "sorting-algorithms-patience-sort.h"



void * _patienceSort(long param_1,uint param_2)

{
  void *local_90;
  undefined *local_88;
  ulong local_80;
  ulong local_78;
  ulong local_70;
  void *local_68;
  void *local_60;
  int *local_58;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  ulong local_38;
  undefined *local_30;
  uint local_24;
  long local_20;
  long local_18;
  
  local_30 = (undefined *)&local_90;
  local_18 = *(long *)PTR____stack_chk_guard_100004010;
  local_70 = (ulong)param_2;
  local_80 = (ulong)param_2;
  local_78 = local_70 * local_80 * 4 + 0xf & 0xfffffffffffffff0;
  local_24 = param_2;
  local_20 = param_1;
  (*(code *)PTR____chkstk_darwin_100004000)();
  local_68 = (void *)((long)&local_90 - local_78);
  local_38 = local_70;
  local_58 = (int *)_calloc(4,(long)(int)local_24);
  local_60 = _malloc((long)(int)local_24 << 2);
  local_44 = 0;
  do {
    if ((int)local_24 <= local_44) {
      local_4c = *(int *)((long)local_68 + (long)(*local_58 + -1) * 4);
      local_50 = 0;
      local_44 = 0;
      do {
        if ((int)local_24 <= local_44) {
          _free(local_58);
          _free(local_68);
          local_90 = local_60;
          local_88 = local_30;
          if (*(long *)PTR____stack_chk_guard_100004010 == local_18) {
            return local_60;
          }
                    // WARNING: Subroutine does not return
          ___stack_chk_fail();
        }
        for (local_48 = 0; local_48 < (int)local_24; local_48 = local_48 + 1) {
          if ((0 < local_58[local_48]) &&
             (*(int *)((long)local_68 +
                      (long)(local_58[local_48] + -1) * 4 + (long)local_48 * local_80 * 4) <
              local_4c)) {
            local_4c = *(int *)((long)local_68 +
                               (long)(local_58[local_48] + -1) * 4 + (long)local_48 * local_80 * 4);
            local_50 = local_48;
          }
        }
        *(int *)((long)local_60 + (long)local_44 * 4) = local_4c;
        local_58[local_50] = local_58[local_50] + -1;
        for (local_48 = 0; local_48 < (int)local_24; local_48 = local_48 + 1) {
          if (0 < local_58[local_48]) {
            local_4c = *(int *)((long)local_68 +
                               (long)(local_58[local_48] + -1) * 4 + (long)local_48 * local_80 * 4);
            local_50 = local_48;
            break;
          }
        }
        local_44 = local_44 + 1;
      } while( true );
    }
    for (local_48 = 0; local_48 < (int)local_24; local_48 = local_48 + 1) {
      if ((local_58[local_48] == 0) ||
         ((0 < local_58[local_48] &&
          (*(int *)(local_20 + (long)local_44 * 4) <=
           *(int *)((long)local_68 +
                   (long)(local_58[local_48] + -1) * 4 + (long)local_48 * local_80 * 4))))) {
        *(undefined4 *)
         ((long)local_68 + (long)local_58[local_48] * 4 + (long)local_48 * local_80 * 4) =
             *(undefined4 *)(local_20 + (long)local_44 * 4);
        local_58[local_48] = local_58[local_48] + 1;
        break;
      }
    }
    local_44 = local_44 + 1;
  } while( true );
}



undefined8 entry(int param_1,long param_2)

{
  int iVar1;
  void *pvVar2;
  int local_34;
  
  if (param_1 == 0) {
    _printf("Usage : %s <integers to be sorted separated by space>");
  }
  else {
    pvVar2 = _malloc((long)(param_1 + -1) << 2);
    for (local_34 = 1; local_34 <= param_1; local_34 = local_34 + 1) {
      iVar1 = _atoi(*(char **)(param_2 + (long)local_34 * 8));
      *(int *)((long)pvVar2 + (long)(local_34 + -1) * 4) = iVar1;
    }
    _patienceSort(pvVar2,param_1 + -1);
    for (local_34 = 0; local_34 < param_1 + -1; local_34 = local_34 + 1) {
      _printf("%d ");
    }
  }
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f2c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004008)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _atoi(char *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f38. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__atoi_100004018)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _calloc(size_t param_1,size_t param_2)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f44. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__calloc_100004020)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f50. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004028)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f5c. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004030)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f68. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004038)((int)param_1);
  return iVar1;
}


