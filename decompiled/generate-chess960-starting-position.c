#include "generate-chess960-starting-position.h"



void _swap(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(&_pos + (long)param_1 * 4);
  *(undefined4 *)(&_pos + (long)param_1 * 4) = *(undefined4 *)(&_pos + (long)param_2 * 4);
  *(undefined4 *)(&_pos + (long)param_2 * 4) = uVar1;
  return;
}



void _generateFirstRank(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_34;
  
  for (local_34 = 0; local_34 < 8; local_34 = local_34 + 1) {
    (&_rank)[local_34] = 0x65;
    *(int *)(&_pos + (long)local_34 * 4) = local_34;
  }
  do {
    iVar2 = _rand();
    iVar2 = iVar2 % 8;
    iVar3 = _rand();
    iVar3 = iVar3 % 8;
    iVar4 = _rand();
    iVar4 = iVar4 % 8;
    if ((((0 < iVar3 - iVar2) || (bVar1 = true, 0 < iVar4 - iVar2)) &&
        ((iVar3 - iVar2 < 0 || (bVar1 = true, iVar4 - iVar2 < 0)))) &&
       ((bVar1 = true, iVar3 != iVar4 && (bVar1 = true, iVar2 != iVar3)))) {
      bVar1 = iVar2 == iVar4;
    }
  } while (bVar1);
  (&_rank)[*(int *)(&_pos + (long)iVar3 * 4)] = 0x52;
  (&_rank)[*(int *)(&_pos + (long)iVar2 * 4)] = 0x4b;
  (&_rank)[*(int *)(&_pos + (long)iVar4 * 4)] = 0x52;
  _swap(iVar3,7);
  _swap(iVar4,6);
  _swap(iVar2,5);
  do {
    iVar2 = _rand();
    iVar2 = iVar2 % 5;
    iVar3 = _rand();
    iVar3 = iVar3 % 5;
  } while ((*(int *)(&_pos + (long)iVar2 * 4) - *(int *)(&_pos + (long)iVar3 * 4)) % 2 == 0 ||
           iVar2 == iVar3);
  (&_rank)[*(int *)(&_pos + (long)iVar2 * 4)] = 0x42;
  (&_rank)[*(int *)(&_pos + (long)iVar3 * 4)] = 0x42;
  _swap(iVar2,4);
  _swap(iVar3,3);
  do {
    iVar2 = _rand();
    iVar3 = _rand();
  } while (iVar2 % 3 == iVar3 % 3);
  (&_rank)[*(int *)(&_pos + (long)(iVar2 % 3) * 4)] = 0x51;
  (&_rank)[*(int *)(&_pos + (long)(iVar3 % 3) * 4)] = 0x4e;
  local_34 = 0;
  while( true ) {
    if (7 < local_34) {
      return;
    }
    if ((&_rank)[local_34] == 'e') break;
    local_34 = local_34 + 1;
  }
  (&_rank)[local_34] = 0x4e;
  return;
}



int _printRank(void)

{
  int iVar1;
  int local_14;
  
  _setlocale(0,"");
  iVar1 = _printf("\n");
  for (local_14 = 0; local_14 < 8; local_14 = local_14 + 1) {
    if ((&_rank)[local_14] == 'K') {
      iVar1 = _printf("%lc");
    }
    else if ((&_rank)[local_14] == 'Q') {
      iVar1 = _printf("%lc");
    }
    else if ((&_rank)[local_14] == 'R') {
      iVar1 = _printf("%lc");
    }
    else if ((&_rank)[local_14] == 'B') {
      iVar1 = _printf("%lc");
    }
    if ((&_rank)[local_14] == 'N') {
      iVar1 = _printf("%lc");
    }
  }
  return iVar1;
}



undefined8 entry(void)

{
  time_t tVar1;
  undefined4 local_18;
  
  tVar1 = _time((time_t *)0x0);
  _srand((uint)tVar1);
  for (local_18 = 0; local_18 < 9; local_18 = local_18 + 1) {
    _generateFirstRank();
    _printRank();
  }
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f64. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _rand(void)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f70. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__rand_100004008)();
  return iVar1;
}



void _setlocale(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f7c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__setlocale_100004010)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _srand(uint param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f88. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__srand_100004018)(param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

time_t _time(time_t *param_1)

{
  time_t tVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f94. Too many branches
                    // WARNING: Treating indirect jump as call
  tVar1 = (*(code *)PTR__time_100004020)();
  return tVar1;
}


