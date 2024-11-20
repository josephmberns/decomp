#include "jortsort.h"



int _number_of_digits(int param_1)

{
  undefined4 local_8;
  undefined4 local_4;
  
  local_8 = 0;
  for (local_4 = param_1; local_4 != 0; local_4 = local_4 / 10) {
    local_8 = local_8 + 1;
  }
  return local_8;
}



void * _convert_array(long param_1,int param_2)

{
  int iVar1;
  void *pvVar2;
  undefined4 local_30;
  undefined4 local_2c;
  
  pvVar2 = _malloc((long)param_2 << 2);
  local_2c = 0;
  for (local_30 = 0; local_30 < param_2; local_30 = local_30 + 1) {
    iVar1 = _atoi((char *)(param_1 + local_2c));
    *(int *)((long)pvVar2 + (long)local_30 * 4) = iVar1;
    iVar1 = _number_of_digits(*(undefined4 *)((long)pvVar2 + (long)local_30 * 4));
    local_2c = local_2c + iVar1 + 1;
  }
  return pvVar2;
}



int _isSorted(long param_1,int param_2)

{
  undefined4 local_14;
  undefined4 local_10;
  
  local_10 = 1;
  for (local_14 = 0; local_14 < param_2; local_14 = local_14 + 1) {
    if ((local_14 != 0) &&
       (*(int *)(param_1 + (long)local_14 * 4) < *(int *)(param_1 + (long)(local_14 + -1) * 4))) {
      local_10 = local_10 + -1;
    }
  }
  return local_10;
}



undefined8 entry(int param_1,long param_2)

{
  int iVar1;
  void *pvVar2;
  
  pvVar2 = (void *)_convert_array(*(undefined8 *)(param_2 + 8),param_1 + -1);
  iVar1 = _isSorted(pvVar2,param_1 + -1);
  if (iVar1 == 1) {
    _printf("Did you forgot to turn on your brain?! This array is already sorted!\n");
  }
  else if (param_1 + -1 < 0xb) {
    _printf("Am I really supposed to sort this? Sort it by yourself!\n");
  }
  else {
    _printf("Am I really supposed to sort this? Bhahahaha!\n");
  }
  _free(pvVar2);
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _atoi(char *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ec0. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__atoi_100004000)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003ecc. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004008)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ed8. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004010)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ee4. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004018)((int)param_1);
  return iVar1;
}


