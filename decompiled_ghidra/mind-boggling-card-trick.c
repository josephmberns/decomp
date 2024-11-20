#include "mind-boggling-card-trick.h"



uint _rand_n(uint param_1)

{
  uint uVar1;
  undefined4 local_1c;
  
  for (local_1c = 1; local_1c < param_1; local_1c = local_1c << 1 | 1) {
  }
  do {
    uVar1 = _rand();
  } while (param_1 <= (uVar1 & local_1c));
  return uVar1 & local_1c;
}



undefined _rand_card(void)

{
  undefined uVar1;
  
  uVar1 = _rand_n(0x34);
  return uVar1;
}



int _print_card(void)

{
  int iVar1;
  
  iVar1 = _printf(" %s%c");
  return iVar1;
}



void _shuffle(long param_1)

{
  undefined uVar1;
  byte bVar2;
  int local_1c;
  
  for (local_1c = 0; local_1c < 0x34; local_1c = local_1c + 1) {
    bVar2 = _rand_card();
    uVar1 = *(undefined *)(param_1 + local_1c);
    *(undefined *)(param_1 + local_1c) = *(undefined *)(param_1 + (ulong)bVar2);
    *(undefined *)(param_1 + (ulong)bVar2) = uVar1;
  }
  return;
}



bool _trick(void)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  int local_84;
  int local_80;
  int local_74;
  int local_70;
  byte local_69;
  byte abStack_66 [13];
  byte abStack_59 [13];
  byte abStack_4c [52];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  local_70 = 0;
  local_74 = 0;
  for (local_69 = 0; local_69 < 0x34; local_69 = local_69 + 1) {
    abStack_4c[local_69] = local_69;
  }
  _shuffle(abStack_4c);
  _printf("Discarded:");
  for (local_69 = 0; local_69 < 0x34; local_69 = local_69 + 2) {
    bVar2 = abStack_4c[local_69];
    if ((bVar2 & 1) == 0) {
      lVar5 = (long)local_74;
      local_74 = local_74 + 1;
      abStack_66[lVar5] = abStack_4c[(int)(local_69 + 1)];
    }
    else {
      lVar5 = (long)local_70;
      local_70 = local_70 + 1;
      abStack_59[lVar5] = abStack_4c[(int)(local_69 + 1)];
    }
    _print_card(bVar2);
  }
  _printf("\n");
  if (local_70 < local_74) {
    local_84 = local_70;
  }
  else {
    local_84 = local_74;
  }
  bVar2 = _rand_n(local_84);
  for (local_69 = 0; local_69 < bVar2; local_69 = local_69 + 1) {
    iVar3 = _rand_n(local_70);
    iVar4 = _rand_n(local_74);
    bVar1 = abStack_59[iVar3];
    abStack_59[iVar3] = abStack_66[iVar4];
    abStack_66[iVar4] = bVar1;
  }
  local_80 = 0;
  for (local_69 = 0; (int)(uint)local_69 < local_70; local_69 = local_69 + 1) {
    local_80 = local_80 + (uint)((abStack_59[local_69] & 1) == 1);
  }
  for (local_69 = 0; (int)(uint)local_69 < local_74; local_69 = local_69 + 1) {
    local_80 = local_80 - (uint)((abStack_66[local_69] & 1) == 0);
  }
  iVar3 = _printf(
                 "The number of black cards in the \'black\' pile %s the number of red cards in the \'red\' pile.\n"
                 );
  if (*(long *)PTR____stack_chk_guard_100004008 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(iVar3);
  }
  return local_80 == 0;
}



undefined4 entry(void)

{
  int iVar1;
  FILE *pFVar2;
  size_t sVar3;
  uint local_1c;
  uint local_18;
  undefined4 local_14;
  
  local_14 = 0;
  pFVar2 = _fopen("/dev/urandom","r");
  if (pFVar2 == (FILE *)0x0) {
    _fprintf(*(FILE **)PTR____stderrp_100004010,"cannot open /dev/urandom\n");
    local_14 = 0xff;
  }
  else {
    sVar3 = _fread(&local_18,4,1,pFVar2);
    if (sVar3 == 1) {
      _fclose(pFVar2);
      _srand(local_18);
      for (local_1c = 1; local_1c < 6; local_1c = local_1c + 1) {
        iVar1 = _printf("Simulation %d\n");
        _trick(iVar1);
        _printf("\n");
      }
      _printf("Result: %d successes out of %d simulations\n");
      local_14 = 0;
    }
    else {
      _fprintf(*(FILE **)PTR____stderrp_100004010,"failed to read from /dev/urandom\n");
      local_14 = 0xff;
    }
  }
  return local_14;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003e24. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fclose(FILE *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e30. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fclose_100004018)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

FILE * _fopen(char *param_1,char *param_2)

{
  FILE *pFVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e3c. Too many branches
                    // WARNING: Treating indirect jump as call
  pFVar1 = (FILE *)(*(code *)PTR__fopen_100004020)();
  return pFVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fprintf(FILE *param_1,char *param_2,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e48. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fprintf_100004028)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t _fread(void *param_1,size_t param_2,size_t param_3,FILE *param_4)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e54. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__fread_100004030)();
  return sVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e60. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004038)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _rand(void)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e6c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__rand_100004040)();
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _srand(uint param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003e78. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__srand_100004048)(param_1);
  return;
}


