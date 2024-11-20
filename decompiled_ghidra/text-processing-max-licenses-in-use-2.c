#include "text-processing-max-licenses-in-use-2.h"



int entry(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char *local_c8;
  int local_b8;
  int local_b4;
  int local_b0;
  stat sStack_a8;
  undefined4 local_14;
  
  local_14 = 0;
  iVar2 = _open("mlijobs.txt",0);
  if (iVar2 == -1) {
    _err(1,"open");
  }
  _fstat(iVar2,&sStack_a8);
  pcVar4 = (char *)_mmap(0,sStack_a8.st_size,3,2,iVar2,0);
  local_b4 = 0;
  local_b0 = 0;
  local_c8 = pcVar4;
  while ((long)local_c8 - (long)pcVar4 < sStack_a8.st_size + -0x21) {
    iVar3 = _strncmp(local_c8,"License OUT",0xb);
    if ((iVar3 == 0) && (local_b0 = local_b0 + 1, local_b4 <= local_b0)) {
      if (local_b4 < local_b0) {
        local_b8 = 0;
        local_b4 = local_b0;
      }
      ___memmove_chk(pcVar4 + local_b8 * 0x1a,local_c8 + 0xe,0x13);
      ___sprintf_chk(pcVar4 + (long)(local_b8 * 0x1a) + 0x13,0,0xffffffffffffffff,"%6d\n");
      local_b8 = local_b8 + 1;
    }
    else {
      iVar3 = _strncmp(local_c8,"License IN ",0xb);
      if (iVar3 == 0) {
        local_b0 = local_b0 + -1;
      }
    }
    do {
      bVar1 = false;
      if (local_c8 < pcVar4 + sStack_a8.st_size) {
        bVar1 = *local_c8 != '\n';
        local_c8 = local_c8 + 1;
      }
    } while (bVar1);
  }
  _printf(pcVar4);
  _munmap(pcVar4,sStack_a8.st_size);
  iVar2 = _close(iVar2);
  return iVar2;
}



void ___memmove_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f08. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____memmove_chk_100004000)();
  return;
}



void ___sprintf_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f14. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____sprintf_chk_100004008)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _close(int param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f20. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__close_100004010)(param_1);
  return iVar1;
}



void _err(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f2c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__err_100004018)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fstat(int param_1,stat *param_2)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f38. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fstat_100004020)(param_1);
  return iVar1;
}



void _mmap(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f44. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__mmap_100004028)();
  return;
}



void _munmap(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f50. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__munmap_100004030)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _open(char *param_1,int param_2,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f5c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__open_100004038)((int)param_1,param_2);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f68. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004040)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _strncmp(char *param_1,char *param_2,size_t param_3)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f74. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__strncmp_100004048)((int)param_1);
  return iVar1;
}


