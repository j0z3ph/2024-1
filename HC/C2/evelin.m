syms V A x(t) B C;
fun = V == A * diff(x, t) + B * x(t) + C;
ini = x(0) == 0;
res = dsolve(fun, ini);
final=subs(res, [A V C B], [0.02 8 0 1]);


