#include "file-modification-time-1.h"



undefined4 entry(void)

{
  int iVar1;
  utimbuf local_c0;
  __darwin_time_t local_b0;
  stat sStack_a8;
  undefined4 local_14;
  
  local_14 = 0;
  iVar1 = _stat(_filename,&sStack_a8);
  if (iVar1 < 0) {
    _perror(_filename);
    local_14 = 1;
  }
  else {
    local_b0 = sStack_a8.st_mtimespec.tv_sec;
    local_c0.actime = sStack_a8.st_atimespec.tv_sec;
    local_c0.modtime = _time((time_t *)0x0);
    iVar1 = _utime(_filename,&local_c0);
    if (iVar1 < 0) {
      _perror(_filename);
      local_14 = 1;
    }
    else {
      local_14 = 0;
    }
  }
  return local_14;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _perror(char *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f74. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__perror_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _stat(char *param_1,stat *param_2)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f80. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__stat_100004008)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

time_t _time(time_t *param_1)

{
  time_t tVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f8c. Too many branches
                    // WARNING: Treating indirect jump as call
  tVar1 = (*(code *)PTR__time_100004010)();
  return tVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _utime(char *param_1,utimbuf *param_2)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f98. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__utime_100004018)((int)param_1);
  return iVar1;
}


