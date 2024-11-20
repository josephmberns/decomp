#include "upc.h"



undefined _consume_sentinal(byte param_1,long param_2,long *param_3)

{
  if ((param_1 & 1) == 0) {
    if (((*(char *)(param_2 + *param_3) == '#') && (*(char *)(param_2 + *param_3 + 1) == ' ')) &&
       (*(char *)(param_2 + *param_3 + 2) == '#')) {
      *param_3 = *param_3 + 3;
      return 1;
    }
  }
  else if (((*(char *)(param_2 + *param_3) == ' ') && (*(char *)(param_2 + *param_3 + 1) == '#')) &&
          ((*(char *)(param_2 + *param_3 + 2) == ' ' &&
           ((*(char *)(param_2 + *param_3 + 3) == '#' && (*(char *)(param_2 + *param_3 + 4) == ' '))
           )))) {
    *param_3 = *param_3 + 5;
    return 1;
  }
  return 0;
}



int _consume_digit(byte param_1,long param_2,long *param_3)

{
  char cVar1;
  char cVar2;
  long lVar3;
  int local_2c;
  
  cVar1 = ' ';
  cVar2 = '#';
  if ((param_1 & 1) == 0) {
    cVar1 = '#';
    cVar2 = ' ';
  }
  lVar3 = *param_3;
  local_2c = -1;
  if (*(char *)(param_2 + lVar3) == cVar2) {
    if (*(char *)(param_2 + lVar3 + 1) == cVar2) {
      if (*(char *)(param_2 + lVar3 + 2) == cVar2) {
        if (*(char *)(param_2 + lVar3 + 3) == cVar1) {
          if (*(char *)(param_2 + lVar3 + 4) == cVar2) {
            if ((*(char *)(param_2 + lVar3 + 5) == cVar1) &&
               (*(char *)(param_2 + lVar3 + 6) == cVar1)) {
              local_2c = 9;
            }
          }
          else if (((*(char *)(param_2 + lVar3 + 4) == cVar1) &&
                   (*(char *)(param_2 + lVar3 + 5) == cVar2)) &&
                  (*(char *)(param_2 + lVar3 + 6) == cVar1)) {
            local_2c = 0;
          }
        }
      }
      else if (*(char *)(param_2 + lVar3 + 2) == cVar1) {
        if (*(char *)(param_2 + lVar3 + 3) == cVar2) {
          if (((*(char *)(param_2 + lVar3 + 4) == cVar2) &&
              (*(char *)(param_2 + lVar3 + 5) == cVar1)) &&
             (*(char *)(param_2 + lVar3 + 6) == cVar1)) {
            local_2c = 2;
          }
        }
        else if (((*(char *)(param_2 + lVar3 + 3) == cVar1) &&
                 (*(char *)(param_2 + lVar3 + 4) == cVar2)) &&
                ((*(char *)(param_2 + lVar3 + 5) == cVar2 &&
                 (*(char *)(param_2 + lVar3 + 6) == cVar1)))) {
          local_2c = 1;
        }
      }
    }
    else if (*(char *)(param_2 + lVar3 + 1) == cVar1) {
      if (*(char *)(param_2 + lVar3 + 2) == cVar2) {
        if (*(char *)(param_2 + lVar3 + 3) == cVar2) {
          if (((*(char *)(param_2 + lVar3 + 4) == cVar2) &&
              (*(char *)(param_2 + lVar3 + 5) == cVar1)) &&
             (*(char *)(param_2 + lVar3 + 6) == cVar1)) {
            local_2c = 4;
          }
        }
        else if ((((*(char *)(param_2 + lVar3 + 3) == cVar1) &&
                  (*(char *)(param_2 + lVar3 + 4) == cVar1)) &&
                 (*(char *)(param_2 + lVar3 + 5) == cVar1)) &&
                (*(char *)(param_2 + lVar3 + 6) == cVar1)) {
          local_2c = 6;
        }
      }
      else if (*(char *)(param_2 + lVar3 + 2) == cVar1) {
        if (*(char *)(param_2 + lVar3 + 3) == cVar2) {
          if (*(char *)(param_2 + lVar3 + 4) == cVar2) {
            if ((*(char *)(param_2 + lVar3 + 5) == cVar2) &&
               (*(char *)(param_2 + lVar3 + 6) == cVar1)) {
              local_2c = 5;
            }
          }
          else if (((*(char *)(param_2 + lVar3 + 4) == cVar1) &&
                   (*(char *)(param_2 + lVar3 + 5) == cVar1)) &&
                  (*(char *)(param_2 + lVar3 + 6) == cVar1)) {
            local_2c = 8;
          }
        }
        else if (*(char *)(param_2 + lVar3 + 3) == cVar1) {
          if (*(char *)(param_2 + lVar3 + 4) == cVar2) {
            if ((*(char *)(param_2 + lVar3 + 5) == cVar1) &&
               (*(char *)(param_2 + lVar3 + 6) == cVar1)) {
              local_2c = 7;
            }
          }
          else if (((*(char *)(param_2 + lVar3 + 4) == cVar1) &&
                   (*(char *)(param_2 + lVar3 + 5) == cVar2)) &&
                  (*(char *)(param_2 + lVar3 + 6) == cVar1)) {
            local_2c = 3;
          }
        }
      }
    }
  }
  if (-1 < local_2c) {
    *param_3 = *param_3 + 7;
  }
  return local_2c;
}



