#include "s-expressions-1.h"



int _whine(void)

{
  int iVar1;
  
  iVar1 = _fprintf(*(FILE **)PTR____stderrp_100004010,"parse error before ==>%.10s\n");
  return iVar1;
}



undefined4 * _parse_string(char *param_1,long *param_2)

{
  char *pcVar1;
  size_t sVar2;
  long lVar3;
  int local_14c;
  char *local_138;
  undefined4 *local_130;
  char acStack_128 [256];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100004008;
  local_130 = (undefined4 *)_calloc(0x18,1);
  _memset(acStack_128,0,0x100);
  local_14c = 0;
  local_138 = param_1;
  do {
    if (*local_138 == '\0') {
LAB_1000034b8:
      _free(local_130);
      local_130 = (undefined4 *)0x0;
LAB_100003518:
      if (*(long *)PTR____stack_chk_guard_100004008 == local_28) {
        return local_130;
      }
                    // WARNING: Subroutine does not return
      ___stack_chk_fail();
    }
    if (0xff < local_14c) {
      _fprintf(*(FILE **)PTR____stderrp_100004010,"string too long:\n");
      _whine(local_138);
      goto LAB_1000034b8;
    }
    if (*local_138 == '\"') {
      *param_2 = (long)(local_138 + 1);
      *local_130 = 2;
      pcVar1 = _strdup(acStack_128);
      *(char **)(local_130 + 4) = pcVar1;
      sVar2 = _strlen(acStack_128);
      *(size_t *)(local_130 + 2) = sVar2;
      goto LAB_100003518;
    }
    if (*local_138 == '\\') {
      if ((local_138[1] != '\"') && (local_138[1] != '\\')) {
        _whine(local_138 + 1);
        goto LAB_1000034b8;
      }
      lVar3 = (long)local_14c;
      local_14c = local_14c + 1;
      acStack_128[lVar3] = local_138[1];
      local_138 = local_138 + 2;
    }
    else {
      lVar3 = (long)local_14c;
      local_14c = local_14c + 1;
      acStack_128[lVar3] = *local_138;
      local_138 = local_138 + 1;
    }
  } while( true );
}



undefined4 * _parse_symbol(char *param_1,long *param_2)

{
  int iVar1;
  char *pcVar2;
  size_t sVar3;
  long lVar4;
  int local_14c;
  char *local_138;
  undefined4 *local_130;
  char acStack_128 [256];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100004008;
  local_130 = (undefined4 *)_calloc(0x18,1);
  _memset(acStack_128,0,0x100);
  local_14c = 0;
  local_138 = param_1;
  do {
    if (*local_138 == '\0') {
LAB_100003758:
      _free(local_130);
      local_130 = (undefined4 *)0x0;
LAB_1000037b8:
      if (*(long *)PTR____stack_chk_guard_100004008 == local_28) {
        return local_130;
      }
                    // WARNING: Subroutine does not return
      ___stack_chk_fail();
    }
    if (0xff < local_14c) {
      _fprintf(*(FILE **)PTR____stderrp_100004010,"symbol too long:\n");
      _whine(local_138);
      goto LAB_100003758;
    }
    iVar1 = _isspace((int)*local_138);
    if (iVar1 != 0) {
LAB_100003768:
      *param_2 = (long)(local_138 + 1);
      *local_130 = 3;
      pcVar2 = _strdup(acStack_128);
      *(char **)(local_130 + 4) = pcVar2;
      sVar3 = _strlen(acStack_128);
      *(size_t *)(local_130 + 2) = sVar3;
      goto LAB_1000037b8;
    }
    if ((*local_138 == ')') || (*local_138 == '(')) {
      local_138 = local_138 + -1;
      goto LAB_100003768;
    }
    if (*local_138 == '\"') {
      _whine(local_138);
      goto LAB_100003768;
    }
    if (*local_138 == '\\') {
      iVar1 = (int)local_138[1];
      if (((iVar1 != 0x22) && (1 < iVar1 - 0x28U)) && (iVar1 != 0x5c)) {
        _whine(local_138 + 1);
        goto LAB_100003758;
      }
      lVar4 = (long)local_14c;
      local_14c = local_14c + 1;
      acStack_128[lVar4] = local_138[1];
      local_138 = local_138 + 2;
    }
    else {
      lVar4 = (long)local_14c;
      local_14c = local_14c + 1;
      acStack_128[lVar4] = *local_138;
      local_138 = local_138 + 1;
    }
  } while( true );
}



void _append(long param_1,undefined8 param_2)

{
  long lVar1;
  void *pvVar2;
  
  lVar1 = *(long *)(param_1 + 8) + 1;
  *(long *)(param_1 + 8) = lVar1;
  pvVar2 = _realloc(*(void **)(param_1 + 0x10),lVar1 * 8);
  *(void **)(param_1 + 0x10) = pvVar2;
  *(undefined8 *)(*(long *)(param_1 + 0x10) + (*(long *)(param_1 + 8) + -1) * 8) = param_2;
  return;
}



undefined4 * _parse_list(char *param_1,long *param_2)

