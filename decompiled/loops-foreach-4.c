#include "loops-foreach-4.h"



void entry(void)

{
  undefined8 *puVar1;
  size_t sVar2;
  undefined8 *local_70;
  undefined8 *local_68;
  char *local_60;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = *(undefined8 *)PTR____stack_chk_guard_100004000;
  uStack_28 = 0x100000004;
  local_30 = 0x100000003;
  local_20 = 0x900000005;
  puVar1 = (undefined8 *)_calloc(4,8);
  *puVar1 = 0x3ff3333333333333;
  puVar1[1] = 0x400b333333333333;
  puVar1[2] = 0x4016666666666666;
  puVar1[3] = 0x401f333333333333;
  for (local_60 = "collection"; sVar2 = _strlen("collection"), local_60 < "collection" + sVar2;
      local_60 = local_60 + 1) {
    _printf("loop 1 : %c\n");
  }
  for (local_68 = &local_30; local_70 = puVar1, local_68 < &local_18;
      local_68 = (undefined8 *)((long)local_68 + 4)) {
    _printf("loop 2 : %d\n");
  }
  for (; local_70 < puVar1 + 4; local_70 = local_70 + 1) {
    _printf("loop 3 : %3.1lf\n");
  }
                    // WARNING: Subroutine does not return
  _exit(0);
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _calloc(size_t param_1,size_t param_2)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f10. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__calloc_100004008)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _exit(int param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f1c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__exit_100004010)(param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f28. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004018)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t _strlen(char *param_1)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f34. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__strlen_100004020)();
  return sVar1;
}


