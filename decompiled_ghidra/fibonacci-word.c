#include "fibonacci-word.h"



int _print_headings(void)

{
  int iVar1;
  
  _printf("%2s");
  _printf(" %10s");
  _printf(" %-20s");
  _printf(" %-40s");
  iVar1 = _printf("\n");
  return iVar1;
}



// WARNING: Removing unreachable block (ram,0x000100003c08)

undefined  [16] _calculate_entropy(int param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined auVar4 [16];
  
  iVar1 = param_1 + param_2;
  uVar2 = _log2((double)(long)param_1 / (double)(long)iVar1);
  uVar2 = NEON_fmsub((double)(long)param_1 / (double)(long)iVar1,uVar2,0);
  uVar3 = _log2((double)(long)param_2 / (double)(long)iVar1);
  auVar4._0_8_ = NEON_fmsub((double)(long)param_2 / (double)(long)iVar1,uVar3,uVar2);
  auVar4._8_8_ = 0;
  return auVar4;
}



int _print_entropy(long param_1)

{
  int iVar1;
  int local_24;
  int local_20;
  int local_1c;
  
  local_1c = 0;
  local_20 = 0;
  for (local_24 = 0; *(char *)(param_1 + local_24) != '\0'; local_24 = local_24 + 1) {
    if (*(char *)(param_1 + local_24) == '0') {
      local_20 = local_20 + 1;
    }
    else if (*(char *)(param_1 + local_24) == '1') {
      local_1c = local_1c + 1;
    }
  }
  _calculate_entropy(local_1c,local_20);
  iVar1 = _printf(" %-20.18f");
  return iVar1;
}



int _print_word(int param_1,char *param_2)

{
  int iVar1;
  
  _printf("%2d");
  _strlen(param_2);
  _printf(" %10ld");
  _print_entropy(param_2);
  if (param_1 < 10) {
    _printf(" %-40s");
  }
  else {
    _printf(" %-40s");
  }
  iVar1 = _printf("\n");
  return iVar1;
}



undefined8 entry(void)

{
  size_t sVar1;
  size_t sVar2;
  char *pcVar3;
  int local_34;
  char *local_30;
  char *local_28;
  
  _print_headings();
  local_28 = (char *)_malloc(2);
  ___strcpy_chk(local_28,"1");
  local_30 = (char *)_malloc(2);
  ___strcpy_chk(local_30,"0",0xffffffffffffffff);
  _print_word(1,local_28);
  for (local_34 = 2; local_34 < 0x26; local_34 = local_34 + 1) {
    _print_word(local_34,local_30);
    sVar1 = _strlen(local_30);
    sVar2 = _strlen(local_28);
    pcVar3 = (char *)_malloc(sVar1 + sVar2 + 1);
    ___strcpy_chk(pcVar3,local_30);
    ___strcat_chk(pcVar3,local_28,0xffffffffffffffff);
    _free(local_28);
    local_28 = local_30;
    local_30 = pcVar3;
  }
  _free(local_28);
  _free(local_30);
  return 0;
}



void ___strcat_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f0c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____strcat_chk_100004000)();
  return;
}



void ___strcpy_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f18. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____strcpy_chk_100004008)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f24. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004010)();
  return;
}



void _log2(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f30. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__log2_100004018)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f3c. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004020)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f48. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004028)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t _strlen(char *param_1)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f54. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__strlen_100004030)();
  return sVar1;
}


