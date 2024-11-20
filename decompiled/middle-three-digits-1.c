#include "middle-three-digits-1.h"



long _mid3(void)

{
  int iVar1;
  size_t sVar2;
  long local_18;
  
  ___sprintf_chk(0x100008000,0,0x20,"%d");
  sVar2 = _strlen((char *)0x100008000);
  if (((int)sVar2 < 3) || ((sVar2 & 1) == 0)) {
    local_18 = 0;
  }
  else {
    iVar1 = (int)sVar2 / 2;
    *(undefined *)((long)(iVar1 + 2) + 0x100008000) = 0;
    local_18 = (long)(iVar1 + -1) + 0x100008000;
  }
  return local_18;
}



undefined8 entry(void)

{
  uint uVar1;
  void *pvVar2;
  uint local_68;
  undefined4 auStack_60 [18];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004010;
  pvVar2 = _memcpy(auStack_60,&DAT_100003f60,0x48);
  for (local_68 = 0; local_68 < 0x12; local_68 = local_68 + 1) {
    _mid3(auStack_60[(int)local_68]);
    uVar1 = _printf("%d: %s\n");
    pvVar2 = (void *)(ulong)uVar1;
  }
  if (*(long *)PTR____stack_chk_guard_100004010 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(pvVar2);
  }
  return 0;
}



void ___sprintf_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f18. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____sprintf_chk_100004000)();
  return;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f24. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004008)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _memcpy(void *param_1,void *param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f30. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__memcpy_100004018)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f3c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004020)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t _strlen(char *param_1)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f48. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__strlen_100004028)();
  return sVar1;
}


