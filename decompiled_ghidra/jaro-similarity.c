#include "jaro-similarity.h"



undefined  [16] _jaro(char *param_1,char *param_2)

{
  int iVar1;
  size_t sVar2;
  void *pvVar3;
  void *pvVar4;
  int iVar5;
  int iVar6;
  undefined auVar7 [16];
  int local_88;
  int local_84;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_5c;
  double local_58;
  double local_50;
  double local_18;
  
  sVar2 = _strlen(param_1);
  iVar5 = (int)sVar2;
  sVar2 = _strlen(param_2);
  iVar6 = (int)sVar2;
  if (iVar5 == 0) {
    local_18 = 1.0;
    if (iVar6 != 0) {
      local_18 = 0.0;
    }
  }
  else {
    local_74 = iVar6;
    if (iVar6 < iVar5) {
      local_74 = iVar5;
    }
    iVar1 = local_74 / 2 + -1;
    pvVar3 = _calloc((long)iVar5,4);
    pvVar4 = _calloc((long)iVar6,4);
    local_50 = 0.0;
    local_58 = 0.0;
    for (local_5c = 0; local_5c < iVar5; local_5c = local_5c + 1) {
      if (local_5c - iVar1 < 0) {
        local_84 = 0;
      }
      else {
        local_84 = local_5c - iVar1;
      }
      local_88 = iVar6;
      if (local_5c + iVar1 + 1 < iVar6) {
        local_88 = local_5c + iVar1 + 1;
      }
      for (local_68 = local_84; local_68 < local_88; local_68 = local_68 + 1) {
        if ((*(int *)((long)pvVar4 + (long)local_68 * 4) == 0) &&
           (param_1[local_5c] == param_2[local_68])) {
          *(undefined4 *)((long)pvVar3 + (long)local_5c * 4) = 1;
          *(undefined4 *)((long)pvVar4 + (long)local_68 * 4) = 1;
          local_50 = local_50 + 1.0;
          break;
        }
      }
    }
    if (local_50 == 0.0) {
      _free(pvVar3);
      _free(pvVar4);
      local_18 = 0.0;
    }
    else {
      local_6c = 0;
      for (local_70 = 0; local_70 < iVar5; local_70 = local_70 + 1) {
        if (*(int *)((long)pvVar3 + (long)local_70 * 4) != 0) {
          while (*(int *)((long)pvVar4 + (long)local_6c * 4) == 0) {
            local_6c = local_6c + 1;
          }
          if (param_1[local_70] != param_2[local_6c]) {
            local_58 = local_58 + 1.0;
          }
          local_6c = local_6c + 1;
        }
      }
      _free(pvVar3);
      _free(pvVar4);
      local_18 = (local_50 / (double)(long)iVar5 + local_50 / (double)(long)iVar6 +
                 (local_50 - local_58 / 2.0) / local_50) / 3.0;
    }
  }
  auVar7._8_8_ = 0;
  auVar7._0_8_ = local_18;
  return auVar7;
}



undefined8 entry(void)

{
  _jaro("MARTHA","MARHTA");
  _printf("%f\n");
  _jaro("DIXON","DICKSONX");
  _printf("%f\n");
  _jaro("JELLYFISH","SMELLYFISH");
  _printf("%f\n");
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _calloc(size_t param_1,size_t param_2)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f48. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__calloc_100004000)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f54. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004008)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f60. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004010)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t _strlen(char *param_1)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f6c. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__strlen_100004018)();
  return sVar1;
}


