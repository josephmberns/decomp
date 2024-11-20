#include "circles-of-given-radius-through-two-points.h"



undefined  [16] _distance(double param_1,double param_2,double param_3,double param_4)

{
  double dVar1;
  undefined auVar2 [16];
  
  dVar1 = (double)NEON_fmadd(param_1 - param_3,param_1 - param_3,
                             (param_2 - param_4) * (param_2 - param_4));
  auVar2._0_8_ = SQRT(dVar1);
  auVar2._8_8_ = 0;
  return auVar2;
}



int _findCircles(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                double param_5)

{
  int iVar1;
  double dVar2;
  
  dVar2 = (double)_distance(param_1,param_2,param_3,param_4);
  if (dVar2 == 0.0) {
    if (param_5 == 0.0) {
      iVar1 = _printf("\nNo circles can be drawn through (%.4f,%.4f)");
    }
    else {
      iVar1 = _printf("\nInfinitely many circles can be drawn through (%.4f,%.4f)");
    }
  }
  else if (dVar2 == param_5 * 2.0) {
    iVar1 = _printf(
                   "\nGiven points are opposite ends of a diameter of the circle with center (%.4f,%.4f) and radius %.4f"
                   );
  }
  else if (dVar2 <= param_5 * 2.0) {
    _pow(param_5);
    _pow(dVar2 / 2.0);
    _printf("\nTwo circles are possible.");
    iVar1 = _printf(
                   "\nCircle C1 with center (%.4f,%.4f), radius %.4f and Circle C2 with center (%.4f,%.4f), radius %.4f"
                   );
  }
  else {
    iVar1 = _printf(
                   "\nGiven points are farther away from each other than a diameter of a circle with radius %.4f"
                   );
  }
  return iVar1;
}



undefined8 entry(void)

{
  long lVar1;
  int iVar2;
  int local_f8;
  undefined8 local_f0 [5];
  undefined8 auStack_c8 [20];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100004008;
  _memcpy(auStack_c8,&DAT_100003ef8,0xa0);
  _memset(local_f0,0,0x28);
  local_f0[0] = 0x4000000000000000;
  local_f0[1] = 0x3ff0000000000000;
  local_f0[2] = 0x4000000000000000;
  local_f0[3] = 0x3fe0000000000000;
  for (local_f8 = 0; local_f8 < 5; local_f8 = local_f8 + 1) {
    iVar2 = _printf("\nCase %d)");
    lVar1 = (long)(local_f8 * 2 + 1);
    _findCircles(auStack_c8[(long)(local_f8 * 2) * 2],auStack_c8[(long)(local_f8 * 2) * 2 + 1],
                 auStack_c8[lVar1 * 2],auStack_c8[lVar1 * 2 + 1],local_f0[local_f8],iVar2);
  }
  if (*(long *)PTR____stack_chk_guard_100004008 != local_28) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail();
  }
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003d14. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _memcpy(void *param_1,void *param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003d20. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__memcpy_100004010)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _memset(void *param_1,int param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003d2c. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__memset_100004018)(param_1,param_2);
  return pvVar1;
}



void _pow(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003d38. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__pow_100004020)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003d44. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004028)((int)param_1);
  return iVar1;
}


