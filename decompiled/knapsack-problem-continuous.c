#include "knapsack-problem-continuous.h"



uint _item_cmp(double *param_1,double *param_2)

{
  uint local_34;
  
  if (param_2[1] / *param_2 <= param_1[1] / *param_1) {
    local_34 = (uint)(param_2[1] / *param_2 < param_1[1] / *param_1);
  }
  else {
    local_34 = 0xffffffff;
  }
  return local_34;
}



undefined8 entry(void)

{
  double *pdVar1;
  double local_28;
  double *local_20;
  
  local_28 = 15.0;
  _qsort(&_items,9,0x18,(int *)_item_cmp);
  local_20 = (double *)&DAT_1000080d8;
  for (; pdVar1 = local_20 + -3, (long)(local_20 + -0x20001000) / 0x18 != 0 && 0.0 < local_28;
      local_28 = local_28 - *pdVar1) {
    if (local_28 < *pdVar1) {
      _printf("take %gkg of %g kg of %s\n");
    }
    else {
      _printf("take all %s\n");
    }
    local_20 = pdVar1;
  }
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f30. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _qsort(void *param_1,size_t param_2,size_t param_3,int *param_4)

{
                    // WARNING: Could not recover jumptable at 0x000100003f3c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__qsort_100004008)();
  return;
}


