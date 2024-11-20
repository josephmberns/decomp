#include "eulers-constant-0.5772...h"



// WARNING: Removing unreachable block (ram,0x000100003c14)

undefined4 entry(void)

{
  int iVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  int local_d0;
  uint local_cc;
  double local_b8;
  double local_a8;
  double local_a0;
  double local_98;
  undefined auStack_88 [80];
  double local_38 [2];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100004008;
  iVar1 = _printf("From the definition, err. 3e-10\n");
  for (local_cc = 2; (int)local_cc < 0x191; local_cc = local_cc + 1) {
  }
  _log(0x407908006d3a06d4,iVar1);
  _printf("Hn    %.16f\n");
  _printf("gamma %.16f\nk = %d\n\n");
  iVar1 = _printf("Sweeney, 1963, err. idem\n");
  local_38[0] = 0.0;
  local_38[1] = 21.0;
  local_b8 = 21.0;
  local_cc = 1;
  do {
    local_cc = local_cc + 1;
    local_b8 = local_b8 * (21.0 / (double)(long)(int)local_cc);
    local_38[(int)(local_cc & 1)] =
         local_38[(int)(local_cc & 1)] + local_b8 / (double)(long)(int)local_cc;
  } while (1e-06 < local_b8);
  _log(0x4035000000000000,iVar1);
  _printf("gamma %.16f\nk = %d\n\n");
  iVar1 = _printf("Bailey, 1988\n");
  local_98 = 1.0;
  local_a8 = 1.0;
  dVar2 = (double)_pow(0x4000000000000000,0x4014000000000000,iVar1);
  local_b8 = 1.0;
  local_cc = 1;
  do {
    local_cc = local_cc + 1;
    local_b8 = local_b8 * (dVar2 / (double)(long)(int)local_cc);
    local_a8 = local_a8 + 1.0 / (double)(long)(int)local_cc;
    dVar3 = (double)NEON_fmadd(local_b8,local_a8,local_98);
    dVar4 = local_98 - dVar3;
    local_98 = dVar3;
  } while (1e-06 < ABS(dVar4));
  dVar4 = (double)_exp(dVar2);
  uVar5 = _log(0x4000000000000000);
  NEON_fmsub(0x4014000000000000,uVar5,dVar3 * (dVar2 / dVar4));
  _printf("gamma %.16f\nk = %d\n\n");
  iVar1 = _printf("Brent-McMillan, 1980\n");
  local_98 = (double)_log(0x402a000000000000,iVar1);
  local_98 = -local_98;
  local_a0 = 1.0;
  local_d0 = 0;
  local_cc = 0;
  do {
    local_d0 = local_d0 + local_cc * 2 + 1;
    local_cc = local_cc + 1;
    local_a0 = local_a0 * (169.0 / (double)(long)local_d0);
    local_98 = (local_98 * (169.0 / (double)(long)(int)local_cc) + local_a0) /
               (double)(long)(int)local_cc;
  } while (1e-06 < ABS(local_98));
  _printf("gamma %.16f\nk = %d\n\n");
  _printf("How Euler did it in 1735\n");
  _memcpy(auStack_88,&DAT_100003e70,0x50);
  for (local_cc = 2; (int)local_cc < 0xb; local_cc = local_cc + 1) {
  }
  iVar1 = _printf("Hn    %.16f\n");
  _log(0x4024000000000000,iVar1);
  _printf("  -ln %.16f\n");
  for (local_cc = 1; (int)local_cc < 8; local_cc = local_cc + 1) {
  }
  _printf("err  %.16f\ngamma %.16f\nk = %d");
  iVar1 = _printf("\n\nC  =  0.57721566490153286...\n");
  if (*(long *)PTR____stack_chk_guard_100004008 == local_28) {
    return 0;
  }
                    // WARNING: Subroutine does not return
  ___stack_chk_fail(iVar1);
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003e28. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



void _exp(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003e34. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__exp_100004010)();
  return;
}



void _log(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003e40. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__log_100004018)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _memcpy(void *param_1,void *param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e4c. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__memcpy_100004020)();
  return pvVar1;
}



void _pow(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003e58. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__pow_100004028)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e64. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004030)((int)param_1);
  return iVar1;
}


