#include "list-comprehensions.h"



undefined8 * _listNew(int param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)_malloc((long)param_1 + 8);
  *puVar1 = 0;
  ___memcpy_chk(puVar1 + 1,param_2,(long)param_1,0xffffffffffffffff);
  return puVar1;
}



long * _listAppend(long *param_1,undefined4 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 local_18;
  
  for (local_18 = param_1; *local_18 != 0; local_18 = (long *)*local_18) {
  }
  lVar1 = _listNew(param_2,param_3);
  *local_18 = lVar1;
  return local_18;
}



undefined8 * _intRangeList(int param_1,int param_2)

{
  undefined8 *puVar1;
  int local_2c;
  undefined8 *local_28;
  undefined8 *local_20;
  int local_18;
  int local_14;
  
  local_18 = param_2;
  local_14 = param_1;
  local_20 = (undefined8 *)_listNew(4,&local_14);
  local_28 = local_20;
  local_2c = local_14;
  while (local_2c = local_2c + 1, local_2c <= local_18) {
    puVar1 = (undefined8 *)_listNew(4,&local_2c);
    *local_28 = puVar1;
    local_28 = puVar1;
  }
  return local_20;
}



// WARNING: Restarted to delay deadcode elimination for space: stack

undefined8 entry(void)

{
  undefined8 uVar1;
  long local_e0 [2];
  long *local_d0;
  undefined local_c4 [12];
  int local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  long local_a0 [2];
  long *local_90;
  long local_88 [2];
  long *local_78;
  long local_70 [2];
  long *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined *local_48;
  long local_40;
  undefined4 local_34;
  int local_30;
  int local_2c;
  int local_28;
  undefined4 local_24;
  
  local_24 = 0;
  local_34 = 0x14;
  local_58 = 0;
  local_50 = 0;
  local_48 = _SEQ_var;
  _SEQ_var = (undefined *)&local_58;
  local_70[0] = _intRangeList(1);
  local_70[1] = 0;
  local_60 = _FE_var;
  local_28 = *(int *)(local_70[0] + 8);
  _FE_var = local_70;
  while (*_FE_var != 0) {
    local_28 = *(int *)(*_FE_var + 8);
    local_88[0] = _intRangeList(local_28,0x14);
    local_88[1] = 0;
    local_78 = _FE_var;
    local_2c = *(int *)(local_88[0] + 8);
    _FE_var = local_88;
    while (*_FE_var != 0) {
      local_2c = *(int *)(*_FE_var + 8);
      local_a0[0] = _intRangeList(local_2c,0x14);
      local_a0[1] = 0;
      local_90 = _FE_var;
      local_30 = *(int *)(local_a0[0] + 8);
      _FE_var = local_a0;
      while (*_FE_var != 0) {
        local_30 = *(int *)(*_FE_var + 8);
        if (local_28 * local_28 + local_2c * local_2c == local_30 * local_30) {
          if (*(long *)_SEQ_var == 0) {
            local_b8 = local_28;
            local_b4 = local_2c;
            local_b0 = local_30;
            uVar1 = _listNew(0xc,&local_b8);
            *(undefined8 *)_SEQ_var = uVar1;
          }
          else {
            local_ac = local_28;
            local_a8 = local_2c;
            local_a4 = local_30;
            _listAppend(*(undefined8 *)_SEQ_var,0xc,&local_ac);
          }
        }
        *_FE_var = *(long *)*_FE_var;
      }
      _FE_var = (long *)_FE_var[2];
      *_FE_var = *(long *)*_FE_var;
    }
    _FE_var = (long *)_FE_var[2];
    *_FE_var = *(long *)*_FE_var;
  }
  _FE_var = (long *)_FE_var[2];
  *(undefined8 *)(*(long *)(_SEQ_var + 0x10) + 8) = *(undefined8 *)_SEQ_var;
  _SEQ_var = *(undefined **)(_SEQ_var + 0x10);
  local_e0[0] = *(long *)(_SEQ_var + 8);
  local_e0[1] = 0;
  local_d0 = _FE_var;
  _FE_var = local_e0;
  local_40 = local_e0[0];
  _memcpy(local_c4,(void *)(local_e0[0] + 8),0xc);
  while (*_FE_var != 0) {
    _memcpy(local_c4,(void *)(*_FE_var + 8),0xc);
    _printf("%d, %d, %d\n");
    *_FE_var = *(long *)*_FE_var;
  }
  _FE_var = (long *)_FE_var[2];
  return 0;
}



void ___memcpy_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f6c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____memcpy_chk_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f78. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004008)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _memcpy(void *param_1,void *param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f84. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__memcpy_100004010)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f90. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004018)((int)param_1);
  return iVar1;
}


