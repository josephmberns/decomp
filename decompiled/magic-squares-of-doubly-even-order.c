#include "magic-squares-of-doubly-even-order.h"



void * _doublyEvenMagicSquare(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  int local_44;
  int local_34;
  int local_30;
  int local_2c;
  void *local_18;
  
  if ((param_1 < 4) || (param_1 % 4 != 0)) {
    local_18 = (void *)0x0;
  }
  else {
    iVar1 = param_1 / 4;
    local_18 = _malloc((long)param_1 << 3);
    for (local_2c = 0; local_2c < param_1; local_2c = local_2c + 1) {
      pvVar4 = _malloc((long)param_1 << 2);
      *(void **)((long)local_18 + (long)local_2c * 8) = pvVar4;
    }
    local_2c = 0;
    for (local_30 = 0; local_30 < param_1; local_30 = local_30 + 1) {
      for (local_34 = 0; local_34 < param_1; local_34 = local_34 + 1) {
        iVar2 = 0;
        if (iVar1 != 0) {
          iVar2 = local_34 / iVar1;
        }
        iVar3 = 0;
        if (iVar1 != 0) {
          iVar3 = local_30 / iVar1;
        }
        if ((1 << (ulong)(iVar2 + iVar3 * 4 & 0x1f) & 0x9669U) == 0) {
          local_44 = param_1 * param_1 - local_2c;
        }
        else {
          local_44 = local_2c + 1;
        }
        *(int *)(*(long *)((long)local_18 + (long)local_30 * 8) + (long)local_34 * 4) = local_44;
        local_2c = local_2c + 1;
      }
    }
  }
  return local_18;
}



int _numDigits(int param_1)

{
  undefined4 local_8;
  undefined4 local_4;
  
  local_8 = 1;
  for (local_4 = param_1; 9 < local_4; local_4 = local_4 / 10) {
    local_8 = local_8 + 1;
  }
  return local_8;
}



int _printMagicSquare(long param_1,int param_2)

{
  int iVar1;
  int local_24;
  int local_20;
  
  _numDigits(param_2 * param_2);
  iVar1 = _printf("Doubly Magic Square of Order : %d and Magic Constant : %d\n\n");
  for (local_20 = 0; local_20 < param_2; local_20 = local_20 + 1) {
    for (local_24 = 0; local_24 < param_2; local_24 = local_24 + 1) {
      _numDigits(*(undefined4 *)(*(long *)(param_1 + (long)local_20 * 8) + (long)local_24 * 4));
      _printf("%*s%d");
    }
    iVar1 = _printf("\n");
  }
  return iVar1;
}



undefined8 entry(int param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((param_1 == 2) && (iVar1 = _isdigit((int)**(char **)(param_2 + 8)), iVar1 != 0)) {
    iVar1 = _atoi(*(char **)(param_2 + 8));
    uVar2 = _doublyEvenMagicSquare(iVar1);
    _printMagicSquare(uVar2,iVar1);
  }
  else {
    _printf("Usage : %s <integer specifying rows in magic square>");
  }
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _atoi(char *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003efc. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__atoi_100004000)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _isdigit(int _c)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f08. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__isdigit_100004008)(_c);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f14. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004010)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f20. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004018)((int)param_1);
  return iVar1;
}