{
  char cVar1;
  int iVar2;
  char *local_40;
  long local_38;
  undefined4 *local_30;
  long *local_28;
  char *local_20;
  
  local_28 = param_2;
  local_20 = param_1;
  local_30 = (undefined4 *)_calloc(0x18,1);
  *(undefined8 *)(local_30 + 2) = 0;
  while (*local_20 != '\0') {
    iVar2 = _isspace((int)*local_20);
    if (iVar2 == 0) {
      cVar1 = *local_20;
      if (cVar1 == '\"') {
        local_38 = _parse_string(local_20 + 1,&local_40);
        if (local_38 == 0) break;
        _append(local_30,local_38);
        local_20 = local_40;
      }
      else if (cVar1 == '(') {
        local_38 = _parse_list(local_20 + 1,&local_40);
        if (local_38 == 0) break;
        _append(local_30,local_38);
        local_20 = local_40;
      }
      else {
        if (cVar1 == ')') {
          *local_28 = (long)(local_20 + 1);
          *local_30 = 1;
          return local_30;
        }
        local_38 = _parse_symbol(local_20,&local_40);
        if (local_38 == 0) break;
        _append(local_30,local_38);
        local_20 = local_40;
      }
    }
    else {
      local_20 = local_20 + 1;
    }
  }
  _whine(local_20);
  _free(local_30);
  return (undefined4 *)0x0;
}



undefined8 _parse_term(char *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  char *local_20;
  
  local_20 = param_1;
  while( true ) {
    if (*local_20 == '\0') {
      return 0;
    }
    iVar1 = _isspace((int)*local_20);
    if (iVar1 == 0) break;
    local_20 = local_20 + 1;
  }
  if (*local_20 != '\"') {
    if (*local_20 == '(') {
      uVar2 = _parse_list(local_20 + 1,param_2);
      return uVar2;
    }
    uVar2 = _parse_symbol(local_20 + 1,param_2);
    return uVar2;
  }
  uVar2 = _parse_string(local_20 + 1,param_2);
  return uVar2;
}



int * _print_expr(int *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int local_20;
  
  if (param_1 != (int *)0x0) {
    if (*param_1 == 1) {
      for (local_20 = 0; local_20 < param_2; local_20 = local_20 + 1) {
        _printf("    ");
      }
      _puts("(");
      for (local_20 = 0; (ulong)(long)local_20 < *(ulong *)(param_1 + 2); local_20 = local_20 + 1) {
        _print_expr(*(undefined8 *)(*(long *)(param_1 + 4) + (long)local_20 * 8),param_2 + 1);
      }
      for (local_20 = 0; local_20 < param_2; local_20 = local_20 + 1) {
        _printf("    ");
      }
      uVar1 = _puts(")");
      param_1 = (int *)(ulong)uVar1;
    }
    else if (*param_1 - 2U < 2) {
      for (local_20 = 0; local_20 < param_2; local_20 = local_20 + 1) {
        _printf("    ");
      }
      if (*param_1 == 2) {
        _putchar(0x22);
      }
      for (local_20 = 0; (ulong)(long)local_20 < *(ulong *)(param_1 + 2); local_20 = local_20 + 1) {
        iVar2 = (int)*(char *)(*(long *)(param_1 + 4) + (long)local_20);
        if (iVar2 == 0x22) {
LAB_100003d4c:
          _putchar(0x5c);
        }
        else if (iVar2 - 0x28U < 2) {
          if (*param_1 == 3) {
            _putchar(0x5c);
          }
        }
        else if (iVar2 == 0x5c) goto LAB_100003d4c;
        _putchar((int)*(char *)(*(long *)(param_1 + 4) + (long)local_20));
      }
      if (*param_1 == 2) {
        _putchar(0x22);
      }
      uVar1 = _putchar(10);
      param_1 = (int *)(ulong)uVar1;
    }
  }
  return param_1;
}



undefined4 entry(void)

{
  undefined8 uVar1;
  undefined auStack_20 [12];
  undefined4 local_14;
  
  local_14 = 0;
  uVar1 = _parse_term("((data da\\(\\)ta \"quot\\\\ed data\" 123 4.5)\n (\"data\" (!@# (4.5) \"(mo\\\"re\" \"data)\")))"
                      ,auStack_20);
  _printf("input is:\n%s\n");
  _printf("parsed as:\n");
  _print_expr(uVar1,0);
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003e60. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _calloc(size_t param_1,size_t param_2)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e6c. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__calloc_100004018)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fprintf(FILE *param_1,char *param_2,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e78. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fprintf_100004020)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003e84. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004028)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _isspace(int _c)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e90. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__isspace_100004030)(_c);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _memset(void *param_1,int param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e9c. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__memset_100004038)(param_1,param_2);
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ea8. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004040)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _putchar(int param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003eb4. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__putchar_100004048)(param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _puts(char *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ec0. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__puts_100004050)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _realloc(void *param_1,size_t param_2)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ecc. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__realloc_100004058)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * _strdup(char *param_1)

{
  char *pcVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ed8. Too many branches
                    // WARNING: Treating indirect jump as call
  pcVar1 = (char *)(*(code *)PTR__strdup_100004060)();
  return pcVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t _strlen(char *param_1)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ee4. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__strlen_100004068)();
  return sVar1;
}


