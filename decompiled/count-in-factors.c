#include "count-in-factors.h"



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 _get_prime(int param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  int local_2c;
  ulong local_20;
  
  if (_DAT_100008000 <= param_1) {
    if (_DAT_100008008 <= _DAT_100008000) {
      _DAT_100008008 = _DAT_100008008 + 0x10;
      _DAT_100008010 = (undefined8 *)_realloc(_DAT_100008010,_DAT_100008008 * 8);
    }
    if (_DAT_100008000 == 0) {
      *_DAT_100008010 = 2;
      _DAT_100008010[1] = 3;
      _DAT_100008000 = 2;
    }
    local_20 = _DAT_100008010[_DAT_100008000 + -1];
LAB_100003cd8:
    if (_DAT_100008000 <= param_1) {
      local_20 = local_20 + 2;
      for (local_2c = 0; local_2c < _DAT_100008000; local_2c = local_2c + 1) {
        uVar3 = _DAT_100008010[local_2c];
        if (local_20 <= uVar3 * uVar3 && uVar3 * uVar3 - local_20 != 0) {
          puVar1 = _DAT_100008010 + _DAT_100008000;
          _DAT_100008000 = _DAT_100008000 + 1;
          *puVar1 = local_20;
          break;
        }
        uVar2 = 0;
        if (uVar3 != 0) {
          uVar2 = local_20 / uVar3;
        }
        if (local_20 == uVar2 * uVar3) break;
      }
      goto LAB_100003cd8;
    }
  }
  return _DAT_100008010[param_1];
}



void entry(void)

{
  ulong uVar1;
  bool bVar2;
  ulong uVar3;
  int local_34;
  ulong local_28;
  ulong local_20;
  
  local_28 = 1;
  do {
    local_20 = local_28;
    _printf("%lld = ");
    local_34 = 0;
    bVar2 = true;
    while( true ) {
      uVar3 = _get_prime(local_34);
      while( true ) {
        uVar1 = 0;
        if (uVar3 != 0) {
          uVar1 = local_20 / uVar3;
        }
        if (local_20 != uVar1 * uVar3) break;
        uVar1 = 0;
        if (uVar3 != 0) {
          uVar1 = local_20 / uVar3;
        }
        if (!bVar2) {
          _printf(" x ");
        }
        bVar2 = false;
        _printf("%lld");
        local_20 = uVar1;
      }
      if (local_20 <= uVar3 * uVar3) break;
      local_34 = local_34 + 1;
    }
    if (bVar2) {
      _printf("%lld\n");
    }
    else if (local_20 < 2) {
      _printf("\n");
    }
    else {
      _printf(" x %lld\n");
    }
    local_28 = local_28 + 1;
  } while( true );
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f74. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _realloc(void *param_1,size_t param_2)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f80. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__realloc_100004008)();
  return pvVar1;
}


