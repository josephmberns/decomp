#include "magic-squares-of-singly-even-order.h"



void * _oddMagicSquare(int param_1)

{
  void *pvVar1;
  int local_30;
  int local_2c;
  int local_28;
  int local_20;
  void *local_18;
  
  if ((param_1 < 3) || (param_1 % 2 == 0)) {
    local_18 = (void *)0x0;
  }
  else {
    local_20 = 0;
    local_28 = param_1 / 2;
    local_2c = 0;
    local_18 = _malloc((long)param_1 << 3);
    for (local_30 = 0; local_30 < param_1; local_30 = local_30 + 1) {
      pvVar1 = _malloc((long)param_1 << 2);
      *(void **)((long)local_18 + (long)local_30 * 8) = pvVar1;
    }
    while (local_20 = local_20 + 1, local_20 <= param_1 * param_1) {
      *(int *)(*(long *)((long)local_18 + (long)local_2c * 8) + (long)local_28 * 4) = local_20;
      if (local_2c == 0) {
        if (local_28 == param_1 + -1) {
          local_2c = 1;
        }
        else {
          local_2c = param_1 + -1;
          local_28 = local_28 + 1;
        }
      }
      else if (local_28 == param_1 + -1) {
        local_2c = local_2c + -1;
        local_28 = 0;
      }
      else if (*(int *)(*(long *)((long)local_18 + (long)(local_2c + -1) * 8) +
                       (long)(local_28 + 1) * 4) == 0) {
        local_2c = local_2c + -1;
        local_28 = local_28 + 1;
      }
      else {
        local_2c = local_2c + 1;
      }
    }
  }
  return local_18;
}



void * _singlyEvenMagicSquare(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  void *pvVar9;
  int local_7c;
  int local_78;
  int local_68;
  int local_64;
  int local_4c;
  void *local_38;
  int local_30 [6];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  if ((param_1 < 6) || ((param_1 + -2) % 4 != 0)) {
    local_38 = (void *)0x0;
  }
  else {
    iVar3 = param_1 / 2;
    lVar8 = _oddMagicSquare(iVar3);
    local_30[2] = 3;
    local_30[3] = 1;
    local_30[0] = 0;
    local_30[1] = 2;
    local_38 = _malloc((long)param_1 << 3);
    for (local_4c = 0; local_4c < param_1; local_4c = local_4c + 1) {
      pvVar9 = _malloc((long)param_1 << 2);
      *(void **)((long)local_38 + (long)local_4c * 8) = pvVar9;
    }
    for (local_64 = 0; local_64 < param_1; local_64 = local_64 + 1) {
      for (local_68 = 0; local_68 < param_1; local_68 = local_68 + 1) {
        iVar4 = 0;
        if (iVar3 != 0) {
          iVar4 = local_64 / iVar3;
        }
        iVar5 = 0;
        if (iVar3 != 0) {
          iVar5 = local_68 / iVar3;
        }
        iVar6 = 0;
        if (iVar3 != 0) {
          iVar6 = local_64 / iVar3;
        }
        iVar7 = 0;
        if (iVar3 != 0) {
          iVar7 = local_68 / iVar3;
        }
        *(undefined4 *)(*(long *)((long)local_38 + (long)local_64 * 8) + (long)local_68 * 4) =
             *(undefined4 *)
              (*(long *)(lVar8 + (long)(local_64 - iVar6 * iVar3) * 8) +
              (long)(local_68 - iVar7 * iVar3) * 4);
        piVar1 = (int *)(*(long *)((long)local_38 + (long)local_64 * 8) + (long)local_68 * 4);
        *piVar1 = *piVar1 + local_30[iVar5 + iVar4 * 2] * ((param_1 * param_1) / 4);
      }
    }
    iVar4 = iVar3 / 2;
    for (local_78 = 0; local_78 < iVar3; local_78 = local_78 + 1) {
      for (local_7c = 0; local_7c < param_1; local_7c = local_7c + 1) {
        if ((((local_7c < iVar4) || (param_1 - (iVar4 + -1) <= local_7c)) ||
            ((local_7c == iVar4 && (local_78 == iVar4)))) &&
           ((local_7c != 0 || (local_78 != iVar4)))) {
          uVar2 = *(undefined4 *)
                   (*(long *)((long)local_38 + (long)local_78 * 8) + (long)local_7c * 4);
          *(undefined4 *)(*(long *)((long)local_38 + (long)local_78 * 8) + (long)local_7c * 4) =
               *(undefined4 *)
                (*(long *)((long)local_38 + (long)(local_78 + iVar3) * 8) + (long)local_7c * 4);
          *(undefined4 *)
           (*(long *)((long)local_38 + (long)(local_78 + iVar3) * 8) + (long)local_7c * 4) = uVar2;
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_100004008 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail();
  }
  return local_38;
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
  
  for (local_20 = 0; local_20 < param_2; local_20 = local_20 + 1) {
    for (local_24 = 0; local_24 < param_2; local_24 = local_24 + 1) {
      _numDigits(*(undefined4 *)(*(long *)(param_1 + (long)local_20 * 8) + (long)local_24 * 4));
      _printf("%*s%d");
    }
    _printf("\n");
  }
  iVar1 = _printf("\nMagic constant: %d ");
  return iVar1;
}



undefined8 entry(int param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((param_1 == 2) && (iVar1 = _isdigit((int)**(char **)(param_2 + 8)), iVar1 != 0)) {
    iVar1 = _atoi(*(char **)(param_2 + 8));
    uVar2 = _singlyEvenMagicSquare(iVar1);
    _printMagicSquare(uVar2,iVar1);
  }
  else {
    _printf("Usage : %s <integer specifying rows in magic square>");
  }
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003efc. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _atoi(char *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f08. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__atoi_100004010)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _isdigit(int _c)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f14. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__isdigit_100004018)(_c);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f20. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004020)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f2c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004028)((int)param_1);
  return iVar1;
}


