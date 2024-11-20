#include "input-loop.h"



void * _get_line(FILE *param_1)

{
  int iVar1;
  long lVar2;
  void *local_38;
  int local_28;
  int local_24;
  void *local_18;
  
  local_24 = 0;
  local_28 = 0;
  local_38 = (void *)0x0;
  do {
    iVar1 = _fgetc(param_1);
    if (iVar1 == -1) break;
    if (local_24 <= local_28 + 1) {
      local_24 = local_24 << 1;
      if (local_24 < 4) {
        local_24 = 4;
      }
      local_38 = _realloc(local_38,(long)local_24);
    }
    lVar2 = (long)local_28;
    local_28 = local_28 + 1;
    *(char *)((long)local_38 + lVar2) = (char)iVar1;
  } while (iVar1 != 10);
  if ((iVar1 == -1) && (local_28 == 0)) {
    local_18 = (void *)0x0;
  }
  else {
    *(undefined *)((long)local_38 + (long)local_28) = 0;
    local_18 = local_38;
  }
  return local_18;
}



undefined8 entry(void)

{
  void *pvVar1;
  
  while( true ) {
    pvVar1 = (void *)_get_line(*(undefined8 *)PTR____stdinp_100004000);
    if (pvVar1 == (void *)0x0) break;
    _printf("%s");
    _free(pvVar1);
  }
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fgetc(FILE *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f7c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fgetc_100004008)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f88. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004010)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f94. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004018)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _realloc(void *param_1,size_t param_2)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003fa0. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__realloc_100004020)();
  return pvVar1;
}


