#include "partial-function-application-1.h"



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 _partial(void)

{
  int iVar1;
  FILE *pFVar2;
  undefined8 uVar3;
  char acStack_228 [256];
  char acStack_128 [256];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100004010;
  _DAT_100008000 = _DAT_100008000 + 1;
  ___sprintf_chk();
  ___sprintf_chk(acStack_128,0,0x100,"cc -pipe -x c -shared -o %s -");
  pFVar2 = _popen(acStack_128,"w");
  _fprintf(pFVar2,
           "#define t typedef\nt int _i,*i;t _i(*__)(_i);__ p =(__)%p;void _(i _1, _i l){while(--l>-1)l[_1]=p(l[_1]);}"
          );
  _fclose(pFVar2);
  uVar3 = _dlopen(acStack_228,1);
  uVar3 = _dlsym(uVar3,"_");
  iVar1 = _unlink(acStack_228);
  if (*(long *)PTR____stack_chk_guard_100004010 != local_28) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(iVar1);
  }
  return uVar3;
}



int _square(int param_1)

{
  return param_1 * param_1;
}



int _dbl(int param_1)

{
  return param_1 * 2;
}



undefined8 entry(void)

{
  uint uVar1;
  code *pcVar2;
  code *pcVar3;
  ulong uVar4;
  int local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004010;
  uStack_28 = 0x400000003;
  local_30 = 0x200000001;
  uStack_38 = 0x400000003;
  local_40 = 0x200000001;
  pcVar2 = (code *)_partial(_square);
  pcVar3 = (code *)_partial(_dbl);
  _printf("partial square:\n");
  (*pcVar2)(&local_30,4);
  for (local_48 = 0; local_48 < 4; local_48 = local_48 + 1) {
    _printf("%d\n");
  }
  _printf("partial double:\n");
  uVar4 = (*pcVar3)(&local_40,4);
  for (local_48 = 0; local_48 < 4; local_48 = local_48 + 1) {
    uVar1 = _printf("%d\n");
    uVar4 = (ulong)uVar1;
  }
  if (*(long *)PTR____stack_chk_guard_100004010 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(uVar4);
  }
  return 0;
}



void ___sprintf_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003e58. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____sprintf_chk_100004000)();
  return;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003e64. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004008)();
  return;
}



void _dlopen(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003e70. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__dlopen_100004018)();
  return;
}



void _dlsym(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003e7c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__dlsym_100004020)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fclose(FILE *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e88. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fclose_100004028)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fprintf(FILE *param_1,char *param_2,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e94. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fprintf_100004030)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

FILE * _popen(char *param_1,char *param_2)

{
  FILE *pFVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ea0. Too many branches
                    // WARNING: Treating indirect jump as call
  pFVar1 = (FILE *)(*(code *)PTR__popen_100004038)();
  return pFVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003eac. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004040)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _unlink(char *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003eb8. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__unlink_100004048)((int)param_1);
  return iVar1;
}


