#include "nim-game.h"



undefined8 entry(void)

{
  int iVar1;
  undefined4 local_1c;
  int local_18;
  
  _printf("Nim Game\n\n");
  local_18 = 0xc;
  while (0 < local_18) {
    _printf("How many tokens would you like to take?: ");
    _scanf("%i");
    iVar1 = _playerTurn(local_18,local_1c);
    if (iVar1 != local_18) {
      local_18 = _computerTurn(iVar1);
    }
  }
  _printf("Computer wins.");
  return 0;
}



int _playerTurn(int param_1,int param_2)

{
  int local_14;
  
  if ((param_2 < 1) || (3 < param_2)) {
    _printf("\nTake must be between 1 and 3.\n\n");
    local_14 = param_1;
  }
  else {
    local_14 = param_1 - param_2;
    _printf("\nPlayer takes %i tokens.\n");
    _printf("%i tokens remaining.\n\n");
  }
  return local_14;
}



int _computerTurn(int param_1)

{
  _printf("Computer takes %u tokens.\n");
  _printf("%i tokens remaining.\n\n");
  return param_1 - param_1 % 4;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ee4. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _scanf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ef0. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__scanf_100004008)((int)param_1);
  return iVar1;
}


