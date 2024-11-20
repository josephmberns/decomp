#include "exceptions-catch-an-exception-thrown-in-a-nested-call.h"



long * _Create_Ex_Ctx(int param_1)

{
  long *local_18;
  
  local_18 = (long *)_malloc((long)param_1 * 0x84 + 0x18);
  if (local_18 == (long *)0x0) {
    local_18 = (long *)0x0;
  }
  else {
    *(int *)(local_18 + 1) = param_1;
    *(undefined4 *)((long)local_18 + 0xc) = 0xffffffff;
    *local_18 = (long)(local_18 + 2);
  }
  return local_18;
}



void _Free_Ex_Ctx(void *param_1)

{
  _free(param_1);
  return;
}



bool _Has_Ex(long param_1)

{
  return -1 < *(int *)(param_1 + 0xc);
}



bool _Is_Ex_Type(long *param_1,int param_2)

{
  bool bVar1;
  
  bVar1 = false;
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    bVar1 = *(int *)(*param_1 + (long)*(int *)((long)param_1 + 0xc) * 0x84) == param_2;
  }
  return bVar1;
}



void _Pop_Ex(long param_1)

{
  if (-1 < *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
  }
  return;
}



long _Get_What(long *param_1)

{
  undefined8 local_8;
  
  if (*(int *)((long)param_1 + 0xc) < 0) {
    local_8 = 0;
  }
  else {
    local_8 = *param_1 + (long)*(int *)((long)param_1 + 0xc) * 0x84 + 4;
  }
  return local_8;
}



undefined8 _Push_Ex(long *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)((long)param_1 + 0xc) + 1;
  *(int *)((long)param_1 + 0xc) = iVar1;
  if (iVar1 == *(int *)(param_1 + 1)) {
    *(int *)((long)param_1 + 0xc) = *(int *)((long)param_1 + 0xc) + -1;
    _fprintf(*(FILE **)PTR____stderrp_100004008,"*** Error: Overflow in exception context.\n");
  }
  ___snprintf_chk(*param_1 + (long)*(int *)((long)param_1 + 0xc) * 0x84 + 4,0x80,0,
                  0xffffffffffffffff,"%s");
  *(undefined4 *)(*param_1 + (long)*(int *)((long)param_1 + 0xc) * 0x84) = param_2;
  return 0xffffffff;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _baz(int param_1)

{
  if (param_1 == 0) {
    _Push_Ex(__GLOBALEX,10,"U0 Drink Error. Insufficient drinks in bar Baz.");
  }
  else {
    _Push_Ex(__GLOBALEX,0xb,"U1 Bartender Error. Bartender kicked customer out of bar Baz.");
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int _bar(undefined4 param_1)

{
  int iVar1;
  
  _fprintf(*(FILE **)PTR____stdoutp_100004010,"Bar door is open.\n");
  _baz(param_1);
  iVar1 = _Has_Ex(__GLOBALEX);
  if (iVar1 == 0) {
    _fprintf(*(FILE **)PTR____stdoutp_100004010,"Baz has been called without errors.\n");
  }
  iVar1 = _fprintf(*(FILE **)PTR____stdoutp_100004010,"Bar door is closed.\n");
  return iVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulong _foo(void)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  FILE *pFVar5;
  
  _fprintf(*(FILE **)PTR____stdoutp_100004010,"Foo entering bar.\n");
  _bar(0);
  while (iVar2 = _Is_Ex_Type(__GLOBALEX,10), iVar2 != 0) {
    pFVar5 = *(FILE **)PTR____stderrp_100004008;
    _Get_What(__GLOBALEX);
    _fprintf(pFVar5,
             "I am foo() and I deaall wrth U0 DriNk Errors with my own bottle... GOT oNE! [%s]\n");
    _Pop_Ex(__GLOBALEX);
  }
  uVar4 = _Has_Ex(__GLOBALEX);
  puVar1 = PTR____stdoutp_100004010;
  if ((int)uVar4 == 0) {
    _fprintf(*(FILE **)PTR____stdoutp_100004010,"Foo left the bar.\n");
    _fprintf(*(FILE **)puVar1,"Foo entering bar again.\n");
    _bar(1);
    while (iVar2 = _Is_Ex_Type(__GLOBALEX,10), iVar2 != 0) {
      pFVar5 = *(FILE **)PTR____stderrp_100004008;
      _Get_What(__GLOBALEX);
      _fprintf(pFVar5,
               "I am foo() and I deaall wrth U0 DriNk Errors with my own bottle... GOT oNE! [%s]\n")
      ;
      _Pop_Ex(__GLOBALEX);
    }
    uVar4 = _Has_Ex(__GLOBALEX);
    if ((int)uVar4 == 0) {
      uVar3 = _fprintf(*(FILE **)PTR____stdoutp_100004010,"Foo left the bar.\n");
      uVar4 = (ulong)uVar3;
    }
  }
  return uVar4;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 entry(void)

{
  int iVar1;
  undefined8 uVar2;
  FILE *pFVar3;
  
  uVar2 = _Create_Ex_Ctx(5);
  __GLOBALEX = uVar2;
  _foo();
  iVar1 = _Has_Ex(uVar2);
  if (iVar1 == 0) {
    _fprintf(*(FILE **)PTR____stdoutp_100004010,"No errors encountered.\n");
  }
  while (iVar1 = _Has_Ex(uVar2), iVar1 != 0) {
    pFVar3 = *(FILE **)PTR____stderrp_100004008;
    _Get_What(uVar2);
    _fprintf(pFVar3,"*** Error: %s\n");
    _Pop_Ex(uVar2);
  }
  _Free_Ex_Ctx(uVar2);
  return 0;
}



void ___snprintf_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003dd4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____snprintf_chk_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fprintf(FILE *param_1,char *param_2,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003de0. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fprintf_100004018)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003dec. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004020)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003df8. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004028)();
  return pvVar1;
}


