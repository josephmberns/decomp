#include "old-russian-measure-of-length.h"



undefined8 entry(int param_1,long param_2)

{
  int iVar1;
  char *pcVar2;
  int local_110;
  int local_10c;
  undefined auStack_f8 [104];
  undefined8 auStack_90 [13];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100004008;
  _memcpy(auStack_90,&PTR_s_kilometer_100004038,0x68);
  _memcpy(auStack_f8,&DAT_100003f40,0x68);
  if (param_1 == 3) {
    for (local_10c = 0; *(char *)(*(long *)(param_2 + 0x10) + (long)local_10c) != '\0';
        local_10c = local_10c + 1) {
      iVar1 = _tolower((int)*(char *)(*(long *)(param_2 + 0x10) + (long)local_10c));
      *(char *)(*(long *)(param_2 + 0x10) + (long)local_10c) = (char)iVar1;
    }
    for (local_10c = 0; local_10c < 0xd; local_10c = local_10c + 1) {
      pcVar2 = _strstr(*(char **)(param_2 + 0x10),(char *)auStack_90[local_10c]);
      if (pcVar2 != (char *)0x0) {
        local_110 = local_10c;
        _atof(*(char **)(param_2 + 8));
        break;
      }
    }
    iVar1 = _printf("%s %s is equal in length to : \n");
    for (local_10c = 0; local_10c < 0xd; local_10c = local_10c + 1) {
      if (local_10c != local_110) {
        iVar1 = _printf("\n%lf %s");
      }
    }
  }
  else {
    iVar1 = _printf("Usage : %s followed by length as <value> <unit>");
  }
  if (*(long *)PTR____stack_chk_guard_100004008 == local_28) {
    return 0;
  }
                    // WARNING: Subroutine does not return
  ___stack_chk_fail(iVar1);
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003e4c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

double _atof(char *param_1)

{
  double dVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e58. Too many branches
                    // WARNING: Treating indirect jump as call
  dVar1 = (double)(*(code *)PTR__atof_100004010)();
  return dVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _memcpy(void *param_1,void *param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e64. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__memcpy_100004018)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e70. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004020)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * _strstr(char *param_1,char *param_2)

{
  char *pcVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e7c. Too many branches
                    // WARNING: Treating indirect jump as call
  pcVar1 = (char *)(*(code *)PTR__strstr_100004028)();
  return pcVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _tolower(int _c)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e88. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__tolower_100004030)(_c);
  return iVar1;
}


