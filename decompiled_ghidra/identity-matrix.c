#include "identity-matrix.h"



undefined4 entry(int param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  void *pvVar3;
  void *pvVar4;
  uint local_3c;
  uint local_38;
  uint local_34;
  
  if (param_1 < 2) {
    _printf("usage: identitymatrix <number of rows>\n");
                    // WARNING: Subroutine does not return
    _exit(1);
  }
  uVar2 = _atoi(*(char **)(param_2 + 8));
  if ((int)uVar2 < 0) {
    _printf("Dimensions of matrix cannot be negative\n");
                    // WARNING: Subroutine does not return
    _exit(1);
  }
  iVar1 = uVar2 * uVar2;
  if (iVar1 < (int)uVar2) {
    _printf("Squaring %d caused result to overflow to %d.\n");
                    // WARNING: Subroutine does not return
    _abort();
  }
  pvVar3 = _calloc((long)iVar1,8);
  if (pvVar3 == (void *)0x0) {
    _printf("Failed to allocate %d elements of %ld bytes each\n");
                    // WARNING: Subroutine does not return
    _abort();
  }
  local_34 = 0;
  while( true ) {
    if (uVar2 <= local_34) {
      _printf("Matrix is: \n");
      for (local_38 = 0; local_38 < uVar2; local_38 = local_38 + 1) {
        for (local_3c = 0; local_3c < uVar2; local_3c = local_3c + 1) {
          _printf("%d ");
        }
        _printf("\n");
      }
      return 0;
    }
    pvVar4 = _calloc((long)iVar1,4);
    *(void **)((long)pvVar3 + (ulong)local_34 * 8) = pvVar4;
    if (*(long *)((long)pvVar3 + (ulong)local_34 * 8) == 0) break;
    *(undefined4 *)(*(long *)((long)pvVar3 + (ulong)local_34 * 8) + (ulong)local_34 * 4) = 1;
    local_34 = local_34 + 1;
  }
  _printf("Failed to allocate %d elements of %ld bytes each\n");
                    // WARNING: Subroutine does not return
  _abort();
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _abort(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003eb0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__abort_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _atoi(char *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ebc. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__atoi_100004008)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _calloc(size_t param_1,size_t param_2)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ec8. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__calloc_100004010)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _exit(int param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003ed4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__exit_100004018)(param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ee0. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004020)((int)param_1);
  return iVar1;
}


