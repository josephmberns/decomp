#include "guess-the-number-with-feedback-player--2.h"



undefined4 _get_value(int param_1)

{
  int iVar1;
  undefined4 local_14;
  
  if (param_1 == -1) {
    local_14 = 0;
  }
  else {
    _printf("My guess is: %d. Is it too high, too low, or correct? (H/L/C) ");
    _scanf("%1s");
    iVar1 = _tolower(0x20);
    if (iVar1 == 99) {
      local_14 = 0;
    }
    else if (iVar1 == 0x68) {
      local_14 = 1;
    }
    else {
      if (iVar1 != 0x6c) {
        _fprintf(*(FILE **)PTR____stderrp_100004000,"Invalid input\n");
                    // WARNING: Subroutine does not return
        _exit(1);
      }
      local_14 = 0xffffffff;
    }
  }
  return local_14;
}



int _my_cmp(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = _get_value(param_1 + -0x100008000);
  iVar2 = _get_value(param_2 + -0x100008000);
  return iVar1 - iVar2;
}



undefined8 entry(void)

{
  void *pvVar1;
  
  _printf(
         "Instructions:\nThink of integer number from %d (inclusive) to %d (exclusive) and\nI will guess it. After each guess, you respond with L, H, or C depending\non if my guess was too low, too high, or correct.\n"
         );
  pvVar1 = _bsearch(&DAT_100007fff,&_dummy,100,1,(int *)_my_cmp);
  if (pvVar1 == (void *)0x0) {
    _fprintf(*(FILE **)PTR____stderrp_100004000,"That is impossible.\n");
  }
  else {
    _printf("Your number is %d.\n");
  }
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _bsearch(void *param_1,void *param_2,size_t param_3,size_t param_4,int *param_5)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e1c. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__bsearch_100004008)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _exit(int param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003e28. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__exit_100004010)(param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _fprintf(FILE *param_1,char *param_2,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e34. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__fprintf_100004018)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e40. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004020)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _scanf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e4c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__scanf_100004028)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _tolower(int _c)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e58. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__tolower_100004030)(_c);
  return iVar1;
}


