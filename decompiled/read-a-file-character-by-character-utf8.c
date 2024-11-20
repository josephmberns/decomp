#include "read-a-file-character-by-character-utf8.h"



undefined8 entry(void)

{
  wchar_t wVar1;
  FILE *pFVar2;
  
  _setlocale(0,"");
  pFVar2 = _fopen("input.txt","r");
  while( true ) {
    wVar1 = _fgetwc(pFVar2);
    if (wVar1 == L'\xffffffff') break;
    _putwchar(wVar1);
  }
  _fclose(pFVar2);
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fclose(FILE *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f64. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fclose_100004000)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

wint_t _fgetwc(FILE *param_1)

{
  wint_t wVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f70. Too many branches
                    // WARNING: Treating indirect jump as call
  wVar1 = (*(code *)PTR__fgetwc_100004008)((int)param_1);
  return wVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

FILE * _fopen(char *param_1,char *param_2)

{
  FILE *pFVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f7c. Too many branches
                    // WARNING: Treating indirect jump as call
  pFVar1 = (FILE *)(*(code *)PTR__fopen_100004010)();
  return pFVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

wint_t _putwchar(wchar_t param_1)

{
  wint_t wVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f88. Too many branches
                    // WARNING: Treating indirect jump as call
  wVar1 = (*(code *)PTR__putwchar_100004018)(param_1);
  return wVar1;
}



void _setlocale(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003f94. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__setlocale_100004020)();
  return;
}


