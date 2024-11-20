#include "test-integerness.h"



// WARNING: Removing unreachable block (ram,0x000100003ca4)
// WARNING: Removing unreachable block (ram,0x000100003c88)

undefined4 entry(void)

{
  int iVar1;
  
  iVar1 = _printf("%d");
  FUN_100003e74(0,0,iVar1);
  _printf(" = %s\n");
  iVar1 = _printf("%d");
  FUN_100003e74(0,0,iVar1);
  _printf(" = %s\n");
  iVar1 = _printf("%d");
  FUN_100003e74(0xc000000000000000,0,iVar1);
  _printf(" = %s\n");
  iVar1 = _printf("%f");
  FUN_100003e74(0xc000000000000017,0,iVar1);
  _printf(" = %s\n");
  iVar1 = _printf("%d");
  FUN_100003e74(0x4014000000000000,0,iVar1);
  _printf(" = %s\n");
  iVar1 = _printf("%f");
  FUN_100003e74(0x401d555555555530,0,iVar1);
  _printf(" = %s\n");
  iVar1 = _printf("%f");
  FUN_100003e74(0x400921fb5444261e,0,iVar1);
  _printf(" = %s\n");
  iVar1 = _printf("%f");
  FUN_100003e74(0xc3e0000000000000,0,iVar1);
  _printf(" = %s\n");
  iVar1 = _printf("%f");
  FUN_100003e74(1,0,iVar1);
  _printf(" = %s\n");
  iVar1 = _printf("%f");
  FUN_100003e74(0x7ff8000000000000,0,iVar1);
  _printf(" = %s\n");
  _printf("%d");
  _printf(" + ");
  iVar1 = _printf("%d");
  FUN_100003e74(0x4018000000000000,0,iVar1);
  _printf("i = %s\n");
  _printf("%d");
  _printf(" + ");
  iVar1 = _printf("%d");
  FUN_100003e74(0,0x3ff0000000000000,iVar1);
  _printf("i = %s\n");
  _printf("%d");
  _printf(" + ");
  iVar1 = _printf("%d");
  FUN_100003e74(0,0,iVar1);
  _printf("i = %s\n");
  _printf("%f");
  _printf(" + ");
  iVar1 = _printf("%d");
  FUN_100003e74(0x400b333333333333,0,iVar1);
  _printf("i = %s\n");
  FUN_100003e74(0x4014000000000000,0);
  iVar1 = _printf("Test 1 (5+i) = %s\n");
  FUN_100003e74(0x400b333340000000,0,iVar1);
  iVar1 = _printf("Test 2 (3.4+0i) = %s\n");
  FUN_100003e74(0x4008000000000000,0,iVar1);
  iVar1 = _printf("Test 3 (3+0i) = %s\n");
  FUN_100003e74(0,0x3ff3333333333333,iVar1);
  _printf("Test 4 (0+1.2i) = %s\n");
  return 0;
}



bool FUN_100003e74(double param_1,double param_2)

{
  bool bVar1;
  
  bVar1 = false;
  if (param_2 == 0.0) {
    bVar1 = (double)(long)param_1 == param_1;
  }
  return bVar1;
}



void ___mulsc3(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003ed0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____mulsc3_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003edc. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004008)((int)param_1);
  return iVar1;
}


