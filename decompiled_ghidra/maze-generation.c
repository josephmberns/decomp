#include "maze-generation.h"



int _irand(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = 0;
  if (param_1 != 0) {
    iVar1 = 0x7fffffff / param_1;
  }
  do {
    iVar3 = _rand();
  } while (param_1 * iVar1 <= iVar3);
  iVar1 = 0;
  if (param_1 != 0) {
    iVar1 = 0x7fffffff / param_1;
  }
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = iVar3 / iVar1;
  }
  return iVar2;
}



ulong _show(ulong param_1)

{
  byte bVar1;
  uint uVar2;
  int local_18;
  int local_14;
  
  for (local_14 = 0; local_14 <= _h * 2; local_14 = local_14 + 1) {
    for (local_18 = 0; local_18 <= _w * 2; local_18 = local_18 + 1) {
      bVar1 = *(byte *)(*(long *)(_cell + (long)local_14 * 8) + (long)local_18);
      if (0x10 < bVar1) {
        _printf("\x1b[31m");
      }
      _printf("%lc");
      if (0x10 < bVar1) {
        _printf("\x1b[m");
      }
    }
    uVar2 = _putchar(10);
    param_1 = (ulong)uVar2;
  }
  return param_1;
}



void _walk(int param_1,int param_2)

{
  int iVar1;
  byte *pbVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int local_44;
  int local_3c;
  mach_header *local_30;
  undefined8 uStack_28;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  uStack_28 = 0x300000002;
  local_30 = &__mh_execute_header;
  pbVar2 = (byte *)(*(long *)(_cell + (long)param_2 * 8) + (long)param_1);
  *pbVar2 = *pbVar2 | 0x10;
  _avail = _avail + -1;
  for (local_44 = 3; local_44 != 0; local_44 = local_44 + -1) {
    iVar5 = _irand(local_44 + 1);
    if (local_44 != iVar5) {
      uVar3 = *(undefined4 *)((long)&local_30 + (long)local_44 * 4);
      *(undefined4 *)((long)&local_30 + (long)local_44 * 4) =
           *(undefined4 *)((long)&local_30 + (long)iVar5 * 4);
      *(undefined4 *)((long)&local_30 + (long)iVar5 * 4) = uVar3;
    }
  }
  for (local_3c = 0; _avail != 0 && local_3c < 4; local_3c = local_3c + 1) {
    iVar5 = param_1 + *(int *)(&DAT_100008078 +
                              (long)*(int *)((long)&local_30 + (long)local_3c * 4) * 8);
    iVar1 = param_2 + *(int *)(&DAT_10000807c +
                              (long)*(int *)((long)&local_30 + (long)local_3c * 4) * 8);
    if ((*(byte *)(*(long *)(_cell + (long)iVar1 * 8) + (long)iVar5) & 0x10) == 0) {
      if (iVar5 == param_1) {
        iVar4 = (param_2 + iVar1) / 2;
        pbVar2 = (byte *)(*(long *)(_cell + (long)iVar4 * 8) + (long)(param_1 + 1));
        *pbVar2 = *pbVar2 & 0xfb;
        pbVar2 = (byte *)(*(long *)(_cell + (long)iVar4 * 8) + (long)param_1);
        *pbVar2 = *pbVar2 & 0xf3;
        pbVar2 = (byte *)(*(long *)(_cell + (long)iVar4 * 8) + (long)(param_1 + -1));
        *pbVar2 = *pbVar2 & 0xf7;
      }
      else if (iVar1 == param_2) {
        iVar4 = (param_1 + iVar5) / 2;
        pbVar2 = (byte *)(*(long *)(_cell + (long)(param_2 + -1) * 8) + (long)iVar4);
        *pbVar2 = *pbVar2 & 0xfd;
        pbVar2 = (byte *)(*(long *)(_cell + (long)param_2 * 8) + (long)iVar4);
        *pbVar2 = *pbVar2 & 0xfc;
        pbVar2 = (byte *)(*(long *)(_cell + (long)(param_2 + 1) * 8) + (long)iVar4);
        *pbVar2 = *pbVar2 & 0xfe;
      }
      _walk(iVar5,iVar1);
    }
  }
  if (*(long *)PTR____stack_chk_guard_100004008 == local_18) {
    return;
  }
                    // WARNING: Subroutine does not return
  ___stack_chk_fail();
}



