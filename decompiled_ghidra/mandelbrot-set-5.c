#include "mandelbrot-set-5.h"



undefined4 entry(void)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  size_t sVar11;
  short local_50;
  short local_4e;
  short local_4c;
  short local_46;
  short local_44;
  
  _printf("PRECISION=%d\n");
  sVar1 = _toPrec(0x400c000000000000,6);
  sVar2 = _toPrec(0x4002000000000000,6);
  sVar3 = _toPrec(0x4008000000000000,6);
  sVar4 = _toPrec(0x3ff8000000000000,6);
  sVar5 = _toPrec(0x4010000000000000,6);
  sVar11 = _strlen("abcdefghijklmnopqr ");
  local_44 = 0;
  do {
    if (0x41 < local_44) {
      return 0;
    }
    for (local_46 = 0; local_46 < 0x60; local_46 = local_46 + 1) {
      sVar6 = _s((int)(short)(local_46 * (sVar1 / 3)));
      sVar6 = _s((int)(sVar6 / 0x20));
      sVar7 = _s((int)(short)(local_44 * (sVar3 / 3)));
      sVar7 = _s((int)(sVar7 / 0x16));
      local_4c = 0;
      local_4e = 0;
      for (local_50 = 0; local_50 < (short)sVar11; local_50 = local_50 + 1) {
        sVar8 = _s((int)(short)(local_4c * local_4c));
        sVar8 = sVar8 >> 6;
        sVar9 = _s((int)(short)(local_4e * local_4e));
        sVar9 = sVar9 >> 6;
        if (((int)sVar5 <= (int)sVar8 + (int)sVar9) || ((int)sVar8 + (int)sVar9 < 0)) break;
        sVar10 = _s((int)(short)(local_4c * local_4e));
        sVar10 = _s((int)(sVar10 >> 6));
        local_4e = _s((int)(short)((int)sVar10 << 1));
        local_4e = (sVar7 - sVar4) + local_4e;
        local_4c = (sVar8 - sVar9) + (sVar6 - sVar2);
      }
      _printf("%c");
    }
    _printf("\n");
    local_44 = local_44 + 1;
  } while( true );
}



long _toPrec(double param_1,uint param_2)

{
  double dVar1;
  
  dVar1 = (double)_pow(0x4000000000000000,(double)(long)(int)param_2);
  return (long)(short)((short)((int)(short)(int)param_1 << (ulong)(param_2 & 0x1f)) +
                      (short)(int)((param_1 - (double)(long)param_1) * dVar1));
}



long _s(short param_1)

{
  return (long)param_1;
}



void _pow(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f5c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__pow_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f68. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004008)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t _strlen(char *param_1)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f74. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__strlen_100004010)();
  return sVar1;
}


