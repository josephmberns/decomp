#include "perfect-shuffle.h"



undefined4 entry(void)

{
  int iVar1;
  undefined8 local_28;
  int local_20;
  undefined4 local_1c;
  int local_18;
  undefined4 local_14;
  
  local_14 = 0;
  local_28 = 0;
  local_18 = 0;
  while( true ) {
    if (6 < local_18) {
      return 0;
    }
    local_1c = *(undefined4 *)(&_kDecks + (long)local_18 * 4);
    iVar1 = _CreateDeck(&local_28,local_1c);
    if (iVar1 == 0) break;
    _InitDeck(local_28,local_1c);
    local_20 = 0;
    do {
      _ShuffleDeck(local_28,local_1c);
      local_20 = local_20 + 1;
      iVar1 = _InitedDeck(local_28,local_1c);
    } while (iVar1 == 0);
    _printf("Cards count: %d, shuffles required: %d.\n");
    _FreeDeck(&local_28);
    local_18 = local_18 + 1;
  }
  _fprintf(*(FILE **)PTR____stderrp_100004008,"Error: malloc() failed!\n");
  return 1;
}



bool _CreateDeck(undefined8 *param_1,int param_2)

{
  void *local_28;
  
  local_28 = (void *)0x0;
  if (param_1 != (undefined8 *)0x0) {
    local_28 = _malloc((long)param_2 << 2);
  }
  if (local_28 != (void *)0x0) {
    *param_1 = local_28;
  }
  return local_28 != (void *)0x0;
}



void _InitDeck(long param_1,int param_2)

{
  undefined4 local_10;
  
  if (param_1 != 0) {
    for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
      *(int *)(param_1 + (long)local_10 * 4) = local_10;
    }
  }
  return;
}



undefined4 _ShuffleDeck(long param_1,int param_2)

{
  int iVar1;
  int local_38;
  int local_34;
  long local_30;
  int local_24;
  long local_20;
  undefined4 local_14;
  
  local_30 = 0;
  local_24 = param_2;
  local_20 = param_1;
  iVar1 = _DuplicateDeck(&local_30,param_1,param_2);
  if (iVar1 == 0) {
    local_14 = 0;
  }
  else {
    local_38 = 0;
    for (local_34 = 0; local_34 < local_24 / 2; local_34 = local_34 + 1) {
      *(undefined4 *)(local_20 + (long)local_38 * 4) =
           *(undefined4 *)(local_30 + (long)local_34 * 4);
      *(undefined4 *)(local_20 + (long)(local_38 + 1) * 4) =
           *(undefined4 *)(local_30 + (long)(local_34 + local_24 / 2) * 4);
      local_38 = local_38 + 2;
    }
    _FreeDeck(&local_30);
    local_14 = 1;
  }
  return local_14;
}



undefined4 _InitedDeck(long param_1,int param_2)

{
  int local_18;
  
  local_18 = 0;
  while( true ) {
    if (param_2 <= local_18) {
      return 1;
    }
    if (*(int *)(param_1 + (long)local_18 * 4) != local_18) break;
    local_18 = local_18 + 1;
  }
  return 0;
}



void _FreeDeck(long *param_1)

{
  if (*param_1 != 0) {
    _free((void *)*param_1);
    *param_1 = 0;
  }
  return;
}



undefined4 _DuplicateDeck(undefined8 *param_1,long param_2,int param_3)

{
  int iVar1;
  undefined4 local_14;
  
  if ((param_2 == 0) || (iVar1 = _CreateDeck(param_1,param_3), iVar1 == 0)) {
    local_14 = 0;
  }
  else {
    ___memcpy_chk(*param_1,param_2,(long)param_3 << 2,0xffffffffffffffff);
    local_14 = 1;
  }
  return local_14;
}



void ___memcpy_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003efc. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____memcpy_chk_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fprintf(FILE *param_1,char *param_2,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f08. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fprintf_100004010)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f14. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004018)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f20. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004020)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f2c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004028)((int)param_1);
  return iVar1;
}


