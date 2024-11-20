#include "playing-cards.h"



int _show_card(void)

{
  int iVar1;
  
  if (_locale_ok == 0) {
    iVar1 = _printf(" %s%s");
  }
  else {
    iVar1 = _printf(" %lc%s");
  }
  return iVar1;
}



undefined4 * _new_deck(void)

{
  undefined4 *puVar1;
  int local_1c;
  int local_18;
  int local_14;
  
  puVar1 = (undefined4 *)_malloc(0x274);
  *puVar1 = 0x34;
  local_1c = 0;
  for (local_14 = 0; local_14 < 4; local_14 = local_14 + 1) {
    for (local_18 = 1; local_18 < 0xe; local_18 = local_18 + 1) {
      puVar1[(long)local_1c * 3 + 1] = local_14;
      puVar1[(long)local_1c * 3 + 2] = local_18;
      local_1c = local_1c + 1;
    }
  }
  return puVar1;
}



int _show_deck(int *param_1)

{
  int iVar1;
  int local_1c;
  
  _printf("%d cards:");
  for (local_1c = 0; local_1c < *param_1; local_1c = local_1c + 1) {
    _show_card(param_1 + (long)local_1c * 3 + 1);
  }
  iVar1 = _printf("\n");
  return iVar1;
}



uint _cmp_card(long param_1,long param_2)

{
  undefined4 local_1c;
  
  if (*(int *)(param_1 + 8) < *(int *)(param_2 + 8)) {
    local_1c = 0xffffffff;
  }
  else {
    local_1c = (uint)(*(int *)(param_2 + 8) < *(int *)(param_1 + 8));
  }
  return local_1c;
}



int * _deal_card(int *param_1)

{
  int iVar1;
  int *local_8;
  
  if (*param_1 == 0) {
    local_8 = (int *)0x0;
  }
  else {
    iVar1 = *param_1;
    *param_1 = iVar1 + -1;
    local_8 = param_1 + (long)(iVar1 + -1) * 3 + 1;
  }
  return local_8;
}



void _shuffle_deck(int *param_1)

{
  int iVar1;
  int local_1c;
  
  for (local_1c = 0; local_1c < *param_1; local_1c = local_1c + 1) {
    iVar1 = _rand();
    param_1[(long)local_1c * 3 + 3] = iVar1;
  }
  _qsort(param_1 + 1,(long)*param_1,0xc,(int *)_cmp_card);
  return;
}



undefined8 entry(void)

{
  undefined8 uVar1;
  long lVar2;
  int local_1c;
  int local_18;
  
  uVar1 = _new_deck();
  lVar2 = _setlocale(2,"");
  _locale_ok = (uint)(lVar2 != 0);
  _printf("New deck, ");
  _show_deck(uVar1);
  _printf("\nShuffle and deal to three players:\n");
  _shuffle_deck(uVar1);
  for (local_18 = 0; local_18 < 3; local_18 = local_18 + 1) {
    for (local_1c = 0; local_1c < 5; local_1c = local_1c + 1) {
      _deal_card(uVar1);
      _show_card();
    }
    _printf("\n");
  }
  _printf("Left in deck ");
  _show_deck(uVar1);
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ed8. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004000)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ee4. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004008)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _qsort(void *param_1,size_t param_2,size_t param_3,int *param_4)

{
                    // WARNING: Could not recover jumptable at 0x000100003ef0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__qsort_100004010)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _rand(void)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003efc. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__rand_100004018)();
  return iVar1;
}



void _setlocale(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f08. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__setlocale_100004020)();
  return;
}


