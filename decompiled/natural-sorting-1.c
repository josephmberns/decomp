#include "natural-sorting-1.h"



undefined8 * _w_new(void)

{
  undefined8 *puVar1;
  void *pvVar2;
  
  puVar1 = (undefined8 *)_malloc(0x10);
  *(undefined4 *)((long)puVar1 + 0xc) = 1;
  *(undefined4 *)(puVar1 + 1) = 0;
  pvVar2 = _malloc(4);
  *puVar1 = pvVar2;
  *(undefined4 *)*puVar1 = 0;
  return puVar1;
}



void _w_append(long *param_1,undefined4 param_2)

{
  int iVar1;
  void *pvVar2;
  
  if (*(int *)((long)param_1 + 0xc) <= *(int *)(param_1 + 1) + 1) {
    *(int *)((long)param_1 + 0xc) = *(int *)((long)param_1 + 0xc) << 1;
    pvVar2 = _realloc((void *)*param_1,(long)*(int *)((long)param_1 + 0xc) << 2);
    *param_1 = (long)pvVar2;
  }
  iVar1 = *(int *)(param_1 + 1);
  *(int *)(param_1 + 1) = iVar1 + 1;
  *(undefined4 *)(*param_1 + (long)iVar1 * 4) = param_2;
  *(undefined4 *)(*param_1 + (long)*(int *)(param_1 + 1) * 4) = 0;
  return;
}



undefined8 _w_make(wchar_t *param_1)

{
  size_t sVar1;
  undefined8 uVar2;
  int local_1c;
  
  sVar1 = _wcslen(param_1);
  uVar2 = _w_new();
  for (local_1c = 0; local_1c < (int)sVar1; local_1c = local_1c + 1) {
    _w_append(uVar2,param_1[local_1c]);
  }
  return uVar2;
}



void _w_transform(undefined8 *param_1,code *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)_w_new();
  (*param_2)(param_1,puVar1);
  uVar4 = param_1[1];
  uVar2 = *param_1;
  uVar3 = *puVar1;
  param_1[1] = puVar1[1];
  *param_1 = uVar3;
  puVar1[1] = uVar4;
  *puVar1 = uVar2;
  _free((void *)*puVar1);
  _free(puVar1);
  return;
}



void _w_nocase(long *param_1,undefined8 param_2)

{
  wint_t wVar1;
  wint_t local_28;
  int local_24;
  
  local_24 = 0;
  local_28 = *(wint_t *)*param_1;
  while (local_24 < *(int *)(param_1 + 1) && local_28 != 0) {
    wVar1 = _towlower(local_28);
    _w_append(param_2,wVar1);
    local_24 = local_24 + 1;
    local_28 = *(wint_t *)(*param_1 + (long)local_24 * 4);
  }
  return;
}



void _w_despace(long *param_1,long param_2)

