#include "increment-a-numerical-string.h"



char * _incr(char *param_1)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  size_t sVar5;
  char cVar6;
  uint uVar7;
  uint local_2c;
  uint local_24;
  char *local_20;
  char *local_18;
  
  bVar2 = *param_1 == '-';
  cVar6 = '0';
  if (!bVar2) {
    cVar6 = '9';
  }
  iVar4 = _strcmp(param_1,"-1");
  if (iVar4 == 0) {
    *param_1 = '0';
    param_1[1] = '\0';
    local_18 = param_1;
  }
  else {
    sVar5 = _strlen(param_1);
    uVar7 = (uint)sVar5;
    bVar3 = true;
    if (*param_1 != '-') {
      bVar3 = *param_1 == '+';
    }
    uVar1 = (uint)bVar3;
    local_2c = uVar7;
    do {
      local_2c = local_2c - 1;
      bVar3 = false;
      if ((int)uVar1 <= (int)local_2c) {
        bVar3 = param_1[(int)local_2c] == cVar6;
      }
    } while (bVar3);
    local_20 = param_1;
    if (((int)uVar1 <= (int)local_2c) || (bVar2)) {
      if ((local_2c == uVar1) && ((bVar2 && (param_1[1] == '1')))) {
        for (local_24 = 1; (int)local_24 < (int)(uVar7 - uVar1); local_24 = local_24 + 1) {
          param_1[(int)local_24] = '9';
        }
        param_1[(int)(uVar7 - 1)] = '\0';
      }
      else {
        while (local_24 = uVar7 - 1, (int)local_2c < (int)local_24) {
          cVar6 = '9';
          if (!bVar2) {
            cVar6 = '0';
          }
          param_1[(int)local_24] = cVar6;
          uVar7 = local_24;
        }
        cVar6 = '\x01';
        if (bVar2) {
          cVar6 = -1;
        }
        param_1[(int)local_2c] = param_1[(int)local_2c] + cVar6;
      }
    }
    else {
      if (uVar1 == 0) {
        local_20 = (char *)_realloc(param_1,(long)(int)(uVar7 + 2));
      }
      *local_20 = '1';
      for (local_24 = 1; (int)local_24 <= (int)(uVar7 - uVar1); local_24 = local_24 + 1) {
        local_20[(int)local_24] = '0';
      }
      local_20[(int)(uVar7 + 1)] = '\0';
    }
    local_18 = local_20;
  }
  return local_18;
}



void _string_test(char *param_1)

{
  size_t sVar1;
  void *pvVar2;
  
  sVar1 = _strlen(param_1);
  pvVar2 = _malloc(sVar1);
  ___strcpy_chk(pvVar2,param_1,0xffffffffffffffff);
  _printf("text: %s\n");
  pvVar2 = (void *)_incr(pvVar2);
  _printf("  ->: %s\n");
  _free(pvVar2);
  return;
}



undefined4 entry(void)

{
  _string_test("+0");
  _string_test("-1");
  _string_test("-41");
  _string_test("+41");
  _string_test("999");
  _string_test("+999");
  _string_test("109999999999999999999999999999999999999999");
  _string_test("-100000000000000000000000000000000000000000000");
  return 0;
}



void ___strcpy_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003ed4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____strcpy_chk_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003ee0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004008)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003eec. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004010)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ef8. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004018)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _realloc(void *param_1,size_t param_2)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f04. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__realloc_100004020)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _strcmp(char *param_1,char *param_2)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f10. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__strcmp_100004028)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t _strlen(char *param_1)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f1c. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__strlen_100004030)();
  return sVar1;
}


