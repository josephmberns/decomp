#include "update-a-configuration-file.h"



int _output_opt(FILE *param_1,long param_2)

{
  int local_14;
  
  if (*(long *)(param_2 + 8) == 0) {
    local_14 = _fprintf(param_1,"; %s\n");
  }
  else if (**(char **)(param_2 + 8) == '\0') {
    local_14 = _fprintf(param_1,"%s\n");
  }
  else {
    local_14 = _fprintf(param_1,"%s %s\n");
  }
  return local_14;
}



int _update(FILE *param_1,FILE *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  size_t sVar4;
  size_t sVar5;
  size_t sVar6;
  int local_1cc;
  int local_1ac;
  char acStack_1a8 [128];
  char acStack_128 [256];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100004008;
LAB_100003b10:
  do {
    pcVar3 = _fgets(acStack_128,0x100,param_1);
    if (pcVar3 == (char *)0x0) {
      local_1cc = 0;
      goto LAB_100003d38;
    }
    sVar4 = _strlen(acStack_128);
    sVar5 = _strspn(acStack_128,"\t ");
    sVar6 = _strcspn(acStack_128,"#");
    if (((sVar5 != sVar6) && (sVar5 != sVar4)) &&
       ((iVar2 = _sscanf(acStack_128,"; %127s"), iVar2 == 1 ||
        (iVar2 = _sscanf(acStack_128,"%127s"), iVar2 == 1)))) {
      bVar1 = false;
      local_1cc = 0;
      while (*(long *)(param_3 + (long)local_1cc * 0x18) != 0) {
        iVar2 = _strcasecmp(*(char **)(param_3 + (long)local_1cc * 0x18),acStack_1a8);
        if (iVar2 == 0) {
          iVar2 = _output_opt(param_2,param_3 + (long)local_1cc * 0x18);
          if (iVar2 < 0) {
            local_1ac = -1;
            goto LAB_100003df8;
          }
          *(undefined4 *)(param_3 + (long)local_1cc * 0x18 + 0x10) = 1;
          bVar1 = true;
        }
        local_1cc = local_1cc + 1;
      }
      if (bVar1) goto LAB_100003b10;
    }
    iVar2 = _fprintf(param_2,"%s");
  } while (-1 < iVar2);
  local_1ac = -1;
LAB_100003df8:
  if (*(long *)PTR____stack_chk_guard_100004008 == local_28) {
    return local_1ac;
  }
                    // WARNING: Subroutine does not return
  ___stack_chk_fail();
LAB_100003d38:
  if (*(long *)(param_3 + (long)local_1cc * 0x18) == 0) goto LAB_100003dd4;
  if ((*(int *)(param_3 + (long)local_1cc * 0x18 + 0x10) == 0) &&
     (iVar2 = _output_opt(param_2,param_3 + (long)local_1cc * 0x18), iVar2 < 0)) {
    local_1ac = -1;
    goto LAB_100003df8;
  }
  local_1cc = local_1cc + 1;
  goto LAB_100003d38;
LAB_100003dd4:
  iVar2 = _feof(param_1);
  local_1ac = -(uint)(iVar2 == 0);
  goto LAB_100003df8;
}



bool entry(void)

{
  int iVar1;
  
  iVar1 = _update(*(undefined8 *)PTR____stdinp_100004018,*(undefined8 *)PTR____stdoutp_100004020,
                  &_updlist);
  if (iVar1 < 0) {
    _fprintf(*(FILE **)PTR____stderrp_100004010,"failed\n");
  }
  return iVar1 < 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003ec0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _feof(FILE *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ecc. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__feof_100004028)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * _fgets(char *param_1,int param_2,FILE *param_3)

{
  char *pcVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ed8. Too many branches
                    // WARNING: Treating indirect jump as call
  pcVar1 = (char *)(*(code *)PTR__fgets_100004030)(param_1,param_2);
  return pcVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fprintf(FILE *param_1,char *param_2,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ee4. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fprintf_100004038)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _sscanf(char *param_1,char *param_2,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ef0. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__sscanf_100004040)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _strcasecmp(char *param_1,char *param_2)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003efc. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__strcasecmp_100004048)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t _strcspn(char *param_1,char *param_2)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f08. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__strcspn_100004050)();
  return sVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t _strlen(char *param_1)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f14. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__strlen_100004058)();
  return sVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t _strspn(char *param_1,char *param_2)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f20. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__strspn_100004060)();
  return sVar1;
}


