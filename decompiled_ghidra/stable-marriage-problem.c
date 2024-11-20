#include "stable-marriage-problem.h"



ulong _engage(ulong param_1,int param_2)

{
  uint uVar1;
  
  *(int *)(&_pairs + (long)(int)param_1 * 4) = param_2;
  *(int *)(&_pairs + (long)param_2 * 4) = (int)param_1;
  if (_verbose != 0) {
    uVar1 = _printf("%4s is engaged to %4s\n");
    param_1 = (ulong)uVar1;
  }
  return param_1;
}



ulong _dump(ulong param_1,int param_2)

{
  uint uVar1;
  
  *(undefined4 *)(&_pairs + (long)(int)param_1 * 4) = 0xffffffff;
  *(undefined4 *)(&_pairs + (long)param_2 * 4) = 0xffffffff;
  if (_verbose != 0) {
    uVar1 = _printf("%4s dumps %4s\n");
    param_1 = (ulong)uVar1;
  }
  return param_1;
}



int _rank(int param_1,int param_2)

{
  bool bVar1;
  int local_c;
  
  local_c = 0;
  while( true ) {
    bVar1 = false;
    if (local_c < 10) {
      bVar1 = *(int *)(&_pref + (long)local_c * 4 + (long)param_1 * 0x28) != param_2;
    }
    if (!bVar1) break;
    local_c = local_c + 1;
  }
  return local_c;
}



void _propose(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(&_pairs + (long)param_2 * 4);
  if (_verbose != 0) {
    _printf("%4s proposes to %4s\n");
  }
  if (iVar1 == -1) {
    _engage(param_1,param_2);
  }
  else {
    iVar2 = _rank(param_2,param_1);
    iVar3 = _rank(param_2,iVar1);
    if (iVar2 < iVar3) {
      _dump(param_2,iVar1);
      _engage(param_1,param_2);
    }
  }
  return;
}



undefined4 _covet(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = _rank(param_1,param_2);
  iVar2 = _rank(param_1,*(undefined4 *)(&_pairs + (long)param_1 * 4));
  if (iVar1 < iVar2) {
    iVar1 = _rank(param_2,param_1);
    iVar2 = _rank(param_2,*(undefined4 *)(&_pairs + (long)param_2 * 4));
    if (iVar1 < iVar2) {
      _printf("    %4s (w/ %4s) and %4s (w/ %4s) prefer each other over current pairing.\n");
      return 1;
    }
  }
  return 0;
}



int _thy_neighbors_wife(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = _covet(param_1,*(undefined4 *)(&_pairs + (long)param_2 * 4));
  iVar2 = _covet(param_2,*(undefined4 *)(&_pairs + (long)param_1 * 4));
  return iVar1 + iVar2;
}



undefined4 _unstable(void)

{
  int iVar1;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_1c = 0;
  for (local_14 = 0; local_18 = local_14, local_14 < 9; local_14 = local_14 + 1) {
    while (local_18 = local_18 + 1, local_18 < 10) {
      iVar1 = _thy_neighbors_wife(local_14,local_18);
      if (iVar1 != 0) {
        local_1c = 1;
      }
    }
  }
  return local_1c;
}



undefined4 entry(void)

{
  char *pcVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  int local_18;
  
  for (local_18 = 0; local_18 < 0x14; local_18 = local_18 + 1) {
    *(undefined4 *)(&_proposed + (long)local_18 * 4) = 0xffffffff;
    *(undefined4 *)(&_pairs + (long)local_18 * 4) = 0xffffffff;
  }
  do {
    bVar2 = false;
    for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
      if (*(int *)(&_pairs + (long)local_18 * 4) == -1) {
        bVar2 = true;
        iVar4 = *(int *)(&_proposed + (long)local_18 * 4) + 1;
        *(int *)(&_proposed + (long)local_18 * 4) = iVar4;
        _propose(local_18,*(undefined4 *)(&_pref + (long)iVar4 * 4 + (long)local_18 * 0x28));
      }
    }
  } while (bVar2);
  iVar4 = _printf("Pairing:\n");
  for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
    iVar4 = _printf("  %4s - %s\n");
  }
  iVar4 = _unstable(iVar4);
  pcVar1 = "Marriages not stable\n";
  if (iVar4 == 0) {
    pcVar1 = "Stable matchup\n";
  }
  _printf(pcVar1);
  _printf("\nBut if Bob and Fred were to swap:\n");
  uVar3 = DAT_1000083c8;
  _engage(1,DAT_1000083d8);
  _engage(5,uVar3);
  iVar4 = _unstable();
  pcVar1 = "Marriages not stable\n";
  if (iVar4 == 0) {
    pcVar1 = "Stable matchup\n";
  }
  _printf(pcVar1);
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e5c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}


