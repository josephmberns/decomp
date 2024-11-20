#include "check-that-file-exists-1.h"



bool _check_reg(char *param_1)

{
  bool bVar1;
  int iVar2;
  stat sStack_a8;
  char *local_18;
  
  local_18 = param_1;
  iVar2 = _stat(param_1,&sStack_a8);
  bVar1 = false;
  if (iVar2 == 0) {
    bVar1 = (sStack_a8.st_mode & 0xf000) == 0x8000;
  }
  return bVar1;
}



bool _check_dir(char *param_1)

{
  bool bVar1;
  int iVar2;
  stat sStack_a8;
  char *local_18;
  
  local_18 = param_1;
  iVar2 = _stat(param_1,&sStack_a8);
  bVar1 = false;
  if (iVar2 == 0) {
    bVar1 = (sStack_a8.st_mode & 0xf000) == 0x4000;
  }
  return bVar1;
}



undefined4 entry(void)

{
  _check_reg("input.txt");
  _printf("input.txt is a regular file? %s\n");
  _check_dir("docs");
  _printf("docs is a directory? %s\n");
  _check_reg("/input.txt");
  _printf("/input.txt is a regular file? %s\n");
  _check_dir("/docs");
  _printf("/docs is a directory? %s\n");
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ef8. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _stat(char *param_1,stat *param_2)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f04. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__stat_100004008)((int)param_1);
  return iVar1;
}


