#include "biorhythms-1.h"



int _day(int param_1,int param_2,int param_3)

{
  return (param_1 * 0x16f - ((param_1 + (param_2 + 9) / 0xc) * 7) / 4) + (param_2 * 0x113) / 9 +
         param_3 + -0xb25a2;
}



int _cycle(int param_1,int param_2)

{
  int iVar1;
  double dVar2;
  
  dVar2 = (double)_sin(((double)(long)param_1 * 6.283185307179586) / (double)(long)param_2);
  _printf("%12s cycle: %3i%%");
  iVar1 = _abs((int)(dVar2 * 100.0));
  if (iVar1 < 0xf) {
    _printf(" (critical day)");
  }
  iVar1 = _printf("\n");
  return iVar1;
}



undefined8 entry(int param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_1 < 7) {
    _printf("Usage:\n");
    _printf("cbio y1 m1 d1 y2 m2 d2\n");
                    // WARNING: Subroutine does not return
    _exit(1);
  }
  iVar1 = _atoi(*(char **)(param_2 + 8));
  iVar2 = _atoi(*(char **)(param_2 + 0x10));
  iVar3 = _atoi(*(char **)(param_2 + 0x18));
  iVar1 = _day(iVar1,iVar2,iVar3);
  iVar2 = _atoi(*(char **)(param_2 + 0x20));
  iVar3 = _atoi(*(char **)(param_2 + 0x28));
  iVar4 = _atoi(*(char **)(param_2 + 0x30));
  iVar2 = _day(iVar2,iVar3,iVar4);
  iVar1 = _abs(iVar1 - iVar2);
  _printf("Age: %u days\n");
  _cycle(iVar1,0x17,"Physical");
  _cycle(iVar1,0x1c,"Emotional");
  _cycle(iVar1,0x21,"Intellectual");
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _abs(int param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ee4. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__abs_100004000)(param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _atoi(char *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ef0. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__atoi_100004008)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _exit(int param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003efc. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__exit_100004010)(param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f08. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004018)((int)param_1);
  return iVar1;
}



void _sin(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f14. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__sin_100004020)();
  return;
}


