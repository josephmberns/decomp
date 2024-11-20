#include "read-a-file-line-by-line-3.h"



// WARNING: Restarted to delay deadcode elimination for space: stack

undefined8 _read_lines(char *param_1,code *param_2)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  char *local_d8;
  char *local_d0;
  stat sStack_b8;
  int local_24;
  code *local_20;
  char *local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  local_24 = _open(param_1,0);
  if (local_24 == -1) {
    _err(1,"open: %s");
  }
  iVar3 = _fstat(local_24,&sStack_b8);
  if (iVar3 == -1) {
    _err(1,"stat: %s");
  }
  pcVar4 = (char *)_mmap(0,sStack_b8.st_size,1,1,local_24,0);
  if (pcVar4 == (char *)0xffffffffffffffff) {
    _err(1,"mmap: %s");
  }
  pcVar1 = pcVar4 + sStack_b8.st_size;
  local_d8 = pcVar4;
  local_d0 = pcVar4;
LAB_100003cdc:
  do {
    if ((*local_d8 == '\r') || (*local_d8 == '\n')) {
      if ((local_d8 + 1 < pcVar1) &&
         (((cVar2 = local_d8[1], cVar2 == '\r' || (cVar2 == '\n')) && (cVar2 != *local_d8)))) {
        local_d8 = local_d8 + 1;
      }
    }
    else {
      local_d8 = local_d8 + 1;
      if (local_d8 < pcVar1) goto LAB_100003cdc;
    }
    iVar3 = (*local_20)(local_d0,local_d8);
    if (iVar3 == 0) {
      _err(1,"[callback] %s");
    }
    local_d8 = local_d8 + 1;
    local_d0 = local_d8;
    if (pcVar1 <= local_d8) {
      _munmap(pcVar4,sStack_b8.st_size);
      _close(local_24);
      return 1;
    }
  } while( true );
}



bool _print_line(void *param_1,long param_2)

{
  int iVar1;
  ssize_t sVar2;
  
  iVar1 = _fileno(*(FILE **)PTR____stdoutp_100004000);
  sVar2 = _write(iVar1,param_1,(param_2 - (long)param_1) + 1);
  return sVar2 != -1;
}



bool entry(void)

{
  int iVar1;
  
  iVar1 = _read_lines("test.ps",_print_line);
  return iVar1 == 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _close(int param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f1c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__close_100004008)(param_1);
  return iVar1;
}



void _err(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f28. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__err_100004010)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fileno(FILE *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f34. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fileno_100004018)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fstat(int param_1,stat *param_2)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f40. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fstat_100004020)(param_1);
  return iVar1;
}



void _mmap(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f4c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__mmap_100004028)();
  return;
}



void _munmap(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f58. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__munmap_100004030)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _open(char *param_1,int param_2,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f64. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__open_100004038)((int)param_1,param_2);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

ssize_t _write(int param_1,void *param_2,size_t param_3)

{
  ssize_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f70. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__write_100004040)(param_1);
  return sVar1;
}


