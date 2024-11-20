#include "bioinformatics-sequence-mutation.h"



int _numDigits(int param_1)

{
  undefined4 local_8;
  undefined4 local_4;
  
  local_8 = 1;
  for (local_4 = param_1; 10 < local_4; local_4 = local_4 / 10) {
    local_8 = local_8 + 1;
  }
  return local_8;
}



void _generateStrand(void)

{
  int iVar1;
  undefined *puVar2;
  undefined local_34;
  undefined local_2c;
  undefined *local_20;
  int local_18;
  
  iVar1 = _rand();
  iVar1 = iVar1 % 4;
  _baseData = 0;
  DAT_10000800c = 0;
  DAT_100008010 = 0;
  DAT_100008014 = 0;
  _strand = (undefined *)_malloc(0x10);
  if (iVar1 == 0) {
    local_2c = 0x41;
  }
  else if (iVar1 == 1) {
    local_2c = 0x54;
  }
  else {
    local_2c = 0x43;
    if (iVar1 != 2) {
      local_2c = 0x47;
    }
  }
  *_strand = local_2c;
  if (iVar1 == 0) {
    _baseData = _baseData + 1;
  }
  else if (iVar1 == 1) {
    DAT_10000800c = DAT_10000800c + 1;
  }
  else if (iVar1 == 2) {
    DAT_100008010 = DAT_100008010 + 1;
  }
  else {
    DAT_100008014 = DAT_100008014 + 1;
  }
  *(undefined8 *)(_strand + 8) = 0;
  local_20 = _strand;
  for (local_18 = 1; local_18 < _genomeLength; local_18 = local_18 + 1) {
    iVar1 = _rand();
    iVar1 = iVar1 % 4;
    puVar2 = (undefined *)_malloc(0x10);
    if (iVar1 == 0) {
      local_34 = 0x41;
    }
    else if (iVar1 == 1) {
      local_34 = 0x54;
    }
    else {
      local_34 = 0x43;
      if (iVar1 != 2) {
        local_34 = 0x47;
      }
    }
    *puVar2 = local_34;
    if (iVar1 == 0) {
      _baseData = _baseData + 1;
    }
    else if (iVar1 == 1) {
      DAT_10000800c = DAT_10000800c + 1;
    }
    else if (iVar1 == 2) {
      DAT_100008010 = DAT_100008010 + 1;
    }
    else {
      DAT_100008014 = DAT_100008014 + 1;
    }
    *(undefined8 *)(puVar2 + 8) = 0;
    *(undefined **)(local_20 + 8) = puVar2;
    local_20 = puVar2;
  }
  return;
}



undefined8 _generateMutation(int param_1,int param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined local_2c;
  undefined4 local_18;
  
  iVar3 = _rand();
  param_3 = param_1 + param_2 + param_3;
  iVar2 = 0;
  if (param_3 != 0) {
    iVar2 = iVar3 / param_3;
  }
  iVar3 = iVar3 - iVar2 * param_3;
  if (iVar3 < param_1) {
    local_2c = 0x53;
  }
  else {
    bVar1 = false;
    if (param_1 <= iVar3) {
      bVar1 = iVar3 < param_1 + param_2;
    }
    local_2c = 0x49;
    if (!bVar1) {
      local_2c = 0x44;
    }
  }
  local_18 = CONCAT31(local_18._1_3_,local_2c);
  iVar3 = _rand();
  iVar2 = 0;
  if (_genomeLength != 0) {
    iVar2 = iVar3 / _genomeLength;
  }
  return CONCAT44(iVar3 - iVar2 * _genomeLength,local_18);
}



int _printGenome(void)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int local_3c;
  long local_30;
  int local_24;
  int local_20;
  
  _numDigits(_genomeLength);
  if (_genomeLength < _lineLength) {
    local_3c = _genomeLength;
  }
  else {
    local_3c = _lineLength;
  }
  _lineLength = local_3c;
  iVar3 = 0;
  if (local_3c != 0) {
    iVar3 = _genomeLength / local_3c;
  }
  iVar1 = 0;
  if (local_3c != 0) {
    iVar1 = _genomeLength / local_3c;
  }
  bVar2 = _genomeLength != iVar1 * local_3c;
  local_30 = _strand;
  _printf("\n\nGenome : \n--------\n");
  for (local_20 = 0; local_20 < (int)(iVar3 + (uint)bVar2); local_20 = local_20 + 1) {
    _printf("\n%*d%3s");
    for (local_24 = 0; local_24 < _lineLength && local_30 != 0; local_24 = local_24 + 1) {
      _printf("%c");
      local_30 = *(long *)(local_30 + 8);
    }
  }
  for (; local_30 != 0; local_30 = *(long *)(local_30 + 8)) {
    _printf("%c");
  }
  _printf("\n\nBase Counts\n-----------");
  _printf("\n%*c%3s%*d");
  _printf("\n%*c%3s%*d");
  _printf("\n%*c%3s%*d");
  _printf("\n%*c%3s%*d");
  _printf("\n\nTotal:%*d");
  iVar3 = _printf("\n");
  return iVar3;
}



