#include "prime-decomposition-1.h"



int _init_primes(void)

{
  int iVar1;
  FILE *pFVar2;
  uint local_20;
  uint local_1c;
  
  local_20 = 4;
  _pbits = _malloc(0x8888889);
  if (_pbits == (void *)0x0) {
    _perror("malloc");
                    // WARNING: Subroutine does not return
    _exit(1);
  }
  pFVar2 = _fopen("primebits","r");
  if (pFVar2 == (FILE *)0x0) {
    ___memset_chk(_pbits,0xff,0x8888889,0xffffffffffffffff);
    for (local_1c = 7; local_1c < 0x10000; local_1c = _next_prime(local_1c)) {
      if (local_20 < local_1c) {
        local_20 = local_20 << 1;
        _fprintf(*(FILE **)PTR____stderrp_100004018,"sieve %u\n");
      }
      _sieve(local_1c);
    }
    pFVar2 = _fopen("primebits","w");
    _fwrite(_pbits,1,0x8888889,pFVar2);
    iVar1 = _fclose(pFVar2);
  }
  else {
    _fread(_pbits,1,0x8888889,pFVar2);
    iVar1 = _fclose(pFVar2);
  }
  return iVar1;
}



void _sieve(uint param_1)

{
  byte bVar1;
  uint local_6c;
  uint local_68;
  ulong local_60 [8];
  byte abStack_20 [8];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004010;
  for (local_68 = 0; (int)local_68 < 8; local_68 = local_68 + 1) {
    bVar1 = (&_rem_num)[(int)local_68];
    abStack_20[(int)local_68] = ~(&_bit_pos)[(int)(bVar1 * param_1) % 0x1e];
    local_60[(int)local_68] = (long)((int)(bVar1 * param_1) / 0x1e);
  }
  local_6c = (uint)local_60[1];
  for (local_68 = 7; local_68 != 0; local_68 = local_68 + -1) {
    local_60[(int)local_68] = local_60[(int)local_68] - local_60[(int)(local_68 + -1)];
  }
  local_60[0] = (ulong)param_1;
  for (local_68 = 1; (int)local_68 < 8; local_68 = local_68 + 1) {
    local_60[0] = local_60[0] - local_60[(int)local_68];
  }
  local_68 = 1;
  for (; local_6c < 0x8888889; local_6c = local_6c + (int)local_60[(int)local_68]) {
    *(byte *)(_pbits + (int)local_6c) =
         *(byte *)(_pbits + (int)local_6c) & abStack_20[(int)local_68];
    local_68 = local_68 + 1 & 7;
  }
  if (*(long *)PTR____stack_chk_guard_100004010 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail();
  }
  return;
}



int _next_prime(uint param_1)

{
  byte local_12;
  byte local_11;
  ulong local_10;
  int local_4;
  
  if (param_1 < 6) {
    if (param_1 == 2) {
      local_4 = 3;
    }
    else if (param_1 == 3) {
      local_4 = 5;
    }
    else if (param_1 == 5) {
      local_4 = 7;
    }
    else {
      local_4 = 2;
    }
  }
  else {
    local_10 = (ulong)(param_1 / 0x1e);
    local_11 = (&_bit_pos)[param_1 % 0x1e] << 1;
    local_12 = 0;
    while (1 << (ulong)(local_12 & 0x1f) < (int)(uint)local_11) {
      local_12 = local_12 + 1;
    }
    while (*(byte *)(_pbits + local_10) < local_11 || local_11 == 0) {
      local_10 = local_10 + 1;
      if (0x8888888 < (long)local_10) {
        return 0;
      }
      local_12 = 0;
      local_11 = 1;
    }
    if ((long)local_10 < 0x8888889) {
      for (; (*(byte *)(_pbits + local_10) & local_11) == 0; local_11 = local_11 << 1) {
        local_12 = local_12 + 1;
      }
      local_4 = (int)local_10 * 0x1e + (uint)(byte)(&_rem_num)[local_12];
    }
    else {
      local_4 = 0;
    }
  }
  return local_4;
}



byte _is_prime(ulong param_1)

