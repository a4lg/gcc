/* Contributed by Kris Van Hees <kris.van.hees@oracle.com> */
/* Expected errors for char32_t character constants. */
/* { dg-do compile { target c++11 } } */

const static char32_t	c0 = U'';		/* { dg-error "empty character" } */
const static char32_t	c1 = U'ab';		/* { dg-error "multi-character literal cannot have an encoding prefix" } */
const static char32_t	c2 = U'\U00064321';

const static char32_t	c3 = 'a';
const static char32_t	c4 = u'a';
const static char32_t	c5 = u'\u2029';
const static char32_t	c6 = u'\U00064321';	/* { dg-error "character not encodable in a single code unit" } */
const static char32_t	c7 = L'a';
const static char32_t	c8 = L'\u2029';
const static char32_t	c9 = L'\U00064321';     /* { dg-warning "character not encodable in a single code unit" "" { target { { ! 4byte_wchar_t } && c++20_down } } } */
						/* { dg-error "character not encodable in a single code unit" "" { target { { ! 4byte_wchar_t } && c++23 } } .-1 } */

int main () {}
