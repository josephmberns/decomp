#include "iban.h"



bool _valid_cc(char *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = _strncmp(param_1,"AL",2);
  if (iVar2 == 0) {
    bVar1 = param_2 == 0x1c;
  }
  else {
    iVar2 = _strncmp(param_1,"AD",2);
    if (iVar2 == 0) {
      bVar1 = param_2 == 0x18;
    }
    else {
      iVar2 = _strncmp(param_1,"AT",2);
      if (iVar2 == 0) {
        bVar1 = param_2 == 0x14;
      }
      else {
        iVar2 = _strncmp(param_1,"AZ",2);
        if (iVar2 == 0) {
          bVar1 = param_2 == 0x1c;
        }
        else {
          iVar2 = _strncmp(param_1,"BE",2);
          if (iVar2 == 0) {
            bVar1 = param_2 == 0x10;
          }
          else {
            iVar2 = _strncmp(param_1,"BH",2);
            if (iVar2 == 0) {
              bVar1 = param_2 == 0x16;
            }
            else {
              iVar2 = _strncmp(param_1,"BA",2);
              if (iVar2 == 0) {
                bVar1 = param_2 == 0x14;
              }
              else {
                iVar2 = _strncmp(param_1,"BR",2);
                if (iVar2 == 0) {
                  bVar1 = param_2 == 0x1d;
                }
                else {
                  iVar2 = _strncmp(param_1,"BG",2);
                  if (iVar2 == 0) {
                    bVar1 = param_2 == 0x16;
                  }
                  else {
                    iVar2 = _strncmp(param_1,"CR",2);
                    if (iVar2 == 0) {
                      bVar1 = param_2 == 0x15;
                    }
                    else {
                      iVar2 = _strncmp(param_1,"HR",2);
                      if (iVar2 == 0) {
                        bVar1 = param_2 == 0x15;
                      }
                      else {
                        iVar2 = _strncmp(param_1,"CY",2);
                        if (iVar2 == 0) {
                          bVar1 = param_2 == 0x1c;
                        }
                        else {
                          iVar2 = _strncmp(param_1,"CZ",2);
                          if (iVar2 == 0) {
                            bVar1 = param_2 == 0x18;
                          }
                          else {
                            iVar2 = _strncmp(param_1,"DK",2);
                            if (iVar2 == 0) {
                              bVar1 = param_2 == 0x12;
                            }
                            else {
                              iVar2 = _strncmp(param_1,"DO",2);
                              if (iVar2 == 0) {
                                bVar1 = param_2 == 0x1c;
                              }
                              else {
                                iVar2 = _strncmp(param_1,"EE",2);
                                if (iVar2 == 0) {
                                  bVar1 = param_2 == 0x14;
                                }
                                else {
                                  iVar2 = _strncmp(param_1,"FO",2);
                                  if (iVar2 == 0) {
                                    bVar1 = param_2 == 0x12;
                                  }
                                  else {
                                    iVar2 = _strncmp(param_1,"FI",2);
                                    if (iVar2 == 0) {
                                      bVar1 = param_2 == 0x12;
                                    }
                                    else {
                                      iVar2 = _strncmp(param_1,"FR",2);
                                      if (iVar2 == 0) {
                                        bVar1 = param_2 == 0x1b;
                                      }
                                      else {
                                        iVar2 = _strncmp(param_1,"GE",2);
                                        if (iVar2 == 0) {
                                          bVar1 = param_2 == 0x16;
                                        }
                                        else {
                                          iVar2 = _strncmp(param_1,"DE",2);
                                          if (iVar2 == 0) {
                                            bVar1 = param_2 == 0x16;
                                          }
                                          else {
                                            iVar2 = _strncmp(param_1,"GI",2);
                                            if (iVar2 == 0) {
                                              bVar1 = param_2 == 0x17;
                                            }
                                            else {
                                              iVar2 = _strncmp(param_1,"GR",2);
                                              if (iVar2 == 0) {
                                                bVar1 = param_2 == 0x1b;
                                              }
                                              else {
                                                iVar2 = _strncmp(param_1,"GL",2);
                                                if (iVar2 == 0) {
                                                  bVar1 = param_2 == 0x12;
                                                }
                                                else {
                                                  iVar2 = _strncmp(param_1,"GT",2);
                                                  if (iVar2 == 0) {
                                                    bVar1 = param_2 == 0x1c;
                                                  }
                                                  else {
                                                    iVar2 = _strncmp(param_1,"HU",2);
                                                    if (iVar2 == 0) {
                                                      bVar1 = param_2 == 0x1c;
                                                    }
                                                    else {
                                                      iVar2 = _strncmp(param_1,"IS",2);
                                                      if (iVar2 == 0) {
                                                        bVar1 = param_2 == 0x1a;
                                                      }
                                                      else {
                                                        iVar2 = _strncmp(param_1,"IE",2);
                                                        if (iVar2 == 0) {
                                                          bVar1 = param_2 == 0x16;
                                                        }
                                                        else {
                                                          iVar2 = _strncmp(param_1,"IL",2);
                                                          if (iVar2 == 0) {
                                                            bVar1 = param_2 == 0x17;
                                                          }
                                                          else {
                                                            iVar2 = _strncmp(param_1,"IT",2);
                                                            if (iVar2 == 0) {
                                                              bVar1 = param_2 == 0x1b;
                                                            }
                                                            else {
                                                              iVar2 = _strncmp(param_1,"KZ",2);
                                                              if (iVar2 == 0) {
                                                                bVar1 = param_2 == 0x14;
                                                              }
                                                              else {
                                                                iVar2 = _strncmp(param_1,"KW",2);
                                                                if (iVar2 == 0) {
                                                                  bVar1 = param_2 == 0x1e;
                                                                }
                                                                else {
                                                                  iVar2 = _strncmp(param_1,"LV",2);
                                                                  if (iVar2 == 0) {
                                                                    bVar1 = param_2 == 0x15;
                                                                  }
                                                                  else {
                                                                    iVar2 = _strncmp(param_1,"LB",2)
                                                                    ;
                                                                    if (iVar2 == 0) {
                                                                      bVar1 = param_2 == 0x1c;
                                                                    }
                                                                    else {
                                                                      iVar2 = _strncmp(param_1,"LI",
                                                                                       2);
                                                                      if (iVar2 == 0) {
                                                                        bVar1 = param_2 == 0x15;
                                                                      }
                                                                      else {
                                                                        iVar2 = _strncmp(param_1,
                                                  "LT",2);
                                                  if (iVar2 == 0) {
                                                    bVar1 = param_2 == 0x14;
                                                  }
                                                  else {
                                                    iVar2 = _strncmp(param_1,"LU",2);
                                                    if (iVar2 == 0) {
                                                      bVar1 = param_2 == 0x14;
                                                    }
                                                    else {
                                                      iVar2 = _strncmp(param_1,"MK",2);
                                                      if (iVar2 == 0) {
                                                        bVar1 = param_2 == 0x13;
                                                      }
                                                      else {
                                                        iVar2 = _strncmp(param_1,"MT",2);
                                                        if (iVar2 == 0) {
                                                          bVar1 = param_2 == 0x1f;
                                                        }
                                                        else {
                                                          iVar2 = _strncmp(param_1,"MR",2);
                                                          if (iVar2 == 0) {
                                                            bVar1 = param_2 == 0x1b;
                                                          }
                                                          else {
                                                            iVar2 = _strncmp(param_1,"MU",2);
                                                            if (iVar2 == 0) {
                                                              bVar1 = param_2 == 0x1e;
                                                            }
                                                            else {
                                                              iVar2 = _strncmp(param_1,"MC",2);
                                                              if (iVar2 == 0) {
                                                                bVar1 = param_2 == 0x1b;
                                                              }
                                                              else {
                                                                iVar2 = _strncmp(param_1,"MD",2);
                                                                if (iVar2 == 0) {
                                                                  bVar1 = param_2 == 0x18;
                                                                }
                                                                else {
                                                                  iVar2 = _strncmp(param_1,"ME",2);
                                                                  if (iVar2 == 0) {
                                                                    bVar1 = param_2 == 0x16;
                                                                  }
                                                                  else {
                                                                    iVar2 = _strncmp(param_1,"NL",2)
                                                                    ;
                                                                    if (iVar2 == 0) {
                                                                      bVar1 = param_2 == 0x12;
                                                                    }
                                                                    else {
                                                                      iVar2 = _strncmp(param_1,"NO",
                                                                                       2);
                                                                      if (iVar2 == 0) {
                                                                        bVar1 = param_2 == 0xf;
                                                                      }
                                                                      else {
                                                                        iVar2 = _strncmp(param_1,
                                                  "PK",2);
                                                  if (iVar2 == 0) {
                                                    bVar1 = param_2 == 0x18;
                                                  }
                                                  else {
                                                    iVar2 = _strncmp(param_1,"PS",2);
                                                    if (iVar2 == 0) {
                                                      bVar1 = param_2 == 0x1d;
                                                    }
                                                    else {
                                                      iVar2 = _strncmp(param_1,"PL",2);
                                                      if (iVar2 == 0) {
                                                        bVar1 = param_2 == 0x1c;
                                                      }
                                                      else {
                                                        iVar2 = _strncmp(param_1,"PT",2);
                                                        if (iVar2 == 0) {
                                                          bVar1 = param_2 == 0x19;
                                                        }
                                                        else {
                                                          iVar2 = _strncmp(param_1,"RO",2);
                                                          if (iVar2 == 0) {
                                                            bVar1 = param_2 == 0x18;
                                                          }
                                                          else {
                                                            iVar2 = _strncmp(param_1,"SM",2);
                                                            if (iVar2 == 0) {
                                                              bVar1 = param_2 == 0x1b;
                                                            }
                                                            else {
                                                              iVar2 = _strncmp(param_1,"SA",2);
                                                              if (iVar2 == 0) {
                                                                bVar1 = param_2 == 0x18;
                                                              }
                                                              else {
                                                                iVar2 = _strncmp(param_1,"RS",2);
                                                                if (iVar2 == 0) {
                                                                  bVar1 = param_2 == 0x16;
                                                                }
                                                                else {
                                                                  iVar2 = _strncmp(param_1,"SK",2);
                                                                  if (iVar2 == 0) {
                                                                    bVar1 = param_2 == 0x18;
                                                                  }
                                                                  else {
                                                                    iVar2 = _strncmp(param_1,"SI",2)
                                                                    ;
                                                                    if (iVar2 == 0) {
                                                                      bVar1 = param_2 == 0x13;
                                                                    }
                                                                    else {
                                                                      iVar2 = _strncmp(param_1,"ES",
                                                                                       2);
                                                                      if (iVar2 == 0) {
                                                                        bVar1 = param_2 == 0x18;
                                                                      }
                                                                      else {
                                                                        iVar2 = _strncmp(param_1,
                                                  "SE",2);
                                                  if (iVar2 == 0) {
                                                    bVar1 = param_2 == 0x18;
                                                  }
                                                  else {
                                                    iVar2 = _strncmp(param_1,"CH",2);
                                                    if (iVar2 == 0) {
                                                      bVar1 = param_2 == 0x15;
                                                    }
                                                    else {
                                                      iVar2 = _strncmp(param_1,"TN",2);
                                                      if (iVar2 == 0) {
                                                        bVar1 = param_2 == 0x18;
                                                      }
                                                      else {
                                                        iVar2 = _strncmp(param_1,"TR",2);
                                                        if (iVar2 == 0) {
                                                          bVar1 = param_2 == 0x1a;
                                                        }
                                                        else {
                                                          iVar2 = _strncmp(param_1,"AE",2);
                                                          if (iVar2 == 0) {
                                                            bVar1 = param_2 == 0x17;
                                                          }
                                                          else {
                                                            iVar2 = _strncmp(param_1,"GB",2);
                                                            if (iVar2 == 0) {
                                                              bVar1 = param_2 == 0x16;
                                                            }
                                                            else {
                                                              iVar2 = _strncmp(param_1,"VG",2);
                                                              if (iVar2 == 0) {
                                                                bVar1 = param_2 == 0x18;
                                                              }
                                                              else {
                                                                bVar1 = false;
                                                              }
                                                            }
                                                          }
                                                        }
                                                      }
                                                    }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return bVar1;
}



int _strip(long param_1)

{
  undefined4 local_10;
  undefined4 local_c;
  
  local_c = -1;
  local_10 = 0;
  while (local_c = local_c + 1, *(char *)(param_1 + local_c) != '\0') {
    *(undefined *)(param_1 + (local_c - local_10)) = *(undefined *)(param_1 + local_c);
    local_10 = local_10 + (uint)(*(char *)(param_1 + local_c) < '!');
  }
  *(undefined *)(param_1 + (local_c - local_10)) = 0;
  return local_c - local_10;
}



int _mod97(long param_1,int param_2)

{
  int iVar1;
  int local_38;
  char local_28 [2];
  undefined6 uStack_26;
  undefined2 local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004010;
  local_28[0] = '0';
  local_28[1] = '0';
  uStack_26 = 0;
  local_20 = 0;
  for (local_38 = 1; local_38 <= (int)(param_2 / 7 + (uint)(param_2 % 7 != 0));
      local_38 = local_38 + 1) {
    ___strncpy_chk(&uStack_26,param_1 + (local_38 + -1) * 7,7,8);
    iVar1 = _atoi(local_28);
    iVar1 = iVar1 % 0x61;
    local_28[1] = (char)iVar1 + (char)(iVar1 / 10) * -10 + '0';
    local_28[0] = (char)(iVar1 / 10) + '0';
  }
  iVar1 = _atoi(local_28);
  if (*(long *)PTR____stack_chk_guard_100004010 == local_18) {
    return iVar1 % 0x61;
  }
                    // WARNING: Subroutine does not return
  ___stack_chk_fail();
}



uint _valid_iban(long param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined auStack_70 [12];
  uint local_64;
  ulong local_60;
  undefined8 local_58;
  ulong local_50;
  long local_48;
  undefined *local_40;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  long local_28;
  uint local_1c;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004010;
  local_34 = 0;
  local_28 = param_1;
  local_38 = _strip(param_1);
  local_2c = 0;
  do {
    if (local_38 <= local_2c) {
      iVar2 = _valid_cc(local_28,local_38);
      if (iVar2 == 0) {
        local_1c = 0;
      }
      else {
        local_60 = (long)local_38 + 0xfU & 0xfffffffffffffff0;
        (*(code *)PTR____chkstk_darwin_100004000)();
        puVar1 = auStack_70 + -local_60;
        local_58 = 0xffffffffffffffff;
        local_40 = puVar1;
        ___strcpy_chk(puVar1,local_28 + 4);
        ___strncpy_chk(local_40 + (long)local_38 + -4,local_28,4,local_58);
        local_50 = (long)(local_38 + local_34 + 1) + 0xfU & 0xfffffffffffffff0;
        (*(code *)PTR____chkstk_darwin_100004000)();
        local_48 = (long)puVar1 - local_50;
        *(undefined *)(local_48 + (local_38 + local_34)) = 0;
        local_30 = 0;
        for (local_2c = 0; local_2c < local_38; local_2c = local_2c + 1) {
          iVar2 = _isdigit((int)(char)local_40[local_2c]);
          if (iVar2 == 0) {
            *(char *)(local_48 + local_30) = (char)(((char)local_40[local_2c] + -0x37) / 10) + '0';
            local_30 = local_30 + 1;
            *(char *)(local_48 + local_30) =
                 (char)((char)local_40[local_2c] + -0x37) +
                 (char)(((char)local_40[local_2c] + -0x37) / 10) * -10 + '0';
          }
          else {
            *(undefined *)(local_48 + local_30) = local_40[local_2c];
          }
          local_30 = local_30 + 1;
        }
        iVar2 = _mod97(local_48,local_38 + local_34);
        local_1c = (uint)(iVar2 == 1);
      }
LAB_100003d70:
      local_64 = local_1c;
      if (*(long *)PTR____stack_chk_guard_100004010 == local_18) {
        return local_1c;
      }
                    // WARNING: Subroutine does not return
      ___stack_chk_fail();
    }
    iVar2 = _isdigit((int)*(char *)(local_28 + local_2c));
    if ((iVar2 == 0) && (iVar2 = _isupper((int)*(char *)(local_28 + local_2c)), iVar2 == 0)) {
      local_1c = 0;
      goto LAB_100003d70;
    }
    iVar2 = _isupper((int)*(char *)(local_28 + local_2c));
    local_34 = local_34 + (uint)(iVar2 != 0);
    local_2c = local_2c + 1;
  } while( true );
}



undefined8 entry(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *local_20;
  
  local_20 = param_2;
  while (local_20[1] != 0) {
    _valid_iban(local_20[1]);
    _printf("%s is %svalid.\n");
    local_20 = local_20 + 1;
  }
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003e68. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004008)();
  return;
}



void ___strcpy_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003e74. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____strcpy_chk_100004018)();
  return;
}



void ___strncpy_chk(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003e80. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____strncpy_chk_100004020)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _atoi(char *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e8c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__atoi_100004028)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _isdigit(int _c)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003e98. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__isdigit_100004030)(_c);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _isupper(int _c)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ea4. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__isupper_100004038)(_c);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003eb0. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004040)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _strncmp(char *param_1,char *param_2,size_t param_3)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ebc. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__strncmp_100004048)((int)param_1);
  return iVar1;
}


