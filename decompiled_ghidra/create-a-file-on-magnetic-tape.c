#include "create-a-file-on-magnetic-tape.h"



undefined4 entry(void)

{
  FILE *pFVar1;
  
  pFVar1 = _fopen("TAPE.FILE","w");
  _fprintf(pFVar1,"This code should be able to write a file to magnetic tape.\n");
  _fprintf(pFVar1,
           "The Wikipedia page on Magnetic tape data storage shows that magnetic tapes are still in use.\n"
          );
  _fprintf(pFVar1,
           "In fact, the latest format, at the time of writing this code is TS1155 released in 2017.\n"
          );
  _fprintf(pFVar1,
           "And since C is already 44, maybe 45, years old in 2017, I am sure someone somewhere did use a C compiler on magnetic tapes.\n"
          );
  _fprintf(pFVar1,
           "If you happen to have one, please try to compile and execute me on that system.\n");
  _fprintf(pFVar1,
           "My creator tested me on an i5 machine with SSD and RAM that couldn\'t have even been dreamt of by Denis Ritchie.\n"
          );
  _fprintf(pFVar1,
           "Who knows ? Maybe he did foresee today, after all he created something which is still young after 44-45 years and counting...\n"
          );
  _fprintf(pFVar1,"EOF");
  _fclose(pFVar1);
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fclose(FILE *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003cc8. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fclose_100004000)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

FILE * _fopen(char *param_1,char *param_2)

{
  FILE *pFVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003cd4. Too many branches
                    // WARNING: Treating indirect jump as call
  pFVar1 = (FILE *)(*(code *)PTR__fopen_100004008)();
  return pFVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fprintf(FILE *param_1,char *param_2,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ce0. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fprintf_100004010)((int)param_1);
  return iVar1;
}