{
  bool bVar1;
  int iVar2;
  wint_t local_2c;
  int local_24;
  
  bVar1 = false;
  local_24 = 0;
  local_2c = *(wint_t *)*param_1;
  while (local_24 < *(int *)(param_1 + 1) && local_2c != 0) {
    iVar2 = _iswspace(local_2c);
    if (iVar2 == 0) {
      if ((bVar1) && (*(int *)(param_2 + 8) != 0)) {
        _w_append(param_2,0x20);
      }
      _w_append(param_2,local_2c);
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    local_24 = local_24 + 1;
    local_2c = *(wint_t *)(*param_1 + (long)local_24 * 4);
  }
  return;
}



void _w_char_repl(long *param_1,undefined8 param_2,long param_3,int param_4)

{
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  
  local_30 = 0;
  local_3c = *(int *)*param_1;
  do {
    if (*(int *)(param_1 + 1) <= local_30 || local_3c == 0) {
      return;
    }
    local_38 = 0;
    local_34 = 0;
    while( true ) {
      if (param_4 <= local_34) goto LAB_100002cdc;
      if (local_3c == **(int **)(param_3 + (long)local_34 * 8)) break;
      local_34 = local_34 + 2;
    }
    local_38 = 0;
    while (*(int *)(*(long *)(param_3 + (long)(local_34 + 1) * 8) + (long)local_38 * 4) != 0) {
      _w_append(param_2,*(undefined4 *)
                         (*(long *)(param_3 + (long)(local_34 + 1) * 8) + (long)local_38 * 4));
      local_38 = local_38 + 1;
    }
LAB_100002cdc:
    if (local_38 == 0) {
      _w_append(param_2,local_3c);
    }
    local_30 = local_30 + 1;
    local_3c = *(int *)(*param_1 + (long)local_30 * 4);
  } while( true );
}



void _w_noaccent(undefined8 param_1,undefined8 param_2)

{
  _w_char_repl(param_1,param_2,&PTR_DAT_100004080,0x76);
  return;
}



void _w_noligature(undefined8 param_1,undefined8 param_2)

{
  _w_char_repl(param_1,param_2,&PTR_DAT_100004430,0x16);
  return;
}



void _w_noarticle(long *param_1,undefined8 param_2)

{
  int iVar1;
  size_t sVar2;
  int iVar3;
  int local_34;
  wint_t local_30;
  int local_28;
  int local_24;
  
  local_34 = 0;
  local_24 = 0;
  local_30 = *(wint_t *)*param_1;
  do {
    if (*(int *)(param_1 + 1) <= local_24 || local_30 == 0) {
      return;
    }
    if ((local_34 == 0) ||
       ((iVar1 = _iswalnum(local_30), iVar1 != 0 && (iVar1 = _iswalnum(local_34), iVar1 == 0)))) {
      for (local_28 = 5; -1 < local_28; local_28 = local_28 + -1) {
        sVar2 = _wcslen((wchar_t *)(&PTR_DAT_1000044e0)[local_28]);
        iVar3 = (int)sVar2;
        iVar1 = _wcsncasecmp((wchar_t *)(*param_1 + (long)local_24 * 4),
                             (wchar_t *)(&PTR_DAT_1000044e0)[local_28],(long)iVar3);
        if ((iVar1 == 0) &&
           (iVar1 = _iswalnum(*(wint_t *)(*param_1 + (long)(local_24 + iVar3) * 4)), iVar1 == 0)) {
          local_24 = local_24 + iVar3;
          break;
        }
      }
      if (local_28 < 0) {
        _w_append(param_2,local_30);
      }
    }
    else {
      _w_append(param_2,local_30);
    }
    local_34 = local_30;
    local_24 = local_24 + 1;
    local_30 = *(wint_t *)(*param_1 + (long)local_24 * 4);
  } while( true );
}



undefined4 _w_numcmp(long param_1,long param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 local_50;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int *local_38;
  int *local_30;
  
  local_30 = (int *)**(undefined8 **)(param_1 + 8);
  local_38 = (int *)**(undefined8 **)(param_2 + 8);
  while( true ) {
    while( true ) {
      bVar1 = false;
      if (*local_30 != 0) {
        bVar1 = *local_38 != 0;
      }
      if (!bVar1) {
        if ((*local_30 == 0) && (*local_38 == 0)) {
          local_50 = 0;
        }
        else {
          local_50 = 0xffffffff;
          if (*local_30 != 0) {
            local_50 = 1;
          }
        }
        return local_50;
      }
      iVar2 = _iswdigit(*local_30);
      if ((iVar2 == 0) || (iVar2 = _iswdigit(*local_38), iVar2 == 0)) break;
      local_40 = 0;
      for (local_3c = 0; local_30[local_3c] == 0x30; local_3c = local_3c + 1) {
      }
      for (; local_38[local_40] == 0x30; local_40 = local_40 + 1) {
      }
      local_44 = local_3c;
      local_48 = local_40;
      while (iVar2 = _iswdigit(local_30[local_44]), iVar2 != 0) {
        local_44 = local_44 + 1;
      }
      while (iVar2 = _iswdigit(local_38[local_48]), iVar2 != 0) {
        local_48 = local_48 + 1;
      }
      if (local_44 - local_3c < local_48 - local_40) {
        return 0xffffffff;
      }
      if (local_48 - local_40 < local_44 - local_3c) {
        return 1;
      }
      for (; local_40 < local_48; local_40 = local_40 + 1) {
        if (local_38[local_40] < local_30[local_3c]) {
          return 1;
        }
        if (local_30[local_3c] < local_38[local_40]) {
          return 0xffffffff;
        }
        local_3c = local_3c + 1;
      }
      local_30 = local_30 + local_44;
      local_38 = local_38 + local_48;
    }
    iVar2 = _iswdigit(*local_30);
    if (iVar2 != 0) {
      return 1;
    }
    iVar2 = _iswdigit(*local_38);
    if (iVar2 != 0) {
      return 0xffffffff;
    }
    if (*local_38 < *local_30) {
      return 1;
    }
    if (*local_30 < *local_38) break;
    local_30 = local_30 + 1;
    local_38 = local_38 + 1;
  }
  return 0xffffffff;
}



int _w_cmp(long param_1,long param_2)

{
  int iVar1;
  
  iVar1 = _wcscmp((wchar_t *)**(undefined8 **)(param_1 + 8),
                  (wchar_t *)**(undefined8 **)(param_2 + 8));
  return iVar1;
}



void _natural_sort(long param_1,int param_2,uint param_3)

{
  code *pcVar1;
  void *pvVar2;
  undefined8 uVar3;
  uint local_28;
  int local_24;
  
  pvVar2 = _malloc((long)param_2 * 0x10);
  for (local_24 = 0; local_24 < param_2; local_24 = local_24 + 1) {
    *(undefined8 *)((long)pvVar2 + (long)local_24 * 0x10) =
         *(undefined8 *)(param_1 + (long)local_24 * 8);
    uVar3 = _w_make(*(undefined8 *)(param_1 + (long)local_24 * 8));
    *(undefined8 *)((long)pvVar2 + (long)local_24 * 0x10 + 8) = uVar3;
    for (local_28 = 0; (int)local_28 < 5; local_28 = local_28 + 1) {
      if (((param_3 & 1 << (ulong)(local_28 & 0x1f)) != 0) &&
         ((&_trans_funcs)[(int)local_28] != (undefined *)0x0)) {
        _w_transform(*(undefined8 *)((long)pvVar2 + (long)local_24 * 0x10 + 8),
                     (&_trans_funcs)[(int)local_28]);
      }
    }
  }
  pcVar1 = _w_numcmp;
  if ((param_3 & 0x20) == 0) {
    pcVar1 = _w_cmp;
  }
  _qsort(pvVar2,(long)param_2,0x10,(int *)pcVar1);
  for (local_24 = 0; local_24 < param_2; local_24 = local_24 + 1) {
    _free((void *)**(undefined8 **)((long)pvVar2 + (long)local_24 * 0x10 + 8));
    _free(*(void **)((long)pvVar2 + (long)local_24 * 0x10 + 8));
    *(undefined8 *)(param_1 + (long)local_24 * 8) =
         *(undefined8 *)((long)pvVar2 + (long)local_24 * 0x10);
  }
  _free(pvVar2);
  return;
}



void _test_sort(uint param_1)

{
  int iVar1;
  uint local_5c;
  uint local_58;
  undefined auStack_50 [56];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  _memcpy(auStack_50,&_test,0x38);
  _printf("Sort flags: (");
  for (local_5c = param_1; local_5c != 0; local_5c = (int)local_5c >> 1) {
    if ((local_5c & 1) != 0) {
      _printf("%s%s");
    }
  }
  _natural_sort(auStack_50,7,param_1);
  for (local_58 = 0; local_58 < 7; local_58 = local_58 + 1) {
    _printf("%ls\n");
  }
  iVar1 = _printf("\n");
  if (*(long *)PTR____stack_chk_guard_100004008 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(iVar1);
  }
  return;
}



undefined4 entry(void)

{
  _setlocale(2,"");
  _test_sort(1);
  _test_sort(2);
  _test_sort(0x20);
  _test_sort(0x11);
  _test_sort(7);
  _test_sort(0x3f);
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x0001000037d8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x0001000037e4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004010)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _iswalnum(wint_t _wc)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x0001000037f0. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__iswalnum_100004018)(_wc);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _iswdigit(wint_t _wc)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x0001000037fc. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__iswdigit_100004020)(_wc);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _iswspace(wint_t _wc)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003808. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__iswspace_100004028)(_wc);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003814. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004030)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _memcpy(void *param_1,void *param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003820. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__memcpy_100004038)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x00010000382c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004040)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _qsort(void *param_1,size_t param_2,size_t param_3,int *param_4)

{
                    // WARNING: Could not recover jumptable at 0x000100003838. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__qsort_100004048)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _realloc(void *param_1,size_t param_2)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003844. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__realloc_100004050)();
  return pvVar1;
}



void _setlocale(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003850. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__setlocale_100004058)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

wint_t _towlower(wint_t _wc)

{
  wint_t wVar1;
  
                    // WARNING: Could not recover jumptable at 0x00010000385c. Too many branches
                    // WARNING: Treating indirect jump as call
  wVar1 = (*(code *)PTR__towlower_100004060)(_wc);
  return wVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _wcscmp(wchar_t *param_1,wchar_t *param_2)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003868. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__wcscmp_100004068)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t _wcslen(wchar_t *param_1)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003874. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__wcslen_100004070)();
  return sVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _wcsncasecmp(wchar_t *param_1,wchar_t *param_2,size_t n)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003880. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__wcsncasecmp_100004078)((int)param_1);
  return iVar1;
}


