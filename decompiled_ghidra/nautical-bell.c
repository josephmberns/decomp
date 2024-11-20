#include "nautical-bell.h"



// WARNING: Removing unreachable block (ram,0x000100003e84)
// WARNING: Removing unreachable block (ram,0x000100003df4)
// WARNING: Removing unreachable block (ram,0x000100003d4c)
// WARNING: Removing unreachable block (ram,0x000100003d60)
// WARNING: Removing unreachable block (ram,0x000100003e14)
// WARNING: Removing unreachable block (ram,0x000100003e28)

void entry(void)

{
  time_t tStack_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  int local_18;
  undefined4 local_14;
  
  local_14 = 0;
  do {
    _time(&tStack_38);
    _localtime(&tStack_38);
    local_20 = 0xc;
    local_24 = 0;
    local_28 = 0;
    local_1c = 8;
    local_2c = 0;
    local_30 = 0;
    _printf("\nIt is now %d:%d%d %s. Sounding the bell %d times.");
    for (local_18 = 1; local_18 <= local_1c; local_18 = local_18 + 1) {
      _printf("\a");
      if (local_18 % 2 == 0) {
        _sleep(2000);
      }
      else {
        _sleep(1000);
      }
    }
  } while( true );
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

tm * _localtime(time_t *param_1)

{
  tm *ptVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f44. Too many branches
                    // WARNING: Treating indirect jump as call
  ptVar1 = (tm *)(*(code *)PTR__localtime_100004000)();
  return ptVar1;
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



// WARNING: Unknown calling convention -- yet parameter storage is locked

uint _sleep(uint param_1)

{
  uint uVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f5c. Too many branches
                    // WARNING: Treating indirect jump as call
  uVar1 = (*(code *)PTR__sleep_100004010)(param_1);
  return uVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

time_t _time(time_t *param_1)

{
  time_t tVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f68. Too many branches
                    // WARNING: Treating indirect jump as call
  tVar1 = (*(code *)PTR__time_100004018)();
  return tVar1;
}


