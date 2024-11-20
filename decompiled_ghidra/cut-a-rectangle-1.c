#include "cut-a-rectangle-1.h"



void _walk(int param_1,int param_2)

{
  char *pcVar1;
  int iVar2;
  int local_1c;
  
  if ((((param_1 == 0) || (param_1 == _h)) || (param_2 == 0)) || (param_2 == _w)) {
    _cnt = _cnt + 2;
  }
  else {
    iVar2 = param_1 * (_w + 1) + param_2;
    *(char *)(_grid + iVar2) = *(char *)(_grid + iVar2) + '\x01';
    pcVar1 = (char *)(_grid + (_len - iVar2));
    *pcVar1 = *pcVar1 + '\x01';
    for (local_1c = 0; local_1c < 4; local_1c = local_1c + 1) {
      if (*(char *)(_grid + (iVar2 + (&DAT_10000803c)[local_1c])) == '\0') {
        _walk(param_1 + *(int *)(&DAT_100008000 + (long)local_1c * 8),
              param_2 + *(int *)(&DAT_100008004 + (long)local_1c * 8));
      }
    }
    *(char *)(_grid + iVar2) = *(char *)(_grid + iVar2) + -1;
    pcVar1 = (char *)(_grid + (_len - iVar2));
    *pcVar1 = *pcVar1 + -1;
  }
  return;
}



// WARNING: Restarted to delay deadcode elimination for space: ram

long _solve(uint param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int local_34;
  long local_18;
  
  _h = param_1;
  _w = param_2;
  if ((param_1 & 1) != 0) {
    _h = param_2;
    _w = param_1;
  }
  if ((_h & 1) == 0) {
    if (_w == 1) {
      local_18 = 1;
    }
    else if (_w == 2) {
      local_18 = (long)(int)_h;
    }
    else if (_h == 2) {
      local_18 = (long)(int)_w;
    }
    else {
      iVar2 = (int)_h / 2;
      local_34 = (int)_w / 2;
      _len = (_h + 1) * (_w + 1);
      _grid = _realloc(_grid,(long)_len);
      lVar3 = (long)_len;
      _len = _len + -1;
      ___memset_chk(_grid,0,lVar3,0xffffffffffffffff);
      DAT_10000803c = 0xffffffff;
      DAT_100008040 = -1 - _w;
      DAT_100008044 = 1;
      DAT_100008048 = _w + 1;
      if (param_3 != 0) {
        _cnt = 0;
      }
      while (local_34 = local_34 + 1, local_34 < (int)_w) {
        iVar1 = iVar2 * (_w + 1) + local_34;
        *(undefined *)((long)_grid + (long)iVar1) = 1;
        *(undefined *)((long)_grid + (long)(_len - iVar1)) = 1;
        _walk(iVar2 + -1,local_34);
      }
      _cnt = _cnt + 1;
      if (_h == _w) {
        _cnt = _cnt * 2;
      }
      else if (((_w & 1) == 0) && (param_3 != 0)) {
        _solve(_w,_h,0);
      }
      local_18 = _cnt;
    }
  }
  else {
    local_18 = 0;
  }
  return local_18;
}



undefined8 entry(void)

{
  uint local_1c;
  uint local_18;
  
  for (local_18 = 1; (int)local_18 < 0xb; local_18 = local_18 + 1) {
    for (local_1c = 1; (int)local_1c <= (int)local_18; local_1c = local_1c + 1) {
      if (((local_1c & 1) == 0) || ((local_18 & 1) == 0)) {
        _solve(local_18,local_1c,1);
        _printf("%d x %d: %llu\n");
      }
    }
  }
  return 0;
}



void ___memset_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f7c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____memset_chk_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f88. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004008)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _realloc(void *param_1,size_t param_2)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f94. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__realloc_100004010)();
  return pvVar1;
}


