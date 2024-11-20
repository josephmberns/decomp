#include "combinations-with-repetitions-1.h"



int _printDonuts(int param_1)

{
  int iVar1;
  ulong local_20;
  
  for (local_20 = 1; local_20 < (ulong)(long)(param_1 + 1); local_20 = local_20 + 1) {
    _printf("%s\t");
  }
  iVar1 = _printf("\n");
  return iVar1;
}



void _combination_with_repetiton(int param_1,int param_2)

{
  int local_20;
  int local_1c;
  
  local_1c = param_2;
  while( true ) {
    for (; 0 < local_1c; local_1c = local_1c + -1) {
      if (param_1 + -1 < (&_pos)[local_1c]) {
        (&_pos)[local_1c + -1] = (&_pos)[local_1c + -1] + 1;
        for (local_20 = local_1c; local_20 <= param_2; local_20 = local_20 + 1) {
          (&_pos)[local_20] = (&_pos)[local_20 + -1];
        }
      }
    }
    if (0 < _pos) break;
    _printDonuts(param_2);
    (&_pos)[param_2] = (&_pos)[param_2] + 1;
    local_1c = param_2;
  }
  return;
}



undefined4 entry(void)

{
  _combination_with_repetiton(3,2);
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f70. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}


