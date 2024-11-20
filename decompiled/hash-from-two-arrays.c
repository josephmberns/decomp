#include "hash-from-two-arrays.h"



int _strhashkey(char *param_1,uint param_2)

{
  uint uVar1;
  uint local_10;
  char *local_8;
  
  local_10 = 0;
  for (local_8 = param_1; *local_8 != '\0'; local_8 = local_8 + 1) {
    local_10 = (local_10 + (int)*local_8 & 0xfff00000) >> 0x12 ^ 0x5c5 ^
               local_10 + (int)*local_8 & 0xfffff ^ (int)*local_8;
  }
  uVar1 = 0;
  if (param_2 != 0) {
    uVar1 = local_10 / param_2;
  }
  return local_10 - uVar1 * param_2;
}



void _HashAddH(undefined8 param_1,undefined4 param_2,code *param_3,code *param_4,code *param_5,
              code *param_6)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  undefined8 *local_50;
  
  uVar2 = (*param_5)(param_1,0x1000);
  local_50 = *(undefined8 **)(&_hash + (ulong)uVar2 * 0x10);
  while( true ) {
    bVar1 = false;
    if (local_50 != (undefined8 *)0x0) {
      iVar3 = (*param_6)(*local_50,param_1);
      bVar1 = iVar3 == 0;
    }
    if (!bVar1) break;
    local_50 = (undefined8 *)local_50[2];
  }
  if (local_50 == (undefined8 *)0x0) {
    pvVar4 = _malloc(0x18);
    (*param_3)(pvVar4,param_1);
    (*param_4)((long)pvVar4 + 8,param_2);
    *(undefined8 *)((long)pvVar4 + 0x10) = 0;
    if (*(long *)(&DAT_100008050 + (ulong)uVar2 * 0x10) == 0) {
      *(void **)(&_hash + (ulong)uVar2 * 0x10) = pvVar4;
    }
    else {
      *(void **)(*(long *)(&DAT_100008050 + (ulong)uVar2 * 0x10) + 0x10) = pvVar4;
    }
    *(void **)(&DAT_100008050 + (ulong)uVar2 * 0x10) = pvVar4;
  }
  else {
    (*param_4)(local_50 + 1,param_2);
  }
  return;
}



bool _HashGetH(undefined4 *param_1,undefined8 param_2,code *param_3,code *param_4)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined8 *local_40;
  
  uVar2 = (*param_3)(param_2,0x1000);
  local_40 = *(undefined8 **)(&_hash + (ulong)uVar2 * 0x10);
  while( true ) {
    bVar1 = false;
    if (local_40 != (undefined8 *)0x0) {
      iVar3 = (*param_4)(*local_40,param_2);
      bVar1 = iVar3 == 0;
    }
    if (!bVar1) break;
    local_40 = (undefined8 *)local_40[2];
  }
  if (local_40 != (undefined8 *)0x0) {
    *param_1 = *(undefined4 *)(local_40 + 1);
  }
  return local_40 != (undefined8 *)0x0;
}



void _copyStr(undefined8 *param_1,char *param_2)

{
  char *pcVar1;
  
  pcVar1 = _strdup(param_2);
  *param_1 = pcVar1;
  return;
}



void _copyInt(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}



bool _strCompare(char *param_1,char *param_2)

{
  int iVar1;
  
  iVar1 = _strcmp(param_1,param_2);
  return iVar1 == 0;
}



void _HashAdd(undefined8 param_1,undefined4 param_2)

{
  _HashAddH(param_1,param_2,_copyStr,_copyInt,_strhashkey,_strCompare);
  return;
}



void _HashGet(undefined8 param_1,undefined8 param_2)

{
  _HashGetH(param_1,param_2,_strhashkey,_strCompare);
  return;
}



undefined8 entry(void)

{
  int local_18;
  
  for (local_18 = 0; local_18 < 6; local_18 = local_18 + 1) {
    _HashAdd((&PTR_s_red_100008000)[local_18],*(undefined4 *)(&DAT_100008030 + (long)local_18 * 4));
  }
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f58. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004000)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _strcmp(char *param_1,char *param_2)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f64. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__strcmp_100004008)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * _strdup(char *param_1)

{
  char *pcVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f70. Too many branches
                    // WARNING: Treating indirect jump as call
  pcVar1 = (char *)(*(code *)PTR__strdup_100004010)();
  return pcVar1;
}


