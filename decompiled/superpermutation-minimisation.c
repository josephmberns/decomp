#include "superpermutation-minimisation.h"



int _fact_sum(int param_1)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_8 = 0;
  local_c = 0;
  local_10 = 1;
  while (local_c < param_1) {
    local_c = local_c + 1;
    local_10 = local_10 * local_c;
    local_8 = local_8 + local_10;
  }
  return local_8;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _r(void *param_1,void *param_2,int param_3,char *param_4,int param_5,int param_6)

{
  undefined uVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  long lVar5;
  
  iVar3 = (int)param_1;
  if (iVar3 != 0) {
    uVar1 = *(undefined *)(__super + (__pos - iVar3));
    iVar2 = *(int *)(&_cnt + (long)iVar3 * 4) + -1;
    *(int *)(&_cnt + (long)iVar3 * 4) = iVar2;
    if (iVar2 == 0) {
      *(int *)(&_cnt + (long)iVar3 * 4) = iVar3;
      pvVar4 = (void *)(ulong)(iVar3 - 1);
      _r(pvVar4,param_2,param_3,param_4,param_5,param_6);
      if ((int)pvVar4 == 0) {
        return;
      }
    }
    lVar5 = (long)__pos;
    __pos = __pos + 1;
    *(undefined *)(__super + lVar5) = uVar1;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Restarted to delay deadcode elimination for space: ram

void _superperm(uint param_1,undefined8 param_2,int param_3,char *param_4,int param_5,int param_6)

{
  int iVar1;
  void *pvVar2;
  void *pvVar3;
  int local_18;
  
  __pos = param_1;
  iVar1 = _fact_sum(param_1);
  pvVar3 = (void *)(long)(iVar1 + 1);
  __super = _realloc(__super,(size_t)pvVar3);
  *(undefined *)((long)__super + (long)iVar1) = 0;
  for (local_18 = 0; local_18 <= (int)param_1; local_18 = local_18 + 1) {
    *(int *)(&_cnt + (long)local_18 * 4) = local_18;
  }
  for (local_18 = 1; local_18 <= (int)param_1; local_18 = local_18 + 1) {
    *(char *)((long)__super + (long)(local_18 + -1)) = (char)local_18 + '0';
  }
  do {
    pvVar2 = (void *)(ulong)param_1;
    _r(pvVar2,pvVar3,param_3,param_4,param_5,param_6);
  } while ((int)pvVar2 != 0);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 entry(void)

{
  int local_18;
  
  for (local_18 = 0; local_18 < 0xc; local_18 = local_18 + 1) {
    _printf("superperm(%2d) ");
    _superperm(local_18);
    _strlen(__super);
    _printf("len = %d");
    _putchar(10);
  }
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f5c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _putchar(int param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f68. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__putchar_100004008)(param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _realloc(void *param_1,size_t param_2)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f74. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__realloc_100004010)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t _strlen(char *param_1)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f80. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__strlen_100004018)();
  return sVar1;
}


