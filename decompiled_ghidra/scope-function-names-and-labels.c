#include "scope-function-names-and-labels.h"



int _twice(int param_1)

{
  return param_1 * 2;
}



undefined4 entry(void)

{
  int iVar1;
  int local_18;
  
  _printf("This will demonstrate function and label scopes.\n");
  _printf(
         "All output is happening through printf(), a function declared in the header stdio.h, which is external to this program.\n"
         );
  _printf("Enter a number: ");
  iVar1 = _scanf("%d");
  if (iVar1 == 1) {
    if (local_18 % 2 != 0) {
      if (local_18 % 2 == 1) {
        _printf("You entered an odd number.\n");
        goto LAB_100003bc4;
      }
      _printf("Case labels in switch statements have scope local to the switch block.\n");
    }
    _printf("You entered an even number.\n");
    _printf(
           "Its square is %d, which was computed by a macro. It has global scope within the translation unit.\n"
           );
    do {
      _printf(
             "We now come to goto, it\'s extremely powerful but it\'s also prone to misuse. Its use is discouraged and it wasn\'t even adopted by Java and later languages.\n"
             );
      if (local_18 == -1) break;
      local_18 = -1;
      _twice(0xffffffff);
      _printf(
             "2 times %d is %d, which was computed by a function defined in this file. It has global scope within the translation unit.\n"
             );
      _printf("Since you jumped in, you will now be greeted, again!\n");
LAB_100003bc4:
      _printf("Hello There!\n");
    } while (local_18 != -1);
    _printf("If you are trying to figure out what happened, you now understand goto.\n");
  }
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003c48. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _scanf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003c54. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__scanf_100004008)((int)param_1);
  return iVar1;
}


