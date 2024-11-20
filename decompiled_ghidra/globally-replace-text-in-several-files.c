#include "globally-replace-text-in-several-files.h"



long _find_match(long param_1,ulong param_2,long param_3,ulong param_4)

{
  long local_38;
  ulong local_30;
  
  local_38 = param_1;
  while( true ) {
    if (param_2 <= local_38 + param_4) {
      return 0;
    }
    for (local_30 = 0;
        (local_30 < param_4 && (*(char *)(local_38 + local_30) == *(char *)(param_3 + local_30)));
        local_30 = local_30 + 1) {
    }
    if (local_30 == param_4) break;
    local_38 = local_38 + 1;
  }
  return local_38;
}



// WARNING: Restarted to delay deadcode elimination for space: stack

undefined4 _replace(char *param_1,char *param_2,char *param_3)

{
  int iVar1;
  int iVar2;
  size_t sVar3;
  size_t sVar4;
  size_t sVar5;
  long local_e8;
  void *local_e0;
  void *local_d8;
  stat sStack_c8;
  char *local_38;
  char *local_30;
  char *local_28;
  
  local_d8 = (void *)0x0;
  local_38 = param_3;
  local_30 = param_2;
  local_28 = param_1;
  sVar3 = _strlen(param_1);
  sVar4 = _strlen(local_30);
  iVar1 = _open(local_38,2);
  if (iVar1 == -1) {
    _warn("Can\'t open \'%s\'");
  }
  else {
    iVar2 = _fstat(iVar1,&sStack_c8);
    if (iVar2 == -1) {
      _warn("Can\'t stat \'%s\'");
    }
    else {
      local_d8 = _malloc(sStack_c8.st_size);
      if (local_d8 == (void *)0x0) {
        _warn("Can\'t alloc \'%s\'");
      }
      else {
        sVar5 = _read(iVar1,local_d8,sStack_c8.st_size);
        if (sVar5 == sStack_c8.st_size) {
          local_e8 = _find_match(local_d8,(long)local_d8 + sStack_c8.st_size,local_28,sVar3);
          if (local_e8 != 0) {
            _ftruncate(iVar1,0);
            _lseek(iVar1,0,0);
            local_e0 = local_d8;
            do {
              _write(iVar1,local_e0,local_e8 - (long)local_e0);
              _write(iVar1,local_30,sVar4);
              local_e0 = (void *)(local_e8 + sVar3);
              local_e8 = _find_match(local_e0,(long)local_d8 + sStack_c8.st_size,local_28,sVar3);
            } while (local_e8 != 0);
            if (local_e0 < (void *)((long)local_d8 + sStack_c8.st_size)) {
              _write(iVar1,local_e0,(long)local_d8 + (sStack_c8.st_size - (long)local_e0));
            }
          }
        }
        else {
          _warn("Bad read \'%s\'");
        }
      }
    }
  }
  if (iVar1 != -1) {
    _close(iVar1);
  }
  if (local_d8 != (void *)0x0) {
    _free(local_d8);
  }
  return 0;
}



undefined8 entry(void)

{
  uint local_4c;
  char *local_30 [3];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  local_30[1] = "test2.txt";
  local_30[0] = "test1.txt";
  local_30[2] = "test3.txt";
  for (local_4c = 0; local_4c < 3; local_4c = local_4c + 1) {
    _replace("Goodbye, London!","Hello, New York!",local_30[(int)local_4c]);
  }
  if (*(long *)PTR____stack_chk_guard_100004008 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail();
  }
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003e90. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _close(int param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e9c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__close_100004010)(param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003ea8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004018)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fstat(int param_1,stat *param_2)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003eb4. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fstat_100004020)(param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _ftruncate(int param_1,off_t param_2)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ec0. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__ftruncate_100004028)(param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

off_t _lseek(int param_1,off_t param_2,int param_3)

{
  off_t oVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ecc. Too many branches
                    // WARNING: Treating indirect jump as call
  oVar1 = (*(code *)PTR__lseek_100004030)(param_1,param_2,param_3);
  return oVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ed8. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004038)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _open(char *param_1,int param_2,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ee4. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__open_100004040)((int)param_1,param_2);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

ssize_t _read(int param_1,void *param_2,size_t param_3)

{
  ssize_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ef0. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__read_100004048)(param_1);
  return sVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t _strlen(char *param_1)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003efc. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__strlen_100004050)();
  return sVar1;
}



void _warn(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f08. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__warn_100004058)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

ssize_t _write(int param_1,void *param_2,size_t param_3)

{
  ssize_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f14. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__write_100004060)(param_1);
  return sVar1;
}


