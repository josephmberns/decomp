#include "cheryls-birthday.h"



int _printRemaining(void)

{
  int iVar1;
  uint local_14;
  
  for (local_14 = 0; local_14 < 10; local_14 = local_14 + 1) {
  }
  iVar1 = _printf("%d remaining.\n");
  return iVar1;
}



ulong _printAnswer(ulong param_1)

{
  uint uVar1;
  uint local_14;
  
  for (local_14 = 0; local_14 < 10; local_14 = local_14 + 1) {
    if (((&DAT_100008070)[(long)(int)local_14 * 0xc] & 1) != 0) {
      uVar1 = _printf("%s, %d\n");
      param_1 = (ulong)uVar1;
    }
  }
  return param_1;
}



void _firstPass(void)

{
  int local_c;
  uint local_8;
  uint local_4;
  
  for (local_4 = 0; local_4 < 10; local_4 = local_4 + 1) {
    local_c = 0;
    for (local_8 = 0; local_8 < 10; local_8 = local_8 + 1) {
      if (*(int *)(&DAT_10000806c + (long)(int)local_8 * 0xc) ==
          *(int *)(&DAT_10000806c + (long)(int)local_4 * 0xc)) {
        local_c = local_c + 1;
      }
    }
    if (local_c == 1) {
      for (local_8 = 0; local_8 < 10; local_8 = local_8 + 1) {
        if ((((&DAT_100008070)[(long)(int)local_8 * 0xc] & 1) != 0) &&
           (*(int *)(&_dates + (long)(int)local_8 * 0xc) ==
            *(int *)(&_dates + (long)(int)local_4 * 0xc))) {
          (&DAT_100008070)[(long)(int)local_8 * 0xc] = 0;
        }
      }
    }
  }
  return;
}



void _secondPass(void)

{
  int local_c;
  uint local_8;
  uint local_4;
  
  for (local_4 = 0; local_4 < 10; local_4 = local_4 + 1) {
    if (((&DAT_100008070)[(long)(int)local_4 * 0xc] & 1) != 0) {
      local_c = 0;
      for (local_8 = 0; local_8 < 10; local_8 = local_8 + 1) {
        if ((((&DAT_100008070)[(long)(int)local_8 * 0xc] & 1) != 0) &&
           (*(int *)(&DAT_10000806c + (long)(int)local_8 * 0xc) ==
            *(int *)(&DAT_10000806c + (long)(int)local_4 * 0xc))) {
          local_c = local_c + 1;
        }
      }
      if (1 < local_c) {
        for (local_8 = 0; local_8 < 10; local_8 = local_8 + 1) {
          if ((((&DAT_100008070)[(long)(int)local_8 * 0xc] & 1) != 0) &&
             (*(int *)(&DAT_10000806c + (long)(int)local_8 * 0xc) ==
              *(int *)(&DAT_10000806c + (long)(int)local_4 * 0xc))) {
            (&DAT_100008070)[(long)(int)local_8 * 0xc] = 0;
          }
        }
      }
    }
  }
  return;
}



void _thirdPass(void)

{
  int local_c;
  uint local_8;
  uint local_4;
  
  for (local_4 = 0; local_4 < 10; local_4 = local_4 + 1) {
    if (((&DAT_100008070)[(long)(int)local_4 * 0xc] & 1) != 0) {
      local_c = 0;
      for (local_8 = 0; local_8 < 10; local_8 = local_8 + 1) {
        if ((((&DAT_100008070)[(long)(int)local_8 * 0xc] & 1) != 0) &&
           (*(int *)(&_dates + (long)(int)local_8 * 0xc) ==
            *(int *)(&_dates + (long)(int)local_4 * 0xc))) {
          local_c = local_c + 1;
        }
      }
      if (1 < local_c) {
        for (local_8 = 0; local_8 < 10; local_8 = local_8 + 1) {
          if ((((&DAT_100008070)[(long)(int)local_8 * 0xc] & 1) != 0) &&
             (*(int *)(&_dates + (long)(int)local_8 * 0xc) ==
              *(int *)(&_dates + (long)(int)local_4 * 0xc))) {
            (&DAT_100008070)[(long)(int)local_8 * 0xc] = 0;
          }
        }
      }
    }
  }
  return;
}



undefined4 entry(void)

{
  _printRemaining();
  _firstPass();
  _printRemaining();
  _secondPass();
  _printRemaining();
  _thirdPass();
  _printAnswer();
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f50. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}


