#include "time-a-function.h"



undefined4 _identity(undefined4 param_1)

{
  return param_1;
}



int _sum(int param_1)

{
  undefined4 local_8;
  undefined4 local_4;
  
  local_4 = param_1;
  for (local_8 = 0; local_8 < 1000000; local_8 = local_8 + 1) {
    local_4 = local_4 + local_8;
  }
  return local_4;
}



undefined  [16] _time_it(code *param_1,undefined4 param_2)

{
  double dVar1;
  undefined auVar2 [16];
  time_t local_40;
  long local_38;
  time_t local_30;
  long local_28;
  undefined4 local_1c;
  code *local_18;
  
  local_1c = param_2;
  local_18 = param_1;
  _clock_gettime(0xc,&local_30);
  (*local_18)(local_1c);
  _clock_gettime(0xc,&local_40);
  dVar1 = _difftime(local_40,local_30);
  auVar2._0_8_ = dVar1 + (double)(local_38 - local_28) / 1000000000.0;
  auVar2._8_8_ = 0;
  return auVar2;
}



undefined4 entry(void)

{
  _time_it(_identity);
  _printf("identity (4) takes %lf s\n");
  _time_it(_sum,4);
  _printf("sum      (4) takes %lf s\n");
  return 0;
}



void _clock_gettime(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f44. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__clock_gettime_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

double _difftime(time_t param_1,time_t param_2)

{
  double dVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f50. Too many branches
                    // WARNING: Treating indirect jump as call
  dVar1 = (double)(*(code *)PTR__difftime_100004008)();
  return dVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f5c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004010)((int)param_1);
  return iVar1;
}


