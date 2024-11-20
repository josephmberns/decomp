#include "file-extension-is-in-extensions-list-1.h"



undefined4 _checkFileExtension(char *param_1,char *param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  size_t sVar4;
  size_t sVar5;
  int iVar6;
  char *local_48;
  char *local_40;
  char *local_30;
  
  local_30 = param_2;
  if (*param_1 != '\0') {
    for (; *local_30 != '\0'; local_30 = local_30 + (iVar6 + 1)) {
      sVar4 = _strlen(param_1);
      sVar5 = _strlen(local_30);
      iVar6 = (int)sVar5;
      if (iVar6 <= (int)sVar4) {
        local_40 = param_1 + ((long)(int)sVar4 - (long)iVar6);
        local_48 = local_30;
        do {
          bVar1 = false;
          if (*local_40 != '\0') {
            iVar2 = _toupper((int)*local_40);
            iVar3 = _toupper((int)*local_48);
            bVar1 = iVar2 == iVar3;
            local_48 = local_48 + 1;
            local_40 = local_40 + 1;
          }
        } while (bVar1);
        if (*local_40 == '\0') {
          return 1;
        }
      }
    }
  }
  return 0;
}



void _printExtensions(char *param_1)

{
  size_t sVar1;
  char *local_18;
  
  for (local_18 = param_1; *local_18 != '\0'; local_18 = local_18 + sVar1 + 1) {
    _printf("%s\n");
    sVar1 = _strlen(local_18);
  }
  return;
}



bool _test(undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = _checkFileExtension(param_1,param_2);
  _printf("%20s  result: %-5s  expected: %-5s  test %s\n");
  return iVar1 == param_3;
}



undefined8 entry(void)

{
  int iVar1;
  
  _setlocale(0,"");
  _printExtensions();
  _printf("\n");
  iVar1 = _test("MyData.a##",&DAT_100008000,1);
  if (iVar1 != 0) {
    iVar1 = _test("MyData.tar.Gz",&DAT_100008000,1);
    if (iVar1 != 0) {
      iVar1 = _test("MyData.gzip",&DAT_100008000,0);
      if (iVar1 != 0) {
        iVar1 = _test("MyData.7z.backup",&DAT_100008000,0);
        if (iVar1 != 0) {
          iVar1 = _test("MyData...",&DAT_100008000,0);
          if (iVar1 != 0) {
            iVar1 = _test("MyData",&DAT_100008000,0);
            if (iVar1 != 0) {
              iVar1 = _test("MyData_v1.0.tar.bz2",&DAT_100008000,1);
              if (iVar1 != 0) {
                iVar1 = _test("MyData_v1.0.bz2",&DAT_100008000,0);
                if ((iVar1 != 0) && (iVar1 = _test("filename",&DAT_100008000,0), iVar1 != 0)) {
                  _printf("\n%s\n");
                  goto LAB_100003e44;
                }
              }
            }
          }
        }
      }
    }
  }
  _printf("\n%s\n");
LAB_100003e44:
  _printf("\n%s\n");
  _getchar();
  return 0;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _getchar(void)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e7c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__getchar_100004000)();
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e88. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004008)((int)param_1);
  return iVar1;
}



void _setlocale(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003e94. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__setlocale_100004010)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t _strlen(char *param_1)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ea0. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__strlen_100004018)();
  return sVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _toupper(int _c)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003eac. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__toupper_100004020)(_c);
  return iVar1;
}


