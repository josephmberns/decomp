#include "average-loop-length.h"



undefined  [16] _factorial(int param_1)

{
  undefined auVar1 [16];
  undefined4 local_14;
  undefined8 local_10;
  
  local_10 = 1.0;
  for (local_14 = 1; local_14 <= param_1; local_14 = local_14 + 1) {
    local_10 = local_10 * (double)(long)local_14;
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_10;
  return auVar1;
}



undefined  [16] _expected(int param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined auVar4 [16];
  undefined4 local_24;
  undefined8 local_20;
  
  local_20 = 0.0;
  for (local_24 = 1; local_24 <= param_1; local_24 = local_24 + 1) {
    dVar1 = (double)_factorial(param_1);
    dVar2 = (double)_pow((double)(long)param_1,(double)(long)local_24);
    dVar3 = (double)_factorial(param_1 - local_24);
    local_20 = local_20 + (dVar1 / dVar2) / dVar3;
  }
  auVar4._8_8_ = 0;
  auVar4._0_8_ = local_20;
  return auVar4;
}



int _randint(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = 0;
  if (param_1 != 0) {
    iVar1 = 0x7fffffff / param_1;
  }
  do {
    iVar3 = _rand();
  } while (iVar1 * param_1 <= iVar3);
  iVar1 = 0;
  if (param_1 != 0) {
    iVar1 = 0x7fffffff / param_1;
  }
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = iVar3 / iVar1;
  }
  return iVar2;
}



int _test(undefined4 param_1,int param_2)

{
  uint uVar1;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  local_20 = 0;
  for (local_1c = 0; local_1c < param_2; local_1c = local_1c + 1) {
    local_28 = 0;
    local_24 = 1;
    while ((local_28 & local_24) == 0) {
      local_20 = local_20 + 1;
      local_28 = local_28 | local_24;
      uVar1 = _randint(param_1);
      local_24 = 1 << (ulong)(uVar1 & 0x1f);
    }
  }
  return local_20;
}



undefined8 entry(void)

{
  time_t tVar1;
  int local_18;
  
  tVar1 = _time((time_t *)0x0);
  _srand((uint)tVar1);
  _puts(" n\tavg\texp.\tdiff\n-------------------------------");
  for (local_18 = 1; local_18 < 0x15; local_18 = local_18 + 1) {
    _test(local_18,1000000);
    _expected(local_18);
    _printf("%2d %8.4f %8.4f %6.3f%%\n");
  }
  return 0;
}



void _pow(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f00. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__pow_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f0c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004008)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _puts(char *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f18. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__puts_100004010)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _rand(void)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f24. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__rand_100004018)();
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _srand(uint param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f30. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__srand_100004020)(param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

time_t _time(time_t *param_1)

{
  time_t tVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f3c. Too many branches
                    // WARNING: Treating indirect jump as call
  tVar1 = (*(code *)PTR__time_100004028)();
  return tVar1;
}


