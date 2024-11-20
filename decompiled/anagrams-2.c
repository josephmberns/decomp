#include "anagrams-2.h"



int _lst_cmp(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  
  iVar1 = _strcmp((char *)*param_1,(char *)*param_2);
  return iVar1;
}



void _sort_letters(long param_1)

{
  undefined uVar1;
  undefined4 local_10;
  undefined4 local_c;
  
  for (local_c = 0; local_10 = local_c, *(char *)(param_1 + local_c) != '\0'; local_c = local_c + 1)
  {
    while (local_10 = local_10 + 1, *(char *)(param_1 + local_10) != '\0') {
      if (*(char *)(param_1 + local_10) < *(char *)(param_1 + local_c)) {
        uVar1 = *(undefined *)(param_1 + local_10);
        *(undefined *)(param_1 + local_10) = *(undefined *)(param_1 + local_c);
        *(undefined *)(param_1 + local_c) = uVar1;
      }
    }
  }
  return;
}



undefined4 entry(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  void *pvVar7;
  undefined8 uVar8;
  int local_f4;
  ulong local_f0;
  ulong local_e8;
  ulong local_e0;
  ulong local_d8;
  ulong local_d0;
  stat sStack_b8;
  undefined4 local_24;
  
  local_24 = 0;
  local_f4 = 0;
  iVar4 = _open("unixdict.txt",0);
  if (iVar4 == -1) {
    local_24 = 1;
  }
  else {
    _fstat(iVar4,&sStack_b8);
    pvVar6 = _malloc(sStack_b8.st_size << 1);
    lVar1 = (long)pvVar6 + sStack_b8.st_size;
    _read(iVar4,pvVar6,sStack_b8.st_size);
    ___memcpy_chk(lVar1,pvVar6,sStack_b8.st_size,0xffffffffffffffff);
    local_d8 = 0;
    for (local_d0 = 0; local_d0 < (ulong)sStack_b8.st_size; local_d0 = local_d0 + 1) {
      if (*(char *)((long)pvVar6 + local_d0) == '\n') {
        *(undefined *)(lVar1 + local_d0) = 0;
        *(undefined *)((long)pvVar6 + local_d0) = 0;
        _sort_letters(lVar1 + local_d8);
        local_d8 = local_d0 + 1;
        local_f4 = local_f4 + 1;
      }
    }
    pvVar7 = _calloc((long)local_f4,0x18);
    local_e0 = 0;
    local_d8 = 0;
    for (local_d0 = 0; local_d0 < (ulong)sStack_b8.st_size; local_d0 = local_d0 + 1) {
      if (*(char *)((long)pvVar6 + local_d0) == '\0') {
        *(ulong *)((long)pvVar7 + local_d8 * 0x18) = lVar1 + local_e0;
        *(ulong *)((long)pvVar7 + local_d8 * 0x18 + 8) = (long)pvVar6 + local_e0;
        local_e0 = local_d0 + 1;
        local_d8 = local_d8 + 1;
      }
    }
    _qsort(pvVar7,(long)local_f4,0x18,(int *)_lst_cmp);
    local_e8 = 0;
    local_f0 = 0;
    local_e0 = 0;
    local_d8 = 0;
    for (local_d0 = 0; local_d0 < (ulong)(long)local_f4; local_d0 = local_d0 + 1) {
      iVar5 = _strcmp(*(char **)((long)pvVar7 + local_d0 * 0x18),
                      *(char **)((long)pvVar7 + local_d8 * 0x18));
      if (iVar5 == 0) {
        local_e0 = local_e0 + 1;
      }
      else if (local_e0 < local_e8) {
        local_e0 = 0;
        local_d8 = local_d0;
      }
      else {
        if (local_e8 < local_e0) {
          local_f0 = 0;
        }
        while (local_d8 < local_d0) {
          puVar2 = (undefined8 *)((long)pvVar7 + local_f0 * 0x18);
          puVar3 = (undefined8 *)((long)pvVar7 + local_d8 * 0x18);
          uVar8 = *puVar3;
          puVar2[1] = puVar3[1];
          *puVar2 = uVar8;
          puVar2[2] = puVar3[2];
          local_f0 = local_f0 + 1;
          local_d8 = local_d8 + 1;
        }
        local_e8 = local_e0;
        local_e0 = 0;
      }
    }
    for (local_d0 = 0; local_d0 < local_f0; local_d0 = local_d0 + 1) {
      _printf("%s ");
      if ((local_d0 < (ulong)(long)(local_f4 + -1)) &&
         (iVar5 = _strcmp(*(char **)((long)pvVar7 + local_d0 * 0x18),
                          *(char **)((long)pvVar7 + (local_d0 + 1) * 0x18)), iVar5 != 0)) {
        _printf("\n");
      }
    }
    _close(iVar4);
    local_24 = 0;
  }
  return local_24;
}



void ___memcpy_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f14. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____memcpy_chk_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _calloc(size_t param_1,size_t param_2)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f20. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__calloc_100004008)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _close(int param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f2c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__close_100004010)(param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fstat(int param_1,stat *param_2)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f38. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fstat_100004018)(param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f44. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004020)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _open(char *param_1,int param_2,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f50. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__open_100004028)((int)param_1,param_2);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f5c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004030)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _qsort(void *param_1,size_t param_2,size_t param_3,int *param_4)

{
                    // WARNING: Could not recover jumptable at 0x000100003f68. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__qsort_100004038)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

ssize_t _read(int param_1,void *param_2,size_t param_3)

{
  ssize_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f74. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__read_100004040)(param_1);
  return sVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _strcmp(char *param_1,char *param_2)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f80. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__strcmp_100004048)((int)param_1);
  return iVar1;
}


