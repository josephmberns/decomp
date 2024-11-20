#include "empty-directory.h"



undefined4 _dir_empty(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined4 local_2c;
  undefined4 local_14;
  
  local_2c = 1;
  lVar2 = _opendir(param_1);
  if (lVar2 == 0) {
    _fprintf(*(FILE **)PTR____stderrp_100004000,"%s: ");
    _perror("");
    local_14 = 0xffffffff;
  }
  else {
    do {
      lVar3 = _readdir(lVar2);
      if (lVar3 == 0) goto LAB_100003e0c;
      iVar1 = _strcmp((char *)(lVar3 + 0x15),".");
    } while ((iVar1 == 0) || (iVar1 = _strcmp((char *)(lVar3 + 0x15),".."), iVar1 == 0));
    local_2c = 0;
LAB_100003e0c:
    _closedir(lVar2);
    local_14 = local_2c;
  }
  return local_14;
}



undefined4 entry(int param_1,long param_2)

{
  int iVar1;
  int local_28;
  undefined4 local_14;
  
  if (param_1 < 2) {
    local_14 = 0xffffffff;
  }
  else {
    for (local_28 = 1; local_28 < param_1; local_28 = local_28 + 1) {
      iVar1 = _dir_empty(*(undefined8 *)(param_2 + (long)local_28 * 8));
      if (-1 < iVar1) {
        _printf("%s: %sempty\n");
      }
    }
    local_14 = 0;
  }
  return local_14;
}



void _closedir(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f3c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__closedir_100004008)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fprintf(FILE *param_1,char *param_2,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f48. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fprintf_100004010)((int)param_1);
  return iVar1;
}



void _opendir(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f54. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__opendir_100004018)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _perror(char *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f60. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__perror_100004020)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f6c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004028)((int)param_1);
  return iVar1;
}



void _readdir(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f78. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__readdir_100004030)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _strcmp(char *param_1,char *param_2)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f84. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__strcmp_100004038)((int)param_1);
  return iVar1;
}