void _mutateStrand(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined local_5c;
  char *local_48;
  char *local_40;
  char local_38;
  int iStack_34;
  int local_28;
  int local_24;
  
  for (local_24 = 0; local_24 < param_1; local_24 = local_24 + 1) {
    local_40 = _strand;
    local_48 = _strand;
    uVar2 = _generateMutation(param_2,param_3,param_4);
    _numDigits(_genomeLength);
    for (local_28 = 0; iStack_34 = (int)((ulong)uVar2 >> 0x20), local_28 < iStack_34;
        local_28 = local_28 + 1) {
      local_48 = local_40;
      local_40 = *(char **)(local_40 + 8);
    }
    local_38 = (char)uVar2;
    if (local_38 == 'S') {
      if (*local_40 == 'A') {
        *local_40 = 'T';
        _printf("\nSwapping A at position : %*d with T");
      }
      else if (*local_40 == 'A') {
        *local_40 = 'T';
        _printf("\nSwapping A at position : %*d with T");
      }
      else if (*local_40 == 'C') {
        *local_40 = 'G';
        _printf("\nSwapping C at position : %*d with G");
      }
      else {
        *local_40 = 'C';
        _printf("\nSwapping G at position : %*d with C");
      }
    }
    else if (local_38 == 'I') {
      iVar1 = _rand();
      iVar1 = iVar1 % 4;
      puVar3 = (undefined *)_malloc(0x10);
      if (iVar1 == 0) {
        local_5c = 0x41;
      }
      else if (iVar1 == 1) {
        local_5c = 0x54;
      }
      else {
        local_5c = 0x43;
        if (iVar1 != 2) {
          local_5c = 0x47;
        }
      }
      *puVar3 = local_5c;
      _printf("\nInserting %c at position : %*d");
      if (iVar1 == 0) {
        _baseData = _baseData + 1;
      }
      else if (iVar1 == 1) {
        DAT_10000800c = DAT_10000800c + 1;
      }
      else if (iVar1 == 2) {
        DAT_100008010 = DAT_100008010 + 1;
      }
      else {
        DAT_100008014 = DAT_100008014 + 1;
      }
      *(char **)(puVar3 + 8) = local_40;
      *(undefined **)(local_48 + 8) = puVar3;
      _genomeLength = _genomeLength + 1;
    }
    else {
      *(undefined8 *)(local_48 + 8) = *(undefined8 *)(local_40 + 8);
      local_40[8] = '\0';
      local_40[9] = '\0';
      local_40[10] = '\0';
      local_40[0xb] = '\0';
      local_40[0xc] = '\0';
      local_40[0xd] = '\0';
      local_40[0xe] = '\0';
      local_40[0xf] = '\0';
      _printf("\nDeleting %c at position : %*d");
      _free(local_40);
      _genomeLength = _genomeLength + -1;
    }
  }
  return;
}



undefined4 entry(int param_1,long param_2)

{
  int iVar1;
  time_t tVar2;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  
  local_24 = 10;
  local_28 = 10;
  local_2c = 10;
  local_30 = 10;
  if ((param_1 == 1) || (6 < param_1)) {
    _printf(
           "Usage : %s <Genome Length> <Optional number of mutations> <Optional Swapping weight> <Optional Insertion weight> <Optional Deletion weight>\n"
           );
  }
  else {
    switch(param_1) {
    case 2:
      _genomeLength = _atoi(*(char **)(param_2 + 8));
      break;
    case 3:
      _genomeLength = _atoi(*(char **)(param_2 + 8));
      local_24 = _atoi(*(char **)(param_2 + 0x10));
      break;
    case 4:
      _genomeLength = _atoi(*(char **)(param_2 + 8));
      local_24 = _atoi(*(char **)(param_2 + 0x10));
      local_28 = _atoi(*(char **)(param_2 + 0x18));
      break;
    case 5:
      _genomeLength = _atoi(*(char **)(param_2 + 8));
      local_24 = _atoi(*(char **)(param_2 + 0x10));
      local_28 = _atoi(*(char **)(param_2 + 0x18));
      local_2c = _atoi(*(char **)(param_2 + 0x20));
      break;
    case 6:
      _genomeLength = _atoi(*(char **)(param_2 + 8));
      local_24 = _atoi(*(char **)(param_2 + 0x10));
      local_28 = _atoi(*(char **)(param_2 + 0x18));
      local_2c = _atoi(*(char **)(param_2 + 0x20));
      local_30 = _atoi(*(char **)(param_2 + 0x28));
    }
    tVar2 = _time((time_t *)0x0);
    _srand((uint)tVar2);
    _generateStrand();
    iVar1 = _printf("\nOriginal:");
    _printGenome(iVar1);
    _mutateStrand(local_24,local_28,local_2c,local_30);
    iVar1 = _printf("\n\nMutated:");
    _printGenome(iVar1);
  }
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _atoi(char *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003da4. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__atoi_100004000)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003db0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004008)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003dbc. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004010)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003dc8. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004018)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _rand(void)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003dd4. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__rand_100004020)();
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _srand(uint param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003de0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__srand_100004028)(param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

time_t _time(time_t *param_1)

{
  time_t tVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003dec. Too many branches
                    // WARNING: Treating indirect jump as call
  tVar1 = (*(code *)PTR__time_100004030)();
  return tVar1;
}


