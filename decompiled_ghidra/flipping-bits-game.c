#include "flipping-bits-game.h"



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _fliprow(long param_1,int param_2,int param_3)

{
  for (__i = 0; __i < param_2; __i = __i + 1) {
    *(uint *)(*(long *)(param_1 + (long)(param_3 + 1) * 8) + (long)__i * 4) =
         (uint)(*(int *)(*(long *)(param_1 + (long)(param_3 + 1) * 8) + (long)__i * 4) == 0);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _flipcol(long param_1,int param_2,int param_3)

{
  for (__i = 1; __i <= param_2; __i = __i + 1) {
    *(uint *)(*(long *)(param_1 + (long)__i * 8) + (long)param_3 * 4) =
         (uint)(*(int *)(*(long *)(param_1 + (long)__i * 8) + (long)param_3 * 4) == 0);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _initt(long param_1,int param_2)

{
  int iVar1;
  
  for (__i = 1; __i <= param_2; __i = __i + 1) {
    for (__j = 0; __j < param_2; __j = __j + 1) {
      iVar1 = _rand();
      *(int *)(*(long *)(param_1 + (long)__i * 8) + (long)__j * 4) = iVar1 % 2;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _initb(long param_1,long param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  for (__i = 1; __i <= param_3; __i = __i + 1) {
    for (__j = 0; __j < param_3; __j = __j + 1) {
      *(undefined4 *)(*(long *)(param_2 + (long)__i * 8) + (long)__j * 4) =
           *(undefined4 *)(*(long *)(param_1 + (long)__i * 8) + (long)__j * 4);
    }
  }
  for (__i = 1; __i <= param_3; __i = __i + 1) {
    iVar2 = _rand();
    iVar1 = 0;
    if (param_3 != 0) {
      iVar1 = iVar2 / param_3;
    }
    _fliprow(param_2,param_3,(iVar2 - iVar1 * param_3) + 1);
  }
  for (__i = 0; __i < param_3; __i = __i + 1) {
    iVar2 = _rand();
    iVar1 = 0;
    if (param_3 != 0) {
      iVar1 = iVar2 / param_3;
    }
    _flipcol(param_2,param_3,iVar2 - iVar1 * param_3);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int _printb(undefined8 param_1,int param_2)

{
  int iVar1;
  
  _printf(" ");
  for (__i = 0; __i < param_2; __i = __i + 1) {
    _printf(" %d");
  }
  _printf("\n");
  for (__i = 1; __i <= param_2; __i = __i + 1) {
    _printf("%d");
    for (__j = 0; __j < param_2; __j = __j + 1) {
      _printf(" %d");
    }
    _printf("\n");
  }
  iVar1 = _printf("\n");
  return iVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 _eq(long param_1,long param_2,int param_3)

{
  __i = 1;
  do {
    if (param_3 < __i) {
      return 1;
    }
    for (__j = 0; __j < param_3; __j = __j + 1) {
      if (*(int *)(*(long *)(param_2 + (long)__i * 8) + (long)__j * 4) !=
          *(int *)(*(long *)(param_1 + (long)__i * 8) + (long)__j * 4)) {
        return 0;
      }
    }
    __i = __i + 1;
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulong entry(void)

{
  bool bVar1;
  uint uVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  ulong uVar6;
  undefined4 local_38;
  char local_31;
  
  bVar1 = false;
  pvVar3 = _malloc(0xf);
  for (__i = 1; __i < 4; __i = __i + 1) {
    pvVar4 = _malloc(0xc);
    *(void **)((long)pvVar3 + (long)__i * 8) = pvVar4;
  }
  pvVar4 = _malloc(0xf);
  for (__i = 1; __i < 4; __i = __i + 1) {
    pvVar5 = _malloc(0xc);
    *(void **)((long)pvVar4 + (long)__i * 8) = pvVar5;
  }
  _initt(pvVar3,3);
  _initb(pvVar3,pvVar4,3);
  while (uVar6 = _eq(pvVar3,pvVar4,3), (int)uVar6 != 0) {
    _initb(pvVar3,pvVar4,3);
  }
  while (!bVar1) {
    _printf("Target: \n");
    _printb(pvVar3,3);
    _printf("Board: \n");
    _printb(pvVar4,3);
    _printf("What to flip: ");
    _scanf(" %c");
    _scanf(" %d");
    if (local_31 == 'c') {
      _flipcol(pvVar4,3,local_38);
    }
    else if (local_31 == 'r') {
      _fliprow(pvVar4,3,local_38);
    }
    else {
      _perror("Please specify r or c and an number");
    }
    _printf("Moves Taken: %d\n");
    uVar6 = _eq(pvVar3,pvVar4,3);
    if ((int)uVar6 != 0) {
      uVar2 = _printf("You win!\n");
      uVar6 = (ulong)uVar2;
      bVar1 = true;
    }
  }
  return uVar6;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ef4. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004000)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _perror(char *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f00. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__perror_100004008)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f0c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004010)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _rand(void)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f18. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__rand_100004018)();
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _scanf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f24. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__scanf_100004020)((int)param_1);
  return iVar1;
}


