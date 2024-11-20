#include "wireworld.h"



void _next_world(long param_1,long param_2,int param_3,int param_4)

{
  char cVar1;
  undefined uVar2;
  int local_1c;
  
  for (local_1c = 0; local_1c < param_3 * param_4; local_1c = local_1c + 1) {
    cVar1 = *(char *)(param_1 + local_1c);
    if (cVar1 == ' ') {
      *(undefined *)(param_2 + local_1c) = 0x20;
    }
    else if (cVar1 == '.') {
      cVar1 = (*(char *)(param_1 + ((local_1c - param_3) + -1)) == 'H') +
              (*(char *)(param_1 + (local_1c - param_3)) == 'H') +
              (*(char *)(param_1 + ((local_1c - param_3) + 1)) == 'H') +
              (*(char *)(param_1 + (local_1c + -1)) == 'H') +
              (*(char *)(param_1 + (local_1c + 1)) == 'H') +
              (*(char *)(param_1 + (local_1c + param_3 + -1)) == 'H') +
              (*(char *)(param_1 + (local_1c + param_3)) == 'H') +
              (*(char *)(param_1 + (local_1c + param_3 + 1)) == 'H');
      uVar2 = 0x48;
      if (cVar1 != '\x01' && cVar1 != '\x02') {
        uVar2 = 0x2e;
      }
      *(undefined *)(param_2 + local_1c) = uVar2;
    }
    else if (cVar1 == 'H') {
      *(undefined *)(param_2 + local_1c) = 0x74;
    }
    else if (cVar1 == 't') {
      *(undefined *)(param_2 + local_1c) = 0x2e;
    }
    else {
      *(undefined *)(param_2 + local_1c) = *(undefined *)(param_1 + local_1c);
    }
  }
  *(undefined *)(param_2 + local_1c) = *(undefined *)(param_1 + local_1c);
  return;
}



void entry(void)

{
  int local_18;
  
  local_18 = 0;
  do {
    _puts(_world_7x14 + (long)local_18 * 0x200);
    _next_world(_world_7x14 + (long)local_18 * 0x200,_world_7x14 + (long)(1 - local_18) * 0x200,0xe,
                7);
    _printf("\x1b[%dA");
    _printf("\x1b[%dD");
    _nanosleep((timespec *)&DAT_100003f90,(timespec *)0x0);
    local_18 = 1 - local_18;
  } while( true );
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _nanosleep(timespec *param_1,timespec *param_2)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f68. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__nanosleep_100004000)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f74. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004008)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _puts(char *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f80. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__puts_100004010)((int)param_1);
  return iVar1;
}


