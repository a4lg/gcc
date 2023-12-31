/* { dg-do compile } */
/* { dg-additional-options "-march=rv64gcv_zvl4096b -mabi=lp64d -fno-schedule-insns -fno-schedule-insns2" } */
/* { dg-final { check-function-bodies "**" "" } } */

#include <stdint-gcc.h>

typedef int16_t vnx2048hi __attribute__ ((vector_size (2048 * 2)));

/*
** f_vnx2048hi:
**   ...
**   vsetvli\s+[atx][0-9]+,\s*zero,\s*e32,\s*m8,\s*ta,\s*ma
**   vmv\.v\.x\s+v[0-9]+,\s*[axt][0-9]+
**   vs8r\.v\s+v[0-9]+,\s*0\([axt][0-9]+\)
**   ret
*/
__attribute__ ((noipa)) void
f_vnx2048hi (int16_t a, int16_t b, int16_t *out)
{
  vnx2048hi v = {
    a, b, a, b, a, b, a, b, a, b, a, b, a, b, a, b,
    a, b, a, b, a, b, a, b, a, b, a, b, a, b, a, b,
    a, b, a, b, a, b, a, b, a, b, a, b, a, b, a, b,
    a, b, a, b, a, b, a, b, a, b, a, b, a, b, a, b,
    a, b, a, b, a, b, a, b, a, b, a, b, a, b, a, b,
    a, b, a, b, a, b, a, b, a, b, a, b, a, b, a, b,
    a, b, a, b, a, b, a, b, a, b, a, b, a, b, a, b,
    a, b, a, b, a, b, a, b, a, b, a, b, a, b, a, b,
    a, b, a, b, a, b, a, b, a, b, a, b, a, b, a, b,
    a, b, a, b, a, b, a, b, a, b, a, b, a, b, a, b,
    a, b, a, b, a, b, a, b, a, b, a, b, a, b, a, b,
    a, b, a, b, a, b, a, b, a, b, a, b, a, b, a, b,
    a, b, a, b, a, b, a, b, a, b, a, b, a, b, a, b,
    a, b, a, b, a, b, a, b, a, b, a, b, a, b, a, b,
    a, b, a, b, a, b, a, b, a, b, a, b, a, b, a, b,
    a, b, a, b, a, b, a, b, a, b, a, b, a, b, a, b,
    a, b, a, b, a, b, a, b, a, b, a, b, a, b, a, b,
    a, b, a, b, a, b, a, b, a, b, a, b, a, b, a, b,
    a, b, a, b, a, b, a, b, a, b, a, b, a, b, a, b,
    a, b, a, b, a, b, a, b, a, b, a, b, a, b, a, b,
    a, b, a, b, a, b, a, b, a, b, a, b, a, b, a, b,
    a, b, a, b, a, b, a, b, a, b, a, b, a, b, a, b,
    a, b, a, b, a, b, a, b, a, b, a, b, a, b, a, b,
    a, b, a, b, a, b, a, b, a, b, a, b, a, b, a, b,
    a, b, a, b, a, b, a, b, a, b, a, b, a, b, a, b,
    a, b, a, b, a, b, a, b, a, b, a, b, a, b, a, b,
    a, b, a, b, a, b, a, b, a, b, a, b, a, b, a, b,
    a, b, a, b, a, b, a, b, a, b, a, b, a, b, a, b,
    a, b, a, b, a, b, a, b, a, b, a, b, a, b, a, b,
    a, b, a, b, a, b, a, b, a, b, a, b, a, b, a, b,
    a, b, a, b, a, b, a, b, a, b, a, b, a, b, a, b,
    a, b, a, b, a, b, a, b, a, b, a, b, a, b, a, b,
    a, b, a, b, a, b, a, b, a, b, a, b, a, b, a, b,
    a, b, a, b, a, b, a, b, a, b, a, b, a, b, a, b,
    a, b, a, b, a, b, a, b, a, b, a, b, a, b, a, b,
    a, b, a, b, a, b, a, b, a, b, a, b, a, b, a, b,
    a, b, a, b, a, b, a, b, a, b, a, b, a, b, a, b,
    a, b, a, b, a, b, a, b, a, b, a, b, a, b, a, b,
    a, b, a, b, a, b, a, b, a, b, a, b, a, b, a, b,
    a, b, a, b, a, b, a, b, a, b, a, b, a, b, a, b,
    a, b, a, b, a, b, a, b, a, b, a, b, a, b, a, b,
    a, b, a, b, a, b, a, b, a, b, a, b, a, b, a, b,
    a, b, a, b, a, b, a, b, a, b, a, b, a, b, a, b,
    a, b, a, b, a, b, a, b, a, b, a, b, a, b, a, b,
    a, b, a, b, a, b, a, b, a, b, a, b, a, b, a, b,
    a, b, a, b, a, b, a, b, a, b, a, b, a, b, a, b,
    a, b, a, b, a, b, a, b, a, b, a, b, a, b, a, b,
    a, b, a, b, a, b, a, b, a, b, a, b, a, b, a, b,
    a, b, a, b, a, b, a, b, a, b, a, b, a, b, a, b,
    a, b, a, b, a, b, a, b, a, b, a, b, a, b, a, b,
    a, b, a, b, a, b, a, b, a, b, a, b, a, b, a, b,
    a, b, a, b, a, b, a, b, a, b, a, b, a, b, a, b,
    a, b, a, b, a, b, a, b, a, b, a, b, a, b, a, b,
    a, b, a, b, a, b, a, b, a, b, a, b, a, b, a, b,
    a, b, a, b, a, b, a, b, a, b, a, b, a, b, a, b,
    a, b, a, b, a, b, a, b, a, b, a, b, a, b, a, b,
    a, b, a, b, a, b, a, b, a, b, a, b, a, b, a, b,
    a, b, a, b, a, b, a, b, a, b, a, b, a, b, a, b,
    a, b, a, b, a, b, a, b, a, b, a, b, a, b, a, b,
    a, b, a, b, a, b, a, b, a, b, a, b, a, b, a, b,
    a, b, a, b, a, b, a, b, a, b, a, b, a, b, a, b,
    a, b, a, b, a, b, a, b, a, b, a, b, a, b, a, b,
    a, b, a, b, a, b, a, b, a, b, a, b, a, b, a, b,
    a, b, a, b, a, b, a, b, a, b, a, b, a, b, a, b,
    a, b, a, b, a, b, a, b, a, b, a, b, a, b, a, b,
    a, b, a, b, a, b, a, b, a, b, a, b, a, b, a, b,
    a, b, a, b, a, b, a, b, a, b, a, b, a, b, a, b,
    a, b, a, b, a, b, a, b, a, b, a, b, a, b, a, b,
    a, b, a, b, a, b, a, b, a, b, a, b, a, b, a, b,
    a, b, a, b, a, b, a, b, a, b, a, b, a, b, a, b,
    a, b, a, b, a, b, a, b, a, b, a, b, a, b, a, b,
    a, b, a, b, a, b, a, b, a, b, a, b, a, b, a, b,
    a, b, a, b, a, b, a, b, a, b, a, b, a, b, a, b,
    a, b, a, b, a, b, a, b, a, b, a, b, a, b, a, b,
    a, b, a, b, a, b, a, b, a, b, a, b, a, b, a, b,
    a, b, a, b, a, b, a, b, a, b, a, b, a, b, a, b,
    a, b, a, b, a, b, a, b, a, b, a, b, a, b, a, b,
    a, b, a, b, a, b, a, b, a, b, a, b, a, b, a, b,
    a, b, a, b, a, b, a, b, a, b, a, b, a, b, a, b,
    a, b, a, b, a, b, a, b, a, b, a, b, a, b, a, b,
    a, b, a, b, a, b, a, b, a, b, a, b, a, b, a, b,
    a, b, a, b, a, b, a, b, a, b, a, b, a, b, a, b,
    a, b, a, b, a, b, a, b, a, b, a, b, a, b, a, b,
    a, b, a, b, a, b, a, b, a, b, a, b, a, b, a, b,
    a, b, a, b, a, b, a, b, a, b, a, b, a, b, a, b,
    a, b, a, b, a, b, a, b, a, b, a, b, a, b, a, b,
    a, b, a, b, a, b, a, b, a, b, a, b, a, b, a, b,
    a, b, a, b, a, b, a, b, a, b, a, b, a, b, a, b,
    a, b, a, b, a, b, a, b, a, b, a, b, a, b, a, b,
    a, b, a, b, a, b, a, b, a, b, a, b, a, b, a, b,
    a, b, a, b, a, b, a, b, a, b, a, b, a, b, a, b,
    a, b, a, b, a, b, a, b, a, b, a, b, a, b, a, b,
    a, b, a, b, a, b, a, b, a, b, a, b, a, b, a, b,
    a, b, a, b, a, b, a, b, a, b, a, b, a, b, a, b,
    a, b, a, b, a, b, a, b, a, b, a, b, a, b, a, b,
    a, b, a, b, a, b, a, b, a, b, a, b, a, b, a, b,
    a, b, a, b, a, b, a, b, a, b, a, b, a, b, a, b,
    a, b, a, b, a, b, a, b, a, b, a, b, a, b, a, b,
    a, b, a, b, a, b, a, b, a, b, a, b, a, b, a, b,
    a, b, a, b, a, b, a, b, a, b, a, b, a, b, a, b,
    a, b, a, b, a, b, a, b, a, b, a, b, a, b, a, b,
    a, b, a, b, a, b, a, b, a, b, a, b, a, b, a, b,
    a, b, a, b, a, b, a, b, a, b, a, b, a, b, a, b,
    a, b, a, b, a, b, a, b, a, b, a, b, a, b, a, b,
    a, b, a, b, a, b, a, b, a, b, a, b, a, b, a, b,
    a, b, a, b, a, b, a, b, a, b, a, b, a, b, a, b,
    a, b, a, b, a, b, a, b, a, b, a, b, a, b, a, b,
    a, b, a, b, a, b, a, b, a, b, a, b, a, b, a, b,
    a, b, a, b, a, b, a, b, a, b, a, b, a, b, a, b,
    a, b, a, b, a, b, a, b, a, b, a, b, a, b, a, b,
    a, b, a, b, a, b, a, b, a, b, a, b, a, b, a, b,
    a, b, a, b, a, b, a, b, a, b, a, b, a, b, a, b,
    a, b, a, b, a, b, a, b, a, b, a, b, a, b, a, b,
    a, b, a, b, a, b, a, b, a, b, a, b, a, b, a, b,
    a, b, a, b, a, b, a, b, a, b, a, b, a, b, a, b,
    a, b, a, b, a, b, a, b, a, b, a, b, a, b, a, b,
    a, b, a, b, a, b, a, b, a, b, a, b, a, b, a, b,
    a, b, a, b, a, b, a, b, a, b, a, b, a, b, a, b,
    a, b, a, b, a, b, a, b, a, b, a, b, a, b, a, b,
    a, b, a, b, a, b, a, b, a, b, a, b, a, b, a, b,
    a, b, a, b, a, b, a, b, a, b, a, b, a, b, a, b,
    a, b, a, b, a, b, a, b, a, b, a, b, a, b, a, b,
    a, b, a, b, a, b, a, b, a, b, a, b, a, b, a, b,
    a, b, a, b, a, b, a, b, a, b, a, b, a, b, a, b,
    a, b, a, b, a, b, a, b, a, b, a, b, a, b, a, b,
    a, b, a, b, a, b, a, b, a, b, a, b, a, b, a, b,
    a, b, a, b, a, b, a, b, a, b, a, b, a, b, a, b,
    a, b, a, b, a, b, a, b, a, b, a, b, a, b, a, b,
  };
  *(vnx2048hi *) out = v;
}
