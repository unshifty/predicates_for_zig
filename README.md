Robust Adaptive Floating-Point Geometric Predicates. 
All credits go to Jonathan Shewchuk (see below).

Modifications applied to the original code:

* Add header file.
* Hardcode constants (thereby remove `exactinit`).
* Modernize function declaration syntax.
* Remove unused functions.
* Mark internal functions `static`.
* `const`-correct function declarations.
* Add CMake installation.
* Add smoke test.


```
            Robust Adaptive Floating-Point Geometric Predicates

                         Jonathan Richard Shewchuk
                         School of Computer Science
                         Carnegie Mellon University
                       Pittsburgh, Pennsylvania 15213

Fast C implementations of four geometric predicates, the 2D and 3D orientation
and incircle tests, are publicly available.  Their inputs are ordinary single
or double precision floating-point numbers.  They owe their speed to two
features.  First, they employ new fast algorithms for arbitrary precision
arithmetic that have a strong advantage over other software techniques in
computations that manipulate values of extended but small precision.  Second,
they are adaptive; their running time depends on the degree of uncertainty of
the result, and is usually small.  These algorithms work on computers whose
floating-point arithmetic uses radix two and exact rounding, including machines
that comply with the IEEE 754 floating-point standard.  Timings of the
predicates, in isolation and embedded in 2D and 3D Delaunay triangulation
programs, verify their effectiveness.


Proceedings of the Twelfth Annual Symposium on Computational Geometry
(Philadelphia, Pennsylvania), pages 141-150, ACM, May 1996.  PostScript (310k).


Paper available through the URL
http://www.cs.berkeley.edu/~jrs/papers/robust-predicates.ps


For additional details and associated software, see the Web page
http://www.cs.cmu.edu/~quake/robust.html
```