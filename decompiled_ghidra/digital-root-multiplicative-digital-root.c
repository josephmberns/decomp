#include "digital-root-multiplicative-digital-root.h"



void __mdr(uint *param_1,int *param_2,long param_3)

{
  uint local_2c;
  long local_28;
  
  local_2c = (uint)(param_3 != 0);
  for (local_28 = param_3; local_28 != 0; local_28 = local_28 / 10) {
    local_2c = local_2c * ((int)local_28 + (int)(local_28 / 10) * -10);
  }
  *param_2 = *param_2 + 1;
  if ((int)local_2c < 10) {
    *param_1 = local_2c;
  }
  else {
    __mdr(param_1,param_2,(long)(int)local_2c);
  }
  return;
}



undefined8 entry(void)

{
  int iVar1;
  int local_14c;
  undefined4 local_144;
  int local_140;
  int local_13c;
  int local_138;
  undefined4 local_134;
  int aiStack_130 [10];
  int aiStack_108 [50];
  int local_40 [6];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100004008;
  local_134 = 0;
  local_40[2] = 0x37d;
  local_40[3] = 0xdbb9e;
  local_40[0] = 0x1e1b9;
  local_40[1] = 0x1e3b;
  _printf("Number    MDR    MP\n");
  for (local_138 = 0; local_138 < 4; local_138 = local_138 + 1) {
    local_144 = 0;
    __mdr(&local_140,&local_144,(long)local_40[local_138]);
    _printf("%6d   %3d   %3d\n");
  }
  _memset(aiStack_108,0,200);
  _memset(aiStack_130,0,0x28);
  local_14c = 0;
  local_138 = 0;
  while (local_14c < 0x32) {
    local_144 = 0;
    __mdr(&local_140,&local_144,(long)local_138);
    if (aiStack_130[local_140] < 5) {
      iVar1 = aiStack_130[local_140];
      aiStack_130[local_140] = iVar1 + 1;
      aiStack_108[(long)local_140 * 5 + (long)iVar1] = local_138;
      local_14c = local_14c + 1;
    }
    local_138 = local_138 + 1;
  }
  iVar1 = _printf("\nMDR: [n0..n4]\n");
  for (local_138 = 0; local_138 < 10; local_138 = local_138 + 1) {
    _printf("%3d: [");
    for (local_13c = 0; local_13c < 5; local_13c = local_13c + 1) {
      _printf("%d%s");
    }
    iVar1 = _printf("]\n");
  }
  if (*(long *)PTR____stack_chk_guard_100004008 != local_28) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(iVar1);
  }
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f24. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _memset(void *param_1,int param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f30. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__memset_100004010)(param_1,param_2);
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f3c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004018)((int)param_1);
  return iVar1;
}


