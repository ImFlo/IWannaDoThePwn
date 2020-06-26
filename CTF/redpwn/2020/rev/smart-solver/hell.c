
undefined8 main(void)

{
  char cVar1;
  int iVar2;
  size_t sVar3;
  ulong uVar4;
  long in_FS_OFFSET;
  int local_12c;
  char flag [76];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  puts("Welcome to SMarT solver!\nThe #1 solution for your flag checking needs.\n");
  printf("Enter a flag: ");
  memset(flag,0,0x100);
  fgets(flag,0x100,stdin);
  sVar3 = strlen(flag);
  if (*(char *)((long)&local_12c + sVar3 + 3) == '\n') {
    sVar3 = strlen(flag);
    *(undefined *)((long)&local_12c + sVar3 + 3) = 0;
  }
  sVar3 = strlen(flag);
  if ((((((((sVar3 < 0x49) || ((byte)flag[1] <= (byte)flag[0])) || ((byte)flag[0] <= (byte)flag[2]))
         || (((byte)flag[3] <= (byte)flag[0] || ((byte)flag[4] <= (byte)flag[0])))) ||
        (((((((byte)flag[5] <= (byte)flag[0] ||
             (((byte)flag[6] <= (byte)flag[0] || ((byte)flag[0] <= (byte)flag[7])))) ||
            ((byte)flag[8] <= (byte)flag[0])) ||
           ((((((byte)flag[9] <= (byte)flag[0] || ((byte)flag[10] <= (byte)flag[0])) ||
              ((byte)flag[0] <= (byte)flag[11])) ||
             ((((byte)flag[12] <= (byte)flag[0] || ((byte)flag[0] <= (byte)flag[13])) ||
              (((byte)flag[14] <= (byte)flag[0] ||
               (((byte)flag[15] <= (byte)flag[0] || ((byte)flag[16] <= (byte)flag[0])))))))) ||
            (((byte)flag[17] <= (byte)flag[0] ||
             ((((byte)flag[19] <= (byte)flag[0] || ((byte)flag[20] <= (byte)flag[0])) ||
              ((byte)flag[21] <= (byte)flag[0])))))))) ||
          (((((byte)flag[22] <= (byte)flag[0] || ((byte)flag[23] <= (byte)flag[0])) ||
            (((byte)flag[24] <= (byte)flag[0] ||
             (((byte)flag[0] <= (byte)flag[25] || ((byte)flag[0] <= (byte)flag[26])))))) ||
           ((byte)flag[27] <= (byte)flag[0])))) ||
         ((((((((byte)flag[28] <= (byte)flag[0] || ((byte)flag[0] <= (byte)flag[29])) ||
              ((byte)flag[30] <= (byte)flag[0])) ||
             (((byte)flag[31] <= (byte)flag[0] || ((byte)flag[32] <= (byte)flag[0])))) ||
            (((byte)flag[0] <= (byte)flag[33] ||
             (((byte)flag[34] <= (byte)flag[0] || ((byte)flag[0] <= (byte)flag[35])))))) ||
           ((((byte)flag[36] <= (byte)flag[0] ||
             ((((((byte)flag[37] <= (byte)flag[0] || ((byte)flag[0] <= (byte)flag[38])) ||
                ((byte)flag[39] <= (byte)flag[0])) ||
               ((((byte)flag[40] <= (byte)flag[0] || ((byte)flag[0] <= (byte)flag[41])) ||
                (((byte)flag[42] <= (byte)flag[0] ||
                 (((byte)flag[0] <= (byte)flag[43] || ((byte)flag[44] <= (byte)flag[0])))))))) ||
              ((byte)flag[0] <= (byte)flag[45])))) ||
            (((((byte)flag[0] <= (byte)flag[46] || ((byte)flag[47] <= (byte)flag[0])) ||
              ((byte)flag[48] <= (byte)flag[0])) ||
             (((byte)flag[0] <= (byte)flag[49] || ((byte)flag[0] <= (byte)flag[50])))))))) ||
          ((((byte)flag[51] <= (byte)flag[0] ||
            (((byte)flag[52] <= (byte)flag[0] || ((byte)flag[53] <= (byte)flag[0])))) ||
           ((byte)flag[54] <= (byte)flag[0])))))))) ||
       (((((((((((byte)flag[55] <= (byte)flag[0] || ((byte)flag[0] <= (byte)flag[56])) ||
               ((byte)flag[57] <= (byte)flag[0])) ||
              (((byte)flag[58] <= (byte)flag[0] || ((byte)flag[59] <= (byte)flag[0])))) ||
             ((byte)flag[60] <= (byte)flag[0])) ||
            ((((byte)flag[0] <= (byte)flag[61] || ((byte)flag[62] <= (byte)flag[0])) ||
             (((byte)flag[0] <= (byte)flag[63] ||
              ((((byte)flag[0] <= (byte)flag[64] || ((byte)flag[65] <= (byte)flag[0])) ||
               ((byte)flag[0] <= (byte)flag[66])))))))) ||
           ((((byte)flag[67] <= (byte)flag[0] || ((byte)flag[68] <= (byte)flag[0])) ||
            ((byte)flag[69] <= (byte)flag[0])))) ||
          ((((((((byte)flag[70] <= (byte)flag[0] || ((byte)flag[71] <= (byte)flag[0])) ||
               (((byte)flag[72] <= (byte)flag[0] ||
                ((((byte)flag[1] <= (byte)flag[0] || ((byte)flag[1] <= (byte)flag[2])) ||
                 ((byte)flag[1] <= (byte)flag[3])))))) ||
              (((byte)flag[4] <= (byte)flag[1] || ((byte)flag[5] <= (byte)flag[1])))) ||
             ((((byte)flag[1] <= (byte)flag[6] ||
               ((((byte)flag[1] <= (byte)flag[7] || ((byte)flag[8] <= (byte)flag[1])) ||
                (((byte)flag[9] <= (byte)flag[1] ||
                 (((((byte)flag[1] <= (byte)flag[10] || ((byte)flag[1] <= (byte)flag[11])) ||
                   ((byte)flag[1] <= (byte)flag[12])) ||
                  (((byte)flag[1] <= (byte)flag[13] || ((byte)flag[14] <= (byte)flag[1])))))))))) ||
              (((byte)flag[15] <= (byte)flag[1] ||
               (((byte)flag[16] <= (byte)flag[1] || ((byte)flag[17] <= (byte)flag[1])))))))) ||
            (((((byte)flag[1] <= (byte)flag[18] ||
               ((((byte)flag[19] <= (byte)flag[1] || ((byte)flag[20] <= (byte)flag[1])) ||
                ((byte)flag[1] <= (byte)flag[21])))) ||
              (((((byte)flag[22] <= (byte)flag[1] || ((byte)flag[23] <= (byte)flag[1])) ||
                ((byte)flag[24] <= (byte)flag[1])) ||
               (((byte)flag[1] <= (byte)flag[25] || ((byte)flag[1] <= (byte)flag[26])))))) ||
             ((((((((byte)flag[27] <= (byte)flag[1] ||
                   ((((byte)flag[28] <= (byte)flag[1] || ((byte)flag[1] <= (byte)flag[29])) ||
                    ((byte)flag[30] <= (byte)flag[1])))) ||
                  ((((byte)flag[31] <= (byte)flag[1] || ((byte)flag[1] <= (byte)flag[32])) ||
                   (((byte)flag[1] <= (byte)flag[33] ||
                    (((((byte)flag[1] <= (byte)flag[35] || ((byte)flag[36] <= (byte)flag[1])) ||
                      (((byte)flag[37] <= (byte)flag[1] ||
                       (((((byte)flag[1] <= (byte)flag[38] || ((byte)flag[39] <= (byte)flag[1])) ||
                         ((byte)flag[1] <= (byte)flag[40])) ||
                        (((byte)flag[1] <= (byte)flag[41] || ((byte)flag[42] <= (byte)flag[1])))))))
                      ) || ((byte)flag[1] <= (byte)flag[43])))))))) ||
                 ((((byte)flag[1] <= (byte)flag[45] || ((byte)flag[1] <= (byte)flag[46])) ||
                  (((((byte)flag[47] <= (byte)flag[1] ||
                     ((((byte)flag[48] <= (byte)flag[1] || ((byte)flag[1] <= (byte)flag[49])) ||
                      ((byte)flag[1] <= (byte)flag[50])))) ||
                    ((((byte)flag[1] <= (byte)flag[51] || ((byte)flag[52] <= (byte)flag[1])) ||
                     ((byte)flag[53] <= (byte)flag[1])))) ||
                   (((byte)flag[54] <= (byte)flag[1] || ((byte)flag[55] <= (byte)flag[1])))))))) ||
                (((byte)flag[1] <= (byte)flag[56] ||
                 ((((byte)flag[57] <= (byte)flag[1] || ((byte)flag[58] <= (byte)flag[1])) ||
                  ((byte)flag[59] <= (byte)flag[1])))))) ||
               ((((((byte)flag[60] <= (byte)flag[1] || ((byte)flag[1] <= (byte)flag[61])) ||
                  ((byte)flag[62] <= (byte)flag[1])) ||
                 ((((byte)flag[1] <= (byte)flag[63] || ((byte)flag[1] <= (byte)flag[64])) ||
                  (((byte)flag[65] <= (byte)flag[1] ||
                   (((((((byte)flag[1] <= (byte)flag[66] || ((byte)flag[68] <= (byte)flag[1])) ||
                       ((byte)flag[69] <= (byte)flag[1])) ||
                      (((byte)flag[1] <= (byte)flag[70] || ((byte)flag[71] <= (byte)flag[1])))) ||
                     ((byte)flag[72] <= (byte)flag[1])) ||
                    (((byte)flag[0] <= (byte)flag[2] || ((byte)flag[1] <= (byte)flag[2])))))))))) ||
                (((((byte)flag[3] <= (byte)flag[2] ||
                   (((((byte)flag[4] <= (byte)flag[2] || ((byte)flag[5] <= (byte)flag[2])) ||
                     ((byte)flag[6] <= (byte)flag[2])) ||
                    (((byte)flag[7] <= (byte)flag[2] || ((byte)flag[8] <= (byte)flag[2])))))) ||
                  (((((byte)flag[9] <= (byte)flag[2] ||
                     (((byte)flag[10] <= (byte)flag[2] || ((byte)flag[11] <= (byte)flag[2])))) ||
                    ((byte)flag[12] <= (byte)flag[2])) ||
                   ((((byte)flag[13] <= (byte)flag[2] || ((byte)flag[14] <= (byte)flag[2])) ||
                    ((byte)flag[15] <= (byte)flag[2])))))) ||
                 (((((byte)flag[16] <= (byte)flag[2] || ((byte)flag[17] <= (byte)flag[2])) ||
                   (((byte)flag[18] <= (byte)flag[2] ||
                    (((byte)flag[19] <= (byte)flag[2] || ((byte)flag[20] <= (byte)flag[2])))))) ||
                  ((byte)flag[21] <= (byte)flag[2])))))))) ||
              ((((((byte)flag[22] <= (byte)flag[2] || ((byte)flag[23] <= (byte)flag[2])) ||
                 ((byte)flag[24] <= (byte)flag[2])) ||
                (((byte)flag[25] <= (byte)flag[2] || ((byte)flag[26] <= (byte)flag[2])))) ||
               (((byte)flag[27] <= (byte)flag[2] ||
                (((byte)flag[28] <= (byte)flag[2] || ((byte)flag[29] <= (byte)flag[2])))))))))))) ||
           (((byte)flag[30] <= (byte)flag[2] ||
            ((((byte)flag[31] <= (byte)flag[2] || ((byte)flag[32] <= (byte)flag[2])) ||
             ((byte)flag[33] <= (byte)flag[2])))))))) ||
         ((((((byte)flag[34] <= (byte)flag[2] || ((byte)flag[36] <= (byte)flag[2])) ||
            (((((((((((byte)flag[37] <= (byte)flag[2] ||
                     (((byte)flag[38] <= (byte)flag[2] || ((byte)flag[39] <= (byte)flag[2])))) ||
                    ((byte)flag[40] <= (byte)flag[2])) ||
                   (((((byte)flag[42] <= (byte)flag[2] || ((byte)flag[43] <= (byte)flag[2])) ||
                     ((byte)flag[44] <= (byte)flag[2])) ||
                    ((((byte)flag[45] <= (byte)flag[2] || ((byte)flag[47] <= (byte)flag[2])) ||
                     (((byte)flag[48] <= (byte)flag[2] ||
                      (((byte)flag[49] <= (byte)flag[2] || ((byte)flag[50] <= (byte)flag[2])))))))))
                   ) || (((((byte)flag[51] <= (byte)flag[2] ||
                           (((((byte)flag[52] <= (byte)flag[2] || ((byte)flag[53] <= (byte)flag[2]))
                             || ((byte)flag[54] <= (byte)flag[2])) ||
                            (((byte)flag[55] <= (byte)flag[2] || ((byte)flag[57] <= (byte)flag[2])))
                            ))) || (((byte)flag[58] <= (byte)flag[2] ||
                                    (((byte)flag[59] <= (byte)flag[2] ||
                                     ((byte)flag[60] <= (byte)flag[2])))))) ||
                         ((byte)flag[62] <= (byte)flag[2])))) ||
                 ((((byte)flag[63] <= (byte)flag[2] || ((byte)flag[65] <= (byte)flag[2])) ||
                  ((byte)flag[67] <= (byte)flag[2])))) ||
                (((((byte)flag[68] <= (byte)flag[2] || ((byte)flag[69] <= (byte)flag[2])) ||
                  ((((byte)flag[70] <= (byte)flag[2] ||
                    (((byte)flag[71] <= (byte)flag[2] || ((byte)flag[72] <= (byte)flag[2])))) ||
                   ((byte)flag[3] <= (byte)flag[0])))) ||
                 ((((((((((byte)flag[1] <= (byte)flag[3] || ((byte)flag[3] <= (byte)flag[2])) ||
                        ((byte)flag[4] <= (byte)flag[3])) ||
                       ((((byte)flag[5] <= (byte)flag[3] || ((byte)flag[6] <= (byte)flag[3])) ||
                        (((byte)flag[3] <= (byte)flag[7] ||
                         (((byte)flag[8] <= (byte)flag[3] || ((byte)flag[9] <= (byte)flag[3]))))))))
                      || ((byte)flag[10] <= (byte)flag[3])) ||
                     ((((((byte)flag[3] <= (byte)flag[11] || ((byte)flag[12] <= (byte)flag[3])) ||
                        ((byte)flag[3] <= (byte)flag[13])) ||
                       (((byte)flag[14] <= (byte)flag[3] || ((byte)flag[15] <= (byte)flag[3])))) ||
                      ((byte)flag[16] <= (byte)flag[3])))) ||
                    (((byte)flag[17] <= (byte)flag[3] || ((byte)flag[3] <= (byte)flag[18])))) ||
                   (((byte)flag[19] <= (byte)flag[3] ||
                    ((((byte)flag[20] <= (byte)flag[3] || ((byte)flag[21] <= (byte)flag[3])) ||
                     ((byte)flag[22] <= (byte)flag[3])))))) ||
                  ((((((byte)flag[23] <= (byte)flag[3] || ((byte)flag[24] <= (byte)flag[3])) ||
                     ((byte)flag[3] <= (byte)flag[25])) ||
                    (((byte)flag[3] <= (byte)flag[26] || ((byte)flag[27] <= (byte)flag[3])))) ||
                   (((byte)flag[28] <= (byte)flag[3] ||
                    ((((byte)flag[3] <= (byte)flag[29] || ((byte)flag[30] <= (byte)flag[3])) ||
                     ((byte)flag[31] <= (byte)flag[3])))))))))))) ||
               ((((byte)flag[32] <= (byte)flag[3] || ((byte)flag[3] <= (byte)flag[33])) ||
                (((byte)flag[34] <= (byte)flag[3] ||
                 ((((byte)flag[3] <= (byte)flag[35] || ((byte)flag[36] <= (byte)flag[3])) ||
                  (((byte)flag[37] <= (byte)flag[3] ||
                   (((((byte)flag[3] <= (byte)flag[38] || ((byte)flag[39] <= (byte)flag[3])) ||
                     ((byte)flag[3] <= (byte)flag[41])) ||
                    (((byte)flag[42] <= (byte)flag[3] || ((byte)flag[3] <= (byte)flag[43])))))))))))
                ))) || (((byte)flag[44] <= (byte)flag[3] ||
                        (((byte)flag[3] <= (byte)flag[45] || ((byte)flag[3] <= (byte)flag[46]))))))
             || ((((((byte)flag[47] <= (byte)flag[3] ||
                    ((((byte)flag[48] <= (byte)flag[3] || ((byte)flag[3] <= (byte)flag[49])) ||
                     ((byte)flag[3] <= (byte)flag[50])))) ||
                   ((((byte)flag[51] <= (byte)flag[3] || ((byte)flag[52] <= (byte)flag[3])) ||
                    ((byte)flag[53] <= (byte)flag[3])))) ||
                  (((byte)flag[54] <= (byte)flag[3] || ((byte)flag[55] <= (byte)flag[3])))) ||
                 (((byte)flag[3] <= (byte)flag[56] ||
                  ((((byte)flag[57] <= (byte)flag[3] || ((byte)flag[58] <= (byte)flag[3])) ||
                   ((byte)flag[59] <= (byte)flag[3])))))))))) ||
           ((((((((byte)flag[60] <= (byte)flag[3] || ((byte)flag[3] <= (byte)flag[61])) ||
                (((byte)flag[62] <= (byte)flag[3] ||
                 ((((byte)flag[3] <= (byte)flag[63] || ((byte)flag[3] <= (byte)flag[64])) ||
                  (((byte)flag[65] <= (byte)flag[3] ||
                   (((((byte)flag[3] <= (byte)flag[66] || ((byte)flag[67] <= (byte)flag[3])) ||
                     ((byte)flag[68] <= (byte)flag[3])) ||
                    (((byte)flag[69] <= (byte)flag[3] || ((byte)flag[70] <= (byte)flag[3])))))))))))
                ) || ((byte)flag[71] <= (byte)flag[3])) ||
              (((byte)flag[72] <= (byte)flag[3] || ((byte)flag[4] <= (byte)flag[0])))) ||
             (((((((byte)flag[4] <= (byte)flag[1] ||
                  ((((byte)flag[4] <= (byte)flag[2] || ((byte)flag[4] <= (byte)flag[3])) ||
                   ((byte)flag[4] <= (byte)flag[5])))) ||
                 ((((byte)flag[4] <= (byte)flag[6] || ((byte)flag[4] <= (byte)flag[7])) ||
                  ((byte)flag[4] <= (byte)flag[8])))) ||
                ((((byte)flag[4] <= (byte)flag[9] || ((byte)flag[4] <= (byte)flag[10])) ||
                 (((byte)flag[4] <= (byte)flag[11] ||
                  ((((byte)flag[4] <= (byte)flag[12] || ((byte)flag[4] <= (byte)flag[13])) ||
                   ((byte)flag[4] <= (byte)flag[14])))))))) ||
               (((byte)flag[4] <= (byte)flag[15] || ((byte)flag[4] <= (byte)flag[16])))) ||
              ((((byte)flag[4] <= (byte)flag[17] ||
                (((((byte)flag[4] <= (byte)flag[18] || ((byte)flag[4] <= (byte)flag[19])) ||
                  (((byte)flag[4] <= (byte)flag[20] ||
                   ((((((byte)flag[4] <= (byte)flag[21] || ((byte)flag[4] <= (byte)flag[22])) ||
                      ((byte)flag[4] <= (byte)flag[23])) ||
                     (((byte)flag[4] <= (byte)flag[24] || ((byte)flag[4] <= (byte)flag[25])))) ||
                    ((byte)flag[4] <= (byte)flag[26])))))) ||
                 (((byte)flag[4] <= (byte)flag[27] || ((byte)flag[4] <= (byte)flag[28])))))) ||
               ((byte)flag[4] <= (byte)flag[29])))))) ||
            ((((((((byte)flag[4] <= (byte)flag[30] || ((byte)flag[4] <= (byte)flag[31])) ||
                 ((byte)flag[4] <= (byte)flag[32])) ||
                ((((byte)flag[4] <= (byte)flag[33] || ((byte)flag[4] <= (byte)flag[34])) ||
                 (((byte)flag[4] <= (byte)flag[35] ||
                  (((byte)flag[4] <= (byte)flag[36] || ((byte)flag[4] <= (byte)flag[37])))))))) ||
               (((byte)flag[4] <= (byte)flag[38] ||
                (((((byte)flag[4] <= (byte)flag[39] || ((byte)flag[4] <= (byte)flag[40])) ||
                  ((byte)flag[4] <= (byte)flag[41])) ||
                 (((byte)flag[4] <= (byte)flag[42] || ((byte)flag[4] <= (byte)flag[43])))))))) ||
              ((((((byte)flag[4] <= (byte)flag[44] ||
                  (((byte)flag[4] <= (byte)flag[45] || ((byte)flag[4] <= (byte)flag[46])))) ||
                 ((byte)flag[4] <= (byte)flag[47])) ||
                (((((((byte)flag[4] <= (byte)flag[48] || ((byte)flag[4] <= (byte)flag[49])) ||
                    ((byte)flag[4] <= (byte)flag[50])) ||
                   (((byte)flag[4] <= (byte)flag[51] || ((byte)flag[4] <= (byte)flag[52])))) ||
                  (((byte)flag[4] <= (byte)flag[53] ||
                   (((byte)flag[4] <= (byte)flag[54] || ((byte)flag[4] <= (byte)flag[55])))))) ||
                 ((byte)flag[4] <= (byte)flag[56])))) ||
               ((((byte)flag[4] <= (byte)flag[57] || ((byte)flag[4] <= (byte)flag[58])) ||
                ((byte)flag[4] <= (byte)flag[59])))))) ||
             ((((((byte)flag[4] <= (byte)flag[60] || ((byte)flag[4] <= (byte)flag[61])) ||
                (((byte)flag[4] <= (byte)flag[62] ||
                 (((byte)flag[4] <= (byte)flag[63] || ((byte)flag[4] <= (byte)flag[64])))))) ||
               (((byte)flag[4] <= (byte)flag[65] ||
                ((((byte)flag[4] <= (byte)flag[66] || ((byte)flag[4] <= (byte)flag[67])) ||
                 ((byte)flag[4] <= (byte)flag[68])))))) ||
              ((((byte)flag[4] <= (byte)flag[69] || ((byte)flag[4] <= (byte)flag[70])) ||
               (((byte)flag[4] <= (byte)flag[71] ||
                (((byte)flag[72] <= (byte)flag[4] || ((byte)flag[5] <= (byte)flag[0]))))))))))))))
          || ((((((byte)flag[5] <= (byte)flag[1] ||
                 (((((byte)flag[5] <= (byte)flag[2] || ((byte)flag[5] <= (byte)flag[3])) ||
                   ((byte)flag[4] <= (byte)flag[5])) ||
                  (((byte)flag[5] <= (byte)flag[6] || ((byte)flag[5] <= (byte)flag[7])))))) ||
                ((((byte)flag[5] <= (byte)flag[8] ||
                  (((byte)flag[9] <= (byte)flag[5] || ((byte)flag[5] <= (byte)flag[10])))) ||
                 (((byte)flag[5] <= (byte)flag[11] ||
                  (((((byte)flag[5] <= (byte)flag[12] || ((byte)flag[5] <= (byte)flag[13])) ||
                    ((byte)flag[5] <= (byte)flag[14])) ||
                   ((((byte)flag[5] <= (byte)flag[15] || ((byte)flag[16] <= (byte)flag[5])) ||
                    (((byte)flag[5] <= (byte)flag[17] ||
                     (((byte)flag[5] <= (byte)flag[18] || ((byte)flag[5] <= (byte)flag[19]))))))))))
                 )))) || ((((byte)flag[20] <= (byte)flag[5] ||
                           (((((((byte)flag[5] <= (byte)flag[21] ||
                                ((byte)flag[22] <= (byte)flag[5])) ||
                               ((byte)flag[5] <= (byte)flag[23])) ||
                              (((byte)flag[5] <= (byte)flag[24] || ((byte)flag[5] <= (byte)flag[25])
                               ))) || (((((((byte)flag[5] <= (byte)flag[26] ||
                                           (((byte)flag[5] <= (byte)flag[27] ||
                                            ((byte)flag[28] <= (byte)flag[5])))) ||
                                          ((byte)flag[5] <= (byte)flag[29])) ||
                                         (((((((byte)flag[5] <= (byte)flag[30] ||
                                              ((byte)flag[5] <= (byte)flag[32])) ||
                                             ((byte)flag[5] <= (byte)flag[33])) ||
                                            (((byte)flag[5] <= (byte)flag[34] ||
                                             ((byte)flag[5] <= (byte)flag[35])))) ||
                                           ((byte)flag[36] <= (byte)flag[5])) ||
                                          (((byte)flag[37] <= (byte)flag[5] ||
                                           ((byte)flag[5] <= (byte)flag[38])))))) ||
                                        (((byte)flag[5] <= (byte)flag[39] ||
                                         ((((byte)flag[5] <= (byte)flag[40] ||
                                           ((byte)flag[5] <= (byte)flag[41])) ||
                                          ((byte)flag[5] <= (byte)flag[42])))))) ||
                                       (((((byte)flag[5] <= (byte)flag[43] ||
                                          ((byte)flag[5] <= (byte)flag[44])) ||
                                         ((byte)flag[5] <= (byte)flag[45])) ||
                                        (((byte)flag[5] <= (byte)flag[46] ||
                                         ((byte)flag[5] <= (byte)flag[47])))))))) ||
                            (((byte)flag[5] <= (byte)flag[48] ||
                             ((((byte)flag[5] <= (byte)flag[49] || ((byte)flag[5] <= (byte)flag[50])
                               ) || ((byte)flag[5] <= (byte)flag[51])))))))) ||
                          ((((((((byte)flag[5] <= (byte)flag[52] ||
                                ((byte)flag[53] <= (byte)flag[5])) ||
                               (((byte)flag[5] <= (byte)flag[55] ||
                                ((((byte)flag[5] <= (byte)flag[56] ||
                                  ((byte)flag[57] <= (byte)flag[5])) ||
                                 (((byte)flag[5] <= (byte)flag[59] ||
                                  (((((byte)flag[5] <= (byte)flag[60] ||
                                     ((byte)flag[5] <= (byte)flag[61])) ||
                                    ((byte)flag[5] <= (byte)flag[63])) ||
                                   (((byte)flag[5] <= (byte)flag[64] ||
                                    ((byte)flag[5] <= (byte)flag[65])))))))))))) ||
                              ((byte)flag[5] <= (byte)flag[66])) ||
                             ((((byte)flag[5] <= (byte)flag[67] || ((byte)flag[68] <= (byte)flag[5])
                               ) || ((((byte)flag[5] <= (byte)flag[69] ||
                                      ((((byte)flag[5] <= (byte)flag[70] ||
                                        ((byte)flag[5] <= (byte)flag[71])) ||
                                       ((byte)flag[72] <= (byte)flag[5])))) ||
                                     ((((byte)flag[6] <= (byte)flag[0] ||
                                       ((byte)flag[1] <= (byte)flag[6])) ||
                                      ((byte)flag[6] <= (byte)flag[2])))))))) ||
                            ((((byte)flag[6] <= (byte)flag[3] || ((byte)flag[4] <= (byte)flag[6]))
                             || (((byte)flag[5] <= (byte)flag[6] ||
                                 ((((byte)flag[6] <= (byte)flag[7] ||
                                   ((byte)flag[8] <= (byte)flag[6])) ||
                                  ((byte)flag[9] <= (byte)flag[6])))))))) ||
                           (((byte)flag[10] <= (byte)flag[6] || ((byte)flag[6] <= (byte)flag[11]))))
                          )))) ||
              (((((byte)flag[12] <= (byte)flag[6] ||
                 ((((byte)flag[6] <= (byte)flag[13] || ((byte)flag[14] <= (byte)flag[6])) ||
                  (((byte)flag[15] <= (byte)flag[6] ||
                   (((((byte)flag[16] <= (byte)flag[6] || ((byte)flag[17] <= (byte)flag[6])) ||
                     ((byte)flag[6] <= (byte)flag[18])) ||
                    (((byte)flag[19] <= (byte)flag[6] || ((byte)flag[20] <= (byte)flag[6]))))))))))
                || ((byte)flag[21] <= (byte)flag[6])) ||
               ((((((((byte)flag[22] <= (byte)flag[6] || ((byte)flag[23] <= (byte)flag[6])) ||
                    ((((byte)flag[24] <= (byte)flag[6] ||
                      ((((byte)flag[6] <= (byte)flag[25] || ((byte)flag[6] <= (byte)flag[26])) ||
                       ((byte)flag[27] <= (byte)flag[6])))) ||
                     ((((byte)flag[28] <= (byte)flag[6] || ((byte)flag[6] <= (byte)flag[29])) ||
                      ((byte)flag[30] <= (byte)flag[6])))))) ||
                   ((((byte)flag[31] <= (byte)flag[6] || ((byte)flag[6] <= (byte)flag[33])) ||
                    ((((byte)flag[34] <= (byte)flag[6] ||
                      ((((byte)flag[6] <= (byte)flag[35] || ((byte)flag[36] <= (byte)flag[6])) ||
                       ((byte)flag[37] <= (byte)flag[6])))) ||
                     ((((byte)flag[6] <= (byte)flag[38] || ((byte)flag[39] <= (byte)flag[6])) ||
                      (((byte)flag[6] <= (byte)flag[40] ||
                       ((((((((byte)flag[6] <= (byte)flag[41] || ((byte)flag[42] <= (byte)flag[6]))
                            || (((byte)flag[6] <= (byte)flag[43] ||
                                ((((((byte)flag[44] <= (byte)flag[6] ||
                                    ((byte)flag[6] <= (byte)flag[45])) ||
                                   ((byte)flag[6] <= (byte)flag[46])) ||
                                  (((byte)flag[47] <= (byte)flag[6] ||
                                   ((byte)flag[48] <= (byte)flag[6])))) ||
                                 ((byte)flag[6] <= (byte)flag[49])))))) ||
                           (((byte)flag[6] <= (byte)flag[50] || ((byte)flag[52] <= (byte)flag[6]))))
                          || ((byte)flag[53] <= (byte)flag[6])) ||
                         ((((((byte)flag[54] <= (byte)flag[6] || ((byte)flag[55] <= (byte)flag[6]))
                            || ((byte)flag[6] <= (byte)flag[56])) ||
                           ((((byte)flag[57] <= (byte)flag[6] || ((byte)flag[58] <= (byte)flag[6]))
                            || (((byte)flag[59] <= (byte)flag[6] ||
                                (((byte)flag[60] <= (byte)flag[6] ||
                                 ((byte)flag[6] <= (byte)flag[61])))))))) ||
                          ((byte)flag[62] <= (byte)flag[6])))) ||
                        ((((byte)flag[6] <= (byte)flag[63] || ((byte)flag[6] <= (byte)flag[64])) ||
                         ((byte)flag[65] <= (byte)flag[6])))))))))))))) ||
                  ((((byte)flag[6] <= (byte)flag[66] || ((byte)flag[67] <= (byte)flag[6])) ||
                   ((((((byte)flag[68] <= (byte)flag[6] ||
                       (((byte)flag[69] <= (byte)flag[6] || ((byte)flag[70] <= (byte)flag[6])))) ||
                      ((byte)flag[71] <= (byte)flag[6])) ||
                     (((((((byte)flag[72] <= (byte)flag[6] || ((byte)flag[0] <= (byte)flag[7])) ||
                         ((byte)flag[1] <= (byte)flag[7])) ||
                        (((byte)flag[7] <= (byte)flag[2] || ((byte)flag[3] <= (byte)flag[7])))) ||
                       (((byte)flag[4] <= (byte)flag[7] ||
                        (((byte)flag[5] <= (byte)flag[7] || ((byte)flag[6] <= (byte)flag[7])))))) ||
                      ((byte)flag[8] <= (byte)flag[7])))) ||
                    ((((((byte)flag[9] <= (byte)flag[7] || ((byte)flag[10] <= (byte)flag[7])) ||
                       ((byte)flag[7] <= (byte)flag[11])) ||
                      ((((byte)flag[12] <= (byte)flag[7] || ((byte)flag[7] <= (byte)flag[13])) ||
                       (((byte)flag[14] <= (byte)flag[7] ||
                        (((byte)flag[15] <= (byte)flag[7] || ((byte)flag[16] <= (byte)flag[7])))))))
                      ) || ((byte)flag[17] <= (byte)flag[7])))))))) ||
                 (((((((byte)flag[18] <= (byte)flag[7] || ((byte)flag[19] <= (byte)flag[7])) ||
                     ((byte)flag[20] <= (byte)flag[7])) ||
                    (((((byte)flag[21] <= (byte)flag[7] || ((byte)flag[22] <= (byte)flag[7])) ||
                      (((byte)flag[23] <= (byte)flag[7] ||
                       (((byte)flag[24] <= (byte)flag[7] || ((byte)flag[7] <= (byte)flag[26]))))))
                     || (((byte)flag[27] <= (byte)flag[7] ||
                         (((((byte)flag[28] <= (byte)flag[7] || ((byte)flag[30] <= (byte)flag[7]))
                           || ((byte)flag[31] <= (byte)flag[7])) ||
                          (((byte)flag[32] <= (byte)flag[7] || ((byte)flag[34] <= (byte)flag[7])))))
                         ))))) ||
                   ((((byte)flag[7] <= (byte)flag[35] ||
                     (((byte)flag[36] <= (byte)flag[7] || ((byte)flag[37] <= (byte)flag[7])))) ||
                    (((byte)flag[7] <= (byte)flag[38] ||
                     (((((byte)flag[39] <= (byte)flag[7] || ((byte)flag[40] <= (byte)flag[7])) ||
                       ((byte)flag[7] <= (byte)flag[41])) ||
                      ((((byte)flag[42] <= (byte)flag[7] || ((byte)flag[7] <= (byte)flag[43])) ||
                       (((byte)flag[44] <= (byte)flag[7] ||
                        (((byte)flag[7] <= (byte)flag[46] || ((byte)flag[47] <= (byte)flag[7])))))))
                      ))))))) ||
                  (((byte)flag[48] <= (byte)flag[7] ||
                   ((((byte)flag[7] <= (byte)flag[50] || ((byte)flag[51] <= (byte)flag[7])) ||
                    ((byte)flag[52] <= (byte)flag[7])))))))) ||
                (((((byte)flag[53] <= (byte)flag[7] || ((byte)flag[54] <= (byte)flag[7])) ||
                  (((((((((byte)flag[55] <= (byte)flag[7] ||
                         (((byte)flag[7] <= (byte)flag[56] || ((byte)flag[57] <= (byte)flag[7]))))
                        || ((byte)flag[58] <= (byte)flag[7])) ||
                       (((((((byte)flag[59] <= (byte)flag[7] || ((byte)flag[60] <= (byte)flag[7]))
                           || ((byte)flag[7] <= (byte)flag[61])) ||
                          (((byte)flag[62] <= (byte)flag[7] || ((byte)flag[7] <= (byte)flag[64]))))
                         || ((byte)flag[65] <= (byte)flag[7])) ||
                        ((((byte)flag[7] <= (byte)flag[66] || ((byte)flag[67] <= (byte)flag[7])) ||
                         (((byte)flag[68] <= (byte)flag[7] ||
                          ((((byte)flag[69] <= (byte)flag[7] || ((byte)flag[70] <= (byte)flag[7]))
                           || ((byte)flag[71] <= (byte)flag[7])))))))))) ||
                      ((((byte)flag[72] <= (byte)flag[7] || ((byte)flag[8] <= (byte)flag[0])) ||
                       ((byte)flag[8] <= (byte)flag[1])))) ||
                     ((((byte)flag[8] <= (byte)flag[2] || ((byte)flag[8] <= (byte)flag[3])) ||
                      (((byte)flag[4] <= (byte)flag[8] ||
                       ((((byte)flag[5] <= (byte)flag[8] || ((byte)flag[8] <= (byte)flag[6])) ||
                        ((byte)flag[8] <= (byte)flag[7])))))))) ||
                    (((byte)flag[9] <= (byte)flag[8] || ((byte)flag[8] <= (byte)flag[10])))) ||
                   ((((byte)flag[8] <= (byte)flag[11] ||
                     ((((byte)flag[8] <= (byte)flag[12] || ((byte)flag[8] <= (byte)flag[13])) ||
                      (((byte)flag[14] <= (byte)flag[8] ||
                       (((((byte)flag[8] <= (byte)flag[15] || ((byte)flag[16] <= (byte)flag[8])) ||
                         ((byte)flag[8] <= (byte)flag[17])) ||
                        (((byte)flag[8] <= (byte)flag[18] || ((byte)flag[8] <= (byte)flag[19])))))))
                      ))) || ((byte)flag[20] <= (byte)flag[8])))))) ||
                 (((byte)flag[8] <= (byte)flag[21] || ((byte)flag[22] <= (byte)flag[8]))))))))))))))
        || ((((((((byte)flag[8] <= (byte)flag[23] ||
                 ((((byte)flag[8] <= (byte)flag[24] || ((byte)flag[8] <= (byte)flag[25])) ||
                  ((byte)flag[8] <= (byte)flag[26])))) ||
                (((((byte)flag[8] <= (byte)flag[27] || ((byte)flag[28] <= (byte)flag[8])) ||
                  ((byte)flag[8] <= (byte)flag[29])) ||
                 (((byte)flag[30] <= (byte)flag[8] || ((byte)flag[31] <= (byte)flag[8])))))) ||
               (((byte)flag[8] <= (byte)flag[32] ||
                ((((byte)flag[8] <= (byte)flag[33] || ((byte)flag[8] <= (byte)flag[34])) ||
                 ((byte)flag[8] <= (byte)flag[35])))))) ||
              (((((byte)flag[36] <= (byte)flag[8] || ((byte)flag[37] <= (byte)flag[8])) ||
                (((byte)flag[8] <= (byte)flag[38] ||
                 ((((byte)flag[8] <= (byte)flag[39] || ((byte)flag[8] <= (byte)flag[40])) ||
                  (((byte)flag[8] <= (byte)flag[41] ||
                   (((((byte)flag[8] <= (byte)flag[42] || ((byte)flag[8] <= (byte)flag[43])) ||
                     ((byte)flag[8] <= (byte)flag[44])) ||
                    (((byte)flag[8] <= (byte)flag[45] || ((byte)flag[8] <= (byte)flag[46])))))))))))
                ) || ((byte)flag[47] <= (byte)flag[8])))) ||
             (((((byte)flag[8] <= (byte)flag[48] || ((byte)flag[8] <= (byte)flag[49])) ||
               (((((byte)flag[8] <= (byte)flag[50] ||
                  ((((byte)flag[8] <= (byte)flag[51] || ((byte)flag[8] <= (byte)flag[52])) ||
                   ((byte)flag[53] <= (byte)flag[8])))) ||
                 ((((byte)flag[54] <= (byte)flag[8] || ((byte)flag[8] <= (byte)flag[55])) ||
                  ((byte)flag[8] <= (byte)flag[56])))) ||
                (((byte)flag[57] <= (byte)flag[8] || ((byte)flag[58] <= (byte)flag[8])))))) ||
              (((((byte)flag[8] <= (byte)flag[59] ||
                 ((((byte)flag[8] <= (byte)flag[60] || ((byte)flag[8] <= (byte)flag[61])) ||
                  ((byte)flag[62] <= (byte)flag[8])))) ||
                ((((byte)flag[8] <= (byte)flag[63] || ((byte)flag[8] <= (byte)flag[64])) ||
                 (((byte)flag[8] <= (byte)flag[65] ||
                  ((((byte)flag[8] <= (byte)flag[66] || ((byte)flag[8] <= (byte)flag[67])) ||
                   (((byte)flag[68] <= (byte)flag[8] ||
                    ((((((((byte)flag[69] <= (byte)flag[8] || ((byte)flag[8] <= (byte)flag[70])) ||
                         ((byte)flag[71] <= (byte)flag[8])) ||
                        (((byte)flag[72] <= (byte)flag[8] || ((byte)flag[9] <= (byte)flag[0])))) ||
                       ((byte)flag[9] <= (byte)flag[1])) ||
                      (((byte)flag[9] <= (byte)flag[2] || ((byte)flag[9] <= (byte)flag[3])))) ||
                     ((byte)flag[4] <= (byte)flag[9])))))))))))) ||
               ((((((byte)flag[9] <= (byte)flag[5] || ((byte)flag[9] <= (byte)flag[6])) ||
                  ((byte)flag[9] <= (byte)flag[7])) ||
                 (((byte)flag[9] <= (byte)flag[8] || ((byte)flag[9] <= (byte)flag[10])))) ||
                ((byte)flag[9] <= (byte)flag[11])))))))) ||
            ((((((((byte)flag[9] <= (byte)flag[12] || ((byte)flag[9] <= (byte)flag[13])) ||
                 (((byte)flag[9] <= (byte)flag[14] ||
                  ((((byte)flag[9] <= (byte)flag[15] || ((byte)flag[16] <= (byte)flag[9])) ||
                   ((byte)flag[9] <= (byte)flag[17])))))) ||
                (((byte)flag[9] <= (byte)flag[18] || ((byte)flag[9] <= (byte)flag[19])))) ||
               ((byte)flag[20] <= (byte)flag[9])) ||
              (((((byte)flag[9] <= (byte)flag[21] || ((byte)flag[9] <= (byte)flag[23])) ||
                (((byte)flag[9] <= (byte)flag[24] ||
                 (((((byte)flag[9] <= (byte)flag[25] || ((byte)flag[9] <= (byte)flag[26])) ||
                   ((byte)flag[9] <= (byte)flag[27])) ||
                  (((byte)flag[28] <= (byte)flag[9] || ((byte)flag[9] <= (byte)flag[29])))))))) ||
               (((byte)flag[9] <= (byte)flag[30] ||
                (((byte)flag[9] <= (byte)flag[31] || ((byte)flag[9] <= (byte)flag[32])))))))) ||
             ((((((byte)flag[9] <= (byte)flag[33] ||
                 ((((byte)flag[9] <= (byte)flag[34] || ((byte)flag[9] <= (byte)flag[35])) ||
                  ((byte)flag[36] <= (byte)flag[9])))) ||
                ((((byte)flag[37] <= (byte)flag[9] || ((byte)flag[9] <= (byte)flag[38])) ||
                 ((byte)flag[9] <= (byte)flag[39])))) ||
               ((((byte)flag[9] <= (byte)flag[40] || ((byte)flag[9] <= (byte)flag[41])) ||
                (((byte)flag[9] <= (byte)flag[42] ||
                 ((((byte)flag[9] <= (byte)flag[43] || ((byte)flag[9] <= (byte)flag[44])) ||
                  ((byte)flag[9] <= (byte)flag[45])))))))) ||
              (((((((byte)flag[9] <= (byte)flag[46] || ((byte)flag[9] <= (byte)flag[47])) ||
                  ((byte)flag[9] <= (byte)flag[48])) ||
                 ((((byte)flag[9] <= (byte)flag[49] || ((byte)flag[9] <= (byte)flag[50])) ||
                  (((byte)flag[9] <= (byte)flag[51] ||
                   (((((byte)flag[9] <= (byte)flag[52] || ((byte)flag[53] <= (byte)flag[9])) ||
                     ((byte)flag[9] <= (byte)flag[54])) ||
                    (((byte)flag[9] <= (byte)flag[55] || ((byte)flag[9] <= (byte)flag[56]))))))))))
                || (((byte)flag[9] <= (byte)flag[58] ||
                    (((byte)flag[9] <= (byte)flag[59] || ((byte)flag[9] <= (byte)flag[60])))))) ||
               (((((byte)flag[9] <= (byte)flag[61] ||
                  ((((byte)flag[9] <= (byte)flag[62] || ((byte)flag[9] <= (byte)flag[63])) ||
                   ((byte)flag[9] <= (byte)flag[64])))) ||
                 ((((byte)flag[9] <= (byte)flag[65] || ((byte)flag[9] <= (byte)flag[66])) ||
                  ((byte)flag[9] <= (byte)flag[67])))) ||
                ((((byte)flag[68] <= (byte)flag[9] || ((byte)flag[9] <= (byte)flag[69])) ||
                 ((((byte)flag[9] <= (byte)flag[70] ||
                   ((((byte)flag[9] <= (byte)flag[71] || ((byte)flag[72] <= (byte)flag[9])) ||
                    ((byte)flag[10] <= (byte)flag[0])))) ||
                  (((byte)flag[1] <= (byte)flag[10] || ((byte)flag[10] <= (byte)flag[2])))))))))))))
             ))))))) ||
      (((((((((byte)flag[10] <= (byte)flag[3] ||
             (((((((byte)flag[4] <= (byte)flag[10] || ((byte)flag[5] <= (byte)flag[10])) ||
                 (((byte)flag[10] <= (byte)flag[6] ||
                  ((((((byte)flag[10] <= (byte)flag[7] || ((byte)flag[8] <= (byte)flag[10])) ||
                     ((byte)flag[9] <= (byte)flag[10])) ||
                    (((byte)flag[10] <= (byte)flag[11] || ((byte)flag[12] <= (byte)flag[10])))) ||
                   ((byte)flag[10] <= (byte)flag[13])))))) ||
                (((byte)flag[14] <= (byte)flag[10] || ((byte)flag[15] <= (byte)flag[10])))) ||
               ((byte)flag[16] <= (byte)flag[10])) ||
              ((((byte)flag[17] <= (byte)flag[10] || ((byte)flag[10] <= (byte)flag[18])) ||
               ((byte)flag[19] <= (byte)flag[10])))))) ||
            (((((byte)flag[20] <= (byte)flag[10] || ((byte)flag[21] <= (byte)flag[10])) ||
              (((byte)flag[22] <= (byte)flag[10] ||
               (((byte)flag[23] <= (byte)flag[10] || ((byte)flag[24] <= (byte)flag[10])))))) ||
             (((byte)flag[10] <= (byte)flag[25] ||
              ((((byte)flag[10] <= (byte)flag[26] || ((byte)flag[27] <= (byte)flag[10])) ||
               ((byte)flag[28] <= (byte)flag[10])))))))) ||
           ((((((byte)flag[10] <= (byte)flag[29] || ((byte)flag[30] <= (byte)flag[10])) ||
              ((((((byte)flag[31] <= (byte)flag[10] ||
                  (((byte)flag[10] <= (byte)flag[32] || ((byte)flag[10] <= (byte)flag[33])))) ||
                 ((byte)flag[34] <= (byte)flag[10])) ||
                ((((((byte)flag[10] <= (byte)flag[35] || ((byte)flag[36] <= (byte)flag[10])) ||
                   ((byte)flag[37] <= (byte)flag[10])) ||
                  (((byte)flag[10] <= (byte)flag[38] || ((byte)flag[39] <= (byte)flag[10])))) ||
                 (((byte)flag[10] <= (byte)flag[40] ||
                  (((byte)flag[10] <= (byte)flag[41] || ((byte)flag[42] <= (byte)flag[10])))))))) ||
               ((byte)flag[10] <= (byte)flag[43])))) ||
             ((((((byte)flag[44] <= (byte)flag[10] || ((byte)flag[10] <= (byte)flag[45])) ||
                ((byte)flag[10] <= (byte)flag[46])) ||
               ((((byte)flag[47] <= (byte)flag[10] || ((byte)flag[48] <= (byte)flag[10])) ||
                (((byte)flag[10] <= (byte)flag[49] ||
                 (((byte)flag[10] <= (byte)flag[50] || ((byte)flag[10] <= (byte)flag[51])))))))) ||
              ((byte)flag[52] <= (byte)flag[10])))) ||
            (((((byte)flag[53] <= (byte)flag[10] || ((byte)flag[54] <= (byte)flag[10])) ||
              ((byte)flag[55] <= (byte)flag[10])) ||
             (((byte)flag[10] <= (byte)flag[56] || ((byte)flag[57] <= (byte)flag[10])))))))) ||
          (((((((((((((byte)flag[58] <= (byte)flag[10] ||
                     (((byte)flag[59] <= (byte)flag[10] || ((byte)flag[60] <= (byte)flag[10])))) ||
                    (((byte)flag[10] <= (byte)flag[61] ||
                     (((((byte)flag[62] <= (byte)flag[10] || ((byte)flag[10] <= (byte)flag[63])) ||
                       ((byte)flag[10] <= (byte)flag[64])) ||
                      (((byte)flag[65] <= (byte)flag[10] || ((byte)flag[10] <= (byte)flag[66])))))))
                    ) || (((byte)flag[67] <= (byte)flag[10] ||
                          (((byte)flag[68] <= (byte)flag[10] || ((byte)flag[69] <= (byte)flag[10])))
                          ))) ||
                  (((byte)flag[71] <= (byte)flag[10] ||
                   ((((((byte)flag[72] <= (byte)flag[10] || ((byte)flag[0] <= (byte)flag[11])) ||
                      ((byte)flag[1] <= (byte)flag[11])) ||
                     ((((byte)flag[11] <= (byte)flag[2] || ((byte)flag[3] <= (byte)flag[11])) ||
                      (((byte)flag[4] <= (byte)flag[11] ||
                       (((byte)flag[5] <= (byte)flag[11] || ((byte)flag[6] <= (byte)flag[11]))))))))
                    || (((byte)flag[7] <= (byte)flag[11] ||
                        ((((byte)flag[8] <= (byte)flag[11] || ((byte)flag[9] <= (byte)flag[11])) ||
                         ((byte)flag[10] <= (byte)flag[11])))))))))) ||
                 ((((byte)flag[12] <= (byte)flag[11] || ((byte)flag[11] <= (byte)flag[13])) ||
                  ((((byte)flag[14] <= (byte)flag[11] ||
                    (((byte)flag[15] <= (byte)flag[11] || ((byte)flag[16] <= (byte)flag[11])))) ||
                   ((byte)flag[17] <= (byte)flag[11])))))) ||
                (((((((byte)flag[18] <= (byte)flag[11] || ((byte)flag[19] <= (byte)flag[11])) ||
                    ((byte)flag[20] <= (byte)flag[11])) ||
                   (((byte)flag[21] <= (byte)flag[11] || ((byte)flag[22] <= (byte)flag[11])))) ||
                  ((byte)flag[23] <= (byte)flag[11])) ||
                 ((((byte)flag[24] <= (byte)flag[11] || ((byte)flag[25] <= (byte)flag[11])) ||
                  (((byte)flag[26] <= (byte)flag[11] ||
                   ((((byte)flag[27] <= (byte)flag[11] || ((byte)flag[28] <= (byte)flag[11])) ||
                    ((byte)flag[29] <= (byte)flag[11])))))))))) ||
               (((byte)flag[30] <= (byte)flag[11] || ((byte)flag[31] <= (byte)flag[11])))) ||
              (((byte)flag[32] <= (byte)flag[11] ||
               ((((((byte)flag[33] <= (byte)flag[11] || ((byte)flag[34] <= (byte)flag[11])) ||
                  (((byte)flag[11] <= (byte)flag[35] ||
                   ((((byte)flag[36] <= (byte)flag[11] || ((byte)flag[37] <= (byte)flag[11])) ||
                    ((byte)flag[38] <= (byte)flag[11])))))) ||
                 (((byte)flag[39] <= (byte)flag[11] || ((byte)flag[40] <= (byte)flag[11])))) ||
                ((((((byte)flag[11] <= (byte)flag[41] ||
                    ((((byte)flag[42] <= (byte)flag[11] || ((byte)flag[43] <= (byte)flag[11])) ||
                     (((byte)flag[44] <= (byte)flag[11] ||
                      (((((byte)flag[45] <= (byte)flag[11] || ((byte)flag[11] <= (byte)flag[46])) ||
                        ((byte)flag[47] <= (byte)flag[11])) ||
                       (((byte)flag[48] <= (byte)flag[11] || ((byte)flag[49] <= (byte)flag[11]))))))
                     )))) || ((byte)flag[50] <= (byte)flag[11])) ||
                  (((((byte)flag[51] <= (byte)flag[11] || ((byte)flag[52] <= (byte)flag[11])) ||
                    (((byte)flag[53] <= (byte)flag[11] ||
                     ((((byte)flag[54] <= (byte)flag[11] || ((byte)flag[55] <= (byte)flag[11])) ||
                      ((byte)flag[11] <= (byte)flag[56])))))) ||
                   (((((byte)flag[57] <= (byte)flag[11] || ((byte)flag[58] <= (byte)flag[11])) ||
                     ((byte)flag[59] <= (byte)flag[11])) ||
                    (((byte)flag[60] <= (byte)flag[11] || ((byte)flag[11] <= (byte)flag[61]))))))))
                 || ((((((byte)flag[62] <= (byte)flag[11] ||
                        ((((byte)flag[63] <= (byte)flag[11] || ((byte)flag[11] <= (byte)flag[64]))
                         || ((byte)flag[65] <= (byte)flag[11])))) ||
                       ((((byte)flag[11] <= (byte)flag[66] || ((byte)flag[67] <= (byte)flag[11])) ||
                        (((byte)flag[68] <= (byte)flag[11] ||
                         (((((byte)flag[69] <= (byte)flag[11] || ((byte)flag[70] <= (byte)flag[11]))
                           || (((byte)flag[71] <= (byte)flag[11] ||
                               (((((byte)flag[72] <= (byte)flag[11] ||
                                  ((byte)flag[12] <= (byte)flag[0])) ||
                                 ((byte)flag[1] <= (byte)flag[12])) ||
                                (((byte)flag[12] <= (byte)flag[2] ||
                                 ((byte)flag[12] <= (byte)flag[3])))))))) ||
                          ((byte)flag[4] <= (byte)flag[12])))))))) ||
                      (((byte)flag[5] <= (byte)flag[12] || ((byte)flag[12] <= (byte)flag[6])))) ||
                     (((((byte)flag[12] <= (byte)flag[7] ||
                        ((((byte)flag[8] <= (byte)flag[12] || ((byte)flag[9] <= (byte)flag[12])) ||
                         ((byte)flag[12] <= (byte)flag[10])))) ||
                       ((((byte)flag[12] <= (byte)flag[11] || ((byte)flag[12] <= (byte)flag[13])) ||
                        ((byte)flag[14] <= (byte)flag[12])))) ||
                      ((((byte)flag[15] <= (byte)flag[12] || ((byte)flag[16] <= (byte)flag[12])) ||
                       (((byte)flag[17] <= (byte)flag[12] ||
                        ((((byte)flag[12] <= (byte)flag[18] || ((byte)flag[19] <= (byte)flag[12]))
                         || ((byte)flag[20] <= (byte)flag[12])))))))))))))))))) ||
             ((((((byte)flag[12] <= (byte)flag[21] || ((byte)flag[22] <= (byte)flag[12])) ||
                (((byte)flag[23] <= (byte)flag[12] ||
                 ((((byte)flag[24] <= (byte)flag[12] || ((byte)flag[12] <= (byte)flag[25])) ||
                  (((byte)flag[12] <= (byte)flag[26] ||
                   (((((((byte)flag[27] <= (byte)flag[12] || ((byte)flag[28] <= (byte)flag[12])) ||
                       ((byte)flag[12] <= (byte)flag[29])) ||
                      (((byte)flag[30] <= (byte)flag[12] || ((byte)flag[31] <= (byte)flag[12])))) ||
                     ((byte)flag[12] <= (byte)flag[32])) ||
                    (((byte)flag[12] <= (byte)flag[33] || ((byte)flag[34] <= (byte)flag[12])))))))))
                 ))) || ((((byte)flag[12] <= (byte)flag[35] ||
                          (((((((byte)flag[36] <= (byte)flag[12] ||
                               ((byte)flag[37] <= (byte)flag[12])) ||
                              ((byte)flag[12] <= (byte)flag[38])) ||
                             (((byte)flag[39] <= (byte)flag[12] ||
                              ((byte)flag[12] <= (byte)flag[40])))) ||
                            ((((byte)flag[12] <= (byte)flag[41] ||
                              (((byte)flag[42] <= (byte)flag[12] ||
                               ((byte)flag[12] <= (byte)flag[43])))) ||
                             ((byte)flag[44] <= (byte)flag[12])))) ||
                           ((((byte)flag[12] <= (byte)flag[45] || ((byte)flag[12] <= (byte)flag[46])
                             ) || ((byte)flag[47] <= (byte)flag[12])))))) ||
                         ((((byte)flag[48] <= (byte)flag[12] || ((byte)flag[12] <= (byte)flag[49]))
                          || (((byte)flag[12] <= (byte)flag[50] ||
                              (((byte)flag[12] <= (byte)flag[51] ||
                               ((byte)flag[52] <= (byte)flag[12])))))))))) ||
              ((byte)flag[53] <= (byte)flag[12])))) ||
            ((((((((((byte)flag[54] <= (byte)flag[12] || ((byte)flag[55] <= (byte)flag[12])) ||
                   ((byte)flag[12] <= (byte)flag[56])) ||
                  (((byte)flag[57] <= (byte)flag[12] || ((byte)flag[58] <= (byte)flag[12])))) ||
                 (((byte)flag[59] <= (byte)flag[12] ||
                  (((byte)flag[60] <= (byte)flag[12] || ((byte)flag[12] <= (byte)flag[61])))))) ||
                (((byte)flag[62] <= (byte)flag[12] ||
                 ((((byte)flag[12] <= (byte)flag[63] || ((byte)flag[12] <= (byte)flag[64])) ||
                  ((byte)flag[65] <= (byte)flag[12])))))) ||
               (((((byte)flag[12] <= (byte)flag[66] || ((byte)flag[67] <= (byte)flag[12])) ||
                 (((byte)flag[68] <= (byte)flag[12] ||
                  (((byte)flag[69] <= (byte)flag[12] || ((byte)flag[12] <= (byte)flag[70])))))) ||
                (((byte)flag[71] <= (byte)flag[12] ||
                 (((((byte)flag[72] <= (byte)flag[12] || ((byte)flag[0] <= (byte)flag[13])) ||
                   ((byte)flag[1] <= (byte)flag[13])) ||
                  ((((byte)flag[13] <= (byte)flag[2] || ((byte)flag[3] <= (byte)flag[13])) ||
                   (((byte)flag[4] <= (byte)flag[13] ||
                    (((byte)flag[5] <= (byte)flag[13] || ((byte)flag[6] <= (byte)flag[13])))))))))))
                ))) || ((((((byte)flag[7] <= (byte)flag[13] ||
                           (((((byte)flag[8] <= (byte)flag[13] || ((byte)flag[9] <= (byte)flag[13]))
                             || ((byte)flag[10] <= (byte)flag[13])) ||
                            (((byte)flag[11] <= (byte)flag[13] || ((byte)flag[12] <= (byte)flag[13])
                             ))))) ||
                          (((byte)flag[14] <= (byte)flag[13] ||
                           (((byte)flag[15] <= (byte)flag[13] || ((byte)flag[16] <= (byte)flag[13]))
                           )))) || ((byte)flag[17] <= (byte)flag[13])) ||
                        ((((byte)flag[18] <= (byte)flag[13] || ((byte)flag[19] <= (byte)flag[13]))
                         || ((byte)flag[20] <= (byte)flag[13])))))) ||
             ((((byte)flag[21] <= (byte)flag[13] || ((byte)flag[22] <= (byte)flag[13])) ||
              (((((((byte)flag[23] <= (byte)flag[13] ||
                   (((byte)flag[24] <= (byte)flag[13] || ((byte)flag[25] <= (byte)flag[13])))) ||
                  ((byte)flag[26] <= (byte)flag[13])) ||
                 ((((((byte)flag[27] <= (byte)flag[13] || ((byte)flag[28] <= (byte)flag[13])) ||
                    ((byte)flag[29] <= (byte)flag[13])) ||
                   ((((byte)flag[30] <= (byte)flag[13] || ((byte)flag[31] <= (byte)flag[13])) ||
                    (((byte)flag[32] <= (byte)flag[13] ||
                     (((byte)flag[33] <= (byte)flag[13] || ((byte)flag[34] <= (byte)flag[13]))))))))
                  || ((byte)flag[13] <= (byte)flag[35])))) ||
                (((((((((byte)flag[36] <= (byte)flag[13] || ((byte)flag[37] <= (byte)flag[13])) ||
                      ((byte)flag[38] <= (byte)flag[13])) ||
                     (((byte)flag[39] <= (byte)flag[13] || ((byte)flag[40] <= (byte)flag[13])))) ||
                    ((byte)flag[13] <= (byte)flag[41])) ||
                   (((byte)flag[42] <= (byte)flag[13] || ((byte)flag[43] <= (byte)flag[13])))) ||
                  (((byte)flag[44] <= (byte)flag[13] ||
                   ((((byte)flag[45] <= (byte)flag[13] || ((byte)flag[13] <= (byte)flag[46])) ||
                    ((byte)flag[47] <= (byte)flag[13])))))) ||
                 ((((((byte)flag[48] <= (byte)flag[13] || ((byte)flag[49] <= (byte)flag[13])) ||
                    ((byte)flag[50] <= (byte)flag[13])) ||
                   (((byte)flag[51] <= (byte)flag[13] || ((byte)flag[52] <= (byte)flag[13])))) ||
                  (((byte)flag[53] <= (byte)flag[13] ||
                   ((((byte)flag[54] <= (byte)flag[13] || ((byte)flag[55] <= (byte)flag[13])) ||
                    ((byte)flag[13] <= (byte)flag[56])))))))))) ||
               (((((byte)flag[57] <= (byte)flag[13] || ((byte)flag[58] <= (byte)flag[13])) ||
                 (((byte)flag[59] <= (byte)flag[13] ||
                  ((((byte)flag[60] <= (byte)flag[13] || ((byte)flag[13] <= (byte)flag[61])) ||
                   (((byte)flag[62] <= (byte)flag[13] ||
                    (((((byte)flag[63] <= (byte)flag[13] || ((byte)flag[13] <= (byte)flag[64])) ||
                      ((byte)flag[65] <= (byte)flag[13])) ||
                     (((byte)flag[13] <= (byte)flag[66] || ((byte)flag[67] <= (byte)flag[13]))))))))
                  )))) || ((byte)flag[68] <= (byte)flag[13])))))))))) ||
           ((((byte)flag[69] <= (byte)flag[13] || ((byte)flag[70] <= (byte)flag[13])) ||
            ((((byte)flag[71] <= (byte)flag[13] ||
              ((((byte)flag[72] <= (byte)flag[13] || ((byte)flag[14] <= (byte)flag[0])) ||
               ((byte)flag[14] <= (byte)flag[1])))) ||
             ((((byte)flag[14] <= (byte)flag[2] || ((byte)flag[14] <= (byte)flag[3])) ||
              ((byte)flag[4] <= (byte)flag[14])))))))))) ||
         (((((((byte)flag[5] <= (byte)flag[14] || ((byte)flag[14] <= (byte)flag[6])) ||
             (((byte)flag[14] <= (byte)flag[7] ||
              ((((byte)flag[14] <= (byte)flag[8] || ((byte)flag[9] <= (byte)flag[14])) ||
               ((byte)flag[14] <= (byte)flag[10])))))) ||
            (((((byte)flag[14] <= (byte)flag[11] || ((byte)flag[14] <= (byte)flag[12])) ||
              (((byte)flag[14] <= (byte)flag[13] ||
               ((((byte)flag[14] <= (byte)flag[15] || ((byte)flag[16] <= (byte)flag[14])) ||
                (((byte)flag[14] <= (byte)flag[17] ||
                 (((((byte)flag[14] <= (byte)flag[18] || ((byte)flag[14] <= (byte)flag[19])) ||
                   ((byte)flag[20] <= (byte)flag[14])) ||
                  (((byte)flag[14] <= (byte)flag[21] || ((byte)flag[22] <= (byte)flag[14])))))))))))
              ) || (((byte)flag[14] <= (byte)flag[23] ||
                    ((((byte)flag[14] <= (byte)flag[24] || ((byte)flag[14] <= (byte)flag[25])) ||
                     (((((byte)flag[14] <= (byte)flag[26] ||
                        ((((byte)flag[14] <= (byte)flag[27] || ((byte)flag[28] <= (byte)flag[14]))
                         || ((byte)flag[14] <= (byte)flag[29])))) ||
                       ((((byte)flag[31] <= (byte)flag[14] || ((byte)flag[14] <= (byte)flag[32])) ||
                        ((byte)flag[14] <= (byte)flag[33])))) ||
                      (((byte)flag[14] <= (byte)flag[34] || ((byte)flag[14] <= (byte)flag[35])))))))
                    ))))) ||
           (((((byte)flag[36] <= (byte)flag[14] ||
              ((((byte)flag[37] <= (byte)flag[14] || ((byte)flag[14] <= (byte)flag[38])) ||
               ((byte)flag[14] <= (byte)flag[39])))) ||
             (((byte)flag[14] <= (byte)flag[40] || ((byte)flag[14] <= (byte)flag[41])))) ||
            ((((byte)flag[14] <= (byte)flag[42] ||
              (((((byte)flag[14] <= (byte)flag[43] || ((byte)flag[14] <= (byte)flag[44])) ||
                (((byte)flag[14] <= (byte)flag[45] ||
                 ((((((byte)flag[14] <= (byte)flag[46] || ((byte)flag[14] <= (byte)flag[48])) ||
                    ((byte)flag[14] <= (byte)flag[49])) ||
                   (((byte)flag[14] <= (byte)flag[50] || ((byte)flag[14] <= (byte)flag[51])))) ||
                  ((byte)flag[14] <= (byte)flag[52])))))) ||
               (((byte)flag[53] <= (byte)flag[14] || ((byte)flag[54] <= (byte)flag[14])))))) ||
             (((byte)flag[14] <= (byte)flag[55] ||
              (((((byte)flag[14] <= (byte)flag[56] || ((byte)flag[57] <= (byte)flag[14])) ||
                ((byte)flag[58] <= (byte)flag[14])) ||
               ((((((byte)flag[14] <= (byte)flag[59] || ((byte)flag[14] <= (byte)flag[60])) ||
                  (((byte)flag[14] <= (byte)flag[61] ||
                   (((byte)flag[62] <= (byte)flag[14] || ((byte)flag[14] <= (byte)flag[63])))))) ||
                 (((byte)flag[14] <= (byte)flag[64] ||
                  (((((byte)flag[14] <= (byte)flag[65] || ((byte)flag[14] <= (byte)flag[66])) ||
                    ((byte)flag[14] <= (byte)flag[67])) ||
                   (((byte)flag[68] <= (byte)flag[14] || ((byte)flag[69] <= (byte)flag[14]))))))))
                || (((((byte)flag[14] <= (byte)flag[70] ||
                      (((byte)flag[71] <= (byte)flag[14] || ((byte)flag[72] <= (byte)flag[14])))) ||
                     ((byte)flag[15] <= (byte)flag[0])) ||
                    ((((((((byte)flag[15] <= (byte)flag[1] || ((byte)flag[15] <= (byte)flag[2])) ||
                         ((byte)flag[15] <= (byte)flag[3])) ||
                        (((byte)flag[4] <= (byte)flag[15] || ((byte)flag[5] <= (byte)flag[15])))) ||
                       (((byte)flag[15] <= (byte)flag[6] ||
                        (((byte)flag[15] <= (byte)flag[7] || ((byte)flag[8] <= (byte)flag[15]))))))
                      || ((byte)flag[9] <= (byte)flag[15])) ||
                     ((((byte)flag[15] <= (byte)flag[10] || ((byte)flag[15] <= (byte)flag[11])) ||
                      ((byte)flag[15] <= (byte)flag[12])))))))))))))))))) ||
          (((((((byte)flag[15] <= (byte)flag[13] || ((byte)flag[14] <= (byte)flag[15])) ||
              (((byte)flag[16] <= (byte)flag[15] ||
               (((byte)flag[15] <= (byte)flag[17] || ((byte)flag[15] <= (byte)flag[18])))))) ||
             (((((byte)flag[20] <= (byte)flag[15] ||
                (((((byte)flag[15] <= (byte)flag[21] || ((byte)flag[22] <= (byte)flag[15])) ||
                  ((byte)flag[15] <= (byte)flag[23])) ||
                 ((((byte)flag[24] <= (byte)flag[15] || ((byte)flag[15] <= (byte)flag[25])) ||
                  (((byte)flag[15] <= (byte)flag[26] ||
                   (((byte)flag[28] <= (byte)flag[15] || ((byte)flag[15] <= (byte)flag[29]))))))))))
               || (((((byte)flag[30] <= (byte)flag[15] ||
                     (((((byte)flag[31] <= (byte)flag[15] || ((byte)flag[15] <= (byte)flag[32])) ||
                       ((byte)flag[15] <= (byte)flag[33])) ||
                      (((byte)flag[15] <= (byte)flag[34] || ((byte)flag[15] <= (byte)flag[35]))))))
                    || (((byte)flag[36] <= (byte)flag[15] ||
                        (((byte)flag[37] <= (byte)flag[15] || ((byte)flag[15] <= (byte)flag[38])))))
                    ) || ((byte)flag[15] <= (byte)flag[40])))) ||
              (((((((((byte)flag[15] <= (byte)flag[41] || ((byte)flag[15] <= (byte)flag[42])) ||
                    ((byte)flag[15] <= (byte)flag[43])) ||
                   ((((byte)flag[15] <= (byte)flag[44] || ((byte)flag[15] <= (byte)flag[45])) ||
                    (((byte)flag[15] <= (byte)flag[46] ||
                     (((byte)flag[47] <= (byte)flag[15] || ((byte)flag[15] <= (byte)flag[48]))))))))
                  || (((byte)flag[15] <= (byte)flag[49] ||
                      ((((byte)flag[15] <= (byte)flag[50] || ((byte)flag[15] <= (byte)flag[51])) ||
                       ((byte)flag[53] <= (byte)flag[15])))))) ||
                 (((byte)flag[54] <= (byte)flag[15] || ((byte)flag[15] <= (byte)flag[56])))) ||
                ((((byte)flag[57] <= (byte)flag[15] ||
                  (((byte)flag[58] <= (byte)flag[15] || ((byte)flag[15] <= (byte)flag[60])))) ||
                 ((byte)flag[15] <= (byte)flag[61])))) ||
               ((((((((((byte)flag[62] <= (byte)flag[15] || ((byte)flag[15] <= (byte)flag[63])) ||
                      ((byte)flag[15] <= (byte)flag[64])) ||
                     (((byte)flag[15] <= (byte)flag[65] || ((byte)flag[15] <= (byte)flag[66])))) ||
                    ((byte)flag[15] <= (byte)flag[67])) ||
                   (((byte)flag[68] <= (byte)flag[15] || ((byte)flag[69] <= (byte)flag[15])))) ||
                  (((byte)flag[15] <= (byte)flag[70] ||
                   ((((byte)flag[71] <= (byte)flag[15] || ((byte)flag[72] <= (byte)flag[15])) ||
                    ((byte)flag[16] <= (byte)flag[0])))))) ||
                 (((((byte)flag[16] <= (byte)flag[1] || ((byte)flag[16] <= (byte)flag[2])) ||
                   ((byte)flag[16] <= (byte)flag[3])) ||
                  (((byte)flag[4] <= (byte)flag[16] || ((byte)flag[16] <= (byte)flag[5])))))) ||
                (((byte)flag[16] <= (byte)flag[6] ||
                 ((((byte)flag[16] <= (byte)flag[7] || ((byte)flag[16] <= (byte)flag[8])) ||
                  ((byte)flag[16] <= (byte)flag[9])))))))))))) ||
            (((((byte)flag[16] <= (byte)flag[10] || ((byte)flag[16] <= (byte)flag[11])) ||
              ((byte)flag[16] <= (byte)flag[12])) ||
             (((((byte)flag[16] <= (byte)flag[13] || ((byte)flag[16] <= (byte)flag[14])) ||
               (((byte)flag[16] <= (byte)flag[15] ||
                (((((byte)flag[16] <= (byte)flag[17] || ((byte)flag[16] <= (byte)flag[18])) ||
                  ((byte)flag[16] <= (byte)flag[19])) ||
                 (((byte)flag[20] <= (byte)flag[16] || ((byte)flag[16] <= (byte)flag[21])))))))) ||
              (((byte)flag[16] <= (byte)flag[22] ||
               (((byte)flag[16] <= (byte)flag[23] || ((byte)flag[16] <= (byte)flag[24])))))))))) ||
           (((((byte)flag[16] <= (byte)flag[25] ||
              ((((byte)flag[16] <= (byte)flag[26] || ((byte)flag[16] <= (byte)flag[27])) ||
               ((byte)flag[16] <= (byte)flag[28])))) ||
             ((((byte)flag[16] <= (byte)flag[29] || ((byte)flag[16] <= (byte)flag[30])) ||
              ((byte)flag[16] <= (byte)flag[31])))) ||
            (((((byte)flag[16] <= (byte)flag[32] || ((byte)flag[16] <= (byte)flag[33])) ||
              (((((((byte)flag[16] <= (byte)flag[34] ||
                   ((((byte)flag[16] <= (byte)flag[35] || ((byte)flag[36] <= (byte)flag[16])) ||
                    ((byte)flag[37] <= (byte)flag[16])))) ||
                  (((byte)flag[16] <= (byte)flag[38] || ((byte)flag[16] <= (byte)flag[39])))) ||
                 ((byte)flag[16] <= (byte)flag[40])) ||
                (((((byte)flag[16] <= (byte)flag[41] || ((byte)flag[16] <= (byte)flag[42])) ||
                  (((byte)flag[16] <= (byte)flag[43] ||
                   (((((byte)flag[16] <= (byte)flag[44] || ((byte)flag[16] <= (byte)flag[45])) ||
                     ((byte)flag[16] <= (byte)flag[46])) ||
                    (((byte)flag[16] <= (byte)flag[47] || ((byte)flag[16] <= (byte)flag[48]))))))))
                 || ((byte)flag[16] <= (byte)flag[49])))) ||
               (((byte)flag[16] <= (byte)flag[50] || ((byte)flag[16] <= (byte)flag[51])))))) ||
             ((((byte)flag[16] <= (byte)flag[52] ||
               ((((byte)flag[16] <= (byte)flag[54] || ((byte)flag[16] <= (byte)flag[55])) ||
                ((byte)flag[16] <= (byte)flag[56])))) ||
              ((((byte)flag[16] <= (byte)flag[57] || ((byte)flag[16] <= (byte)flag[58])) ||
               ((byte)flag[16] <= (byte)flag[59])))))))))))))) ||
        (((((((((byte)flag[16] <= (byte)flag[60] || ((byte)flag[16] <= (byte)flag[61])) ||
              (((byte)flag[16] <= (byte)flag[62] ||
               ((((byte)flag[16] <= (byte)flag[63] || ((byte)flag[16] <= (byte)flag[64])) ||
                ((byte)flag[16] <= (byte)flag[65])))))) ||
             (((byte)flag[16] <= (byte)flag[66] || ((byte)flag[16] <= (byte)flag[67])))) ||
            ((((((byte)flag[68] <= (byte)flag[16] ||
                ((((((((byte)flag[16] <= (byte)flag[69] || ((byte)flag[16] <= (byte)flag[70])) ||
                     (((byte)flag[16] <= (byte)flag[71] ||
                      ((((((byte)flag[72] <= (byte)flag[16] || ((byte)flag[17] <= (byte)flag[0])) ||
                         ((byte)flag[17] <= (byte)flag[1])) ||
                        (((byte)flag[17] <= (byte)flag[2] || ((byte)flag[17] <= (byte)flag[3])))) ||
                       ((byte)flag[4] <= (byte)flag[17])))))) ||
                    ((((byte)flag[5] <= (byte)flag[17] || ((byte)flag[17] <= (byte)flag[6])) ||
                     (((byte)flag[17] <= (byte)flag[7] ||
                      ((((((byte)flag[8] <= (byte)flag[17] || ((byte)flag[9] <= (byte)flag[17])) ||
                         ((byte)flag[17] <= (byte)flag[10])) ||
                        ((((byte)flag[17] <= (byte)flag[11] || ((byte)flag[17] <= (byte)flag[12]))
                         || (((byte)flag[17] <= (byte)flag[13] ||
                             (((byte)flag[14] <= (byte)flag[17] ||
                              ((byte)flag[15] <= (byte)flag[17])))))))) ||
                       ((byte)flag[16] <= (byte)flag[17])))))))) ||
                   ((((byte)flag[17] <= (byte)flag[18] || ((byte)flag[19] <= (byte)flag[17])) ||
                    ((byte)flag[20] <= (byte)flag[17])))) ||
                  (((((byte)flag[17] <= (byte)flag[21] || ((byte)flag[22] <= (byte)flag[17])) ||
                    (((((byte)flag[17] <= (byte)flag[23] ||
                       (((byte)flag[24] <= (byte)flag[17] || ((byte)flag[17] <= (byte)flag[25]))))
                      || ((byte)flag[17] <= (byte)flag[26])) ||
                     ((((((byte)flag[27] <= (byte)flag[17] || ((byte)flag[28] <= (byte)flag[17])) ||
                        ((byte)flag[17] <= (byte)flag[29])) ||
                       (((byte)flag[30] <= (byte)flag[17] || ((byte)flag[31] <= (byte)flag[17]))))
                      || (((byte)flag[17] <= (byte)flag[32] ||
                          (((byte)flag[17] <= (byte)flag[33] || ((byte)flag[17] <= (byte)flag[34])))
                          ))))))) ||
                   ((((byte)flag[17] <= (byte)flag[35] ||
                     (((((byte)flag[36] <= (byte)flag[17] || ((byte)flag[37] <= (byte)flag[17])) ||
                       ((byte)flag[17] <= (byte)flag[38])) ||
                      ((((byte)flag[39] <= (byte)flag[17] || ((byte)flag[17] <= (byte)flag[40])) ||
                       (((byte)flag[17] <= (byte)flag[41] ||
                        (((byte)flag[17] <= (byte)flag[43] || ((byte)flag[17] <= (byte)flag[44])))))
                       ))))) ||
                    (((((byte)flag[17] <= (byte)flag[45] ||
                       ((((byte)flag[17] <= (byte)flag[46] || ((byte)flag[47] <= (byte)flag[17])) ||
                        ((byte)flag[17] <= (byte)flag[49])))) ||
                      ((((((((((byte)flag[17] <= (byte)flag[50] ||
                              ((byte)flag[17] <= (byte)flag[51])) ||
                             (((byte)flag[52] <= (byte)flag[17] ||
                              (((byte)flag[53] <= (byte)flag[17] ||
                               ((byte)flag[54] <= (byte)flag[17])))))) ||
                            ((byte)flag[55] <= (byte)flag[17])) ||
                           ((((((byte)flag[17] <= (byte)flag[56] ||
                               ((byte)flag[57] <= (byte)flag[17])) ||
                              ((byte)flag[58] <= (byte)flag[17])) ||
                             (((byte)flag[59] <= (byte)flag[17] ||
                              ((byte)flag[17] <= (byte)flag[60])))) ||
                            (((byte)flag[17] <= (byte)flag[61] ||
                             (((byte)flag[62] <= (byte)flag[17] ||
                              ((byte)flag[17] <= (byte)flag[63])))))))) ||
                          (((byte)flag[17] <= (byte)flag[64] ||
                           (((((byte)flag[17] <= (byte)flag[66] ||
                              ((byte)flag[17] <= (byte)flag[67])) ||
                             ((byte)flag[68] <= (byte)flag[17])) ||
                            ((((byte)flag[69] <= (byte)flag[17] ||
                              ((byte)flag[17] <= (byte)flag[70])) ||
                             (((byte)flag[71] <= (byte)flag[17] ||
                              (((byte)flag[72] <= (byte)flag[17] ||
                               ((byte)flag[1] <= (byte)flag[18])))))))))))) ||
                         ((byte)flag[18] <= (byte)flag[2])) ||
                        ((((((byte)flag[3] <= (byte)flag[18] || ((byte)flag[4] <= (byte)flag[18]))
                           || ((byte)flag[5] <= (byte)flag[18])) ||
                          (((byte)flag[6] <= (byte)flag[18] || ((byte)flag[18] <= (byte)flag[7]))))
                         || ((((byte)flag[8] <= (byte)flag[18] ||
                              (((byte)flag[9] <= (byte)flag[18] ||
                               ((byte)flag[10] <= (byte)flag[18])))) ||
                             ((byte)flag[18] <= (byte)flag[11])))))) ||
                       (((((((byte)flag[12] <= (byte)flag[18] || ((byte)flag[18] <= (byte)flag[13]))
                           || ((byte)flag[14] <= (byte)flag[18])) ||
                          (((byte)flag[15] <= (byte)flag[18] || ((byte)flag[16] <= (byte)flag[18])))
                          ) || ((byte)flag[17] <= (byte)flag[18])) ||
                        ((((((byte)flag[19] <= (byte)flag[18] || ((byte)flag[20] <= (byte)flag[18]))
                           || (((byte)flag[21] <= (byte)flag[18] ||
                               ((((byte)flag[22] <= (byte)flag[18] ||
                                 ((byte)flag[23] <= (byte)flag[18])) ||
                                ((byte)flag[24] <= (byte)flag[18])))))) ||
                          (((byte)flag[18] <= (byte)flag[25] || ((byte)flag[18] <= (byte)flag[26])))
                          ) || ((byte)flag[27] <= (byte)flag[18])))))))) ||
                     ((((((byte)flag[28] <= (byte)flag[18] || ((byte)flag[18] <= (byte)flag[29])) ||
                        (((byte)flag[30] <= (byte)flag[18] ||
                         ((((byte)flag[31] <= (byte)flag[18] || ((byte)flag[32] <= (byte)flag[18]))
                          || ((byte)flag[18] <= (byte)flag[33])))))) ||
                       ((((byte)flag[34] <= (byte)flag[18] || ((byte)flag[18] <= (byte)flag[35])) ||
                        (((byte)flag[36] <= (byte)flag[18] ||
                         ((((byte)flag[37] <= (byte)flag[18] || ((byte)flag[18] <= (byte)flag[38]))
                          || (((byte)flag[39] <= (byte)flag[18] ||
                              (((((byte)flag[40] <= (byte)flag[18] ||
                                 ((byte)flag[18] <= (byte)flag[41])) ||
                                ((byte)flag[42] <= (byte)flag[18])) ||
                               (((byte)flag[18] <= (byte)flag[43] ||
                                ((byte)flag[44] <= (byte)flag[18])))))))))))))) ||
                      ((byte)flag[18] <= (byte)flag[45])))))))))) ||
                 (((((byte)flag[18] <= (byte)flag[46] || ((byte)flag[47] <= (byte)flag[18])) ||
                   (((byte)flag[48] <= (byte)flag[18] ||
                    ((((byte)flag[18] <= (byte)flag[49] || ((byte)flag[18] <= (byte)flag[50])) ||
                     ((byte)flag[51] <= (byte)flag[18])))))) ||
                  (((((byte)flag[52] <= (byte)flag[18] || ((byte)flag[53] <= (byte)flag[18])) ||
                    ((byte)flag[54] <= (byte)flag[18])) ||
                   (((byte)flag[55] <= (byte)flag[18] || ((byte)flag[18] <= (byte)flag[56]))))))))))
               || ((((((byte)flag[57] <= (byte)flag[18] ||
                      ((((byte)flag[58] <= (byte)flag[18] || ((byte)flag[59] <= (byte)flag[18])) ||
                       ((byte)flag[60] <= (byte)flag[18])))) ||
                     ((((byte)flag[18] <= (byte)flag[61] || ((byte)flag[62] <= (byte)flag[18])) ||
                      (((byte)flag[18] <= (byte)flag[63] ||
                       ((((byte)flag[18] <= (byte)flag[64] || ((byte)flag[65] <= (byte)flag[18])) ||
                        (((byte)flag[18] <= (byte)flag[66] ||
                         (((((byte)flag[67] <= (byte)flag[18] || ((byte)flag[68] <= (byte)flag[18]))
                           || ((byte)flag[69] <= (byte)flag[18])) ||
                          (((byte)flag[70] <= (byte)flag[18] || ((byte)flag[71] <= (byte)flag[18])))
                          ))))))))))) || ((byte)flag[72] <= (byte)flag[18])) ||
                   ((((byte)flag[19] <= (byte)flag[0] || ((byte)flag[19] <= (byte)flag[1])) ||
                    (((((byte)flag[19] <= (byte)flag[2] ||
                       ((((byte)flag[19] <= (byte)flag[3] || ((byte)flag[4] <= (byte)flag[19])) ||
                        ((byte)flag[5] <= (byte)flag[19])))) ||
                      ((((byte)flag[19] <= (byte)flag[6] || ((byte)flag[19] <= (byte)flag[7])) ||
                       ((byte)flag[8] <= (byte)flag[19])))) ||
                     (((byte)flag[9] <= (byte)flag[19] || ((byte)flag[19] <= (byte)flag[10])))))))))
               ) || ((((byte)flag[19] <= (byte)flag[11] ||
                      ((((byte)flag[19] <= (byte)flag[12] || ((byte)flag[19] <= (byte)flag[13])) ||
                       ((byte)flag[14] <= (byte)flag[19])))) ||
                     ((((byte)flag[16] <= (byte)flag[19] || ((byte)flag[19] <= (byte)flag[17])) ||
                      (((byte)flag[19] <= (byte)flag[18] ||
                       ((((byte)flag[20] <= (byte)flag[19] || ((byte)flag[19] <= (byte)flag[21])) ||
                        (((byte)flag[22] <= (byte)flag[19] ||
                         ((((((((byte)flag[19] <= (byte)flag[23] ||
                               ((byte)flag[24] <= (byte)flag[19])) ||
                              ((byte)flag[19] <= (byte)flag[25])) ||
                             (((byte)flag[19] <= (byte)flag[26] ||
                              ((byte)flag[28] <= (byte)flag[19])))) ||
                            ((byte)flag[19] <= (byte)flag[29])) ||
                           (((byte)flag[30] <= (byte)flag[19] || ((byte)flag[31] <= (byte)flag[19]))
                           )) || ((byte)flag[19] <= (byte)flag[32])))))))))))))) ||
             ((((((((((byte)flag[19] <= (byte)flag[33] || ((byte)flag[19] <= (byte)flag[34])) ||
                    ((byte)flag[19] <= (byte)flag[35])) ||
                   (((byte)flag[36] <= (byte)flag[19] || ((byte)flag[37] <= (byte)flag[19])))) ||
                  ((byte)flag[19] <= (byte)flag[38])) ||
                 ((((((byte)flag[19] <= (byte)flag[40] || ((byte)flag[19] <= (byte)flag[41])) ||
                    (((byte)flag[19] <= (byte)flag[42] ||
                     ((((byte)flag[19] <= (byte)flag[43] || ((byte)flag[19] <= (byte)flag[44])) ||
                      ((byte)flag[19] <= (byte)flag[45])))))) ||
                   (((byte)flag[19] <= (byte)flag[46] || ((byte)flag[47] <= (byte)flag[19])))) ||
                  ((byte)flag[19] <= (byte)flag[48])))) ||
                ((((((((byte)flag[19] <= (byte)flag[49] || ((byte)flag[19] <= (byte)flag[50])) ||
                     (((byte)flag[19] <= (byte)flag[51] ||
                      (((((byte)flag[53] <= (byte)flag[19] || ((byte)flag[54] <= (byte)flag[19])) ||
                        ((byte)flag[19] <= (byte)flag[56])) ||
                       (((byte)flag[57] <= (byte)flag[19] || ((byte)flag[58] <= (byte)flag[19]))))))
                     )) || (((byte)flag[19] <= (byte)flag[60] ||
                            (((byte)flag[19] <= (byte)flag[61] || ((byte)flag[62] <= (byte)flag[19])
                             ))))) ||
                   ((((byte)flag[19] <= (byte)flag[63] ||
                     ((((byte)flag[19] <= (byte)flag[64] || ((byte)flag[19] <= (byte)flag[65])) ||
                      ((byte)flag[19] <= (byte)flag[66])))) ||
                    ((((byte)flag[19] <= (byte)flag[67] || ((byte)flag[68] <= (byte)flag[19])) ||
                     ((byte)flag[69] <= (byte)flag[19])))))) ||
                  (((byte)flag[19] <= (byte)flag[70] || ((byte)flag[71] <= (byte)flag[19])))) ||
                 ((((byte)flag[72] <= (byte)flag[19] ||
                   ((((byte)flag[20] <= (byte)flag[0] || ((byte)flag[20] <= (byte)flag[1])) ||
                    ((byte)flag[20] <= (byte)flag[2])))) ||
                  ((((byte)flag[20] <= (byte)flag[3] || ((byte)flag[4] <= (byte)flag[20])) ||
                   ((byte)flag[20] <= (byte)flag[5])))))))) ||
               ((((byte)flag[20] <= (byte)flag[6] || ((byte)flag[20] <= (byte)flag[7])) ||
                (((byte)flag[20] <= (byte)flag[8] ||
                 (((((byte)flag[20] <= (byte)flag[9] || ((byte)flag[20] <= (byte)flag[10])) ||
                   ((byte)flag[20] <= (byte)flag[11])) ||
                  (((byte)flag[20] <= (byte)flag[12] || ((byte)flag[20] <= (byte)flag[13]))))))))))
              || ((((byte)flag[20] <= (byte)flag[14] ||
                   (((byte)flag[20] <= (byte)flag[15] || ((byte)flag[20] <= (byte)flag[16])))) ||
                  (((((byte)flag[20] <= (byte)flag[17] ||
                     ((((byte)flag[20] <= (byte)flag[18] || ((byte)flag[20] <= (byte)flag[19])) ||
                      ((byte)flag[20] <= (byte)flag[21])))) ||
                    ((((byte)flag[20] <= (byte)flag[22] || ((byte)flag[20] <= (byte)flag[23])) ||
                     ((byte)flag[20] <= (byte)flag[24])))) ||
                   (((byte)flag[20] <= (byte)flag[25] || ((byte)flag[20] <= (byte)flag[26]))))))))))
            )) || ((((((byte)flag[20] <= (byte)flag[27] ||
                      ((((byte)flag[20] <= (byte)flag[28] || ((byte)flag[20] <= (byte)flag[29])) ||
                       ((byte)flag[20] <= (byte)flag[30])))) ||
                     (((byte)flag[20] <= (byte)flag[31] || ((byte)flag[20] <= (byte)flag[32])))) ||
                    (((byte)flag[20] <= (byte)flag[33] ||
                     (((((((byte)flag[20] <= (byte)flag[34] || ((byte)flag[20] <= (byte)flag[35]))
                         || (((byte)flag[36] <= (byte)flag[20] ||
                             ((((((byte)flag[37] <= (byte)flag[20] ||
                                 ((byte)flag[20] <= (byte)flag[38])) ||
                                ((byte)flag[20] <= (byte)flag[39])) ||
                               (((byte)flag[20] <= (byte)flag[40] ||
                                ((byte)flag[20] <= (byte)flag[41])))) ||
                              ((byte)flag[20] <= (byte)flag[42])))))) ||
                        (((byte)flag[20] <= (byte)flag[43] || ((byte)flag[20] <= (byte)flag[44]))))
                       || ((byte)flag[20] <= (byte)flag[45])) ||
                      ((((byte)flag[20] <= (byte)flag[46] || ((byte)flag[20] <= (byte)flag[47])) ||
                       ((byte)flag[20] <= (byte)flag[48])))))))) ||
                   ((((((((byte)flag[20] <= (byte)flag[49] || ((byte)flag[20] <= (byte)flag[50])) ||
                        (((byte)flag[20] <= (byte)flag[51] ||
                         (((byte)flag[20] <= (byte)flag[52] || ((byte)flag[20] <= (byte)flag[53]))))
                        )) || (((byte)flag[20] <= (byte)flag[54] ||
                               ((((byte)flag[20] <= (byte)flag[55] ||
                                 ((byte)flag[20] <= (byte)flag[56])) ||
                                ((byte)flag[20] <= (byte)flag[57])))))) ||
                      (((((((byte)flag[20] <= (byte)flag[58] || ((byte)flag[20] <= (byte)flag[59]))
                          || (((((byte)flag[20] <= (byte)flag[60] ||
                                (((byte)flag[20] <= (byte)flag[61] ||
                                 ((byte)flag[20] <= (byte)flag[62])))) ||
                               ((byte)flag[20] <= (byte)flag[63])) ||
                              ((((((byte)flag[20] <= (byte)flag[64] ||
                                  ((byte)flag[20] <= (byte)flag[65])) ||
                                 ((byte)flag[20] <= (byte)flag[66])) ||
                                (((byte)flag[20] <= (byte)flag[67] ||
                                 ((byte)flag[68] <= (byte)flag[20])))) ||
                               (((byte)flag[20] <= (byte)flag[69] ||
                                (((byte)flag[20] <= (byte)flag[70] ||
                                 ((byte)flag[20] <= (byte)flag[71])))))))))) ||
                         ((byte)flag[72] <= (byte)flag[20])) ||
                        (((((((byte)flag[21] <= (byte)flag[0] || ((byte)flag[1] <= (byte)flag[21]))
                            || ((byte)flag[21] <= (byte)flag[2])) ||
                           ((((byte)flag[21] <= (byte)flag[3] || ((byte)flag[4] <= (byte)flag[21]))
                            || (((byte)flag[5] <= (byte)flag[21] ||
                                (((byte)flag[21] <= (byte)flag[6] ||
                                 ((byte)flag[21] <= (byte)flag[7])))))))) ||
                          (((byte)flag[8] <= (byte)flag[21] ||
                           ((((byte)flag[9] <= (byte)flag[21] || ((byte)flag[21] <= (byte)flag[10]))
                            || ((byte)flag[21] <= (byte)flag[11])))))) ||
                         ((((byte)flag[12] <= (byte)flag[21] || ((byte)flag[21] <= (byte)flag[13]))
                          || ((((byte)flag[14] <= (byte)flag[21] ||
                               (((byte)flag[15] <= (byte)flag[21] ||
                                ((byte)flag[16] <= (byte)flag[21])))) ||
                              ((byte)flag[17] <= (byte)flag[21])))))))) ||
                       (((((((byte)flag[21] <= (byte)flag[18] || ((byte)flag[19] <= (byte)flag[21]))
                           || ((byte)flag[20] <= (byte)flag[21])) ||
                          (((byte)flag[22] <= (byte)flag[21] || ((byte)flag[23] <= (byte)flag[21])))
                          ) || (((byte)flag[24] <= (byte)flag[21] ||
                                (((byte)flag[21] <= (byte)flag[25] ||
                                 ((byte)flag[21] <= (byte)flag[26])))))) ||
                        (((byte)flag[27] <= (byte)flag[21] ||
                         (((((byte)flag[28] <= (byte)flag[21] || ((byte)flag[21] <= (byte)flag[29]))
                           || ((byte)flag[30] <= (byte)flag[21])) ||
                          ((((byte)flag[31] <= (byte)flag[21] || ((byte)flag[21] <= (byte)flag[32]))
                           || (((byte)flag[21] <= (byte)flag[33] ||
                               (((byte)flag[34] <= (byte)flag[21] ||
                                ((byte)flag[21] <= (byte)flag[35])))))))))))))))) ||
                     (((((byte)flag[36] <= (byte)flag[21] ||
                        ((((((byte)flag[37] <= (byte)flag[21] || ((byte)flag[21] <= (byte)flag[38]))
                           || ((byte)flag[39] <= (byte)flag[21])) ||
                          ((((byte)flag[21] <= (byte)flag[40] || ((byte)flag[21] <= (byte)flag[41]))
                           || ((((byte)flag[42] <= (byte)flag[21] ||
                                (((byte)flag[21] <= (byte)flag[43] ||
                                 ((byte)flag[44] <= (byte)flag[21])))) ||
                               ((byte)flag[21] <= (byte)flag[45])))))) ||
                         ((((((byte)flag[21] <= (byte)flag[46] || ((byte)flag[47] <= (byte)flag[21])
                             ) || ((byte)flag[48] <= (byte)flag[21])) ||
                           (((byte)flag[21] <= (byte)flag[49] || ((byte)flag[21] <= (byte)flag[50]))
                           )) || ((byte)flag[21] <= (byte)flag[51])))))) ||
                       (((((byte)flag[52] <= (byte)flag[21] || ((byte)flag[53] <= (byte)flag[21]))
                         || (((byte)flag[54] <= (byte)flag[21] ||
                             ((((byte)flag[55] <= (byte)flag[21] ||
                               ((byte)flag[21] <= (byte)flag[56])) ||
                              ((byte)flag[57] <= (byte)flag[21])))))) ||
                        (((byte)flag[58] <= (byte)flag[21] || ((byte)flag[59] <= (byte)flag[21])))))
                       ) || ((((((byte)flag[60] <= (byte)flag[21] ||
                                (((((byte)flag[21] <= (byte)flag[61] ||
                                   ((byte)flag[62] <= (byte)flag[21])) ||
                                  (((byte)flag[21] <= (byte)flag[63] ||
                                   ((((byte)flag[21] <= (byte)flag[64] ||
                                     ((byte)flag[65] <= (byte)flag[21])) ||
                                    ((byte)flag[21] <= (byte)flag[66])))))) ||
                                 (((byte)flag[67] <= (byte)flag[21] ||
                                  ((byte)flag[68] <= (byte)flag[21])))))) ||
                               ((byte)flag[69] <= (byte)flag[21])) ||
                              (((((byte)flag[21] <= (byte)flag[70] ||
                                 ((byte)flag[71] <= (byte)flag[21])) ||
                                (((byte)flag[72] <= (byte)flag[21] ||
                                 (((((byte)flag[22] <= (byte)flag[0] ||
                                    ((byte)flag[22] <= (byte)flag[1])) ||
                                   ((byte)flag[22] <= (byte)flag[2])) ||
                                  (((byte)flag[22] <= (byte)flag[3] ||
                                   ((byte)flag[4] <= (byte)flag[22])))))))) ||
                               (((byte)flag[22] <= (byte)flag[5] ||
                                (((byte)flag[22] <= (byte)flag[6] ||
                                 ((byte)flag[22] <= (byte)flag[7])))))))) ||
                             ((((((byte)flag[22] <= (byte)flag[8] ||
                                 ((((byte)flag[22] <= (byte)flag[10] ||
                                   ((byte)flag[22] <= (byte)flag[11])) ||
                                  ((byte)flag[22] <= (byte)flag[12])))) ||
                                ((((byte)flag[22] <= (byte)flag[13] ||
                                  ((byte)flag[22] <= (byte)flag[14])) ||
                                 ((byte)flag[22] <= (byte)flag[15])))) ||
                               ((((byte)flag[16] <= (byte)flag[22] ||
                                 ((byte)flag[22] <= (byte)flag[17])) ||
                                (((byte)flag[22] <= (byte)flag[18] ||
                                 ((((byte)flag[22] <= (byte)flag[19] ||
                                   ((byte)flag[20] <= (byte)flag[22])) ||
                                  ((byte)flag[22] <= (byte)flag[21])))))))) ||
                              (((((((byte)flag[22] <= (byte)flag[23] ||
                                   ((byte)flag[22] <= (byte)flag[24])) ||
                                  (((byte)flag[22] <= (byte)flag[25] ||
                                   (((((byte)flag[22] <= (byte)flag[26] ||
                                      ((byte)flag[22] <= (byte)flag[27])) ||
                                     (((byte)flag[28] <= (byte)flag[22] ||
                                      (((((byte)flag[22] <= (byte)flag[29] ||
                                         ((byte)flag[22] <= (byte)flag[30])) ||
                                        ((byte)flag[22] <= (byte)flag[31])) ||
                                       (((byte)flag[22] <= (byte)flag[32] ||
                                        ((byte)flag[22] <= (byte)flag[33])))))))) ||
                                    ((byte)flag[22] <= (byte)flag[34])))))) ||
                                 (((((byte)flag[22] <= (byte)flag[35] ||
                                    ((byte)flag[36] <= (byte)flag[22])) ||
                                   ((((byte)flag[37] <= (byte)flag[22] ||
                                     ((((byte)flag[22] <= (byte)flag[38] ||
                                       ((byte)flag[22] <= (byte)flag[39])) ||
                                      ((byte)flag[22] <= (byte)flag[40])))) ||
                                    ((((byte)flag[22] <= (byte)flag[41] ||
                                      ((byte)flag[22] <= (byte)flag[42])) ||
                                     ((byte)flag[22] <= (byte)flag[43])))))) ||
                                  (((byte)flag[22] <= (byte)flag[44] ||
                                   ((byte)flag[22] <= (byte)flag[45])))))) ||
                                ((((((byte)flag[22] <= (byte)flag[46] ||
                                    ((((byte)flag[22] <= (byte)flag[47] ||
                                      ((byte)flag[22] <= (byte)flag[48])) ||
                                     ((byte)flag[22] <= (byte)flag[49])))) ||
                                   ((((byte)flag[22] <= (byte)flag[50] ||
                                     ((byte)flag[22] <= (byte)flag[51])) ||
                                    (((byte)flag[22] <= (byte)flag[52] ||
                                     ((((byte)flag[53] <= (byte)flag[22] ||
                                       ((byte)flag[22] <= (byte)flag[54])) ||
                                      (((byte)flag[22] <= (byte)flag[55] ||
                                       (((((((byte)flag[22] <= (byte)flag[56] ||
                                            ((byte)flag[22] <= (byte)flag[58])) ||
                                           ((byte)flag[22] <= (byte)flag[59])) ||
                                          (((byte)flag[22] <= (byte)flag[60] ||
                                           ((byte)flag[22] <= (byte)flag[61])))) ||
                                         ((byte)flag[22] <= (byte)flag[62])) ||
                                        (((byte)flag[22] <= (byte)flag[63] ||
                                         ((byte)flag[22] <= (byte)flag[64])))))))))))))) ||
                                  ((byte)flag[22] <= (byte)flag[65])) ||
                                 ((((((((byte)flag[22] <= (byte)flag[66] ||
                                       ((byte)flag[22] <= (byte)flag[67])) ||
                                      ((byte)flag[68] <= (byte)flag[22])) ||
                                     (((byte)flag[22] <= (byte)flag[69] ||
                                      ((byte)flag[22] <= (byte)flag[70])))) ||
                                    ((((byte)flag[22] <= (byte)flag[71] ||
                                      (((byte)flag[72] <= (byte)flag[22] ||
                                       ((byte)flag[23] <= (byte)flag[0])))) ||
                                     ((byte)flag[23] <= (byte)flag[1])))) ||
                                   ((((byte)flag[23] <= (byte)flag[2] ||
                                     ((byte)flag[23] <= (byte)flag[3])) ||
                                    ((byte)flag[4] <= (byte)flag[23])))) ||
                                  (((((byte)flag[5] <= (byte)flag[23] ||
                                     ((byte)flag[23] <= (byte)flag[6])) ||
                                    (((byte)flag[23] <= (byte)flag[7] ||
                                     (((byte)flag[8] <= (byte)flag[23] ||
                                      ((byte)flag[9] <= (byte)flag[23])))))) ||
                                   (((byte)flag[23] <= (byte)flag[10] ||
                                    (((((((byte)flag[23] <= (byte)flag[11] ||
                                         ((byte)flag[23] <= (byte)flag[12])) ||
                                        ((byte)flag[23] <= (byte)flag[13])) ||
                                       (((byte)flag[14] <= (byte)flag[23] ||
                                        ((byte)flag[15] <= (byte)flag[23])))) ||
                                      (((byte)flag[16] <= (byte)flag[23] ||
                                       (((byte)flag[17] <= (byte)flag[23] ||
                                        ((byte)flag[23] <= (byte)flag[18])))))) ||
                                     ((byte)flag[19] <= (byte)flag[23])))))))))))) ||
                               ((((byte)flag[20] <= (byte)flag[23] ||
                                 ((byte)flag[23] <= (byte)flag[21])) ||
                                ((byte)flag[22] <= (byte)flag[23])))))))))))) ||
                    (((((byte)flag[24] <= (byte)flag[23] || ((byte)flag[23] <= (byte)flag[25])) ||
                      (((byte)flag[23] <= (byte)flag[26] ||
                       (((byte)flag[27] <= (byte)flag[23] || ((byte)flag[28] <= (byte)flag[23]))))))
                     || (((byte)flag[23] <= (byte)flag[29] ||
                         ((((((byte)flag[30] <= (byte)flag[23] || ((byte)flag[31] <= (byte)flag[23])
                             ) || ((byte)flag[23] <= (byte)flag[32])) ||
                           ((((byte)flag[23] <= (byte)flag[33] || ((byte)flag[23] <= (byte)flag[34])
                             ) || (((byte)flag[23] <= (byte)flag[35] ||
                                   (((byte)flag[36] <= (byte)flag[23] ||
                                    ((byte)flag[37] <= (byte)flag[23])))))))) ||
                          (((((byte)flag[23] <= (byte)flag[38] ||
                             (((((byte)flag[39] <= (byte)flag[23] ||
                                ((byte)flag[23] <= (byte)flag[40])) ||
                               ((byte)flag[23] <= (byte)flag[41])) ||
                              (((byte)flag[42] <= (byte)flag[23] ||
                               ((byte)flag[23] <= (byte)flag[43])))))) ||
                            ((((byte)flag[23] <= (byte)flag[44] ||
                              (((byte)flag[23] <= (byte)flag[45] ||
                               ((byte)flag[23] <= (byte)flag[46])))) ||
                             ((byte)flag[47] <= (byte)flag[23])))) ||
                           (((((byte)flag[48] <= (byte)flag[23] ||
                              ((byte)flag[23] <= (byte)flag[49])) ||
                             ((byte)flag[23] <= (byte)flag[50])) ||
                            ((((byte)flag[23] <= (byte)flag[51] ||
                              ((byte)flag[52] <= (byte)flag[23])) ||
                             (((((((byte)flag[53] <= (byte)flag[23] ||
                                  (((byte)flag[54] <= (byte)flag[23] ||
                                   ((byte)flag[55] <= (byte)flag[23])))) ||
                                 ((byte)flag[23] <= (byte)flag[56])) ||
                                ((((((byte)flag[57] <= (byte)flag[23] ||
                                    ((byte)flag[58] <= (byte)flag[23])) ||
                                   ((byte)flag[59] <= (byte)flag[23])) ||
                                  ((((byte)flag[23] <= (byte)flag[61] ||
                                    ((byte)flag[62] <= (byte)flag[23])) ||
                                   (((byte)flag[23] <= (byte)flag[63] ||
                                    (((byte)flag[23] <= (byte)flag[64] ||
                                     ((byte)flag[65] <= (byte)flag[23])))))))) ||
                                 ((byte)flag[23] <= (byte)flag[66])))) ||
                               (((((((byte)flag[23] <= (byte)flag[67] ||
                                    ((byte)flag[68] <= (byte)flag[23])) ||
                                   ((byte)flag[69] <= (byte)flag[23])) ||
                                  (((byte)flag[23] <= (byte)flag[70] ||
                                   ((byte)flag[71] <= (byte)flag[23])))) ||
                                 ((byte)flag[72] <= (byte)flag[23])) ||
                                (((byte)flag[24] <= (byte)flag[0] ||
                                 ((byte)flag[24] <= (byte)flag[1])))))) ||
                              (((byte)flag[24] <= (byte)flag[2] ||
                               ((((byte)flag[24] <= (byte)flag[3] ||
                                 ((byte)flag[4] <= (byte)flag[24])) ||
                                ((byte)flag[5] <= (byte)flag[24])))))))))))))))))))))))) ||
          (((((((((((byte)flag[24] <= (byte)flag[6] || ((byte)flag[24] <= (byte)flag[7])) ||
                  ((byte)flag[8] <= (byte)flag[24])) ||
                 (((byte)flag[9] <= (byte)flag[24] || ((byte)flag[24] <= (byte)flag[10])))) ||
                (((byte)flag[24] <= (byte)flag[11] ||
                 ((((byte)flag[24] <= (byte)flag[12] || ((byte)flag[24] <= (byte)flag[13])) ||
                  ((byte)flag[14] <= (byte)flag[24])))))) ||
               ((((byte)flag[24] <= (byte)flag[15] || ((byte)flag[16] <= (byte)flag[24])) ||
                (((byte)flag[24] <= (byte)flag[17] ||
                 ((((byte)flag[24] <= (byte)flag[18] || ((byte)flag[24] <= (byte)flag[19])) ||
                  (((byte)flag[20] <= (byte)flag[24] ||
                   (((((byte)flag[24] <= (byte)flag[21] || ((byte)flag[22] <= (byte)flag[24])) ||
                     ((byte)flag[24] <= (byte)flag[23])) ||
                    (((byte)flag[24] <= (byte)flag[25] || ((byte)flag[24] <= (byte)flag[26])))))))))
                 ))))) ||
              ((((byte)flag[24] <= (byte)flag[27] ||
                ((((byte)flag[28] <= (byte)flag[24] || ((byte)flag[24] <= (byte)flag[29])) ||
                 ((((byte)flag[30] <= (byte)flag[24] ||
                   ((((byte)flag[31] <= (byte)flag[24] || ((byte)flag[24] <= (byte)flag[32])) ||
                    ((byte)flag[24] <= (byte)flag[33])))) ||
                  ((((byte)flag[24] <= (byte)flag[34] || ((byte)flag[24] <= (byte)flag[35])) ||
                   ((byte)flag[36] <= (byte)flag[24])))))))) ||
               (((byte)flag[37] <= (byte)flag[24] || ((byte)flag[24] <= (byte)flag[38])))))) ||
             ((((((byte)flag[24] <= (byte)flag[39] ||
                 ((((byte)flag[24] <= (byte)flag[40] || ((byte)flag[24] <= (byte)flag[41])) ||
                  ((byte)flag[24] <= (byte)flag[42])))) ||
                ((((byte)flag[24] <= (byte)flag[43] || ((byte)flag[24] <= (byte)flag[44])) ||
                 (((byte)flag[24] <= (byte)flag[45] ||
                  ((((byte)flag[24] <= (byte)flag[46] || ((byte)flag[47] <= (byte)flag[24])) ||
                   (((byte)flag[24] <= (byte)flag[48] ||
                    (((((byte)flag[24] <= (byte)flag[49] || ((byte)flag[24] <= (byte)flag[50])) ||
                      ((byte)flag[24] <= (byte)flag[51])) ||
                     (((byte)flag[24] <= (byte)flag[52] || ((byte)flag[53] <= (byte)flag[24]))))))))
                  )))))) ||
               (((byte)flag[54] <= (byte)flag[24] ||
                ((((byte)flag[24] <= (byte)flag[55] || ((byte)flag[24] <= (byte)flag[56])) ||
                 (((((((byte)flag[57] <= (byte)flag[24] ||
                      ((((byte)flag[58] <= (byte)flag[24] || ((byte)flag[24] <= (byte)flag[59])) ||
                       ((byte)flag[24] <= (byte)flag[60])))) ||
                     ((((byte)flag[24] <= (byte)flag[61] || ((byte)flag[62] <= (byte)flag[24])) ||
                      ((byte)flag[24] <= (byte)flag[63])))) ||
                    (((byte)flag[24] <= (byte)flag[64] || ((byte)flag[24] <= (byte)flag[65])))) ||
                   (((byte)flag[24] <= (byte)flag[66] ||
                    ((((byte)flag[24] <= (byte)flag[67] || ((byte)flag[68] <= (byte)flag[24])) ||
                     ((byte)flag[69] <= (byte)flag[24])))))) ||
                  (((((byte)flag[24] <= (byte)flag[70] || ((byte)flag[71] <= (byte)flag[24])) ||
                    (((byte)flag[72] <= (byte)flag[24] ||
                     (((((byte)flag[0] <= (byte)flag[25] || ((byte)flag[1] <= (byte)flag[25])) ||
                       (((byte)flag[25] <= (byte)flag[2] ||
                        ((((((byte)flag[3] <= (byte)flag[25] || ((byte)flag[4] <= (byte)flag[25]))
                           || ((byte)flag[5] <= (byte)flag[25])) ||
                          (((byte)flag[6] <= (byte)flag[25] || ((byte)flag[8] <= (byte)flag[25]))))
                         || ((byte)flag[9] <= (byte)flag[25])))))) ||
                      (((byte)flag[10] <= (byte)flag[25] || ((byte)flag[25] <= (byte)flag[11])))))))
                    ) || ((byte)flag[12] <= (byte)flag[25])))))))))) ||
              (((((((byte)flag[25] <= (byte)flag[13] || ((byte)flag[14] <= (byte)flag[25])) ||
                  ((byte)flag[15] <= (byte)flag[25])) ||
                 ((((byte)flag[16] <= (byte)flag[25] || ((byte)flag[17] <= (byte)flag[25])) ||
                  (((byte)flag[18] <= (byte)flag[25] ||
                   (((byte)flag[19] <= (byte)flag[25] || ((byte)flag[20] <= (byte)flag[25]))))))))
                || ((((((((byte)flag[21] <= (byte)flag[25] ||
                         (((((byte)flag[22] <= (byte)flag[25] || ((byte)flag[23] <= (byte)flag[25]))
                           || ((byte)flag[24] <= (byte)flag[25])) ||
                          (((byte)flag[25] <= (byte)flag[26] || ((byte)flag[27] <= (byte)flag[25])))
                          ))) || ((((byte)flag[28] <= (byte)flag[25] ||
                                   (((byte)flag[30] <= (byte)flag[25] ||
                                    ((byte)flag[31] <= (byte)flag[25])))) ||
                                  ((byte)flag[32] <= (byte)flag[25])))) ||
                       (((((((byte)flag[34] <= (byte)flag[25] || ((byte)flag[25] <= (byte)flag[35]))
                           || ((byte)flag[36] <= (byte)flag[25])) ||
                          (((byte)flag[37] <= (byte)flag[25] || ((byte)flag[25] <= (byte)flag[38])))
                          ) || (((byte)flag[39] <= (byte)flag[25] ||
                                (((byte)flag[40] <= (byte)flag[25] ||
                                 ((byte)flag[25] <= (byte)flag[41])))))) ||
                        ((byte)flag[42] <= (byte)flag[25])))) ||
                      (((((byte)flag[25] <= (byte)flag[43] || ((byte)flag[44] <= (byte)flag[25])) ||
                        ((byte)flag[25] <= (byte)flag[46])) ||
                       ((((byte)flag[47] <= (byte)flag[25] || ((byte)flag[48] <= (byte)flag[25])) ||
                        (((byte)flag[25] <= (byte)flag[50] ||
                         (((byte)flag[51] <= (byte)flag[25] || ((byte)flag[52] <= (byte)flag[25]))))
                        )))))) ||
                     (((byte)flag[53] <= (byte)flag[25] ||
                      ((((byte)flag[54] <= (byte)flag[25] || ((byte)flag[55] <= (byte)flag[25])) ||
                       ((byte)flag[25] <= (byte)flag[56])))))) ||
                    (((byte)flag[57] <= (byte)flag[25] || ((byte)flag[58] <= (byte)flag[25])))))) ||
               ((((((byte)flag[59] <= (byte)flag[25] ||
                   (((byte)flag[60] <= (byte)flag[25] || ((byte)flag[25] <= (byte)flag[61])))) ||
                  ((byte)flag[62] <= (byte)flag[25])) ||
                 (((((((byte)flag[25] <= (byte)flag[64] || ((byte)flag[65] <= (byte)flag[25])) ||
                     ((byte)flag[25] <= (byte)flag[66])) ||
                    (((byte)flag[67] <= (byte)flag[25] || ((byte)flag[68] <= (byte)flag[25])))) ||
                   (((byte)flag[69] <= (byte)flag[25] ||
                    (((byte)flag[70] <= (byte)flag[25] || ((byte)flag[71] <= (byte)flag[25])))))) ||
                  (((byte)flag[72] <= (byte)flag[25] ||
                   (((((byte)flag[0] <= (byte)flag[26] || ((byte)flag[1] <= (byte)flag[26])) ||
                     ((byte)flag[26] <= (byte)flag[2])) ||
                    ((((byte)flag[3] <= (byte)flag[26] || ((byte)flag[4] <= (byte)flag[26])) ||
                     (((byte)flag[5] <= (byte)flag[26] ||
                      (((byte)flag[6] <= (byte)flag[26] || ((byte)flag[7] <= (byte)flag[26])))))))))
                   ))))) ||
                ((((byte)flag[8] <= (byte)flag[26] ||
                  ((((byte)flag[9] <= (byte)flag[26] || ((byte)flag[10] <= (byte)flag[26])) ||
                   ((byte)flag[26] <= (byte)flag[11])))) ||
                 ((((byte)flag[12] <= (byte)flag[26] || ((byte)flag[26] <= (byte)flag[13])) ||
                  ((((byte)flag[14] <= (byte)flag[26] ||
                    (((byte)flag[15] <= (byte)flag[26] || ((byte)flag[16] <= (byte)flag[26])))) ||
                   ((byte)flag[17] <= (byte)flag[26])))))))))))))) ||
            ((((((((byte)flag[18] <= (byte)flag[26] || ((byte)flag[19] <= (byte)flag[26])) ||
                 ((byte)flag[20] <= (byte)flag[26])) ||
                (((byte)flag[21] <= (byte)flag[26] || ((byte)flag[22] <= (byte)flag[26])))) ||
               ((byte)flag[23] <= (byte)flag[26])) ||
              (((byte)flag[24] <= (byte)flag[26] || ((byte)flag[25] <= (byte)flag[26])))) ||
             (((byte)flag[27] <= (byte)flag[26] ||
              ((((byte)flag[28] <= (byte)flag[26] || ((byte)flag[29] <= (byte)flag[26])) ||
               ((byte)flag[30] <= (byte)flag[26])))))))) ||
           ((((((((((((byte)flag[31] <= (byte)flag[26] || ((byte)flag[32] <= (byte)flag[26])) ||
                    ((byte)flag[33] <= (byte)flag[26])) ||
                   (((byte)flag[34] <= (byte)flag[26] || ((byte)flag[26] <= (byte)flag[35])))) ||
                  ((((byte)flag[36] <= (byte)flag[26] ||
                    ((((byte)flag[37] <= (byte)flag[26] || ((byte)flag[39] <= (byte)flag[26])) ||
                     ((byte)flag[40] <= (byte)flag[26])))) ||
                   ((((byte)flag[26] <= (byte)flag[41] || ((byte)flag[42] <= (byte)flag[26])) ||
                    ((((byte)flag[44] <= (byte)flag[26] ||
                      ((((byte)flag[45] <= (byte)flag[26] || ((byte)flag[26] <= (byte)flag[46])) ||
                       (((byte)flag[47] <= (byte)flag[26] ||
                        (((((byte)flag[48] <= (byte)flag[26] || ((byte)flag[49] <= (byte)flag[26]))
                          || ((byte)flag[51] <= (byte)flag[26])) ||
                         (((byte)flag[52] <= (byte)flag[26] || ((byte)flag[53] <= (byte)flag[26]))))
                        )))))) || ((byte)flag[54] <= (byte)flag[26])))))))) ||
                 (((((byte)flag[55] <= (byte)flag[26] || ((byte)flag[26] <= (byte)flag[56])) ||
                   (((((byte)flag[57] <= (byte)flag[26] ||
                      ((((byte)flag[58] <= (byte)flag[26] || ((byte)flag[59] <= (byte)flag[26])) ||
                       ((byte)flag[60] <= (byte)flag[26])))) ||
                     ((((byte)flag[26] <= (byte)flag[61] || ((byte)flag[62] <= (byte)flag[26])) ||
                      ((byte)flag[63] <= (byte)flag[26])))) ||
                    (((byte)flag[26] <= (byte)flag[64] || ((byte)flag[65] <= (byte)flag[26])))))) ||
                  (((((((byte)flag[26] <= (byte)flag[66] ||
                       ((((byte)flag[67] <= (byte)flag[26] || ((byte)flag[68] <= (byte)flag[26])) ||
                        ((byte)flag[69] <= (byte)flag[26])))) ||
                      (((byte)flag[70] <= (byte)flag[26] || ((byte)flag[71] <= (byte)flag[26])))) ||
                     (((byte)flag[72] <= (byte)flag[26] ||
                      ((((byte)flag[27] <= (byte)flag[0] || ((byte)flag[27] <= (byte)flag[1])) ||
                       (((byte)flag[27] <= (byte)flag[2] ||
                        (((((byte)flag[27] <= (byte)flag[3] || ((byte)flag[4] <= (byte)flag[27])) ||
                          ((byte)flag[5] <= (byte)flag[27])) ||
                         (((byte)flag[27] <= (byte)flag[6] || ((byte)flag[27] <= (byte)flag[7]))))))
                       )))))) || ((byte)flag[8] <= (byte)flag[27])) ||
                   ((((((byte)flag[9] <= (byte)flag[27] || ((byte)flag[27] <= (byte)flag[10])) ||
                      ((((byte)flag[27] <= (byte)flag[11] ||
                        ((((byte)flag[27] <= (byte)flag[12] || ((byte)flag[27] <= (byte)flag[13]))
                         || ((byte)flag[14] <= (byte)flag[27])))) ||
                       ((((byte)flag[16] <= (byte)flag[27] || ((byte)flag[27] <= (byte)flag[17])) ||
                        ((byte)flag[27] <= (byte)flag[18])))))) ||
                     (((byte)flag[20] <= (byte)flag[27] || ((byte)flag[27] <= (byte)flag[21])))) ||
                    (((byte)flag[22] <= (byte)flag[27] ||
                     ((((byte)flag[27] <= (byte)flag[23] || ((byte)flag[24] <= (byte)flag[27])) ||
                      ((byte)flag[27] <= (byte)flag[25])))))))))))) ||
                (((((byte)flag[27] <= (byte)flag[26] || ((byte)flag[28] <= (byte)flag[27])) ||
                  (((byte)flag[27] <= (byte)flag[29] ||
                   ((((((byte)flag[30] <= (byte)flag[27] || ((byte)flag[31] <= (byte)flag[27])) ||
                      (((byte)flag[27] <= (byte)flag[32] ||
                       ((((((byte)flag[27] <= (byte)flag[33] || ((byte)flag[27] <= (byte)flag[34]))
                          || ((byte)flag[27] <= (byte)flag[35])) ||
                         (((byte)flag[36] <= (byte)flag[27] || ((byte)flag[37] <= (byte)flag[27]))))
                        || ((byte)flag[27] <= (byte)flag[38])))))) ||
                     (((byte)flag[27] <= (byte)flag[40] || ((byte)flag[27] <= (byte)flag[41])))) ||
                    ((byte)flag[27] <= (byte)flag[42])))))) ||
                 ((((((byte)flag[27] <= (byte)flag[43] || ((byte)flag[27] <= (byte)flag[44])) ||
                    ((byte)flag[27] <= (byte)flag[45])) ||
                   ((((byte)flag[27] <= (byte)flag[46] || ((byte)flag[47] <= (byte)flag[27])) ||
                    (((byte)flag[27] <= (byte)flag[48] ||
                     (((byte)flag[27] <= (byte)flag[49] || ((byte)flag[27] <= (byte)flag[50]))))))))
                  || ((byte)flag[27] <= (byte)flag[51])))))) ||
               ((((((byte)flag[53] <= (byte)flag[27] || ((byte)flag[54] <= (byte)flag[27])) ||
                  ((byte)flag[27] <= (byte)flag[56])) ||
                 (((byte)flag[57] <= (byte)flag[27] || ((byte)flag[58] <= (byte)flag[27])))) ||
                ((((byte)flag[27] <= (byte)flag[60] ||
                  (((byte)flag[27] <= (byte)flag[61] || ((byte)flag[62] <= (byte)flag[27])))) ||
                 ((byte)flag[27] <= (byte)flag[63])))))) ||
              ((((((byte)flag[27] <= (byte)flag[64] || ((byte)flag[27] <= (byte)flag[65])) ||
                 ((byte)flag[27] <= (byte)flag[66])) ||
                (((byte)flag[27] <= (byte)flag[67] || ((byte)flag[68] <= (byte)flag[27])))) ||
               (((byte)flag[69] <= (byte)flag[27] ||
                (((byte)flag[27] <= (byte)flag[70] || ((byte)flag[71] <= (byte)flag[27])))))))) ||
             (((byte)flag[72] <= (byte)flag[27] ||
              ((((((byte)flag[28] <= (byte)flag[0] || ((byte)flag[28] <= (byte)flag[1])) ||
                 ((byte)flag[28] <= (byte)flag[2])) ||
                ((((byte)flag[28] <= (byte)flag[3] || ((byte)flag[4] <= (byte)flag[28])) ||
                 (((byte)flag[28] <= (byte)flag[5] ||
                  (((byte)flag[28] <= (byte)flag[6] || ((byte)flag[28] <= (byte)flag[7])))))))) ||
               (((byte)flag[28] <= (byte)flag[8] ||
                ((((byte)flag[28] <= (byte)flag[9] || ((byte)flag[28] <= (byte)flag[10])) ||
                 ((byte)flag[28] <= (byte)flag[11])))))))))) ||
            ((((((((byte)flag[28] <= (byte)flag[12] || ((byte)flag[28] <= (byte)flag[13])) ||
                 (((byte)flag[28] <= (byte)flag[14] ||
                  (((byte)flag[28] <= (byte)flag[15] || ((byte)flag[16] <= (byte)flag[28])))))) ||
                (((byte)flag[28] <= (byte)flag[17] ||
                 (((((byte)flag[28] <= (byte)flag[18] || ((byte)flag[28] <= (byte)flag[19])) ||
                   ((byte)flag[20] <= (byte)flag[28])) ||
                  (((byte)flag[28] <= (byte)flag[21] || ((byte)flag[28] <= (byte)flag[22])))))))) ||
               (((byte)flag[28] <= (byte)flag[23] ||
                (((byte)flag[28] <= (byte)flag[24] || ((byte)flag[28] <= (byte)flag[25])))))) ||
              ((((byte)flag[28] <= (byte)flag[26] ||
                (((((byte)flag[28] <= (byte)flag[27] || ((byte)flag[28] <= (byte)flag[29])) ||
                  ((byte)flag[28] <= (byte)flag[30])) ||
                 ((((byte)flag[28] <= (byte)flag[31] || ((byte)flag[28] <= (byte)flag[32])) ||
                  (((byte)flag[28] <= (byte)flag[33] ||
                   (((byte)flag[28] <= (byte)flag[34] || ((byte)flag[28] <= (byte)flag[35]))))))))))
               || (((byte)flag[36] <= (byte)flag[28] ||
                   ((((byte)flag[37] <= (byte)flag[28] || ((byte)flag[28] <= (byte)flag[38])) ||
                    ((byte)flag[28] <= (byte)flag[39])))))))) ||
             (((((((((byte)flag[28] <= (byte)flag[40] || ((byte)flag[28] <= (byte)flag[41])) ||
                   (((((((byte)flag[28] <= (byte)flag[42] ||
                        (((byte)flag[28] <= (byte)flag[43] || ((byte)flag[28] <= (byte)flag[44]))))
                       || ((byte)flag[28] <= (byte)flag[45])) ||
                      ((((((byte)flag[28] <= (byte)flag[46] || ((byte)flag[28] <= (byte)flag[47]))
                         || ((byte)flag[28] <= (byte)flag[48])) ||
                        (((byte)flag[28] <= (byte)flag[49] || ((byte)flag[28] <= (byte)flag[50]))))
                       || ((byte)flag[28] <= (byte)flag[51])))) ||
                     ((((byte)flag[28] <= (byte)flag[52] || ((byte)flag[53] <= (byte)flag[28])) ||
                      (((byte)flag[28] <= (byte)flag[54] ||
                       ((((byte)flag[28] <= (byte)flag[55] || ((byte)flag[28] <= (byte)flag[56])) ||
                        ((byte)flag[28] <= (byte)flag[57])))))))) ||
                    (((((byte)flag[28] <= (byte)flag[58] || ((byte)flag[28] <= (byte)flag[59])) ||
                      (((byte)flag[28] <= (byte)flag[60] ||
                       ((((byte)flag[28] <= (byte)flag[61] || ((byte)flag[28] <= (byte)flag[62])) ||
                        (((byte)flag[28] <= (byte)flag[63] ||
                         ((((byte)flag[28] <= (byte)flag[64] || ((byte)flag[28] <= (byte)flag[65]))
                          || ((byte)flag[28] <= (byte)flag[66])))))))))) ||
                     (((byte)flag[28] <= (byte)flag[67] || ((byte)flag[68] <= (byte)flag[28]))))))))
                  || (((byte)flag[28] <= (byte)flag[69] ||
                      ((((((((byte)flag[28] <= (byte)flag[70] || ((byte)flag[28] <= (byte)flag[71]))
                           || (((byte)flag[72] <= (byte)flag[28] ||
                               (((((byte)flag[0] <= (byte)flag[29] ||
                                  ((byte)flag[1] <= (byte)flag[29])) ||
                                 ((byte)flag[29] <= (byte)flag[2])) ||
                                (((byte)flag[3] <= (byte)flag[29] ||
                                 ((byte)flag[4] <= (byte)flag[29])))))))) ||
                          ((byte)flag[5] <= (byte)flag[29])) ||
                         ((((byte)flag[6] <= (byte)flag[29] || ((byte)flag[8] <= (byte)flag[29])) ||
                          (((byte)flag[9] <= (byte)flag[29] ||
                           ((((byte)flag[10] <= (byte)flag[29] || ((byte)flag[29] <= (byte)flag[11])
                             ) || ((byte)flag[12] <= (byte)flag[29])))))))) ||
                        ((((((byte)flag[29] <= (byte)flag[13] || ((byte)flag[14] <= (byte)flag[29]))
                           || ((byte)flag[15] <= (byte)flag[29])) ||
                          (((byte)flag[16] <= (byte)flag[29] || ((byte)flag[17] <= (byte)flag[29])))
                          ) || ((((byte)flag[18] <= (byte)flag[29] ||
                                 ((((byte)flag[19] <= (byte)flag[29] ||
                                   ((byte)flag[20] <= (byte)flag[29])) ||
                                  ((byte)flag[21] <= (byte)flag[29])))) ||
                                ((((byte)flag[22] <= (byte)flag[29] ||
                                  ((byte)flag[23] <= (byte)flag[29])) ||
                                 (((byte)flag[24] <= (byte)flag[29] ||
                                  ((((byte)flag[29] <= (byte)flag[26] ||
                                    ((byte)flag[27] <= (byte)flag[29])) ||
                                   (((byte)flag[28] <= (byte)flag[29] ||
                                    (((((byte)flag[30] <= (byte)flag[29] ||
                                       ((byte)flag[31] <= (byte)flag[29])) ||
                                      ((byte)flag[32] <= (byte)flag[29])) ||
                                     (((byte)flag[34] <= (byte)flag[29] ||
                                      ((byte)flag[29] <= (byte)flag[35])))))))))))))))))) ||
                       ((byte)flag[36] <= (byte)flag[29])))))) ||
                 ((((byte)flag[37] <= (byte)flag[29] || ((byte)flag[29] <= (byte)flag[38])) ||
                  ((((((byte)flag[39] <= (byte)flag[29] ||
                      ((((byte)flag[40] <= (byte)flag[29] || ((byte)flag[29] <= (byte)flag[41])) ||
                       ((byte)flag[42] <= (byte)flag[29])))) ||
                     ((((byte)flag[29] <= (byte)flag[43] || ((byte)flag[44] <= (byte)flag[29])) ||
                      ((byte)flag[29] <= (byte)flag[46])))) ||
                    ((((byte)flag[47] <= (byte)flag[29] || ((byte)flag[48] <= (byte)flag[29])) ||
                     (((byte)flag[29] <= (byte)flag[50] ||
                      ((((byte)flag[51] <= (byte)flag[29] || ((byte)flag[52] <= (byte)flag[29])) ||
                       ((byte)flag[53] <= (byte)flag[29])))))))) ||
                   (((byte)flag[54] <= (byte)flag[29] || ((byte)flag[55] <= (byte)flag[29]))))))))
                || (((((((byte)flag[29] <= (byte)flag[56] ||
                        (((((byte)flag[57] <= (byte)flag[29] || ((byte)flag[58] <= (byte)flag[29]))
                          || (((byte)flag[59] <= (byte)flag[29] ||
                              (((((((((byte)flag[60] <= (byte)flag[29] ||
                                     ((byte)flag[29] <= (byte)flag[61])) ||
                                    ((byte)flag[62] <= (byte)flag[29])) ||
                                   (((byte)flag[29] <= (byte)flag[64] ||
                                    ((byte)flag[65] <= (byte)flag[29])))) ||
                                  ((byte)flag[29] <= (byte)flag[66])) ||
                                 (((byte)flag[67] <= (byte)flag[29] ||
                                  ((byte)flag[68] <= (byte)flag[29])))) ||
                                ((byte)flag[69] <= (byte)flag[29])) ||
                               ((((byte)flag[70] <= (byte)flag[29] ||
                                 ((byte)flag[71] <= (byte)flag[29])) ||
                                ((byte)flag[72] <= (byte)flag[29])))))))) ||
                         (((byte)flag[30] <= (byte)flag[0] || ((byte)flag[30] <= (byte)flag[1]))))))
                       || ((byte)flag[30] <= (byte)flag[2])) ||
                      ((((byte)flag[30] <= (byte)flag[3] || ((byte)flag[4] <= (byte)flag[30])) ||
                       (((byte)flag[5] <= (byte)flag[30] ||
                        ((((byte)flag[30] <= (byte)flag[6] || ((byte)flag[30] <= (byte)flag[7])) ||
                         ((byte)flag[30] <= (byte)flag[8])))))))) ||
                     ((((byte)flag[9] <= (byte)flag[30] || ((byte)flag[30] <= (byte)flag[10])) ||
                      (((byte)flag[30] <= (byte)flag[11] ||
                       ((((byte)flag[30] <= (byte)flag[12] || ((byte)flag[30] <= (byte)flag[13])) ||
                        (((byte)flag[30] <= (byte)flag[15] ||
                         (((((byte)flag[16] <= (byte)flag[30] || ((byte)flag[30] <= (byte)flag[17]))
                           || ((byte)flag[30] <= (byte)flag[18])) ||
                          (((byte)flag[30] <= (byte)flag[19] || ((byte)flag[20] <= (byte)flag[30])))
                          ))))))))))) || ((byte)flag[30] <= (byte)flag[21])))) ||
               (((byte)flag[22] <= (byte)flag[30] || ((byte)flag[30] <= (byte)flag[23])))) ||
              (((((byte)flag[30] <= (byte)flag[24] ||
                 ((((byte)flag[30] <= (byte)flag[25] || ((byte)flag[30] <= (byte)flag[26])) ||
                  ((byte)flag[30] <= (byte)flag[27])))) ||
                ((((byte)flag[28] <= (byte)flag[30] || ((byte)flag[30] <= (byte)flag[29])) ||
                 ((byte)flag[31] <= (byte)flag[30])))) ||
               (((((((byte)flag[30] <= (byte)flag[32] || ((byte)flag[30] <= (byte)flag[33])) ||
                   (((byte)flag[30] <= (byte)flag[34] ||
                    ((((byte)flag[30] <= (byte)flag[35] || ((byte)flag[36] <= (byte)flag[30])) ||
                     ((byte)flag[37] <= (byte)flag[30])))))) ||
                  ((((byte)flag[30] <= (byte)flag[38] || ((byte)flag[30] <= (byte)flag[39])) ||
                   (((byte)flag[30] <= (byte)flag[40] ||
                    (((((((byte)flag[30] <= (byte)flag[41] || ((byte)flag[30] <= (byte)flag[42])) ||
                        (((byte)flag[30] <= (byte)flag[43] ||
                         (((((byte)flag[30] <= (byte)flag[44] || ((byte)flag[30] <= (byte)flag[45]))
                           || ((byte)flag[30] <= (byte)flag[46])) ||
                          (((byte)flag[30] <= (byte)flag[48] || ((byte)flag[30] <= (byte)flag[49])))
                          ))))) || ((byte)flag[30] <= (byte)flag[50])) ||
                      (((byte)flag[30] <= (byte)flag[51] || ((byte)flag[30] <= (byte)flag[52])))) ||
                     (((((byte)flag[53] <= (byte)flag[30] ||
                        ((((byte)flag[54] <= (byte)flag[30] || ((byte)flag[30] <= (byte)flag[55]))
                         || ((byte)flag[30] <= (byte)flag[56])))) ||
                       ((((byte)flag[57] <= (byte)flag[30] || ((byte)flag[58] <= (byte)flag[30])) ||
                        ((byte)flag[30] <= (byte)flag[59])))) ||
                      (((byte)flag[30] <= (byte)flag[60] || ((byte)flag[30] <= (byte)flag[61])))))))
                    ))))) ||
                 ((((byte)flag[62] <= (byte)flag[30] ||
                   ((((byte)flag[30] <= (byte)flag[63] || ((byte)flag[30] <= (byte)flag[64])) ||
                    ((byte)flag[30] <= (byte)flag[65])))) ||
                  (((((byte)flag[30] <= (byte)flag[66] || ((byte)flag[30] <= (byte)flag[67])) ||
                    ((byte)flag[68] <= (byte)flag[30])) ||
                   ((((byte)flag[69] <= (byte)flag[30] || ((byte)flag[30] <= (byte)flag[70])) ||
                    (((byte)flag[71] <= (byte)flag[30] ||
                     ((((((byte)flag[72] <= (byte)flag[30] || ((byte)flag[31] <= (byte)flag[0])) ||
                        ((byte)flag[31] <= (byte)flag[1])) ||
                       (((byte)flag[31] <= (byte)flag[2] || ((byte)flag[31] <= (byte)flag[3])))) ||
                      ((byte)flag[4] <= (byte)flag[31])))))))))))) ||
                (((byte)flag[31] <= (byte)flag[6] || ((byte)flag[31] <= (byte)flag[7])))))))))))))))
          ) || ((((((byte)flag[31] <= (byte)flag[8] ||
                   ((((((byte)flag[9] <= (byte)flag[31] || ((byte)flag[31] <= (byte)flag[10])) ||
                      ((byte)flag[31] <= (byte)flag[11])) ||
                     ((((byte)flag[31] <= (byte)flag[12] || ((byte)flag[31] <= (byte)flag[13])) ||
                      (((byte)flag[31] <= (byte)flag[14] ||
                       (((byte)flag[31] <= (byte)flag[15] || ((byte)flag[16] <= (byte)flag[31]))))))
                     )) || ((byte)flag[31] <= (byte)flag[17])))) ||
                  (((((byte)flag[31] <= (byte)flag[18] || ((byte)flag[31] <= (byte)flag[19])) ||
                    ((byte)flag[20] <= (byte)flag[31])) ||
                   ((((byte)flag[31] <= (byte)flag[21] || ((byte)flag[22] <= (byte)flag[31])) ||
                    (((((byte)flag[31] <= (byte)flag[23] ||
                       (((byte)flag[31] <= (byte)flag[24] || ((byte)flag[31] <= (byte)flag[25]))))
                      || ((byte)flag[31] <= (byte)flag[26])) ||
                     (((((((byte)flag[31] <= (byte)flag[27] || ((byte)flag[28] <= (byte)flag[31]))
                         || ((byte)flag[31] <= (byte)flag[29])) ||
                        (((byte)flag[31] <= (byte)flag[30] || ((byte)flag[31] <= (byte)flag[32]))))
                       || (((byte)flag[31] <= (byte)flag[33] ||
                           (((byte)flag[31] <= (byte)flag[34] || ((byte)flag[31] <= (byte)flag[35]))
                           )))) || ((byte)flag[36] <= (byte)flag[31])))))))))) ||
                 (((((byte)flag[37] <= (byte)flag[31] || ((byte)flag[31] <= (byte)flag[38])) ||
                   ((byte)flag[31] <= (byte)flag[39])) ||
                  ((((byte)flag[31] <= (byte)flag[40] || ((byte)flag[31] <= (byte)flag[41])) ||
                   (((byte)flag[31] <= (byte)flag[42] ||
                    (((byte)flag[31] <= (byte)flag[43] || ((byte)flag[31] <= (byte)flag[44])))))))))
                 ) || ((((byte)flag[31] <= (byte)flag[45] ||
                        (((((byte)flag[31] <= (byte)flag[46] || ((byte)flag[31] <= (byte)flag[47]))
                          || ((byte)flag[31] <= (byte)flag[48])) ||
                         ((((byte)flag[31] <= (byte)flag[49] || ((byte)flag[31] <= (byte)flag[50]))
                          || (((byte)flag[31] <= (byte)flag[51] ||
                              (((byte)flag[31] <= (byte)flag[52] ||
                               ((byte)flag[53] <= (byte)flag[31])))))))))) ||
                       (((((byte)flag[31] <= (byte)flag[55] ||
                          (((((byte)flag[31] <= (byte)flag[56] || ((byte)flag[57] <= (byte)flag[31])
                             ) || ((byte)flag[31] <= (byte)flag[59])) ||
                           (((byte)flag[31] <= (byte)flag[60] || ((byte)flag[31] <= (byte)flag[61]))
                           )))) || ((((byte)flag[31] <= (byte)flag[63] ||
                                     (((byte)flag[31] <= (byte)flag[64] ||
                                      ((byte)flag[31] <= (byte)flag[65])))) ||
                                    ((byte)flag[31] <= (byte)flag[66])))) ||
                        (((((((byte)flag[31] <= (byte)flag[67] || ((byte)flag[68] <= (byte)flag[31])
                             ) || ((byte)flag[31] <= (byte)flag[69])) ||
                           ((((byte)flag[31] <= (byte)flag[70] || ((byte)flag[31] <= (byte)flag[71])
                             ) || (((byte)flag[72] <= (byte)flag[31] ||
                                   (((byte)flag[32] <= (byte)flag[0] ||
                                    ((byte)flag[1] <= (byte)flag[32])))))))) ||
                          (((byte)flag[32] <= (byte)flag[2] ||
                           ((((byte)flag[32] <= (byte)flag[3] || ((byte)flag[4] <= (byte)flag[32]))
                            || ((byte)flag[5] <= (byte)flag[32])))))) ||
                         (((byte)flag[32] <= (byte)flag[7] || ((byte)flag[8] <= (byte)flag[32]))))))
                       )))))))) ||
       ((((((byte)flag[9] <= (byte)flag[32] ||
           (((byte)flag[10] <= (byte)flag[32] || ((byte)flag[32] <= (byte)flag[11])))) ||
          ((byte)flag[12] <= (byte)flag[32])) ||
         (((((((byte)flag[32] <= (byte)flag[13] || ((byte)flag[14] <= (byte)flag[32])) ||
             ((byte)flag[15] <= (byte)flag[32])) ||
            (((byte)flag[16] <= (byte)flag[32] || ((byte)flag[17] <= (byte)flag[32])))) ||
           ((byte)flag[32] <= (byte)flag[18])) ||
          ((((byte)flag[19] <= (byte)flag[32] || ((byte)flag[20] <= (byte)flag[32])) ||
           (((byte)flag[21] <= (byte)flag[32] ||
            ((((byte)flag[22] <= (byte)flag[32] || ((byte)flag[23] <= (byte)flag[32])) ||
             ((byte)flag[24] <= (byte)flag[32])))))))))) ||
        (((((byte)flag[32] <= (byte)flag[25] || ((byte)flag[32] <= (byte)flag[26])) ||
          ((byte)flag[27] <= (byte)flag[32])) ||
         ((((((byte)flag[28] <= (byte)flag[32] || ((byte)flag[32] <= (byte)flag[29])) ||
            (((byte)flag[30] <= (byte)flag[32] ||
             ((((byte)flag[31] <= (byte)flag[32] || ((byte)flag[32] <= (byte)flag[33])) ||
              ((byte)flag[34] <= (byte)flag[32])))))) ||
           (((byte)flag[32] <= (byte)flag[35] || ((byte)flag[36] <= (byte)flag[32])))) ||
          (((byte)flag[37] <= (byte)flag[32] ||
           ((((byte)flag[32] <= (byte)flag[38] || ((byte)flag[39] <= (byte)flag[32])) ||
            (((byte)flag[32] <= (byte)flag[40] ||
             (((((byte)flag[32] <= (byte)flag[41] || ((byte)flag[42] <= (byte)flag[32])) ||
               ((byte)flag[32] <= (byte)flag[43])) ||
              (((byte)flag[44] <= (byte)flag[32] || ((byte)flag[32] <= (byte)flag[45])))))))))))))))
        ))))) ||
     (((((((byte)flag[32] <= (byte)flag[46] ||
          (((byte)flag[47] <= (byte)flag[32] || ((byte)flag[48] <= (byte)flag[32])))) ||
         (((((byte)flag[32] <= (byte)flag[49] ||
            ((((byte)flag[32] <= (byte)flag[50] || ((byte)flag[52] <= (byte)flag[32])) ||
             ((byte)flag[53] <= (byte)flag[32])))) ||
           (((((((byte)flag[54] <= (byte)flag[32] || ((byte)flag[55] <= (byte)flag[32])) ||
               ((byte)flag[32] <= (byte)flag[56])) ||
              (((byte)flag[57] <= (byte)flag[32] || ((byte)flag[58] <= (byte)flag[32])))) ||
             ((((byte)flag[59] <= (byte)flag[32] ||
               ((((byte)flag[60] <= (byte)flag[32] || ((byte)flag[32] <= (byte)flag[61])) ||
                ((byte)flag[62] <= (byte)flag[32])))) ||
              ((((byte)flag[32] <= (byte)flag[63] || ((byte)flag[32] <= (byte)flag[64])) ||
               (((byte)flag[65] <= (byte)flag[32] ||
                (((((byte)flag[32] <= (byte)flag[66] || ((byte)flag[67] <= (byte)flag[32])) ||
                  (((byte)flag[68] <= (byte)flag[32] ||
                   (((((byte)flag[69] <= (byte)flag[32] || ((byte)flag[70] <= (byte)flag[32])) ||
                     ((byte)flag[71] <= (byte)flag[32])) ||
                    (((byte)flag[72] <= (byte)flag[32] || ((byte)flag[0] <= (byte)flag[33]))))))))
                 || ((byte)flag[1] <= (byte)flag[33])))))))))) ||
            (((((byte)flag[33] <= (byte)flag[2] || ((byte)flag[3] <= (byte)flag[33])) ||
              (((((byte)flag[4] <= (byte)flag[33] ||
                 ((((byte)flag[5] <= (byte)flag[33] || ((byte)flag[6] <= (byte)flag[33])) ||
                  ((byte)flag[8] <= (byte)flag[33])))) ||
                ((((byte)flag[9] <= (byte)flag[33] || ((byte)flag[10] <= (byte)flag[33])) ||
                 ((byte)flag[33] <= (byte)flag[11])))) ||
               (((byte)flag[12] <= (byte)flag[33] || ((byte)flag[33] <= (byte)flag[13])))))) ||
             ((((byte)flag[14] <= (byte)flag[33] ||
               ((((byte)flag[15] <= (byte)flag[33] || ((byte)flag[16] <= (byte)flag[33])) ||
                ((byte)flag[17] <= (byte)flag[33])))) ||
              ((((byte)flag[18] <= (byte)flag[33] || ((byte)flag[19] <= (byte)flag[33])) ||
               ((byte)flag[20] <= (byte)flag[33])))))))))) ||
          ((((byte)flag[21] <= (byte)flag[33] || ((byte)flag[22] <= (byte)flag[33])) ||
           (((byte)flag[23] <= (byte)flag[33] ||
            (((((((byte)flag[24] <= (byte)flag[33] || ((byte)flag[33] <= (byte)flag[26])) ||
                ((byte)flag[27] <= (byte)flag[33])) ||
               (((byte)flag[28] <= (byte)flag[33] || ((byte)flag[30] <= (byte)flag[33])))) ||
              ((byte)flag[31] <= (byte)flag[33])) ||
             (((byte)flag[32] <= (byte)flag[33] || ((byte)flag[34] <= (byte)flag[33])))))))))))) ||
        (((((((((((((byte)flag[33] <= (byte)flag[35] ||
                   ((((((((byte)flag[36] <= (byte)flag[33] || ((byte)flag[37] <= (byte)flag[33])) ||
                        ((byte)flag[33] <= (byte)flag[38])) ||
                       (((byte)flag[39] <= (byte)flag[33] || ((byte)flag[40] <= (byte)flag[33]))))
                      || ((((byte)flag[33] <= (byte)flag[41] ||
                           (((byte)flag[42] <= (byte)flag[33] || ((byte)flag[33] <= (byte)flag[43]))
                           )) || ((byte)flag[44] <= (byte)flag[33])))) ||
                     ((((byte)flag[33] <= (byte)flag[46] || ((byte)flag[47] <= (byte)flag[33])) ||
                      ((byte)flag[48] <= (byte)flag[33])))) ||
                    ((((byte)flag[33] <= (byte)flag[50] || ((byte)flag[51] <= (byte)flag[33])) ||
                     (((byte)flag[52] <= (byte)flag[33] ||
                      (((byte)flag[53] <= (byte)flag[33] || ((byte)flag[54] <= (byte)flag[33])))))))
                    ))) || ((byte)flag[55] <= (byte)flag[33])) ||
                 ((((((((byte)flag[33] <= (byte)flag[56] || ((byte)flag[57] <= (byte)flag[33])) ||
                      ((byte)flag[58] <= (byte)flag[33])) ||
                     (((byte)flag[59] <= (byte)flag[33] || ((byte)flag[60] <= (byte)flag[33])))) ||
                    (((byte)flag[33] <= (byte)flag[61] ||
                     (((byte)flag[62] <= (byte)flag[33] || ((byte)flag[33] <= (byte)flag[64]))))))
                   || (((byte)flag[65] <= (byte)flag[33] ||
                       ((((byte)flag[33] <= (byte)flag[66] || ((byte)flag[67] <= (byte)flag[33])) ||
                        ((byte)flag[68] <= (byte)flag[33])))))) ||
                  ((((byte)flag[69] <= (byte)flag[33] || ((byte)flag[70] <= (byte)flag[33])) ||
                   (((byte)flag[71] <= (byte)flag[33] ||
                    (((byte)flag[72] <= (byte)flag[33] || ((byte)flag[34] <= (byte)flag[0]))))))))))
                || ((((byte)flag[34] <= (byte)flag[2] ||
                     (((((byte)flag[34] <= (byte)flag[3] || ((byte)flag[4] <= (byte)flag[34])) ||
                       ((byte)flag[5] <= (byte)flag[34])) ||
                      ((((byte)flag[34] <= (byte)flag[6] || ((byte)flag[34] <= (byte)flag[7])) ||
                       (((byte)flag[8] <= (byte)flag[34] ||
                        (((byte)flag[9] <= (byte)flag[34] || ((byte)flag[34] <= (byte)flag[10]))))))
                      )))) || ((((byte)flag[34] <= (byte)flag[11] ||
                                (((((byte)flag[34] <= (byte)flag[12] ||
                                   ((byte)flag[34] <= (byte)flag[13])) ||
                                  ((byte)flag[14] <= (byte)flag[34])) ||
                                 (((byte)flag[15] <= (byte)flag[34] ||
                                  ((byte)flag[16] <= (byte)flag[34])))))) ||
                               (((((byte)flag[17] <= (byte)flag[34] ||
                                  (((byte)flag[34] <= (byte)flag[18] ||
                                   ((byte)flag[19] <= (byte)flag[34])))) ||
                                 ((byte)flag[20] <= (byte)flag[34])) ||
                                ((((byte)flag[34] <= (byte)flag[21] ||
                                  ((byte)flag[22] <= (byte)flag[34])) ||
                                 ((byte)flag[23] <= (byte)flag[34])))))))))) ||
               (((((((((byte)flag[24] <= (byte)flag[34] || ((byte)flag[34] <= (byte)flag[25])) ||
                     (((((byte)flag[34] <= (byte)flag[26] ||
                        (((byte)flag[27] <= (byte)flag[34] || ((byte)flag[28] <= (byte)flag[34]))))
                       || ((byte)flag[34] <= (byte)flag[29])) ||
                      ((((((byte)flag[30] <= (byte)flag[34] || ((byte)flag[31] <= (byte)flag[34]))
                         || ((byte)flag[34] <= (byte)flag[32])) ||
                        ((((byte)flag[34] <= (byte)flag[33] || ((byte)flag[34] <= (byte)flag[35]))
                         || (((byte)flag[36] <= (byte)flag[34] ||
                             (((byte)flag[37] <= (byte)flag[34] ||
                              ((byte)flag[34] <= (byte)flag[38])))))))) ||
                       ((byte)flag[39] <= (byte)flag[34])))))) ||
                    (((((((((byte)flag[34] <= (byte)flag[40] || ((byte)flag[34] <= (byte)flag[41]))
                          || ((byte)flag[42] <= (byte)flag[34])) ||
                         (((byte)flag[34] <= (byte)flag[43] || ((byte)flag[34] <= (byte)flag[45]))))
                        || ((byte)flag[34] <= (byte)flag[46])) ||
                       (((byte)flag[47] <= (byte)flag[34] || ((byte)flag[48] <= (byte)flag[34]))))
                      || (((byte)flag[34] <= (byte)flag[49] ||
                          ((((byte)flag[34] <= (byte)flag[50] || ((byte)flag[34] <= (byte)flag[51]))
                           || ((byte)flag[52] <= (byte)flag[34])))))) ||
                     (((((((byte)flag[53] <= (byte)flag[34] || ((byte)flag[54] <= (byte)flag[34]))
                         || ((byte)flag[55] <= (byte)flag[34])) ||
                        (((byte)flag[34] <= (byte)flag[56] || ((byte)flag[57] <= (byte)flag[34]))))
                       || (((byte)flag[58] <= (byte)flag[34] ||
                           ((((byte)flag[59] <= (byte)flag[34] || ((byte)flag[60] <= (byte)flag[34])
                             ) || ((byte)flag[34] <= (byte)flag[61])))))) ||
                      ((((((byte)flag[62] <= (byte)flag[34] || ((byte)flag[34] <= (byte)flag[63]))
                         || (((byte)flag[34] <= (byte)flag[64] ||
                             ((((byte)flag[65] <= (byte)flag[34] ||
                               ((byte)flag[34] <= (byte)flag[66])) ||
                              (((byte)flag[68] <= (byte)flag[34] ||
                               (((((byte)flag[69] <= (byte)flag[34] ||
                                  ((byte)flag[34] <= (byte)flag[70])) ||
                                 ((byte)flag[71] <= (byte)flag[34])) ||
                                (((byte)flag[72] <= (byte)flag[34] ||
                                 ((byte)flag[0] <= (byte)flag[35])))))))))))) ||
                        ((byte)flag[1] <= (byte)flag[35])) ||
                       (((byte)flag[3] <= (byte)flag[35] || ((byte)flag[4] <= (byte)flag[35]))))))))
                    )) || (((((byte)flag[5] <= (byte)flag[35] ||
                             ((((byte)flag[6] <= (byte)flag[35] || ((byte)flag[7] <= (byte)flag[35])
                               ) || ((byte)flag[8] <= (byte)flag[35])))) ||
                            ((((byte)flag[9] <= (byte)flag[35] || ((byte)flag[10] <= (byte)flag[35])
                              ) || ((byte)flag[11] <= (byte)flag[35])))) ||
                           (((((byte)flag[12] <= (byte)flag[35] ||
                              ((byte)flag[13] <= (byte)flag[35])) ||
                             (((byte)flag[14] <= (byte)flag[35] ||
                              ((((byte)flag[15] <= (byte)flag[35] ||
                                ((byte)flag[16] <= (byte)flag[35])) ||
                               ((byte)flag[17] <= (byte)flag[35])))))) ||
                            (((byte)flag[18] <= (byte)flag[35] || ((byte)flag[19] <= (byte)flag[35])
                             ))))))) ||
                  (((((((byte)flag[20] <= (byte)flag[35] ||
                       ((((byte)flag[21] <= (byte)flag[35] || ((byte)flag[22] <= (byte)flag[35])) ||
                        (((byte)flag[23] <= (byte)flag[35] ||
                         (((((byte)flag[24] <= (byte)flag[35] || ((byte)flag[25] <= (byte)flag[35]))
                           || ((byte)flag[26] <= (byte)flag[35])) ||
                          (((byte)flag[27] <= (byte)flag[35] || ((byte)flag[28] <= (byte)flag[35])))
                          ))))))) || ((byte)flag[29] <= (byte)flag[35])) ||
                     ((((byte)flag[30] <= (byte)flag[35] || ((byte)flag[31] <= (byte)flag[35])) ||
                      ((((((byte)flag[32] <= (byte)flag[35] ||
                          ((((byte)flag[33] <= (byte)flag[35] || ((byte)flag[34] <= (byte)flag[35]))
                           || ((byte)flag[36] <= (byte)flag[35])))) ||
                         ((((byte)flag[37] <= (byte)flag[35] || ((byte)flag[38] <= (byte)flag[35]))
                          || ((byte)flag[39] <= (byte)flag[35])))) ||
                        (((byte)flag[40] <= (byte)flag[35] || ((byte)flag[42] <= (byte)flag[35]))))
                       || (((byte)flag[43] <= (byte)flag[35] ||
                           ((((byte)flag[44] <= (byte)flag[35] || ((byte)flag[45] <= (byte)flag[35])
                             ) || ((byte)flag[47] <= (byte)flag[35])))))))))) ||
                    ((((byte)flag[48] <= (byte)flag[35] || ((byte)flag[49] <= (byte)flag[35])) ||
                     (((byte)flag[50] <= (byte)flag[35] ||
                      (((((byte)flag[51] <= (byte)flag[35] || ((byte)flag[52] <= (byte)flag[35])) ||
                        (((byte)flag[53] <= (byte)flag[35] ||
                         ((((((byte)flag[54] <= (byte)flag[35] || ((byte)flag[55] <= (byte)flag[35])
                             ) || ((byte)flag[57] <= (byte)flag[35])) ||
                           (((byte)flag[58] <= (byte)flag[35] || ((byte)flag[59] <= (byte)flag[35]))
                           )) || ((byte)flag[60] <= (byte)flag[35])))))) ||
                       (((byte)flag[62] <= (byte)flag[35] || ((byte)flag[63] <= (byte)flag[35]))))))
                     )))) || ((byte)flag[65] <= (byte)flag[35])))) ||
                 ((((((byte)flag[67] <= (byte)flag[35] || ((byte)flag[68] <= (byte)flag[35])) ||
                    ((byte)flag[69] <= (byte)flag[35])) ||
                   ((((byte)flag[70] <= (byte)flag[35] || ((byte)flag[71] <= (byte)flag[35])) ||
                    (((byte)flag[72] <= (byte)flag[35] ||
                     (((byte)flag[36] <= (byte)flag[0] || ((byte)flag[36] <= (byte)flag[1]))))))))
                  || (((byte)flag[36] <= (byte)flag[2] ||
                      (((((byte)flag[36] <= (byte)flag[3] || ((byte)flag[4] <= (byte)flag[36])) ||
                        ((byte)flag[36] <= (byte)flag[5])) ||
                       (((byte)flag[36] <= (byte)flag[6] || ((byte)flag[36] <= (byte)flag[7]))))))))
                 )) || ((((((((byte)flag[36] <= (byte)flag[8] ||
                             (((byte)flag[36] <= (byte)flag[9] || ((byte)flag[36] <= (byte)flag[10])
                              ))) || ((byte)flag[36] <= (byte)flag[11])) ||
                           (((((((byte)flag[36] <= (byte)flag[12] ||
                                ((byte)flag[36] <= (byte)flag[13])) ||
                               ((byte)flag[36] <= (byte)flag[14])) ||
                              (((byte)flag[36] <= (byte)flag[15] ||
                               ((byte)flag[36] <= (byte)flag[16])))) ||
                             (((byte)flag[36] <= (byte)flag[17] ||
                              (((byte)flag[36] <= (byte)flag[18] ||
                               ((byte)flag[36] <= (byte)flag[19])))))) ||
                            ((byte)flag[36] <= (byte)flag[20])))) ||
                          ((((byte)flag[36] <= (byte)flag[21] || ((byte)flag[36] <= (byte)flag[22]))
                           || ((byte)flag[36] <= (byte)flag[23])))) ||
                         (((((byte)flag[36] <= (byte)flag[24] || ((byte)flag[36] <= (byte)flag[25]))
                           || (((byte)flag[36] <= (byte)flag[26] ||
                               (((byte)flag[36] <= (byte)flag[27] ||
                                ((byte)flag[36] <= (byte)flag[28])))))) ||
                          ((((byte)flag[36] <= (byte)flag[29] ||
                            ((((byte)flag[36] <= (byte)flag[30] ||
                              ((byte)flag[36] <= (byte)flag[31])) ||
                             ((byte)flag[36] <= (byte)flag[32])))) ||
                           ((((byte)flag[36] <= (byte)flag[33] || ((byte)flag[36] <= (byte)flag[34])
                             ) || (((byte)flag[36] <= (byte)flag[35] ||
                                   (((byte)flag[36] <= (byte)flag[37] ||
                                    ((byte)flag[36] <= (byte)flag[38])))))))))))) ||
                        (((((byte)flag[36] <= (byte)flag[39] ||
                           ((((((byte)flag[36] <= (byte)flag[40] ||
                               ((byte)flag[36] <= (byte)flag[41])) ||
                              ((byte)flag[36] <= (byte)flag[42])) ||
                             (((byte)flag[36] <= (byte)flag[43] ||
                              ((byte)flag[36] <= (byte)flag[44])))) ||
                            (((byte)flag[36] <= (byte)flag[45] ||
                             (((byte)flag[36] <= (byte)flag[46] ||
                              ((byte)flag[36] <= (byte)flag[47])))))))) ||
                          ((((byte)flag[36] <= (byte)flag[48] ||
                            (((((byte)flag[36] <= (byte)flag[49] ||
                               ((byte)flag[36] <= (byte)flag[50])) ||
                              ((byte)flag[36] <= (byte)flag[51])) ||
                             ((((byte)flag[36] <= (byte)flag[52] ||
                               ((byte)flag[36] <= (byte)flag[53])) ||
                              (((byte)flag[36] <= (byte)flag[54] ||
                               (((byte)flag[36] <= (byte)flag[55] ||
                                ((byte)flag[36] <= (byte)flag[56])))))))))) ||
                           ((byte)flag[36] <= (byte)flag[57])))) ||
                         ((((((((((byte)flag[36] <= (byte)flag[58] ||
                                 ((byte)flag[36] <= (byte)flag[59])) ||
                                ((byte)flag[36] <= (byte)flag[60])) ||
                               (((byte)flag[36] <= (byte)flag[61] ||
                                ((byte)flag[36] <= (byte)flag[62])))) ||
                              ((((byte)flag[36] <= (byte)flag[63] ||
                                (((byte)flag[36] <= (byte)flag[64] ||
                                 ((byte)flag[36] <= (byte)flag[65])))) ||
                               ((byte)flag[36] <= (byte)flag[66])))) ||
                             ((((((((byte)flag[36] <= (byte)flag[67] ||
                                   ((byte)flag[36] <= (byte)flag[68])) ||
                                  ((byte)flag[36] <= (byte)flag[69])) ||
                                 (((byte)flag[36] <= (byte)flag[70] ||
                                  ((byte)flag[36] <= (byte)flag[71])))) ||
                                ((byte)flag[72] <= (byte)flag[36])) ||
                               (((byte)flag[37] <= (byte)flag[0] ||
                                ((byte)flag[37] <= (byte)flag[1])))) ||
                              (((byte)flag[37] <= (byte)flag[2] ||
                               ((((byte)flag[37] <= (byte)flag[3] ||
                                 ((byte)flag[4] <= (byte)flag[37])) ||
                                ((byte)flag[37] <= (byte)flag[5])))))))) ||
                            ((((((byte)flag[37] <= (byte)flag[6] ||
                                ((byte)flag[37] <= (byte)flag[7])) ||
                               ((byte)flag[37] <= (byte)flag[8])) ||
                              (((byte)flag[37] <= (byte)flag[9] ||
                               ((byte)flag[37] <= (byte)flag[10])))) ||
                             (((byte)flag[37] <= (byte)flag[11] ||
                              ((((byte)flag[37] <= (byte)flag[12] ||
                                ((byte)flag[37] <= (byte)flag[13])) ||
                               ((byte)flag[37] <= (byte)flag[14])))))))) ||
                           (((((byte)flag[37] <= (byte)flag[15] ||
                              ((byte)flag[37] <= (byte)flag[16])) ||
                             (((byte)flag[37] <= (byte)flag[17] ||
                              ((((byte)flag[37] <= (byte)flag[18] ||
                                ((byte)flag[37] <= (byte)flag[19])) ||
                               (((byte)flag[37] <= (byte)flag[20] ||
                                (((((byte)flag[37] <= (byte)flag[21] ||
                                   ((byte)flag[37] <= (byte)flag[22])) ||
                                  ((byte)flag[37] <= (byte)flag[23])) ||
                                 (((byte)flag[37] <= (byte)flag[24] ||
                                  ((byte)flag[37] <= (byte)flag[25])))))))))))) ||
                            ((byte)flag[37] <= (byte)flag[26])))) ||
                          (((byte)flag[37] <= (byte)flag[27] || ((byte)flag[37] <= (byte)flag[28])))
                          ))))))))) ||
              ((((((((byte)flag[37] <= (byte)flag[29] ||
                    ((((byte)flag[37] <= (byte)flag[30] || ((byte)flag[37] <= (byte)flag[31])) ||
                     ((byte)flag[37] <= (byte)flag[32])))) ||
                   ((((byte)flag[37] <= (byte)flag[33] || ((byte)flag[37] <= (byte)flag[34])) ||
                    ((byte)flag[37] <= (byte)flag[35])))) ||
                  ((((byte)flag[36] <= (byte)flag[37] || ((byte)flag[37] <= (byte)flag[38])) ||
                   (((((byte)flag[37] <= (byte)flag[39] ||
                      ((((byte)flag[37] <= (byte)flag[40] || ((byte)flag[37] <= (byte)flag[41])) ||
                       ((byte)flag[37] <= (byte)flag[42])))) ||
                     (((byte)flag[37] <= (byte)flag[43] || ((byte)flag[37] <= (byte)flag[44])))) ||
                    ((byte)flag[37] <= (byte)flag[45])))))) ||
                 ((((((((byte)flag[37] <= (byte)flag[46] || ((byte)flag[37] <= (byte)flag[47])) ||
                      (((byte)flag[37] <= (byte)flag[48] ||
                       (((((byte)flag[37] <= (byte)flag[49] || ((byte)flag[37] <= (byte)flag[50]))
                         || ((byte)flag[37] <= (byte)flag[51])) ||
                        (((byte)flag[37] <= (byte)flag[52] || ((byte)flag[37] <= (byte)flag[53])))))
                       ))) || ((byte)flag[37] <= (byte)flag[54])) ||
                    (((byte)flag[37] <= (byte)flag[55] || ((byte)flag[37] <= (byte)flag[56])))) ||
                   (((byte)flag[37] <= (byte)flag[57] ||
                    ((((byte)flag[37] <= (byte)flag[58] || ((byte)flag[37] <= (byte)flag[59])) ||
                     ((byte)flag[37] <= (byte)flag[60])))))) ||
                  (((((byte)flag[37] <= (byte)flag[61] || ((byte)flag[37] <= (byte)flag[62])) ||
                    ((byte)flag[37] <= (byte)flag[63])) ||
                   (((byte)flag[37] <= (byte)flag[64] || ((byte)flag[37] <= (byte)flag[65]))))))))
                || ((((((byte)flag[37] <= (byte)flag[66] ||
                       ((((byte)flag[37] <= (byte)flag[67] || ((byte)flag[37] <= (byte)flag[69])) ||
                        ((byte)flag[37] <= (byte)flag[70])))) ||
                      ((((byte)flag[37] <= (byte)flag[71] || ((byte)flag[72] <= (byte)flag[37])) ||
                       (((byte)flag[0] <= (byte)flag[38] ||
                        ((((byte)flag[1] <= (byte)flag[38] || ((byte)flag[38] <= (byte)flag[2])) ||
                         (((byte)flag[3] <= (byte)flag[38] ||
                          ((((((byte)flag[4] <= (byte)flag[38] || ((byte)flag[5] <= (byte)flag[38]))
                             || ((byte)flag[6] <= (byte)flag[38])) ||
                            (((byte)flag[7] <= (byte)flag[38] || ((byte)flag[8] <= (byte)flag[38])))
                            ) || ((byte)flag[9] <= (byte)flag[38])))))))))))) ||
                     ((((byte)flag[10] <= (byte)flag[38] || ((byte)flag[38] <= (byte)flag[11])) ||
                      (((byte)flag[12] <= (byte)flag[38] ||
                       ((((((((byte)flag[38] <= (byte)flag[13] || ((byte)flag[14] <= (byte)flag[38])
                             ) || ((byte)flag[15] <= (byte)flag[38])) ||
                           ((((byte)flag[16] <= (byte)flag[38] || ((byte)flag[17] <= (byte)flag[38])
                             ) || (((byte)flag[18] <= (byte)flag[38] ||
                                   (((byte)flag[19] <= (byte)flag[38] ||
                                    ((byte)flag[20] <= (byte)flag[38])))))))) ||
                          ((byte)flag[21] <= (byte)flag[38])) ||
                         ((((byte)flag[22] <= (byte)flag[38] || ((byte)flag[23] <= (byte)flag[38]))
                          || ((byte)flag[24] <= (byte)flag[38])))) ||
                        ((((byte)flag[25] <= (byte)flag[38] || ((byte)flag[27] <= (byte)flag[38]))
                         || ((((byte)flag[28] <= (byte)flag[38] ||
                              (((byte)flag[29] <= (byte)flag[38] ||
                               ((byte)flag[30] <= (byte)flag[38])))) ||
                             ((byte)flag[31] <= (byte)flag[38])))))))))))) ||
                    ((((((((((((byte)flag[32] <= (byte)flag[38] ||
                              ((byte)flag[33] <= (byte)flag[38])) ||
                             ((byte)flag[34] <= (byte)flag[38])) ||
                            (((byte)flag[38] <= (byte)flag[35] || ((byte)flag[36] <= (byte)flag[38])
                             ))) || (((byte)flag[37] <= (byte)flag[38] ||
                                     (((byte)flag[39] <= (byte)flag[38] ||
                                      ((byte)flag[40] <= (byte)flag[38])))))) ||
                          ((byte)flag[38] <= (byte)flag[41])) ||
                         (((((byte)flag[42] <= (byte)flag[38] || ((byte)flag[44] <= (byte)flag[38]))
                           || ((byte)flag[45] <= (byte)flag[38])) ||
                          ((((byte)flag[38] <= (byte)flag[46] || ((byte)flag[47] <= (byte)flag[38]))
                           || (((byte)flag[48] <= (byte)flag[38] ||
                               (((byte)flag[49] <= (byte)flag[38] ||
                                ((byte)flag[51] <= (byte)flag[38])))))))))) ||
                        ((byte)flag[52] <= (byte)flag[38])) ||
                       ((((byte)flag[53] <= (byte)flag[38] || ((byte)flag[54] <= (byte)flag[38])) ||
                        ((byte)flag[55] <= (byte)flag[38])))) ||
                      (((byte)flag[38] <= (byte)flag[56] || ((byte)flag[57] <= (byte)flag[38])))) ||
                     ((((((byte)flag[58] <= (byte)flag[38] ||
                         (((byte)flag[59] <= (byte)flag[38] || ((byte)flag[60] <= (byte)flag[38]))))
                        || ((((byte)flag[38] <= (byte)flag[61] ||
                             (((((byte)flag[62] <= (byte)flag[38] ||
                                ((byte)flag[63] <= (byte)flag[38])) ||
                               ((byte)flag[38] <= (byte)flag[64])) ||
                              (((byte)flag[65] <= (byte)flag[38] ||
                               ((byte)flag[38] <= (byte)flag[66])))))) ||
                            ((((byte)flag[67] <= (byte)flag[38] ||
                              (((byte)flag[68] <= (byte)flag[38] ||
                               ((byte)flag[69] <= (byte)flag[38])))) ||
                             ((byte)flag[70] <= (byte)flag[38])))))) ||
                       (((((((byte)flag[71] <= (byte)flag[38] || ((byte)flag[72] <= (byte)flag[38]))
                           || ((byte)flag[39] <= (byte)flag[0])) ||
                          ((((byte)flag[39] <= (byte)flag[1] || ((byte)flag[39] <= (byte)flag[2]))
                           || (((byte)flag[39] <= (byte)flag[3] ||
                               (((byte)flag[4] <= (byte)flag[39] ||
                                ((byte)flag[5] <= (byte)flag[39])))))))) ||
                         (((byte)flag[39] <= (byte)flag[6] ||
                          ((((byte)flag[39] <= (byte)flag[7] || ((byte)flag[8] <= (byte)flag[39]))
                           || ((byte)flag[9] <= (byte)flag[39])))))) ||
                        (((((byte)flag[39] <= (byte)flag[10] || ((byte)flag[39] <= (byte)flag[11]))
                          || ((((byte)flag[39] <= (byte)flag[12] ||
                               (((byte)flag[39] <= (byte)flag[13] ||
                                ((byte)flag[14] <= (byte)flag[39])))) ||
                              ((byte)flag[16] <= (byte)flag[39])))) ||
                         ((((((byte)flag[39] <= (byte)flag[17] || ((byte)flag[39] <= (byte)flag[18])
                             ) || ((byte)flag[20] <= (byte)flag[39])) ||
                           (((byte)flag[39] <= (byte)flag[21] || ((byte)flag[22] <= (byte)flag[39]))
                           )) || ((byte)flag[39] <= (byte)flag[23])))))))) ||
                      ((((((byte)flag[24] <= (byte)flag[39] || ((byte)flag[39] <= (byte)flag[25]))
                         || (((byte)flag[39] <= (byte)flag[26] ||
                             ((((byte)flag[28] <= (byte)flag[39] ||
                               ((byte)flag[39] <= (byte)flag[29])) ||
                              ((byte)flag[30] <= (byte)flag[39])))))) ||
                        (((byte)flag[31] <= (byte)flag[39] || ((byte)flag[39] <= (byte)flag[32]))))
                       || ((byte)flag[39] <= (byte)flag[33])))))))))) ||
               ((((((byte)flag[39] <= (byte)flag[34] || ((byte)flag[39] <= (byte)flag[35])) ||
                  (((byte)flag[36] <= (byte)flag[39] ||
                   ((((byte)flag[37] <= (byte)flag[39] || ((byte)flag[39] <= (byte)flag[38])) ||
                    ((byte)flag[39] <= (byte)flag[40])))))) ||
                 (((((byte)flag[39] <= (byte)flag[41] || ((byte)flag[39] <= (byte)flag[42])) ||
                   (((byte)flag[39] <= (byte)flag[43] ||
                    ((((byte)flag[39] <= (byte)flag[44] || ((byte)flag[39] <= (byte)flag[45])) ||
                     (((byte)flag[39] <= (byte)flag[46] ||
                      (((((byte)flag[47] <= (byte)flag[39] || ((byte)flag[39] <= (byte)flag[48])) ||
                        ((byte)flag[39] <= (byte)flag[49])) ||
                       (((byte)flag[39] <= (byte)flag[50] || ((byte)flag[39] <= (byte)flag[51]))))))
                     )))))) ||
                  ((((byte)flag[53] <= (byte)flag[39] ||
                    ((((byte)flag[54] <= (byte)flag[39] || ((byte)flag[39] <= (byte)flag[56])) ||
                     (((byte)flag[57] <= (byte)flag[39] ||
                      ((((byte)flag[58] <= (byte)flag[39] || ((byte)flag[39] <= (byte)flag[60])) ||
                       ((byte)flag[39] <= (byte)flag[61])))))))) ||
                   (((((byte)flag[62] <= (byte)flag[39] || ((byte)flag[39] <= (byte)flag[63])) ||
                     ((byte)flag[39] <= (byte)flag[64])) ||
                    (((byte)flag[39] <= (byte)flag[65] || ((byte)flag[39] <= (byte)flag[66])))))))))
                 ) || ((((byte)flag[39] <= (byte)flag[67] ||
                        ((((byte)flag[68] <= (byte)flag[39] || ((byte)flag[69] <= (byte)flag[39]))
                         || ((byte)flag[39] <= (byte)flag[70])))) ||
                       ((((((((byte)flag[71] <= (byte)flag[39] || ((byte)flag[72] <= (byte)flag[39])
                             ) || ((((((byte)flag[40] <= (byte)flag[0] ||
                                      ((((byte)flag[1] <= (byte)flag[40] ||
                                        ((byte)flag[40] <= (byte)flag[2])) ||
                                       (((byte)flag[4] <= (byte)flag[40] ||
                                        (((((byte)flag[5] <= (byte)flag[40] ||
                                           ((byte)flag[6] <= (byte)flag[40])) ||
                                          ((byte)flag[40] <= (byte)flag[7])) ||
                                         (((byte)flag[8] <= (byte)flag[40] ||
                                          ((byte)flag[9] <= (byte)flag[40])))))))))) ||
                                     ((byte)flag[10] <= (byte)flag[40])) ||
                                    ((((byte)flag[40] <= (byte)flag[11] ||
                                      ((byte)flag[12] <= (byte)flag[40])) ||
                                     (((((byte)flag[40] <= (byte)flag[13] ||
                                        ((((byte)flag[14] <= (byte)flag[40] ||
                                          ((byte)flag[15] <= (byte)flag[40])) ||
                                         ((byte)flag[16] <= (byte)flag[40])))) ||
                                       ((((byte)flag[17] <= (byte)flag[40] ||
                                         ((byte)flag[40] <= (byte)flag[18])) ||
                                        ((byte)flag[19] <= (byte)flag[40])))) ||
                                      (((byte)flag[20] <= (byte)flag[40] ||
                                       ((byte)flag[21] <= (byte)flag[40])))))))) ||
                                   (((byte)flag[22] <= (byte)flag[40] ||
                                    ((((byte)flag[23] <= (byte)flag[40] ||
                                      ((byte)flag[24] <= (byte)flag[40])) ||
                                     ((byte)flag[40] <= (byte)flag[25])))))))) ||
                           (((((byte)flag[40] <= (byte)flag[26] ||
                              ((byte)flag[27] <= (byte)flag[40])) ||
                             (((byte)flag[28] <= (byte)flag[40] ||
                              ((((byte)flag[40] <= (byte)flag[29] ||
                                ((byte)flag[30] <= (byte)flag[40])) ||
                               (((byte)flag[31] <= (byte)flag[40] ||
                                ((((((((byte)flag[32] <= (byte)flag[40] ||
                                      ((byte)flag[40] <= (byte)flag[33])) ||
                                     ((byte)flag[34] <= (byte)flag[40])) ||
                                    (((byte)flag[40] <= (byte)flag[35] ||
                                     ((byte)flag[36] <= (byte)flag[40])))) ||
                                   ((byte)flag[37] <= (byte)flag[40])) ||
                                  (((byte)flag[40] <= (byte)flag[38] ||
                                   ((byte)flag[39] <= (byte)flag[40])))) ||
                                 ((byte)flag[40] <= (byte)flag[41])))))))))) ||
                            ((((((((byte)flag[42] <= (byte)flag[40] ||
                                  ((byte)flag[40] <= (byte)flag[43])) ||
                                 ((byte)flag[44] <= (byte)flag[40])) ||
                                (((byte)flag[40] <= (byte)flag[45] ||
                                 ((byte)flag[40] <= (byte)flag[46])))) ||
                               ((byte)flag[47] <= (byte)flag[40])) ||
                              ((((((byte)flag[48] <= (byte)flag[40] ||
                                  ((byte)flag[40] <= (byte)flag[49])) ||
                                 (((byte)flag[40] <= (byte)flag[50] ||
                                  ((((byte)flag[51] <= (byte)flag[40] ||
                                    ((byte)flag[52] <= (byte)flag[40])) ||
                                   ((byte)flag[53] <= (byte)flag[40])))))) ||
                                (((byte)flag[54] <= (byte)flag[40] ||
                                 ((byte)flag[55] <= (byte)flag[40])))) ||
                               ((byte)flag[40] <= (byte)flag[56])))) ||
                             (((((byte)flag[57] <= (byte)flag[40] ||
                                ((byte)flag[58] <= (byte)flag[40])) ||
                               (((byte)flag[59] <= (byte)flag[40] ||
                                (((((byte)flag[60] <= (byte)flag[40] ||
                                   ((byte)flag[40] <= (byte)flag[61])) ||
                                  ((byte)flag[62] <= (byte)flag[40])) ||
                                 (((byte)flag[40] <= (byte)flag[63] ||
                                  ((byte)flag[40] <= (byte)flag[64])))))))) ||
                              ((byte)flag[65] <= (byte)flag[40])))))))) ||
                          (((((((byte)flag[40] <= (byte)flag[66] ||
                               ((byte)flag[67] <= (byte)flag[40])) ||
                              ((((byte)flag[68] <= (byte)flag[40] ||
                                ((((byte)flag[69] <= (byte)flag[40] ||
                                  ((byte)flag[70] <= (byte)flag[40])) ||
                                 ((byte)flag[71] <= (byte)flag[40])))) ||
                               ((((byte)flag[72] <= (byte)flag[40] ||
                                 ((byte)flag[0] <= (byte)flag[41])) ||
                                ((byte)flag[1] <= (byte)flag[41])))))) ||
                             (((byte)flag[3] <= (byte)flag[41] || ((byte)flag[4] <= (byte)flag[41]))
                             )) || (((((byte)flag[5] <= (byte)flag[41] ||
                                      ((((byte)flag[6] <= (byte)flag[41] ||
                                        ((byte)flag[7] <= (byte)flag[41])) ||
                                       ((byte)flag[8] <= (byte)flag[41])))) ||
                                     ((((byte)flag[9] <= (byte)flag[41] ||
                                       ((byte)flag[10] <= (byte)flag[41])) ||
                                      (((byte)flag[11] <= (byte)flag[41] ||
                                       ((((byte)flag[12] <= (byte)flag[41] ||
                                         ((byte)flag[13] <= (byte)flag[41])) ||
                                        (((byte)flag[14] <= (byte)flag[41] ||
                                         (((((byte)flag[15] <= (byte)flag[41] ||
                                            ((byte)flag[16] <= (byte)flag[41])) ||
                                           ((byte)flag[17] <= (byte)flag[41])) ||
                                          (((byte)flag[18] <= (byte)flag[41] ||
                                           ((byte)flag[19] <= (byte)flag[41])))))))))))))) ||
                                    ((byte)flag[20] <= (byte)flag[41])))) ||
                           (((byte)flag[21] <= (byte)flag[41] || ((byte)flag[22] <= (byte)flag[41]))
                           )))) || ((((((byte)flag[23] <= (byte)flag[41] ||
                                       ((((byte)flag[24] <= (byte)flag[41] ||
                                         ((byte)flag[25] <= (byte)flag[41])) ||
                                        ((byte)flag[26] <= (byte)flag[41])))) ||
                                      ((((byte)flag[27] <= (byte)flag[41] ||
                                        ((byte)flag[28] <= (byte)flag[41])) ||
                                       ((byte)flag[29] <= (byte)flag[41])))) ||
                                     ((((byte)flag[30] <= (byte)flag[41] ||
                                       ((byte)flag[31] <= (byte)flag[41])) ||
                                      (((byte)flag[32] <= (byte)flag[41] ||
                                       ((((byte)flag[33] <= (byte)flag[41] ||
                                         ((byte)flag[34] <= (byte)flag[41])) ||
                                        ((byte)flag[36] <= (byte)flag[41])))))))) ||
                                    ((((byte)flag[37] <= (byte)flag[41] ||
                                      ((byte)flag[38] <= (byte)flag[41])) ||
                                     ((((byte)flag[39] <= (byte)flag[41] ||
                                       (((((byte)flag[40] <= (byte)flag[41] ||
                                          ((byte)flag[42] <= (byte)flag[41])) ||
                                         (((byte)flag[43] <= (byte)flag[41] ||
                                          ((((((byte)flag[44] <= (byte)flag[41] ||
                                              ((byte)flag[45] <= (byte)flag[41])) ||
                                             ((byte)flag[47] <= (byte)flag[41])) ||
                                            (((byte)flag[48] <= (byte)flag[41] ||
                                             ((byte)flag[49] <= (byte)flag[41])))) ||
                                           ((byte)flag[50] <= (byte)flag[41])))))) ||
                                        (((byte)flag[51] <= (byte)flag[41] ||
                                         ((byte)flag[52] <= (byte)flag[41])))))) ||
                                      (((byte)flag[53] <= (byte)flag[41] ||
                                       ((((byte)flag[54] <= (byte)flag[41] ||
                                         ((byte)flag[55] <= (byte)flag[41])) ||
                                        ((byte)flag[57] <= (byte)flag[41])))))))))))) ||
                        (((((((((byte)flag[58] <= (byte)flag[41] ||
                               ((byte)flag[59] <= (byte)flag[41])) ||
                              (((byte)flag[60] <= (byte)flag[41] ||
                               (((byte)flag[62] <= (byte)flag[41] ||
                                ((byte)flag[63] <= (byte)flag[41])))))) ||
                             (((byte)flag[65] <= (byte)flag[41] ||
                              ((((byte)flag[67] <= (byte)flag[41] ||
                                ((byte)flag[68] <= (byte)flag[41])) ||
                               ((byte)flag[69] <= (byte)flag[41])))))) ||
                            ((((byte)flag[70] <= (byte)flag[41] ||
                              ((byte)flag[71] <= (byte)flag[41])) ||
                             (((((((((byte)flag[72] <= (byte)flag[41] ||
                                    (((byte)flag[42] <= (byte)flag[0] ||
                                     ((byte)flag[42] <= (byte)flag[1])))) ||
                                   ((byte)flag[42] <= (byte)flag[2])) ||
                                  ((((((byte)flag[42] <= (byte)flag[3] ||
                                      ((byte)flag[4] <= (byte)flag[42])) ||
                                     ((byte)flag[5] <= (byte)flag[42])) ||
                                    (((byte)flag[42] <= (byte)flag[6] ||
                                     ((byte)flag[42] <= (byte)flag[7])))) ||
                                   (((byte)flag[8] <= (byte)flag[42] ||
                                    (((byte)flag[9] <= (byte)flag[42] ||
                                     ((byte)flag[42] <= (byte)flag[10])))))))) ||
                                 ((byte)flag[42] <= (byte)flag[11])) ||
                                (((((byte)flag[42] <= (byte)flag[12] ||
                                   ((byte)flag[42] <= (byte)flag[13])) ||
                                  ((byte)flag[14] <= (byte)flag[42])) ||
                                 ((((byte)flag[15] <= (byte)flag[42] ||
                                   ((byte)flag[16] <= (byte)flag[42])) ||
                                  (((byte)flag[42] <= (byte)flag[18] ||
                                   (((byte)flag[19] <= (byte)flag[42] ||
                                    ((byte)flag[20] <= (byte)flag[42])))))))))) ||
                               ((byte)flag[42] <= (byte)flag[21])) ||
                              ((((byte)flag[22] <= (byte)flag[42] ||
                                ((byte)flag[42] <= (byte)flag[23])) ||
                               ((byte)flag[24] <= (byte)flag[42])))))))) ||
                           ((((byte)flag[42] <= (byte)flag[25] || ((byte)flag[42] <= (byte)flag[26])
                             ) || (((byte)flag[27] <= (byte)flag[42] ||
                                   (((byte)flag[28] <= (byte)flag[42] ||
                                    ((byte)flag[42] <= (byte)flag[29])))))))) ||
                          ((byte)flag[30] <= (byte)flag[42])) ||
                         (((((byte)flag[31] <= (byte)flag[42] || ((byte)flag[42] <= (byte)flag[32]))
                           || ((byte)flag[42] <= (byte)flag[33])) ||
                          (((byte)flag[42] <= (byte)flag[34] || ((byte)flag[42] <= (byte)flag[35])))
                          ))))))))))))) ||
             ((((((((byte)flag[36] <= (byte)flag[42] ||
                   (((byte)flag[37] <= (byte)flag[42] || ((byte)flag[42] <= (byte)flag[38])))) ||
                  (((byte)flag[39] <= (byte)flag[42] ||
                   (((((byte)flag[42] <= (byte)flag[40] || ((byte)flag[42] <= (byte)flag[41])) ||
                     ((byte)flag[42] <= (byte)flag[43])) ||
                    ((((byte)flag[42] <= (byte)flag[44] || ((byte)flag[42] <= (byte)flag[45])) ||
                     (((byte)flag[42] <= (byte)flag[46] ||
                      (((byte)flag[47] <= (byte)flag[42] || ((byte)flag[42] <= (byte)flag[49])))))))
                    ))))) ||
                 (((byte)flag[42] <= (byte)flag[50] ||
                  (((((byte)flag[42] <= (byte)flag[51] || ((byte)flag[52] <= (byte)flag[42])) ||
                    ((byte)flag[53] <= (byte)flag[42])) ||
                   ((((byte)flag[54] <= (byte)flag[42] || ((byte)flag[55] <= (byte)flag[42])) ||
                    ((((byte)flag[42] <= (byte)flag[56] ||
                      (((byte)flag[57] <= (byte)flag[42] || ((byte)flag[58] <= (byte)flag[42])))) ||
                     ((byte)flag[59] <= (byte)flag[42])))))))))) ||
                ((((((((((((byte)flag[42] <= (byte)flag[60] || ((byte)flag[42] <= (byte)flag[61]))
                         || ((byte)flag[62] <= (byte)flag[42])) ||
                        (((byte)flag[42] <= (byte)flag[63] || ((byte)flag[42] <= (byte)flag[64]))))
                       || ((byte)flag[42] <= (byte)flag[66])) ||
                      ((((byte)flag[42] <= (byte)flag[67] || ((byte)flag[68] <= (byte)flag[42])) ||
                       (((byte)flag[69] <= (byte)flag[42] ||
                        ((((byte)flag[42] <= (byte)flag[70] || ((byte)flag[71] <= (byte)flag[42]))
                         || ((byte)flag[72] <= (byte)flag[42])))))))) ||
                     (((byte)flag[0] <= (byte)flag[43] || ((byte)flag[1] <= (byte)flag[43])))) ||
                    ((((byte)flag[43] <= (byte)flag[2] ||
                      (((((byte)flag[3] <= (byte)flag[43] || ((byte)flag[4] <= (byte)flag[43])) ||
                        (((byte)flag[5] <= (byte)flag[43] ||
                         ((((byte)flag[6] <= (byte)flag[43] || ((byte)flag[7] <= (byte)flag[43])) ||
                          ((byte)flag[8] <= (byte)flag[43])))))) ||
                       (((byte)flag[9] <= (byte)flag[43] || ((byte)flag[10] <= (byte)flag[43]))))))
                     || ((byte)flag[43] <= (byte)flag[11])))) ||
                   ((((byte)flag[12] <= (byte)flag[43] || ((byte)flag[43] <= (byte)flag[13])) ||
                    (((byte)flag[14] <= (byte)flag[43] ||
                     (((((byte)flag[15] <= (byte)flag[43] || ((byte)flag[16] <= (byte)flag[43])) ||
                       ((byte)flag[17] <= (byte)flag[43])) ||
                      (((byte)flag[18] <= (byte)flag[43] || ((byte)flag[19] <= (byte)flag[43])))))))
                    ))) || (((byte)flag[20] <= (byte)flag[43] ||
                            (((byte)flag[21] <= (byte)flag[43] || ((byte)flag[22] <= (byte)flag[43])
                             ))))) ||
                 ((((byte)flag[23] <= (byte)flag[43] ||
                   ((((byte)flag[24] <= (byte)flag[43] || ((byte)flag[25] <= (byte)flag[43])) ||
                    ((byte)flag[27] <= (byte)flag[43])))) ||
                  (((((byte)flag[28] <= (byte)flag[43] || ((byte)flag[29] <= (byte)flag[43])) ||
                    ((byte)flag[30] <= (byte)flag[43])) ||
                   ((((byte)flag[31] <= (byte)flag[43] || ((byte)flag[32] <= (byte)flag[43])) ||
                    (((byte)flag[33] <= (byte)flag[43] ||
                     ((((byte)flag[34] <= (byte)flag[43] || ((byte)flag[43] <= (byte)flag[35])) ||
                      ((byte)flag[36] <= (byte)flag[43])))))))))))))) ||
               ((((byte)flag[37] <= (byte)flag[43] || ((byte)flag[39] <= (byte)flag[43])) ||
                (((byte)flag[40] <= (byte)flag[43] ||
                 (((((((((byte)flag[43] <= (byte)flag[41] || ((byte)flag[42] <= (byte)flag[43])) ||
                       (((byte)flag[44] <= (byte)flag[43] ||
                        (((((byte)flag[45] <= (byte)flag[43] || ((byte)flag[43] <= (byte)flag[46]))
                          || ((byte)flag[47] <= (byte)flag[43])) ||
                         (((byte)flag[48] <= (byte)flag[43] || ((byte)flag[49] <= (byte)flag[43]))))
                        )))) || ((byte)flag[51] <= (byte)flag[43])) ||
                     (((byte)flag[52] <= (byte)flag[43] || ((byte)flag[53] <= (byte)flag[43])))) ||
                    ((((byte)flag[54] <= (byte)flag[43] ||
                      ((((byte)flag[55] <= (byte)flag[43] || ((byte)flag[43] <= (byte)flag[56])) ||
                       ((byte)flag[57] <= (byte)flag[43])))) ||
                     ((((byte)flag[58] <= (byte)flag[43] || ((byte)flag[59] <= (byte)flag[43])) ||
                      ((byte)flag[60] <= (byte)flag[43])))))) ||
                   (((byte)flag[43] <= (byte)flag[61] || ((byte)flag[62] <= (byte)flag[43])))) ||
                  (((byte)flag[63] <= (byte)flag[43] ||
                   ((((byte)flag[43] <= (byte)flag[64] || ((byte)flag[65] <= (byte)flag[43])) ||
                    ((byte)flag[43] <= (byte)flag[66])))))))))))) ||
              ((((((byte)flag[67] <= (byte)flag[43] || ((byte)flag[68] <= (byte)flag[43])) ||
                 (((byte)flag[69] <= (byte)flag[43] ||
                  ((((byte)flag[70] <= (byte)flag[43] || ((byte)flag[71] <= (byte)flag[43])) ||
                   (((byte)flag[72] <= (byte)flag[43] ||
                    (((((((byte)flag[44] <= (byte)flag[0] || ((byte)flag[44] <= (byte)flag[2])) ||
                        ((byte)flag[44] <= (byte)flag[3])) ||
                       (((byte)flag[4] <= (byte)flag[44] || ((byte)flag[5] <= (byte)flag[44])))) ||
                      ((byte)flag[44] <= (byte)flag[6])) ||
                     (((byte)flag[44] <= (byte)flag[7] || ((byte)flag[8] <= (byte)flag[44]))))))))))
                 )) || ((((((byte)flag[9] <= (byte)flag[44] ||
                           ((((((byte)flag[44] <= (byte)flag[10] ||
                               ((byte)flag[44] <= (byte)flag[11])) ||
                              ((byte)flag[44] <= (byte)flag[12])) ||
                             (((byte)flag[44] <= (byte)flag[13] ||
                              ((byte)flag[14] <= (byte)flag[44])))) ||
                            ((((byte)flag[15] <= (byte)flag[44] ||
                              (((byte)flag[16] <= (byte)flag[44] ||
                               ((byte)flag[17] <= (byte)flag[44])))) ||
                             ((byte)flag[44] <= (byte)flag[18])))))) ||
                          ((((byte)flag[19] <= (byte)flag[44] || ((byte)flag[20] <= (byte)flag[44]))
                           || ((byte)flag[44] <= (byte)flag[21])))) ||
                         ((((byte)flag[22] <= (byte)flag[44] || ((byte)flag[23] <= (byte)flag[44]))
                          || (((byte)flag[24] <= (byte)flag[44] ||
                              (((byte)flag[44] <= (byte)flag[25] ||
                               ((byte)flag[44] <= (byte)flag[26])))))))) ||
                        ((((((byte)flag[27] <= (byte)flag[44] ||
                            ((((((byte)flag[28] <= (byte)flag[44] ||
                                ((byte)flag[44] <= (byte)flag[29])) ||
                               ((byte)flag[30] <= (byte)flag[44])) ||
                              (((byte)flag[31] <= (byte)flag[44] ||
                               ((byte)flag[44] <= (byte)flag[32])))) ||
                             (((byte)flag[44] <= (byte)flag[33] ||
                              (((byte)flag[44] <= (byte)flag[35] ||
                               ((byte)flag[36] <= (byte)flag[44])))))))) ||
                           ((byte)flag[37] <= (byte)flag[44])) ||
                          (((((byte)flag[44] <= (byte)flag[38] || ((byte)flag[39] <= (byte)flag[44])
                             ) || ((byte)flag[44] <= (byte)flag[40])) ||
                           (((byte)flag[44] <= (byte)flag[41] || ((byte)flag[42] <= (byte)flag[44]))
                           )))) || (((((byte)flag[44] <= (byte)flag[43] ||
                                      (((byte)flag[44] <= (byte)flag[45] ||
                                       ((byte)flag[44] <= (byte)flag[46])))) ||
                                     (((byte)flag[47] <= (byte)flag[44] ||
                                      (((((byte)flag[48] <= (byte)flag[44] ||
                                         ((byte)flag[44] <= (byte)flag[49])) ||
                                        ((byte)flag[44] <= (byte)flag[50])) ||
                                       ((((byte)flag[44] <= (byte)flag[51] ||
                                         ((byte)flag[52] <= (byte)flag[44])) ||
                                        (((byte)flag[53] <= (byte)flag[44] ||
                                         (((byte)flag[54] <= (byte)flag[44] ||
                                          ((byte)flag[55] <= (byte)flag[44])))))))))))) ||
                                    (((byte)flag[44] <= (byte)flag[56] ||
                                     ((((((byte)flag[57] <= (byte)flag[44] ||
                                         ((byte)flag[58] <= (byte)flag[44])) ||
                                        ((byte)flag[59] <= (byte)flag[44])) ||
                                       (((byte)flag[60] <= (byte)flag[44] ||
                                        ((byte)flag[44] <= (byte)flag[61])))) ||
                                      (((byte)flag[62] <= (byte)flag[44] ||
                                       (((byte)flag[44] <= (byte)flag[63] ||
                                        ((byte)flag[44] <= (byte)flag[64])))))))))))))))) ||
               ((((((byte)flag[65] <= (byte)flag[44] ||
                   ((((byte)flag[44] <= (byte)flag[66] || ((byte)flag[68] <= (byte)flag[44])) ||
                    ((byte)flag[69] <= (byte)flag[44])))) ||
                  ((((byte)flag[44] <= (byte)flag[70] || ((byte)flag[71] <= (byte)flag[44])) ||
                   (((((byte)flag[72] <= (byte)flag[44] ||
                      (((byte)flag[0] <= (byte)flag[45] || ((byte)flag[1] <= (byte)flag[45])))) ||
                     ((byte)flag[45] <= (byte)flag[2])) ||
                    ((((((byte)flag[3] <= (byte)flag[45] || ((byte)flag[4] <= (byte)flag[45])) ||
                       ((byte)flag[5] <= (byte)flag[45])) ||
                      ((((byte)flag[6] <= (byte)flag[45] || ((byte)flag[8] <= (byte)flag[45])) ||
                       (((byte)flag[9] <= (byte)flag[45] ||
                        (((byte)flag[10] <= (byte)flag[45] || ((byte)flag[45] <= (byte)flag[11])))))
                       ))) || ((byte)flag[12] <= (byte)flag[45])))))))) ||
                 ((((((((((((byte)flag[45] <= (byte)flag[13] || ((byte)flag[14] <= (byte)flag[45]))
                          || ((byte)flag[15] <= (byte)flag[45])) ||
                         (((byte)flag[16] <= (byte)flag[45] || ((byte)flag[17] <= (byte)flag[45]))))
                        || ((byte)flag[18] <= (byte)flag[45])) ||
                       (((byte)flag[19] <= (byte)flag[45] || ((byte)flag[20] <= (byte)flag[45]))))
                      || (((byte)flag[21] <= (byte)flag[45] ||
                          ((((byte)flag[22] <= (byte)flag[45] || ((byte)flag[23] <= (byte)flag[45]))
                           || ((byte)flag[24] <= (byte)flag[45])))))) ||
                     ((((((byte)flag[45] <= (byte)flag[26] || ((byte)flag[27] <= (byte)flag[45])) ||
                        ((byte)flag[28] <= (byte)flag[45])) ||
                       (((byte)flag[30] <= (byte)flag[45] || ((byte)flag[31] <= (byte)flag[45]))))
                      || (((byte)flag[32] <= (byte)flag[45] ||
                          ((((byte)flag[34] <= (byte)flag[45] || ((byte)flag[45] <= (byte)flag[35]))
                           || ((byte)flag[36] <= (byte)flag[45])))))))) ||
                    (((byte)flag[37] <= (byte)flag[45] || ((byte)flag[45] <= (byte)flag[38])))) ||
                   ((byte)flag[39] <= (byte)flag[45])) ||
                  (((((byte)flag[40] <= (byte)flag[45] || ((byte)flag[45] <= (byte)flag[41])) ||
                    (((byte)flag[42] <= (byte)flag[45] ||
                     (((((byte)flag[45] <= (byte)flag[43] || ((byte)flag[44] <= (byte)flag[45])) ||
                       ((byte)flag[45] <= (byte)flag[46])) ||
                      (((byte)flag[47] <= (byte)flag[45] || ((byte)flag[48] <= (byte)flag[45])))))))
                    ) || (((byte)flag[45] <= (byte)flag[50] ||
                          (((byte)flag[51] <= (byte)flag[45] || ((byte)flag[52] <= (byte)flag[45])))
                          ))))))) ||
                ((((((byte)flag[53] <= (byte)flag[45] ||
                    ((((byte)flag[54] <= (byte)flag[45] || ((byte)flag[55] <= (byte)flag[45])) ||
                     ((byte)flag[45] <= (byte)flag[56])))) ||
                   ((((byte)flag[57] <= (byte)flag[45] || ((byte)flag[58] <= (byte)flag[45])) ||
                    ((byte)flag[59] <= (byte)flag[45])))) ||
                  (((((byte)flag[60] <= (byte)flag[45] || ((byte)flag[45] <= (byte)flag[61])) ||
                    (((byte)flag[62] <= (byte)flag[45] ||
                     ((((byte)flag[45] <= (byte)flag[64] || ((byte)flag[65] <= (byte)flag[45])) ||
                      ((byte)flag[45] <= (byte)flag[66])))))) ||
                   (((byte)flag[67] <= (byte)flag[45] || ((byte)flag[68] <= (byte)flag[45])))))) ||
                 ((byte)flag[69] <= (byte)flag[45])))))))))) ||
            (((((((byte)flag[70] <= (byte)flag[45] || ((byte)flag[71] <= (byte)flag[45])) ||
                (((byte)flag[72] <= (byte)flag[45] ||
                 (((((byte)flag[0] <= (byte)flag[46] || ((byte)flag[1] <= (byte)flag[46])) ||
                   ((byte)flag[3] <= (byte)flag[46])) ||
                  (((byte)flag[4] <= (byte)flag[46] || ((byte)flag[5] <= (byte)flag[46])))))))) ||
               (((byte)flag[6] <= (byte)flag[46] ||
                (((byte)flag[7] <= (byte)flag[46] || ((byte)flag[8] <= (byte)flag[46])))))) ||
              (((((byte)flag[9] <= (byte)flag[46] ||
                 ((((byte)flag[10] <= (byte)flag[46] || ((byte)flag[11] <= (byte)flag[46])) ||
                  ((byte)flag[12] <= (byte)flag[46])))) ||
                ((((byte)flag[13] <= (byte)flag[46] || ((byte)flag[14] <= (byte)flag[46])) ||
                 ((byte)flag[15] <= (byte)flag[46])))) ||
               (((byte)flag[16] <= (byte)flag[46] || ((byte)flag[17] <= (byte)flag[46])))))) ||
             ((((((byte)flag[18] <= (byte)flag[46] ||
                 ((((byte)flag[19] <= (byte)flag[46] || ((byte)flag[20] <= (byte)flag[46])) ||
                  ((byte)flag[21] <= (byte)flag[46])))) ||
                ((((byte)flag[22] <= (byte)flag[46] || ((byte)flag[23] <= (byte)flag[46])) ||
                 ((byte)flag[24] <= (byte)flag[46])))) ||
               (((((byte)flag[25] <= (byte)flag[46] || ((byte)flag[26] <= (byte)flag[46])) ||
                 (((byte)flag[27] <= (byte)flag[46] ||
                  ((((((byte)flag[28] <= (byte)flag[46] || ((byte)flag[29] <= (byte)flag[46])) ||
                     ((byte)flag[30] <= (byte)flag[46])) ||
                    (((byte)flag[31] <= (byte)flag[46] || ((byte)flag[32] <= (byte)flag[46])))) ||
                   ((byte)flag[33] <= (byte)flag[46])))))) ||
                (((byte)flag[34] <= (byte)flag[46] || ((byte)flag[36] <= (byte)flag[46])))))) ||
              (((((byte)flag[37] <= (byte)flag[46] ||
                 ((((byte)flag[38] <= (byte)flag[46] || ((byte)flag[39] <= (byte)flag[46])) ||
                  ((byte)flag[40] <= (byte)flag[46])))) ||
                (((((byte)flag[42] <= (byte)flag[46] || ((byte)flag[43] <= (byte)flag[46])) ||
                  (((byte)flag[44] <= (byte)flag[46] ||
                   (((byte)flag[45] <= (byte)flag[46] || ((byte)flag[47] <= (byte)flag[46])))))) ||
                 ((byte)flag[48] <= (byte)flag[46])))) ||
               (((((byte)flag[49] <= (byte)flag[46] || ((byte)flag[50] <= (byte)flag[46])) ||
                 ((byte)flag[51] <= (byte)flag[46])) ||
                (((byte)flag[52] <= (byte)flag[46] || ((byte)flag[53] <= (byte)flag[46]))))))))))))
           || ((((((((byte)flag[54] <= (byte)flag[46] ||
                    (((byte)flag[55] <= (byte)flag[46] || ((byte)flag[57] <= (byte)flag[46])))) ||
                   ((byte)flag[58] <= (byte)flag[46])) ||
                  (((((((byte)flag[59] <= (byte)flag[46] || ((byte)flag[60] <= (byte)flag[46])) ||
                      ((byte)flag[62] <= (byte)flag[46])) ||
                     (((byte)flag[63] <= (byte)flag[46] || ((byte)flag[65] <= (byte)flag[46])))) ||
                    (((byte)flag[67] <= (byte)flag[46] ||
                     (((byte)flag[68] <= (byte)flag[46] || ((byte)flag[69] <= (byte)flag[46]))))))
                   || ((byte)flag[70] <= (byte)flag[46])))) ||
                 (((((byte)flag[71] <= (byte)flag[46] || ((byte)flag[72] <= (byte)flag[46])) ||
                   ((byte)flag[47] <= (byte)flag[0])) ||
                  ((((byte)flag[47] <= (byte)flag[1] || ((byte)flag[47] <= (byte)flag[2])) ||
                   (((byte)flag[47] <= (byte)flag[3] ||
                    (((byte)flag[4] <= (byte)flag[47] || ((byte)flag[5] <= (byte)flag[47]))))))))))
                || (((((byte)flag[47] <= (byte)flag[6] ||
                      ((((byte)flag[47] <= (byte)flag[7] || ((byte)flag[47] <= (byte)flag[8])) ||
                       ((byte)flag[9] <= (byte)flag[47])))) ||
                     (((((byte)flag[47] <= (byte)flag[10] || ((byte)flag[47] <= (byte)flag[11])) ||
                       (((byte)flag[47] <= (byte)flag[12] ||
                        (((byte)flag[47] <= (byte)flag[13] || ((byte)flag[47] <= (byte)flag[15])))))
                       ) || (((byte)flag[16] <= (byte)flag[47] ||
                             (((((byte)flag[47] <= (byte)flag[17] ||
                                ((byte)flag[47] <= (byte)flag[18])) ||
                               ((byte)flag[47] <= (byte)flag[19])) ||
                              (((byte)flag[20] <= (byte)flag[47] ||
                               ((byte)flag[47] <= (byte)flag[21])))))))))) ||
                    ((((byte)flag[22] <= (byte)flag[47] ||
                      (((byte)flag[47] <= (byte)flag[23] || ((byte)flag[47] <= (byte)flag[24])))) ||
                     (((byte)flag[47] <= (byte)flag[25] ||
                      (((((byte)flag[47] <= (byte)flag[26] || ((byte)flag[47] <= (byte)flag[27])) ||
                        ((byte)flag[28] <= (byte)flag[47])) ||
                       ((((byte)flag[47] <= (byte)flag[29] || ((byte)flag[31] <= (byte)flag[47])) ||
                        (((byte)flag[47] <= (byte)flag[32] ||
                         (((byte)flag[47] <= (byte)flag[33] || ((byte)flag[47] <= (byte)flag[34]))))
                        )))))))))))) ||
               (((((((byte)flag[47] <= (byte)flag[35] ||
                    ((((byte)flag[36] <= (byte)flag[47] || ((byte)flag[37] <= (byte)flag[47])) ||
                     ((byte)flag[47] <= (byte)flag[38])))) ||
                   (((byte)flag[47] <= (byte)flag[39] || ((byte)flag[47] <= (byte)flag[40])))) ||
                  ((((byte)flag[47] <= (byte)flag[41] ||
                    (((byte)flag[47] <= (byte)flag[42] || ((byte)flag[47] <= (byte)flag[43])))) ||
                   ((byte)flag[47] <= (byte)flag[44])))) ||
                 (((((((((((((byte)flag[47] <= (byte)flag[45] || ((byte)flag[47] <= (byte)flag[46]))
                           || ((byte)flag[47] <= (byte)flag[48])) ||
                          (((byte)flag[47] <= (byte)flag[49] || ((byte)flag[47] <= (byte)flag[50])))
                          ) || ((byte)flag[47] <= (byte)flag[51])) ||
                        (((byte)flag[47] <= (byte)flag[52] || ((byte)flag[53] <= (byte)flag[47]))))
                       || (((byte)flag[54] <= (byte)flag[47] ||
                           ((((byte)flag[47] <= (byte)flag[55] || ((byte)flag[47] <= (byte)flag[56])
                             ) || ((byte)flag[57] <= (byte)flag[47])))))) ||
                      (((((((byte)flag[58] <= (byte)flag[47] || ((byte)flag[47] <= (byte)flag[59]))
                          || ((byte)flag[47] <= (byte)flag[60])) ||
                         (((byte)flag[47] <= (byte)flag[61] || ((byte)flag[62] <= (byte)flag[47]))))
                        || (((byte)flag[47] <= (byte)flag[63] ||
                            ((((byte)flag[47] <= (byte)flag[64] ||
                              ((byte)flag[47] <= (byte)flag[65])) ||
                             ((byte)flag[47] <= (byte)flag[66])))))) ||
                       ((((byte)flag[47] <= (byte)flag[67] || ((byte)flag[68] <= (byte)flag[47])) ||
                        (((byte)flag[69] <= (byte)flag[47] ||
                         ((((byte)flag[47] <= (byte)flag[70] || ((byte)flag[71] <= (byte)flag[47]))
                          || (((byte)flag[72] <= (byte)flag[47] ||
                              (((((byte)flag[48] <= (byte)flag[0] ||
                                 ((byte)flag[48] <= (byte)flag[1])) ||
                                ((byte)flag[48] <= (byte)flag[2])) ||
                               (((byte)flag[48] <= (byte)flag[3] ||
                                ((byte)flag[4] <= (byte)flag[48])))))))))))))))) ||
                     (((byte)flag[5] <= (byte)flag[48] ||
                      (((byte)flag[48] <= (byte)flag[6] || ((byte)flag[48] <= (byte)flag[7])))))) ||
                    (((((((byte)flag[8] <= (byte)flag[48] ||
                         ((((byte)flag[9] <= (byte)flag[48] || ((byte)flag[48] <= (byte)flag[10]))
                          || ((byte)flag[48] <= (byte)flag[11])))) ||
                        ((((byte)flag[48] <= (byte)flag[12] || ((byte)flag[48] <= (byte)flag[13]))
                         || ((byte)flag[14] <= (byte)flag[48])))) ||
                       (((byte)flag[15] <= (byte)flag[48] || ((byte)flag[16] <= (byte)flag[48]))))
                      || (((byte)flag[48] <= (byte)flag[18] ||
                          ((((byte)flag[19] <= (byte)flag[48] || ((byte)flag[20] <= (byte)flag[48]))
                           || ((byte)flag[48] <= (byte)flag[21])))))) ||
                     (((((byte)flag[22] <= (byte)flag[48] || ((byte)flag[48] <= (byte)flag[23])) ||
                       (((byte)flag[24] <= (byte)flag[48] ||
                        ((((byte)flag[48] <= (byte)flag[25] || ((byte)flag[48] <= (byte)flag[26]))
                         || (((byte)flag[27] <= (byte)flag[48] ||
                             (((((byte)flag[28] <= (byte)flag[48] ||
                                ((byte)flag[48] <= (byte)flag[29])) ||
                               ((byte)flag[30] <= (byte)flag[48])) ||
                              (((byte)flag[31] <= (byte)flag[48] ||
                               ((byte)flag[48] <= (byte)flag[32])))))))))))) ||
                      ((byte)flag[48] <= (byte)flag[33])))))) ||
                   ((((((byte)flag[48] <= (byte)flag[34] || ((byte)flag[48] <= (byte)flag[35])) ||
                      (((((((byte)flag[36] <= (byte)flag[48] ||
                           ((((byte)flag[37] <= (byte)flag[48] || ((byte)flag[48] <= (byte)flag[38])
                             ) || ((byte)flag[39] <= (byte)flag[48])))) ||
                          ((((byte)flag[48] <= (byte)flag[40] || ((byte)flag[48] <= (byte)flag[41]))
                           || ((byte)flag[48] <= (byte)flag[43])))) ||
                         ((((byte)flag[48] <= (byte)flag[44] || ((byte)flag[48] <= (byte)flag[45]))
                          || (((byte)flag[48] <= (byte)flag[46] ||
                              ((((byte)flag[47] <= (byte)flag[48] ||
                                ((byte)flag[48] <= (byte)flag[49])) ||
                               ((byte)flag[48] <= (byte)flag[50])))))))) ||
                        (((byte)flag[48] <= (byte)flag[51] || ((byte)flag[52] <= (byte)flag[48]))))
                       || ((((byte)flag[53] <= (byte)flag[48] ||
                            (((((byte)flag[54] <= (byte)flag[48] ||
                               ((byte)flag[55] <= (byte)flag[48])) ||
                              (((byte)flag[48] <= (byte)flag[56] ||
                               ((((((byte)flag[57] <= (byte)flag[48] ||
                                   ((byte)flag[58] <= (byte)flag[48])) ||
                                  ((byte)flag[59] <= (byte)flag[48])) ||
                                 (((byte)flag[48] <= (byte)flag[60] ||
                                  ((byte)flag[48] <= (byte)flag[61])))) ||
                                ((byte)flag[62] <= (byte)flag[48])))))) ||
                             (((byte)flag[48] <= (byte)flag[63] ||
                              ((byte)flag[48] <= (byte)flag[64])))))) ||
                           ((byte)flag[48] <= (byte)flag[66])))))) ||
                     ((((((((((byte)flag[48] <= (byte)flag[67] || ((byte)flag[68] <= (byte)flag[48])
                             ) || ((byte)flag[69] <= (byte)flag[48])) ||
                           ((((byte)flag[48] <= (byte)flag[70] || ((byte)flag[71] <= (byte)flag[48])
                             ) || (((byte)flag[72] <= (byte)flag[48] ||
                                   (((byte)flag[0] <= (byte)flag[49] ||
                                    ((byte)flag[1] <= (byte)flag[49])))))))) ||
                          ((byte)flag[49] <= (byte)flag[2])) ||
                         ((((byte)flag[3] <= (byte)flag[49] || ((byte)flag[4] <= (byte)flag[49])) ||
                          ((byte)flag[5] <= (byte)flag[49])))) ||
                        ((((byte)flag[6] <= (byte)flag[49] || ((byte)flag[8] <= (byte)flag[49])) ||
                         ((((byte)flag[9] <= (byte)flag[49] ||
                           (((byte)flag[10] <= (byte)flag[49] || ((byte)flag[49] <= (byte)flag[11]))
                           )) || ((byte)flag[12] <= (byte)flag[49])))))) ||
                       ((((((byte)flag[49] <= (byte)flag[13] || ((byte)flag[14] <= (byte)flag[49]))
                          || ((byte)flag[15] <= (byte)flag[49])) ||
                         (((byte)flag[16] <= (byte)flag[49] || ((byte)flag[17] <= (byte)flag[49]))))
                        || (((byte)flag[18] <= (byte)flag[49] ||
                            (((byte)flag[19] <= (byte)flag[49] || ((byte)flag[20] <= (byte)flag[49])
                             ))))))) ||
                      (((byte)flag[21] <= (byte)flag[49] ||
                       (((((byte)flag[22] <= (byte)flag[49] || ((byte)flag[23] <= (byte)flag[49]))
                         || ((byte)flag[24] <= (byte)flag[49])) ||
                        ((((byte)flag[49] <= (byte)flag[26] || ((byte)flag[27] <= (byte)flag[49]))
                         || (((byte)flag[28] <= (byte)flag[49] ||
                             (((byte)flag[30] <= (byte)flag[49] ||
                              ((byte)flag[31] <= (byte)flag[49])))))))))))))) ||
                    (((((((byte)flag[32] <= (byte)flag[49] ||
                         ((((((byte)flag[34] <= (byte)flag[49] || ((byte)flag[49] <= (byte)flag[35])
                             ) || ((byte)flag[36] <= (byte)flag[49])) ||
                           (((byte)flag[37] <= (byte)flag[49] || ((byte)flag[49] <= (byte)flag[38]))
                           )) || (((byte)flag[39] <= (byte)flag[49] ||
                                  (((byte)flag[40] <= (byte)flag[49] ||
                                   ((byte)flag[49] <= (byte)flag[41])))))))) ||
                        ((((byte)flag[42] <= (byte)flag[49] ||
                          (((((byte)flag[49] <= (byte)flag[43] || ((byte)flag[44] <= (byte)flag[49])
                             ) || ((byte)flag[49] <= (byte)flag[46])) ||
                           (((byte)flag[47] <= (byte)flag[49] || ((byte)flag[48] <= (byte)flag[49]))
                           )))) || ((((byte)flag[49] <= (byte)flag[50] ||
                                     (((byte)flag[51] <= (byte)flag[49] ||
                                      ((byte)flag[52] <= (byte)flag[49])))) ||
                                    ((byte)flag[53] <= (byte)flag[49])))))) ||
                       (((((((byte)flag[54] <= (byte)flag[49] || ((byte)flag[55] <= (byte)flag[49]))
                           || ((byte)flag[49] <= (byte)flag[56])) ||
                          ((((byte)flag[57] <= (byte)flag[49] || ((byte)flag[58] <= (byte)flag[49]))
                           || (((byte)flag[59] <= (byte)flag[49] ||
                               (((byte)flag[60] <= (byte)flag[49] ||
                                ((byte)flag[49] <= (byte)flag[61])))))))) ||
                         (((byte)flag[62] <= (byte)flag[49] ||
                          ((((byte)flag[49] <= (byte)flag[64] || ((byte)flag[65] <= (byte)flag[49]))
                           || ((byte)flag[49] <= (byte)flag[66])))))) ||
                        (((((((byte)flag[67] <= (byte)flag[49] || ((byte)flag[68] <= (byte)flag[49])
                             ) || (((((byte)flag[69] <= (byte)flag[49] ||
                                     (((byte)flag[70] <= (byte)flag[49] ||
                                      ((byte)flag[71] <= (byte)flag[49])))) ||
                                    ((byte)flag[72] <= (byte)flag[49])) ||
                                   ((((((byte)flag[0] <= (byte)flag[50] ||
                                       ((byte)flag[1] <= (byte)flag[50])) ||
                                      ((byte)flag[50] <= (byte)flag[2])) ||
                                     (((byte)flag[3] <= (byte)flag[50] ||
                                      ((byte)flag[4] <= (byte)flag[50])))) ||
                                    ((byte)flag[5] <= (byte)flag[50])))))) ||
                           ((((byte)flag[6] <= (byte)flag[50] || ((byte)flag[7] <= (byte)flag[50]))
                            || (((byte)flag[8] <= (byte)flag[50] ||
                                ((((byte)flag[9] <= (byte)flag[50] ||
                                  ((byte)flag[10] <= (byte)flag[50])) ||
                                 ((byte)flag[50] <= (byte)flag[11])))))))) ||
                          (((byte)flag[12] <= (byte)flag[50] || ((byte)flag[50] <= (byte)flag[13])))
                          ) || ((byte)flag[14] <= (byte)flag[50])))))) ||
                      (((((((byte)flag[15] <= (byte)flag[50] || ((byte)flag[16] <= (byte)flag[50]))
                          || (((byte)flag[17] <= (byte)flag[50] ||
                              ((((byte)flag[18] <= (byte)flag[50] ||
                                ((byte)flag[19] <= (byte)flag[50])) ||
                               ((byte)flag[20] <= (byte)flag[50])))))) ||
                         ((((byte)flag[21] <= (byte)flag[50] || ((byte)flag[22] <= (byte)flag[50]))
                          || (((byte)flag[23] <= (byte)flag[50] ||
                              (((((byte)flag[24] <= (byte)flag[50] ||
                                 ((byte)flag[25] <= (byte)flag[50])) ||
                                (((byte)flag[27] <= (byte)flag[50] ||
                                 (((((byte)flag[28] <= (byte)flag[50] ||
                                    ((byte)flag[29] <= (byte)flag[50])) ||
                                   ((byte)flag[30] <= (byte)flag[50])) ||
                                  (((byte)flag[31] <= (byte)flag[50] ||
                                   ((byte)flag[32] <= (byte)flag[50])))))))) ||
                               ((byte)flag[33] <= (byte)flag[50])))))))) ||
                        (((byte)flag[34] <= (byte)flag[50] || ((byte)flag[50] <= (byte)flag[35]))))
                       || ((((byte)flag[36] <= (byte)flag[50] ||
                            ((((byte)flag[37] <= (byte)flag[50] ||
                              ((byte)flag[39] <= (byte)flag[50])) ||
                             ((byte)flag[40] <= (byte)flag[50])))) ||
                           ((((byte)flag[50] <= (byte)flag[41] || ((byte)flag[42] <= (byte)flag[50])
                             ) || ((byte)flag[44] <= (byte)flag[50])))))))) ||
                     ((((byte)flag[45] <= (byte)flag[50] || ((byte)flag[50] <= (byte)flag[46])) ||
                      (((byte)flag[47] <= (byte)flag[50] ||
                       ((((byte)flag[48] <= (byte)flag[50] || ((byte)flag[49] <= (byte)flag[50])) ||
                        ((byte)flag[51] <= (byte)flag[50])))))))))))) ||
                  ((((((byte)flag[52] <= (byte)flag[50] || ((byte)flag[53] <= (byte)flag[50])) ||
                     (((byte)flag[54] <= (byte)flag[50] ||
                      (((((byte)flag[55] <= (byte)flag[50] || ((byte)flag[50] <= (byte)flag[56])) ||
                        (((byte)flag[57] <= (byte)flag[50] ||
                         (((((byte)flag[58] <= (byte)flag[50] || ((byte)flag[59] <= (byte)flag[50]))
                           || ((byte)flag[60] <= (byte)flag[50])) ||
                          (((byte)flag[50] <= (byte)flag[61] || ((byte)flag[62] <= (byte)flag[50])))
                          ))))) ||
                       (((byte)flag[63] <= (byte)flag[50] ||
                        (((byte)flag[50] <= (byte)flag[64] || ((byte)flag[65] <= (byte)flag[50])))))
                       ))))) ||
                    ((((((byte)flag[50] <= (byte)flag[66] ||
                        ((((byte)flag[67] <= (byte)flag[50] || ((byte)flag[68] <= (byte)flag[50]))
                         || ((byte)flag[69] <= (byte)flag[50])))) ||
                       ((((byte)flag[70] <= (byte)flag[50] || ((byte)flag[71] <= (byte)flag[50])) ||
                        ((byte)flag[72] <= (byte)flag[50])))) ||
                      ((((byte)flag[51] <= (byte)flag[0] || ((byte)flag[1] <= (byte)flag[51])) ||
                       (((byte)flag[51] <= (byte)flag[2] ||
                        ((((byte)flag[51] <= (byte)flag[3] || ((byte)flag[4] <= (byte)flag[51])) ||
                         ((byte)flag[5] <= (byte)flag[51])))))))) ||
                     ((((byte)flag[51] <= (byte)flag[7] || ((byte)flag[8] <= (byte)flag[51])) ||
                      ((byte)flag[9] <= (byte)flag[51])))))) ||
                   ((((((byte)flag[10] <= (byte)flag[51] || ((byte)flag[51] <= (byte)flag[11])) ||
                      (((byte)flag[12] <= (byte)flag[51] ||
                       ((((((((byte)flag[51] <= (byte)flag[13] || ((byte)flag[14] <= (byte)flag[51])
                             ) || ((byte)flag[15] <= (byte)flag[51])) ||
                           (((byte)flag[16] <= (byte)flag[51] || ((byte)flag[17] <= (byte)flag[51]))
                           )) || ((byte)flag[51] <= (byte)flag[18])) ||
                         (((byte)flag[19] <= (byte)flag[51] || ((byte)flag[20] <= (byte)flag[51]))))
                        || ((byte)flag[21] <= (byte)flag[51])))))) ||
                     (((((byte)flag[22] <= (byte)flag[51] || ((byte)flag[23] <= (byte)flag[51])) ||
                       ((byte)flag[24] <= (byte)flag[51])) ||
                      (((byte)flag[51] <= (byte)flag[25] || ((byte)flag[51] <= (byte)flag[26]))))))
                    || ((byte)flag[27] <= (byte)flag[51])))))))) ||
                (((((((((byte)flag[28] <= (byte)flag[51] || ((byte)flag[51] <= (byte)flag[29])) ||
                      (((byte)flag[30] <= (byte)flag[51] ||
                       ((((byte)flag[31] <= (byte)flag[51] || ((byte)flag[51] <= (byte)flag[33])) ||
                        ((byte)flag[34] <= (byte)flag[51])))))) ||
                     (((((byte)flag[51] <= (byte)flag[35] || ((byte)flag[36] <= (byte)flag[51])) ||
                       (((byte)flag[37] <= (byte)flag[51] ||
                        (((((byte)flag[51] <= (byte)flag[38] || ((byte)flag[39] <= (byte)flag[51]))
                          || (((byte)flag[51] <= (byte)flag[40] ||
                              (((((byte)flag[51] <= (byte)flag[41] ||
                                 ((byte)flag[42] <= (byte)flag[51])) ||
                                ((byte)flag[51] <= (byte)flag[43])) ||
                               (((byte)flag[44] <= (byte)flag[51] ||
                                ((byte)flag[51] <= (byte)flag[45])))))))) ||
                         ((byte)flag[51] <= (byte)flag[46])))))) ||
                      (((byte)flag[47] <= (byte)flag[51] || ((byte)flag[48] <= (byte)flag[51]))))))
                    || ((((((byte)flag[51] <= (byte)flag[49] ||
                           ((((byte)flag[51] <= (byte)flag[50] || ((byte)flag[52] <= (byte)flag[51])
                             ) || ((byte)flag[53] <= (byte)flag[51])))) ||
                          ((((byte)flag[54] <= (byte)flag[51] || ((byte)flag[55] <= (byte)flag[51]))
                           || ((byte)flag[51] <= (byte)flag[56])))) ||
                         ((((byte)flag[57] <= (byte)flag[51] || ((byte)flag[58] <= (byte)flag[51]))
                          || (((byte)flag[59] <= (byte)flag[51] ||
                              ((((byte)flag[60] <= (byte)flag[51] ||
                                ((byte)flag[51] <= (byte)flag[61])) ||
                               ((byte)flag[62] <= (byte)flag[51])))))))) ||
                        (((byte)flag[51] <= (byte)flag[63] || ((byte)flag[51] <= (byte)flag[64])))))
                    ) || ((((byte)flag[65] <= (byte)flag[51] ||
                           (((((byte)flag[51] <= (byte)flag[66] ||
                              ((byte)flag[67] <= (byte)flag[51])) ||
                             (((byte)flag[68] <= (byte)flag[51] ||
                              (((((byte)flag[69] <= (byte)flag[51] ||
                                 ((byte)flag[70] <= (byte)flag[51])) ||
                                ((byte)flag[71] <= (byte)flag[51])) ||
                               (((byte)flag[72] <= (byte)flag[51] ||
                                ((byte)flag[52] <= (byte)flag[0])))))))) ||
                            (((byte)flag[52] <= (byte)flag[1] ||
                             (((byte)flag[52] <= (byte)flag[2] || ((byte)flag[52] <= (byte)flag[3]))
                             )))))) ||
                          ((((((byte)flag[4] <= (byte)flag[52] ||
                              ((((byte)flag[5] <= (byte)flag[52] ||
                                ((byte)flag[52] <= (byte)flag[6])) ||
                               ((byte)flag[52] <= (byte)flag[7])))) ||
                             ((((byte)flag[8] <= (byte)flag[52] || ((byte)flag[9] <= (byte)flag[52])
                               ) || ((byte)flag[52] <= (byte)flag[10])))) ||
                            (((byte)flag[52] <= (byte)flag[11] || ((byte)flag[52] <= (byte)flag[12])
                             ))) || (((byte)flag[52] <= (byte)flag[13] ||
                                     ((((byte)flag[14] <= (byte)flag[52] ||
                                       ((byte)flag[16] <= (byte)flag[52])) ||
                                      ((byte)flag[52] <= (byte)flag[17])))))))))) ||
                  ((((((((byte)flag[52] <= (byte)flag[18] || ((byte)flag[20] <= (byte)flag[52])) ||
                       ((byte)flag[52] <= (byte)flag[21])) ||
                      ((((byte)flag[22] <= (byte)flag[52] || ((byte)flag[52] <= (byte)flag[23])) ||
                       (((byte)flag[24] <= (byte)flag[52] ||
                        ((((((byte)flag[52] <= (byte)flag[25] || ((byte)flag[52] <= (byte)flag[26]))
                           || ((byte)flag[28] <= (byte)flag[52])) ||
                          (((byte)flag[52] <= (byte)flag[29] || ((byte)flag[30] <= (byte)flag[52])))
                          ) || ((byte)flag[31] <= (byte)flag[52])))))))) ||
                     (((byte)flag[52] <= (byte)flag[32] || ((byte)flag[52] <= (byte)flag[33])))) ||
                    ((((byte)flag[52] <= (byte)flag[34] ||
                      ((((byte)flag[52] <= (byte)flag[35] || ((byte)flag[36] <= (byte)flag[52])) ||
                       ((byte)flag[37] <= (byte)flag[52])))) ||
                     (((((byte)flag[52] <= (byte)flag[38] || ((byte)flag[52] <= (byte)flag[40])) ||
                       (((byte)flag[52] <= (byte)flag[41] ||
                        (((byte)flag[52] <= (byte)flag[42] || ((byte)flag[52] <= (byte)flag[43])))))
                       ) || ((byte)flag[52] <= (byte)flag[44])))))) ||
                   ((((((byte)flag[52] <= (byte)flag[45] || ((byte)flag[52] <= (byte)flag[46])) ||
                      ((byte)flag[47] <= (byte)flag[52])) ||
                     ((((byte)flag[52] <= (byte)flag[48] || ((byte)flag[52] <= (byte)flag[49])) ||
                      ((((byte)flag[52] <= (byte)flag[50] ||
                        (((byte)flag[52] <= (byte)flag[51] || ((byte)flag[53] <= (byte)flag[52]))))
                       || ((byte)flag[54] <= (byte)flag[52])))))) ||
                    ((((((byte)flag[52] <= (byte)flag[56] || ((byte)flag[57] <= (byte)flag[52])) ||
                       ((byte)flag[58] <= (byte)flag[52])) ||
                      (((byte)flag[52] <= (byte)flag[60] || ((byte)flag[52] <= (byte)flag[61])))) ||
                     (((byte)flag[62] <= (byte)flag[52] ||
                      (((byte)flag[52] <= (byte)flag[63] || ((byte)flag[52] <= (byte)flag[64])))))))
                    ))))) ||
                 (((byte)flag[52] <= (byte)flag[65] ||
                  (((((((byte)flag[52] <= (byte)flag[66] || ((byte)flag[52] <= (byte)flag[67])) ||
                      ((byte)flag[68] <= (byte)flag[52])) ||
                     ((((byte)flag[69] <= (byte)flag[52] || ((byte)flag[52] <= (byte)flag[70])) ||
                      (((byte)flag[71] <= (byte)flag[52] ||
                       (((byte)flag[72] <= (byte)flag[52] || ((byte)flag[53] <= (byte)flag[0])))))))
                     ) || ((byte)flag[53] <= (byte)flag[1])) ||
                   ((((byte)flag[53] <= (byte)flag[2] || ((byte)flag[53] <= (byte)flag[3])) ||
                    ((byte)flag[4] <= (byte)flag[53])))))))))))))) ||
          ((((((((byte)flag[53] <= (byte)flag[5] || ((byte)flag[53] <= (byte)flag[6])) ||
               (((byte)flag[53] <= (byte)flag[7] ||
                (((byte)flag[53] <= (byte)flag[8] || ((byte)flag[53] <= (byte)flag[9])))))) ||
              (((byte)flag[53] <= (byte)flag[10] ||
               (((((byte)flag[53] <= (byte)flag[11] || ((byte)flag[53] <= (byte)flag[12])) ||
                 ((byte)flag[53] <= (byte)flag[13])) ||
                (((byte)flag[53] <= (byte)flag[14] || ((byte)flag[53] <= (byte)flag[15])))))))) ||
             ((((((byte)flag[53] <= (byte)flag[17] ||
                 (((byte)flag[53] <= (byte)flag[18] || ((byte)flag[53] <= (byte)flag[19])))) ||
                ((byte)flag[20] <= (byte)flag[53])) ||
               (((((byte)flag[53] <= (byte)flag[21] || ((byte)flag[53] <= (byte)flag[22])) ||
                 ((byte)flag[53] <= (byte)flag[23])) ||
                ((((byte)flag[53] <= (byte)flag[24] || ((byte)flag[53] <= (byte)flag[25])) ||
                 (((byte)flag[53] <= (byte)flag[26] ||
                  (((byte)flag[53] <= (byte)flag[27] || ((byte)flag[53] <= (byte)flag[28]))))))))))
              || (((byte)flag[53] <= (byte)flag[29] ||
                  ((((byte)flag[53] <= (byte)flag[30] || ((byte)flag[53] <= (byte)flag[31])) ||
                   ((byte)flag[53] <= (byte)flag[32])))))))) ||
            ((((byte)flag[53] <= (byte)flag[33] || ((byte)flag[53] <= (byte)flag[34])) ||
             (((((byte)flag[53] <= (byte)flag[35] ||
                (((byte)flag[36] <= (byte)flag[53] || ((byte)flag[37] <= (byte)flag[53])))) ||
               ((byte)flag[53] <= (byte)flag[38])) ||
              ((((((byte)flag[53] <= (byte)flag[39] || ((byte)flag[53] <= (byte)flag[40])) ||
                 ((byte)flag[53] <= (byte)flag[41])) ||
                (((byte)flag[53] <= (byte)flag[42] || ((byte)flag[53] <= (byte)flag[43])))) ||
               ((byte)flag[53] <= (byte)flag[44])))))))) ||
           ((((((((byte)flag[53] <= (byte)flag[45] || ((byte)flag[53] <= (byte)flag[46])) ||
                (((byte)flag[53] <= (byte)flag[47] ||
                 ((((byte)flag[53] <= (byte)flag[48] || ((byte)flag[53] <= (byte)flag[49])) ||
                  ((byte)flag[53] <= (byte)flag[50])))))) ||
               ((((byte)flag[53] <= (byte)flag[51] || ((byte)flag[53] <= (byte)flag[52])) ||
                ((byte)flag[53] <= (byte)flag[54])))) ||
              ((((byte)flag[53] <= (byte)flag[55] || ((byte)flag[53] <= (byte)flag[56])) ||
               (((byte)flag[53] <= (byte)flag[57] ||
                ((((byte)flag[53] <= (byte)flag[58] || ((byte)flag[53] <= (byte)flag[59])) ||
                 ((byte)flag[53] <= (byte)flag[60])))))))) ||
             (((byte)flag[53] <= (byte)flag[61] || ((byte)flag[53] <= (byte)flag[62])))) ||
            (((((((byte)flag[53] <= (byte)flag[63] ||
                 (((((((byte)flag[53] <= (byte)flag[64] || ((byte)flag[53] <= (byte)flag[65])) ||
                     (((byte)flag[53] <= (byte)flag[66] ||
                      (((((byte)flag[53] <= (byte)flag[67] || ((byte)flag[68] <= (byte)flag[53])) ||
                        ((byte)flag[53] <= (byte)flag[69])) ||
                       (((byte)flag[53] <= (byte)flag[70] || ((byte)flag[53] <= (byte)flag[71]))))))
                     )) || ((byte)flag[72] <= (byte)flag[53])) ||
                   (((byte)flag[54] <= (byte)flag[0] || ((byte)flag[54] <= (byte)flag[1])))) ||
                  (((byte)flag[54] <= (byte)flag[2] ||
                   ((((byte)flag[54] <= (byte)flag[3] || ((byte)flag[4] <= (byte)flag[54])) ||
                    ((byte)flag[54] <= (byte)flag[6])))))))) ||
                (((((byte)flag[54] <= (byte)flag[7] || ((byte)flag[54] <= (byte)flag[8])) ||
                  ((byte)flag[9] <= (byte)flag[54])) ||
                 (((byte)flag[54] <= (byte)flag[10] || ((byte)flag[54] <= (byte)flag[11])))))) ||
               (((byte)flag[54] <= (byte)flag[12] ||
                ((((byte)flag[54] <= (byte)flag[13] || ((byte)flag[54] <= (byte)flag[14])) ||
                 ((byte)flag[54] <= (byte)flag[15])))))) ||
              ((((((byte)flag[16] <= (byte)flag[54] || ((byte)flag[54] <= (byte)flag[17])) ||
                 ((byte)flag[54] <= (byte)flag[18])) ||
                ((((byte)flag[54] <= (byte)flag[19] || ((byte)flag[20] <= (byte)flag[54])) ||
                 (((byte)flag[54] <= (byte)flag[21] ||
                  (((((byte)flag[22] <= (byte)flag[54] || ((byte)flag[54] <= (byte)flag[23])) ||
                    ((byte)flag[54] <= (byte)flag[24])) ||
                   (((byte)flag[54] <= (byte)flag[25] || ((byte)flag[54] <= (byte)flag[26]))))))))))
               || ((((byte)flag[54] <= (byte)flag[27] ||
                    (((byte)flag[28] <= (byte)flag[54] || ((byte)flag[54] <= (byte)flag[29])))) ||
                   (((((((byte)flag[54] <= (byte)flag[30] ||
                        ((((byte)flag[54] <= (byte)flag[32] || ((byte)flag[54] <= (byte)flag[33]))
                         || ((byte)flag[54] <= (byte)flag[34])))) ||
                       ((((byte)flag[54] <= (byte)flag[35] || ((byte)flag[36] <= (byte)flag[54])) ||
                        ((byte)flag[37] <= (byte)flag[54])))) ||
                      (((byte)flag[54] <= (byte)flag[38] || ((byte)flag[54] <= (byte)flag[39])))) ||
                     (((byte)flag[54] <= (byte)flag[40] ||
                      ((((byte)flag[54] <= (byte)flag[41] || ((byte)flag[54] <= (byte)flag[42])) ||
                       ((byte)flag[54] <= (byte)flag[43])))))) ||
                    (((byte)flag[54] <= (byte)flag[44] || ((byte)flag[54] <= (byte)flag[45])))))))))
              ) || (((byte)flag[54] <= (byte)flag[46] ||
                    (((((((byte)flag[54] <= (byte)flag[47] || ((byte)flag[54] <= (byte)flag[48])) ||
                        (((byte)flag[54] <= (byte)flag[49] ||
                         (((((((byte)flag[54] <= (byte)flag[50] ||
                              ((byte)flag[54] <= (byte)flag[51])) ||
                             ((byte)flag[54] <= (byte)flag[52])) ||
                            (((byte)flag[53] <= (byte)flag[54] || ((byte)flag[54] <= (byte)flag[55])
                             ))) || ((byte)flag[54] <= (byte)flag[56])) ||
                          (((byte)flag[57] <= (byte)flag[54] || ((byte)flag[54] <= (byte)flag[59])))
                          ))))) || ((byte)flag[54] <= (byte)flag[60])) ||
                      ((((((byte)flag[54] <= (byte)flag[61] || ((byte)flag[54] <= (byte)flag[63]))
                         || ((byte)flag[54] <= (byte)flag[64])) ||
                        (((byte)flag[54] <= (byte)flag[65] || ((byte)flag[54] <= (byte)flag[66]))))
                       || ((((byte)flag[54] <= (byte)flag[67] ||
                            (((byte)flag[68] <= (byte)flag[54] || ((byte)flag[54] <= (byte)flag[69])
                             ))) || ((byte)flag[54] <= (byte)flag[70])))))) ||
                     (((((byte)flag[54] <= (byte)flag[71] || ((byte)flag[72] <= (byte)flag[54])) ||
                       ((byte)flag[55] <= (byte)flag[0])) ||
                      ((((byte)flag[55] <= (byte)flag[1] || ((byte)flag[55] <= (byte)flag[2])) ||
                       (((byte)flag[55] <= (byte)flag[3] ||
                        (((byte)flag[4] <= (byte)flag[55] || ((byte)flag[5] <= (byte)flag[55])))))))
                      ))))))))))))) ||
         (((((((((byte)flag[55] <= (byte)flag[6] ||
                (((((((byte)flag[55] <= (byte)flag[7] || ((byte)flag[8] <= (byte)flag[55])) ||
                    ((byte)flag[9] <= (byte)flag[55])) ||
                   (((byte)flag[55] <= (byte)flag[10] || ((byte)flag[55] <= (byte)flag[11])))) ||
                  (((byte)flag[55] <= (byte)flag[12] ||
                   (((byte)flag[55] <= (byte)flag[13] || ((byte)flag[14] <= (byte)flag[55])))))) ||
                 ((byte)flag[16] <= (byte)flag[55])))) ||
               ((((byte)flag[55] <= (byte)flag[17] || ((byte)flag[55] <= (byte)flag[18])) ||
                ((byte)flag[20] <= (byte)flag[55])))) ||
              ((((byte)flag[55] <= (byte)flag[21] || ((byte)flag[22] <= (byte)flag[55])) ||
               (((byte)flag[55] <= (byte)flag[23] ||
                (((byte)flag[24] <= (byte)flag[55] || ((byte)flag[55] <= (byte)flag[25])))))))) ||
             ((byte)flag[55] <= (byte)flag[26])) ||
            (((((((byte)flag[28] <= (byte)flag[55] || ((byte)flag[55] <= (byte)flag[29])) ||
                ((byte)flag[30] <= (byte)flag[55])) ||
               ((((byte)flag[31] <= (byte)flag[55] || ((byte)flag[55] <= (byte)flag[32])) ||
                (((byte)flag[55] <= (byte)flag[33] ||
                 (((byte)flag[55] <= (byte)flag[34] || ((byte)flag[55] <= (byte)flag[35])))))))) ||
              ((byte)flag[36] <= (byte)flag[55])) ||
             ((((((byte)flag[37] <= (byte)flag[55] || ((byte)flag[55] <= (byte)flag[38])) ||
                ((byte)flag[55] <= (byte)flag[40])) ||
               (((byte)flag[55] <= (byte)flag[41] || ((byte)flag[55] <= (byte)flag[42])))) ||
              (((byte)flag[55] <= (byte)flag[43] ||
               (((byte)flag[55] <= (byte)flag[44] || ((byte)flag[55] <= (byte)flag[45])))))))))) ||
           (((byte)flag[55] <= (byte)flag[46] ||
            ((((byte)flag[47] <= (byte)flag[55] || ((byte)flag[55] <= (byte)flag[48])) ||
             ((byte)flag[55] <= (byte)flag[49])))))) ||
          (((((byte)flag[55] <= (byte)flag[50] || ((byte)flag[55] <= (byte)flag[51])) ||
            ((((byte)flag[53] <= (byte)flag[55] ||
              (((byte)flag[54] <= (byte)flag[55] || ((byte)flag[55] <= (byte)flag[56])))) ||
             ((byte)flag[57] <= (byte)flag[55])))) ||
           ((((((((((byte)flag[58] <= (byte)flag[55] || ((byte)flag[55] <= (byte)flag[60])) ||
                  ((byte)flag[55] <= (byte)flag[61])) ||
                 ((((byte)flag[62] <= (byte)flag[55] || ((byte)flag[55] <= (byte)flag[63])) ||
                  (((byte)flag[55] <= (byte)flag[64] ||
                   (((byte)flag[55] <= (byte)flag[65] || ((byte)flag[55] <= (byte)flag[66]))))))))
                || (((byte)flag[55] <= (byte)flag[67] ||
                    (((((((byte)flag[68] <= (byte)flag[55] || ((byte)flag[69] <= (byte)flag[55])) ||
                        ((byte)flag[55] <= (byte)flag[70])) ||
                       (((byte)flag[71] <= (byte)flag[55] || ((byte)flag[72] <= (byte)flag[55]))))
                      || ((byte)flag[0] <= (byte)flag[56])) ||
                     (((byte)flag[1] <= (byte)flag[56] || ((byte)flag[3] <= (byte)flag[56]))))))))
               || (((((byte)flag[4] <= (byte)flag[56] ||
                     ((((byte)flag[5] <= (byte)flag[56] || ((byte)flag[6] <= (byte)flag[56])) ||
                      ((byte)flag[7] <= (byte)flag[56])))) ||
                    ((((byte)flag[8] <= (byte)flag[56] || ((byte)flag[9] <= (byte)flag[56])) ||
                     ((byte)flag[10] <= (byte)flag[56])))) ||
                   (((byte)flag[11] <= (byte)flag[56] || ((byte)flag[12] <= (byte)flag[56])))))) ||
              ((((((byte)flag[13] <= (byte)flag[56] ||
                  ((((byte)flag[14] <= (byte)flag[56] || ((byte)flag[15] <= (byte)flag[56])) ||
                   ((byte)flag[16] <= (byte)flag[56])))) ||
                 ((((byte)flag[17] <= (byte)flag[56] || ((byte)flag[18] <= (byte)flag[56])) ||
                  (((byte)flag[19] <= (byte)flag[56] ||
                   (((((byte)flag[20] <= (byte)flag[56] || ((byte)flag[21] <= (byte)flag[56])) ||
                     (((byte)flag[22] <= (byte)flag[56] ||
                      (((((byte)flag[23] <= (byte)flag[56] || ((byte)flag[24] <= (byte)flag[56])) ||
                        ((byte)flag[25] <= (byte)flag[56])) ||
                       (((byte)flag[26] <= (byte)flag[56] || ((byte)flag[27] <= (byte)flag[56]))))))
                     )) || ((byte)flag[28] <= (byte)flag[56])))))))) ||
                (((((byte)flag[29] <= (byte)flag[56] || ((byte)flag[30] <= (byte)flag[56])) ||
                  (((((byte)flag[31] <= (byte)flag[56] ||
                     ((((byte)flag[32] <= (byte)flag[56] || ((byte)flag[33] <= (byte)flag[56])) ||
                      ((byte)flag[34] <= (byte)flag[56])))) ||
                    ((((byte)flag[36] <= (byte)flag[56] || ((byte)flag[37] <= (byte)flag[56])) ||
                     ((byte)flag[38] <= (byte)flag[56])))) ||
                   (((byte)flag[39] <= (byte)flag[56] || ((byte)flag[40] <= (byte)flag[56])))))) ||
                 ((((byte)flag[42] <= (byte)flag[56] ||
                   ((((byte)flag[43] <= (byte)flag[56] || ((byte)flag[44] <= (byte)flag[56])) ||
                    ((byte)flag[45] <= (byte)flag[56])))) ||
                  ((((byte)flag[47] <= (byte)flag[56] || ((byte)flag[48] <= (byte)flag[56])) ||
                   ((byte)flag[49] <= (byte)flag[56])))))))) ||
               (((((byte)flag[50] <= (byte)flag[56] || ((byte)flag[51] <= (byte)flag[56])) ||
                 (((byte)flag[52] <= (byte)flag[56] ||
                  (((((byte)flag[53] <= (byte)flag[56] || ((byte)flag[54] <= (byte)flag[56])) ||
                    ((byte)flag[55] <= (byte)flag[56])) ||
                   (((byte)flag[57] <= (byte)flag[56] || ((byte)flag[58] <= (byte)flag[56]))))))))
                || (((byte)flag[59] <= (byte)flag[56] ||
                    (((byte)flag[60] <= (byte)flag[56] || ((byte)flag[62] <= (byte)flag[56])))))))))
              ) || (((((byte)flag[63] <= (byte)flag[56] ||
                      ((((byte)flag[65] <= (byte)flag[56] || ((byte)flag[67] <= (byte)flag[56])) ||
                       ((byte)flag[68] <= (byte)flag[56])))) ||
                     ((((byte)flag[69] <= (byte)flag[56] || ((byte)flag[70] <= (byte)flag[56])) ||
                      ((byte)flag[71] <= (byte)flag[56])))) ||
                    (((byte)flag[72] <= (byte)flag[56] || ((byte)flag[57] <= (byte)flag[0])))))) ||
            ((((byte)flag[57] <= (byte)flag[1] ||
              ((((byte)flag[57] <= (byte)flag[2] || ((byte)flag[57] <= (byte)flag[3])) ||
               ((byte)flag[4] <= (byte)flag[57])))) ||
             (((((byte)flag[57] <= (byte)flag[5] || ((byte)flag[57] <= (byte)flag[6])) ||
               ((byte)flag[57] <= (byte)flag[7])) ||
              ((((((byte)flag[57] <= (byte)flag[8] || ((byte)flag[57] <= (byte)flag[10])) ||
                 (((byte)flag[57] <= (byte)flag[11] ||
                  ((((((byte)flag[57] <= (byte)flag[12] || ((byte)flag[57] <= (byte)flag[13])) ||
                     ((byte)flag[57] <= (byte)flag[14])) ||
                    (((byte)flag[57] <= (byte)flag[15] || ((byte)flag[16] <= (byte)flag[57])))) ||
                   ((byte)flag[57] <= (byte)flag[17])))))) ||
                ((((byte)flag[57] <= (byte)flag[18] || ((byte)flag[57] <= (byte)flag[19])) ||
                 (((byte)flag[20] <= (byte)flag[57] ||
                  ((((byte)flag[57] <= (byte)flag[21] || ((byte)flag[57] <= (byte)flag[23])) ||
                   ((byte)flag[57] <= (byte)flag[24])))))))) ||
               (((((((((byte)flag[57] <= (byte)flag[25] || ((byte)flag[57] <= (byte)flag[26])) ||
                     (((byte)flag[57] <= (byte)flag[27] ||
                      (((byte)flag[28] <= (byte)flag[57] || ((byte)flag[57] <= (byte)flag[29]))))))
                    || ((byte)flag[57] <= (byte)flag[30])) ||
                   (((((byte)flag[57] <= (byte)flag[31] || ((byte)flag[57] <= (byte)flag[32])) ||
                     ((byte)flag[57] <= (byte)flag[33])) ||
                    (((byte)flag[57] <= (byte)flag[34] || ((byte)flag[57] <= (byte)flag[35])))))) ||
                  ((((byte)flag[36] <= (byte)flag[57] ||
                    (((byte)flag[37] <= (byte)flag[57] || ((byte)flag[57] <= (byte)flag[38])))) ||
                   ((byte)flag[57] <= (byte)flag[39])))) ||
                 ((((((((byte)flag[57] <= (byte)flag[40] || ((byte)flag[57] <= (byte)flag[41])) ||
                      ((byte)flag[57] <= (byte)flag[42])) ||
                     (((byte)flag[57] <= (byte)flag[43] || ((byte)flag[57] <= (byte)flag[44])))) ||
                    (((byte)flag[57] <= (byte)flag[45] ||
                     (((byte)flag[57] <= (byte)flag[46] || ((byte)flag[57] <= (byte)flag[47]))))))
                   || ((byte)flag[57] <= (byte)flag[48])) ||
                  (((((byte)flag[57] <= (byte)flag[49] || ((byte)flag[57] <= (byte)flag[50])) ||
                    ((byte)flag[57] <= (byte)flag[51])) ||
                   ((((byte)flag[57] <= (byte)flag[52] || ((byte)flag[53] <= (byte)flag[57])) ||
                    (((byte)flag[57] <= (byte)flag[54] ||
                     (((byte)flag[57] <= (byte)flag[55] || ((byte)flag[57] <= (byte)flag[56]))))))))
                  )))) || ((((byte)flag[57] <= (byte)flag[58] ||
                            ((((byte)flag[57] <= (byte)flag[59] ||
                              ((byte)flag[57] <= (byte)flag[60])) ||
                             ((byte)flag[57] <= (byte)flag[61])))) ||
                           (((byte)flag[57] <= (byte)flag[62] || ((byte)flag[57] <= (byte)flag[63]))
                           )))))))))))))))))))) ||
       (((((((((((byte)flag[57] <= (byte)flag[64] ||
                (((byte)flag[57] <= (byte)flag[65] || ((byte)flag[57] <= (byte)flag[66])))) ||
               ((byte)flag[57] <= (byte)flag[67])) ||
              (((((byte)flag[68] <= (byte)flag[57] || ((byte)flag[57] <= (byte)flag[69])) ||
                ((byte)flag[57] <= (byte)flag[70])) ||
               (((byte)flag[57] <= (byte)flag[71] || ((byte)flag[72] <= (byte)flag[57])))))) ||
             ((((byte)flag[58] <= (byte)flag[0] ||
               (((byte)flag[58] <= (byte)flag[1] || ((byte)flag[58] <= (byte)flag[2])))) ||
              (((byte)flag[58] <= (byte)flag[3] ||
               ((((((((byte)flag[4] <= (byte)flag[58] || ((byte)flag[58] <= (byte)flag[6])) ||
                    ((byte)flag[58] <= (byte)flag[7])) ||
                   ((((byte)flag[58] <= (byte)flag[8] || ((byte)flag[9] <= (byte)flag[58])) ||
                    (((byte)flag[58] <= (byte)flag[10] ||
                     (((byte)flag[58] <= (byte)flag[11] || ((byte)flag[58] <= (byte)flag[12]))))))))
                  || ((byte)flag[58] <= (byte)flag[13])) ||
                 ((((byte)flag[58] <= (byte)flag[14] || ((byte)flag[58] <= (byte)flag[15])) ||
                  ((byte)flag[16] <= (byte)flag[58])))) ||
                (((byte)flag[58] <= (byte)flag[17] || ((byte)flag[58] <= (byte)flag[18])))))))))) ||
            (((((((byte)flag[58] <= (byte)flag[19] ||
                 (((byte)flag[20] <= (byte)flag[58] || ((byte)flag[58] <= (byte)flag[21])))) ||
                ((byte)flag[22] <= (byte)flag[58])) ||
               (((((((((byte)flag[58] <= (byte)flag[23] || ((byte)flag[58] <= (byte)flag[24])) ||
                     ((byte)flag[58] <= (byte)flag[25])) ||
                    (((byte)flag[58] <= (byte)flag[26] || ((byte)flag[58] <= (byte)flag[27])))) ||
                   ((byte)flag[28] <= (byte)flag[58])) ||
                  (((byte)flag[58] <= (byte)flag[29] || ((byte)flag[58] <= (byte)flag[30])))) ||
                 (((byte)flag[58] <= (byte)flag[32] ||
                  ((((byte)flag[58] <= (byte)flag[33] || ((byte)flag[58] <= (byte)flag[34])) ||
                   ((byte)flag[58] <= (byte)flag[35])))))) ||
                ((((byte)flag[36] <= (byte)flag[58] || ((byte)flag[37] <= (byte)flag[58])) ||
                 ((byte)flag[58] <= (byte)flag[38])))))) ||
              ((((((byte)flag[58] <= (byte)flag[39] || ((byte)flag[58] <= (byte)flag[40])) ||
                 (((byte)flag[58] <= (byte)flag[41] ||
                  ((((byte)flag[58] <= (byte)flag[42] || ((byte)flag[58] <= (byte)flag[43])) ||
                   ((byte)flag[58] <= (byte)flag[44])))))) ||
                (((byte)flag[58] <= (byte)flag[45] || ((byte)flag[58] <= (byte)flag[46])))) ||
               ((byte)flag[58] <= (byte)flag[47])))) ||
             (((((byte)flag[58] <= (byte)flag[48] || ((byte)flag[58] <= (byte)flag[49])) ||
               (((byte)flag[58] <= (byte)flag[50] ||
                (((((byte)flag[58] <= (byte)flag[51] || ((byte)flag[58] <= (byte)flag[52])) ||
                  ((byte)flag[53] <= (byte)flag[58])) ||
                 (((byte)flag[58] <= (byte)flag[55] || ((byte)flag[58] <= (byte)flag[56])))))))) ||
              ((byte)flag[57] <= (byte)flag[58])))))) ||
           ((((byte)flag[58] <= (byte)flag[59] || ((byte)flag[58] <= (byte)flag[60])) ||
            (((byte)flag[58] <= (byte)flag[61] ||
             ((((byte)flag[58] <= (byte)flag[63] || ((byte)flag[58] <= (byte)flag[64])) ||
              ((byte)flag[58] <= (byte)flag[65])))))))) ||
          (((((byte)flag[58] <= (byte)flag[66] || ((byte)flag[58] <= (byte)flag[67])) ||
            ((byte)flag[68] <= (byte)flag[58])) ||
           ((((byte)flag[58] <= (byte)flag[69] || ((byte)flag[58] <= (byte)flag[70])) ||
            ((((((((byte)flag[58] <= (byte)flag[71] ||
                  ((((byte)flag[72] <= (byte)flag[58] || ((byte)flag[59] <= (byte)flag[0])) ||
                   ((byte)flag[59] <= (byte)flag[1])))) ||
                 (((byte)flag[59] <= (byte)flag[2] || ((byte)flag[59] <= (byte)flag[3])))) ||
                (((byte)flag[4] <= (byte)flag[59] ||
                 ((((byte)flag[5] <= (byte)flag[59] || ((byte)flag[59] <= (byte)flag[6])) ||
                  (((byte)flag[59] <= (byte)flag[7] ||
                   (((((byte)flag[8] <= (byte)flag[59] || ((byte)flag[9] <= (byte)flag[59])) ||
                     ((byte)flag[59] <= (byte)flag[10])) ||
                    (((byte)flag[59] <= (byte)flag[11] || ((byte)flag[59] <= (byte)flag[12])))))))))
                 ))) || ((byte)flag[59] <= (byte)flag[13])) ||
              (((((byte)flag[14] <= (byte)flag[59] || ((byte)flag[16] <= (byte)flag[59])) ||
                (((byte)flag[59] <= (byte)flag[17] ||
                 ((((byte)flag[59] <= (byte)flag[18] || ((byte)flag[20] <= (byte)flag[59])) ||
                  ((byte)flag[59] <= (byte)flag[21])))))) ||
               ((((((byte)flag[22] <= (byte)flag[59] || ((byte)flag[59] <= (byte)flag[23])) ||
                  ((byte)flag[24] <= (byte)flag[59])) ||
                 (((byte)flag[59] <= (byte)flag[25] || ((byte)flag[59] <= (byte)flag[26])))) ||
                (((byte)flag[28] <= (byte)flag[59] ||
                 ((((byte)flag[59] <= (byte)flag[29] || ((byte)flag[30] <= (byte)flag[59])) ||
                  ((byte)flag[31] <= (byte)flag[59])))))))))) ||
             (((byte)flag[59] <= (byte)flag[32] || ((byte)flag[59] <= (byte)flag[33])))))))))) ||
         (((((byte)flag[59] <= (byte)flag[34] ||
            ((((byte)flag[59] <= (byte)flag[35] || ((byte)flag[36] <= (byte)flag[59])) ||
             (((byte)flag[37] <= (byte)flag[59] ||
              ((((((byte)flag[59] <= (byte)flag[38] || ((byte)flag[59] <= (byte)flag[40])) ||
                 ((byte)flag[59] <= (byte)flag[41])) ||
                (((byte)flag[59] <= (byte)flag[42] || ((byte)flag[59] <= (byte)flag[43])))) ||
               ((byte)flag[59] <= (byte)flag[44])))))))) ||
           (((((byte)flag[59] <= (byte)flag[45] || ((byte)flag[59] <= (byte)flag[46])) ||
             ((byte)flag[47] <= (byte)flag[59])) ||
            ((((((byte)flag[59] <= (byte)flag[48] || ((byte)flag[59] <= (byte)flag[49])) ||
               ((byte)flag[59] <= (byte)flag[50])) ||
              ((((byte)flag[59] <= (byte)flag[51] || ((byte)flag[53] <= (byte)flag[59])) ||
               (((byte)flag[54] <= (byte)flag[59] ||
                (((byte)flag[59] <= (byte)flag[56] || ((byte)flag[57] <= (byte)flag[59])))))))) ||
             (((byte)flag[58] <= (byte)flag[59] ||
              ((((byte)flag[59] <= (byte)flag[60] || ((byte)flag[59] <= (byte)flag[61])) ||
               ((byte)flag[62] <= (byte)flag[59])))))))))) ||
          ((((byte)flag[59] <= (byte)flag[63] || ((byte)flag[59] <= (byte)flag[64])) ||
           (((((((byte)flag[59] <= (byte)flag[65] ||
                (((byte)flag[59] <= (byte)flag[66] || ((byte)flag[59] <= (byte)flag[67])))) ||
               ((byte)flag[68] <= (byte)flag[59])) ||
              ((((((byte)flag[69] <= (byte)flag[59] || ((byte)flag[59] <= (byte)flag[70])) ||
                 ((byte)flag[71] <= (byte)flag[59])) ||
                (((byte)flag[72] <= (byte)flag[59] || ((byte)flag[60] <= (byte)flag[0])))) ||
               (((byte)flag[60] <= (byte)flag[1] ||
                (((byte)flag[60] <= (byte)flag[2] || ((byte)flag[60] <= (byte)flag[3])))))))) ||
             ((byte)flag[4] <= (byte)flag[60])) ||
            (((((byte)flag[5] <= (byte)flag[60] || ((byte)flag[60] <= (byte)flag[6])) ||
              ((byte)flag[60] <= (byte)flag[7])) ||
             ((((byte)flag[8] <= (byte)flag[60] || ((byte)flag[9] <= (byte)flag[60])) ||
              (((byte)flag[60] <= (byte)flag[10] ||
               (((byte)flag[60] <= (byte)flag[11] || ((byte)flag[60] <= (byte)flag[12]))))))))))))))
         )) || (((((((byte)flag[60] <= (byte)flag[13] ||
                    ((((byte)flag[14] <= (byte)flag[60] || ((byte)flag[15] <= (byte)flag[60])) ||
                     ((byte)flag[16] <= (byte)flag[60])))) ||
                   (((byte)flag[17] <= (byte)flag[60] || ((byte)flag[60] <= (byte)flag[18])))) ||
                  ((((((byte)flag[19] <= (byte)flag[60] ||
                      (((byte)flag[20] <= (byte)flag[60] || ((byte)flag[60] <= (byte)flag[21])))) ||
                     (((byte)flag[22] <= (byte)flag[60] ||
                      (((((byte)flag[24] <= (byte)flag[60] || ((byte)flag[60] <= (byte)flag[25])) ||
                        ((byte)flag[60] <= (byte)flag[26])) ||
                       (((byte)flag[27] <= (byte)flag[60] || ((byte)flag[28] <= (byte)flag[60]))))))
                     )) || ((((byte)flag[60] <= (byte)flag[29] ||
                             (((byte)flag[30] <= (byte)flag[60] ||
                              ((byte)flag[31] <= (byte)flag[60])))) ||
                            (((byte)flag[60] <= (byte)flag[32] ||
                             ((((((byte)flag[60] <= (byte)flag[33] ||
                                 ((byte)flag[60] <= (byte)flag[34])) ||
                                ((byte)flag[60] <= (byte)flag[35])) ||
                               ((((byte)flag[36] <= (byte)flag[60] ||
                                 ((byte)flag[37] <= (byte)flag[60])) ||
                                (((byte)flag[60] <= (byte)flag[38] ||
                                 (((byte)flag[39] <= (byte)flag[60] ||
                                  ((byte)flag[60] <= (byte)flag[40])))))))) ||
                              ((byte)flag[60] <= (byte)flag[41])))))))) ||
                   (((((((byte)flag[42] <= (byte)flag[60] || ((byte)flag[60] <= (byte)flag[43])) ||
                       ((byte)flag[60] <= (byte)flag[44])) ||
                      ((((byte)flag[60] <= (byte)flag[45] || ((byte)flag[60] <= (byte)flag[46])) ||
                       ((((byte)flag[47] <= (byte)flag[60] ||
                         (((byte)flag[48] <= (byte)flag[60] || ((byte)flag[60] <= (byte)flag[49]))))
                        || ((byte)flag[60] <= (byte)flag[50])))))) ||
                     (((((((byte)flag[60] <= (byte)flag[51] || ((byte)flag[52] <= (byte)flag[60]))
                         || ((byte)flag[53] <= (byte)flag[60])) ||
                        (((byte)flag[54] <= (byte)flag[60] || ((byte)flag[55] <= (byte)flag[60]))))
                       || ((byte)flag[60] <= (byte)flag[56])) ||
                      ((((byte)flag[57] <= (byte)flag[60] || ((byte)flag[58] <= (byte)flag[60])) ||
                       (((byte)flag[59] <= (byte)flag[60] ||
                        ((((byte)flag[60] <= (byte)flag[61] || ((byte)flag[62] <= (byte)flag[60]))
                         || ((byte)flag[60] <= (byte)flag[63])))))))))) ||
                    ((((((byte)flag[60] <= (byte)flag[64] || ((byte)flag[65] <= (byte)flag[60])) ||
                       ((((((byte)flag[60] <= (byte)flag[66] ||
                           ((((((byte)flag[60] <= (byte)flag[67] ||
                               ((byte)flag[68] <= (byte)flag[60])) ||
                              (((byte)flag[69] <= (byte)flag[60] ||
                               ((((byte)flag[60] <= (byte)flag[70] ||
                                 ((byte)flag[71] <= (byte)flag[60])) ||
                                ((byte)flag[72] <= (byte)flag[60])))))) ||
                             (((byte)flag[0] <= (byte)flag[61] || ((byte)flag[1] <= (byte)flag[61]))
                             )) || ((byte)flag[3] <= (byte)flag[61])))) ||
                          (((((byte)flag[4] <= (byte)flag[61] || ((byte)flag[5] <= (byte)flag[61]))
                            || (((byte)flag[6] <= (byte)flag[61] ||
                                (((((byte)flag[7] <= (byte)flag[61] ||
                                   ((byte)flag[8] <= (byte)flag[61])) ||
                                  ((byte)flag[9] <= (byte)flag[61])) ||
                                 (((byte)flag[10] <= (byte)flag[61] ||
                                  ((byte)flag[11] <= (byte)flag[61])))))))) ||
                           ((byte)flag[12] <= (byte)flag[61])))) ||
                         ((((byte)flag[13] <= (byte)flag[61] || ((byte)flag[14] <= (byte)flag[61]))
                          || (((byte)flag[15] <= (byte)flag[61] ||
                              ((((byte)flag[16] <= (byte)flag[61] ||
                                ((byte)flag[17] <= (byte)flag[61])) ||
                               ((byte)flag[18] <= (byte)flag[61])))))))) ||
                        ((((byte)flag[19] <= (byte)flag[61] || ((byte)flag[20] <= (byte)flag[61]))
                         || ((byte)flag[21] <= (byte)flag[61])))))) ||
                      (((byte)flag[22] <= (byte)flag[61] || ((byte)flag[23] <= (byte)flag[61])))) ||
                     ((((((byte)flag[24] <= (byte)flag[61] ||
                         ((((byte)flag[25] <= (byte)flag[61] || ((byte)flag[26] <= (byte)flag[61]))
                          || ((byte)flag[27] <= (byte)flag[61])))) ||
                        ((((byte)flag[28] <= (byte)flag[61] || ((byte)flag[29] <= (byte)flag[61]))
                         || (((byte)flag[30] <= (byte)flag[61] ||
                             (((((byte)flag[31] <= (byte)flag[61] ||
                                ((byte)flag[32] <= (byte)flag[61])) ||
                               (((byte)flag[33] <= (byte)flag[61] ||
                                (((((byte)flag[34] <= (byte)flag[61] ||
                                   ((byte)flag[36] <= (byte)flag[61])) ||
                                  ((byte)flag[37] <= (byte)flag[61])) ||
                                 (((byte)flag[38] <= (byte)flag[61] ||
                                  ((byte)flag[39] <= (byte)flag[61])))))))) ||
                              ((byte)flag[40] <= (byte)flag[61])))))))) ||
                       ((((byte)flag[42] <= (byte)flag[61] || ((byte)flag[43] <= (byte)flag[61])) ||
                        ((((byte)flag[44] <= (byte)flag[61] ||
                          ((((byte)flag[45] <= (byte)flag[61] || ((byte)flag[47] <= (byte)flag[61]))
                           || ((byte)flag[48] <= (byte)flag[61])))) ||
                         ((((byte)flag[49] <= (byte)flag[61] || ((byte)flag[50] <= (byte)flag[61]))
                          || ((byte)flag[51] <= (byte)flag[61])))))))) ||
                      (((((byte)flag[52] <= (byte)flag[61] || ((byte)flag[53] <= (byte)flag[61])) ||
                        (((byte)flag[54] <= (byte)flag[61] ||
                         ((((byte)flag[55] <= (byte)flag[61] || ((byte)flag[57] <= (byte)flag[61]))
                          || ((byte)flag[58] <= (byte)flag[61])))))) ||
                       (((byte)flag[59] <= (byte)flag[61] || ((byte)flag[60] <= (byte)flag[61]))))))
                     )))))))) ||
                 (((((byte)flag[62] <= (byte)flag[61] ||
                    ((((byte)flag[63] <= (byte)flag[61] || ((byte)flag[65] <= (byte)flag[61])) ||
                     (((byte)flag[67] <= (byte)flag[61] ||
                      ((((((((((byte)flag[68] <= (byte)flag[61] ||
                              ((byte)flag[69] <= (byte)flag[61])) ||
                             ((byte)flag[70] <= (byte)flag[61])) ||
                            (((byte)flag[71] <= (byte)flag[61] || ((byte)flag[72] <= (byte)flag[61])
                             ))) || ((byte)flag[62] <= (byte)flag[0])) ||
                          (((byte)flag[62] <= (byte)flag[1] || ((byte)flag[62] <= (byte)flag[2]))))
                         || ((byte)flag[62] <= (byte)flag[3])) ||
                        ((((byte)flag[4] <= (byte)flag[62] || ((byte)flag[62] <= (byte)flag[6])) ||
                         ((byte)flag[62] <= (byte)flag[7])))) ||
                       (((byte)flag[62] <= (byte)flag[8] || ((byte)flag[9] <= (byte)flag[62]))))))))
                    )) || (((byte)flag[62] <= (byte)flag[10] ||
                           (((byte)flag[62] <= (byte)flag[11] || ((byte)flag[62] <= (byte)flag[12]))
                           )))) ||
                  (((((((byte)flag[62] <= (byte)flag[13] ||
                       ((((byte)flag[62] <= (byte)flag[14] || ((byte)flag[62] <= (byte)flag[15])) ||
                        ((byte)flag[16] <= (byte)flag[62])))) ||
                      ((((byte)flag[62] <= (byte)flag[17] || ((byte)flag[62] <= (byte)flag[18])) ||
                       ((byte)flag[62] <= (byte)flag[19])))) ||
                     (((byte)flag[20] <= (byte)flag[62] || ((byte)flag[62] <= (byte)flag[21])))) ||
                    (((byte)flag[22] <= (byte)flag[62] ||
                     (((((byte)flag[62] <= (byte)flag[23] || ((byte)flag[62] <= (byte)flag[24])) ||
                       ((byte)flag[62] <= (byte)flag[25])) ||
                      (((byte)flag[62] <= (byte)flag[26] || ((byte)flag[62] <= (byte)flag[27])))))))
                    ) || ((byte)flag[28] <= (byte)flag[62])))))) ||
                ((((((((byte)flag[62] <= (byte)flag[29] || ((byte)flag[62] <= (byte)flag[30])) ||
                     ((((byte)flag[62] <= (byte)flag[32] ||
                       ((((byte)flag[62] <= (byte)flag[33] || ((byte)flag[62] <= (byte)flag[34])) ||
                        ((byte)flag[62] <= (byte)flag[35])))) ||
                      ((((byte)flag[36] <= (byte)flag[62] || ((byte)flag[37] <= (byte)flag[62])) ||
                       ((byte)flag[62] <= (byte)flag[38])))))) ||
                    ((((byte)flag[62] <= (byte)flag[39] || ((byte)flag[62] <= (byte)flag[40])) ||
                     ((((((byte)flag[62] <= (byte)flag[41] ||
                         ((((byte)flag[62] <= (byte)flag[42] || ((byte)flag[62] <= (byte)flag[43]))
                          || ((byte)flag[62] <= (byte)flag[44])))) ||
                        ((((byte)flag[62] <= (byte)flag[45] || ((byte)flag[62] <= (byte)flag[46]))
                         || (((byte)flag[62] <= (byte)flag[47] ||
                             ((((byte)flag[62] <= (byte)flag[48] ||
                               ((byte)flag[62] <= (byte)flag[49])) ||
                              (((byte)flag[62] <= (byte)flag[50] ||
                               (((((byte)flag[62] <= (byte)flag[51] ||
                                  ((byte)flag[62] <= (byte)flag[52])) ||
                                 ((byte)flag[53] <= (byte)flag[62])) ||
                                (((byte)flag[62] <= (byte)flag[55] ||
                                 ((byte)flag[62] <= (byte)flag[56])))))))))))))) ||
                       ((byte)flag[57] <= (byte)flag[62])) ||
                      ((((byte)flag[62] <= (byte)flag[59] || ((byte)flag[62] <= (byte)flag[60])) ||
                       (((((byte)flag[62] <= (byte)flag[61] ||
                          ((((byte)flag[62] <= (byte)flag[63] || ((byte)flag[62] <= (byte)flag[64]))
                           || ((byte)flag[62] <= (byte)flag[65])))) ||
                         ((((byte)flag[62] <= (byte)flag[66] || ((byte)flag[62] <= (byte)flag[67]))
                          || ((byte)flag[68] <= (byte)flag[62])))) ||
                        ((((byte)flag[62] <= (byte)flag[69] || ((byte)flag[62] <= (byte)flag[70]))
                         || (((byte)flag[62] <= (byte)flag[71] ||
                             ((((byte)flag[72] <= (byte)flag[62] ||
                               ((byte)flag[0] <= (byte)flag[63])) ||
                              ((byte)flag[1] <= (byte)flag[63])))))))))))))))) ||
                   (((byte)flag[63] <= (byte)flag[2] || ((byte)flag[3] <= (byte)flag[63])))) ||
                  ((((((byte)flag[4] <= (byte)flag[63] ||
                      (((((byte)flag[5] <= (byte)flag[63] || ((byte)flag[6] <= (byte)flag[63])) ||
                        (((byte)flag[8] <= (byte)flag[63] ||
                         ((((((byte)flag[9] <= (byte)flag[63] || ((byte)flag[10] <= (byte)flag[63]))
                            || ((byte)flag[63] <= (byte)flag[11])) ||
                           (((byte)flag[12] <= (byte)flag[63] || ((byte)flag[63] <= (byte)flag[13]))
                           )) || ((byte)flag[14] <= (byte)flag[63])))))) ||
                       (((byte)flag[15] <= (byte)flag[63] || ((byte)flag[16] <= (byte)flag[63]))))))
                     || ((byte)flag[17] <= (byte)flag[63])) ||
                    ((((((byte)flag[18] <= (byte)flag[63] || ((byte)flag[19] <= (byte)flag[63])) ||
                       ((byte)flag[20] <= (byte)flag[63])) ||
                      ((((byte)flag[21] <= (byte)flag[63] || ((byte)flag[22] <= (byte)flag[63])) ||
                       (((byte)flag[23] <= (byte)flag[63] ||
                        (((byte)flag[24] <= (byte)flag[63] || ((byte)flag[63] <= (byte)flag[26])))))
                       ))) || ((((byte)flag[27] <= (byte)flag[63] ||
                                ((((byte)flag[28] <= (byte)flag[63] ||
                                  ((byte)flag[30] <= (byte)flag[63])) ||
                                 ((byte)flag[31] <= (byte)flag[63])))) ||
                               ((((byte)flag[32] <= (byte)flag[63] ||
                                 ((byte)flag[34] <= (byte)flag[63])) ||
                                (((((byte)flag[63] <= (byte)flag[35] ||
                                   (((byte)flag[36] <= (byte)flag[63] ||
                                    ((byte)flag[37] <= (byte)flag[63])))) ||
                                  ((byte)flag[63] <= (byte)flag[38])) ||
                                 (((((((byte)flag[39] <= (byte)flag[63] ||
                                      ((byte)flag[40] <= (byte)flag[63])) ||
                                     ((byte)flag[63] <= (byte)flag[41])) ||
                                    (((byte)flag[42] <= (byte)flag[63] ||
                                     ((byte)flag[63] <= (byte)flag[43])))) ||
                                   (((byte)flag[44] <= (byte)flag[63] ||
                                    (((byte)flag[63] <= (byte)flag[46] ||
                                     ((byte)flag[47] <= (byte)flag[63])))))) ||
                                  ((byte)flag[48] <= (byte)flag[63])))))))))))) ||
                   ((((((((byte)flag[63] <= (byte)flag[50] || ((byte)flag[51] <= (byte)flag[63])) ||
                        ((byte)flag[52] <= (byte)flag[63])) ||
                       ((((byte)flag[53] <= (byte)flag[63] || ((byte)flag[54] <= (byte)flag[63])) ||
                        (((byte)flag[55] <= (byte)flag[63] ||
                         (((byte)flag[63] <= (byte)flag[56] || ((byte)flag[57] <= (byte)flag[63]))))
                        )))) || ((byte)flag[58] <= (byte)flag[63])) ||
                     ((((byte)flag[59] <= (byte)flag[63] || ((byte)flag[60] <= (byte)flag[63])) ||
                      ((byte)flag[63] <= (byte)flag[61])))) ||
                    (((((byte)flag[62] <= (byte)flag[63] || ((byte)flag[63] <= (byte)flag[64])) ||
                      (((byte)flag[65] <= (byte)flag[63] ||
                       (((byte)flag[63] <= (byte)flag[66] || ((byte)flag[67] <= (byte)flag[63]))))))
                     || ((((byte)flag[68] <= (byte)flag[63] ||
                          (((((byte)flag[69] <= (byte)flag[63] || ((byte)flag[70] <= (byte)flag[63])
                             ) || ((byte)flag[71] <= (byte)flag[63])) ||
                           (((byte)flag[72] <= (byte)flag[63] || ((byte)flag[0] <= (byte)flag[64])))
                           ))) || ((((byte)flag[1] <= (byte)flag[64] ||
                                    (((byte)flag[3] <= (byte)flag[64] ||
                                     ((byte)flag[4] <= (byte)flag[64])))) ||
                                   ((byte)flag[5] <= (byte)flag[64])))))))))))) ||
                 ((((((((byte)flag[6] <= (byte)flag[64] || ((byte)flag[7] <= (byte)flag[64])) ||
                      ((byte)flag[8] <= (byte)flag[64])) ||
                     ((((byte)flag[9] <= (byte)flag[64] || ((byte)flag[10] <= (byte)flag[64])) ||
                      (((byte)flag[11] <= (byte)flag[64] ||
                       (((byte)flag[12] <= (byte)flag[64] || ((byte)flag[13] <= (byte)flag[64]))))))
                     )) || ((byte)flag[14] <= (byte)flag[64])) ||
                   (((((byte)flag[15] <= (byte)flag[64] || ((byte)flag[16] <= (byte)flag[64])) ||
                     ((byte)flag[17] <= (byte)flag[64])) ||
                    ((((byte)flag[18] <= (byte)flag[64] || ((byte)flag[19] <= (byte)flag[64])) ||
                     ((((byte)flag[20] <= (byte)flag[64] ||
                       (((byte)flag[21] <= (byte)flag[64] || ((byte)flag[22] <= (byte)flag[64]))))
                      || ((byte)flag[23] <= (byte)flag[64])))))))) ||
                  (((((((byte)flag[24] <= (byte)flag[64] || ((byte)flag[25] <= (byte)flag[64])) ||
                      ((byte)flag[26] <= (byte)flag[64])) ||
                     (((byte)flag[27] <= (byte)flag[64] || ((byte)flag[28] <= (byte)flag[64])))) ||
                    ((byte)flag[29] <= (byte)flag[64])) ||
                   (((((byte)flag[30] <= (byte)flag[64] || ((byte)flag[31] <= (byte)flag[64])) ||
                     (((byte)flag[32] <= (byte)flag[64] ||
                      ((((byte)flag[33] <= (byte)flag[64] || ((byte)flag[34] <= (byte)flag[64])) ||
                       ((byte)flag[36] <= (byte)flag[64])))))) ||
                    (((byte)flag[37] <= (byte)flag[64] || ((byte)flag[38] <= (byte)flag[64])))))))))
                 ))))))) ||
      ((((((((((byte)flag[39] <= (byte)flag[64] ||
              ((((byte)flag[40] <= (byte)flag[64] || ((byte)flag[42] <= (byte)flag[64])) ||
               (((byte)flag[43] <= (byte)flag[64] ||
                ((((byte)flag[44] <= (byte)flag[64] || ((byte)flag[45] <= (byte)flag[64])) ||
                 ((byte)flag[47] <= (byte)flag[64])))))))) ||
             ((((byte)flag[48] <= (byte)flag[64] || ((byte)flag[49] <= (byte)flag[64])) ||
              ((byte)flag[50] <= (byte)flag[64])))) ||
            (((((((((byte)flag[51] <= (byte)flag[64] || ((byte)flag[52] <= (byte)flag[64])) ||
                  (((byte)flag[53] <= (byte)flag[64] ||
                   (((((byte)flag[54] <= (byte)flag[64] || ((byte)flag[55] <= (byte)flag[64])) ||
                     ((byte)flag[57] <= (byte)flag[64])) ||
                    (((byte)flag[58] <= (byte)flag[64] || ((byte)flag[59] <= (byte)flag[64]))))))))
                 || ((byte)flag[60] <= (byte)flag[64])) ||
                (((byte)flag[62] <= (byte)flag[64] || ((byte)flag[63] <= (byte)flag[64])))) ||
               (((byte)flag[65] <= (byte)flag[64] ||
                ((((byte)flag[67] <= (byte)flag[64] || ((byte)flag[68] <= (byte)flag[64])) ||
                 ((byte)flag[69] <= (byte)flag[64])))))) ||
              ((((byte)flag[70] <= (byte)flag[64] || ((byte)flag[71] <= (byte)flag[64])) ||
               ((byte)flag[72] <= (byte)flag[64])))) ||
             (((byte)flag[65] <= (byte)flag[0] || ((byte)flag[65] <= (byte)flag[1])))))) ||
           ((((((byte)flag[65] <= (byte)flag[2] ||
               ((((byte)flag[65] <= (byte)flag[3] || ((byte)flag[4] <= (byte)flag[65])) ||
                ((byte)flag[5] <= (byte)flag[65])))) ||
              (((byte)flag[65] <= (byte)flag[6] || ((byte)flag[65] <= (byte)flag[7])))) ||
             ((((byte)flag[8] <= (byte)flag[65] ||
               ((((byte)flag[9] <= (byte)flag[65] || ((byte)flag[65] <= (byte)flag[10])) ||
                (((byte)flag[65] <= (byte)flag[11] ||
                 (((((byte)flag[65] <= (byte)flag[12] || ((byte)flag[65] <= (byte)flag[13])) ||
                   ((byte)flag[14] <= (byte)flag[65])) ||
                  (((byte)flag[15] <= (byte)flag[65] || ((byte)flag[16] <= (byte)flag[65]))))))))))
              || ((byte)flag[65] <= (byte)flag[18])))) ||
            (((((((((byte)flag[19] <= (byte)flag[65] || ((byte)flag[20] <= (byte)flag[65])) ||
                  ((((((byte)flag[65] <= (byte)flag[21] ||
                      ((((byte)flag[22] <= (byte)flag[65] || ((byte)flag[65] <= (byte)flag[23])) ||
                       ((byte)flag[24] <= (byte)flag[65])))) ||
                     ((((byte)flag[65] <= (byte)flag[25] || ((byte)flag[65] <= (byte)flag[26])) ||
                      ((byte)flag[27] <= (byte)flag[65])))) ||
                    (((byte)flag[28] <= (byte)flag[65] || ((byte)flag[65] <= (byte)flag[29])))) ||
                   (((byte)flag[30] <= (byte)flag[65] ||
                    ((((byte)flag[31] <= (byte)flag[65] || ((byte)flag[65] <= (byte)flag[32])) ||
                     ((byte)flag[65] <= (byte)flag[33])))))))) ||
                 (((byte)flag[65] <= (byte)flag[34] || ((byte)flag[65] <= (byte)flag[35])))) ||
                (((((byte)flag[36] <= (byte)flag[65] ||
                   (((((byte)flag[37] <= (byte)flag[65] || ((byte)flag[65] <= (byte)flag[38])) ||
                     (((byte)flag[39] <= (byte)flag[65] ||
                      (((((((byte)flag[65] <= (byte)flag[40] || ((byte)flag[65] <= (byte)flag[41]))
                          || ((byte)flag[65] <= (byte)flag[43])) ||
                         (((byte)flag[65] <= (byte)flag[44] || ((byte)flag[65] <= (byte)flag[45]))))
                        || ((byte)flag[65] <= (byte)flag[46])) ||
                       (((byte)flag[47] <= (byte)flag[65] || ((byte)flag[65] <= (byte)flag[49]))))))
                     )) || ((byte)flag[65] <= (byte)flag[50])))) ||
                  (((((byte)flag[65] <= (byte)flag[51] || ((byte)flag[52] <= (byte)flag[65])) ||
                    ((byte)flag[53] <= (byte)flag[65])) ||
                   (((byte)flag[54] <= (byte)flag[65] || ((byte)flag[55] <= (byte)flag[65])))))) ||
                 ((((byte)flag[65] <= (byte)flag[56] ||
                   (((byte)flag[57] <= (byte)flag[65] || ((byte)flag[58] <= (byte)flag[65])))) ||
                  ((byte)flag[59] <= (byte)flag[65])))))) ||
               ((((byte)flag[65] <= (byte)flag[60] || ((byte)flag[65] <= (byte)flag[61])) ||
                ((byte)flag[62] <= (byte)flag[65])))) ||
              (((((byte)flag[65] <= (byte)flag[63] || ((byte)flag[65] <= (byte)flag[64])) ||
                (((byte)flag[65] <= (byte)flag[66] ||
                 (((byte)flag[65] <= (byte)flag[67] || ((byte)flag[68] <= (byte)flag[65])))))) ||
               (((byte)flag[69] <= (byte)flag[65] ||
                ((((((byte)flag[65] <= (byte)flag[70] || ((byte)flag[71] <= (byte)flag[65])) ||
                   ((byte)flag[72] <= (byte)flag[65])) ||
                  (((byte)flag[0] <= (byte)flag[66] || ((byte)flag[1] <= (byte)flag[66])))) ||
                 (((byte)flag[3] <= (byte)flag[66] ||
                  (((byte)flag[4] <= (byte)flag[66] || ((byte)flag[5] <= (byte)flag[66]))))))))))))
             || (((byte)flag[6] <= (byte)flag[66] ||
                 ((((byte)flag[7] <= (byte)flag[66] || ((byte)flag[8] <= (byte)flag[66])) ||
                  ((byte)flag[9] <= (byte)flag[66])))))))))) ||
          (((((((byte)flag[10] <= (byte)flag[66] || ((byte)flag[11] <= (byte)flag[66])) ||
              (((byte)flag[12] <= (byte)flag[66] ||
               (((byte)flag[13] <= (byte)flag[66] || ((byte)flag[14] <= (byte)flag[66])))))) ||
             ((byte)flag[15] <= (byte)flag[66])) ||
            (((((((byte)flag[16] <= (byte)flag[66] || ((byte)flag[17] <= (byte)flag[66])) ||
                ((byte)flag[18] <= (byte)flag[66])) ||
               ((((byte)flag[19] <= (byte)flag[66] || ((byte)flag[20] <= (byte)flag[66])) ||
                (((byte)flag[21] <= (byte)flag[66] ||
                 (((byte)flag[22] <= (byte)flag[66] || ((byte)flag[23] <= (byte)flag[66])))))))) ||
              (((byte)flag[24] <= (byte)flag[66] ||
               (((((byte)flag[25] <= (byte)flag[66] || ((byte)flag[26] <= (byte)flag[66])) ||
                 ((byte)flag[27] <= (byte)flag[66])) ||
                (((byte)flag[28] <= (byte)flag[66] || ((byte)flag[29] <= (byte)flag[66])))))))) ||
             (((byte)flag[30] <= (byte)flag[66] ||
              (((byte)flag[31] <= (byte)flag[66] || ((byte)flag[32] <= (byte)flag[66])))))))) ||
           (((byte)flag[33] <= (byte)flag[66] ||
            (((((byte)flag[34] <= (byte)flag[66] || ((byte)flag[36] <= (byte)flag[66])) ||
              ((byte)flag[37] <= (byte)flag[66])) ||
             (((byte)flag[38] <= (byte)flag[66] || ((byte)flag[39] <= (byte)flag[66])))))))))) ||
         (((((byte)flag[40] <= (byte)flag[66] ||
            (((byte)flag[42] <= (byte)flag[66] || ((byte)flag[43] <= (byte)flag[66])))) ||
           ((byte)flag[44] <= (byte)flag[66])) ||
          (((((((byte)flag[45] <= (byte)flag[66] || ((byte)flag[47] <= (byte)flag[66])) ||
              ((byte)flag[48] <= (byte)flag[66])) ||
             ((((byte)flag[49] <= (byte)flag[66] || ((byte)flag[50] <= (byte)flag[66])) ||
              (((byte)flag[51] <= (byte)flag[66] ||
               (((byte)flag[52] <= (byte)flag[66] || ((byte)flag[53] <= (byte)flag[66])))))))) ||
            ((byte)flag[54] <= (byte)flag[66])) ||
           (((((((byte)flag[55] <= (byte)flag[66] || ((byte)flag[57] <= (byte)flag[66])) ||
               ((byte)flag[58] <= (byte)flag[66])) ||
              (((byte)flag[59] <= (byte)flag[66] || ((byte)flag[60] <= (byte)flag[66])))) ||
             ((byte)flag[62] <= (byte)flag[66])) ||
            (((byte)flag[63] <= (byte)flag[66] || ((byte)flag[65] <= (byte)flag[66])))))))))) ||
        ((((((((byte)flag[67] <= (byte)flag[66] ||
              ((((byte)flag[68] <= (byte)flag[66] || ((byte)flag[69] <= (byte)flag[66])) ||
               ((byte)flag[70] <= (byte)flag[66])))) ||
             ((((byte)flag[71] <= (byte)flag[66] || ((byte)flag[72] <= (byte)flag[66])) ||
              ((byte)flag[67] <= (byte)flag[0])))) ||
            ((((byte)flag[67] <= (byte)flag[2] || ((byte)flag[67] <= (byte)flag[3])) ||
             (((byte)flag[4] <= (byte)flag[67] ||
              ((((byte)flag[5] <= (byte)flag[67] || ((byte)flag[67] <= (byte)flag[6])) ||
               ((byte)flag[67] <= (byte)flag[7])))))))) ||
           (((((byte)flag[8] <= (byte)flag[67] || ((byte)flag[9] <= (byte)flag[67])) ||
             ((((byte)flag[67] <= (byte)flag[10] ||
               (((((byte)flag[67] <= (byte)flag[11] || ((byte)flag[67] <= (byte)flag[12])) ||
                 (((byte)flag[67] <= (byte)flag[13] ||
                  (((((byte)flag[14] <= (byte)flag[67] || ((byte)flag[15] <= (byte)flag[67])) ||
                    ((byte)flag[16] <= (byte)flag[67])) ||
                   (((byte)flag[17] <= (byte)flag[67] || ((byte)flag[67] <= (byte)flag[18]))))))))
                || ((byte)flag[19] <= (byte)flag[67])))) ||
              ((((byte)flag[20] <= (byte)flag[67] || ((byte)flag[67] <= (byte)flag[21])) ||
               (((((byte)flag[22] <= (byte)flag[67] ||
                  ((((byte)flag[23] <= (byte)flag[67] || ((byte)flag[24] <= (byte)flag[67])) ||
                   ((byte)flag[67] <= (byte)flag[25])))) ||
                 ((((byte)flag[67] <= (byte)flag[26] || ((byte)flag[27] <= (byte)flag[67])) ||
                  ((byte)flag[28] <= (byte)flag[67])))) ||
                (((byte)flag[67] <= (byte)flag[29] || ((byte)flag[30] <= (byte)flag[67])))))))))) ||
            ((((byte)flag[31] <= (byte)flag[67] ||
              ((((byte)flag[67] <= (byte)flag[32] || ((byte)flag[67] <= (byte)flag[33])) ||
               ((byte)flag[67] <= (byte)flag[35])))) ||
             ((((byte)flag[36] <= (byte)flag[67] || ((byte)flag[37] <= (byte)flag[67])) ||
              ((byte)flag[67] <= (byte)flag[38])))))))) ||
          ((((((((byte)flag[39] <= (byte)flag[67] || ((byte)flag[67] <= (byte)flag[40])) ||
               (((byte)flag[67] <= (byte)flag[41] ||
                (((((byte)flag[42] <= (byte)flag[67] || ((byte)flag[67] <= (byte)flag[43])) ||
                  ((byte)flag[67] <= (byte)flag[45])) ||
                 (((byte)flag[67] <= (byte)flag[46] || ((byte)flag[47] <= (byte)flag[67])))))))) ||
              (((byte)flag[48] <= (byte)flag[67] ||
               (((byte)flag[67] <= (byte)flag[49] || ((byte)flag[67] <= (byte)flag[50])))))) ||
             ((((byte)flag[67] <= (byte)flag[51] ||
               ((((byte)flag[52] <= (byte)flag[67] || ((byte)flag[53] <= (byte)flag[67])) ||
                ((byte)flag[54] <= (byte)flag[67])))) ||
              ((((byte)flag[55] <= (byte)flag[67] || ((byte)flag[67] <= (byte)flag[56])) ||
               ((byte)flag[57] <= (byte)flag[67])))))) ||
            ((((((byte)flag[58] <= (byte)flag[67] || ((byte)flag[59] <= (byte)flag[67])) ||
               (((byte)flag[60] <= (byte)flag[67] ||
                ((((byte)flag[67] <= (byte)flag[61] || ((byte)flag[62] <= (byte)flag[67])) ||
                 ((byte)flag[67] <= (byte)flag[63])))))) ||
              (((byte)flag[67] <= (byte)flag[64] || ((byte)flag[65] <= (byte)flag[67])))) ||
             (((byte)flag[67] <= (byte)flag[66] ||
              ((((byte)flag[68] <= (byte)flag[67] || ((byte)flag[69] <= (byte)flag[67])) ||
               (((byte)flag[67] <= (byte)flag[70] ||
                ((((((byte)flag[71] <= (byte)flag[67] || ((byte)flag[72] <= (byte)flag[67])) ||
                   ((byte)flag[68] <= (byte)flag[0])) ||
                  (((byte)flag[68] <= (byte)flag[1] || ((byte)flag[68] <= (byte)flag[2])))) ||
                 ((byte)flag[68] <= (byte)flag[3])))))))))))) ||
           (((((byte)flag[4] <= (byte)flag[68] || ((byte)flag[68] <= (byte)flag[5])) ||
             (((byte)flag[68] <= (byte)flag[6] ||
              ((((byte)flag[68] <= (byte)flag[7] || ((byte)flag[68] <= (byte)flag[8])) ||
               ((byte)flag[68] <= (byte)flag[9])))))) ||
            (((((((((byte)flag[68] <= (byte)flag[10] || ((byte)flag[68] <= (byte)flag[11])) ||
                  (((byte)flag[68] <= (byte)flag[12] ||
                   (((byte)flag[68] <= (byte)flag[13] || ((byte)flag[68] <= (byte)flag[14])))))) ||
                 ((byte)flag[68] <= (byte)flag[15])) ||
                (((((byte)flag[68] <= (byte)flag[16] || ((byte)flag[68] <= (byte)flag[17])) ||
                  ((byte)flag[68] <= (byte)flag[18])) ||
                 (((byte)flag[68] <= (byte)flag[19] || ((byte)flag[68] <= (byte)flag[20])))))) ||
               ((((((byte)flag[68] <= (byte)flag[21] ||
                   (((byte)flag[68] <= (byte)flag[22] || ((byte)flag[68] <= (byte)flag[23])))) ||
                  ((byte)flag[68] <= (byte)flag[24])) ||
                 ((((((byte)flag[68] <= (byte)flag[25] || ((byte)flag[68] <= (byte)flag[26])) ||
                    ((byte)flag[68] <= (byte)flag[27])) ||
                   (((byte)flag[68] <= (byte)flag[28] || ((byte)flag[68] <= (byte)flag[29])))) ||
                  (((byte)flag[68] <= (byte)flag[30] ||
                   (((byte)flag[68] <= (byte)flag[31] || ((byte)flag[68] <= (byte)flag[32]))))))))
                || ((byte)flag[68] <= (byte)flag[33])))) ||
              (((((byte)flag[68] <= (byte)flag[34] || ((byte)flag[68] <= (byte)flag[35])) ||
                ((byte)flag[36] <= (byte)flag[68])) ||
               (((((byte)flag[68] <= (byte)flag[38] || ((byte)flag[68] <= (byte)flag[39])) ||
                 (((byte)flag[68] <= (byte)flag[40] ||
                  (((byte)flag[68] <= (byte)flag[41] || ((byte)flag[68] <= (byte)flag[42])))))) ||
                (((byte)flag[68] <= (byte)flag[43] ||
                 ((((byte)flag[68] <= (byte)flag[44] || ((byte)flag[68] <= (byte)flag[45])) ||
                  ((byte)flag[68] <= (byte)flag[46])))))))))) ||
             (((((byte)flag[68] <= (byte)flag[47] || ((byte)flag[68] <= (byte)flag[48])) ||
               ((((((byte)flag[68] <= (byte)flag[49] ||
                   (((byte)flag[68] <= (byte)flag[50] || ((byte)flag[68] <= (byte)flag[51])))) ||
                  ((byte)flag[68] <= (byte)flag[52])) ||
                 (((((((byte)flag[68] <= (byte)flag[53] || ((byte)flag[68] <= (byte)flag[54])) ||
                     ((byte)flag[68] <= (byte)flag[55])) ||
                    (((byte)flag[68] <= (byte)flag[56] || ((byte)flag[68] <= (byte)flag[57])))) ||
                   (((byte)flag[68] <= (byte)flag[58] ||
                    (((byte)flag[68] <= (byte)flag[59] || ((byte)flag[68] <= (byte)flag[60])))))) ||
                  (((byte)flag[68] <= (byte)flag[61] ||
                   (((((byte)flag[68] <= (byte)flag[62] || ((byte)flag[68] <= (byte)flag[63])) ||
                     ((byte)flag[68] <= (byte)flag[64])) ||
                    ((((byte)flag[68] <= (byte)flag[65] || ((byte)flag[68] <= (byte)flag[66])) ||
                     (((byte)flag[68] <= (byte)flag[67] ||
                      (((byte)flag[68] <= (byte)flag[69] || ((byte)flag[68] <= (byte)flag[70])))))))
                    ))))))) || ((byte)flag[68] <= (byte)flag[71])))) ||
              ((((byte)flag[72] <= (byte)flag[68] || ((byte)flag[69] <= (byte)flag[0])) ||
               ((byte)flag[69] <= (byte)flag[1])))))))))))) ||
         (((((((byte)flag[69] <= (byte)flag[2] || ((byte)flag[69] <= (byte)flag[3])) ||
             (((((byte)flag[4] <= (byte)flag[69] ||
                (((byte)flag[5] <= (byte)flag[69] || ((byte)flag[69] <= (byte)flag[6])))) ||
               ((byte)flag[69] <= (byte)flag[7])) ||
              (((((((byte)flag[69] <= (byte)flag[8] || ((byte)flag[9] <= (byte)flag[69])) ||
                  ((byte)flag[69] <= (byte)flag[10])) ||
                 (((byte)flag[69] <= (byte)flag[11] || ((byte)flag[69] <= (byte)flag[12])))) ||
                ((byte)flag[69] <= (byte)flag[13])) ||
               (((byte)flag[69] <= (byte)flag[14] || ((byte)flag[69] <= (byte)flag[15])))))))) ||
            ((((byte)flag[16] <= (byte)flag[69] ||
              ((((byte)flag[69] <= (byte)flag[17] || ((byte)flag[69] <= (byte)flag[18])) ||
               ((byte)flag[69] <= (byte)flag[19])))) ||
             ((((byte)flag[20] <= (byte)flag[69] || ((byte)flag[69] <= (byte)flag[21])) ||
              ((byte)flag[22] <= (byte)flag[69])))))) ||
           (((byte)flag[69] <= (byte)flag[23] || ((byte)flag[69] <= (byte)flag[24])))) ||
          (((((byte)flag[69] <= (byte)flag[25] ||
             ((((byte)flag[69] <= (byte)flag[26] || ((byte)flag[69] <= (byte)flag[27])) ||
              ((byte)flag[28] <= (byte)flag[69])))) ||
            ((((((byte)flag[69] <= (byte)flag[29] || ((byte)flag[69] <= (byte)flag[30])) ||
               (((byte)flag[31] <= (byte)flag[69] ||
                (((((byte)flag[69] <= (byte)flag[32] || ((byte)flag[69] <= (byte)flag[33])) ||
                  (((byte)flag[69] <= (byte)flag[34] ||
                   (((((byte)flag[69] <= (byte)flag[35] || ((byte)flag[36] <= (byte)flag[69])) ||
                     ((byte)flag[37] <= (byte)flag[69])) ||
                    (((byte)flag[69] <= (byte)flag[38] || ((byte)flag[69] <= (byte)flag[39]))))))))
                 || ((byte)flag[69] <= (byte)flag[40])))))) ||
              (((byte)flag[69] <= (byte)flag[41] || ((byte)flag[69] <= (byte)flag[42])))) ||
             ((((byte)flag[69] <= (byte)flag[43] ||
               ((((byte)flag[69] <= (byte)flag[44] || ((byte)flag[69] <= (byte)flag[45])) ||
                ((byte)flag[69] <= (byte)flag[46])))) ||
              ((((byte)flag[69] <= (byte)flag[47] || ((byte)flag[69] <= (byte)flag[48])) ||
               ((byte)flag[69] <= (byte)flag[49])))))))) ||
           (((((byte)flag[69] <= (byte)flag[50] || ((byte)flag[69] <= (byte)flag[51])) ||
             (((byte)flag[69] <= (byte)flag[52] ||
              ((((byte)flag[53] <= (byte)flag[69] || ((byte)flag[54] <= (byte)flag[69])) ||
               ((byte)flag[69] <= (byte)flag[55])))))) ||
            ((((byte)flag[69] <= (byte)flag[56] || ((byte)flag[57] <= (byte)flag[69])) ||
             ((byte)flag[58] <= (byte)flag[69])))))))))))) ||
       ((((((((((byte)flag[69] <= (byte)flag[59] || ((byte)flag[69] <= (byte)flag[60])) ||
              (((byte)flag[69] <= (byte)flag[61] ||
               (((((byte)flag[62] <= (byte)flag[69] || ((byte)flag[69] <= (byte)flag[63])) ||
                 ((byte)flag[69] <= (byte)flag[64])) ||
                (((byte)flag[69] <= (byte)flag[65] || ((byte)flag[69] <= (byte)flag[66])))))))) ||
             (((byte)flag[69] <= (byte)flag[67] ||
              (((byte)flag[68] <= (byte)flag[69] || ((byte)flag[69] <= (byte)flag[70])))))) ||
            (((((byte)flag[72] <= (byte)flag[69] ||
               ((((byte)flag[70] <= (byte)flag[0] || ((byte)flag[1] <= (byte)flag[70])) ||
                ((byte)flag[70] <= (byte)flag[2])))) ||
              ((((byte)flag[70] <= (byte)flag[3] || ((byte)flag[4] <= (byte)flag[70])) ||
               ((byte)flag[5] <= (byte)flag[70])))) ||
             ((((byte)flag[70] <= (byte)flag[6] || ((byte)flag[70] <= (byte)flag[7])) ||
              (((byte)flag[8] <= (byte)flag[70] ||
               ((((byte)flag[9] <= (byte)flag[70] || ((byte)flag[70] <= (byte)flag[11])) ||
                ((byte)flag[12] <= (byte)flag[70])))))))))) ||
           (((byte)flag[70] <= (byte)flag[13] || ((byte)flag[14] <= (byte)flag[70])))) ||
          (((byte)flag[15] <= (byte)flag[70] ||
           ((((byte)flag[16] <= (byte)flag[70] || ((byte)flag[17] <= (byte)flag[70])) ||
            (((byte)flag[70] <= (byte)flag[18] ||
             ((((((byte)flag[19] <= (byte)flag[70] || ((byte)flag[20] <= (byte)flag[70])) ||
                ((byte)flag[21] <= (byte)flag[70])) ||
               (((byte)flag[22] <= (byte)flag[70] || ((byte)flag[23] <= (byte)flag[70])))) ||
              ((byte)flag[24] <= (byte)flag[70])))))))))) ||
         (((((((byte)flag[70] <= (byte)flag[25] || ((byte)flag[70] <= (byte)flag[26])) ||
             (((byte)flag[27] <= (byte)flag[70] ||
              ((((((byte)flag[28] <= (byte)flag[70] || ((byte)flag[70] <= (byte)flag[29])) ||
                 ((byte)flag[30] <= (byte)flag[70])) ||
                ((((byte)flag[31] <= (byte)flag[70] || ((byte)flag[70] <= (byte)flag[32])) ||
                 (((byte)flag[70] <= (byte)flag[33] ||
                  (((byte)flag[34] <= (byte)flag[70] || ((byte)flag[70] <= (byte)flag[35])))))))) ||
               ((byte)flag[36] <= (byte)flag[70])))))) ||
            (((((byte)flag[37] <= (byte)flag[70] || ((byte)flag[70] <= (byte)flag[38])) ||
              ((byte)flag[39] <= (byte)flag[70])) ||
             (((byte)flag[70] <= (byte)flag[40] || ((byte)flag[70] <= (byte)flag[41])))))) ||
           ((((((((((byte)flag[42] <= (byte)flag[70] ||
                   (((byte)flag[70] <= (byte)flag[43] || ((byte)flag[44] <= (byte)flag[70])))) ||
                  ((byte)flag[70] <= (byte)flag[45])) ||
                 (((((((byte)flag[70] <= (byte)flag[46] || ((byte)flag[47] <= (byte)flag[70])) ||
                     ((byte)flag[48] <= (byte)flag[70])) ||
                    (((byte)flag[70] <= (byte)flag[49] || ((byte)flag[70] <= (byte)flag[50])))) ||
                   (((byte)flag[70] <= (byte)flag[51] ||
                    (((byte)flag[52] <= (byte)flag[70] || ((byte)flag[53] <= (byte)flag[70])))))) ||
                  ((byte)flag[54] <= (byte)flag[70])))) ||
                (((((byte)flag[55] <= (byte)flag[70] || ((byte)flag[70] <= (byte)flag[56])) ||
                  ((byte)flag[57] <= (byte)flag[70])) ||
                 ((((byte)flag[58] <= (byte)flag[70] || ((byte)flag[59] <= (byte)flag[70])) ||
                  (((byte)flag[60] <= (byte)flag[70] ||
                   (((byte)flag[70] <= (byte)flag[61] || ((byte)flag[62] <= (byte)flag[70]))))))))))
               || ((byte)flag[70] <= (byte)flag[63])) ||
              (((((byte)flag[70] <= (byte)flag[64] || ((byte)flag[65] <= (byte)flag[70])) ||
                ((byte)flag[70] <= (byte)flag[66])) ||
               ((((byte)flag[67] <= (byte)flag[70] || ((byte)flag[68] <= (byte)flag[70])) ||
                (((byte)flag[69] <= (byte)flag[70] ||
                 (((byte)flag[71] <= (byte)flag[70] || ((byte)flag[72] <= (byte)flag[70]))))))))))
             || ((((byte)flag[71] <= (byte)flag[0] ||
                  (((((byte)flag[71] <= (byte)flag[1] || ((byte)flag[71] <= (byte)flag[2])) ||
                    ((byte)flag[71] <= (byte)flag[3])) ||
                   (((byte)flag[4] <= (byte)flag[71] || ((byte)flag[5] <= (byte)flag[71])))))) ||
                 ((((byte)flag[71] <= (byte)flag[6] ||
                   (((byte)flag[71] <= (byte)flag[7] || ((byte)flag[71] <= (byte)flag[8])))) ||
                  ((byte)flag[9] <= (byte)flag[71])))))) ||
            (((((((((byte)flag[71] <= (byte)flag[10] || ((byte)flag[71] <= (byte)flag[11])) ||
                  ((byte)flag[71] <= (byte)flag[12])) ||
                 ((((byte)flag[71] <= (byte)flag[13] || ((byte)flag[71] <= (byte)flag[14])) ||
                  (((byte)flag[71] <= (byte)flag[15] ||
                   (((byte)flag[16] <= (byte)flag[71] || ((byte)flag[71] <= (byte)flag[17]))))))))
                || (((byte)flag[71] <= (byte)flag[18] ||
                    ((((byte)flag[71] <= (byte)flag[19] || ((byte)flag[20] <= (byte)flag[71])) ||
                     ((byte)flag[71] <= (byte)flag[21])))))) ||
               (((byte)flag[22] <= (byte)flag[71] || ((byte)flag[71] <= (byte)flag[23])))) ||
              ((((((byte)flag[71] <= (byte)flag[24] ||
                  (((byte)flag[71] <= (byte)flag[25] || ((byte)flag[71] <= (byte)flag[26])))) ||
                 ((byte)flag[71] <= (byte)flag[27])) ||
                (((((((byte)flag[28] <= (byte)flag[71] || ((byte)flag[71] <= (byte)flag[29])) ||
                    ((byte)flag[71] <= (byte)flag[30])) ||
                   (((byte)flag[31] <= (byte)flag[71] || ((byte)flag[71] <= (byte)flag[32])))) ||
                  ((byte)flag[71] <= (byte)flag[33])) ||
                 (((((byte)flag[71] <= (byte)flag[34] || ((byte)flag[71] <= (byte)flag[35])) ||
                   (((byte)flag[36] <= (byte)flag[71] ||
                    ((((byte)flag[37] <= (byte)flag[71] || ((byte)flag[71] <= (byte)flag[38])) ||
                     ((byte)flag[71] <= (byte)flag[39])))))) ||
                  (((byte)flag[71] <= (byte)flag[40] || ((byte)flag[71] <= (byte)flag[41])))))))) ||
               (((byte)flag[71] <= (byte)flag[42] ||
                ((((((byte)flag[71] <= (byte)flag[43] || ((byte)flag[71] <= (byte)flag[44])) ||
                   (((byte)flag[71] <= (byte)flag[45] ||
                    ((((byte)flag[71] <= (byte)flag[46] || ((byte)flag[71] <= (byte)flag[47])) ||
                     ((byte)flag[71] <= (byte)flag[48])))))) ||
                  ((((byte)flag[71] <= (byte)flag[49] || ((byte)flag[71] <= (byte)flag[50])) ||
                   (((byte)flag[71] <= (byte)flag[51] ||
                    ((((byte)flag[71] <= (byte)flag[52] || ((byte)flag[53] <= (byte)flag[71])) ||
                     (((byte)flag[54] <= (byte)flag[71] ||
                      (((((byte)flag[71] <= (byte)flag[55] || ((byte)flag[71] <= (byte)flag[56])) ||
                        ((byte)flag[57] <= (byte)flag[71])) ||
                       (((byte)flag[58] <= (byte)flag[71] || ((byte)flag[71] <= (byte)flag[59]))))))
                     )))))))) || ((byte)flag[71] <= (byte)flag[60])))))))) ||
             ((((byte)flag[71] <= (byte)flag[61] || ((byte)flag[62] <= (byte)flag[71])) ||
              (((byte)flag[71] <= (byte)flag[63] ||
               ((((byte)flag[71] <= (byte)flag[64] || ((byte)flag[71] <= (byte)flag[65])) ||
                ((byte)flag[71] <= (byte)flag[66])))))))))))) ||
          ((((((((byte)flag[71] <= (byte)flag[67] || ((byte)flag[68] <= (byte)flag[71])) ||
               ((byte)flag[71] <= (byte)flag[70])) ||
              (((byte)flag[72] <= (byte)flag[71] || ((byte)flag[72] <= (byte)flag[0])))) ||
             (((byte)flag[72] <= (byte)flag[1] ||
              ((((byte)flag[72] <= (byte)flag[2] || ((byte)flag[72] <= (byte)flag[3])) ||
               ((byte)flag[72] <= (byte)flag[4])))))) ||
            ((((((byte)flag[72] <= (byte)flag[5] || ((byte)flag[72] <= (byte)flag[6])) ||
               (((byte)flag[72] <= (byte)flag[7] ||
                ((((byte)flag[72] <= (byte)flag[8] || ((byte)flag[72] <= (byte)flag[9])) ||
                 (((byte)flag[72] <= (byte)flag[10] ||
                  (((((byte)flag[72] <= (byte)flag[11] || ((byte)flag[72] <= (byte)flag[12])) ||
                    ((byte)flag[72] <= (byte)flag[13])) ||
                   (((byte)flag[72] <= (byte)flag[14] || ((byte)flag[72] <= (byte)flag[15]))))))))))
               )) || ((byte)flag[72] <= (byte)flag[16])) ||
             (((byte)flag[72] <= (byte)flag[17] || ((byte)flag[72] <= (byte)flag[18])))))) ||
           (((((byte)flag[72] <= (byte)flag[19] ||
              ((((byte)flag[72] <= (byte)flag[20] || ((byte)flag[72] <= (byte)flag[21])) ||
               ((byte)flag[72] <= (byte)flag[22])))) ||
             ((((byte)flag[72] <= (byte)flag[23] || ((byte)flag[72] <= (byte)flag[24])) ||
              ((byte)flag[72] <= (byte)flag[25])))) ||
            (((byte)flag[72] <= (byte)flag[26] || ((byte)flag[72] <= (byte)flag[27])))))))))) ||
        (((((byte)flag[72] <= (byte)flag[28] ||
           ((((byte)flag[72] <= (byte)flag[29] || ((byte)flag[72] <= (byte)flag[30])) ||
            ((byte)flag[72] <= (byte)flag[31])))) ||
          ((((byte)flag[72] <= (byte)flag[32] || ((byte)flag[72] <= (byte)flag[33])) ||
           (((byte)flag[72] <= (byte)flag[34] ||
            ((((byte)flag[72] <= (byte)flag[35] || ((byte)flag[72] <= (byte)flag[36])) ||
             (((byte)flag[72] <= (byte)flag[37] ||
              ((((((((byte)flag[72] <= (byte)flag[38] || ((byte)flag[72] <= (byte)flag[39])) ||
                   ((byte)flag[72] <= (byte)flag[40])) ||
                  (((byte)flag[72] <= (byte)flag[41] || ((byte)flag[72] <= (byte)flag[42])))) ||
                 ((byte)flag[72] <= (byte)flag[43])) ||
                (((byte)flag[72] <= (byte)flag[44] || ((byte)flag[72] <= (byte)flag[45])))) ||
               ((byte)flag[72] <= (byte)flag[46])))))))))))) ||
         (((((((byte)flag[72] <= (byte)flag[47] || ((byte)flag[72] <= (byte)flag[48])) ||
             ((byte)flag[72] <= (byte)flag[49])) ||
            (((byte)flag[72] <= (byte)flag[50] || ((byte)flag[72] <= (byte)flag[51])))) ||
           ((byte)flag[72] <= (byte)flag[52])) ||
          ((((((((byte)flag[72] <= (byte)flag[53] || ((byte)flag[72] <= (byte)flag[54])) ||
               (((byte)flag[72] <= (byte)flag[55] ||
                ((((byte)flag[72] <= (byte)flag[56] || ((byte)flag[72] <= (byte)flag[57])) ||
                 ((byte)flag[72] <= (byte)flag[58])))))) ||
              (((byte)flag[72] <= (byte)flag[59] || ((byte)flag[72] <= (byte)flag[60])))) ||
             ((byte)flag[72] <= (byte)flag[61])) ||
            ((((byte)flag[72] <= (byte)flag[62] || ((byte)flag[72] <= (byte)flag[63])) ||
             (((byte)flag[72] <= (byte)flag[64] ||
              (((((byte)flag[72] <= (byte)flag[65] || ((byte)flag[72] <= (byte)flag[66])) ||
                ((byte)flag[72] <= (byte)flag[67])) ||
               (((byte)flag[72] <= (byte)flag[68] || ((byte)flag[72] <= (byte)flag[69])))))))))) ||
           (((byte)flag[72] <= (byte)flag[70] || ((byte)flag[72] <= (byte)flag[71])))))))))))))))) {
LAB_00122f20:
    puts("\nSorry, that is not the correct input.");
  }
  else {
    local_12c = 0;
    while (uVar4 = SEXT48(local_12c), sVar3 = strlen(flag), uVar4 < sVar3) {
      cVar1 = flag[local_12c];
      iVar2 = isalpha((int)cVar1);
      if (((iVar2 == 0) && (cVar1 != '{')) && (cVar1 != '}')) goto LAB_00122f20;
      local_12c = local_12c + 1;
    }
    puts("\nCorrect input!");
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

