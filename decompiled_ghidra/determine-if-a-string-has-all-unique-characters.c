#include "determine-if-a-string-has-all-unique-characters.h"



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Restarted to delay deadcode elimination for space: ram

void _checkAndUpdateLetterList(byte param_1,undefined4 param_2)

{
  bool bVar1;
  void *pvVar2;
  undefined4 *puVar3;
  byte *pbVar4;
  long local_38;
  byte *local_28;
  
  bVar1 = false;
  if (__letterSet == (byte *)0x0) {
    __letterSet = (byte *)_malloc(0x18);
    *__letterSet = param_1;
    pbVar4 = __letterSet;
    pbVar4[4] = 0;
    pbVar4[5] = 0;
    pbVar4[6] = 0;
    pbVar4[7] = 0;
    pvVar2 = _malloc(0x10);
    *(void **)(__letterSet + 8) = pvVar2;
    **(undefined4 **)(__letterSet + 8) = param_2;
    *(undefined8 *)(*(long *)(__letterSet + 8) + 8) = 0;
    pbVar4 = __letterSet;
    pbVar4[0x10] = 0;
    pbVar4[0x11] = 0;
    pbVar4[0x12] = 0;
    pbVar4[0x13] = 0;
    pbVar4[0x14] = 0;
    pbVar4[0x15] = 0;
    pbVar4[0x16] = 0;
    pbVar4[0x17] = 0;
  }
  else {
    for (local_28 = __letterSet; local_28 != (byte *)0x0; local_28 = *(byte **)(local_28 + 0x10)) {
      if ((int)(char)*local_28 == (uint)param_1) {
        bVar1 = true;
        _duplicatesFound = 1;
        *(int *)(local_28 + 4) = *(int *)(local_28 + 4) + 1;
        for (local_38 = *(long *)(local_28 + 8); *(long *)(local_38 + 8) != 0;
            local_38 = *(long *)(local_38 + 8)) {
        }
        puVar3 = (undefined4 *)_malloc(0x10);
        *puVar3 = param_2;
        *(undefined8 *)(puVar3 + 2) = 0;
        *(undefined4 **)(local_38 + 8) = puVar3;
      }
      if ((!bVar1) && (*(long *)(local_28 + 0x10) == 0)) break;
    }
    if (!bVar1) {
      pbVar4 = (byte *)_malloc(0x18);
      *pbVar4 = param_1;
      pbVar4[4] = 0;
      pbVar4[5] = 0;
      pbVar4[6] = 0;
      pbVar4[7] = 0;
      pvVar2 = _malloc(0x10);
      *(void **)(pbVar4 + 8) = pvVar2;
      **(undefined4 **)(pbVar4 + 8) = param_2;
      *(undefined8 *)(*(long *)(pbVar4 + 8) + 8) = 0;
      pbVar4[0x10] = 0;
      pbVar4[0x11] = 0;
      pbVar4[0x12] = 0;
      pbVar4[0x13] = 0;
      pbVar4[0x14] = 0;
      pbVar4[0x15] = 0;
      pbVar4[0x16] = 0;
      pbVar4[0x17] = 0;
      *(byte **)(local_28 + 0x10) = pbVar4;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int _printLetterList(void)

{
  int iVar1;
  long local_20;
  long local_18;
  
  for (local_20 = __letterSet; local_20 != 0; local_20 = *(long *)(local_20 + 0x10)) {
    if (0 < *(int *)(local_20 + 4)) {
      _printf("\n\'%c\' (0x%x) at positions :");
      for (local_18 = *(long *)(local_20 + 8); local_18 != 0; local_18 = *(long *)(local_18 + 8)) {
        _printf("%3d");
      }
    }
  }
  iVar1 = _printf("\n");
  return iVar1;
}



undefined4 entry(int param_1,long param_2)

{
  int iVar1;
  size_t sVar2;
  int local_24;
  
  if (param_1 < 3) {
    if ((param_1 == 1) || (sVar2 = _strlen(*(char **)(param_2 + 8)), sVar2 == 1)) {
      _printf("\"%s\" - Length %d - Contains only unique characters.\n");
    }
    else {
      sVar2 = _strlen(*(char **)(param_2 + 8));
      for (local_24 = 0; local_24 < (int)sVar2; local_24 = local_24 + 1) {
        _checkAndUpdateLetterList((long)*(char *)(*(long *)(param_2 + 8) + (long)local_24),local_24)
        ;
      }
      iVar1 = _printf("\"%s\" - Length %d - %s");
      if ((_duplicatesFound & 1) == 1) {
        _printLetterList(iVar1);
      }
    }
  }
  else {
    _printf("Usage : %s <Test string>\n");
  }
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003eb4. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004000)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ec0. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004008)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t _strlen(char *param_1)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ecc. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__strlen_100004010)();
  return sVar1;
}


