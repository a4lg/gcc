/* { dg-do compile } */
/* { dg-additional-options "-march=gfx90a -O1" } */
/* { dg-skip-if "incompatible ISA" { *-*-* } { "-march=gfx90[068]" } } */
/* { dg-final { scan-assembler {load[^\n]*a[0-9[]} } } */
/* { dg-final { scan-assembler {store[^\n]*a[0-9[]} } } */

#define TYPE double

#include "avgpr-mem-int.c"