bool _decode_upc(long param_1,char *param_2)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  ulong uVar14;
  long local_38;
  undefined4 local_30;
  undefined4 local_2c;
  char *local_28;
  long local_20;
  bool local_11;
  
  local_2c = 1;
  local_30 = 3;
  local_38 = 0;
  while( true ) {
    if (*(char *)(param_1 + local_38) == '#') {
      local_28 = param_2;
      local_20 = param_1;
      uVar14 = _consume_sentinal(0,param_1,&local_38);
      if ((uVar14 & 1) == 0) {
        local_11 = false;
      }
      else {
        iVar2 = _consume_digit(0,local_20,&local_38);
        if (iVar2 < 0) {
          local_11 = false;
        }
        else {
          pcVar1 = local_28 + 1;
          *local_28 = (char)iVar2 + '0';
          local_28 = local_28 + 2;
          *pcVar1 = ' ';
          iVar3 = _consume_digit(0,local_20,&local_38);
          if (iVar3 < 0) {
            local_11 = false;
          }
          else {
            pcVar1 = local_28 + 1;
            *local_28 = (char)iVar3 + '0';
            local_28 = local_28 + 2;
            *pcVar1 = ' ';
            iVar4 = _consume_digit(0,local_20,&local_38);
            if (iVar4 < 0) {
              local_11 = false;
            }
            else {
              pcVar1 = local_28 + 1;
              *local_28 = (char)iVar4 + '0';
              local_28 = local_28 + 2;
              *pcVar1 = ' ';
              iVar5 = _consume_digit(0,local_20,&local_38);
              if (iVar5 < 0) {
                local_11 = false;
              }
              else {
                pcVar1 = local_28 + 1;
                *local_28 = (char)iVar5 + '0';
                local_28 = local_28 + 2;
                *pcVar1 = ' ';
                iVar6 = _consume_digit(0,local_20,&local_38);
                if (iVar6 < 0) {
                  local_11 = false;
                }
                else {
                  pcVar1 = local_28 + 1;
                  *local_28 = (char)iVar6 + '0';
                  local_28 = local_28 + 2;
                  *pcVar1 = ' ';
                  iVar7 = _consume_digit(0,local_20,&local_38);
                  if (iVar7 < 0) {
                    local_11 = false;
                  }
                  else {
                    pcVar1 = local_28 + 1;
                    *local_28 = (char)iVar7 + '0';
                    local_28 = local_28 + 2;
                    *pcVar1 = ' ';
                    uVar14 = _consume_sentinal(1,local_20,&local_38);
                    if ((uVar14 & 1) == 0) {
                      local_11 = false;
                    }
                    else {
                      iVar8 = _consume_digit(1,local_20,&local_38);
                      if (iVar8 < 0) {
                        local_11 = false;
                      }
                      else {
                        pcVar1 = local_28 + 1;
                        *local_28 = (char)iVar8 + '0';
                        local_28 = local_28 + 2;
                        *pcVar1 = ' ';
                        iVar9 = _consume_digit(1,local_20,&local_38);
                        if (iVar9 < 0) {
                          local_11 = false;
                        }
                        else {
                          pcVar1 = local_28 + 1;
                          *local_28 = (char)iVar9 + '0';
                          local_28 = local_28 + 2;
                          *pcVar1 = ' ';
                          iVar10 = _consume_digit(1,local_20,&local_38);
                          if (iVar10 < 0) {
                            local_11 = false;
                          }
                          else {
                            pcVar1 = local_28 + 1;
                            *local_28 = (char)iVar10 + '0';
                            local_28 = local_28 + 2;
                            *pcVar1 = ' ';
                            iVar11 = _consume_digit(1,local_20,&local_38);
                            if (iVar11 < 0) {
                              local_11 = false;
                            }
                            else {
                              pcVar1 = local_28 + 1;
                              *local_28 = (char)iVar11 + '0';
                              local_28 = local_28 + 2;
                              *pcVar1 = ' ';
                              iVar12 = _consume_digit(1,local_20,&local_38);
                              if (iVar12 < 0) {
                                local_11 = false;
                              }
                              else {
                                pcVar1 = local_28 + 1;
                                *local_28 = (char)iVar12 + '0';
                                local_28 = local_28 + 2;
                                *pcVar1 = ' ';
                                iVar13 = _consume_digit(1,local_20,&local_38);
                                if (iVar13 < 0) {
                                  local_11 = false;
                                }
                                else {
                                  pcVar1 = local_28 + 1;
                                  *local_28 = (char)iVar13 + '0';
                                  local_28 = local_28 + 2;
                                  *pcVar1 = ' ';
                                  uVar14 = _consume_sentinal(0,local_20,&local_38);
                                  if ((uVar14 & 1) == 0) {
                                    local_11 = false;
                                  }
                                  else {
                                    local_11 = (iVar2 * 3 + iVar3 + iVar4 * 3 + iVar5 + iVar6 * 3 +
                                                iVar7 + iVar8 * 3 + iVar9 + iVar10 * 3 + iVar11 +
                                                iVar12 * 3 + iVar13) % 10 == 0;
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
      return local_11;
    }
    if (*(char *)(param_1 + local_38) == '\0') break;
    local_38 = local_38 + 1;
  }
  return false;
}



void _test(char *param_1)

{
  ulong uVar1;
  size_t sVar2;
  void *pvVar3;
  ulong local_50;
  undefined auStack_30 [22];
  undefined local_1a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100004008;
  uVar1 = _decode_upc(param_1,auStack_30);
  if ((uVar1 & 1) == 0) {
    sVar2 = _strlen(param_1);
    pvVar3 = _malloc(sVar2 + 1);
    if (pvVar3 == (void *)0x0) {
                    // WARNING: Subroutine does not return
      _exit(1);
    }
    for (local_50 = 0; local_50 < sVar2; local_50 = local_50 + 1) {
      *(char *)((long)pvVar3 + local_50) = param_1[(sVar2 - local_50) + -1];
    }
    *(undefined *)((long)pvVar3 + sVar2) = 0;
    uVar1 = _decode_upc(pvVar3,auStack_30);
    if ((uVar1 & 1) == 0) {
      _printf("Invalid digit(s)\n");
    }
    else {
      local_1a = 0;
      _printf("%sValid (upside down)\n");
    }
    _free(pvVar3);
  }
  else {
    local_1a = 0;
    _printf("%sValid\n");
  }
  if (*(long *)PTR____stack_chk_guard_100004008 != local_18) {
                    // WARNING: Subroutine does not return
    ___stack_chk_fail();
  }
  return;
}



undefined4 entry(void)

{
  _printf("%2d: ");
  _test(
       "         # #   # ##  #  ## #   ## ### ## ### ## #### # # # ## ##  #   #  ##  ## ###  # ##  ## ### #  # #       "
       );
  _printf("%2d: ");
  _test(
       "        # # #   ##   ## # #### #   # ## #   ## #   ## # # # ###  # ###  ##  ## ###  # #  ### ###  # # #         "
       );
  _printf("%2d: ");
  _test(
       "         # #    # # #  ###  #   #    # #  #   #    # # # # ## #   ## #   ## #   ##   # # #### ### ## # #         "
       );
  _printf("%2d: ");
  _test(
       "       # # ##  ## ##  ##   #  #   #  # ###  # ##  ## # # #   ## ##  #  ### ## ## #   # #### ## #   # #        "
       );
  _printf("%2d: ");
  _test(
       "         # # ### ## #   ## ## ###  ##  # ##   #   # ## # # ### #  ## ##  #    # ### #  ## ##  #      # #          "
       );
  _printf("%2d: ");
  _test(
       "          # #  #   # ##  ##  #   #   #  # ##  ##  #   # # # # #### #  ##  # #### #### # #  ##  # #### # #         "
       );
  _printf("%2d: ");
  _test(
       "         # #  #  ##  ##  # #   ## ##   # ### ## ##   # # # #  #   #   #  #  ### # #    ###  # #  #   # #        "
       );
  _printf("%2d: ");
  _test(
       "        # # #    # ##  ##   #  # ##  ##  ### #   #  # # # ### ## ## ### ## ### ### ## #  ##  ### ## # #         "
       );
  _printf("%2d: ");
  _test(
       "         # # ### ##   ## # # #### #   ## # #### # #### # # #   #  # ###  #    # ###  # #    # ###  # # #       "
       );
  _printf("%2d: ");
  _test(
       "        # # # #### ##   # #### # #   ## ## ### #### # # # #  ### # ###  ###  # # ###  #    # #  ### # #         "
       );
  return 0;
}



void ___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000100003ab4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR____stack_chk_fail_100004000)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _exit(int param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003ac0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__exit_100004010)(param_1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void _free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000100003acc. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)PTR__free_100004018)();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ad8. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)PTR__malloc_100004020)();
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int _printf(char *param_1,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003ae4. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)PTR__printf_100004028)((int)param_1);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t _strlen(char *param_1)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000100003af0. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)PTR__strlen_100004030)();
  return sVar1;
}


