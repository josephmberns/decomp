#include "matrix_chain_order.h"



undefined4 _matrixChainOrder(int param_1,long param_2,long param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  long *plVar4;
  void *pvVar5;
  int local_54;
  int local_48;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  
  plVar4 = (long *)_malloc((long)param_1 << 3);
  for (local_34 = 0; local_34 < param_1; local_34 = local_34 + 1) {
    pvVar5 = _malloc((long)param_1 << 2);
    plVar4[local_34] = (long)pvVar5;
  }
  for (local_38 = 0; local_38 < param_1; local_38 = local_38 + 1) {
    *(undefined4 *)(plVar4[local_38] + (long)local_38 * 4) = 0;
  }
  for (local_3c = 1; local_3c < param_1; local_3c = local_3c + 1) {
    for (local_40 = 0; local_40 < param_1 - local_3c; local_40 = local_40 + 1) {
      iVar1 = local_40 + local_3c;
      *(undefined4 *)(plVar4[local_40] + (long)iVar1 * 4) = 0x7fffffff;
      for (local_48 = local_40; local_48 < iVar1; local_48 = local_48 + 1) {
        iVar2 = *(int *)(plVar4[local_40] + (long)local_48 * 4) +
                *(int *)(plVar4[local_48 + 1] + (long)iVar1 * 4) +
                *(int *)(param_2 + (long)local_40 * 4) * *(int *)(param_2 + (long)local_48 * 4) *
                *(int *)(param_2 + (long)iVar1 * 4);
        if (iVar2 < *(int *)(plVar4[local_40] + (long)iVar1 * 4)) {
          *(int *)(plVar4[local_40] + (long)iVar1 * 4) = iVar2;
          *(int *)(param_3 + (long)(local_40 * param_1 + iVar1) * 4) = local_48;
        }
      }
    }
  }
  uVar3 = *(undefined4 *)(*plVar4 + (long)(param_1 + -1) * 4);
  for (local_54 = 0; local_54 < param_1; local_54 = local_54 + 1) {
    _free((void *)plVar4[local_54]);
  }
  _free(plVar4);
  return uVar3;
}



int _printSolution(int param_1,long param_2,int param_3,int param_4)

{
  int iVar1;
  
  if (param_3 == param_4) {
    iVar1 = _printf("A%d");
  }
  else {
    _putchar(0x28);
    _printSolution(param_1,param_2,param_3,
                   *(undefined4 *)(param_2 + (long)(param_3 * param_1 + param_4) * 4));
    _printSolution(param_1,param_2,*(int *)(param_2 + (long)(param_3 * param_1 + param_4) * 4) + 1,
                   param_4);
    iVar1 = _putchar(0x29);
  }
  return iVar1;
}



undefined4 entry(void)

{
  FUN_100003dbc();
  return 0;
}



void FUN_100003dbc(void)

{
  int iVar1;
  void *pvVar2;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004010;
  uStack_28 = 0xa00000005;
  local_30 = 0xf00000023;
  local_20 = 0x1900000014;
  pvVar2 = _malloc(0x90);
  iVar1 = _matrixChainOrder(6,&local_30,pvVar2);
  if (iVar1 != 0x48c1) {
                    // WARNING: Subroutine does not return
    ___assert_rtn("test","matrix_chain_order.c",0x66,"r == 18625");
  }
  _printf("Result : %d\n");
  _printf("Optimal ordering : ");
  _printSolution(6,pvVar2,0,5);
  _free(pvVar2);
  iVar1 = _printf("\n");
  if (*(long *)PTR____stack_chk_guard_100004010 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(iVar1);
  }
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void ___assert_rtn(char *param_1,char *param_2,int param_3,char *param_4)

{
                    // WARNING: Could not recover jumptable at 0x000100003f04. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____assert_rtn_100004000)(param_1,param_2,param_3);
  return;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f10. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004008)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f1c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004018)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f28. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004020)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f34. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004028)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _putchar(int param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f40. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__putchar_100004030)(param_1);
  return iVar1;
}


