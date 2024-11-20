#include "damm-algorithm.h"



bool _damm(long param_1,ulong param_2)

{
  ulong local_20;
  byte local_11;
  
  local_11 = 0;
  for (local_20 = 0; local_20 < param_2; local_20 = local_20 + 1) {
    local_11 = (&UNK_100003f14)[(ulong)*(byte *)(param_1 + local_20) + (ulong)local_11 * 10];
  }
  return local_11 == 0;
}



undefined4 entry(void)

{
  char *pcVar1;
  uint uVar2;
  undefined4 local_18;
  undefined4 local_14;
  
  local_14 = 0;
  local_18 = 0x4020705;
  uVar2 = _damm(&local_18,4);
  pcVar1 = "Checksum correct";
  if ((uVar2 & 1) == 0) {
    pcVar1 = "Checksum incorrect";
  }
  _puts(pcVar1);
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _puts(char *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f10. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__puts_100004000)((int)param_1);
  return iVar1;
}


