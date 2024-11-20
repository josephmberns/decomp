#include "binary-strings.h"



undefined8 * _str_new(ulong param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  size_t local_18;
  
  puVar1 = (undefined8 *)_malloc(0x18);
  local_18 = param_1;
  if (param_1 < 8) {
    local_18 = 8;
  }
  puVar1[1] = local_18;
  pvVar2 = _malloc(local_18);
  puVar1[2] = pvVar2;
  *puVar1 = 0;
  return puVar1;
}



void _str_extend(long param_1)

{
  void *pvVar1;
  undefined8 local_20;
  
  local_20 = *(long *)(param_1 + 8) * 2;
  if (0x400 < local_20 - *(long *)(param_1 + 8)) {
    local_20 = *(long *)(param_1 + 8) + 0x400;
  }
  pvVar1 = _realloc(*(void **)(param_1 + 0x10),local_20);
  *(void **)(param_1 + 0x10) = pvVar1;
  *(size_t *)(param_1 + 8) = local_20;
  return;
}



void _str_del(void *param_1)

{
  _free(*(void **)((long)param_1 + 0x10));
  _free(param_1);
  return;
}



int _str_cmp(ulong *param_1,ulong *param_2)

{
  int local_30;
  int local_14;
  
  local_30 = (int)*param_1;
  if (*param_2 < (ulong)(long)local_30) {
    local_30 = (int)*param_2;
  }
  local_14 = _memcmp((void *)param_1[2],(void *)param_2[2],(long)local_30);
  if ((local_14 == 0) && (local_14 = -1, *param_2 < *param_1)) {
    local_14 = 1;
  }
  return local_14;
}



undefined8 * _str_dup(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)_str_new(*param_1);
  ___memcpy_chk(puVar1[2],param_1[2],*param_1,0xffffffffffffffff);
  *puVar1 = *param_1;
  return puVar1;
}



size_t * _str_from_chars(char *param_1)

{
  size_t sVar1;
  size_t *local_18;
  
  if (param_1 == (char *)0x0) {
    local_18 = (size_t *)_str_new(0);
  }
  else {
    sVar1 = _strlen(param_1);
    local_18 = (size_t *)_str_new(sVar1 + 1);
    *local_18 = sVar1;
    ___memcpy_chk(local_18[2],param_1,sVar1,0xffffffffffffffff);
  }
  return local_18;
}



void _str_append(ulong *param_1,undefined param_2)

{
  ulong uVar1;
  
  if (param_1[1] <= *param_1) {
    _str_extend(param_1);
  }
  uVar1 = *param_1;
  *param_1 = uVar1 + 1;
  *(undefined *)(param_1[2] + uVar1) = param_2;
  return;
}



long * _str_substr(ulong *param_1,int param_2,int param_3)

{
  int local_28;
  int local_24;
  long *local_18;
  
  local_28 = param_3;
  if (param_3 == 0) {
    local_28 = (int)*param_1;
  }
  local_24 = param_2;
  if (param_2 < 0) {
    local_24 = param_2 + (int)*param_1;
  }
  if ((local_24 < 0) || (*param_1 <= (ulong)(long)local_24)) {
    local_18 = (long *)0x0;
  }
  else {
    if (local_28 < local_24) {
      local_28 = local_24 + 1;
    }
    local_18 = (long *)_str_new((long)(local_28 - local_24));
    *local_18 = (long)(local_28 - local_24);
    ___memcpy_chk(local_18[2],param_1[2] + (long)local_24,*local_18,0xffffffffffffffff);
  }
  return local_18;
}



long * _str_cat(long *param_1,long *param_2)

{
  while ((ulong)param_1[1] < (ulong)(*param_1 + *param_2)) {
    _str_extend(param_1);
  }
  ___memcpy_chk(param_1[2] + *param_1,param_2[2],*param_2,0xffffffffffffffff);
  *param_1 = *param_1 + *param_2;
  return param_1;
}



void _str_swap(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  param_2[1] = uVar1;
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  param_2[2] = uVar1;
  return;
}



ulong * _str_subst(ulong *param_1,size_t *param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  int local_34;
  
  uVar2 = _str_new(0);
  local_34 = 0;
  while ((long)local_34 + *param_2 <= *param_1) {
    iVar1 = _memcmp((void *)(param_1[2] + (long)local_34),(void *)param_2[2],*param_2);
    if (iVar1 == 0) {
      _str_cat(uVar2,param_3);
      local_34 = local_34 + (int)*param_2;
      if (*param_2 == 0) {
        lVar3 = (long)local_34;
        local_34 = local_34 + 1;
        _str_append(uVar2,*(undefined *)(param_1[2] + lVar3));
      }
    }
    else {
      _str_append(uVar2,*(undefined *)(param_1[2] + (long)local_34));
      local_34 = local_34 + 1;
    }
  }
  while ((ulong)(long)local_34 < *param_1) {
    lVar3 = (long)local_34;
    local_34 = local_34 + 1;
    _str_append(uVar2,*(undefined *)(param_1[2] + lVar3));
  }
  _str_swap(uVar2,param_1);
  _str_del(uVar2);
  return param_1;
}



void _str_set(ulong *param_1,ulong *param_2)

{
  while (*param_1 < *param_2) {
    _str_extend(param_1);
  }
  ___memcpy_chk(param_1[2],param_2[2],*param_2,0xffffffffffffffff);
  *param_1 = *param_2;
  return;
}



undefined4 entry(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = _str_from_chars("aaaaHaaaaaFaaaaHa");
  uVar2 = _str_from_chars("___.");
  uVar3 = _str_from_chars("");
  _str_subst(uVar1,uVar3,uVar2);
  _printf("%.*s\n");
  _str_del(uVar1);
  _str_del(uVar2);
  _str_del(uVar3);
  return 0;
}



void ___memcpy_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f34. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____memcpy_chk_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f40. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004008)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f4c. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004010)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _memcmp(void *param_1,void *param_2,size_t param_3)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f58. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__memcmp_100004018)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f64. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004020)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _realloc(void *param_1,size_t param_2)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f70. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__realloc_100004028)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t _strlen(char *param_1)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f7c. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__strlen_100004030)();
  return sVar1;
}


