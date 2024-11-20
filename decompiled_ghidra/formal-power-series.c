#include "formal-power-series.h"



undefined4 * _fps_new(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)_malloc(0x20);
  *(undefined8 *)(puVar1 + 6) = 0;
  *(undefined8 *)(puVar1 + 4) = 0;
  *(undefined8 *)(puVar1 + 2) = 0;
  *puVar1 = 0;
  return puVar1;
}



void _fps_redefine(undefined4 *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = param_2;
  *(undefined8 *)(param_1 + 2) = param_3;
  *(undefined8 *)(param_1 + 4) = param_4;
  return;
}



undefined4 * __binary(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)_fps_new();
  *(undefined8 *)(puVar1 + 2) = param_1;
  *(undefined8 *)(puVar1 + 4) = param_2;
  *puVar1 = param_3;
  return puVar1;
}



undefined4 * __unary(undefined8 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)_fps_new();
  *(undefined8 *)(puVar1 + 2) = param_1;
  *puVar1 = param_2;
  return puVar1;
}



undefined  [16] _term(undefined4 *param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined auVar6 [16];
  double local_48;
  int local_34;
  double local_30;
  double local_18;
  
  local_30 = 0.0;
  switch(*param_1) {
  case 0:
    if (param_2 < 1) {
      local_48 = *(double *)(param_1 + 6);
    }
    else {
      local_48 = 0.0;
    }
    local_18 = local_48;
    goto LAB_100003ca0;
  case 1:
    local_30 = (double)_term(*(undefined8 *)(param_1 + 2),param_2);
    dVar3 = (double)_term(*(undefined8 *)(param_1 + 4),param_2);
    local_30 = local_30 + dVar3;
    break;
  case 2:
    local_30 = (double)_term(*(undefined8 *)(param_1 + 2),param_2);
    dVar3 = (double)_term(*(undefined8 *)(param_1 + 4),param_2);
    local_30 = local_30 - dVar3;
    break;
  case 3:
    for (local_34 = 0; local_34 <= param_2; local_34 = local_34 + 1) {
      uVar1 = _term(*(undefined8 *)(param_1 + 2),local_34);
      uVar2 = _term(*(undefined8 *)(param_1 + 4),param_2 - local_34);
      local_30 = (double)NEON_fmadd(uVar1,uVar2,local_30);
    }
    break;
  case 4:
    dVar3 = (double)_term(*(undefined8 *)(param_1 + 4),0);
    if (dVar3 == 0.0) {
      local_18 = NAN;
      goto LAB_100003ca0;
    }
    local_30 = (double)_term(*(undefined8 *)(param_1 + 2),param_2);
    for (local_34 = 1; local_34 <= param_2; local_34 = local_34 + 1) {
      dVar3 = (double)_term(*(undefined8 *)(param_1 + 4),local_34);
      dVar4 = (double)_term(param_1,param_2 - local_34);
      dVar5 = (double)_term(*(undefined8 *)(param_1 + 4),0);
      local_30 = local_30 - (dVar3 * dVar4) / dVar5;
    }
    break;
  case 5:
    local_30 = (double)_term(*(undefined8 *)(param_1 + 2),param_2 + 1);
    local_30 = (double)(long)param_2 * local_30;
    break;
  case 6:
    if (param_2 == 0) {
      local_18 = *(double *)(param_1 + 6);
      goto LAB_100003ca0;
    }
    local_30 = (double)_term(*(undefined8 *)(param_1 + 2),param_2 + -1);
    local_30 = local_30 / (double)(long)param_2;
    break;
  default:
    _fprintf(*(FILE **)PTR____stderrp_100004000,"Unknown operator %d\n");
                    // WARNING: Subroutine does not return
    _exit(1);
  }
  local_18 = local_30;
LAB_100003ca0:
  auVar6._8_8_ = 0;
  auVar6._0_8_ = local_18;
  return auVar6;
}



undefined4 * _fps_const(undefined8 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)_fps_new();
  *puVar1 = 0;
  *(undefined8 *)(puVar1 + 6) = param_1;
  return puVar1;
}



undefined8 entry(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int local_18;
  
  uVar1 = _fps_const();
  uVar2 = _fps_new();
  uVar3 = __unary(uVar2);
  uVar4 = __binary(uVar3,uVar2,4);
  uVar5 = __unary(uVar3,6);
  _fps_redefine(uVar2,2,uVar1,uVar5);
  uVar1 = _fps_const(0x3ff0000000000000);
  _fps_redefine(uVar1,6,uVar1,0);
  _printf("Sin:");
  for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
    _term(uVar3,local_18);
    _printf(" %g");
  }
  _printf("\nCos:");
  for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
    _term(uVar2,local_18);
    _printf(" %g");
  }
  _printf("\nTan:");
  for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
    _term(uVar4,local_18);
    _printf(" %g");
  }
  _printf("\nExp:");
  for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
    _term(uVar1,local_18);
    _printf(" %g");
  }
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _exit(int param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f30. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__exit_100004008)(param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fprintf(FILE *param_1,char *param_2,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f3c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fprintf_100004010)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f48. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004018)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f54. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004020)((int)param_1);
  return iVar1;
}


