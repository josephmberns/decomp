#include "straddling-checkerboard-2.h"



void _read_table(long param_1)

{
  int iVar1;
  int local_28;
  int local_24;
  int local_1c;
  
  local_1c = 0;
  while( true ) {
    if (0x1d < local_1c) {
      return;
    }
    if (*(char *)(param_1 + local_1c) == '\0') break;
    if (*(char *)(param_1 + local_1c) == ' ') {
      (&_row)[(int)(uint)(_row != 0)] = local_1c;
    }
    else {
      if (local_1c < 10) {
        local_24 = 0;
      }
      else {
        if (local_1c < 0x14) {
          local_28 = _row;
        }
        else {
          local_28 = DAT_10000810c;
        }
        local_24 = local_28;
      }
      iVar1 = local_24 * 10 + local_1c % 10;
      (&_encode)[(int)*(char *)(param_1 + local_1c)] = (char)iVar1;
      (&_decode)[iVar1] = *(undefined *)(param_1 + local_1c);
    }
    local_1c = local_1c + 1;
  }
  _fprintf(*(FILE **)PTR____stderrp_100004010,"Table too short\n");
                    // WARNING: Subroutine does not return
  _exit(1);
}



void _encipher(char *param_1,char *param_2,int param_3)

{
  char *pcVar1;
  uint uVar2;
  char local_1c;
  int local_18;
  char *local_10;
  char *local_8;
  
  local_10 = param_2;
  local_8 = param_1;
LAB_1000039c4:
  while( true ) {
    local_1c = DAT_100008036;
    pcVar1 = local_8 + 1;
    uVar2 = (uint)*local_8;
    if (uVar2 == 0) {
      *local_10 = '\0';
      return;
    }
    local_8 = pcVar1;
    if (((int)uVar2 < 0x30) || (0x39 < (int)uVar2)) break;
    local_18 = uVar2 - 0x30;
    if ('\t' < DAT_100008036) {
      *local_10 = DAT_100008036 / '\n' + '0';
      local_1c = local_1c % '\n';
      local_10 = local_10 + 1;
    }
    *local_10 = local_1c + '0';
    pcVar1 = local_10 + 1;
    if (9 < local_18) {
      local_10[1] = (char)(local_18 / 10) + '0';
      local_18 = local_18 % 10;
      pcVar1 = local_10 + 2;
    }
    local_10 = pcVar1;
    *local_10 = (char)local_18 + '0';
    local_10 = local_10 + 1;
  }
  uVar2 = uVar2 & 0xffffffdf;
  if (((int)uVar2 < 0x41) || (0x5a < (int)uVar2)) goto LAB_100003b44;
  local_1c = (&_encode)[(int)uVar2];
  goto LAB_100003b88;
LAB_100003b44:
  local_1c = DAT_100008037;
  if ((param_3 == 0) || (uVar2 != 0)) {
LAB_100003b88:
    if ('\t' < local_1c) {
      *local_10 = local_1c / '\n' + '0';
      local_1c = local_1c % '\n';
      local_10 = local_10 + 1;
    }
    *local_10 = local_1c + '0';
    local_10 = local_10 + 1;
  }
  goto LAB_1000039c4;
}



void _decipher(char *param_1,char *param_2,int param_3)

{
  char cVar1;
  char *pcVar2;
  int local_18;
  char *local_10;
  char *local_8;
  
  local_10 = param_2;
  local_8 = param_1;
  while( true ) {
    if (*local_8 == 0) break;
    local_18 = *local_8 + -0x30;
    if ((local_18 == _row) || (pcVar2 = local_8 + 1, local_18 == DAT_10000810c)) {
      local_18 = local_18 * 10 + (int)local_8[1] + -0x30;
      pcVar2 = local_8 + 2;
    }
    local_8 = pcVar2;
    cVar1 = (&_decode)[local_18];
    if (cVar1 == '.') {
      cVar1 = *local_8;
      local_8 = local_8 + 1;
    }
    if ((cVar1 == '/') && (param_3 == 0)) {
      cVar1 = ' ';
    }
    *local_10 = cVar1;
    local_10 = local_10 + 1;
  }
  *local_10 = '\0';
  return;
}



undefined8 entry(void)

{
  int iVar1;
  undefined auStack_f0 [100];
  undefined auStack_8c [100];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100004008;
  _memset(auStack_8c,0,100);
  _memset(auStack_f0,0,100);
  _read_table(_board);
  _printf("message: %s\n");
  _encipher("In the winter 1965/we were hungry/just barely alive",auStack_8c,0);
  _printf("encoded: %s\n");
  _decipher(auStack_8c,auStack_f0,0);
  _printf("decoded: %s\n");
  _printf("\nNo spaces:\n");
  _encipher("In the winter 1965/we were hungry/just barely alive",auStack_8c);
  _printf("encoded: %s\n");
  _decipher(auStack_8c,auStack_f0,1);
  iVar1 = _printf("decoded: %s\n");
  if (*(long *)PTR____stack_chk_guard_100004008 != local_28) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(iVar1);
  }
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003ecc. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _exit(int param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003ed8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__exit_100004018)(param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fprintf(FILE *param_1,char *param_2,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ee4. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fprintf_100004020)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _memset(void *param_1,int param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ef0. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__memset_100004028)(param_1,param_2);
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003efc. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004030)((int)param_1);
  return iVar1;
}


