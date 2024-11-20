#include "parsing-rpn-to-infix-conversion.h"



undefined4 _precedenceCheck(char param_1,char param_2)

{
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  if (param_1 == param_2) {
    local_8 = 0;
  }
  else {
    if (param_1 == '^') {
      local_c = 1;
    }
    else {
      if (param_2 == '^') {
        local_10 = 2;
      }
      else {
        if (param_1 == '/') {
          local_14 = 1;
        }
        else {
          if (param_2 == '/') {
            local_18 = 2;
          }
          else {
            if (param_1 == '*') {
              local_1c = 1;
            }
            else {
              if (param_2 == '*') {
                local_20 = 2;
              }
              else {
                if (param_1 == '+') {
                  local_24 = 1;
                }
                else {
                  if (param_2 == '+') {
                    local_28 = 2;
                  }
                  else {
                    local_28 = 2;
                    if (param_1 == '-') {
                      local_28 = 1;
                    }
                  }
                  local_24 = local_28;
                }
                local_20 = local_24;
              }
              local_1c = local_20;
            }
            local_18 = local_1c;
          }
          local_14 = local_18;
        }
        local_10 = local_14;
      }
      local_c = local_10;
    }
    local_8 = local_c;
  }
  return local_8;
}



bool _isOperator(char param_1)

{
  bool bVar1;
  
  bVar1 = true;
  if ((((param_1 != '+') && (bVar1 = true, param_1 != '-')) && (bVar1 = true, param_1 != '*')) &&
     (bVar1 = true, param_1 != '/')) {
    bVar1 = param_1 == '^';
  }
  return bVar1;
}



char * _inorder(char *param_1)

{
  int iVar1;
  uint uVar2;
  
  if (param_1 != (char *)0x0) {
    if (((*(long *)(param_1 + 0x10) == 0) ||
        (iVar1 = _isOperator((long)**(char **)(param_1 + 0x10)), iVar1 != 1)) ||
       ((iVar1 = _precedenceCheck((long)*param_1,(long)**(char **)(param_1 + 0x10)), iVar1 != 1 &&
        ((iVar1 = _precedenceCheck((long)*param_1,(long)**(char **)(param_1 + 0x10)), iVar1 != 0 ||
         (*param_1 != '^')))))) {
      _inorder(*(undefined8 *)(param_1 + 0x10));
    }
    else {
      _printf("(");
      _inorder(*(undefined8 *)(param_1 + 0x10));
      _printf(")");
    }
    _printf(" %s ");
    if (((*(long *)(param_1 + 0x18) == 0) ||
        (iVar1 = _isOperator((long)**(char **)(param_1 + 0x18)), iVar1 != 1)) ||
       ((iVar1 = _precedenceCheck((long)*param_1,(long)**(char **)(param_1 + 0x18)), iVar1 != 1 &&
        ((iVar1 = _precedenceCheck((long)*param_1,(long)**(char **)(param_1 + 0x18)), iVar1 != 0 ||
         (*param_1 == '^')))))) {
      param_1 = (char *)_inorder(*(undefined8 *)(param_1 + 0x18));
    }
    else {
      _printf("(");
      _inorder(*(undefined8 *)(param_1 + 0x18));
      uVar2 = _printf(")");
      param_1 = (char *)(ulong)uVar2;
    }
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 _getNextString(void)

{
  long lVar1;
  
  if (__counter < 0) {
    _printf("\nInvalid RPN !");
                    // WARNING: Subroutine does not return
    _exit(0);
  }
  lVar1 = (long)__counter;
  __counter = __counter + -1;
  return *(undefined8 *)(__components + lVar1 * 8);
}



void * _buildTree(char *param_1,long param_2)

{
  int iVar1;
  void *pvVar2;
  undefined8 uVar3;
  undefined8 local_38;
  undefined8 local_30;
  
  pvVar2 = _malloc(0x20);
  ___strcpy_chk(pvVar2,param_1,10);
  iVar1 = _isOperator((long)*param_1);
  if (iVar1 == 1) {
    uVar3 = _getNextString();
    local_30 = _buildTree(uVar3,param_2);
  }
  else {
    local_30 = 0;
  }
  *(undefined8 *)((long)pvVar2 + 0x18) = local_30;
  iVar1 = _isOperator((long)*param_1);
  if (iVar1 == 1) {
    uVar3 = _getNextString();
    local_38 = _buildTree(uVar3,param_2);
  }
  else {
    local_38 = 0;
  }
  *(undefined8 *)((long)pvVar2 + 0x10) = local_38;
  if (param_2 != 0) {
    _printf("\n");
    _inorder(pvVar2);
  }
  return pvVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

bool _checkRPN(void)

{
  bool bVar1;
  int iVar2;
  int local_20;
  int local_1c;
  int local_18;
  
  local_1c = 0;
  local_20 = 0;
  iVar2 = _isOperator((long)**(char **)(__components + (long)__counter * 8));
  if (iVar2 == 0) {
    bVar1 = false;
  }
  else {
    for (local_18 = 0; local_18 <= __counter; local_18 = local_18 + 1) {
      iVar2 = _isOperator((long)**(char **)(__components + (long)local_18 * 8));
      if (iVar2 == 1) {
        local_1c = local_1c + 1;
      }
      else {
        local_20 = local_20 + 1;
      }
    }
    bVar1 = local_20 - local_1c == 1;
  }
  return bVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _buildStack(char *param_1)

{
  size_t sVar1;
  void *pvVar2;
  char *local_28;
  int local_1c;
  
  for (local_1c = 0; param_1[local_1c] != '\0'; local_1c = local_1c + 1) {
    if (param_1[local_1c] == ' ') {
      __counter = __counter + 1;
    }
  }
  __components = _malloc((long)(__counter + 1) << 3);
  local_28 = _strtok(param_1," ");
  local_1c = 0;
  while (local_28 != (char *)0x0) {
    sVar1 = _strlen(local_28);
    pvVar2 = _malloc(sVar1);
    *(void **)((long)__components + (long)local_1c * 8) = pvVar2;
    ___strcpy_chk(*(undefined8 *)((long)__components + (long)local_1c * 8),local_28,
                  0xffffffffffffffff);
    local_28 = _strtok((char *)0x0," ");
    local_1c = local_1c + 1;
  }
  return;
}



undefined4 entry(int param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 == 1) {
    _printf(
           "Usage : %s <RPN expression enclosed by quotes> <optional parameter to trace the build process>"
           );
  }
  else {
    _buildStack(*(undefined8 *)(param_2 + 8));
    iVar1 = _checkRPN();
    if (iVar1 == 0) {
      _printf("\nInvalid RPN !");
    }
    else {
      uVar2 = _getNextString();
      uVar2 = _buildTree(uVar2,*(undefined8 *)(param_2 + 0x10));
      _printf("\nFinal infix expression : ");
      _inorder(uVar2);
    }
  }
  return 0;
}



void ___strcpy_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003ec0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____strcpy_chk_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _exit(int param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003ecc. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__exit_100004008)(param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ed8. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004010)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ee4. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004018)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t _strlen(char *param_1)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ef0. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__strlen_100004020)();
  return sVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * _strtok(char *param_1,char *param_2)

{
  char *pcVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003efc. Too many branches
                    // WARNING: Treating indirect jump as call
  pcVar1 = (char *)(*(code *)PTR__strtok_100004028)();
  return pcVar1;
}


