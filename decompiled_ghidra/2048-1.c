#include "2048-1.h"



int _do_draw(void)

{
  int iVar1;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  _printf("\x1b[2J\x1b[HScore: %ld");
  if (DAT_1000080b0 != 0) {
    _printf(" (+%ld)");
  }
  _printf("\n");
  for (local_14 = 0; local_14 < 0x19; local_14 = local_14 + 1) {
    _printf("-");
  }
  _printf("\n");
  for (local_18 = 0; local_18 < 4; local_18 = local_18 + 1) {
    _printf("|");
    for (local_1c = 0; local_1c < 4; local_1c = local_1c + 1) {
      if (*(int *)(&_game + (long)local_18 * 4 + (long)local_1c * 0x10) == 0) {
        _printf("%*s |");
      }
      else {
        _printf("\x1b[7m\x1b[%sm%*zd \x1b[0m|");
      }
    }
    _printf("\n");
  }
  for (local_20 = 0; local_20 < 0x19; local_20 = local_20 + 1) {
    _printf("-");
  }
  iVar1 = _printf("\n");
  return iVar1;
}



void _do_merge(undefined4 param_1)

{
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  DAT_1000080b0 = 0;
  switch(param_1) {
  case 1:
    for (local_20 = 0; local_20 < 3; local_20 = local_20 + 1) {
      for (local_24 = 0; local_24 < 4; local_24 = local_24 + 1) {
        if ((*(int *)(&_game + (long)local_20 * 4 + (long)local_24 * 0x10) != 0) &&
           (*(int *)(&_game + (long)local_20 * 4 + (long)local_24 * 0x10) ==
            *(int *)(&_game + (long)(local_20 + 1) * 4 + (long)local_24 * 0x10))) {
          DAT_1000080a0 = 1;
          *(int *)(&_game + (long)local_20 * 4 + (long)local_24 * 0x10) =
               *(int *)(&_game + (long)local_20 * 4 + (long)local_24 * 0x10) + 1;
          DAT_1000080b8 = DAT_1000080b8 + -1;
          *(undefined4 *)(&_game + (long)(local_20 + 1) * 4 + (long)local_24 * 0x10) = 0;
          DAT_1000080b0 =
               DAT_1000080b0 +
               *(long *)(&_values +
                        (long)*(int *)(&_game + (long)local_20 * 4 + (long)local_24 * 0x10) * 8);
          DAT_1000080a8 =
               DAT_1000080a8 +
               *(long *)(&_values +
                        (long)*(int *)(&_game + (long)local_20 * 4 + (long)local_24 * 0x10) * 8);
        }
      }
    }
    break;
  case 2:
    for (local_18 = 3; 0 < local_18; local_18 = local_18 + -1) {
      for (local_1c = 0; local_1c < 4; local_1c = local_1c + 1) {
        if ((*(int *)(&_game + (long)local_18 * 4 + (long)local_1c * 0x10) != 0) &&
           (*(int *)(&_game + (long)local_18 * 4 + (long)local_1c * 0x10) ==
            *(int *)(&_game + (long)(local_18 + -1) * 4 + (long)local_1c * 0x10))) {
          DAT_1000080a0 = 1;
          *(int *)(&_game + (long)local_18 * 4 + (long)local_1c * 0x10) =
               *(int *)(&_game + (long)local_18 * 4 + (long)local_1c * 0x10) + 1;
          DAT_1000080b8 = DAT_1000080b8 + -1;
          *(undefined4 *)(&_game + (long)(local_18 + -1) * 4 + (long)local_1c * 0x10) = 0;
          DAT_1000080b0 =
               DAT_1000080b0 +
               *(long *)(&_values +
                        (long)*(int *)(&_game + (long)local_18 * 4 + (long)local_1c * 0x10) * 8);
          DAT_1000080a8 =
               DAT_1000080a8 +
               *(long *)(&_values +
                        (long)*(int *)(&_game + (long)local_18 * 4 + (long)local_1c * 0x10) * 8);
        }
      }
    }
    break;
  case 3:
    for (local_10 = 3; 0 < local_10; local_10 = local_10 + -1) {
      for (local_14 = 0; local_14 < 4; local_14 = local_14 + 1) {
        if ((*(int *)(&_game + (long)local_14 * 4 + (long)local_10 * 0x10) != 0) &&
           (*(int *)(&_game + (long)local_14 * 4 + (long)local_10 * 0x10) ==
            *(int *)(&_game + (long)local_14 * 4 + (long)(local_10 + -1) * 0x10))) {
          DAT_1000080a0 = 1;
          *(int *)(&_game + (long)local_14 * 4 + (long)local_10 * 0x10) =
               *(int *)(&_game + (long)local_14 * 4 + (long)local_10 * 0x10) + 1;
          DAT_1000080b8 = DAT_1000080b8 + -1;
          *(undefined4 *)(&_game + (long)local_14 * 4 + (long)(local_10 + -1) * 0x10) = 0;
          DAT_1000080b0 =
               DAT_1000080b0 +
               *(long *)(&_values +
                        (long)*(int *)(&_game + (long)local_14 * 4 + (long)local_10 * 0x10) * 8);
          DAT_1000080a8 =
               DAT_1000080a8 +
               *(long *)(&_values +
                        (long)*(int *)(&_game + (long)local_14 * 4 + (long)local_10 * 0x10) * 8);
        }
      }
    }
    break;
  case 4:
    for (local_8 = 0; local_8 < 3; local_8 = local_8 + 1) {
      for (local_c = 0; local_c < 4; local_c = local_c + 1) {
        if ((*(int *)(&_game + (long)local_c * 4 + (long)local_8 * 0x10) != 0) &&
           (*(int *)(&_game + (long)local_c * 4 + (long)local_8 * 0x10) ==
            *(int *)(&_game + (long)local_c * 4 + (long)(local_8 + 1) * 0x10))) {
          DAT_1000080a0 = 1;
          *(int *)(&_game + (long)local_c * 4 + (long)local_8 * 0x10) =
               *(int *)(&_game + (long)local_c * 4 + (long)local_8 * 0x10) + 1;
          DAT_1000080b8 = DAT_1000080b8 + -1;
          *(undefined4 *)(&_game + (long)local_c * 4 + (long)(local_8 + 1) * 0x10) = 0;
          DAT_1000080b0 =
               DAT_1000080b0 +
               *(long *)(&_values +
                        (long)*(int *)(&_game + (long)local_c * 4 + (long)local_8 * 0x10) * 8);
          DAT_1000080a8 =
               DAT_1000080a8 +
               *(long *)(&_values +
                        (long)*(int *)(&_game + (long)local_c * 4 + (long)local_8 * 0x10) * 8);
        }
      }
    }
  }
  return;
}



