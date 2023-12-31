void abort (void);
void exit (int);

void
f (double *ty)
{
  *ty = -1.0;
}

int
main (void)
{
  double foo[6];
  double tx = 0.0, ty, d;

  f (&ty);

  if (ty < 0)
    ty = -ty;
  d = (tx > ty) ? tx : ty;
  if (ty != d)
    abort ();
  exit (0);
}
