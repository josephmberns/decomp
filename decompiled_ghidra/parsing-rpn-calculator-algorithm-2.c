#include "parsing-rpn-calculator-algorithm-2.h"



undefined  [16] _get(char *param_1,long param_2,undefined8 *param_3)

{
  undefined *puVar1;
  bool bVar2;
  int iVar3;
  double dVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined auVar7 [16];
  double local_38;
  char *local_30;
  undefined8 *local_28;
  char *local_20;
  char *local_18;
  
  local_20 = (char *)(param_2 + -1);
  local_28 = param_3;
  local_18 = param_1;
  while( true ) {
    bVar2 = false;
    if (local_18 <= local_20) {
      iVar3 = _isspace((int)*local_20);
      bVar2 = iVar3 != 0;
    }
    if (!bVar2) break;
    local_20 = local_20 + -1;
  }
  local_30 = local_20;
  while( true ) {
    bVar2 = false;
    if (local_18 < local_30) {
      iVar3 = _isspace((uint)(byte)local_30[-1]);
      bVar2 = iVar3 == 0;
    }
    if (!bVar2) break;
    local_30 = local_30 + -1;
  }
  if (local_18 <= local_30) {
    local_38 = _strtod(local_30,&local_20);
    puVar1 = PTR____stderrp_100004000;
    if (local_20 <= local_30) {
      if (*local_30 == '+') {
        dVar4 = (double)_get(local_18,local_30);
        local_38 = (double)_get(local_18,local_30,&local_30);
        local_38 = local_38 + dVar4;
      }
      else if (*local_30 == '-') {
        dVar4 = (double)_get(local_18,local_30);
        local_38 = (double)_get(local_18,local_30,&local_30);
        local_38 = local_38 - dVar4;
      }
      else if (*local_30 == '*') {
        dVar4 = (double)_get(local_18,local_30);
        local_38 = (double)_get(local_18,local_30,&local_30);
        local_38 = local_38 * dVar4;
      }
      else if (*local_30 == '/') {
        dVar4 = (double)_get(local_18,local_30);
        local_38 = (double)_get(local_18,local_30,&local_30);
        local_38 = local_38 / dVar4;
      }
      else {
        if (*local_30 != '^') {
          _fprintf(*(FILE **)PTR____stderrp_100004000,"\'%c\': ");
          _fprintf(*(FILE **)puVar1,"unknown token\n");
                    // WARNING: Subroutine does not return
          _abort();
        }
        uVar5 = _get(local_18,local_30);
        uVar6 = _get(local_18,local_30,&local_30);
        local_38 = (double)_pow(uVar6,uVar5);
      }
    }
    *local_28 = local_30;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = local_38;
    return auVar7;
  }
  _fprintf(*(FILE **)PTR____stderrp_100004000,"underflow\n");
                    // WARNING: Subroutine does not return
  _abort();
}



undefined  [16] _rpn(char *param_1)

{
  undefined *puVar1;
  bool bVar2;
  int iVar3;
  size_t sVar4;
  undefined auVar5 [16];
  char *local_20;
  char *local_18;
  
  local_18 = param_1;
  sVar4 = _strlen(param_1);
  local_20 = param_1 + sVar4;
  auVar5._0_8_ = _get(local_18,local_20,&local_20);
  while( true ) {
    bVar2 = false;
    if (local_18 < local_20) {
      iVar3 = _isspace((uint)(byte)local_20[-1]);
      bVar2 = iVar3 != 0;
    }
    puVar1 = PTR____stderrp_100004000;
    if (!bVar2) break;
    local_20 = local_20 + -1;
  }
  if (local_20 == local_18) {
    auVar5._8_8_ = 0;
    return auVar5;
  }
  _fprintf(*(FILE **)PTR____stderrp_100004000,"\"%.*s\": ");
  _fprintf(*(FILE **)puVar1,"front garbage\n");
                    // WARNING: Subroutine does not return
  _abort();
}



undefined4 entry(void)

{
  _rpn("3 4 2 * 1 5 - 2 3 ^ ^ / +");
  _printf("%g\n");
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _abort(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f04. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__abort_100004008)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fprintf(FILE *param_1,char *param_2,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f10. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fprintf_100004010)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _isspace(int _c)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f1c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__isspace_100004018)(_c);
  return iVar1;
}



void _pow(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f28. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__pow_100004020)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f34. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004028)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t _strlen(char *param_1)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f40. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__strlen_100004030)();
  return sVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

double _strtod(char *param_1,char **param_2)

{
  double dVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f4c. Too many branches
                    // WARNING: Treating indirect jump as call
  dVar1 = (double)(*(code *)PTR__strtod_100004038)();
  return dVar1;
}


