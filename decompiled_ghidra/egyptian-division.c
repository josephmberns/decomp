#include "egyptian-division.h"



long _egyptian_division(ulong param_1,long param_2,long *param_3)

{
  long local_30;
  long local_28;
  uint local_1c;
  
  for (local_1c = 0; (int)local_1c < 0x40; local_1c = local_1c + 1) {
    *(long *)((long)(int)local_1c * 8 + 0x100008000) = (long)(1 << (ulong)(local_1c & 0x1f));
    *(long *)((long)(int)local_1c * 8 + 0x100008200) = param_2 << ((ulong)local_1c & 0x3f);
    if (param_1 < *(ulong *)((long)(int)local_1c * 8 + 0x100008200)) break;
  }
  local_28 = 0;
  local_30 = 0;
  while (local_1c = local_1c - 1, -1 < (int)local_1c) {
    if ((ulong)(local_30 + *(long *)((long)(int)local_1c * 8 + 0x100008200)) <= param_1) {
      local_30 = local_30 + *(long *)((long)(int)local_1c * 8 + 0x100008200);
      local_28 = local_28 + *(long *)((long)(int)local_1c * 8 + 0x100008000);
    }
  }
  if (param_3 != (long *)0x0) {
    *param_3 = param_1 - local_30;
  }
  return local_28;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

long _go(void)

{
  uint uVar1;
  long in_x0;
  long in_x1;
  long local_30;
  long local_28;
  long local_20;
  long local_18;
  
  local_20 = in_x1;
  local_18 = in_x0;
  local_28 = _egyptian_division(in_x0,in_x1,&local_30);
  uVar1 = _printf("%llu / %llu = %llu remainder %llu\n");
  if (local_18 != local_20 * local_28 + local_30) {
                    // WARNING: Subroutine does not return
    ___assert_rtn("go","egyptian-division.c",0x2b,"a == b * x + y");
  }
  return (ulong)uVar1;
}



undefined8 entry(void)

{
  _go();
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void ___assert_rtn(char *param_1,char *param_2,int param_3,char *param_4)

{
                    // WARNING: Could not recover jumptable at 0x000100003f44. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____assert_rtn_100004000)(param_1,param_2,param_3);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f50. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004008)((int)param_1);
  return iVar1;
}


