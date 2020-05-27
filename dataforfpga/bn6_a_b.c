#include "bn6_a_b.h"
short * bn6_a_b( short in[BN6_A_B_FILT] ) {
in[0] = (short)(((8*((int)in[0]))+-1878) >> 8);
in[0] = in[0] * ( in[0] > 0 );
in[1] = (short)(((13*((int)in[1]))+-5021) >> 8);
in[1] = in[1] * ( in[1] > 0 );
in[2] = (short)(((11*((int)in[2]))+7276) >> 8);
in[2] = in[2] * ( in[2] > 0 );
in[3] = (short)(((13*((int)in[3]))+-1053) >> 8);
in[3] = in[3] * ( in[3] > 0 );
in[4] = (short)(((15*((int)in[4]))+-8136) >> 8);
in[4] = in[4] * ( in[4] > 0 );
in[5] = (short)(((6*((int)in[5]))+5545) >> 8);
in[5] = in[5] * ( in[5] > 0 );
in[6] = (short)(((11*((int)in[6]))+-19390) >> 8);
in[6] = in[6] * ( in[6] > 0 );
in[7] = (short)(((23*((int)in[7]))+-3895) >> 8);
in[7] = in[7] * ( in[7] > 0 );
in[8] = (short)(((19*((int)in[8]))+-3957) >> 8);
in[8] = in[8] * ( in[8] > 0 );
in[9] = (short)(((14*((int)in[9]))+3922) >> 8);
in[9] = in[9] * ( in[9] > 0 );
in[10] = (short)(((12*((int)in[10]))+6496) >> 8);
in[10] = in[10] * ( in[10] > 0 );
in[11] = (short)(((8*((int)in[11]))+5350) >> 8);
in[11] = in[11] * ( in[11] > 0 );
in[12] = (short)(((12*((int)in[12]))+8542) >> 8);
in[12] = in[12] * ( in[12] > 0 );
in[13] = (short)(((10*((int)in[13]))+5777) >> 8);
in[13] = in[13] * ( in[13] > 0 );
in[14] = (short)(((19*((int)in[14]))+10716) >> 8);
in[14] = in[14] * ( in[14] > 0 );
in[15] = (short)(((10*((int)in[15]))+9471) >> 8);
in[15] = in[15] * ( in[15] > 0 );
in[16] = (short)(((13*((int)in[16]))+-5055) >> 8);
in[16] = in[16] * ( in[16] > 0 );
in[17] = (short)(((10*((int)in[17]))+-1926) >> 8);
in[17] = in[17] * ( in[17] > 0 );
in[18] = (short)(((15*((int)in[18]))+-8983) >> 8);
in[18] = in[18] * ( in[18] > 0 );
in[19] = (short)(((15*((int)in[19]))+6670) >> 8);
in[19] = in[19] * ( in[19] > 0 );
in[20] = (short)(((15*((int)in[20]))+5404) >> 8);
in[20] = in[20] * ( in[20] > 0 );
in[21] = (short)(((18*((int)in[21]))+7694) >> 8);
in[21] = in[21] * ( in[21] > 0 );
in[22] = (short)(((9*((int)in[22]))+9446) >> 8);
in[22] = in[22] * ( in[22] > 0 );
in[23] = (short)(((5*((int)in[23]))+-1685) >> 8);
in[23] = in[23] * ( in[23] > 0 );
in[24] = (short)(((11*((int)in[24]))+1594) >> 8);
in[24] = in[24] * ( in[24] > 0 );
in[25] = (short)(((7*((int)in[25]))+-2726) >> 8);
in[25] = in[25] * ( in[25] > 0 );
in[26] = (short)(((12*((int)in[26]))+-10302) >> 8);
in[26] = in[26] * ( in[26] > 0 );
in[27] = (short)(((8*((int)in[27]))+-32) >> 8);
in[27] = in[27] * ( in[27] > 0 );
in[28] = (short)(((19*((int)in[28]))+239) >> 8);
in[28] = in[28] * ( in[28] > 0 );
in[29] = (short)(((15*((int)in[29]))+9775) >> 8);
in[29] = in[29] * ( in[29] > 0 );
in[30] = (short)(((12*((int)in[30]))+1102) >> 8);
in[30] = in[30] * ( in[30] > 0 );
in[31] = (short)(((7*((int)in[31]))+4056) >> 8);
in[31] = in[31] * ( in[31] > 0 );
in[32] = (short)(((16*((int)in[32]))+6846) >> 8);
in[32] = in[32] * ( in[32] > 0 );
in[33] = (short)(((24*((int)in[33]))+11968) >> 8);
in[33] = in[33] * ( in[33] > 0 );
in[34] = (short)(((11*((int)in[34]))+11262) >> 8);
in[34] = in[34] * ( in[34] > 0 );
in[35] = (short)(((7*((int)in[35]))+2532) >> 8);
in[35] = in[35] * ( in[35] > 0 );
in[36] = (short)(((14*((int)in[36]))+-1001) >> 8);
in[36] = in[36] * ( in[36] > 0 );
in[37] = (short)(((14*((int)in[37]))+-1454) >> 8);
in[37] = in[37] * ( in[37] > 0 );
in[38] = (short)(((16*((int)in[38]))+1990) >> 8);
in[38] = in[38] * ( in[38] > 0 );
in[39] = (short)(((18*((int)in[39]))+3960) >> 8);
in[39] = in[39] * ( in[39] > 0 );
in[40] = (short)(((6*((int)in[40]))+-379) >> 8);
in[40] = in[40] * ( in[40] > 0 );
in[41] = (short)(((8*((int)in[41]))+-3600) >> 8);
in[41] = in[41] * ( in[41] > 0 );
in[42] = (short)(((10*((int)in[42]))+-7061) >> 8);
in[42] = in[42] * ( in[42] > 0 );
in[43] = (short)(((24*((int)in[43]))+23756) >> 8);
in[43] = in[43] * ( in[43] > 0 );
in[44] = (short)(((16*((int)in[44]))+13496) >> 8);
in[44] = in[44] * ( in[44] > 0 );
in[45] = (short)(((18*((int)in[45]))+-504) >> 8);
in[45] = in[45] * ( in[45] > 0 );
in[46] = (short)(((15*((int)in[46]))+11116) >> 8);
in[46] = in[46] * ( in[46] > 0 );
in[47] = (short)(((13*((int)in[47]))+11949) >> 8);
in[47] = in[47] * ( in[47] > 0 );
in[48] = (short)(((12*((int)in[48]))+11179) >> 8);
in[48] = in[48] * ( in[48] > 0 );
in[49] = (short)(((10*((int)in[49]))+-7411) >> 8);
in[49] = in[49] * ( in[49] > 0 );
in[50] = (short)(((11*((int)in[50]))+1223) >> 8);
in[50] = in[50] * ( in[50] > 0 );
in[51] = (short)(((9*((int)in[51]))+-4493) >> 8);
in[51] = in[51] * ( in[51] > 0 );
in[52] = (short)(((21*((int)in[52]))+11286) >> 8);
in[52] = in[52] * ( in[52] > 0 );
in[53] = (short)(((10*((int)in[53]))+-6488) >> 8);
in[53] = in[53] * ( in[53] > 0 );
in[54] = (short)(((17*((int)in[54]))+-21700) >> 8);
in[54] = in[54] * ( in[54] > 0 );
in[55] = (short)(((17*((int)in[55]))+461) >> 8);
in[55] = in[55] * ( in[55] > 0 );
in[56] = (short)(((6*((int)in[56]))+4923) >> 8);
in[56] = in[56] * ( in[56] > 0 );
in[57] = (short)(((20*((int)in[57]))+8852) >> 8);
in[57] = in[57] * ( in[57] > 0 );
in[58] = (short)(((6*((int)in[58]))+-6173) >> 8);
in[58] = in[58] * ( in[58] > 0 );
in[59] = (short)(((4*((int)in[59]))+-4730) >> 8);
in[59] = in[59] * ( in[59] > 0 );
in[60] = (short)(((14*((int)in[60]))+-611) >> 8);
in[60] = in[60] * ( in[60] > 0 );
in[61] = (short)(((11*((int)in[61]))+535) >> 8);
in[61] = in[61] * ( in[61] > 0 );
in[62] = (short)(((22*((int)in[62]))+12340) >> 8);
in[62] = in[62] * ( in[62] > 0 );
in[63] = (short)(((11*((int)in[63]))+10659) >> 8);
in[63] = in[63] * ( in[63] > 0 );
return in;
}
