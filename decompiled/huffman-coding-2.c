#include "huffman-coding-2.h"



long * _new_node(int param_1,undefined param_2,long param_3,long param_4)

{
  long lVar1;
  
  lVar1 = (long)_n_nodes;
  _n_nodes = _n_nodes + 1;
  lVar1 = lVar1 * 0x18;
  if (param_1 == 0) {
    *(long *)(&_pool + lVar1) = param_3;
    *(long *)(&DAT_100008020 + lVar1) = param_4;
    *(int *)(&DAT_100008028 + lVar1) = *(int *)(param_3 + 0x10) + *(int *)(param_4 + 0x10);
  }
  else {
    (&DAT_10000802c)[lVar1] = param_2;
    *(int *)(&DAT_100008028 + lVar1) = param_1;
  }
  return (long *)(&_pool + lVar1);
}



void _qinsert(long param_1)

{
  int iVar1;
  int local_10;
  
  local_10 = _qend;
  _qend = _qend + 1;
  while ((iVar1 = local_10 / 2, iVar1 != 0 &&
         (*(int *)(param_1 + 0x10) < *(int *)(*(long *)(_q + (long)iVar1 * 8) + 0x10)))) {
    *(undefined8 *)(_q + (long)local_10 * 8) = *(undefined8 *)(_q + (long)iVar1 * 8);
    local_10 = iVar1;
  }
  *(long *)(_q + (long)local_10 * 8) = param_1;
  return;
}



undefined8 _qremove(void)

{
  int local_10;
  int local_c;
  undefined8 local_8;
  
  local_c = 1;
  local_8 = *(undefined8 *)(_q + 8);
  if (_qend < 2) {
    local_8 = 0;
  }
  else {
    _qend = _qend + -1;
    while (local_10 = local_c * 2, local_10 < _qend) {
      if ((local_10 + 1 < _qend) &&
         (*(int *)(*(long *)(_q + (long)(local_10 + 1) * 8) + 0x10) <
          *(int *)(*(long *)(_q + (long)local_10 * 8) + 0x10))) {
        local_10 = local_10 + 1;
      }
      *(undefined8 *)(_q + (long)local_c * 8) = *(undefined8 *)(_q + (long)local_10 * 8);
      local_c = local_10;
    }
    *(undefined8 *)(_q + (long)local_c * 8) = *(undefined8 *)(_q + (long)_qend * 8);
  }
  return local_8;
}



void _build_code(undefined8 *param_1,long param_2,int param_3)

{
  if (*(char *)((long)param_1 + 0x14) == '\0') {
    *(undefined *)(param_2 + param_3) = 0x30;
    _build_code(*param_1,param_2,param_3 + 1);
    *(undefined *)(param_2 + param_3) = 0x31;
    _build_code(param_1[1],param_2,param_3 + 1);
  }
  else {
    *(undefined *)(param_2 + param_3) = 0;
    ___strcpy_chk(PTR__buf_100008010,param_2,0xffffffffffffffff);
    *(undefined **)(&_code + (long)*(char *)((long)param_1 + 0x14) * 8) = PTR__buf_100008010;
    PTR__buf_100008010 = PTR__buf_100008010 + (param_3 + 1);
  }
  return;
}



void _init(char *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int local_244;
  char *local_240;
  undefined auStack_238 [16];
  int aiStack_228 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100004008;
  _bzero(aiStack_228,0x200);
  local_240 = param_1;
  while (*local_240 != '\0') {
    aiStack_228[*local_240] = aiStack_228[*local_240] + 1;
    local_240 = local_240 + 1;
  }
  for (local_244 = 0; local_244 < 0x80; local_244 = local_244 + 1) {
    if (aiStack_228[local_244] != 0) {
      _new_node(aiStack_228[local_244],(int)(char)local_244,0);
      _qinsert();
    }
  }
  while (2 < _qend) {
    uVar1 = _qremove();
    uVar2 = _qremove();
    _new_node(0,0,uVar1,uVar2);
    _qinsert();
  }
  _build_code(*(undefined8 *)(_q + 8),auStack_238,0);
  if (*(long *)PTR____stack_chk_guard_100004008 == local_28) {
    return;
  }
                    // WARNING: Subroutine does not return
  ___stack_chk_fail();
}



void _encode(char *param_1,long param_2)

{
  size_t sVar1;
  long local_20;
  char *local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  while (*local_18 != '\0') {
    ___strcpy_chk(local_20,*(undefined8 *)(&_code + (long)*local_18 * 8),0xffffffffffffffff);
    sVar1 = _strlen(*(char **)(&_code + (long)*local_18 * 8));
    local_20 = local_20 + sVar1;
    local_18 = local_18 + 1;
  }
  return;
}



int _decode(char *param_1,undefined8 *param_2)

{
  char *pcVar1;
  int iVar2;
  undefined8 *local_28;
  char *local_18;
  
  local_28 = param_2;
  local_18 = param_1;
  while (*local_18 != '\0') {
    pcVar1 = local_18 + 1;
    if (*local_18 == '0') {
      local_28 = (undefined8 *)*local_28;
    }
    else {
      local_28 = (undefined8 *)local_28[1];
    }
    local_18 = pcVar1;
    if (*(char *)((long)local_28 + 0x14) != '\0') {
      _putchar((int)*(char *)((long)local_28 + 0x14));
      local_28 = param_2;
    }
  }
  iVar2 = _putchar(10);
  if (param_2 != local_28) {
    iVar2 = _printf("garbage input\n");
  }
  return iVar2;
}



undefined8 entry(void)

{
  int local_430;
  undefined auStack_428 [1024];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100004008;
  _init("this is an example for huffman encoding");
  for (local_430 = 0; local_430 < 0x80; local_430 = local_430 + 1) {
    if (*(long *)(&_code + (long)local_430 * 8) != 0) {
      _printf("\'%c\': %s\n");
    }
  }
  _encode("this is an example for huffman encoding");
  _printf("encoded: %s\n");
  _printf("decoded: ");
  _decode(auStack_428,*(undefined8 *)(_q + 8));
  if (*(long *)PTR____stack_chk_guard_100004008 != local_28) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail();
  }
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003ef0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



void ___strcpy_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003efc. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____strcpy_chk_100004010)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _bzero(void *param_1,size_t param_2)

{
                    // WARNING: Could not recover jumptable at 0x000100003f08. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__bzero_100004018)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f14. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004020)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _putchar(int param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f20. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__putchar_100004028)(param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t _strlen(char *param_1)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f2c. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__strlen_100004030)();
  return sVar1;
}


