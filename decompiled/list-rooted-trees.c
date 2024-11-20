#include "list-rooted-trees.h"



void _append(long param_1)

{
  ulong uVar1;
  undefined4 local_1c;
  
  if (_len == _cap) {
    if (_cap == 0) {
      local_1c = 2;
    }
    else {
      local_1c = _cap << 1;
    }
    _cap = local_1c;
    _list = _realloc(_list,(ulong)local_1c << 3);
  }
  uVar1 = (ulong)_len;
  _len = _len + 1;
  *(ulong *)((long)_list + uVar1 * 8) = param_1 << 1 | 1;
  return;
}



ulong _show(ulong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 local_1c;
  undefined8 local_18;
  
  local_1c = param_2;
  local_18 = param_1;
  while (local_1c != 0) {
    iVar2 = 0x28;
    if ((local_18 & 1) == 0) {
      iVar2 = 0x29;
    }
    uVar1 = _putchar(iVar2);
    param_1 = (ulong)uVar1;
    local_18 = local_18 >> 1;
    local_1c = local_1c + -1;
  }
  return param_1;
}



ulong _listtrees(ulong param_1)

{
  int iVar1;
  uint uVar2;
  uint local_18;
  
  iVar1 = (int)param_1;
  for (local_18 = *(uint *)((long)&_offset + (param_1 & 0xffffffff) * 4);
      local_18 < *(uint *)((long)&_offset + (ulong)(iVar1 + 1) * 4); local_18 = local_18 + 1) {
    _show(*(undefined8 *)(_list + (ulong)local_18 * 8),iVar1 << 1);
    uVar2 = _putchar(10);
    param_1 = (ulong)uVar2;
  }
  return param_1;
}



void _assemble(undefined4 param_1,long param_2,uint param_3,uint param_4,uint param_5)

{
  uint local_28;
  uint local_24;
  
  if (param_5 == 0) {
    _append(param_2);
  }
  else {
    if (param_5 < param_3) {
      local_28 = *(uint *)((long)&_offset + (ulong)param_5 * 4);
      local_24 = param_5;
    }
    else {
      local_28 = param_4;
      local_24 = param_3;
      if (*(uint *)((long)&_offset + (ulong)(param_3 + 1) * 4) <= param_4) {
        local_24 = param_3 - 1;
        if (local_24 == 0) {
          return;
        }
        local_28 = *(uint *)((long)&_offset + (ulong)local_24 * 4);
      }
    }
    _assemble(param_1,param_2 << ((ulong)(local_24 * 2) & 0x3f) |
                      *(ulong *)(_list + (ulong)local_28 * 8),local_24,local_28,param_5 - local_24);
    _assemble(param_1,param_2,local_24,local_28 + 1,param_5);
  }
  return;
}



void _mktrees(int param_1)

{
  if (*(int *)((long)&_offset + (ulong)(param_1 + 1) * 4) == 0) {
    if (param_1 != 0) {
      _mktrees(param_1 + -1);
    }
    _assemble(param_1,0,param_1 + -1,*(undefined4 *)((long)&_offset + (ulong)(param_1 - 1) * 4),
              param_1 + -1);
    *(undefined4 *)((long)&_offset + (ulong)(param_1 + 1) * 4) = _len;
  }
  return;
}



undefined8 entry(int param_1,long param_2)

{
  int local_24;
  
  if (((param_1 < 2) || (local_24 = _atoi(*(char **)(param_2 + 8)), local_24 < 1)) ||
     (0x19 < local_24)) {
    local_24 = 5;
  }
  _append(0);
  _mktrees(local_24);
  _fprintf(*(FILE **)PTR____stderrp_100004000,"Number of %d-trees: %u\n");
  _listtrees(local_24);
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _atoi(char *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f68. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__atoi_100004008)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fprintf(FILE *param_1,char *param_2,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f74. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fprintf_100004010)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _putchar(int param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f80. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__putchar_100004018)(param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _realloc(void *param_1,size_t param_2)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f8c. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__realloc_100004020)();
  return pvVar1;
}


