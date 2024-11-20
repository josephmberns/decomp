#include "yin-and-yang.h"



int _draw_yinyang(void)

{
  int iVar1;
  
  iVar1 = _printf("<use xlink:href=\'#y\' transform=\'translate(%d,%d) scale(%g)\'/>");
  return iVar1;
}



undefined4 entry(void)

{
  _printf(
         "<?xml version=\'1.0\' encoding=\'UTF-8\' standalone=\'no\'?>\n<!DOCTYPE svg PUBLIC \'-//W3C//DTD SVG 1.1//EN\'\n\t\'http://www.w3.org/Graphics/SVG/1.1/DTD/svg11.dtd\'>\n<svg xmlns=\'http://www.w3.org/2000/svg\' version=\'1.1\'\n\txmlns:xlink=\'http://www.w3.org/1999/xlink\'\n\t\twidth=\'30\' height=\'30\'>\n\t<defs><g id=\'y\'>\n\t\t<circle cx=\'0\' cy=\'0\' r=\'200\' stroke=\'black\'\n\t\t\tfill=\'white\' stroke-width=\'1\'/>\n\t\t<path d=\'M0 -200 A 200 200 0 0 0 0 200\n\t\t\t100 100 0 0 0 0 0 100 100 0 0 1 0 -200\n\t\t\tz\' fill=\'black\'/>\n\t\t<circle cx=\'0\' cy=\'100\' r=\'33\' fill=\'white\'/>\n\t\t<circle cx=\'0\' cy=\'-100\' r=\'33\' fill=\'black\'/>\n\t</g></defs>\n"
         );
  _draw_yinyang(0x3fa999999999999a,0x14);
  _draw_yinyang(0x3f947ae147ae147b,8);
  _printf("</svg>");
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003cfc. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004000)((int)param_1);
  return iVar1;
}


