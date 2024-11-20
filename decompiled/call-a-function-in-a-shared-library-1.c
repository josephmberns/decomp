#include "call-a-function-in-a-shared-library-1.h"



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _myopenimage(void)

{
  _fprintf(*(FILE **)PTR____stderrp_100004000,"internal openimage opens %s...\n");
  _DAT_100008000 = _DAT_100008000 + 1;
  return;
}



undefined8 entry(void)

{
  long lVar1;
  code *pcVar2;
  
  lVar1 = _dlopen("./fakeimglib.so",1);
  if (lVar1 == 0) {
    _myopenimage("fake.img");
  }
  else {
    pcVar2 = (code *)_dlsym(lVar1,"openimage");
    (*pcVar2)("fake.img");
  }
  _printf("opened with handle %d\n");
  if (lVar1 != 0) {
    _dlclose(lVar1);
  }
  return 0;
}



void _dlclose(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f18. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__dlclose_100004008)();
  return;
}



void _dlopen(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f24. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__dlopen_100004010)();
  return;
}



void _dlsym(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f30. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__dlsym_100004018)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fprintf(FILE *param_1,char *param_2,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f3c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fprintf_100004020)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f48. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004028)((int)param_1);
  return iVar1;
}


