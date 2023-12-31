/* Test that declaring a function with () is the same as (void) in C23.
   Invalid use cases.  */
/* { dg-do compile } */
/* { dg-options "-std=c23 -pedantic-errors" } */

void f1 (); /* { dg-message "previous declaration" } */
void f1 (int); /* { dg-error "conflicting types" } */

void f2 (); /* { dg-message "declared here" } */

void
f3 (void)
{
  f2 (1); /* { dg-error "too many arguments" } */
}
