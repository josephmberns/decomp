#include "anagrams-deranged-anagrams.h"



undefined4 _deranged(long param_1,long param_2)

{
  int local_1c;
  
  local_1c = 0;
  while( true ) {
    if (*(char *)(param_1 + local_1c) == '\0') {
      return 1;
    }
    if (*(char *)(param_1 + local_1c) == *(char *)(param_2 + local_1c)) break;
    local_1c = local_1c + 1;
  }
  return 0;
}



int _count_letters(long param_1,long param_2)

{
  int local_30;
  int local_2c;
  
  ___memset_chk(param_2,0,0x1a,0xffffffffffffffff);
  local_2c = 0;
  local_30 = 0;
  while( true ) {
    if (*(char *)(param_1 + local_2c) == '\0') {
      return local_30;
    }
    if ((*(char *)(param_1 + local_2c) < 'a') || ('z' < *(char *)(param_1 + local_2c))) break;
    local_30 = local_30 + 1;
    *(char *)(param_2 + *(int *)(&_char_to_idx + (ulong)*(byte *)(param_1 + local_2c) * 4)) =
         *(char *)(param_2 + *(int *)(&_char_to_idx + (ulong)*(byte *)(param_1 + local_2c) * 4)) +
         '\x01';
    local_2c = local_2c + 1;
  }
  return 0;
}



undefined8 _insert(void *param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *local_48;
  void *local_40;
  int local_34;
  void *local_20;
  
  local_20 = param_1;
  for (local_34 = 0; local_34 < 0x19; local_34 = local_34 + 1) {
    local_40 = *(void **)((long)local_20 + (ulong)*(byte *)(param_3 + local_34) * 8);
    if (local_40 == (void *)0x0) {
      local_40 = _calloc(1,0x50);
      *(void **)((long)local_20 + (ulong)*(byte *)(param_3 + local_34) * 8) = local_40;
    }
    local_20 = local_40;
  }
  puVar2 = (undefined8 *)_malloc(0x10);
  *puVar2 = param_2;
  puVar2[1] = *(undefined8 *)((long)local_20 + (ulong)*(byte *)(param_3 + 0x19) * 8);
  *(undefined8 **)((long)local_20 + (ulong)*(byte *)(param_3 + 0x19) * 8) = puVar2;
  local_48 = (undefined8 *)puVar2[1];
  while( true ) {
    if (local_48 == (undefined8 *)0x0) {
      return 0;
    }
    iVar1 = _deranged(*puVar2,*local_48);
    if (iVar1 != 0) break;
    local_48 = (undefined8 *)local_48[1];
  }
  return *local_48;
}



undefined4 entry(int param_1,long param_2)

{
  uint uVar1;
  void *pvVar2;
  char *local_178;
  int local_154;
  undefined auStack_150 [84];
  int local_fc;
  stat sStack_f8;
  void *local_68;
  int local_60;
  int local_5c;
  long local_58;
  int local_4c;
  undefined4 local_48;
  undefined auStack_42 [26];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100004010;
  local_48 = 0;
  local_60 = 0;
  if (param_1 < 2) {
    local_178 = "unixdict.txt";
  }
  else {
    local_178 = *(char **)(param_2 + 8);
  }
  local_58 = param_2;
  local_4c = param_1;
  local_fc = _open(local_178,0);
  uVar1 = _fstat(local_fc,&sStack_f8);
  pvVar2 = (void *)(ulong)uVar1;
  if ((int)uVar1 < 0) {
    local_48 = 1;
  }
  else {
    local_68 = _malloc(sStack_f8.st_size);
    _read(local_fc,local_68,sStack_f8.st_size);
    _close(local_fc);
    pvVar2 = _memset(auStack_150,0,0x50);
    local_154 = 0;
    for (local_5c = 0; _freq[local_5c] != '\0'; local_5c = local_5c + 1) {
      *(int *)(&_char_to_idx + (ulong)(byte)_freq[local_5c] * 4) = local_5c;
    }
    local_60 = 0;
    for (local_5c = 0; local_5c < sStack_f8.st_size; local_5c = local_5c + 1) {
      if (*(char *)((long)local_68 + (long)local_5c) == '\n') {
        *(undefined *)((long)local_68 + (long)local_5c) = 0;
        if (local_154 < local_5c - local_60) {
          _count_letters((long)local_68 + (long)local_60);
          pvVar2 = (void *)_insert(auStack_150,(long)local_68 + (long)local_60,auStack_42);
          if (pvVar2 != (void *)0x0) {
            local_154 = local_5c - local_60;
          }
        }
        local_60 = local_5c + 1;
        local_5c = local_60;
      }
    }
    if (local_154 != 0) {
      uVar1 = _printf("longest derangement: %s %s\n");
      pvVar2 = (void *)(ulong)uVar1;
    }
    local_48 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_100004010 == local_28) {
    return local_48;
  }
                    // WARNING: Subroutine does not return
  ___stack_chk_fail(pvVar2);
}



void ___memset_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003ee4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____memset_chk_100004000)();
  return;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003ef0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004008)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _calloc(size_t param_1,size_t param_2)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003efc. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__calloc_100004018)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _close(int param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f08. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__close_100004020)(param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fstat(int param_1,stat *param_2)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f14. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fstat_100004028)(param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f20. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004030)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _memset(void *param_1,int param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f2c. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__memset_100004038)(param_1,param_2);
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _open(char *param_1,int param_2,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f38. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__open_100004040)((int)param_1,param_2);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f44. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004048)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

ssize_t _read(int param_1,void *param_2,size_t param_3)

{
  ssize_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f50. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__read_100004050)(param_1);
  return sVar1;
}


