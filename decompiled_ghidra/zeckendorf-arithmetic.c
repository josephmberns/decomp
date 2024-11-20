#include "zeckendorf-arithmetic.h"



uint _inv(uint param_1)

{
  return ~param_1;
}



void _a(uint *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint local_20;
  
  local_20 = param_2;
  while( true ) {
    if ((int)param_1[1] < (int)local_20) {
      param_1[1] = local_20;
    }
    uVar1 = (int)*param_1 >> ((local_20 & 0xf) << 1) & 3;
    if (uVar1 < 2) break;
    if (uVar1 == 2) {
      if (((int)*param_1 >> ((local_20 + 1) * 2 & 0x1f) & 1U) == 1) {
        *param_1 = *param_1 + (1 << (ulong)(local_20 * 2 + 1 & 0x1f));
      }
      return;
    }
    if (uVar1 == 3) {
      uVar1 = *param_1;
      uVar2 = _inv(3 << (ulong)((local_20 & 0xf) << 1));
      *param_1 = uVar1 & uVar2;
      _b(param_1,(local_20 + 1) * 2);
    }
    local_20 = local_20 + 1;
  }
  return;
}



void _b(uint *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    _increment(param_1);
  }
  else if (((int)*param_1 >> (param_2 & 0x1f) & 1U) == 0) {
    *param_1 = *param_1 + (1 << (ulong)(param_2 & 0x1f));
    _a(param_1,(int)param_2 / 2);
    if (1 < (int)param_2) {
      _a(param_1,(int)param_2 / 2 + -1);
    }
  }
  else {
    uVar1 = *param_1;
    uVar2 = _inv(1 << (ulong)(param_2 & 0x1f));
    *param_1 = uVar1 & uVar2;
    _b(param_1,param_2 + 1);
    iVar3 = 2;
    if ((int)param_2 < 2) {
      iVar3 = 1;
    }
    _b(param_1,param_2 - iVar3);
  }
  return;
}



void _increment(int *param_1)

{
  *param_1 = *param_1 + 1;
  _a(param_1,0);
  return;
}



int _c(char **param_1,char **param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = (uint)param_2;
  if ((*(int *)param_1 >> (uVar2 & 0x1f) & 1U) == 1) {
    uVar1 = *(uint *)param_1;
    uVar2 = _inv(1 << (ulong)(uVar2 & 0x1f));
    *(uint *)param_1 = uVar1 & uVar2;
  }
  else {
    _c(param_1,(char **)(ulong)(uVar2 + 1));
    if ((int)uVar2 < 1) {
      uVar2 = _increment(param_1);
    }
    else {
      uVar2 = _b(param_1,uVar2 - 1);
    }
  }
  return uVar2;
}



long _makeZeckendorf(char *param_1)

{
  size_t sVar1;
  int local_28;
  int local_24;
  long local_18;
  
  sVar1 = _strlen(param_1);
  local_24 = (int)sVar1 + -1;
  local_28 = 1;
  local_18 = (ulong)(uint)(local_24 / 2) << 0x20;
  for (; -1 < local_24; local_24 = local_24 + -1) {
    local_18 = CONCAT44(local_18._4_4_,(int)local_18 + (param_1[local_24] + -0x30) * local_28);
    local_28 = local_28 << 1;
  }
  return local_18;
}



void _addAssign(undefined8 param_1,undefined8 param_2)

{
  undefined4 local_24;
  undefined4 local_18;
  undefined4 uStack_14;
  
  for (local_24 = 0; uStack_14 = (int)((ulong)param_2 >> 0x20),
      (int)(local_24 + (uStack_14 + 1) * -2) < 0 != SBORROW4(local_24,(uStack_14 + 1) * 2);
      local_24 = local_24 + 1) {
    local_18 = (int)param_2;
    if ((local_18 >> (local_24 & 0x1f) & 1U) == 1) {
      _b(param_1,local_24);
    }
  }
  return;
}



char ** _subAssign(char **param_1,undefined8 param_2)

