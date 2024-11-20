#include "elliptic-curve-digital-signature-algorithm.h"



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

long _exgcd(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long local_40;
  long local_38;
  long local_20;
  long local_18;
  
  local_38 = 0;
  local_40 = 1;
  local_20 = param_2;
  local_18 = param_1;
  if (param_1 < 0) {
    local_18 = param_1 + param_2;
  }
  while (local_18 != 0) {
    lVar1 = 0;
    if (local_18 != 0) {
      lVar1 = local_20 / local_18;
    }
    lVar2 = local_20 - lVar1 * local_18;
    local_20 = local_18;
    lVar1 = local_38 - lVar1 * local_40;
    local_38 = local_40;
    local_40 = lVar1;
    local_18 = lVar2;
  }
  if (local_20 != 1) {
    _printf(" impossible inverse mod N, gcd = %d\n");
    __inverr = 1;
  }
  return local_38;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

long _modr(long param_1)

{
  long lVar1;
  undefined8 local_8;
  
  lVar1 = 0;
  if (_DAT_100008028 != 0) {
    lVar1 = param_1 / _DAT_100008028;
  }
  local_8 = param_1 - lVar1 * _DAT_100008028;
  if (local_8 < 0) {
    local_8 = local_8 + _DAT_100008028;
  }
  return local_8;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _disc(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = _DAT_100008008;
  lVar2 = __e;
  lVar1 = FUN_100002c8c(__e * __e);
  lVar2 = FUN_100002c8c(lVar2 * lVar1);
  lVar3 = FUN_100002c8c(lVar3 * lVar3);
  FUN_100002c8c((lVar2 * 4 + lVar3 * 0x1b) * -0x10);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

long FUN_100002c8c(long param_1)

{
  long lVar1;
  undefined8 local_8;
  
  lVar1 = 0;
  if (_DAT_100008010 != 0) {
    lVar1 = param_1 / _DAT_100008010;
  }
  local_8 = param_1 - lVar1 * _DAT_100008010;
  if (local_8 < 0) {
    local_8 = local_8 + _DAT_100008010;
  }
  return local_8;
}



bool _isO(long param_1,long param_2)

{
  return param_1 == -0x7fffffff && param_2 == 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

bool _ison(long param_1,long param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 local_30;
  undefined8 local_28;
  
  iVar2 = _isO(param_1,param_2);
  lVar1 = _DAT_100008008;
  if (iVar2 == 0) {
    lVar3 = FUN_100002c8c(__e + param_1 * param_1);
    local_28 = FUN_100002c8c(lVar1 + param_1 * lVar3);
    local_30 = FUN_100002c8c(param_2 * param_2);
  }
  return local_28 == local_30;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _padd(long *param_1,long param_2,long param_3,long param_4,long param_5)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long local_40;
  
  iVar1 = _isO(param_2,param_3);
  if (iVar1 == 0) {
    iVar1 = _isO(param_4,param_5);
    lVar2 = __zerO;
    if (iVar1 == 0) {
      if (param_2 == param_4) {
        if ((param_3 != param_5) || (param_3 == 0)) {
          param_1[1] = _DAT_100008040;
          *param_1 = lVar2;
          return;
        }
        lVar2 = FUN_100002c8c(param_2 * param_2);
        lVar2 = FUN_100002c8c(lVar2 * 3 + __e);
        lVar3 = _exgcd(param_3 * 2,_DAT_100008010);
        local_40 = FUN_100002c8c(lVar2 * lVar3);
      }
      else {
        lVar2 = _exgcd(param_2 - param_4,_DAT_100008010);
        local_40 = FUN_100002c8c((param_3 - param_5) * lVar2);
      }
      lVar2 = FUN_100002c8c((local_40 * local_40 - param_2) - param_4);
      lVar3 = FUN_100002c8c(local_40 * (param_2 - lVar2) - param_3);
      param_1[1] = lVar3;
      *param_1 = lVar2;
      lVar2 = __zerO;
      if (__inverr != 0) {
        param_1[1] = _DAT_100008040;
        *param_1 = lVar2;
      }
    }
    else {
      param_1[1] = param_3;
      *param_1 = param_2;
    }
  }
  else {
    param_1[1] = param_5;
    *param_1 = param_4;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _pmul(undefined8 *param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  ulong local_30;
  undefined8 *local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  uStack_38 = _DAT_100008040;
  local_40 = __zerO;
  local_50 = param_2;
  uStack_48 = param_3;
  local_30 = param_4;
  local_28 = param_1;
  local_20 = param_2;
  uStack_18 = param_3;
  do {
    if (local_30 == 0) {
LAB_1000030e8:
      local_28[1] = uStack_38;
      *local_28 = local_40;
      return;
    }
    if ((local_30 & 1) != 0) {
      _padd(&local_40,local_40,uStack_38,local_50,uStack_48);
    }
    if (__inverr != 0) {
      uStack_38 = _DAT_100008040;
      local_40 = __zerO;
      goto LAB_1000030e8;
    }
    _padd(&local_50,local_50,uStack_48,local_50,uStack_48);
    local_30 = (long)local_30 >> 1;
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int _pprint(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = _isO(param_2,param_3);
  if (iVar1 == 0) {
    iVar1 = _printf("%s (%lld, %lld)\n");
  }
  else {
    iVar1 = _printf("%s (0)\n");
  }
  return iVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Restarted to delay deadcode elimination for space: ram

undefined4 _ellinit(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined4 local_14;
  
  uVar1 = param_1[1];
  _DAT_100008010 = param_1[2];
  __inverr = 0;
  if ((_DAT_100008010 < 5) || (0x3fffffdd < _DAT_100008010)) {
    local_14 = 0;
  }
  else {
    __e = FUN_100002c8c(*param_1);
    _DAT_100008008 = FUN_100002c8c(uVar1);
    _DAT_100008018 = FUN_100002c8c(param_1[3]);
    _DAT_100008020 = FUN_100002c8c(param_1[4]);
    _DAT_100008028 = param_1[5];
    if ((_DAT_100008028 < 5) || (0x4000ffdd < _DAT_100008028)) {
      local_14 = 0;
    }
    else {
      _printf("\nE: y^2 = x^3 + %dx + %d");
      _printf(" (mod %lld)\n");
      _pprint("base point G",_DAT_100008018,_DAT_100008020);
      _printf("order(G, E) = %lld\n");
      local_14 = 1;
    }
  }
  return local_14;
}



undefined  [16] _rnd(void)

{
  int iVar1;
  undefined auVar2 [16];
  
  iVar1 = _rand();
  auVar2._0_8_ = (double)iVar1 / 2147483648.0;
  auVar2._8_8_ = 0;
  return auVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined  [16] _signature(long param_1,long param_2)

{
  undefined auVar1 [16];
  long lVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  double dVar7;
  undefined8 local_60;
  undefined8 local_58;
  long local_50;
  long local_48;
  ulong local_40;
  ulong local_38;
  long local_30;
  long local_28;
  
  local_30 = param_2;
  local_28 = param_1;
  uVar3 = _printf("\nsignature computation\n");
  uVar4 = (ulong)uVar3;
  do {
    do {
      dVar7 = (double)_rnd(uVar4);
      local_48 = (long)(dVar7 * (double)(_DAT_100008028 + -1)) + 1;
      _pmul(&local_60,_DAT_100008018,_DAT_100008020,local_48);
      uVar4 = _modr(local_60);
      local_38 = uVar4;
    } while (uVar4 == 0);
    lVar5 = _exgcd(local_48,_DAT_100008028);
    lVar2 = local_30;
    local_50 = lVar5;
    lVar6 = _modr(local_28 * local_38);
    uVar4 = _modr(lVar5 * (lVar2 + lVar6));
    local_40 = uVar4;
  } while (uVar4 == 0);
  _printf("one-time u = %d\n");
  _pprint("V = uG",local_60,local_58);
  auVar1._8_8_ = local_40;
  auVar1._0_8_ = local_38;
  return auVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

bool _verify(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  bool bVar1;
  int iVar2;
  uint local_a0;
  uint local_9c;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  long local_78;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  ulong local_58;
  long local_50;
  long local_48;
  long local_40;
  long local_38;
  long local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_9c = 0;
  if (0 < param_4) {
    local_9c = (uint)(param_4 < _DAT_100008028);
  }
  local_a0 = 0;
  if (0 < param_5) {
    local_a0 = (uint)(param_5 < _DAT_100008028);
  }
  local_58 = (ulong)(local_9c & local_a0);
  if (local_58 == 0) {
    bVar1 = false;
  }
  else {
    local_50 = param_5;
    local_48 = param_4;
    local_40 = param_3;
    local_38 = param_4;
    local_30 = param_5;
    local_28 = param_1;
    local_20 = param_2;
    _printf("\nsignature verification\n");
    local_78 = _exgcd(local_50,_DAT_100008028);
    local_68 = _modr(local_40 * local_78);
    local_70 = _modr(local_48 * local_78);
    _printf("h1,h2 = %d, %d\n");
    _pmul(&local_88,_DAT_100008018,_DAT_100008020,local_68);
    _pmul(&local_98,local_28,local_20,local_70);
    _pprint("h1G",local_88,local_80);
    _pprint("h2W",local_98,local_90);
    _padd(&local_88,local_88,local_80,local_98,local_90);
    _pprint("+ =",local_88,local_80);
    iVar2 = _isO(local_88,local_80);
    if (iVar2 == 0) {
      local_60 = _modr(local_88);
      _printf("c\' = %d\n");
      bVar1 = local_60 == local_48;
    }
    else {
      bVar1 = false;
    }
  }
  return bVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int _ec_dsa(ulong param_1,ulong param_2)

{
  int iVar1;
  long lVar2;
  double dVar3;
  undefined8 local_60;
  undefined8 local_58;
  undefined local_50 [16];
  ulong local_38;
  long local_30;
  ulong local_28;
  ulong local_20;
  ulong local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  lVar2 = _disc();
  local_38 = (ulong)(lVar2 == 0);
  iVar1 = _isO(_DAT_100008018,_DAT_100008020);
  local_38 = local_38 | (long)iVar1;
  _pmul(&local_60,_DAT_100008018,_DAT_100008020,_DAT_100008028);
  iVar1 = _isO(local_60,local_58);
  local_38 = local_38 | iVar1 == 0;
  iVar1 = _ison(_DAT_100008018,_DAT_100008020);
  local_38 = local_38 | iVar1 == 0;
  if (local_38 == 0) {
    iVar1 = _printf("\nkey generation\n");
    dVar3 = (double)_rnd(iVar1);
    local_30 = (long)(dVar3 * (double)(long)(_DAT_100008028 - 1)) + 1;
    _pmul(&local_60,_DAT_100008018,_DAT_100008020,local_30);
    _printf("private key s = %d\n");
    _pprint("public key W = sG",local_60,local_58);
    local_38 = _DAT_100008028;
    for (local_28 = 1; (long)local_28 < 0x20; local_28 = local_28 << 1) {
      local_38 = local_38 | (long)local_38 >> (local_28 & 0x3f);
    }
    for (; (long)local_38 < (long)local_18; local_18 = (long)local_18 >> 1) {
    }
    _printf("\naligned hash %x\n");
    local_50 = _signature(local_30,local_18);
    if (__inverr == 0) {
      _printf("signature c,d = %d, %d\n");
      if (0 < (long)local_20) {
        for (; (long)local_38 < (long)local_20; local_20 = (long)local_20 >> 1) {
        }
        local_18 = local_18 ^ local_20;
        _printf("\ncorrupted hash %x\n");
      }
      iVar1 = _verify(local_60,local_58,local_18,local_50._0_8_,local_50._8_8_);
      local_38 = (ulong)iVar1;
      if (__inverr == 0) {
        if (local_38 != 0) {
          iVar1 = _printf("Valid\n_____\n");
          return iVar1;
        }
        iVar1 = _printf("invalid\n_______\n");
        return iVar1;
      }
    }
  }
  _printf("invalid parameter set\n");
  iVar1 = _printf("_____________________\n");
  return iVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void entry(void)

{
  int iVar1;
  time_t tVar2;
  undefined *local_220;
  undefined auStack_208 [480];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100004008;
  __zerO = 0xffffffff80000001;
  _DAT_100008040 = 0;
  tVar2 = _time((time_t *)0x0);
  _srand((uint)tVar2);
  local_220 = auStack_208;
  _memcpy(local_220,&DAT_100003bf0,0x1e0);
  while( true ) {
    iVar1 = _ellinit(local_220);
    if (iVar1 == 0) break;
    _ec_dsa(0x789abcde,0);
    local_220 = local_220 + 0x30;
  }
  if (*(long *)PTR____stack_chk_guard_100004008 != local_28) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail();
  }
  return;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003b90. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _memcpy(void *param_1,void *param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003b9c. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__memcpy_100004010)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ba8. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004018)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _rand(void)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003bb4. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__rand_100004020)();
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _srand(uint param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003bc0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__srand_100004028)(param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

time_t _time(time_t *param_1)

{
  time_t tVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003bcc. Too many branches
                    // WARNING: Treating indirect jump as call
  tVar1 = (*(code *)PTR__time_100004030)();
  return tVar1;
}


