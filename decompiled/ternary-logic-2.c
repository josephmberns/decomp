#include "ternary-logic-2.h"



int _t_not(int param_1)

{
  return -param_1;
}



int _t_and(int param_1,int param_2)

{
  int local_c;
  
  local_c = param_2;
  if (param_1 < param_2) {
    local_c = param_1;
  }
  return local_c;
}



int _t_or(int param_1,int param_2)

{
  int local_c;
  
  local_c = param_2;
  if (param_2 < param_1) {
    local_c = param_1;
  }
  return local_c;
}



int _t_eq(int param_1,int param_2)

{
  return param_1 * param_2;
}



int _t_imply(int param_1,int param_2)

{
  int local_c;
  
  local_c = param_2;
  if (param_2 < -param_1) {
    local_c = -param_1;
  }
  return local_c;
}



long _t_s(int param_1)

{
  return (long)"F?T"[param_1 + 1];
}



int _show_op(code *param_1)

{
  int iVar1;
  int local_28;
  int local_24;
  
  _printf("\n[%s]\n    F ? T\n  -------");
  for (local_24 = -1; local_24 < 2; local_24 = local_24 + 1) {
    _t_s(local_24);
    _printf("\n%c |");
    for (local_28 = -1; local_28 < 2; local_28 = local_28 + 1) {
      (*param_1)(local_24,local_28);
      _t_s();
      _printf(" %c");
    }
  }
  iVar1 = _puts("");
  return iVar1;
}



undefined8 entry(void)

{
  int local_18;
  
  _puts("[Not]");
  for (local_18 = -1; local_18 < 2; local_18 = local_18 + 1) {
    _t_s(local_18);
    _t_not(local_18);
    _t_s();
    _printf("%c | %c\n");
  }
  _show_op(_t_and,"And");
  _show_op(_t_or,"Or");
  _show_op(_t_eq,"Equiv");
  _show_op(_t_imply,"Imply");
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f44. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _puts(char *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003f50. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__puts_100004008)((int)param_1);
  return iVar1;
}