{
  bool bVar1;
  ulong uVar2;
  byte bVar3;
  ulong uVar4;
  uint local_24;
  
  if (param_1 < 6) {
    bVar3 = 1;
    if ((param_1 != 2) && (bVar3 = 1, param_1 != 3)) {
      bVar3 = param_1 == 5;
    }
  }
  else if (param_1 < 0xffffffff) {
    bVar3 = *(byte *)(_pbits + param_1 / 0x1e) & (&_bit_pos)[param_1 % 0x1e];
  }
  else {
    local_24 = 2;
    while( true ) {
      bVar1 = false;
      if (local_24 != 0) {
        bVar1 = (ulong)local_24 * (ulong)local_24 < param_1 ||
                (ulong)local_24 * (ulong)local_24 - param_1 == 0;
      }
      if (!bVar1) {
        return 1;
      }
      uVar4 = (ulong)local_24;
      uVar2 = 0;
      if (uVar4 != 0) {
        uVar2 = param_1 / uVar4;
      }
      if (param_1 == uVar2 * uVar4) break;
      local_24 = _next_prime(local_24);
    }
    bVar3 = 0;
  }
  return bVar3;
}



int _decompose(ulong param_1,ulong *param_2)

{
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  int local_30;
  uint local_2c;
  ulong local_20;
  int local_14;
  
  local_2c = 0;
  local_30 = 0;
  local_20 = param_1;
  if ((param_1 < 0x100000000) && (iVar2 = _is_prime(param_1), iVar2 != 0)) {
    *param_2 = param_1;
    local_14 = 1;
  }
  else {
    while (((ulong)local_2c * (ulong)local_2c <= local_20 &&
           (local_2c = _next_prime(local_2c), local_2c != 0))) {
      while( true ) {
        uVar3 = (ulong)local_2c;
        uVar1 = 0;
        if (uVar3 != 0) {
          uVar1 = local_20 / uVar3;
        }
        if (local_20 != uVar1 * uVar3) break;
        uVar1 = 0;
        if ((ulong)local_2c != 0) {
          uVar1 = local_20 / local_2c;
        }
        lVar4 = (long)local_30;
        local_30 = local_30 + 1;
        param_2[lVar4] = (ulong)local_2c;
        local_20 = uVar1;
      }
    }
    if (1 < local_20) {
      lVar4 = (long)local_30;
      local_30 = local_30 + 1;
      param_2[lVar4] = local_20;
    }
    local_14 = local_30;
  }
  return local_14;
}



undefined8 entry(void)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  uint local_230;
  int local_228;
  undefined auStack_220 [504];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100004010;
  uVar3 = _init_primes();
  for (local_230 = 1; local_230 < 0x40; local_230 = local_230 + 1) {
    _printf("2^%u - 1 = %llu");
    _fflush(*(FILE **)PTR____stdoutp_100004020);
    iVar1 = _decompose((1L << ((ulong)local_230 & 0x3f)) + -1,auStack_220);
    if (1 < iVar1) {
      for (local_228 = 0; local_228 < iVar1; local_228 = local_228 + 1) {
        _printf(" %c %llu");
      }
    }
    uVar2 = _putchar(10);
    uVar3 = (ulong)uVar2;
  }
  if (*(long *)PTR____stack_chk_guard_100004010 != local_28) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(uVar3);
  }
  return 0;
}



void ___memset_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003ecc. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____memset_chk_100004000)();
  return;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003ed8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004008)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _exit(int param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003ee4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__exit_100004028)(param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fclose(FILE *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ef0. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fclose_100004030)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fflush(FILE *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003efc. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fflush_100004038)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

FILE * _fopen(char *param_1,char *param_2)

{
  FILE *pFVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f08. Too many branches
                    // WARNING: Treating indirect jump as call
  pFVar1 = (FILE *)(*(code *)PTR__fopen_100004040)();
  return pFVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fprintf(FILE *param_1,char *param_2,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f14. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fprintf_100004048)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t _fread(void *param_1,size_t param_2,size_t param_3,FILE *param_4)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f20. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__fread_100004050)();
  return sVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t _fwrite(void *param_1,size_t param_2,size_t param_3,FILE *param_4)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f2c. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__fwrite_100004058)();
  return sVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f38. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004060)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _perror(char *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f44. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__perror_100004068)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f50. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004070)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _putchar(int param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f5c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__putchar_100004078)(param_1);
  return iVar1;
}