{
  bool bVar1;
  uint uVar2;
  undefined4 local_24;
  undefined4 local_18;
  undefined4 uStack_14;
  char **ppcVar3;
  
  ppcVar3 = param_1;
  for (local_24 = 0; uStack_14 = (int)((ulong)param_2 >> 0x20),
      (int)(local_24 + (uStack_14 + 1) * -2) < 0 != SBORROW4(local_24,(uStack_14 + 1) * 2);
      local_24 = local_24 + 1) {
    local_18 = (int)param_2;
    if ((local_18 >> (local_24 & 0x1f) & 1U) == 1) {
      uVar2 = _c(param_1,(char **)(ulong)local_24);
      ppcVar3 = (char **)(ulong)uVar2;
    }
  }
  while( true ) {
    bVar1 = true;
    if ((*(int *)param_1 >> ((*(uint *)((long)param_1 + 4) & 0xf) << 1) & 3U) != 0) {
      bVar1 = *(int *)((long)param_1 + 4) == 0;
    }
    if (!bVar1) break;
    *(int *)((long)param_1 + 4) = *(int *)((long)param_1 + 4) + -1;
  }
  return ppcVar3;
}



void _mulAssign(int *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  uint local_44;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  int *local_20;
  undefined8 local_18;
  
  local_30 = param_2;
  local_28 = param_2;
  local_20 = param_1;
  local_18 = param_2;
  local_38 = _makeZeckendorf("0");
  for (local_44 = 0;
      (int)(local_44 + (local_20[1] + 1) * -2) < 0 != SBORROW4(local_44,(local_20[1] + 1) * 2);
      local_44 = local_44 + 1) {
    if ((*local_20 >> (local_44 & 0x1f) & 1U) != 0) {
      _addAssign(&local_38,local_30);
    }
    uVar1 = local_30;
    _addAssign(&local_30,local_28);
    local_28 = uVar1;
  }
  *(undefined8 *)local_20 = local_38;
  return;
}



int _printZeckendorf(undefined8 param_1)

{
  int iVar1;
  uint local_20;
  int local_18;
  uint uStack_14;
  
  local_18 = (int)param_1;
  if (local_18 == 0) {
    iVar1 = _printf("0");
  }
  else {
    uStack_14 = (uint)((ulong)param_1 >> 0x20);
    iVar1 = _printf((&PTR_s__100004028)[(int)(local_18 >> ((uStack_14 & 0xf) << 1) & 3)]);
    while (local_20 = uStack_14 - 1, -1 < (int)local_20) {
      iVar1 = _printf((&PTR_s_00_100004010)[(int)(local_18 >> ((local_20 & 0xf) << 1) & 3)]);
      uStack_14 = local_20;
    }
  }
  return iVar1;
}



undefined4 entry(void)

{
  undefined8 uVar1;
  undefined8 local_20;
  undefined4 local_14;
  
  local_14 = 0;
  _printf("Addition:\n");
  local_20 = _makeZeckendorf();
  uVar1 = _makeZeckendorf("10");
  _addAssign(&local_20,uVar1);
  _printZeckendorf(local_20);
  _printf("\n");
  uVar1 = _makeZeckendorf("10");
  _addAssign(&local_20,uVar1);
  _printZeckendorf(local_20);
  _printf("\n");
  uVar1 = _makeZeckendorf();
  _addAssign(&local_20,uVar1);
  _printZeckendorf(local_20);
  _printf("\n");
  uVar1 = _makeZeckendorf();
  _addAssign(&local_20,uVar1);
  _printZeckendorf(local_20);
  _printf("\n");
  uVar1 = _makeZeckendorf("10101");
  _addAssign(&local_20,uVar1);
  _printZeckendorf(local_20);
  _printf("\n\n");
  _printf("Subtraction:\n");
  local_20 = _makeZeckendorf("1000");
  uVar1 = _makeZeckendorf();
  _subAssign(&local_20,uVar1);
  _printZeckendorf(local_20);
  _printf("\n");
  local_20 = _makeZeckendorf("10101010");
  uVar1 = _makeZeckendorf("1010101");
  _subAssign(&local_20,uVar1);
  _printZeckendorf(local_20);
  _printf("\n\n");
  _printf("Multiplication:\n");
  local_20 = _makeZeckendorf("1001");
  uVar1 = _makeZeckendorf("101");
  _mulAssign(&local_20,uVar1);
  _printZeckendorf(local_20);
  _printf("\n");
  local_20 = _makeZeckendorf("101010");
  uVar1 = _makeZeckendorf("101");
  _addAssign(&local_20,uVar1);
  _printZeckendorf(local_20);
  _printf("\n");
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f24. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t _strlen(char *param_1)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f30. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__strlen_100004008)();
  return sVar1;
}


