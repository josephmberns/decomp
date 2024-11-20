#include "word-wheel.h"



bool _is_letter(char param_1)

{
  return '`' < param_1 && param_1 < '{';
}



char * _index(char *param_1,int param_2)

{
  return (char *)(ulong)((int)(char)param_1 - 0x61);
}



void _word_wheel(char *param_1,char param_2,int param_3,FILE *param_4)

{
  int iVar1;
  char cVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined auVar5 [16];
  undefined auVar6 [12];
  char *local_180;
  char *local_170;
  int aiStack_14c [26];
  char local_e1 [81];
  int aiStack_90 [26];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100004008;
  _memset(aiStack_90,0,0x68);
  for (local_170 = param_1; *local_170 != '\0'; local_170 = local_170 + 1) {
    cVar2 = *local_170;
    auVar6 = _is_letter((long)cVar2);
    if ((auVar6 & (undefined  [12])0x1) != (undefined  [12])0x0) {
      pcVar3 = _index((char *)(long)cVar2,auVar6._8_4_);
      aiStack_90[(int)pcVar3] = aiStack_90[(int)pcVar3] + 1;
    }
  }
  _memset(local_e1,0,0x51);
  do {
    pcVar3 = _fgets(local_e1,0x50,param_4);
    if (pcVar3 == (char *)0x0) {
      if (*(long *)PTR____stack_chk_guard_100004008 == local_28) {
        return;
      }
                    // WARNING: Subroutine does not return
      ___stack_chk_fail();
    }
    uVar4 = 0;
    _memset(aiStack_14c,0,0x68);
    for (local_180 = local_e1; *local_180 != '\0'; local_180 = local_180 + 1) {
      cVar2 = *local_180;
      if (cVar2 == '\n') {
        if ((local_e1 + param_3 <= local_180) &&
           (pcVar3 = _index((char *)(long)param_2,(int)uVar4), 0 < aiStack_14c[(int)pcVar3])) {
          _printf("%s");
        }
      }
      else {
        auVar5 = _is_letter((long)cVar2);
        uVar4 = auVar5._8_8_;
        if ((auVar5 & (undefined  [16])0x1) == (undefined  [16])0x0) break;
        pcVar3 = _index((char *)(long)cVar2,auVar5._8_4_);
        iVar1 = aiStack_14c[(int)pcVar3] + 1;
        aiStack_14c[(int)pcVar3] = iVar1;
        if (aiStack_90[(int)pcVar3] < iVar1) break;
      }
    }
  } while( true );
}



bool entry(int param_1,long param_2)

{
  FILE *pFVar1;
  char *local_38;
  
  if (param_1 == 2) {
    local_38 = *(char **)(param_2 + 8);
  }
  else {
    local_38 = "unixdict.txt";
  }
  pFVar1 = _fopen(local_38,"r");
  if (pFVar1 != (FILE *)0x0) {
    _word_wheel("ndeokgelw",0x6b,3,pFVar1);
    _fclose(pFVar1);
  }
  else {
    _perror(local_38);
  }
  return pFVar1 == (FILE *)0x0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f30. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fclose(FILE *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f3c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fclose_100004010)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * _fgets(char *param_1,int param_2,FILE *param_3)

{
  char *pcVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f48. Too many branches
                    // WARNING: Treating indirect jump as call
  pcVar1 = (char *)(*(code *)PTR__fgets_100004018)(param_1,param_2);
  return pcVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

FILE * _fopen(char *param_1,char *param_2)

{
  FILE *pFVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f54. Too many branches
                    // WARNING: Treating indirect jump as call
  pFVar1 = (FILE *)(*(code *)PTR__fopen_100004020)();
  return pFVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _memset(void *param_1,int param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f60. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__memset_100004028)(param_1,param_2);
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _perror(char *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003f6c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__perror_100004030)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f78. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004038)((int)param_1);
  return iVar1;
}


