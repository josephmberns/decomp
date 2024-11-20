#include "bioinformatics-base-count-2.h"



undefined8 entry(void)

{
  int iVar1;
  int local_238;
  char acStack_21d [501];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100004008;
  _memcpy(acStack_21d,
          "CGTAAAAAATTACAACGTCCTTTGGCTATCTCTTAAACTCCTGCTAAATGCTCGTGCTTTCCAATTATGTAAGCGTTCCGAGACGGGGTGGTCGATTCTGAGGACAAAGGTCAAGATGGAGCGCATCGAACGCAATAAGGATCATTTGATGGGACGTTTCGTCGACAAAGTCTTGTTTCGAGAGTAACGGCTACCGTCTTCGATTCTGCTTATAACACTATGTTCTTATGAAATGGATGTTCTGAGTTGGTCAGTCCCAATGTGCGGGGTTTCTTTTAGTACGTCGGGAGTGGTATTATATTTAATTTTTCTATATAGCGATCTGTATTTAAGCAATTCATTTAGGTTATCGCCGCGATGCTCGGTTCGGACCGCCAAGCATCTGGCTCCACTGCTAGTGTCCTAAATTTGAATGGCAAACACAAATAAGATTTAGCAATTCGTGTAGACGACCGGGGACTTGCATGATGGGAGCAGCTTTGTTAAACTACGAACGTAAT"
          ,0x1f5);
  for (local_238 = 0; acStack_21d[local_238] != '\0'; local_238 = local_238 + 1) {
    if (local_238 % 0x32 == 0) {
      _printf("\n%3d - %3d: %c");
    }
    else if (local_238 % 5 == 0) {
      _printf(" %c");
    }
    else {
      _printf("%c");
    }
    switch(acStack_21d[local_238]) {
    case 'A':
      break;
    case 'C':
      break;
    case 'G':
      break;
    case 'T':
    }
  }
  iVar1 = _printf("\n\nC count: %3d\nT count: %3d\nA count: %3d\nG count: %3d\n  Total: %3d\n\n");
  if (*(long *)PTR____stack_chk_guard_100004008 != local_28) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail(iVar1);
  }
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003d34. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _memcpy(void *param_1,void *param_2,size_t param_3)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003d40. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__memcpy_100004010)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003d4c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004018)((int)param_1);
  return iVar1;
}


