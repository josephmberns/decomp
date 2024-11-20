#include "tokenize-a-string-with-escaping.h"



undefined8 entry(void)

{
  void *pvVar1;
  uint local_4c;
  uint local_48;
  undefined4 local_44;
  undefined auStack_3d [37];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  local_44 = 0;
  _memcpy(auStack_3d,"one^|uno||three^^^^|four^^^|^cuatro|",0x25);
  pvVar1 = (void *)_Tokenize(auStack_3d,0x7c,0x5e,&local_4c);
  if (pvVar1 != (void *)0x0) {
    _printf("\n Original string: %s\n\n");
    _printf(" %d tokens:\n\n");
    for (local_48 = 0; local_48 < local_4c; local_48 = local_48 + 1) {
      _printf(" %4d. %s\n");
    }
    _free(pvVar1);
  }
  if (*(long *)PTR____stack_chk_guard_100004008 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail();
  }
  return 0;
}



undefined8 * _Tokenize(char *param_1,byte param_2,byte param_3,uint *param_4)

{
  bool bVar1;
  uint uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  char *local_40;
  uint local_38;
  
  uVar2 = _ElQ(param_1,param_2,param_3);
  *param_4 = uVar2;
  puVar3 = (undefined8 *)_malloc((ulong)*param_4 << 3);
  if (puVar3 != (undefined8 *)0x0) {
    local_38 = 1;
    *puVar3 = param_1;
    bVar1 = false;
    for (local_40 = param_1; *local_40 != '\0'; local_40 = local_40 + 1) {
      if ((int)*local_40 == (uint)param_3) {
        bVar1 = !bVar1;
      }
      else if (((int)*local_40 != (uint)param_2) || (bVar1)) {
        bVar1 = false;
      }
      else {
        uVar4 = (ulong)local_38;
        local_38 = local_38 + 1;
        puVar3[uVar4] = local_40 + 1;
        *local_40 = '\0';
      }
    }
  }
  return puVar3;
}



int _ElQ(char *param_1,char param_2,char param_3)

{
  bool bVar1;
  char *local_20;
  int local_10;
  
  bVar1 = false;
  local_10 = 1;
  for (local_20 = param_1; *local_20 != '\0'; local_20 = local_20 + 1) {
    if (*local_20 == param_3) {
      bVar1 = !bVar1;
    }
    else if (*local_20 == param_2) {
      local_10 = local_10 + (uint)!bVar1;
    }
    else {
      bVar1 = false;
    }
  }
  return local_10;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f14. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f20. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004010)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f2c. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004018)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _memcpy(void *param_1,void *param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f38. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__memcpy_100004020)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f44. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004028)((int)param_1);
  return iVar1;
}