void _do_gravity(ulong param_1)

{
  bool bVar1;
  uint uVar2;
  int local_44;
  int local_40;
  int local_38;
  int local_34;
  int local_2c;
  int local_28;
  int local_20;
  int local_1c;
  
  switch((int)param_1) {
  case 1:
    bVar1 = false;
    while (!bVar1) {
      bVar1 = true;
      for (local_40 = 0; local_40 < 3; local_40 = local_40 + 1) {
        for (local_44 = 0; local_44 < 4; local_44 = local_44 + 1) {
          if ((*(int *)(&_game + (long)local_40 * 4 + (long)local_44 * 0x10) == 0) &&
             (*(int *)(&_game + (long)(local_40 + 1) * 4 + (long)local_44 * 0x10) != 0)) {
            *(undefined4 *)(&_game + (long)local_40 * 4 + (long)local_44 * 0x10) =
                 *(undefined4 *)(&_game + (long)(local_40 + 1) * 4 + (long)local_44 * 0x10);
            bVar1 = false;
            *(undefined4 *)(&_game + (long)(local_40 + 1) * 4 + (long)local_44 * 0x10) = 0;
            DAT_1000080a0 = 1;
          }
        }
      }
      _do_draw(param_1);
      uVar2 = _usleep(40000);
      param_1 = (ulong)uVar2;
    }
    break;
  case 2:
    bVar1 = false;
    while (!bVar1) {
      bVar1 = true;
      for (local_34 = 3; 0 < local_34; local_34 = local_34 + -1) {
        for (local_38 = 0; local_38 < 4; local_38 = local_38 + 1) {
          if ((*(int *)(&_game + (long)local_34 * 4 + (long)local_38 * 0x10) == 0) &&
             (*(int *)(&_game + (long)(local_34 + -1) * 4 + (long)local_38 * 0x10) != 0)) {
            *(undefined4 *)(&_game + (long)local_34 * 4 + (long)local_38 * 0x10) =
                 *(undefined4 *)(&_game + (long)(local_34 + -1) * 4 + (long)local_38 * 0x10);
            bVar1 = false;
            *(undefined4 *)(&_game + (long)(local_34 + -1) * 4 + (long)local_38 * 0x10) = 0;
            DAT_1000080a0 = 1;
          }
        }
      }
      _do_draw(param_1);
      uVar2 = _usleep(40000);
      param_1 = (ulong)uVar2;
    }
    break;
  case 3:
    bVar1 = false;
    while (!bVar1) {
      bVar1 = true;
      for (local_28 = 3; 0 < local_28; local_28 = local_28 + -1) {
        for (local_2c = 0; local_2c < 4; local_2c = local_2c + 1) {
          if ((*(int *)(&_game + (long)local_2c * 4 + (long)local_28 * 0x10) == 0) &&
             (*(int *)(&_game + (long)local_2c * 4 + (long)(local_28 + -1) * 0x10) != 0)) {
            *(undefined4 *)(&_game + (long)local_2c * 4 + (long)local_28 * 0x10) =
                 *(undefined4 *)(&_game + (long)local_2c * 4 + (long)(local_28 + -1) * 0x10);
            bVar1 = false;
            *(undefined4 *)(&_game + (long)local_2c * 4 + (long)(local_28 + -1) * 0x10) = 0;
            DAT_1000080a0 = 1;
          }
        }
      }
      _do_draw(param_1);
      uVar2 = _usleep(40000);
      param_1 = (ulong)uVar2;
    }
    break;
  case 4:
    bVar1 = false;
    while (!bVar1) {
      bVar1 = true;
      for (local_1c = 0; local_1c < 3; local_1c = local_1c + 1) {
        for (local_20 = 0; local_20 < 4; local_20 = local_20 + 1) {
          if ((*(int *)(&_game + (long)local_20 * 4 + (long)local_1c * 0x10) == 0) &&
             (*(int *)(&_game + (long)local_20 * 4 + (long)(local_1c + 1) * 0x10) != 0)) {
            *(undefined4 *)(&_game + (long)local_20 * 4 + (long)local_1c * 0x10) =
                 *(undefined4 *)(&_game + (long)local_20 * 4 + (long)(local_1c + 1) * 0x10);
            bVar1 = false;
            *(undefined4 *)(&_game + (long)local_20 * 4 + (long)(local_1c + 1) * 0x10) = 0;
            DAT_1000080a0 = 1;
          }
        }
      }
      _do_draw(param_1);
      uVar2 = _usleep(40000);
      param_1 = (ulong)uVar2;
    }
  }
  return;
}



