#include "shoelace-formula-for-polygonal-area.h"



undefined  [16] _shoelace(char *param_1)

{
  FILE *pFVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined auVar4 [16];
  double local_30;
  double local_28;
  int local_20;
  int local_1c;
  
  local_28 = 0.0;
  local_30 = 0.0;
  pFVar1 = _fopen(param_1,"r");
  _fscanf(pFVar1,"%d");
  puVar2 = (undefined8 *)_malloc((long)(local_20 + 1) << 4);
  for (local_1c = 0; local_1c < local_20; local_1c = local_1c + 1) {
    _fscanf(pFVar1,"%lf %lf");
  }
  _fclose(pFVar1);
  uVar3 = *puVar2;
  (puVar2 + (long)local_20 * 2)[1] = puVar2[1];
  puVar2[(long)local_20 * 2] = uVar3;
  for (local_1c = 0; local_1c < local_20; local_1c = local_1c + 1) {
    local_28 = (double)NEON_fmadd(puVar2[(long)local_1c * 2],puVar2[(long)(local_1c + 1) * 2 + 1],
                                  local_28);
    local_30 = (double)NEON_fmadd(puVar2[(long)(local_1c + 1) * 2],puVar2[(long)local_1c * 2 + 1],
                                  local_30);
  }
  _free(puVar2);
  auVar4._0_8_ = ABS(local_28 - local_30) * 0.5;
  auVar4._8_8_ = 0;
  return auVar4;
}



undefined8 entry(int param_1,long param_2)

{
  if (param_1 == 1) {
    _printf("\nUsage : %s <full path of polygon vertices file>");
  }
  else {
    _shoelace(*(undefined8 *)(param_2 + 8));
    _printf("The polygon area is %lf square units.");
  }
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fclose(FILE *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f04. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fclose_100004000)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

FILE * _fopen(char *param_1,char *param_2)

{
  FILE *pFVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f10. Too many branches
                    // WARNING: Treating indirect jump as call
  pFVar1 = (FILE *)(*(code *)PTR__fopen_100004008)();
  return pFVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f1c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004010)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fscanf(FILE *param_1,char *param_2,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f28. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fscanf_100004018)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f34. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004020)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f40. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004028)((int)param_1);
  return iVar1;
}


