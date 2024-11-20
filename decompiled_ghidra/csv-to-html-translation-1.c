#include "csv-to-html-translation-1.h"



undefined8 entry(void)

{
  char cVar1;
  char *local_20;
  
  _printf("<table>\n<tr><td>");
  for (local_20 = _input; *local_20 != '\0'; local_20 = local_20 + 1) {
    cVar1 = *local_20;
    if (cVar1 == '\n') {
      _printf("</td></tr>\n<tr><td>");
    }
    else if (cVar1 == '&') {
      _printf("&amp;");
    }
    else if (cVar1 == ',') {
      _printf("</td><td>");
    }
    else if (cVar1 == '<') {
      _printf("&lt;");
    }
    else if (cVar1 == '>') {
      _printf("&gt;");
    }
    else {
      _putchar((int)*local_20);
    }
  }
  _puts("</td></tr>\n</table>");
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e10. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _putchar(int param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e1c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__putchar_100004008)(param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _puts(char *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e28. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__puts_100004010)((int)param_1);
  return iVar1;
}


