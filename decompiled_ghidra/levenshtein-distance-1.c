#include "levenshtein-distance-1.h"



int _levenshtein(long param_1,int param_2,long param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int local_38;
  int local_14;
  
  local_14 = param_4;
  if ((param_2 != 0) && (local_14 = param_2, param_4 != 0)) {
    if (*(char *)(param_1 + (param_2 + -1)) == *(char *)(param_3 + (param_4 + -1))) {
      local_14 = _levenshtein(param_1,param_2 + -1,param_3,param_4 + -1);
    }
    else {
      local_38 = _levenshtein(param_1,param_2 + -1,param_3,param_4 + -1);
      iVar1 = _levenshtein(param_1,param_2,param_3,param_4 + -1);
      iVar2 = _levenshtein(param_1,param_2 + -1,param_3,param_4);
      if (iVar1 < local_38) {
        local_38 = iVar1;
      }
      if (iVar2 < local_38) {
        local_38 = iVar2;
      }
      local_14 = local_38 + 1;
    }
  }
  return local_14;
}



undefined4 entry(void)

{
  size_t sVar1;
  size_t sVar2;
  
  sVar1 = _strlen("rosettacode");
  sVar2 = _strlen("raisethysword");
  _levenshtein("rosettacode",sVar1 & 0xffffffff,"raisethysword",sVar2);
  _printf("distance between `%s\' and `%s\': %d\n");
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f58. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t _strlen(char *param_1)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f64. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__strlen_100004008)();
  return sVar1;
}


