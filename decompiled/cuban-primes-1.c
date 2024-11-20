#include "cuban-primes-1.h"



void _allocate(undefined8 *param_1)

{
  void *pvVar1;
  
  param_1[1] = 0;
  param_1[2] = 10;
  pvVar1 = _malloc(param_1[2] << 3);
  *param_1 = pvVar1;
  return;
}



void _deallocate(undefined8 *param_1)

{
  _free((void *)*param_1);
  *param_1 = 0;
  return;
}



void _push_back(long *param_1,undefined8 param_2)

{
  void *pvVar1;
  long lVar2;
  
  if ((ulong)param_1[2] <= (ulong)param_1[1]) {
    lVar2 = (ulong)(param_1[2] * 3) / 2 + 1;
    pvVar1 = _realloc((void *)*param_1,lVar2 * 8);
    if (pvVar1 == (void *)0x0) {
      _fprintf(*(FILE **)PTR____stderrp_100004000,"Failed to reallocate the prime array.");
                    // WARNING: Subroutine does not return
      _exit(1);
    }
    *param_1 = (long)pvVar1;
    param_1[2] = lVar2;
  }
  lVar2 = param_1[1];
  param_1[1] = lVar2 + 1;
  *(undefined8 *)(*param_1 + lVar2 * 8) = param_2;
  return;
}



undefined8 entry(void)

{
  long lVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  long local_80;
  ulong local_78;
  long local_60;
  long local_58;
  long local_50;
  int local_44;
  long local_40;
  ulong local_38;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_14 = 0;
  local_18 = 200;
  local_1c = 100000;
  local_20 = 0x32;
  local_24 = 2000;
  _allocate();
  local_44 = 0;
  bVar3 = true;
  local_50 = 0;
  local_58 = 1;
  _push_back(&local_40,3);
  _push_back(&local_40,5);
  _printf("The first %d cuban primes:\n");
  for (local_60 = 1; local_60 < 0x7fffffffffffffff; local_60 = local_60 + 1) {
    bVar2 = false;
    local_50 = local_50 + 6;
    local_58 = local_58 + local_50;
    local_78 = 0;
    while( true ) {
      if ((local_38 <= local_78) ||
         ((long)SQRT((double)local_58) < *(long *)(local_40 + local_78 * 8))) goto LAB_100003c78;
      lVar4 = *(long *)(local_40 + local_78 * 8);
      lVar1 = 0;
      if (lVar4 != 0) {
        lVar1 = local_58 / lVar4;
      }
      if (local_58 == lVar1 * lVar4) break;
      local_78 = local_78 + 1;
    }
    bVar2 = true;
LAB_100003c78:
    if (!bVar2) {
      local_44 = local_44 + 1;
      if (bVar3) {
        local_80 = *(long *)(local_40 + (local_38 - 1) * 8);
        while (local_80 = local_80 + 2, local_80 <= local_58 + -2) {
          bVar2 = false;
          local_78 = 0;
          while( true ) {
            if ((local_38 <= local_78) ||
               ((long)SQRT((double)local_58) < *(long *)(local_40 + local_78 * 8)))
            goto LAB_100003d68;
            lVar4 = *(long *)(local_40 + local_78 * 8);
            lVar1 = 0;
            if (lVar4 != 0) {
              lVar1 = local_80 / lVar4;
            }
            if (local_80 == lVar1 * lVar4) break;
            local_78 = local_78 + 1;
          }
          bVar2 = true;
LAB_100003d68:
          if (!bVar2) {
            _push_back(&local_40,local_80);
          }
        }
        _push_back(&local_40,local_58);
        _printf("%11lld");
        if (local_44 % 10 == 0) {
          _printf("\n");
        }
        if (local_44 == 200) {
          bVar3 = false;
          _printf("\nProgress to the %dth cuban prime: ");
        }
      }
      if ((local_44 % 2000 == 0) && (_printf("."), local_44 == 100000)) break;
    }
  }
  _printf("\nThe %dth cuban prime is %lld\n");
  _deallocate(&local_40);
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _exit(int param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003ed8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__exit_100004008)(param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fprintf(FILE *param_1,char *param_2,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ee4. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fprintf_100004010)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003ef0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004018)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003efc. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004020)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f08. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004028)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _realloc(void *param_1,size_t param_2)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f14. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__realloc_100004030)();
  return pvVar1;
}


