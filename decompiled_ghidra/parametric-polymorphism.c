#include "parametric-polymorphism.h"



undefined8 * _node_double_new(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)_malloc(0x18);
  puVar1[2] = param_1;
  puVar1[1] = 0;
  *puVar1 = 0;
  return puVar1;
}



long _node_double_insert(undefined8 param_1,long *param_2)

{
  long lVar1;
  long *local_20;
  
  lVar1 = _node_double_new(param_1);
  local_20 = param_2;
  while( true ) {
    while( true ) {
      if (local_20 == (long *)0x0) {
        return 0;
      }
      if (*(double *)(lVar1 + 0x10) <= (double)local_20[2]) break;
      if (*local_20 == 0) {
        *local_20 = lVar1;
        return lVar1;
      }
      local_20 = (long *)*local_20;
    }
    if (local_20[1] == 0) break;
    local_20 = (long *)local_20[1];
  }
  local_20[1] = lVar1;
  return lVar1;
}



undefined8 * _node_int_new(undefined4 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)_malloc(0x18);
  *(undefined4 *)(puVar1 + 2) = param_1;
  puVar1[1] = 0;
  *puVar1 = 0;
  return puVar1;
}



long _node_int_insert(long *param_1,undefined4 param_2)

{
  long lVar1;
  long *local_20;
  
  lVar1 = _node_int_new(param_2);
  local_20 = param_1;
  while( true ) {
    while( true ) {
      if (local_20 == (long *)0x0) {
        return 0;
      }
      if (*(int *)(lVar1 + 0x10) <= *(int *)(local_20 + 2)) break;
      if (*local_20 == 0) {
        *local_20 = lVar1;
        return lVar1;
      }
      local_20 = (long *)*local_20;
    }
    if (local_20[1] == 0) break;
    local_20 = (long *)local_20[1];
  }
  local_20[1] = lVar1;
  return lVar1;
}



undefined8 entry(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 local_18;
  
  iVar1 = _rand();
  uVar2 = _node_double_new((double)iVar1 / 2147483647.0);
  for (local_18 = 0; local_18 < 10000; local_18 = local_18 + 1) {
    iVar1 = _rand();
    _node_double_insert((double)iVar1 / 2147483647.0,uVar2);
  }
  iVar1 = _rand();
  uVar2 = _node_int_new(iVar1);
  for (local_18 = 0; local_18 < 10000; local_18 = local_18 + 1) {
    iVar1 = _rand();
    _node_int_insert(uVar2,iVar1);
  }
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f90. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004000)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _rand(void)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f9c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__rand_100004008)();
  return iVar1;
}


