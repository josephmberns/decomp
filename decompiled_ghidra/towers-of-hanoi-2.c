#include "towers-of-hanoi-2.h"



long * _new_tower(int param_1)

{
  long *plVar1;
  
  plVar1 = (long *)_calloc(1,(long)param_1 * 4 + 0x10);
  *plVar1 = (long)(plVar1 + 2);
  return plVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int _text(undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int local_1c;
  
  iVar1 = _printf("\x1b[%d;%dH");
  local_1c = param_3;
  while( true ) {
    if (local_1c == 0) break;
    iVar1 = _printf("%s");
    local_1c = local_1c + -1;
  }
  return iVar1;
}



int _add_disk(int param_1,undefined4 param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = **(long **)(&_t + (long)param_1 * 8);
  iVar1 = *(int *)(*(long *)(&_t + (long)param_1 * 8) + 8);
  *(int *)(*(long *)(&_t + (long)param_1 * 8) + 8) = iVar1 + 1;
  *(undefined4 *)(lVar2 + (long)iVar1 * 4) = param_2;
  _text(*(undefined4 *)(*(long *)(&_t + (long)param_1 * 8) + 8),param_1,param_2,"==");
  _usleep(100000);
  iVar1 = _fflush(*(FILE **)PTR____stdoutp_100004000);
  return iVar1;
}



undefined4 _remove_disk(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = **(long **)(&_t + (long)param_1 * 8);
  iVar2 = *(int *)(*(long *)(&_t + (long)param_1 * 8) + 8) + -1;
  *(int *)(*(long *)(&_t + (long)param_1 * 8) + 8) = iVar2;
  uVar1 = *(undefined4 *)(lVar3 + (long)iVar2 * 4);
  _text(*(int *)(*(long *)(&_t + (long)param_1 * 8) + 8) + 1,param_1,uVar1,"  ");
  return uVar1;
}



int _move(int param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 in_w2;
  int in_w3;
  
  if (param_1 == 0) {
    iVar1 = 0;
  }
  else {
    _move(param_1 + -1,param_2);
    uVar2 = _remove_disk(param_2);
    _add_disk(in_w2,uVar2);
    iVar1 = _move(param_1 + -1,in_w3);
  }
  return iVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 entry(int param_1,long param_2)

{
  undefined8 uVar1;
  int local_18;
  
  _puts("\x1b[H\x1b[J");
  if ((param_1 < 2) || (__height = _atoi(*(char **)(param_2 + 8)), __height < 1)) {
    __height = 8;
  }
  for (local_18 = 0; local_18 < 3; local_18 = local_18 + 1) {
    uVar1 = _new_tower(__height);
    *(undefined8 *)(&_t + (long)local_18 * 8) = uVar1;
  }
  for (local_18 = __height; local_18 != 0; local_18 = local_18 + -1) {
    _add_disk(0,local_18);
  }
  _move(__height,0);
  _text(1,0,1,"\n");
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _atoi(char *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f4c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__atoi_100004008)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _calloc(size_t param_1,size_t param_2)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f58. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__calloc_100004010)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fflush(FILE *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f64. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fflush_100004018)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f70. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004020)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _puts(char *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f7c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__puts_100004028)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _usleep(useconds_t param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f88. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__usleep_100004030)(param_1);
  return iVar1;
}


