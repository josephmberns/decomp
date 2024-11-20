#include "averages-median-1.h"



uint _floatcmp(float *param_1,float *param_2)

{
  undefined4 local_4;
  
  if (*param_2 <= *param_1) {
    local_4 = (uint)(*param_2 < *param_1);
  }
  else {
    local_4 = 0xffffffff;
  }
  return local_4;
}



float _median(long *param_1)

{
  _qsort((void *)*param_1,(long)*(int *)(param_1 + 1),4,(int *)_floatcmp);
  return (*(float *)(*param_1 + (long)(*(int *)(param_1 + 1) / 2) * 4) +
         *(float *)(*param_1 + (long)((*(int *)(param_1 + 1) + -1) / 2) * 4)) * 0.5;
}



undefined4 entry(void)

{
  _median(&PTR_DAT_100008018);
  _printf("flist1 median is %7.2f\n");
  _median(&PTR_DAT_100008040);
  _printf("flist2 median is %7.2f\n");
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f60. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _qsort(void *param_1,size_t param_2,size_t param_3,int *param_4)

{
                    // WARNING: Could not recover jumptable at 0x000100003f6c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__qsort_100004008)();
  return;
}


