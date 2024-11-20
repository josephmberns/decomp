#include "reverse-a-string-1.h"



undefined4 _is_comb(int param_1)

{
  undefined4 local_4;
  
  if ((param_1 < 0x300) || (0x36f < param_1)) {
    if ((param_1 < 0x1dc0) || (0x1dff < param_1)) {
      if ((param_1 < 0x20d0) || (0x20ff < param_1)) {
        if ((param_1 < 0xfe20) || (0xfe2f < param_1)) {
          local_4 = 0;
        }
        else {
          local_4 = 1;
        }
      }
      else {
        local_4 = 1;
      }
    }
    else {
      local_4 = 1;
    }
  }
  else {
    local_4 = 1;
  }
  return local_4;
}



wchar_t * _mb_to_wchar(char *param_1)

{
  size_t sVar1;
  undefined8 local_18;
  
  sVar1 = _mbstowcs((wchar_t *)0x0,param_1,0);
  sVar1 = sVar1 + 1;
  if (sVar1 == 0) {
    local_18 = (wchar_t *)0x0;
  }
  else {
    local_18 = (wchar_t *)_malloc(sVar1 * 4);
    _mbstowcs(local_18,param_1,sVar1);
  }
  return local_18;
}



void * _ws_reverse(long param_1)

{
  bool bVar1;
  int iVar2;
  void *pvVar3;
  long local_30;
  long local_28;
  long local_20;
  
  for (local_20 = 0; *(int *)(param_1 + local_20 * 4) != 0; local_20 = local_20 + 1) {
  }
  pvVar3 = _malloc((local_20 + 1) * 4);
  *(undefined4 *)((long)pvVar3 + local_20 * 4) = 0;
  local_30 = 0;
  while (local_28 = local_20, local_20 != 0) {
    do {
      local_28 = local_28 + -1;
      bVar1 = false;
      if (local_28 != 0) {
        iVar2 = _is_comb(*(undefined4 *)(param_1 + local_28 * 4));
        bVar1 = iVar2 != 0;
      }
    } while (bVar1);
    _wcsncpy((wchar_t *)((long)pvVar3 + local_30 * 4),(wchar_t *)(param_1 + local_28 * 4),
             local_20 - local_28);
    local_30 = local_30 + (local_20 - local_28);
    local_20 = local_28;
  }
  return pvVar3;
}



char * _mb_reverse(undefined8 param_1)

{
  void *pvVar1;
  wchar_t *pwVar2;
  size_t sVar3;
  char *pcVar4;
  
  pvVar1 = (void *)_mb_to_wchar(param_1);
  pwVar2 = (wchar_t *)_ws_reverse(pvVar1);
  sVar3 = _wcstombs((char *)0x0,pwVar2,0);
  pcVar4 = (char *)_malloc(sVar3 + 1);
  _wcstombs(pcVar4,pwVar2,sVar3 + 1);
  _free(pvVar1);
  _free(pwVar2);
  return pcVar4;
}



undefined4 entry(void)

{
  _setlocale(2,"");
  _mb_reverse(_sa);
  _printf("%s => %s\n");
  _mb_reverse(_su);
  _printf("%s => %s\n");
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f38. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f44. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004008)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t _mbstowcs(wchar_t *param_1,char *param_2,size_t param_3)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f50. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__mbstowcs_100004010)();
  return sVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f5c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004018)((int)param_1);
  return iVar1;
}



void _setlocale(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f68. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__setlocale_100004020)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

wchar_t * _wcsncpy(wchar_t *param_1,wchar_t *param_2,size_t param_3)

{
  wchar_t *pwVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f74. Too many branches
                    // WARNING: Treating indirect jump as call
  pwVar1 = (wchar_t *)(*(code *)PTR__wcsncpy_100004028)();
  return pwVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t _wcstombs(char *param_1,wchar_t *param_2,size_t param_3)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f80. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__wcstombs_100004030)();
  return sVar1;
}


