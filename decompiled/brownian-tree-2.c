#include "brownian-tree-2.h"



undefined8 entry(void)

{
  int iVar1;
  time_t tVar2;
  int local_2c;
  int local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  int local_18;
  
  tVar2 = _time((time_t *)0x0);
  _srand((uint)tVar2);
  DAT_10003404c = 1;
  local_18 = 0;
LAB_100003b70:
  if (9999 < local_18) {
    _printf("P1\n%d %d\n");
    for (local_28 = 0; local_28 < 600; local_28 = local_28 + 1) {
      for (local_2c = 0; local_2c < 600; local_2c = local_2c + 1) {
        _printf("%d ");
      }
      _putchar(10);
    }
    return 0;
  }
  do {
    do {
      iVar1 = _rand();
      local_1c = iVar1 % 0x256 + 1;
      iVar1 = _rand();
      local_20 = iVar1 % 0x256 + 1;
    } while (((&_W)[(ulong)local_1c + (ulong)local_20 * 600] & 1) != 0);
    do {
      if ((byte)(((&_W)[(ulong)(local_1c - 1) + (ulong)(local_20 - 1) * 600] & 1) +
                 ((&_W)[(ulong)local_1c + (ulong)(local_20 - 1) * 600] & 1) +
                 ((&_W)[(ulong)(local_1c + 1) + (ulong)(local_20 - 1) * 600] & 1) +
                 ((&_W)[(ulong)(local_1c - 1) + (ulong)local_20 * 600] & 1) +
                 ((&_W)[(ulong)(local_1c + 1) + (ulong)local_20 * 600] & 1) +
                 ((&_W)[(ulong)(local_1c - 1) + (ulong)(local_20 + 1) * 600] & 1) +
                 ((&_W)[(ulong)local_1c + (ulong)(local_20 + 1) * 600] & 1) +
                ((&_W)[(ulong)(local_1c + 1) + (ulong)(local_20 + 1) * 600] & 1)) != '\0') {
        (&_W)[(ulong)local_1c + (ulong)local_20 * 600] = 1;
        local_18 = local_18 + 1;
        goto LAB_100003b70;
      }
      iVar1 = _rand();
      local_24 = iVar1 % 8;
      if (3 < local_24) {
        local_24 = local_24 + 1;
      }
      local_1c = local_1c + (local_24 % 3 - 1);
      local_20 = local_20 + (local_24 / 3 - 1);
    } while ((((local_1c != 0) && (local_1c < 599)) && (local_20 != 0)) && (local_20 < 599));
  } while( true );
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f64. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _putchar(int param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f70. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__putchar_100004008)(param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _rand(void)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f7c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__rand_100004010)();
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _srand(uint param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f88. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__srand_100004018)(param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

time_t _time(time_t *param_1)

{
  time_t tVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f94. Too many branches
                    // WARNING: Treating indirect jump as call
  tVar1 = (*(code *)PTR__time_100004020)();
  return tVar1;
}


