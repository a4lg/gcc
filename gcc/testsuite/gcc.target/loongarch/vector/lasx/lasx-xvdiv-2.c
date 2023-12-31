/* { dg-do run } */
/* { dg-options "-mlasx -w -fno-strict-aliasing" } */
#include "../simd_correctness_check.h"
#include <lasxintrin.h>

int
main ()
{
  __m256i __m256i_op0, __m256i_op1, __m256i_op2, __m256i_out, __m256i_result;
  __m256 __m256_op0, __m256_op1, __m256_op2, __m256_out, __m256_result;
  __m256d __m256d_op0, __m256d_op1, __m256d_op2, __m256d_out, __m256d_result;

  int int_op0, int_op1, int_op2, int_out, int_result, i = 1, fail;
  long int long_op0, long_op1, long_op2, lont_out, lont_result;
  long int long_int_out, long_int_result;
  unsigned int unsigned_int_out, unsigned_int_result;
  unsigned long int unsigned_long_int_out, unsigned_long_int_result;

  *((unsigned long *)&__m256i_op0[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op0[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op0[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op0[0]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[3]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_op1[2]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_op1[1]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_op1[0]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_result[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[0]) = 0x0000000000000000;
  __m256i_out = __lasx_xvdiv_bu (__m256i_op0, __m256i_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((unsigned long *)&__m256i_op0[3]) = 0x000000000000017e;
  *((unsigned long *)&__m256i_op0[2]) = 0x000000000000017e;
  *((unsigned long *)&__m256i_op0[1]) = 0x000000000000017e;
  *((unsigned long *)&__m256i_op0[0]) = 0x000000000000017e;
  *((unsigned long *)&__m256i_op1[3]) = 0x0202020202020202;
  *((unsigned long *)&__m256i_op1[2]) = 0x0202810102020202;
  *((unsigned long *)&__m256i_op1[1]) = 0x0202020202020202;
  *((unsigned long *)&__m256i_op1[0]) = 0x0202810102020202;
  *((unsigned long *)&__m256i_result[3]) = 0x000000000000003f;
  *((unsigned long *)&__m256i_result[2]) = 0x000000000000003f;
  *((unsigned long *)&__m256i_result[1]) = 0x000000000000003f;
  *((unsigned long *)&__m256i_result[0]) = 0x000000000000003f;
  __m256i_out = __lasx_xvdiv_bu (__m256i_op0, __m256i_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((unsigned long *)&__m256i_op0[3]) = 0x0000000000483800;
  *((unsigned long *)&__m256i_op0[2]) = 0xffffffffffba0c05;
  *((unsigned long *)&__m256i_op0[1]) = 0x0000000000483800;
  *((unsigned long *)&__m256i_op0[0]) = 0xffffffffffba0c05;
  *((unsigned long *)&__m256i_op1[3]) = 0x5353535353535353;
  *((unsigned long *)&__m256i_op1[2]) = 0x5353535353535353;
  *((unsigned long *)&__m256i_op1[1]) = 0x5353535353535353;
  *((unsigned long *)&__m256i_op1[0]) = 0x5353535353535353;
  *((unsigned long *)&__m256i_result[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[2]) = 0x0303030303020000;
  *((unsigned long *)&__m256i_result[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[0]) = 0x0303030303020000;
  __m256i_out = __lasx_xvdiv_bu (__m256i_op0, __m256i_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((unsigned long *)&__m256i_op0[3]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_op0[2]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_op0[1]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_op0[0]) = 0xfffdfffdfffdfffd;
  *((unsigned long *)&__m256i_op1[3]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_op1[2]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_op1[1]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_op1[0]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_result[3]) = 0x0101010101010101;
  *((unsigned long *)&__m256i_result[2]) = 0x0101010101010101;
  *((unsigned long *)&__m256i_result[1]) = 0x0101010101010101;
  *((unsigned long *)&__m256i_result[0]) = 0x0100010001000100;
  __m256i_out = __lasx_xvdiv_bu (__m256i_op0, __m256i_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((unsigned long *)&__m256i_op0[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op0[2]) = 0x00000000000030b8;
  *((unsigned long *)&__m256i_op0[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op0[0]) = 0x00000000000030b8;
  *((unsigned long *)&__m256i_op1[3]) = 0x9fe7fffffffff32e;
  *((unsigned long *)&__m256i_op1[2]) = 0x6040190ddfdd8587;
  *((unsigned long *)&__m256i_op1[1]) = 0xecd011542d2cc4c7;
  *((unsigned long *)&__m256i_op1[0]) = 0x6040190dffffffff;
  *((unsigned long *)&__m256i_result[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[2]) = 0x0000000000000001;
  *((unsigned long *)&__m256i_result[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[0]) = 0x0000000000000000;
  __m256i_out = __lasx_xvdiv_bu (__m256i_op0, __m256i_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((unsigned long *)&__m256i_op0[3]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_op0[2]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_op0[1]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_op0[0]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_op1[3]) = 0x0202010202020102;
  *((unsigned long *)&__m256i_op1[2]) = 0x0202010202020102;
  *((unsigned long *)&__m256i_op1[1]) = 0x0202010202020102;
  *((unsigned long *)&__m256i_op1[0]) = 0x0202010202020102;
  *((unsigned long *)&__m256i_result[3]) = 0x7f7fff7f7f7fff7f;
  *((unsigned long *)&__m256i_result[2]) = 0x7f7fff7f7f7fff7f;
  *((unsigned long *)&__m256i_result[1]) = 0x7f7fff7f7f7fff7f;
  *((unsigned long *)&__m256i_result[0]) = 0x7f7fff7f7f7fff7f;
  __m256i_out = __lasx_xvdiv_bu (__m256i_op0, __m256i_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((unsigned long *)&__m256i_op0[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op0[2]) = 0x00000000ffff97a2;
  *((unsigned long *)&__m256i_op0[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op0[0]) = 0x00000000ffff97a2;
  *((unsigned long *)&__m256i_op1[3]) = 0x7fffffffffffffff;
  *((unsigned long *)&__m256i_op1[2]) = 0x7fffffffffffffff;
  *((unsigned long *)&__m256i_op1[1]) = 0x7fffffffffffffff;
  *((unsigned long *)&__m256i_op1[0]) = 0x7fffffffffffffff;
  *((unsigned long *)&__m256i_result[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[2]) = 0x0000000001010000;
  *((unsigned long *)&__m256i_result[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[0]) = 0x0000000001010000;
  __m256i_out = __lasx_xvdiv_bu (__m256i_op0, __m256i_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((unsigned long *)&__m256i_op0[3]) = 0x0000000000007fee;
  *((unsigned long *)&__m256i_op0[2]) = 0x0000000000007fee;
  *((unsigned long *)&__m256i_op0[1]) = 0x0000000000007fee;
  *((unsigned long *)&__m256i_op0[0]) = 0x0000000000007fee;
  *((unsigned long *)&__m256i_op1[3]) = 0x7fffffffffffffff;
  *((unsigned long *)&__m256i_op1[2]) = 0x7fffffffffffffff;
  *((unsigned long *)&__m256i_op1[1]) = 0x7fffffffffffffff;
  *((unsigned long *)&__m256i_op1[0]) = 0x7fffffffffffffff;
  *((unsigned long *)&__m256i_result[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[0]) = 0x0000000000000000;
  __m256i_out = __lasx_xvdiv_hu (__m256i_op0, __m256i_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((unsigned long *)&__m256i_op0[3]) = 0x000000000000ff00;
  *((unsigned long *)&__m256i_op0[2]) = 0xe2e2e202ffffffff;
  *((unsigned long *)&__m256i_op0[1]) = 0x000000000000ff00;
  *((unsigned long *)&__m256i_op0[0]) = 0xe2e2e202ffffffff;
  *((unsigned long *)&__m256i_op1[3]) = 0xffc6ffc6003a003a;
  *((unsigned long *)&__m256i_op1[2]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_op1[1]) = 0xffc6ffc6003a003a;
  *((unsigned long *)&__m256i_op1[0]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_result[3]) = 0x0000000000000465;
  *((unsigned long *)&__m256i_result[2]) = 0x0000000000010001;
  *((unsigned long *)&__m256i_result[1]) = 0x0000000000000465;
  *((unsigned long *)&__m256i_result[0]) = 0x0000000000010001;
  __m256i_out = __lasx_xvdiv_hu (__m256i_op0, __m256i_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((unsigned long *)&__m256i_op0[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op0[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op0[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op0[0]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[3]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_op1[2]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_op1[1]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_op1[0]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_result[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[0]) = 0x0000000000000000;
  __m256i_out = __lasx_xvdiv_hu (__m256i_op0, __m256i_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((unsigned long *)&__m256i_op0[3]) = 0xfffeb6839ffffd80;
  *((unsigned long *)&__m256i_op0[2]) = 0xfffe97c020010001;
  *((unsigned long *)&__m256i_op0[1]) = 0xfffeb6839ffffd80;
  *((unsigned long *)&__m256i_op0[0]) = 0xfffe97c020010001;
  *((unsigned long *)&__m256i_op1[3]) = 0xfffffffffffffff8;
  *((unsigned long *)&__m256i_op1[2]) = 0xfffffffffffffff8;
  *((unsigned long *)&__m256i_op1[1]) = 0xfffffffffffffff8;
  *((unsigned long *)&__m256i_op1[0]) = 0xfffffffffffffff8;
  *((unsigned long *)&__m256i_result[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[0]) = 0x0000000000000000;
  __m256i_out = __lasx_xvdiv_hu (__m256i_op0, __m256i_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((unsigned long *)&__m256i_op0[3]) = 0x0000000000000200;
  *((unsigned long *)&__m256i_op0[2]) = 0x0000000000000200;
  *((unsigned long *)&__m256i_op0[1]) = 0x0000000000000200;
  *((unsigned long *)&__m256i_op0[0]) = 0x0000000000000200;
  *((unsigned long *)&__m256i_op1[3]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_op1[2]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_op1[1]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_op1[0]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_result[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[0]) = 0x0000000000000000;
  __m256i_out = __lasx_xvdiv_hu (__m256i_op0, __m256i_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((unsigned long *)&__m256i_op0[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op0[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op0[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op0[0]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[3]) = 0x0101010202020203;
  *((unsigned long *)&__m256i_op1[2]) = 0x0101010201010102;
  *((unsigned long *)&__m256i_op1[1]) = 0x0101010202020203;
  *((unsigned long *)&__m256i_op1[0]) = 0x0101010201010102;
  *((unsigned long *)&__m256i_result[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[0]) = 0x0000000000000000;
  __m256i_out = __lasx_xvdiv_hu (__m256i_op0, __m256i_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((unsigned long *)&__m256i_op0[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op0[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op0[1]) = 0x00020001ffb6ffe0;
  *((unsigned long *)&__m256i_op0[0]) = 0x0049004200000000;
  *((unsigned long *)&__m256i_op1[3]) = 0x0000ffff0000ff80;
  *((unsigned long *)&__m256i_op1[2]) = 0x0000468600007f79;
  *((unsigned long *)&__m256i_op1[1]) = 0xffffffff0000ffff;
  *((unsigned long *)&__m256i_op1[0]) = 0x0000f3280000dfff;
  *((unsigned long *)&__m256i_result[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[1]) = 0x000000000000ffb7;
  *((unsigned long *)&__m256i_result[0]) = 0x0000004c00000000;
  __m256i_out = __lasx_xvdiv_wu (__m256i_op0, __m256i_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((unsigned long *)&__m256i_op0[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op0[2]) = 0x7f7f7f7f7f7f7f7f;
  *((unsigned long *)&__m256i_op0[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op0[0]) = 0x7f7f7f7f7f7f7f7f;
  *((unsigned long *)&__m256i_op1[3]) = 0x0020002000200020;
  *((unsigned long *)&__m256i_op1[2]) = 0x0020002000200020;
  *((unsigned long *)&__m256i_op1[1]) = 0x0020002000200020;
  *((unsigned long *)&__m256i_op1[0]) = 0x0020002000200020;
  *((unsigned long *)&__m256i_result[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[2]) = 0x000003fb000003fb;
  *((unsigned long *)&__m256i_result[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[0]) = 0x000003fb000003fb;
  __m256i_out = __lasx_xvdiv_wu (__m256i_op0, __m256i_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((unsigned long *)&__m256i_op0[3]) = 0x1fe01e0100000001;
  *((unsigned long *)&__m256i_op0[2]) = 0x0000000100000001;
  *((unsigned long *)&__m256i_op0[1]) = 0x1fe01e0100000001;
  *((unsigned long *)&__m256i_op0[0]) = 0x0000000100000001;
  *((unsigned long *)&__m256i_op1[3]) = 0x1fe01e0100000001;
  *((unsigned long *)&__m256i_op1[2]) = 0x0000000100000001;
  *((unsigned long *)&__m256i_op1[1]) = 0x1fe01e0100000001;
  *((unsigned long *)&__m256i_op1[0]) = 0x0000000100000001;
  *((unsigned long *)&__m256i_result[3]) = 0x0000000100000001;
  *((unsigned long *)&__m256i_result[2]) = 0x0000000100000001;
  *((unsigned long *)&__m256i_result[1]) = 0x0000000100000001;
  *((unsigned long *)&__m256i_result[0]) = 0x0000000100000001;
  __m256i_out = __lasx_xvdiv_wu (__m256i_op0, __m256i_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((unsigned long *)&__m256i_op0[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op0[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op0[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op0[0]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[3]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_op1[2]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_op1[1]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_op1[0]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_result[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[0]) = 0x0000000000000000;
  __m256i_out = __lasx_xvdiv_wu (__m256i_op0, __m256i_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((unsigned long *)&__m256i_op0[3]) = 0x00000000ff827f80;
  *((unsigned long *)&__m256i_op0[2]) = 0x0000ffff0226823c;
  *((unsigned long *)&__m256i_op0[1]) = 0x00000000ff827f80;
  *((unsigned long *)&__m256i_op0[0]) = 0x0000ffff0226823c;
  *((unsigned long *)&__m256i_op1[3]) = 0x2020202020202020;
  *((unsigned long *)&__m256i_op1[2]) = 0x2020202020202020;
  *((unsigned long *)&__m256i_op1[1]) = 0x2020202020202020;
  *((unsigned long *)&__m256i_op1[0]) = 0x2020202020202020;
  *((unsigned long *)&__m256i_result[3]) = 0x0000000000000007;
  *((unsigned long *)&__m256i_result[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[1]) = 0x0000000000000007;
  *((unsigned long *)&__m256i_result[0]) = 0x0000000000000000;
  __m256i_out = __lasx_xvdiv_wu (__m256i_op0, __m256i_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((unsigned long *)&__m256i_op0[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op0[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op0[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op0[0]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[3]) = 0x007d003e007d003e;
  *((unsigned long *)&__m256i_op1[2]) = 0x007d003effa80010;
  *((unsigned long *)&__m256i_op1[1]) = 0x007d003e007d003e;
  *((unsigned long *)&__m256i_op1[0]) = 0x007d003effa80010;
  *((unsigned long *)&__m256i_result[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[0]) = 0x0000000000000000;
  __m256i_out = __lasx_xvdiv_wu (__m256i_op0, __m256i_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((unsigned long *)&__m256i_op0[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op0[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op0[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op0[0]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[3]) = 0xf800f800f800f800;
  *((unsigned long *)&__m256i_op1[2]) = 0xf800f800f800f800;
  *((unsigned long *)&__m256i_op1[1]) = 0xf800f800f800f800;
  *((unsigned long *)&__m256i_op1[0]) = 0xf800f800f800f800;
  *((unsigned long *)&__m256i_result[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[0]) = 0x0000000000000000;
  __m256i_out = __lasx_xvdiv_wu (__m256i_op0, __m256i_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((unsigned long *)&__m256i_op0[3]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_op0[2]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_op0[1]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_op0[0]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_op1[3]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_op1[2]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_op1[1]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_op1[0]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_result[3]) = 0x0000000100000001;
  *((unsigned long *)&__m256i_result[2]) = 0x0000000100000001;
  *((unsigned long *)&__m256i_result[1]) = 0x0000000100000001;
  *((unsigned long *)&__m256i_result[0]) = 0x0000000100000001;
  __m256i_out = __lasx_xvdiv_wu (__m256i_op0, __m256i_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((unsigned long *)&__m256i_op0[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op0[2]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_op0[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op0[0]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_op1[3]) = 0x0100010001000100;
  *((unsigned long *)&__m256i_op1[2]) = 0x01ffff4300ffff00;
  *((unsigned long *)&__m256i_op1[1]) = 0x0100010001000100;
  *((unsigned long *)&__m256i_op1[0]) = 0x01ffff4300ffff00;
  *((unsigned long *)&__m256i_result[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[2]) = 0x0000008000000100;
  *((unsigned long *)&__m256i_result[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[0]) = 0x0000008000000100;
  __m256i_out = __lasx_xvdiv_wu (__m256i_op0, __m256i_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((unsigned long *)&__m256i_op0[3]) = 0x7fff80007fff0000;
  *((unsigned long *)&__m256i_op0[2]) = 0x0000000000008000;
  *((unsigned long *)&__m256i_op0[1]) = 0x7fff80007fff0000;
  *((unsigned long *)&__m256i_op0[0]) = 0x0000000000008000;
  *((unsigned long *)&__m256i_op1[3]) = 0xfffffffe00000001;
  *((unsigned long *)&__m256i_op1[2]) = 0xfffffffe00000001;
  *((unsigned long *)&__m256i_op1[1]) = 0xfffffffe00000001;
  *((unsigned long *)&__m256i_op1[0]) = 0xfffffffe00000001;
  *((unsigned long *)&__m256i_result[3]) = 0x000000007fff0000;
  *((unsigned long *)&__m256i_result[2]) = 0x0000000000008000;
  *((unsigned long *)&__m256i_result[1]) = 0x000000007fff0000;
  *((unsigned long *)&__m256i_result[0]) = 0x0000000000008000;
  __m256i_out = __lasx_xvdiv_wu (__m256i_op0, __m256i_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((unsigned long *)&__m256i_op0[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op0[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op0[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op0[0]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[3]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_op1[2]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_op1[1]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_op1[0]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_result[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[0]) = 0x0000000000000000;
  __m256i_out = __lasx_xvdiv_wu (__m256i_op0, __m256i_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((unsigned long *)&__m256i_op0[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op0[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op0[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op0[0]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[3]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_op1[2]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_op1[1]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_op1[0]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_result[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[0]) = 0x0000000000000000;
  __m256i_out = __lasx_xvdiv_wu (__m256i_op0, __m256i_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((unsigned long *)&__m256i_op0[3]) = 0x6300000000000000;
  *((unsigned long *)&__m256i_op0[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op0[1]) = 0x6300000000000000;
  *((unsigned long *)&__m256i_op0[0]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[3]) = 0x9cffffffffffffff;
  *((unsigned long *)&__m256i_op1[2]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_op1[1]) = 0x9cffffffffffffff;
  *((unsigned long *)&__m256i_op1[0]) = 0xffffffffffffffff;
  *((unsigned long *)&__m256i_result[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[0]) = 0x0000000000000000;
  __m256i_out = __lasx_xvdiv_du (__m256i_op0, __m256i_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((unsigned long *)&__m256i_op0[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op0[2]) = 0x0001000000010000;
  *((unsigned long *)&__m256i_op0[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op0[0]) = 0x0001000000010000;
  *((unsigned long *)&__m256i_op1[3]) = 0x0000000000000045;
  *((unsigned long *)&__m256i_op1[2]) = 0x00000000000d0005;
  *((unsigned long *)&__m256i_op1[1]) = 0x0000000000000045;
  *((unsigned long *)&__m256i_op1[0]) = 0x00000000000d0005;
  *((unsigned long *)&__m256i_result[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[2]) = 0x0000000013b13380;
  *((unsigned long *)&__m256i_result[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[0]) = 0x0000000013b13380;
  __m256i_out = __lasx_xvdiv_du (__m256i_op0, __m256i_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((unsigned long *)&__m256i_op0[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op0[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op0[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op0[0]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[3]) = 0x00000000ffffffff;
  *((unsigned long *)&__m256i_op1[2]) = 0x00000000ffffffff;
  *((unsigned long *)&__m256i_op1[1]) = 0x00000000ffffffff;
  *((unsigned long *)&__m256i_op1[0]) = 0x00000000ffffffff;
  *((unsigned long *)&__m256i_result[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[0]) = 0x0000000000000000;
  __m256i_out = __lasx_xvdiv_du (__m256i_op0, __m256i_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((unsigned long *)&__m256i_op0[3]) = 0x0000e2e20000e2e2;
  *((unsigned long *)&__m256i_op0[2]) = 0x00011d1c00011d9c;
  *((unsigned long *)&__m256i_op0[1]) = 0x0000e2e20000e2e2;
  *((unsigned long *)&__m256i_op0[0]) = 0x00011d1c00011d9c;
  *((unsigned long *)&__m256i_op1[3]) = 0x0000e2e20000e2e2;
  *((unsigned long *)&__m256i_op1[2]) = 0x00011d1c00011d9c;
  *((unsigned long *)&__m256i_op1[1]) = 0x0000e2e20000e2e2;
  *((unsigned long *)&__m256i_op1[0]) = 0x00011d1c00011d9c;
  *((unsigned long *)&__m256i_result[3]) = 0x0000000000000001;
  *((unsigned long *)&__m256i_result[2]) = 0x0000000000000001;
  *((unsigned long *)&__m256i_result[1]) = 0x0000000000000001;
  *((unsigned long *)&__m256i_result[0]) = 0x0000000000000001;
  __m256i_out = __lasx_xvdiv_du (__m256i_op0, __m256i_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((unsigned long *)&__m256i_op0[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op0[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op0[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op0[0]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op1[3]) = 0x232221201f1e1d1c;
  *((unsigned long *)&__m256i_op1[2]) = 0x1b1a191817161514;
  *((unsigned long *)&__m256i_op1[1]) = 0x232221201f1e1d1c;
  *((unsigned long *)&__m256i_op1[0]) = 0x1b1a191817161514;
  *((unsigned long *)&__m256i_result[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[0]) = 0x0000000000000000;
  __m256i_out = __lasx_xvdiv_du (__m256i_op0, __m256i_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((unsigned long *)&__m256i_op0[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op0[2]) = 0x0000010100000101;
  *((unsigned long *)&__m256i_op0[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_op0[0]) = 0x0000010100000101;
  *((unsigned long *)&__m256i_op1[3]) = 0x0000000100000001;
  *((unsigned long *)&__m256i_op1[2]) = 0x0000000100000001;
  *((unsigned long *)&__m256i_op1[1]) = 0x0000000100000001;
  *((unsigned long *)&__m256i_op1[0]) = 0x0000000100000001;
  *((unsigned long *)&__m256i_result[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[2]) = 0x0000000000000101;
  *((unsigned long *)&__m256i_result[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[0]) = 0x0000000000000101;
  __m256i_out = __lasx_xvdiv_du (__m256i_op0, __m256i_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  *((unsigned long *)&__m256i_op0[3]) = 0x0101010202020203;
  *((unsigned long *)&__m256i_op0[2]) = 0x0101010201010102;
  *((unsigned long *)&__m256i_op0[1]) = 0x0101010202020203;
  *((unsigned long *)&__m256i_op0[0]) = 0x0101010201010102;
  *((unsigned long *)&__m256i_op1[3]) = 0xfffffff0fffffff0;
  *((unsigned long *)&__m256i_op1[2]) = 0xfffffff0fffffff0;
  *((unsigned long *)&__m256i_op1[1]) = 0xfffffff0fffffff0;
  *((unsigned long *)&__m256i_op1[0]) = 0xfffffff0fffffff0;
  *((unsigned long *)&__m256i_result[3]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[2]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[1]) = 0x0000000000000000;
  *((unsigned long *)&__m256i_result[0]) = 0x0000000000000000;
  __m256i_out = __lasx_xvdiv_du (__m256i_op0, __m256i_op1);
  ASSERTEQ_64 (__LINE__, __m256i_result, __m256i_out);

  return 0;
}
