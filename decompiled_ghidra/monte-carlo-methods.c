#include "monte-carlo-methods.h"



int _pi(double param_1)

{
  int iVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  long local_50;
  long local_48;
  long local_40;
  
  local_40 = 0;
  local_48 = 0;
  do {
    for (local_50 = 1000000; local_50 != 0; local_50 = local_50 + -1) {
      iVar1 = _rand();
      iVar2 = _rand();
      dVar3 = (double)NEON_fmadd((double)iVar1 / 2147483648.0,(double)iVar1 / 2147483648.0,
                                 ((double)iVar2 / 2147483648.0) * ((double)iVar2 / 2147483648.0));
      if (dVar3 < 1.0) {
        local_48 = local_48 + 1;
      }
      local_40 = local_40 + 1;
    }
    dVar3 = (double)NEON_ucvtf(local_48);
    dVar4 = (double)NEON_ucvtf(local_40);
    dVar5 = (double)NEON_ucvtf(local_40);
    iVar1 = _fprintf(*(FILE **)PTR____stderrp_100004000,"Pi = %f +/- %5.3e at %ldM samples.\r");
  } while (local_48 == 0 || param_1 < SQRT(((dVar3 / dVar4) * (1.0 - dVar3 / dVar4)) / dVar5) * 4.0)
  ;
  return iVar1;
}



undefined4 entry(void)

{
  _pi(0x3f33a92a30553261);
  _printf("Pi is %f\n");
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fprintf(FILE *param_1,char *param_2,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f4c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fprintf_100004008)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f58. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004010)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _rand(void)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f64. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__rand_100004018)();
  return iVar1;
}


