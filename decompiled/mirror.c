#include "mirror.h"



undefined8 entry(void)

{
  int iVar1;
  undefined auStack_2c [20];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  _saisie();
  _miroir(auStack_2c);
  iVar1 = _printf("miroir est %s");
  if (*(long *)PTR____stack_chk_guard_100004008 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(iVar1);
  }
  return 0;
}



int _saisie(void)

{
  int iVar1;
  
  _printf("saisir une chaine\n");
  iVar1 = _scanf("%s");
  return iVar1;
}



long _miroir(long param_1)

{
  undefined uVar1;
  undefined4 local_24;
  undefined4 local_1c;
  
  local_24 = _compte(param_1);
  for (local_1c = 0; local_24 = local_24 + -1, local_1c <= local_24; local_1c = local_1c + 1) {
    uVar1 = *(undefined *)(param_1 + local_1c);
    *(undefined *)(param_1 + local_1c) = *(undefined *)(param_1 + local_24);
    *(undefined *)(param_1 + local_24) = uVar1;
  }
  return param_1;
}



int _compte(char *param_1)

{
  int local_14;
  char *local_10;
  
  local_14 = 0;
  for (local_10 = param_1; *local_10 != '\0'; local_10 = local_10 + 1) {
    local_14 = local_14 + 1;
  }
  return local_14;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f60. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f6c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004010)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _scanf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f78. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__scanf_100004018)((int)param_1);
  return iVar1;
}


