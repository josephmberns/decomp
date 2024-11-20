#include "bulls-and-cows-player-1.h"



int _irand(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = 0;
  if (param_1 != 0) {
    iVar1 = 0x7fffffff / param_1;
  }
  iVar1 = 0x7fffffff - (0x7fffffff - iVar1 * param_1);
  do {
    iVar3 = _rand();
  } while (iVar1 <= iVar3);
  iVar2 = 0;
  if (param_1 != 0) {
    iVar2 = iVar1 / param_1;
  }
  iVar1 = 0;
  if (iVar2 != 0) {
    iVar1 = iVar3 / iVar2;
  }
  return iVar1;
}



long _get_digits(int param_1,long param_2)

{
  int iVar1;
  int local_3c;
  char local_28 [16];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  builtin_strncpy(local_28,"123456789",10);
  for (local_3c = 0; local_3c < param_1; local_3c = local_3c + 1) {
    iVar1 = _irand(9 - local_3c);
    *(char *)(param_2 + local_3c) = local_28[local_3c + iVar1];
    if (iVar1 != 0) {
      local_28[local_3c + iVar1] = local_28[local_3c];
      local_28[local_3c] = *(char *)(param_2 + local_3c);
    }
  }
  if (*(long *)PTR____stack_chk_guard_100004008 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail();
  }
  return param_2;
}



int _score(long param_1,long param_2,int *param_3)

{
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  local_20 = 0;
  *param_3 = 0;
  local_24 = 0;
  for (local_1c = 0; *(char *)(param_2 + local_1c) != '\0'; local_1c = local_1c + 1) {
    if (*(char *)(param_2 + local_1c) == *(char *)(param_1 + local_1c)) {
      local_24 = local_24 + 1;
    }
    else {
      local_20 = local_20 | 1 << (ulong)((int)*(char *)(param_1 + local_1c) - 0x31U & 0x1f);
    }
  }
  while (local_1c != 0) {
    *param_3 = *param_3 +
               (uint)((local_20 &
                      1 << (ulong)((int)*(char *)(param_2 + (local_1c + -1)) - 0x31U & 0x1f)) != 0);
    local_1c = local_1c + -1;
  }
  return local_24;
}



void _pick(int param_1,int param_2,uint param_3,long param_4)

{
  int iVar1;
  undefined4 local_30;
  undefined4 local_2c;
  
  local_30 = 1;
  if (param_2 < param_1) {
    for (local_2c = 0; local_2c < 9; local_2c = local_2c + 1) {
      if ((param_3 & local_30) == 0) {
        *(char *)(param_4 + param_2) = (char)local_2c + '1';
        _pick(param_1,param_2 + 1,param_3 | local_30,param_4);
      }
      local_30 = local_30 << 1;
    }
  }
  else {
    iVar1 = (param_1 + 1) * _len;
    _len = _len + 1;
    ___strcpy_chk(_list + iVar1,param_4,0xffffffffffffffff);
  }
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _filter(void)

{
  int iVar1;
  undefined8 in_x0;
  int in_w1;
  int in_w2;
  int in_w3;
  long local_38;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  undefined8 local_18;
  
  local_28 = 0;
  local_38 = _list;
  local_24 = in_w3;
  local_20 = in_w2;
  local_1c = in_w1;
  local_18 = in_x0;
  while (local_28 < _len) {
    iVar1 = _score(local_38,local_18,&local_2c);
    if ((iVar1 == local_20) && (local_2c == local_24)) {
      local_38 = local_38 + (local_1c + 1);
      local_28 = local_28 + 1;
    }
    else {
      _len = _len + -1;
      ___strcpy_chk(local_38,_list + _len * (local_1c + 1),0xffffffffffffffff);
    }
  }
  return;
}



void _game(char *param_1,undefined8 param_2)

{
  void *pvVar1;
  undefined8 uVar2;
  bool bVar3;
  int iVar4;
  size_t sVar5;
  int iVar6;
  undefined local_30 [4];
  int local_2c;
  int local_28;
  int local_24;
  undefined8 local_20;
  char *local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  sVar5 = _strlen(param_1);
  iVar6 = (int)sVar5;
  local_24 = 0;
  local_28 = 1;
  while( true ) {
    bVar3 = false;
    if (local_24 < iVar6) {
      local_28 = local_28 * (9 - local_24);
      bVar3 = local_28 != 0;
    }
    if (!bVar3) break;
    local_24 = local_24 + 1;
  }
  _list = _malloc((long)(local_28 * (iVar6 + 1)));
  _pick(sVar5 & 0xffffffff,0,0,local_20);
  local_28 = 1;
  local_2c = 0;
  while (uVar2 = local_20, pvVar1 = _list, iVar6 != local_2c) {
    iVar4 = _irand(_len);
    ___strcpy_chk(uVar2,(long)pvVar1 + (long)((iVar6 + 1) * iVar4),0xffffffffffffffff);
    local_2c = _score(local_18,local_20,local_30);
    _printf("Guess %2d| %s    (from: %d)\nScore   | %d bull, %d cow\n%s");
    _filter();
    local_28 = local_28 + 1;
  }
  return;
}



undefined8 entry(int param_1,long param_2)

{
  time_t tVar1;
  int local_50;
  undefined8 local_38;
  undefined2 local_30;
  undefined8 local_28;
  undefined2 local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  if (param_1 < 2) {
    local_50 = 4;
  }
  else {
    local_50 = _atoi(*(char **)(param_2 + 8));
  }
  local_28 = 0;
  local_20 = 0;
  local_38 = 0;
  local_30 = 0;
  tVar1 = _time((time_t *)0x0);
  _srand((uint)tVar1);
  _get_digits(local_50,&local_28);
  _printf("%sSecret  | %s\n%s");
  _game(&local_28,&local_38);
  if (*(long *)PTR____stack_chk_guard_100004008 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail();
  }
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003ec8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



void ___strcpy_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003ed4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____strcpy_chk_100004010)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _atoi(char *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ee0. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__atoi_100004018)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003eec. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004020)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ef8. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004028)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _rand(void)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f04. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__rand_100004030)();
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _srand(uint param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f10. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__srand_100004038)(param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t _strlen(char *param_1)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f1c. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__strlen_100004040)();
  return sVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

time_t _time(time_t *param_1)

{
  time_t tVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f28. Too many branches
                    // WARNING: Treating indirect jump as call
  tVar1 = (*(code *)PTR__time_100004048)();
  return tVar1;
}


