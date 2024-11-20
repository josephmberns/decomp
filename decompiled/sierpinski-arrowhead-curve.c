#include "sierpinski-arrowhead-curve.h"



void _turn(long param_1,int param_2)

{
  *(int *)(param_1 + 0x10) = (*(int *)(param_1 + 0x10) + param_2) % 0x168;
  return;
}



int _draw_line(undefined8 param_1,FILE *param_2,undefined8 *param_3)

{
  int iVar1;
  double dVar2;
  undefined8 uVar3;
  
  dVar2 = ((double)(long)*(int *)(param_3 + 2) * 3.141592653589793) / 180.0;
  uVar3 = _cos(dVar2);
  uVar3 = NEON_fmadd(param_1,uVar3,*param_3);
  *param_3 = uVar3;
  uVar3 = _sin(dVar2);
  uVar3 = NEON_fmadd(param_1,uVar3,param_3[1]);
  param_3[1] = uVar3;
  iVar1 = _fprintf(param_2,"L%g,%g\n");
  return iVar1;
}



void _curve(double param_1,undefined8 param_2,int param_3,undefined8 param_4,int param_5)

{
  if (param_3 == 0) {
    _draw_line(param_1,param_2,param_4);
  }
  else {
    _curve(param_1 / 2.0,param_2,param_3 + -1,param_4,-param_5);
    _turn(param_4,param_5);
    _curve(param_1 / 2.0,param_2,param_3 + -1,param_4,param_5);
    _turn(param_4,param_5);
    _curve(param_1 / 2.0,param_2,param_3 + -1,param_4,-param_5);
  }
  return;
}



int _write_sierpinski_arrowhead(FILE *param_1,int param_2,uint param_3)

{
  int iVar1;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  double local_30;
  undefined8 local_28;
  uint local_20;
  int local_1c;
  FILE *local_18;
  
  local_28 = 0x4034000000000000;
  local_30 = (double)(long)param_2 - 40.0;
  local_38 = 0;
  local_48 = 0x4034000000000000;
  local_40 = NEON_fmadd(0x3fe0000000000000,(double)(long)param_2,local_30 * 0.4330127018922193);
  local_20 = param_3;
  local_1c = param_2;
  local_18 = param_1;
  if ((param_3 & 1) != 0) {
    _turn(&local_48,0xffffffc4);
  }
  _fprintf(local_18,"<svg xmlns=\'http://www.w3.org/2000/svg\' width=\'%d\' height=\'%d\'>\n");
  _fprintf(local_18,"<rect width=\'100%%\' height=\'100%%\' fill=\'white\'/>\n");
  _fprintf(local_18,"<path stroke-width=\'1\' stroke=\'black\' fill=\'none\' d=\'");
  _fprintf(local_18,"M%g,%g\n");
  _curve(local_30,local_18,local_20,&local_48,0x3c);
  iVar1 = _fprintf(local_18,"\'/>\n</svg>\n");
  return iVar1;
}



bool entry(int param_1,long param_2)

{
  FILE *pFVar1;
  char *local_28;
  
  local_28 = "sierpinski_arrowhead.svg";
  if (param_1 == 2) {
    local_28 = *(char **)(param_2 + 8);
  }
  pFVar1 = _fopen(local_28,"w");
  if (pFVar1 != (FILE *)0x0) {
    _write_sierpinski_arrowhead(pFVar1,600,8);
    _fclose(pFVar1);
  }
  else {
    _perror(local_28);
  }
  return pFVar1 == (FILE *)0x0;
}



void _cos(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003e60. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__cos_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fclose(FILE *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e6c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fclose_100004008)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

FILE * _fopen(char *param_1,char *param_2)

{
  FILE *pFVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e78. Too many branches
                    // WARNING: Treating indirect jump as call
  pFVar1 = (FILE *)(*(code *)PTR__fopen_100004010)();
  return pFVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fprintf(FILE *param_1,char *param_2,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e84. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fprintf_100004018)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _perror(char *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003e90. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__perror_100004020)();
  return;
}



void _sin(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003e9c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__sin_100004028)();
  return;
}


