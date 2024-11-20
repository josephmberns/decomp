#include "percolation-mean-run-density.h"



undefined  [16] _run_test(double param_1,int param_2,int param_3)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  undefined auVar4 [16];
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_24;
  
  local_34 = 0;
  for (local_24 = 0; local_24 < param_3; local_24 = local_24 + 1) {
    local_30 = param_2;
    bVar2 = false;
    while (local_30 != 0) {
      iVar3 = _rand();
      bVar1 = iVar3 < (int)(param_1 * 2147483647.0);
      local_34 = local_34 + (uint)(bVar2 < bVar1);
      local_30 = local_30 + -1;
      bVar2 = bVar1;
    }
  }
  auVar4._0_8_ = ((double)(long)local_34 / (double)(long)param_3) / (double)(long)param_2;
  auVar4._8_8_ = 0;
  return auVar4;
}



undefined8 entry(void)

{
  int local_38;
  int local_34;
  
  _puts(
       "running 1000 tests each:\n p\t   n\tK\tp(1-p)\t     diff\n-----------------------------------------------"
       );
  for (local_34 = 1; local_34 < 10; local_34 = local_34 + 2) {
    for (local_38 = 100; local_38 < 0x186a1; local_38 = local_38 * 10) {
      _run_test((double)(long)local_34 / 10.0,local_38,1000);
      _printf("%.1f\t%6d\t%.4f\t%.4f\t%+.4f (%+.2f%%)\n");
    }
    _putchar(10);
  }
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ee8. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _putchar(int param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ef4. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__putchar_100004008)(param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _puts(char *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f00. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__puts_100004010)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _rand(void)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f0c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__rand_100004018)();
  return iVar1;
}


