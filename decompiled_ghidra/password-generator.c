#include "password-generator.h"



void _GetPassword(void)

{
  long lVar1;
  int iVar2;
  long alStack_d0 [2];
  undefined *local_c0;
  undefined *local_b8;
  uint local_b0;
  uint local_ac;
  undefined *local_a8;
  undefined *local_a0;
  uint local_98;
  uint local_94;
  undefined *local_90;
  undefined *local_88;
  uint local_80;
  uint local_7c;
  undefined *local_78;
  int local_6c;
  ulong local_68;
  long local_60;
  char local_51;
  int local_50;
  int local_4c;
  undefined *local_40;
  int local_34;
  int local_30 [6];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004010;
  local_30[2] = 1;
  local_30[3] = 1;
  local_30[0] = 1;
  local_30[1] = 1;
  for (local_34 = 4; local_34 < _length; local_34 = local_34 + 1) {
    iVar2 = _rand();
    local_30[iVar2 % 4] = local_30[iVar2 % 4] + 1;
  }
  local_68 = (ulong)(_length + 1) + 0xf & 0xfffffffffffffff0;
  local_40 = (undefined *)&local_c0;
  (*(code *)PTR____chkstk_darwin_100004000)();
  lVar1 = -local_68;
  local_60 = (long)&local_c0 + lVar1;
  local_4c = 0;
  while (local_4c < _length) {
    local_50 = _rand();
    local_50 = local_50 % 4;
    if (local_30[local_50] != 0) {
      local_6c = local_50;
      if (local_50 == 2) {
        local_78 = PTR_s_0123456789_100008010;
        iVar2 = _rand();
        local_51 = local_78[iVar2 % 10];
        while( true ) {
          local_7c = 0;
          if (_exSymbols != '\0') {
            local_80 = 1;
            if ((((((local_51 != 'I') && (local_80 = 1, local_51 != 'l')) &&
                  (local_80 = 1, local_51 != '1')) &&
                 ((local_80 = 1, local_51 != 'O' && (local_80 = 1, local_51 != '0')))) &&
                (local_80 = 1, local_51 != '5')) &&
               ((local_80 = 1, local_51 != 'S' && (local_80 = 1, local_51 != '2')))) {
              local_80 = (uint)(local_51 == 'Z');
            }
            local_7c = local_80;
          }
          if (local_7c == 0) break;
          local_88 = (&_symbols)[local_50];
          iVar2 = _rand();
          local_51 = local_88[iVar2 % 10];
        }
        *(char *)(local_60 + local_4c) = local_51;
      }
      else if (local_50 == 3) {
        local_90 = PTR_s__________________<_>___________100008018;
        iVar2 = _rand();
        local_51 = local_90[iVar2 % 0x1e];
        while( true ) {
          local_94 = 0;
          if (_exSymbols != '\0') {
            local_98 = 1;
            if ((((local_51 != 'I') && (local_98 = 1, local_51 != 'l')) &&
                (local_98 = 1, local_51 != '1')) &&
               (((local_98 = 1, local_51 != 'O' && (local_98 = 1, local_51 != '0')) &&
                ((local_98 = 1, local_51 != '5' &&
                 ((local_98 = 1, local_51 != 'S' && (local_98 = 1, local_51 != '2')))))))) {
              local_98 = (uint)(local_51 == 'Z');
            }
            local_94 = local_98;
          }
          if (local_94 == 0) break;
          local_a0 = (&_symbols)[local_50];
          iVar2 = _rand();
          local_51 = local_a0[iVar2 % 0x1e];
        }
        *(char *)(local_60 + local_4c) = local_51;
      }
      else {
        local_a8 = (&_symbols)[local_50];
        iVar2 = _rand();
        local_51 = local_a8[iVar2 % 0x1a];
        while( true ) {
          local_ac = 0;
          if (_exSymbols != '\0') {
            local_b0 = 1;
            if ((((local_51 != 'I') && (local_b0 = 1, local_51 != 'l')) &&
                (local_b0 = 1, local_51 != '1')) &&
               (((local_b0 = 1, local_51 != 'O' && (local_b0 = 1, local_51 != '0')) &&
                ((local_b0 = 1, local_51 != '5' &&
                 ((local_b0 = 1, local_51 != 'S' && (local_b0 = 1, local_51 != '2')))))))) {
              local_b0 = (uint)(local_51 == 'Z');
            }
            local_ac = local_b0;
          }
          if (local_ac == 0) break;
          local_b8 = (&_symbols)[local_50];
          iVar2 = _rand();
          local_51 = local_b8[iVar2 % 0x1a];
        }
        *(char *)(local_60 + local_4c) = local_51;
      }
      local_4c = local_4c + 1;
      local_30[local_50] = local_30[local_50] + -1;
    }
  }
  *(undefined *)(local_60 + _length) = 0;
  *(long *)((long)alStack_d0 + lVar1) = local_60;
  iVar2 = _printf("%s\n");
  local_c0 = local_40;
  if (*(long *)PTR____stack_chk_guard_100004010 == local_18) {
    return;
  }
                    // WARNING: Subroutine does not return
  ___stack_chk_fail(iVar2);
}