undefined4 _do_check_end_condition(void)

{
  int local_10;
  int local_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  local_c = 0;
  do {
    if (3 < local_c) {
      return local_8;
    }
    for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
      if (*(long *)(&_values +
                   (long)*(int *)(&_game + (long)local_10 * 4 + (long)local_c * 0x10) * 8) == 0x800)
      {
        return 1;
      }
      if (((*(int *)(&_game + (long)local_10 * 4 + (long)local_c * 0x10) == 0) ||
          ((local_c + 1 < 4 &&
           (*(int *)(&_game + (long)local_10 * 4 + (long)local_c * 0x10) ==
            *(int *)(&_game + (long)local_10 * 4 + (long)(local_c + 1) * 0x10))))) ||
         ((local_10 + 1 < 4 &&
          (*(int *)(&_game + (long)local_10 * 4 + (long)local_c * 0x10) ==
           *(int *)(&_game + (long)(local_10 + 1) * 4 + (long)local_c * 0x10))))) {
        local_8 = 0;
      }
    }
    local_c = local_c + 1;
  } while( true );
}



undefined4 _do_tick(undefined4 param_1)

{
  DAT_1000080a0 = 0;
  _do_gravity(param_1);
  _do_merge(param_1);
  _do_gravity(param_1);
  return DAT_1000080a0;
}



