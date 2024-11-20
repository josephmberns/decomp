#include "carmichael-3-strong-pseudoprimes.h"



bool _is_prime(uint param_1)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint local_c;
  
  if (param_1 < 4) {
    bVar1 = 1 < param_1;
  }
  else if ((param_1 % 2 == 0) || (param_1 % 3 == 0)) {
    bVar1 = false;
  }
  else {
    for (local_c = 5; local_c * local_c <= param_1; local_c = local_c + 6) {
      uVar2 = 0;
      if (local_c != 0) {
        uVar2 = param_1 / local_c;
      }
      if (param_1 == uVar2 * local_c) {
        return false;
      }
      uVar2 = local_c + 2;
      uVar3 = 0;
      if (uVar2 != 0) {
        uVar3 = param_1 / uVar2;
      }
      if (param_1 == uVar3 * uVar2) {
        return false;
      }
    }
    bVar1 = true;
  }
  return bVar1;
}



void _carmichael3(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_1c;
  int local_18;
  
  iVar1 = _is_prime(param_1);
  if (iVar1 != 0) {
    for (local_18 = 1; local_18 < param_1; local_18 = local_18 + 1) {
      for (local_1c = 1; local_1c < local_18 + param_1; local_1c = local_1c + 1) {
        iVar1 = (local_18 + param_1) * (param_1 + -1);
        iVar2 = 0;
        if (local_1c != 0) {
          iVar2 = iVar1 / local_1c;
        }
        if (iVar1 - iVar2 * local_1c == 0) {
          iVar1 = 0;
          if (local_18 != 0) {
            iVar1 = -(param_1 * param_1) / local_18;
          }
          iVar1 = (-(param_1 * param_1) - iVar1 * local_18) + local_18;
          iVar2 = 0;
          if (local_18 != 0) {
            iVar2 = iVar1 / local_18;
          }
          iVar3 = 0;
          if (local_18 != 0) {
            iVar3 = local_1c / local_18;
          }
          if (iVar1 - iVar2 * local_18 == local_1c - iVar3 * local_18) {
            iVar1 = 0;
            if (local_1c != 0) {
              iVar1 = ((param_1 + -1) * (local_18 + param_1)) / local_1c;
            }
            iVar1 = iVar1 + 1;
            iVar2 = _is_prime(iVar1);
            if (iVar2 != 0) {
              iVar2 = 0;
              if (local_18 != 0) {
                iVar2 = (param_1 * iVar1) / local_18;
              }
              iVar3 = _is_prime(iVar2 + 1);
              if (iVar3 != 0) {
                iVar1 = iVar1 * (iVar2 + 1);
                iVar3 = param_1 + -1;
                iVar2 = 0;
                if (iVar3 != 0) {
                  iVar2 = iVar1 / iVar3;
                }
                if (iVar1 - iVar2 * iVar3 == 1) {
                  _printf("%d %d %d\n");
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}



undefined8 entry(void)

{
  undefined4 local_18;
  
  for (local_18 = 2; local_18 < 0x3e; local_18 = local_18 + 1) {
    _carmichael3(local_18);
  }
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f90. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}


