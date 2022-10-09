#pragma once

#ifdef __cplusplus
extern "C"
{
#endif
    double orient2dfast(const double* pa, const double* pb, const double* pc);

    double orient2d(const double* pa, const double* pb, const double* pc);

    double orient3dfast(const double* pa, const double* pb, const double* pc, const double* pd);

    double orient3d(const double* pa, const double* pb, const double* pc, const double* pd);

    double incirclefast(const double* pa, const double* pb, const double* pc, const double* pd);

    double incircle(const double* pa, const double* pb, const double* pc, const double* pd);

    double inspherefast(const double* pa, const double* pb, const double* pc, const double* pd, const double* pe);

    double insphere(const double* pa, const double* pb, const double* pc, const double* pd, const double* pe);
#ifdef __cplusplus
}
#endif
