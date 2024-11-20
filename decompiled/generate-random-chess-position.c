#include "generate-random-chess-position.h"



void _placeKings(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  do {
    do {
      iVar1 = _rand();
      iVar1 = iVar1 % 8;
      iVar2 = _rand();
      iVar3 = _rand();
      iVar3 = iVar3 % 8;
      iVar4 = _rand();
    } while (iVar1 == iVar3);
    iVar5 = _abs(iVar1 - iVar3);
  } while ((iVar5 < 2) || (iVar5 = _abs(iVar2 % 8 - iVar4 % 8), iVar5 < 2));
  (&_grid)[(long)(iVar2 % 8) + (long)iVar1 * 8] = 0x4b;
  (&_grid)[(long)(iVar4 % 8) + (long)iVar3 * 8] = 0x6b;
  return;
}



void _placePieces(char *param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  size_t sVar6;
  int local_20;
  
  iVar3 = _rand();
  sVar6 = _strlen(param_1);
  iVar1 = 0;
  if (sVar6 != 0) {
    iVar1 = (int)((ulong)(long)iVar3 / sVar6);
  }
  for (local_20 = 0; local_20 < iVar3 - iVar1 * (int)sVar6; local_20 = local_20 + 1) {
    do {
      iVar4 = _rand();
      iVar4 = iVar4 % 8;
      iVar5 = _rand();
      bVar2 = true;
      if (((&_grid)[(long)(iVar5 % 8) + (long)iVar4 * 8] == '\0') && (bVar2 = false, param_2 != 0))
      {
        bVar2 = iVar4 == 7 || iVar4 == 0;
      }
    } while (bVar2);
    (&_grid)[(long)(iVar5 % 8) + (long)iVar4 * 8] = param_1[local_20];
  }
  return;
}



void _toFen(void)

{
  char cVar1;
  int iVar2;
  long lVar3;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  char acStack_68 [80];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  local_78 = 0;
  local_7c = 0;
  for (local_70 = 0; local_70 < 8; local_70 = local_70 + 1) {
    for (local_74 = 0; local_74 < 8; local_74 = local_74 + 1) {
      cVar1 = (&_grid)[(long)local_74 + (long)local_70 * 8];
      _printf("%2c ");
      if (cVar1 == '\0') {
        local_78 = local_78 + 1;
      }
      else {
        if (0 < local_78) {
          lVar3 = (long)local_7c;
          local_7c = local_7c + 1;
          acStack_68[lVar3] = (char)local_78 + '0';
          local_78 = 0;
        }
        lVar3 = (long)local_7c;
        local_7c = local_7c + 1;
        acStack_68[lVar3] = cVar1;
      }
    }
    if (0 < local_78) {
      lVar3 = (long)local_7c;
      local_7c = local_7c + 1;
      acStack_68[lVar3] = (char)local_78 + '0';
      local_78 = 0;
    }
    lVar3 = (long)local_7c;
    local_7c = local_7c + 1;
    acStack_68[lVar3] = '/';
    _printf("\n");
  }
  ___strcpy_chk(acStack_68 + local_7c," w - - 0 1",0xffffffffffffffff);
  iVar2 = _printf("%s\n");
  if (*(long *)PTR____stack_chk_guard_100004008 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(iVar2);
  }
  return;
}



undefined8 _createFen(void)

{
  undefined8 local_18;
  
  _placeKings();
  _placePieces("PPPPPPPP");
  _placePieces("pppppppp",1);
  _placePieces("RNBQBNR");
  _placePieces("rnbqbnr",0);
  _toFen();
  return local_18;
}



undefined4 entry(void)

{
  time_t tVar1;
  
  tVar1 = _time((time_t *)0x0);
  _srand((uint)tVar1);
  _createFen();
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f18. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



void ___strcpy_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f24. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____strcpy_chk_100004010)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _abs(int param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f30. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__abs_100004018)(param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f3c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004020)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _rand(void)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f48. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__rand_100004028)();
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _srand(uint param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f54. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__srand_100004030)(param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t _strlen(char *param_1)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f60. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__strlen_100004038)();
  return sVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

time_t _time(time_t *param_1)

{
  time_t tVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f6c. Too many branches
                    // WARNING: Treating indirect jump as call
  tVar1 = (*(code *)PTR__time_100004040)();
  return tVar1;
}


