#include "repeat-a-string-3.h"



void * _char_repeat(int param_1,undefined param_2)

{
  void *pvVar1;
  
  pvVar1 = _malloc((long)(param_1 + 1));
  ___memset_chk(pvVar1,param_2,(long)param_1,0xffffffffffffffff);
  *(undefined *)((long)pvVar1 + (long)param_1) = 0;
  return pvVar1;
}



undefined4 entry(void)

{
  char *pcVar1;
  
  pcVar1 = (char *)_char_repeat(5,0x2a);
  _puts(pcVar1);
  _free(pcVar1);
  return 0;
}



void ___memset_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f80. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____memset_chk_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f8c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004008)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f98. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004010)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _puts(char *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003fa4. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__puts_100004018)((int)param_1);
  return iVar1;
}


