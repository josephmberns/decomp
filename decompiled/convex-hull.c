#include "convex-hull.h"



bool _ccw(int *param_1,int *param_2,int *param_3)

{
  return (param_2[1] - param_1[1]) * (*param_3 - *param_1) <
         (*param_2 - *param_1) * (param_3[1] - param_1[1]);
}



undefined4 _comparePoints(int *param_1,int *param_2)

{
  undefined4 local_4;
  
  if (*param_1 < *param_2) {
    local_4 = 0xffffffff;
  }
  else if (*param_2 < *param_1) {
    local_4 = 1;
  }
  else if (param_1[1] < param_2[1]) {
    local_4 = 0xffffffff;
  }
  else if (param_2[1] < param_1[1]) {
    local_4 = 1;
  }
  else {
    local_4 = 0;
  }
  return local_4;
}



void _fatal(void)

{
  _fprintf(*(FILE **)PTR____stderrp_100004018,"%s\n");
                    // WARNING: Subroutine does not return
  _exit(1);
}



void * _xmalloc(size_t param_1)

{
  void *pvVar1;
  
  pvVar1 = _malloc(param_1);
  if (pvVar1 == (void *)0x0) {
    _fatal("Out of memory");
  }
  return pvVar1;
}



void * _xrealloc(void *param_1,size_t param_2)

{
  void *pvVar1;
  
  pvVar1 = _realloc(param_1,param_2);
  if (pvVar1 == (void *)0x0) {
    _fatal("Out of memory");
  }
  return pvVar1;
}



int _printPoints(long param_1,int param_2)

{
  int iVar1;
  ulong local_28;
  
  _printf("[");
  if (0 < param_2) {
    _printf("(%d, %d)");
    for (local_28 = param_1 + 8; local_28 < (ulong)(param_1 + (long)param_2 * 8);
        local_28 = local_28 + 8) {
      _printf(", (%d, %d)");
    }
  }
  iVar1 = _printf("]");
  return iVar1;
}



undefined8 _convexHull(void *param_1,int param_2,int *param_3)

{
  int iVar1;
  long lVar2;
  uint local_5c;
  uint local_50;
  long local_48;
  int local_3c;
  int local_38;
  int local_34;
  undefined8 local_18;
  
  if (param_2 == 0) {
    *param_3 = 0;
    local_18 = 0;
  }
  else {
    local_38 = 0;
    local_3c = 4;
    local_48 = _xmalloc(0x20);
    _qsort(param_1,(long)param_2,8,(int *)_comparePoints);
    for (local_34 = 0; local_34 < param_2; local_34 = local_34 + 1) {
      while( true ) {
        local_50 = 0;
        if (1 < local_38) {
          local_50 = _ccw(local_48 + (long)(local_38 + -2) * 8,local_48 + (long)(local_38 + -1) * 8,
                          (void *)((long)param_1 + (long)local_34 * 8));
          local_50 = local_50 ^ 1;
        }
        if ((local_50 & 1) == 0) break;
        local_38 = local_38 + -1;
      }
      if (local_38 == local_3c) {
        local_3c = local_3c << 1;
        local_48 = _xrealloc(local_48,(long)local_3c << 3);
      }
      if (local_38 < 0 || local_3c <= local_38) {
                    // WARNING: Subroutine does not return
        ___assert_rtn("convexHull","convex-hull.c",0x50,"size >= 0 && size < capacity");
      }
      lVar2 = (long)local_38;
      local_38 = local_38 + 1;
      *(undefined8 *)(local_48 + lVar2 * 8) = *(undefined8 *)((long)param_1 + (long)local_34 * 8);
    }
    iVar1 = local_38 + 1;
    for (local_34 = param_2 + -1; -1 < local_34; local_34 = local_34 + -1) {
      while( true ) {
        local_5c = 0;
        if (iVar1 <= local_38) {
          local_5c = _ccw(local_48 + (long)(local_38 + -2) * 8,local_48 + (long)(local_38 + -1) * 8,
                          (void *)((long)param_1 + (long)local_34 * 8));
          local_5c = local_5c ^ 1;
        }
        if ((local_5c & 1) == 0) break;
        local_38 = local_38 + -1;
      }
      if (local_38 == local_3c) {
        local_3c = local_3c << 1;
        local_48 = _xrealloc(local_48,(long)local_3c << 3);
      }
      if (local_38 < 0 || local_3c <= local_38) {
                    // WARNING: Subroutine does not return
        ___assert_rtn("convexHull","convex-hull.c",0x5d,"size >= 0 && size < capacity");
      }
      lVar2 = (long)local_38;
      local_38 = local_38 + 1;
      *(undefined8 *)(local_48 + lVar2 * 8) = *(undefined8 *)((long)param_1 + (long)local_34 * 8);
    }
    local_38 = local_38 + -1;
    if (local_38 < 0) {
                    // WARNING: Subroutine does not return
      ___assert_rtn("convexHull","convex-hull.c",0x61,"size >= 0");
    }
    local_18 = _xrealloc(local_48,(long)local_38 << 3);
    *param_3 = local_38;
  }
  return local_18;
}



undefined8 entry(void)

{
  void *pvVar1;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined auStack_b8 [160];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004010;
  local_bc = 0;
  _memcpy(auStack_b8,&DAT_100003ef8,0xa0);
  pvVar1 = (void *)_convexHull(auStack_b8,0x14,&local_c0);
  _printf("Convex Hull: ");
  _printPoints(pvVar1,local_c0);
  _printf("\n");
  _free(pvVar1);
  if (*(long *)PTR____stack_chk_guard_100004010 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail();
  }
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void ___assert_rtn(char *param_1,char *param_2,int param_3,char *param_4)

{
                    // WARNING: Could not recover jumptable at 0x000100003e0c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____assert_rtn_100004000)(param_1,param_2,param_3);
  return;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003e18. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004008)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _exit(int param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003e24. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__exit_100004020)(param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fprintf(FILE *param_1,char *param_2,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e30. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fprintf_100004028)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003e3c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004030)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e48. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004038)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _memcpy(void *param_1,void *param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e54. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__memcpy_100004040)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e60. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004048)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _qsort(void *param_1,size_t param_2,size_t param_3,int *param_4)

{
                    // WARNING: Could not recover jumptable at 0x000100003e6c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__qsort_100004050)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _realloc(void *param_1,size_t param_2)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e78. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__realloc_100004058)();
  return pvVar1;
}


