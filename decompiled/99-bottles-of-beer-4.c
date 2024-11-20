#include "99-bottles-of-beer-4.h"



undefined4 entry(void)

{
  _printf(
         "100 bottles of beer on the wall\n100 bottles of beer\nTake one down, pass it around\n99 bottles of beer on the wall\n\n99 bottles of beer on the wall\n99 bottles of beer\nTake one down, pass it around\n98 bottles of beer on the wall\n\n98 bottles of beer on the wall\n98 bottles of beer\nTake one down, pass it around\n97 bottles of beer on the wall\n\n97 bottles of beer on the wall\n97 bottles of beer\nTake one down, pass it around\n96 bottles of beer on the wall\n\n96 bottles of beer on the wall\n96 bottles of beer\nTake one down, pass it around\n95 bottles of beer on the wall\n\n95 bottles of beer on the wall\n95 bottles of beer\nTake one down, pass it around\n94 bottles of beer on the wall\n\n94 bottles of beer on the wall\n94 bottles of beer\nTake one down, pass it around\n93 bottles of beer on the wall\n\n93 bottles of beer on the wall\n93 bottles of beer\nTake one down, pass it around\n92 bottles of beer on the wall\n\n92 bottles of beer on the wall\n92 bottles of beer\nTake one down, pass it around\n91 bottles of beer on the wall\n\n91 bottles of beer on the wall\n91 bottles of beer\nTake one down, pass it around\n90 bottles of beer on the wall\n\n90 bottles of beer on the wall\n90 bottles of beer\nTake one down, pass it around\n89 bottles of beer on the wall\n\n89 bottles of beer on the wall\n89 bottles of beer\nTake one down, pass it around\n88 bottles of beer on the wall\n\n88 bottles of beer on the wall\n88 bottles of beer\nTake one down, pass it around\n87 bottles of beer on the wall\n\n87 bottles of beer on the wall\n87 bottles of beer\nTake one down, pass it around\n86 bottles of beer on the wall\n\n86 bottles of beer on the wall\n86 bottles of beer\nTake one down, pass it around\n85 bottles of beer on the wall\n\n85 bottles of beer on the wall\n85 bottles of beer\nTake one down, pass it around\n84 bottles of beer on the wall\n\n84 bottles of beer on the wall\n84 bottles of beer\nTake one down, pass it around\n83 bottles of beer on the wall\n\n83 bottles of beer on the wall\n83 bottles of beer\nTake one down, pass it around\n82 bottles of beer on the wall\n\n82 bottles of beer on the wall..." /* TRUNCATED STRING LITERAL */
         );
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x0001000013fc. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}


