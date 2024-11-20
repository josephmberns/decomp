#include "mandelbrot-set-1.h"



undefined8 entry(void)

{
  bool bVar1;
  FILE *pFVar2;
  double dVar3;
  int local_ac;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_38;
  int local_1c;
  int local_18;
  
  pFVar2 = _fopen("new1.ppm","wb");
  _fprintf(pFVar2,"P6\n %s\n %d\n %d\n %d\n");
  for (local_1c = 0; local_1c < 800; local_1c = local_1c + 1) {
    local_38 = (double)NEON_fmadd((double)(long)local_1c,0x3f747ae147ae147b,0xc000000000000000);
    if (ABS(local_38) < 0.0025) {
      local_38 = 0.0;
    }
    for (local_18 = 0; local_18 < 800; local_18 = local_18 + 1) {
      dVar3 = (double)NEON_fmadd((double)(long)local_18,0x3f747ae147ae147b,0xc004000000000000);
      local_90 = 0.0;
      local_98 = 0.0;
      local_a0 = 0.0;
      local_a8 = 0.0;
      local_ac = 0;
      while( true ) {
        bVar1 = false;
        if (local_ac < 200) {
          bVar1 = local_a0 + local_a8 < 4.0;
        }
        if (!bVar1) break;
        local_98 = (double)NEON_fmadd(local_90 * 2.0,local_98,local_38);
        local_90 = (local_a0 - local_a8) + dVar3;
        local_a0 = local_90 * local_90;
        local_a8 = local_98 * local_98;
        local_ac = local_ac + 1;
      }
      if (local_ac == 200) {
        DAT_100008000 = 0;
        DAT_100008001 = 0;
        DAT_100008002 = 0;
      }
      else {
        DAT_100008000 = 0xff;
        DAT_100008001 = 0xff;
        DAT_100008002 = 0xff;
      }
      _fwrite(&DAT_100008000,1,3,pFVar2);
    }
  }
  _fclose(pFVar2);
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fclose(FILE *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f50. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fclose_100004000)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

FILE * _fopen(char *param_1,char *param_2)

{
  FILE *pFVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f5c. Too many branches
                    // WARNING: Treating indirect jump as call
  pFVar1 = (FILE *)(*(code *)PTR__fopen_100004008)();
  return pFVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fprintf(FILE *param_1,char *param_2,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f68. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fprintf_100004010)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t _fwrite(void *param_1,size_t param_2,size_t param_3,FILE *param_4)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f74. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__fwrite_100004018)();
  return sVar1;
}