undefined4 _solve(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  int local_28;
  undefined4 local_14;
  
  pbVar2 = (byte *)(*(long *)(_cell + (long)param_2 * 8) + (long)param_1);
  *pbVar2 = *pbVar2 | 0x10;
  if ((param_1 == param_3) && (param_2 == param_4)) {
    local_14 = 1;
  }
  else {
    for (local_28 = 0; local_28 < 4; local_28 = local_28 + 1) {
      iVar4 = param_1 + *(int *)(&DAT_100008078 + (long)local_28 * 8);
      iVar1 = param_2 + *(int *)(&DAT_10000807c + (long)local_28 * 8);
      if (*(char *)(*(long *)(_cell + (long)iVar1 * 8) + (long)iVar4) == '\0') {
        if (iVar4 == param_1) {
          iVar3 = (param_2 + iVar1) / 2;
          if ((*(char *)(*(long *)(_cell + (long)iVar3 * 8) + (long)param_1) == '\0') &&
             (iVar4 = _solve(iVar4,iVar1,param_3,param_4), iVar4 != 0)) {
            pbVar2 = (byte *)(*(long *)(_cell + (long)(iVar3 + -1) * 8) + (long)param_1);
            *pbVar2 = *pbVar2 | 2;
            pbVar2 = (byte *)(*(long *)(_cell + (long)iVar3 * 8) + (long)param_1);
            *pbVar2 = *pbVar2 | 0x13;
            pbVar2 = (byte *)(*(long *)(_cell + (long)(iVar3 + 1) * 8) + (long)param_1);
            *pbVar2 = *pbVar2 | 1;
            return 1;
          }
        }
        else {
          if (iVar1 != param_2) {
            return 1;
          }
          iVar3 = (param_1 + iVar4) / 2;
          if ((*(char *)(*(long *)(_cell + (long)param_2 * 8) + (long)iVar3) == '\0') &&
             (iVar4 = _solve(iVar4,iVar1,param_3,param_4), iVar4 != 0)) {
            pbVar2 = (byte *)(*(long *)(_cell + (long)param_2 * 8) + (long)(iVar3 + -1));
            *pbVar2 = *pbVar2 | 8;
            pbVar2 = (byte *)(*(long *)(_cell + (long)param_2 * 8) + (long)iVar3);
            *pbVar2 = *pbVar2 | 0x1c;
            pbVar2 = (byte *)(*(long *)(_cell + (long)param_2 * 8) + (long)(iVar3 + 1));
            *pbVar2 = *pbVar2 | 4;
            return 1;
          }
        }
      }
    }
    pbVar2 = (byte *)(*(long *)(_cell + (long)param_2 * 8) + (long)param_1);
    *pbVar2 = *pbVar2 & 0xef;
    local_14 = 0;
  }
  return local_14;
}



// WARNING: Restarted to delay deadcode elimination for space: ram

void _make_maze(void)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  int local_18;
  int local_14;
  
  iVar2 = _h * 2;
  iVar4 = iVar2 + 2;
  iVar3 = _w * 2;
  iVar5 = iVar3 + 2;
  puVar6 = (undefined8 *)_calloc((long)(iVar2 + 4) * 8 + (long)(iVar5 * iVar4) + 1,1);
  puVar6[1] = (long)puVar6 + (long)iVar4 * 8 + 0x11;
  for (local_14 = 2; local_14 <= iVar4; local_14 = local_14 + 1) {
    puVar6[local_14] = puVar6[local_14 + -1] + (long)iVar5;
  }
  *puVar6 = puVar6[iVar4];
  _cell = puVar6 + 1;
  for (local_14 = -1; local_14 <= _h * 2 + 1; local_14 = local_14 + 1) {
    *(undefined *)(_cell[local_14] + (long)(iVar3 + 1)) = 0x10;
    *(undefined *)(_cell[local_14] + -1) = 0x10;
  }
  for (local_18 = 0; local_18 <= _w * 2; local_18 = local_18 + 1) {
    *(undefined *)(_cell[iVar2 + 1] + (long)local_18) = 0x10;
    *(undefined *)(_cell[-1] + (long)local_18) = 0x10;
  }
  for (local_14 = 0; local_14 <= _h; local_14 = local_14 + 1) {
    for (local_18 = 0; local_18 <= _w * 2; local_18 = local_18 + 1) {
      *(byte *)(_cell[local_14 * 2] + (long)local_18) =
           *(byte *)(_cell[local_14 * 2] + (long)local_18) | 0xc;
    }
  }
  for (local_14 = 0; local_14 <= _h * 2; local_14 = local_14 + 1) {
    for (local_18 = 0; local_18 <= _w; local_18 = local_18 + 1) {
      pbVar1 = (byte *)(_cell[local_14] + (long)(local_18 * 2));
      *pbVar1 = *pbVar1 | 3;
    }
  }
  for (local_18 = 0; local_18 <= _w * 2; local_18 = local_18 + 1) {
    *(byte *)(*_cell + (long)local_18) = *(byte *)(*_cell + (long)local_18) & 0xfe;
    *(byte *)(_cell[_h * 2] + (long)local_18) = *(byte *)(_cell[_h * 2] + (long)local_18) & 0xfd;
  }
  for (local_14 = 0; local_14 <= _h * 2; local_14 = local_14 + 1) {
    *(byte *)_cell[local_14] = *(byte *)_cell[local_14] & 0xfb;
    pbVar1 = (byte *)(_cell[local_14] + (long)(_w * 2));
    *pbVar1 = *pbVar1 & 0xf7;
  }
  _avail = _w * _h;
  iVar4 = _irand(2);
  iVar5 = _irand(_h);
  _walk(iVar4 * 2 + 1,iVar5 * 2 + 1);
  for (local_14 = 0; local_14 <= _h * 2; local_14 = local_14 + 1) {
    for (local_18 = 0; local_18 <= _w * 2; local_18 = local_18 + 1) {
      *(byte *)(_cell[local_14] + (long)local_18) =
           *(byte *)(_cell[local_14] + (long)local_18) & 0xef;
    }
  }
  _solve(1,1,_w * 2 + -1,_h * 2 + -1);
  _show();
  return;
}



undefined8 entry(int param_1,long param_2)

{
  _setlocale(0,"");
  if ((param_1 < 2) || (_w = _atoi(*(char **)(param_2 + 8)), _w < 1)) {
    _w = 0x10;
  }
  if ((param_1 < 3) || (_h = _atoi(*(char **)(param_2 + 0x10)), _h < 1)) {
    _h = 8;
  }
  _make_maze();
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f34. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _atoi(char *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f40. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__atoi_100004010)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _calloc(size_t param_1,size_t param_2)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f4c. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__calloc_100004018)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f58. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004020)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _putchar(int param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f64. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__putchar_100004028)(param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _rand(void)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f70. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__rand_100004030)();
  return iVar1;
}



void _setlocale(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f7c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__setlocale_100004038)();
  return;
}


