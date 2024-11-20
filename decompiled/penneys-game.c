#include "penneys-game.h"



uint _getseq(char *param_1)

{
  char cVar1;
  uint local_18;
  uint local_14;
  char *local_10;
  
  local_14 = 0;
  local_18 = 4;
  local_10 = param_1;
  do {
    if (*local_10 == '\0' || local_18 == 0) {
      return local_14;
    }
    cVar1 = *local_10;
    if (cVar1 == 'H') {
LAB_100003a94:
      local_14 = local_14 | local_18;
    }
    else if (cVar1 != 'T') {
      if (cVar1 == 'h') goto LAB_100003a94;
      if (cVar1 != 't') {
        return 0xffffffff;
      }
    }
    local_18 = (int)local_18 >> 1;
    local_10 = local_10 + 1;
  } while( true );
}



ulong _printseq(ulong param_1)

{
  uint uVar1;
  int local_18;
  
  for (local_18 = 2; -1 < local_18; local_18 = local_18 + -1) {
    uVar1 = _printf("%c");
    param_1 = (ulong)uVar1;
  }
  return param_1;
}



int _getuser(void)

{
  int iVar1;
  undefined auStack_18 [4];
  int local_14;
  
  _printf("Enter your sequence of %d (h/t): ");
  while( true ) {
    iVar1 = _scanf("%3s");
    if (iVar1 != 1) {
                    // WARNING: Subroutine does not return
      _exit(1);
    }
    local_14 = _getseq(auStack_18);
    if (local_14 != -1) break;
    _printf("Please enter only h/t characters: ");
  }
  return local_14;
}



uint _getai(uint param_1)

{
  uint local_18;
  
  _printf("Computers sequence of %d is: ");
  if (param_1 == 0xffffffff) {
    local_18 = _rand();
    local_18 = local_18 & 7;
  }
  else {
    local_18 = (~param_1 & 2) << 1 | (int)param_1 >> 1;
  }
  _printseq(local_18);
  _printf("\n");
  return local_18;
}



undefined4 _rungame(uint param_1,uint param_2)

{
  uint uVar1;
  uint local_20;
  
  local_20 = _rand();
  local_20 = local_20 & 7;
  _printf("Tossed sequence: ");
  _printseq(local_20);
  while( true ) {
    if (param_1 == local_20) {
      _printf("\nUser wins!\n");
      return 1;
    }
    if (param_2 == local_20) break;
    uVar1 = _rand();
    local_20 = (local_20 & 3) << 1 | uVar1 & 1;
    _printf("%c");
  }
  _printf("\nAi wins!\n");
  return 0;
}



void entry(void)

{
  uint uVar1;
  time_t tVar2;
  undefined4 local_24;
  undefined4 local_20;
  
  tVar2 = _time((time_t *)0x0);
  _srand((uint)tVar2);
  do {
    _printf("\n");
    uVar1 = _rand();
    if ((uVar1 & 1) == 0) {
      local_20 = _getuser();
      local_24 = _getai(local_20);
    }
    else {
      local_24 = _getai(0xffffffff);
      local_20 = _getuser();
    }
    _rungame(local_20,local_24);
    _printf("You have won %d out of %d games\n");
    _printf("=================================\n");
  } while( true );
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _exit(int param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003e84. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__exit_100004000)(param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e90. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004008)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _rand(void)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e9c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__rand_100004010)();
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _scanf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ea8. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__scanf_100004018)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _srand(uint param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003eb4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__srand_100004020)(param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

time_t _time(time_t *param_1)

{
  time_t tVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ec0. Too many branches
                    // WARNING: Treating indirect jump as call
  tVar1 = (*(code *)PTR__time_100004028)();
  return tVar1;
}


