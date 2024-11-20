#include "dinesmans-multiple-dwelling-problem.h"



bool _c0(int *param_1)

{
  return *param_1 != 4;
}



bool _c1(long param_1)

{
  return *(int *)(param_1 + 4) != 0;
}



bool _c2(long param_1)

{
  bool bVar1;
  
  bVar1 = false;
  if (*(int *)(param_1 + 8) != 0) {
    bVar1 = *(int *)(param_1 + 8) != 4;
  }
  return bVar1;
}



bool _c3(long param_1)

{
  return *(int *)(param_1 + 4) < *(int *)(param_1 + 0xc);
}



bool _c4(long param_1)

{
  int iVar1;
  
  iVar1 = _abs(*(int *)(param_1 + 0x10) - *(int *)(param_1 + 8));
  return iVar1 != 1;
}



bool _c5(long param_1)

{
  int iVar1;
  
  iVar1 = _abs(*(int *)(param_1 + 4) - *(int *)(param_1 + 8));
  return iVar1 != 1;
}



undefined4 _solve(int param_1)

{
  int iVar1;
  int local_20;
  int local_1c;
  undefined4 local_14;
  
  if (param_1 == 5) {
    for (local_1c = 0; local_1c < 6; local_1c = local_1c + 1) {
      iVar1 = (*(code *)(&_cond)[local_1c])(&_solution);
      if (iVar1 == 0) {
        if (_verbose != 0) {
          for (local_20 = 0; local_20 < 5; local_20 = local_20 + 1) {
            _printf("%d %s\n");
          }
          _printf("cond %d bad\n\n");
        }
        return 0;
      }
    }
    _printf("Found arrangement:\n");
    for (local_1c = 0; local_1c < 5; local_1c = local_1c + 1) {
      _printf("%d %s\n");
    }
    local_14 = 1;
  }
  else {
    for (local_1c = 0; local_1c < 5; local_1c = local_1c + 1) {
      if (*(int *)(&_occupied + (long)local_1c * 4) == 0) {
        *(int *)(&_solution + (long)param_1 * 4) = local_1c;
        *(undefined4 *)(&_occupied + (long)local_1c * 4) = 1;
        iVar1 = _solve(param_1 + 1);
        if (iVar1 != 0) {
          return 1;
        }
        *(undefined4 *)(&_occupied + (long)local_1c * 4) = 0;
      }
    }
    local_14 = 0;
  }
  return local_14;
}



undefined8 entry(void)

{
  int iVar1;
  
  _verbose = 0;
  iVar1 = _solve(0);
  if (iVar1 == 0) {
    _printf("Nobody lives anywhere\n");
  }
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _abs(int param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f2c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__abs_100004000)(param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f38. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004008)((int)param_1);
  return iVar1;
}