void _do_newblock(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int local_20;
  int local_1c;
  int local_18;
  
  if (DAT_1000080b8 < 0x10) {
    iVar2 = _rand();
    iVar1 = 0x10 - DAT_1000080b8;
    iVar3 = 0;
    if (iVar1 != 0) {
      iVar3 = iVar2 / iVar1;
    }
    local_18 = 0;
    for (local_1c = 0; local_1c < 4; local_1c = local_1c + 1) {
      for (local_20 = 0; local_20 < 4; local_20 = local_20 + 1) {
        if (*(int *)(&_game + (long)local_20 * 4 + (long)local_1c * 0x10) == 0) {
          if (local_18 == iVar2 - iVar3 * iVar1) {
            iVar3 = _rand();
            uVar4 = 2;
            if (iVar3 % 10 != 0) {
              uVar4 = 1;
            }
            *(undefined4 *)(&_game + (long)local_20 * 4 + (long)local_1c * 0x10) = uVar4;
            DAT_1000080b8 = DAT_1000080b8 + 1;
            return;
          }
          local_18 = local_18 + 1;
        }
      }
    }
  }
  return;
}



undefined8 entry(void)

{
  bool bVar1;
  int iVar2;
  time_t tVar3;
  undefined4 local_1c;
  
  _tcgetattr(0,(termios *)&_oldt);
  _memcpy(&_newt,&_oldt,0x48);
  DAT_1000080d8 = DAT_1000080d8 & 0xfffffffffffffef7;
  _tcsetattr(0,0,(termios *)&_newt);
  tVar3 = _time((time_t *)0x0);
  _srand((uint)tVar3);
  _memset(&_game,0,0x60);
  _do_newblock();
  _do_newblock();
  _do_draw();
  while( true ) {
    do {
      bVar1 = true;
      local_1c = 0xffffffff;
      iVar2 = _getchar();
      switch(iVar2) {
      case 0x1b:
        iVar2 = _getchar();
        if (iVar2 == 0x5b) {
          iVar2 = _getchar();
          switch(iVar2) {
          case 0x41:
            local_1c = 1;
            break;
          case 0x42:
            local_1c = 2;
            break;
          case 0x43:
            local_1c = 3;
            break;
          case 0x44:
            local_1c = 4;
            break;
          default:
            bVar1 = false;
          }
        }
        break;
      default:
        bVar1 = false;
        break;
      case 0x61:
      case 0x68:
        local_1c = 4;
        break;
      case 100:
      case 0x6c:
        local_1c = 3;
        break;
      case 0x6a:
      case 0x73:
        local_1c = 2;
        break;
      case 0x6b:
      case 0x77:
        local_1c = 1;
        break;
      case 0x71:
        goto LAB_100003c84;
      }
    } while (!bVar1);
    _do_tick(local_1c);
    if (DAT_1000080a0 != 0) {
      _do_newblock();
    }
    _do_draw();
    iVar2 = _do_check_end_condition();
    if (iVar2 == -1) break;
    if ((iVar2 != 0) && (iVar2 == 1)) {
      _printf("You win!\n");
LAB_100003c84:
      _tcsetattr(0,0,(termios *)&_oldt);
      return 0;
    }
  }
  _printf("You lose!\n");
  goto LAB_100003c84;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _getchar(void)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e38. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__getchar_100004000)();
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _memcpy(void *param_1,void *param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e44. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__memcpy_100004008)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _memset(void *param_1,int param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e50. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__memset_100004010)(param_1,param_2);
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e5c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004018)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _rand(void)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e68. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__rand_100004020)();
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _srand(uint param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003e74. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__srand_100004028)(param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _tcgetattr(int param_1,termios *param_2)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e80. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__tcgetattr_100004030)(param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _tcsetattr(int param_1,int param_2,termios *param_3)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e8c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__tcsetattr_100004038)(param_1,param_2);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

time_t _time(time_t *param_1)

{
  time_t tVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e98. Too many branches
                    // WARNING: Treating indirect jump as call
  tVar1 = (*(code *)PTR__time_100004040)();
  return tVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _usleep(useconds_t param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ea4. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__usleep_100004048)(param_1);
  return iVar1;
}


