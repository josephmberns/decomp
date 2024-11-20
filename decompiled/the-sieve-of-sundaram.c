#include "the-sieve-of-sundaram.h"



undefined4 entry(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  double dVar5;
  double dVar6;
  int local_24;
  int local_20;
  
  dVar5 = (double)_log(0x412e848000000000);
  _log(0x412e848000000000);
  dVar6 = (double)_log();
  iVar2 = ((int)(((dVar5 + dVar6) - 0.9385) * 1000000.0) + -2) / 2;
  pvVar4 = _calloc((long)(iVar2 + 1),4);
  for (local_20 = 0; local_20 <= iVar2; local_20 = local_20 + 1) {
    *(int *)((long)pvVar4 + (long)local_20 * 4) = local_20 * 2 + 1;
  }
  for (local_20 = 1; iVar1 = (local_20 + 1) * local_20,
      iVar2 + iVar1 * -2 < 0 == SBORROW4(iVar2,iVar1 * 2); local_20 = local_20 + 1) {
    local_24 = local_20;
    while( true ) {
      iVar1 = local_20 * 2 + 1;
      iVar3 = 0;
      if (iVar1 != 0) {
        iVar3 = (iVar2 - local_20) / iVar1;
      }
      if (iVar3 < local_24) break;
      iVar1 = local_20 + local_24 + local_20 * 2 * local_24;
      if (*(int *)((long)pvVar4 + (long)iVar1 * 4) != 0) {
        *(undefined4 *)((long)pvVar4 + (long)iVar1 * 4) = 0;
      }
      local_24 = local_24 + 1;
    }
  }
  local_20 = 1;
  local_24 = 0;
  do {
    if (iVar2 < local_20) {
      return 0;
    }
    if (*(int *)((long)pvVar4 + (long)local_20 * 4) != 0) {
      if ((local_24 % 10 == 0) && (local_24 < 0x65)) {
        _printf("\n");
      }
      local_24 = local_24 + 1;
      if (local_24 < 0x65) {
        _printf("%3d ");
      }
      else if (local_24 == 1000000) {
        _printf("\n%d th prime is %d\n");
        return 0;
      }
    }
    local_20 = local_20 + 1;
  } while( true );
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _calloc(size_t param_1,size_t param_2)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f64. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__calloc_100004000)();
  return pvVar1;
}



void _log(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f70. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__log_100004008)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f7c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004010)((int)param_1);
  return iVar1;
}


