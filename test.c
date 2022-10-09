#include <assert.h>
#include <predicates.h>

static void test_2d()
{
    double v0[2] = {1.0, 2.0};
    double v1[2] = {1.5, 2.0};
    double v2[2] = {0.5, 1.0};
    assert(0.0 != orient2dfast(v0, v1, v2));
    assert(0.0 != orient2d(v0, v1, v2));
}

static void test_3d()
{
    double v0[3] = {1.0, 1.0, 10.1};
    double v1[3] = {1.5, 2.0, 5.1};
    double v2[3] = {0.5, 3.0, 10.1};
    double v3[3] = {0.5, 1.0, 2.1};
    double v4[3] = {1.25, 6.0, 3.1};
    assert(0.0 != orient3dfast(v0, v1, v2, v3));
    assert(0.0 != orient3d(v0, v1, v2, v3));
    assert(0.0 != incirclefast(v0, v1, v2, v3));
    assert(0.0 != incircle(v0, v1, v2, v3));
    assert(0.0 != inspherefast(v0, v1, v2, v3, v4));
    assert(0.0 != insphere(v0, v1, v2, v3, v4));
}

int main()
{
    test_2d();
    test_3d();
}