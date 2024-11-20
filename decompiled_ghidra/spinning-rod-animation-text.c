#include "spinning-rod-animation-text.h"



undefined8 entry(void)

{
  double dVar1;
  timespec local_48;
  time_t local_38;
  time_t local_30;
  char *local_28;
  undefined4 local_20;
  int local_1c;
  int local_18;
  undefined4 local_14;
  
  local_14 = 0;
  local_20 = 0xfa;
  local_28 = "|/-\\";
  local_48.tv_sec = 0;
  local_48.tv_nsec = 250000000;
  _printf("\x1b[?25l");
  _time(&local_30);
  do {
    for (local_18 = 0; local_18 < 4; local_18 = local_18 + 1) {
      _printf("\x1b[2J");
      _printf("\x1b[0;0H");
      for (local_1c = 0; local_1c < 0x50; local_1c = local_1c + 1) {
        _printf("%c");
      }
      _fflush(*(FILE **)PTR____stdoutp_100004000);
      _nanosleep(&local_48,(timespec *)0x0);
    }
    _time(&local_38);
    dVar1 = _difftime(local_38,local_30);
  } while (dVar1 < 20.0);
  _printf("\x1b[?25h");
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

double _difftime(time_t param_1,time_t param_2)

{
  double dVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f50. Too many branches
                    // WARNING: Treating indirect jump as call
  dVar1 = (double)(*(code *)PTR__difftime_100004008)();
  return dVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fflush(FILE *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f5c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fflush_100004010)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _nanosleep(timespec *param_1,timespec *param_2)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f68. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__nanosleep_100004018)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f74. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004020)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

time_t _time(time_t *param_1)

{
  time_t tVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f80. Too many branches
                    // WARNING: Treating indirect jump as call
  tVar1 = (*(code *)PTR__time_100004028)();
  return tVar1;
}


