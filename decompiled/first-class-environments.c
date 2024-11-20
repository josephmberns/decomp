#include "first-class-environments.h"



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int _hail(void)

{
  int iVar1;
  uint local_1c;
  
  iVar1 = _printf("% 4d");
  if (*__seq != 1) {
    *__cnt = *__cnt + 1;
    if ((*__seq & 1) == 0) {
      local_1c = (int)*__seq / 2;
    }
    else {
      local_1c = *__seq * 3 + 1;
    }
    *__seq = local_1c;
  }
  return iVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _switch_to(int param_1)

{
  __seq = &_env + (long)param_1 * 8;
  __cnt = (long)param_1 * 8 + 0x100008004;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 entry(void)

{
  bool bVar1;
  int iVar2;
  int local_18;
  
  local_18 = 0;
  _switch_to(0);
  while( true ) {
    bVar1 = true;
    if (0xb < local_18) {
      iVar2 = _printf("\n");
      bVar1 = iVar2 == 0;
    }
    if (!bVar1) break;
    *(int *)(&_env + (long)local_18 * 8) = local_18 + 1;
    local_18 = local_18 + 1;
    _switch_to();
  }
  do {
    local_18 = 0;
    _switch_to(0);
    while( true ) {
      bVar1 = true;
      if (0xb < local_18) {
        iVar2 = _printf("\n");
        bVar1 = iVar2 == 0;
      }
      if (!bVar1) break;
      _hail();
      local_18 = local_18 + 1;
      _switch_to();
    }
    local_18 = 0;
    _switch_to(0);
    while( true ) {
      bVar1 = true;
      if (0xb < local_18) {
        iVar2 = _printf("\n");
        bVar1 = iVar2 == 0;
      }
      if (!bVar1) {
        _printf("COUNTS:\n");
        local_18 = 0;
        _switch_to(0);
        while( true ) {
          bVar1 = true;
          if (0xb < local_18) {
            iVar2 = _printf("\n");
            bVar1 = iVar2 == 0;
          }
          if (!bVar1) break;
          _printf("% 4d");
          local_18 = local_18 + 1;
          _switch_to();
        }
        return 0;
      }
      if (*__seq != 1) break;
      local_18 = local_18 + 1;
      _switch_to();
    }
  } while( true );
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f8c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}


