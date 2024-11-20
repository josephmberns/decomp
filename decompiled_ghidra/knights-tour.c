#include "knights-tour.h"



void _init_board(int param_1,int param_2,long *param_3,long *param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int local_34;
  int local_30;
  int local_2c;
  
  iVar2 = param_2 + 4;
  *param_3 = (long)(param_3 + iVar2);
  *param_4 = *param_3 + 2;
  for (local_2c = 1; local_2c < iVar2; local_2c = local_2c + 1) {
    param_3[local_2c] = param_3[local_2c + -1] + (long)(param_1 + 4);
    param_4[local_2c] = param_3[local_2c] + 2;
  }
  ___memset_chk(*param_3,0xff,(long)((param_1 + 4) * iVar2),0xffffffffffffffff);
  for (local_2c = 0; local_2c < param_2; local_2c = local_2c + 1) {
    for (local_30 = 0; local_30 < param_1; local_30 = local_30 + 1) {
      for (local_34 = 0; local_34 < 8; local_34 = local_34 + 1) {
        iVar2 = *(int *)(&_dx + (long)local_34 * 4);
        iVar3 = *(int *)(&_dy + (long)local_34 * 4);
        if (*(char *)(param_4[local_2c + 2] + (long)local_30) == -1) {
          *(undefined *)(param_4[local_2c + 2] + (long)local_30) = 0;
        }
        bVar1 = false;
        if (((-1 < local_30 + iVar2) && (bVar1 = false, local_30 + iVar2 < param_1)) &&
           (bVar1 = false, -1 < local_2c + iVar3)) {
          bVar1 = local_2c + iVar3 < param_2;
        }
        *(char *)(param_4[local_2c + 2] + (long)local_30) =
             *(char *)(param_4[local_2c + 2] + (long)local_30) + bVar1;
      }
    }
  }
  return;
}



bool _walk_board(int param_1,int param_2,int param_3,int param_4,long param_5)

{
  char *pcVar1;
  byte bVar2;
  int local_3c;
  int local_34;
  int local_30;
  int local_2c;
  int local_20;
  int local_1c;
  
  local_3c = 0;
  _printf("\x1b[H\x1b[J\x1b[%d;%dH\x1b[32m[]\x1b[m");
  local_20 = param_4;
  local_1c = param_3;
  while( true ) {
    *(undefined *)(*(long *)(param_5 + (long)local_20 * 8) + (long)local_1c) = 0xff;
    for (local_2c = 0; local_2c < 8; local_2c = local_2c + 1) {
      pcVar1 = (char *)(*(long *)(param_5 +
                                 (long)(local_20 + *(int *)(&_dy + (long)local_2c * 4)) * 8) +
                       (long)(local_1c + *(int *)(&_dx + (long)local_2c * 4)));
      *pcVar1 = *pcVar1 + -1;
    }
    bVar2 = 0xff;
    for (local_2c = 0; local_2c < 8; local_2c = local_2c + 1) {
      if (*(byte *)(*(long *)(param_5 + (long)(local_20 + *(int *)(&_dy + (long)local_2c * 4)) * 8)
                   + (long)(local_1c + *(int *)(&_dx + (long)local_2c * 4))) < bVar2) {
        local_30 = local_1c + *(int *)(&_dx + (long)local_2c * 4);
        local_34 = local_20 + *(int *)(&_dy + (long)local_2c * 4);
        bVar2 = *(byte *)(*(long *)(param_5 + (long)local_34 * 8) + (long)local_30);
      }
    }
    if (7 < bVar2) break;
    if (local_3c != 0) {
      _printf("\x1b[%d;%dH[]");
    }
    local_1c = local_30;
    local_20 = local_34;
    _printf("\x1b[%d;%dH\x1b[31m[]\x1b[m");
    _fflush(*(FILE **)PTR____stdoutp_100004008);
    _usleep(120000);
    local_3c = local_3c + 1;
  }
  _printf("\x1b[%dH");
  return local_3c == param_1 * param_2 + -1;
}



undefined4 _solve(int param_1,int param_2)

{
  int iVar1;
  void *pvVar2;
  void *pvVar3;
  int local_24;
  int local_20;
  
  local_20 = 0;
  local_24 = 0;
  pvVar2 = _malloc((long)(param_2 + 4) * 8 + (long)((param_1 + 4) * (param_2 + 4)));
  pvVar3 = _malloc((long)(param_2 + 4) << 3);
  while( true ) {
    _init_board(param_1,param_2,pvVar2,pvVar3);
    iVar1 = _walk_board(param_1,param_2,local_20,local_24,(long)pvVar3 + 0x10);
    if (iVar1 != 0) {
      _printf("Success!\n");
      return 1;
    }
    local_20 = local_20 + 1;
    if (param_1 <= local_20) {
      local_20 = 0;
      local_24 = local_24 + 1;
    }
    if (param_2 <= local_24) break;
    _printf("Any key to try next start position");
    _getchar();
  }
  _printf("Failed to find a solution\n");
  return 0;
}



undefined8 entry(int param_1,long param_2)

{
  int local_28;
  int local_24;
  
  if ((param_1 < 2) || (local_24 = _atoi(*(char **)(param_2 + 8)), local_24 < 1)) {
    local_24 = 8;
  }
  if ((param_1 < 3) || (local_28 = _atoi(*(char **)(param_2 + 0x10)), local_28 < 1)) {
    local_28 = local_24;
  }
  _solve(local_24,local_28);
  return 0;
}



void ___memset_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003ed4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____memset_chk_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _atoi(char *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ee0. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__atoi_100004010)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fflush(FILE *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003eec. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fflush_100004018)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _getchar(void)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ef8. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__getchar_100004020)();
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f04. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004028)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f10. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004030)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _usleep(useconds_t param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f1c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__usleep_100004038)(param_1);
  return iVar1;
}


