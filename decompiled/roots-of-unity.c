#include "roots-of-unity.h"



undefined8 entry(void)

{
  char *pcVar1;
  uint uVar2;
  ulong uVar3;
  double extraout_d0;
  double dVar4;
  char *local_50;
  char *local_48;
  int local_40;
  int local_3c;
  double local_30;
  double local_28;
  
  uVar3 = _atan2(0x3ff0000000000000);
  for (local_3c = 1; local_3c < 10; local_3c = local_3c + 1) {
    for (local_40 = 0; local_40 < local_3c; local_40 = local_40 + 1) {
      local_30 = 0.0;
      local_28 = 0.0;
      if (local_40 == 0) {
        local_28 = 1.0;
      }
      else if (local_3c == local_40 * 4) {
        local_30 = 1.0;
      }
      else if (local_3c == local_40 * 2) {
        local_28 = -1.0;
      }
      else if (local_3c * 3 == local_40 * 4) {
        local_30 = -1.0;
      }
      else {
        dVar4 = ((double)(long)local_40 * extraout_d0 * 8.0) / (double)(long)local_3c;
        local_28 = (double)_cos(dVar4,uVar3);
        local_30 = (double)_sin(dVar4);
      }
      if (local_28 != 0.0) {
        _printf("%.2g");
      }
      if (local_30 == 1.0) {
        local_48 = "i";
      }
      else {
        if (local_30 == -1.0) {
          local_50 = "-i";
        }
        else {
          local_50 = "%+.2gi";
          if (local_30 == 0.0) {
            local_50 = "";
          }
        }
        local_48 = local_50;
      }
      _printf(local_48);
      pcVar1 = "\n";
      if (local_40 != local_3c + -1) {
        pcVar1 = ",  ";
      }
      uVar2 = _printf(pcVar1);
      uVar3 = (ulong)uVar2;
    }
  }
  return 0;
}



void _atan2(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f68. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__atan2_100004000)();
  return;
}



void _cos(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f74. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__cos_100004008)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f80. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004010)((int)param_1);
  return iVar1;
}



void _sin(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f8c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__sin_100004018)();
  return;
}


