#include "search-in-paragraphs-text.h"



undefined8 entry(void)

{
  int iVar1;
  FILE *pFVar2;
  char *pcVar3;
  char *pcVar4;
  
  pFVar2 = _fopen("Traceback.txt","r");
  if (pFVar2 == (FILE *)0x0) {
    _puts("Input file not opened.");
  }
  else {
    while (pcVar3 = (char *)_load_paragraph(pFVar2), pcVar3 != (char *)0x0) {
      pcVar4 = _strstr(pcVar3,"SystemError");
      if (pcVar4 != (char *)0x0) {
        pcVar4 = _strstr(pcVar3,"Traceback (most recent call last):");
        if (pcVar4 == (char *)0x0) {
          _printf("%s\n%s");
        }
        else {
          _printf(pcVar4);
        }
        _printf("\n----------------\n");
      }
      _free(pcVar3);
    }
    iVar1 = _feof(pFVar2);
    if (iVar1 == 0) {
      _puts("End of file not reached.");
    }
    _fclose(pFVar2);
  }
  return 0;
}



void * _load_paragraph(FILE *param_1)

{
  int iVar1;
  ulong uVar2;
  ulong local_28;
  void *local_20;
  
  local_20 = (void *)0x0;
  iVar1 = _feof(param_1);
  if (((iVar1 == 0) && (uVar2 = _get_paragraph_length(param_1), uVar2 != 0xffffffffffffffff)) &&
     (local_20 = _malloc(uVar2 + 1), local_20 != (void *)0x0)) {
    for (local_28 = 0; local_28 < uVar2; local_28 = local_28 + 1) {
      iVar1 = _fgetc(param_1);
      *(char *)((long)local_20 + local_28) = (char)iVar1;
    }
    *(undefined *)((long)local_20 + local_28) = 0;
    _fgetc(param_1);
    _fgetc(param_1);
  }
  return local_20;
}



long _get_paragraph_length(FILE *param_1)

{
  int iVar1;
  int local_2c;
  fpos_t fStack_28;
  long local_20;
  FILE *local_18;
  
  local_20 = -1;
  if (((param_1 != (FILE *)0x0) && (local_18 = param_1, iVar1 = _feof(param_1), iVar1 == 0)) &&
     (iVar1 = _fgetpos(local_18,&fStack_28), iVar1 == 0)) {
    local_2c = _fgetc(local_18);
    while (local_2c != -1) {
      if (local_2c == 10) {
        iVar1 = _fgetc(local_18);
        if (iVar1 == 10) {
          local_20 = local_20 + 1;
          local_2c = 10;
          break;
        }
        _ungetc(iVar1,local_18);
      }
      local_20 = local_20 + 1;
      local_2c = _fgetc(local_18);
    }
    local_20 = local_20 + (ulong)(local_2c == -1);
    _fsetpos(local_18,&fStack_28);
  }
  return local_20;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fclose(FILE *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e98. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fclose_100004000)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _feof(FILE *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ea4. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__feof_100004008)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fgetc(FILE *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003eb0. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fgetc_100004010)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fgetpos(FILE *param_1,fpos_t *param_2)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ebc. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fgetpos_100004018)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

FILE * _fopen(char *param_1,char *param_2)

{
  FILE *pFVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ec8. Too many branches
                    // WARNING: Treating indirect jump as call
  pFVar1 = (FILE *)(*(code *)PTR__fopen_100004020)();
  return pFVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003ed4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004028)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fsetpos(FILE *param_1,fpos_t *param_2)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ee0. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fsetpos_100004030)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003eec. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004038)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ef8. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004040)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _puts(char *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f04. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__puts_100004048)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * _strstr(char *param_1,char *param_2)

{
  char *pcVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f10. Too many branches
                    // WARNING: Treating indirect jump as call
  pcVar1 = (char *)(*(code *)PTR__strstr_100004050)();
  return pcVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _ungetc(int param_1,FILE *param_2)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f1c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__ungetc_100004058)(param_1);
  return iVar1;
}


