#include "crc-32-2.h"



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint _rc_crc32(uint param_1,byte *param_2,long param_3)

{
  byte *local_30;
  int local_28;
  uint local_24;
  uint local_1c;
  uint local_4;
  
  if (_DAT_100008400 == 0) {
    for (local_24 = 0; (int)local_24 < 0x100; local_24 = local_24 + 1) {
      local_1c = local_24;
      for (local_28 = 0; local_28 < 8; local_28 = local_28 + 1) {
        if ((local_1c & 1) == 0) {
          local_1c = local_1c >> 1;
        }
        else {
          local_1c = local_1c >> 1 ^ 0xedb88320;
        }
      }
      *(uint *)((long)(int)local_24 * 4 + 0x100008000) = local_1c;
    }
    _DAT_100008400 = 1;
  }
  local_4 = ~param_1;
  for (local_30 = param_2; local_30 < param_2 + param_3; local_30 = local_30 + 1) {
    local_4 = *(uint *)((ulong)((byte)local_4 ^ *local_30) * 4 + 0x100008000) ^ local_4 >> 8;
  }
  return ~local_4;
}



undefined4 entry(void)

{
  size_t sVar1;
  
  sVar1 = _strlen("The quick brown fox jumps over the lazy dog");
  _rc_crc32(0,"The quick brown fox jumps over the lazy dog",sVar1);
  _printf("%X\n");
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f60. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t _strlen(char *param_1)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f6c. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__strlen_100004008)();
  return sVar1;
}


