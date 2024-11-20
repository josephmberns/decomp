#include "two-bullet-roulette.h"



undefined4 entry(void)

{
  time_t tVar1;
  
  tVar1 = _time((time_t *)0x0);
  _srand((uint)tVar1);
  FUN_1000039e8("LSLSFSF");
  FUN_1000039e8("LSLSFF");
  FUN_1000039e8("LLSFSF");
  FUN_1000039e8("LLSFF");
  return 0;
}



void FUN_1000039e8(undefined8 param_1)

{
  int iVar1;
  int local_5c;
  undefined auStack_41 [41];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  _memset(auStack_41,0,0x29);
  for (local_5c = 0; local_5c < 100000; local_5c = local_5c + 1) {
    FUN_100003b00(param_1);
  }
  FUN_100003bcc(param_1);
  iVar1 = _printf("%-40s produces %6.3f%% deaths.\n");
  if (*(long *)PTR____stack_chk_guard_100004008 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(iVar1);
  }
  return;
}



undefined4 FUN_100003b00(char *param_1)

{
  char cVar1;
  ulong uVar2;
  char *local_20;
  
  FUN_100003c9c();
  local_20 = param_1;
  do {
    if (*local_20 == '\0') {
      return 0;
    }
    cVar1 = *local_20;
    if (cVar1 == 'F') {
      uVar2 = FUN_100003e4c();
      if ((uVar2 & 1) != 0) {
        return 1;
      }
    }
    else if (cVar1 == 'L') {
      FUN_100003cec();
    }
    else if (cVar1 == 'S') {
      FUN_100003db8();
    }
    local_20 = local_20 + 1;
  } while( true );
}



void FUN_100003bcc(char *param_1,undefined8 param_2)

{
  char cVar1;
  char *local_18;
  
  for (local_18 = param_1; *local_18 != '\0'; local_18 = local_18 + 1) {
    cVar1 = *local_18;
    if (cVar1 == 'F') {
      FUN_100003e84(param_2,"fire");
    }
    else if (cVar1 == 'L') {
      FUN_100003e84(param_2,"load");
    }
    else if (cVar1 == 'S') {
      FUN_100003e84(param_2,"spin");
    }
  }
  return;
}



void FUN_100003c9c(void)

{
  int local_4;
  
  for (local_4 = 0; local_4 < 6; local_4 = local_4 + 1) {
    (&DAT_100008000)[local_4] = 0;
  }
  return;
}



void FUN_100003cec(void)

{
  while ((DAT_100008000 & 1) != 0) {
    FUN_100003d28();
  }
  DAT_100008000 = 1;
  FUN_100003d28();
  return;
}



void FUN_100003d28(void)

{
  int local_8;
  
  DAT_100008000 = DAT_100008005 & 1;
  for (local_8 = 4; -1 < local_8; local_8 = local_8 + -1) {
    (&DAT_100008000)[local_8 + 1] = (&DAT_100008000)[local_8] & 1;
  }
  return;
}



void FUN_100003db8(void)

{
  int iVar1;
  undefined4 local_18;
  
  iVar1 = FUN_100003e1c(6);
  for (local_18 = 1; local_18 < iVar1 + 1; local_18 = local_18 + 1) {
    FUN_100003d28();
  }
  return;
}



int FUN_100003e1c(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = _rand();
  iVar1 = 0;
  if (param_1 != 0) {
    iVar1 = iVar2 / param_1;
  }
  return iVar2 - iVar1 * param_1;
}



byte FUN_100003e4c(void)

{
  byte bVar1;
  
  bVar1 = DAT_100008000 & 1;
  FUN_100003d28();
  return bVar1;
}



void FUN_100003e84(char *param_1,undefined8 param_2)

{
  if (*param_1 != '\0') {
    ___strcat_chk(param_1,", ",0xffffffffffffffff);
  }
  ___strcat_chk(param_1,param_2,0xffffffffffffffff);
  return;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003eec. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



void ___strcat_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003ef8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____strcat_chk_100004010)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _memset(void *param_1,int param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f04. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__memset_100004018)(param_1,param_2);
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f10. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004020)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _rand(void)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f1c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__rand_100004028)();
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _srand(uint param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f28. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__srand_100004030)(param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

time_t _time(time_t *param_1)

{
  time_t tVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f34. Too many branches
                    // WARNING: Treating indirect jump as call
  tVar1 = (*(code *)PTR__time_100004038)();
  return tVar1;
}


