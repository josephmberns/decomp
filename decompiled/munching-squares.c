#include "munching-squares.h"



void _hue_to_rgb(double param_1,double param_2,undefined *param_3)

{
  undefined uVar1;
  double dVar2;
  
  dVar2 = (double)_fmod(param_1 / 60.0,0x4000000000000000);
  dVar2 = (1.0 - ABS(dVar2 - 1.0)) * 255.0;
  uVar1 = (undefined)(int)(param_2 * 255.0);
  switch((int)(param_1 / 60.0)) {
  case 0:
    *param_3 = uVar1;
    param_3[1] = (char)(int)dVar2;
    param_3[2] = 0;
    break;
  case 1:
    *param_3 = (char)(int)dVar2;
    param_3[1] = uVar1;
    param_3[2] = 0;
    break;
  case 2:
    *param_3 = 0;
    param_3[1] = uVar1;
    param_3[2] = (char)(int)dVar2;
    break;
  case 3:
    *param_3 = 0;
    param_3[1] = (char)(int)dVar2;
    param_3[2] = uVar1;
    break;
  case 4:
    *param_3 = (char)(int)dVar2;
    param_3[1] = 0;
    param_3[2] = uVar1;
    break;
  case 5:
    *param_3 = uVar1;
    param_3[1] = 0;
    param_3[2] = (char)(int)dVar2;
  }
  return;
}



undefined8 entry(void)

{
  void *pvVar1;
  void *pvVar2;
  FILE *pFVar3;
  void *local_38;
  uint local_20;
  uint local_1c;
  
  pvVar1 = _malloc(0x600);
  pvVar2 = _malloc(0xc0000);
  for (local_1c = 0; (int)local_1c < 0x200; local_1c = local_1c + 1) {
    _hue_to_rgb(((double)(long)(int)local_1c * 240.0) / 512.0,
                ((double)(long)(int)local_1c * 1.0) / 512.0,(long)pvVar1 + (long)(int)(local_1c * 3)
               );
  }
  local_38 = pvVar2;
  for (local_1c = 0; (int)local_1c < 0x200; local_1c = local_1c + 1) {
    for (local_20 = 0; (int)local_20 < 0x200; local_20 = local_20 + 1) {
      ___memcpy_chk(local_38,(long)pvVar1 + (long)(int)((local_1c ^ local_20) * 3),3,
                    0xffffffffffffffff);
      local_38 = (void *)((long)local_38 + 3);
    }
  }
  pFVar3 = _fopen("xor.ppm","wb");
  _fprintf(pFVar3,"P6\n%d %d\n255\n");
  _fwrite(pvVar2,0xc0000,1,pFVar3);
  _fclose(pFVar3);
  return 0;
}



void ___memcpy_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f14. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____memcpy_chk_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fclose(FILE *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f20. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fclose_100004008)((int)param_1);
  return iVar1;
}



void _fmod(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f2c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__fmod_100004010)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

FILE * _fopen(char *param_1,char *param_2)

{
  FILE *pFVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f38. Too many branches
                    // WARNING: Treating indirect jump as call
  pFVar1 = (FILE *)(*(code *)PTR__fopen_100004018)();
  return pFVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fprintf(FILE *param_1,char *param_2,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f44. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fprintf_100004020)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t _fwrite(void *param_1,size_t param_2,size_t param_3,FILE *param_4)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f50. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__fwrite_100004028)();
  return sVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f5c. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004030)();
  return pvVar1;
}


