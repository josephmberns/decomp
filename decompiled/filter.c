#include "filter.h"



bool _even_sel(uint param_1)

{
  return (param_1 & 1) == 0;
}



int _tri_sel(int param_1)

{
  return param_1 % 3;
}



void * _grep(void *param_1,int param_2,int *param_3,code *param_4,int param_5)

{
  int iVar1;
  long lVar2;
  void *local_48;
  int local_3c;
  int local_38;
  
  local_48 = param_1;
  if (param_5 == 0) {
    local_48 = _malloc((long)param_2 * 4);
  }
  local_3c = 0;
  for (local_38 = 0; local_38 < param_2; local_38 = local_38 + 1) {
    iVar1 = (*param_4)(*(undefined4 *)((long)param_1 + (long)local_38 * 4));
    if (iVar1 != 0) {
      lVar2 = (long)local_3c;
      local_3c = local_3c + 1;
      *(undefined4 *)((long)local_48 + lVar2 * 4) =
           *(undefined4 *)((long)param_1 + (long)local_38 * 4);
    }
  }
  if ((param_5 == 0) && (local_3c < param_2)) {
    local_48 = _realloc(local_48,(long)local_3c * 4);
  }
  *param_3 = local_3c;
  return local_48;
}



undefined8 entry(void)

{
  int iVar1;
  int local_4c;
  int local_48;
  undefined4 local_44;
  undefined auStack_40 [40];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  local_44 = 0;
  _memcpy(auStack_40,&DAT_100003f3c,0x28);
  _grep(auStack_40,10,&local_4c,_even_sel,0);
  _printf("Filtered even:");
  for (local_48 = 0; local_48 < local_4c; local_48 = local_48 + 1) {
    _printf(" %d");
  }
  _printf("\n");
  _grep(auStack_40,8,&local_4c,_tri_sel,1);
  _printf("In-place filtered not multiple of 3:");
  for (local_48 = 0; local_48 < local_4c; local_48 = local_48 + 1) {
    _printf(" %d");
  }
  iVar1 = _printf("\n");
  if (*(long *)PTR____stack_chk_guard_100004008 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(iVar1);
  }
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f08. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f14. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004010)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _memcpy(void *param_1,void *param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f20. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__memcpy_100004018)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f2c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004020)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _realloc(void *param_1,size_t param_2)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f38. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__realloc_100004028)();
  return pvVar1;
}


