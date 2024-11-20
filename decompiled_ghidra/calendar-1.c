#include "calendar-1.h"



ulong _space(ulong param_1)

{
  uint uVar1;
  undefined4 local_14;
  
  local_14 = (int)param_1;
  while (0 < local_14) {
    uVar1 = _putchar(0x20);
    param_1 = (ulong)uVar1;
    local_14 = local_14 + -1;
  }
  return param_1;
}



void _init_months(void)

{
  int iVar1;
  int local_8;
  int local_4;
  
  if (((_year % 4 == 0) && (_year % 100 != 0)) || (_year % 400 == 0)) {
    DAT_100008060 = 0x1d;
  }
  _year = _year + -1;
  DAT_10000804c = (((_year * 0x16d + _year / 4) - _year / 100) + _year / 400 + 1) % 7;
  for (local_4 = 1; local_4 < 0xc; local_4 = local_4 + 1) {
    (&DAT_10000804c)[(long)local_4 * 6] =
         ((&DAT_10000804c)[(long)(local_4 + -1) * 6] + (&DAT_100008048)[(long)(local_4 + -1) * 6]) %
         7;
  }
  _cols = (_width + 2) / 0x16;
  while( true ) {
    iVar1 = 0;
    if (_cols != 0) {
      iVar1 = 0xc / _cols;
    }
    if (iVar1 * _cols == 0xc) break;
    _cols = _cols + -1;
  }
  if (_cols == 1) {
    local_8 = 0;
  }
  else {
    local_8 = 0;
    if (_cols + -1 != 0) {
      local_8 = (_width + _cols * -0x14) / (_cols + -1);
    }
  }
  _gap = local_8;
  if (4 < local_8) {
    _gap = 4;
  }
  _lead = ((_width - (_gap + 0x14) * _cols) + _gap + 1) / 2;
  _year = _year + 1;
  return;
}



int _print_row(int param_1)

{
  bool bVar1;
  int iVar2;
  size_t sVar3;
  int iVar4;
  int local_44;
  int local_1c;
  int local_18;
  
  param_1 = param_1 * _cols;
  iVar2 = param_1 + _cols;
  _space(_lead);
  for (local_18 = param_1; local_18 < iVar2; local_18 = local_18 + 1) {
    sVar3 = _strlen((&_months)[(long)local_18 * 3]);
    iVar4 = (int)sVar3;
    _space((0x14 - iVar4) / 2);
    _printf("%s");
    if (local_18 == iVar2 + -1) {
      local_44 = 0;
    }
    else {
      local_44 = _gap;
    }
    _space(((0x14 - iVar4) - (0x14 - iVar4) / 2) + local_44);
  }
  _putchar(10);
  _space(_lead);
  for (local_18 = param_1; iVar4 = param_1, local_18 < iVar2; local_18 = local_18 + 1) {
    for (local_1c = 0; local_1c < 7; local_1c = local_1c + 1) {
      _printf("%s%s");
    }
    if (local_18 < iVar2 + -1) {
      _space(_gap);
    }
    else {
      _putchar(10);
    }
  }
  while( true ) {
    while ((local_18 = iVar4, local_18 < iVar2 &&
           ((int)(&DAT_100008048)[(long)local_18 * 6] <=
            *(int *)(&DAT_100008050 + (long)local_18 * 0x18)))) {
      iVar4 = local_18 + 1;
    }
    if (local_18 == iVar2) break;
    _space(_lead);
    for (local_18 = param_1; local_18 < iVar2; local_18 = local_18 + 1) {
      for (local_1c = 0; local_1c < (int)(&DAT_10000804c)[(long)local_18 * 6];
          local_1c = local_1c + 1) {
        _space(3);
      }
      while( true ) {
        iVar4 = local_1c + 1;
        bVar1 = false;
        if (local_1c < 7) {
          bVar1 = *(int *)(&DAT_100008050 + (long)local_18 * 0x18) <
                  (int)(&DAT_100008048)[(long)local_18 * 6];
        }
        local_1c = iVar4;
        if (!bVar1) break;
        *(int *)(&DAT_100008050 + (long)local_18 * 0x18) =
             *(int *)(&DAT_100008050 + (long)local_18 * 0x18) + 1;
        _printf("%2d");
        if ((iVar4 < 7) || (local_18 < iVar2 + -1)) {
          _putchar(0x20);
        }
      }
      while( true ) {
        bVar1 = false;
        if (local_1c < 8) {
          bVar1 = local_18 < iVar2 + -1;
        }
        if (!bVar1) break;
        _space(3);
        local_1c = local_1c + 1;
      }
      if (local_18 < iVar2 + -1) {
        _space(_gap + -1);
      }
      (&DAT_10000804c)[(long)local_18 * 6] = 0;
    }
    _putchar(10);
    iVar4 = param_1;
  }
  iVar2 = _putchar(10);
  return iVar2;
}



void _print_year(void)

{
  uint uVar1;
  size_t sVar2;
  ulong uVar3;
  long lVar4;
  int local_3c;
  char acStack_38 [32];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004010;
  ___sprintf_chk(acStack_38,0,0x20,"%d");
  lVar4 = (long)_width;
  sVar2 = _strlen(acStack_38);
  _space((lVar4 - sVar2) / 2);
  uVar1 = _printf("%s\n\n");
  uVar3 = (ulong)uVar1;
  for (local_3c = 0; local_3c * _cols < 0xc; local_3c = local_3c + 1) {
    uVar3 = _print_row(local_3c);
  }
  if (*(long *)PTR____stack_chk_guard_100004010 == local_18) {
    return;
  }
                    // WARNING: Subroutine does not return
  ___stack_chk_fail(uVar3);
}



undefined8 entry(int param_1,long param_2)

{
  bool bVar1;
  int iVar2;
  int local_24;
  
  bVar1 = false;
  local_24 = 1;
  do {
    if (param_1 <= local_24) {
      _init_months();
      _print_year();
      return 0;
    }
    iVar2 = _strcmp(*(char **)(param_2 + (long)local_24 * 8),"-w");
    if (iVar2 == 0) {
      local_24 = local_24 + 1;
      if ((local_24 == param_1) ||
         (_width = _atoi(*(char **)(param_2 + (long)local_24 * 8)), _width < 0x14))
      goto LAB_100003e44;
    }
    else {
      if (bVar1) {
LAB_100003e44:
        _fprintf(*(FILE **)PTR____stderrp_100004018,"bad args\nUsage: %s year [-w width (>= 20)]\n")
        ;
                    // WARNING: Subroutine does not return
        _exit(1);
      }
      iVar2 = _sscanf(*(char **)(param_2 + (long)local_24 * 8),"%d");
      if ((iVar2 == 0) || (_year < 1)) {
        _year = 0x7b1;
      }
      bVar1 = true;
    }
    local_24 = local_24 + 1;
  } while( true );
}



void ___sprintf_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003e7c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____sprintf_chk_100004000)();
  return;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003e88. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004008)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _atoi(char *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e94. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__atoi_100004020)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _exit(int param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003ea0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__exit_100004028)(param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fprintf(FILE *param_1,char *param_2,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003eac. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fprintf_100004030)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003eb8. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004038)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _putchar(int param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ec4. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__putchar_100004040)(param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _sscanf(char *param_1,char *param_2,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ed0. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__sscanf_100004048)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _strcmp(char *param_1,char *param_2)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003edc. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__strcmp_100004050)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t _strlen(char *param_1)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ee8. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__strlen_100004058)();
  return sVar1;
}


