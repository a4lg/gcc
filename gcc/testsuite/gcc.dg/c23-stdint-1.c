/* Test __STDC_VERSION_STDINT_H__ in C23.  */
/* { dg-do preprocess } */
/* { dg-options "-std=c23 -pedantic-errors -ffreestanding" } */

#include <stdint.h>

#ifndef __STDC_VERSION_STDINT_H__
#error "__STDC_VERSION_STDINT_H__ not defined"
#endif

#if __STDC_VERSION_STDINT_H__ != 202311L
#error "bad value of __STDC_VERSION_STDINT_H__"
#endif
