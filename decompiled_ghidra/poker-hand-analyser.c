#include "poker-hand-analyser.h"



int _compare_card(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 local_20;
  undefined4 local_18;
  
  local_18 = (int)*param_1;
  local_20 = (int)*param_2;
  return local_18 - local_20;
}



undefined4 _equals_card(undefined8 param_1,undefined8 param_2)

{
  undefined4 local_14;
  undefined uStack_10;
  undefined4 local_c;
  undefined uStack_8;
  undefined4 local_4;
  
  local_c = (int)param_1;
  local_14 = (int)param_2;
  if ((local_c == local_14) &&
     (uStack_8 = (char)((ulong)param_1 >> 0x20), uStack_10 = (char)((ulong)param_2 >> 0x20),
     uStack_8 == uStack_10)) {
    local_4 = 1;
  }
  else {
    local_4 = 0;
  }
  return local_4;
}



undefined4 _are_distinct(void)

{
  int iVar1;
  int local_1c;
  int local_18;
  
  local_18 = 0;
  do {
    local_1c = local_18;
    if (3 < local_18) {
      return 1;
    }
    while (local_1c = local_1c + 1, local_1c < 5) {
      iVar1 = _equals_card(*(undefined8 *)(&_cards + (long)local_18 * 8),
                           *(undefined8 *)(&_cards + (long)local_1c * 8));
      if (iVar1 != 0) {
        return 0;
      }
    }
    local_18 = local_18 + 1;
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 _is_straight(void)

{
  undefined4 local_14;
  
  _qsort(&_cards,5,8,(int *)_compare_card);
  if (__cards + 4 == _DAT_100008020) {
    local_14 = 1;
  }
  else if (((_DAT_100008020 == 0xc) && (__cards == 0)) && (_DAT_100008018 == 3)) {
    local_14 = 1;
  }
  else {
    local_14 = 0;
  }
  return local_14;
}



undefined4 _is_flush(void)

{
  int local_8;
  
  local_8 = 1;
  while( true ) {
    if (4 < local_8) {
      return 1;
    }
    if ((&DAT_100008004)[(long)local_8 * 8] != DAT_100008004) break;
    local_8 = local_8 + 1;
  }
  return 0;
}



char * _analyze_hand(char *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  size_t sVar4;
  char *pcVar5;
  int local_6c;
  int local_64;
  char *local_58;
  int aiStack_4c [13];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  local_6c = 0;
  sVar4 = _strlen(param_1);
  if (sVar4 == 0xe) {
    for (local_64 = 0; local_64 < 0xe; local_64 = local_64 + 3) {
      iVar2 = _tolower((int)param_1[local_64]);
      pcVar5 = _strchr("23456789tjqka",iVar2);
      if (pcVar5 == (char *)0x0) {
        local_58 = "invalid";
        goto LAB_100003d10;
      }
      *(int *)(&_cards + (long)(local_64 / 3) * 8) = (int)pcVar5 + -16000;
      iVar2 = _tolower((int)param_1[local_64 + 1]);
      pcVar5 = _strchr("shdc",(int)(char)iVar2);
      if (pcVar5 == (char *)0x0) {
        local_58 = "invalid";
        goto LAB_100003d10;
      }
      (&DAT_100008004)[(long)(local_64 / 3) * 8] = (char)iVar2;
    }
    iVar2 = _are_distinct();
    if (iVar2 == 0) {
      local_58 = "invalid";
    }
    else {
      for (local_64 = 0; local_64 < 0xd; local_64 = local_64 + 1) {
        aiStack_4c[local_64] = 0;
      }
      for (local_64 = 0; local_64 < 5; local_64 = local_64 + 1) {
        aiStack_4c[*(int *)(&_cards + (long)local_64 * 8)] =
             aiStack_4c[*(int *)(&_cards + (long)local_64 * 8)] + 1;
      }
      for (local_64 = 0; local_64 < 0xd; local_64 = local_64 + 1) {
        if (0 < aiStack_4c[local_64]) {
          local_6c = local_6c + 1;
        }
      }
      if (local_6c == 2) {
        bVar1 = false;
        for (local_64 = 0; local_64 < 0xd; local_64 = local_64 + 1) {
          if (aiStack_4c[local_64] == 4) {
            bVar1 = true;
            break;
          }
        }
        if (bVar1) {
          local_58 = "four-of-a-kind";
        }
        else {
          local_58 = "full-house";
        }
      }
      else if (local_6c == 3) {
        bVar1 = false;
        for (local_64 = 0; local_64 < 0xd; local_64 = local_64 + 1) {
          if (aiStack_4c[local_64] == 3) {
            bVar1 = true;
            break;
          }
        }
        if (bVar1) {
          local_58 = "three-of-a-kind";
        }
        else {
          local_58 = "two-pairs";
        }
      }
      else if (local_6c == 4) {
        local_58 = "one-pair";
      }
      else {
        iVar2 = _is_flush();
        iVar3 = _is_straight();
        if ((iVar2 == 0) || (iVar3 == 0)) {
          if (iVar2 == 0) {
            if (iVar3 == 0) {
              local_58 = "high-card";
            }
            else {
              local_58 = "straight";
            }
          }
          else {
            local_58 = "flush";
          }
        }
        else {
          local_58 = "straight-flush";
        }
      }
    }
  }
  else {
    local_58 = "invalid";
  }
LAB_100003d10:
  if (*(long *)PTR____stack_chk_guard_100004008 == local_18) {
    return local_58;
  }
                    // WARNING: Subroutine does not return
  ___stack_chk_fail();
}



undefined8 entry(void)

{
  uint uVar1;
  void *pvVar2;
  int local_70;
  undefined8 auStack_68 [10];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  pvVar2 = _memcpy(auStack_68,&PTR_s_2h_2d_2c_kc_qd_100004040,0x50);
  for (local_70 = 0; local_70 < 10; local_70 = local_70 + 1) {
    _analyze_hand(auStack_68[local_70]);
    uVar1 = _printf("%s: %s\n");
    pvVar2 = (void *)(ulong)uVar1;
  }
  if (*(long *)PTR____stack_chk_guard_100004008 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(pvVar2);
  }
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003e2c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _memcpy(void *param_1,void *param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e38. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__memcpy_100004010)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e44. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004018)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _qsort(void *param_1,size_t param_2,size_t param_3,int *param_4)

{
                    // WARNING: Could not recover jumptable at 0x000100003e50. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__qsort_100004020)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * _strchr(char *param_1,int param_2)

{
  char *pcVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e5c. Too many branches
                    // WARNING: Treating indirect jump as call
  pcVar1 = (char *)(*(code *)PTR__strchr_100004028)(param_1,param_2);
  return pcVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t _strlen(char *param_1)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e68. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__strlen_100004030)();
  return sVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _tolower(int _c)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e74. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__tolower_100004038)(_c);
  return iVar1;
}