undefined4 entry(int param_1,long param_2)

{
  int iVar1;
  time_t tVar2;
  int local_28;
  int local_24;
  
  tVar2 = _time((time_t *)0x0);
  _seed = (uint)tVar2;
  local_24 = 1;
  do {
    if (param_1 <= local_24) {
      _srand(_seed);
      for (local_28 = 0; local_28 < _count; local_28 = local_28 + 1) {
        _GetPassword();
      }
      return 0;
    }
    switch(*(undefined *)(*(long *)(param_2 + (long)local_24 * 8) + 1)) {
    case 99:
      iVar1 = _sscanf(*(char **)(param_2 + (long)(local_24 + 1) * 8),"%d");
      if (iVar1 != 1) {
        _puts("Unrecognized input. Syntax: -c [integer]");
        return 0xffffffff;
      }
      if (_count < 1) {
        _puts("Count must be at least 1.");
        return 0xffffffff;
      }
      local_24 = local_24 + 1;
      break;
    default:
      _printf(
             "Help:\nThis program generates a random password.\nCommands:Set password length: -l [integer]\nSet password count: -c [integer]\nSet seed: -s [integer]\nExclude similiar characters: -e\nDisplay help: -h"
             );
      return 0;
    case 0x65:
      _exSymbols = 1;
      break;
    case 0x6c:
      iVar1 = _sscanf(*(char **)(param_2 + (long)(local_24 + 1) * 8),"%d");
      if (iVar1 != 1) {
        _puts("Unrecognized input. Syntax: -l [integer]");
        return 0xffffffff;
      }
      if (_length < 4) {
        _puts("Password length must be at least 4 characters.");
        return 0xffffffff;
      }
      local_24 = local_24 + 1;
      break;
    case 0x73:
      iVar1 = _sscanf(*(char **)(param_2 + (long)(local_24 + 1) * 8),"%d");
      if (iVar1 != 1) {
        _puts("Unrecognized input. Syntax: -s [integer]");
        return 0xffffffff;
      }
      local_24 = local_24 + 1;
    }
    local_24 = local_24 + 1;
  } while( true );
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003d54. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004008)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003d60. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004018)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _puts(char *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003d6c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__puts_100004020)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _rand(void)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003d78. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__rand_100004028)();
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _srand(uint param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003d84. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__srand_100004030)(param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _sscanf(char *param_1,char *param_2,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003d90. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__sscanf_100004038)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

time_t _time(time_t *param_1)

{
  time_t tVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003d9c. Too many branches
                    // WARNING: Treating indirect jump as call
  tVar1 = (*(code *)PTR__time_100004040)();
  return tVar1;
}


