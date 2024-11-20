#include "parse-an-ip-address-3.h"



bool _parse_ipv4_address(char *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_2c;
  undefined4 *local_28;
  char *local_20;
  
  local_28 = param_2;
  local_20 = param_1;
  iVar1 = _inet_pton(2,param_1,&local_2c);
  if (iVar1 == 1) {
    *(undefined2 *)(local_28 + 4) = 2;
    uVar2 = FUN_1000038c0(local_2c);
    *local_28 = uVar2;
    *(undefined2 *)((long)local_28 + 0x12) = 0;
  }
  return iVar1 == 1;
}



uint FUN_1000038c0(uint param_1)

{
  uint uVar1;
  
  uVar1 = (param_1 & 0xff00ff00) >> 8 | (param_1 & 0xff00ff) << 8;
  return uVar1 >> 0x10 | uVar1 << 0x10;
}



bool _parse_ipv6_address(char *param_1,long param_2)

{
  int iVar1;
  undefined auStack_38 [16];
  long local_28;
  char *local_20;
  
  local_28 = param_2;
  local_20 = param_1;
  iVar1 = _inet_pton(0x1e,param_1,auStack_38);
  if (iVar1 == 1) {
    *(undefined2 *)(local_28 + 0x10) = 0x1e;
    ___memcpy_chk(local_28,auStack_38,0x10,0xffffffffffffffff);
    *(undefined2 *)(local_28 + 0x12) = 0;
  }
  return iVar1 == 1;
}



undefined2 _parse_port_number(char *param_1)

{
  ulong uVar1;
  char *local_28;
  char *local_20;
  undefined2 local_12;
  
  local_20 = param_1;
  uVar1 = _strtoul(param_1,&local_28,10);
  if (((uVar1 == 0) || (*local_28 != '\0')) || (0xffff < uVar1)) {
    local_12 = 0;
  }
  else {
    local_12 = (undefined2)uVar1;
  }
  return local_12;
}



byte _parse_address(char *param_1,long param_2)

{
  short sVar1;
  char *pcVar2;
  char *pcVar3;
  ulong uVar4;
  int iVar5;
  byte local_48;
  
  pcVar2 = _strrchr(param_1,0x3a);
  if (((pcVar2 != (char *)0x0) && (param_1 < pcVar2)) &&
     (sVar1 = _parse_port_number(pcVar2 + 1), sVar1 != 0)) {
    pcVar3 = _strdup(param_1);
    if (pcVar3 == (char *)0x0) {
      return 0;
    }
    iVar5 = (int)pcVar2 - (int)param_1;
    pcVar3[iVar5] = '\0';
    if ((pcVar3[iVar5 + -1] == ']') && (*pcVar3 == '[')) {
      pcVar3[iVar5 + -1] = '\0';
      uVar4 = _parse_ipv6_address(pcVar3 + 1,param_2);
    }
    else {
      uVar4 = _parse_ipv4_address(pcVar3,param_2);
    }
    _free(pcVar3);
    if ((uVar4 & 1) != 0) {
      *(short *)(param_2 + 0x12) = sVar1;
      return 1;
    }
  }
  uVar4 = _parse_ipv6_address(param_1,param_2);
  local_48 = 1;
  if ((uVar4 & 1) == 0) {
    local_48 = _parse_ipv4_address(param_1,param_2);
  }
  return local_48 & 1;
}



void _test_parse_address(undefined8 param_1)

{
  int iVar1;
  ulong uVar2;
  int local_3c;
  undefined local_2c [16];
  short local_1c;
  short local_1a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004010;
  _printf("input: %s\n");
  uVar2 = _parse_address(param_1,local_2c);
  if ((uVar2 & 1) == 0) {
    _printf("Parsing failed.\n");
  }
  else {
    _printf("address family: %s\n");
    if (local_1c == 2) {
      _printf("address: %X");
    }
    else if (local_1c == 0x1e) {
      _printf("address: ");
      for (local_3c = 0; local_3c < 0x10; local_3c = local_3c + 1) {
        _printf("%02X");
      }
    }
    _printf("\n");
    if (local_1a == 0) {
      _printf("port not specified\n");
    }
    else {
      _printf("port: %hu\n");
    }
  }
  iVar1 = _printf("\n");
  if (*(long *)PTR____stack_chk_guard_100004010 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(iVar1);
  }
  return;
}



undefined4 entry(void)

{
  _test_parse_address("127.0.0.1");
  _test_parse_address("127.0.0.1:80");
  _test_parse_address("::ffff:127.0.0.1");
  _test_parse_address("::1");
  _test_parse_address("[::1]:80");
  _test_parse_address("1::80");
  _test_parse_address("2605:2700:0:3::4713:93e3");
  _test_parse_address("[2605:2700:0:3::4713:93e3]:80");
  return 0;
}



void ___memcpy_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003e60. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____memcpy_chk_100004000)();
  return;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003e6c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004008)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003e78. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004018)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _inet_pton(int param_1,char *param_2,void *param_3)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e84. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__inet_pton_100004020)(param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e90. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004028)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * _strdup(char *param_1)

{
  char *pcVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e9c. Too many branches
                    // WARNING: Treating indirect jump as call
  pcVar1 = (char *)(*(code *)PTR__strdup_100004030)();
  return pcVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * _strrchr(char *param_1,int param_2)

{
  char *pcVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ea8. Too many branches
                    // WARNING: Treating indirect jump as call
  pcVar1 = (char *)(*(code *)PTR__strrchr_100004038)(param_1,param_2);
  return pcVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

ulong _strtoul(char *param_1,char **param_2,int param_3)

{
  ulong uVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003eb4. Too many branches
                    // WARNING: Treating indirect jump as call
  uVar1 = (*(code *)PTR__strtoul_100004040)(param_1,param_2,param_3);
  return uVar1;
}


