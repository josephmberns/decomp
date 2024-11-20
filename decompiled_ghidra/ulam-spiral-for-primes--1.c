#include "ulam-spiral-for-primes--1.h"



bool _sieve_check(long param_1,uint param_2)

{
  bool bVar1;
  
  if (((param_2 == 2) || ((param_2 & 1) != 0)) && (1 < param_2)) {
    bVar1 = (*(uint *)(param_1 + (ulong)(param_2 >> 6) * 4) & 1 << (ulong)(param_2 >> 1 & 0x1f)) ==
            0;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



void * _sieve(uint param_1)

{
  uint *puVar1;
  void *pvVar2;
  double dVar3;
  double dVar4;
  undefined4 local_1c;
  undefined4 local_18;
  
  pvVar2 = _calloc((ulong)((param_1 >> 6) + 1),4);
  local_18 = 3;
  while( true ) {
    dVar3 = (double)NEON_ucvtf((ulong)local_18);
    dVar4 = (double)NEON_ucvtf((ulong)param_1);
    if (SQRT(dVar4) < dVar3) break;
    if ((*(uint *)((long)pvVar2 + (ulong)(local_18 >> 6) * 4) & 1 << (ulong)(local_18 >> 1 & 0x1f))
        == 0) {
      for (local_1c = local_18 * local_18; local_1c < param_1; local_1c = local_1c + local_18 * 2) {
        puVar1 = (uint *)((long)pvVar2 + (ulong)(local_1c >> 6) * 4);
        *puVar1 = *puVar1 | 1 << (ulong)(local_1c >> 1 & 0x1f);
      }
    }
    local_18 = local_18 + 2;
  }
  return pvVar2;
}



int _ulam_get_map(int param_1,int param_2,int param_3)

{
  int iVar1;
  double dVar2;
  int local_34;
  int local_30;
  
  param_1 = param_1 - (param_3 + -1) / 2;
  param_2 = param_2 - param_3 / 2;
  iVar1 = _abs(param_1);
  local_30 = _abs(param_2);
  if (local_30 < iVar1) {
    local_30 = iVar1;
  }
  if (param_2 < param_1) {
    local_34 = (local_30 * 2 - param_1) - param_2;
  }
  else {
    local_34 = local_30 * 6 + param_1 + param_2;
  }
  dVar2 = (double)_pow((double)(local_30 * 2 + -1),0x4000000000000000);
  return (int)(dVar2 + (double)(long)local_34);
}



void _output_ulam_spiral(int param_1,char param_2)

{
  undefined4 uVar1;
  int iVar2;
  void *pvVar3;
  int local_38;
  int local_34;
  
  param_1 = param_1 - (uint)(param_1 % 2 == 0);
  _log10((double)(param_1 * param_1));
  pvVar3 = (void *)_sieve(param_1 * param_1 + 1);
  for (local_34 = 0; local_34 < param_1; local_34 = local_34 + 1) {
    for (local_38 = 0; local_38 < param_1; local_38 = local_38 + 1) {
      uVar1 = _ulam_get_map(local_38,local_34,param_1);
      if (param_2 == '\0') {
        iVar2 = _sieve_check(pvVar3,uVar1);
        if (iVar2 == 0) {
          _printf("%.*s ");
        }
        else {
          _printf("%*d ");
        }
      }
      else {
        _sieve_check(pvVar3,uVar1);
        _printf("%c");
      }
    }
    _printf("\n");
  }
  _free(pvVar3);
  return;
}



undefined4 entry(int param_1,long param_2)

{
  int local_28;
  
  if (param_1 < 2) {
    local_28 = 9;
  }
  else {
    local_28 = _atoi(*(char **)(param_2 + 8));
  }
  _output_ulam_spiral(local_28);
  _printf("\n");
  _output_ulam_spiral(local_28,0x23);
  _printf("\n");
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _abs(int param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f30. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__abs_100004000)(param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _atoi(char *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f3c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__atoi_100004008)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _calloc(size_t param_1,size_t param_2)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f48. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__calloc_100004010)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f54. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004018)();
  return;
}



void _log10(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f60. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__log10_100004020)();
  return;
}



void _pow(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f6c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__pow_100004028)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f78. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004030)((int)param_1);
  return iVar1;
}


