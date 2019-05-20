#define CTEST_MAIN
#define CTEST_COLOR_OK
#include "geometry.h"
#include <ctest.h>

int main(int argc, const char** argv)
{
    return ctest_main(argc, argv);
}

CTEST(area_test, result_test)
{
    // Given
    const float x1 = 1;
    const float y1 = 1;
    const float x2 = 1;
    const float y2 = 11;
    const float x3 = 11;
    const float y3 = 1;
    const float P = 20 + sqrt(200);

    // When
    const float result = Area(x1, y1, x2, y2, x3, y3, P);

    // Then
    const float expected = 50;

    ASSERT_EQUAL(expected, result);
}

CTEST(dist_test, result_test)
{
    // Given
    const float x1 = 1;
    const float y1 = 1;
    const float x2 = 1;
    const float y2 = 11;

    // When
    const float result = Dist(x1, y1, x2, y2);

    // Then
    const float expected = 10;

    ASSERT_EQUAL(expected, result);
}

CTEST(triangle_perimetr_test, result_test)
{
    // Given
    const float x1 = 1;
    const float y1 = 1;
    const float x2 = 1;
    const float y2 = 11;
    const float x3 = 11;
    const float y3 = 1;

    // When
    const float result = Perimetr(x1, y1, x2, y2, x3, y3);

    // Then
    const float expected = 20 + sqrt(200);

    ASSERT_EQUAL(expected, result);
}

CTEST(circle_perimetr_test, result_test)
{
    // Given
    const float x = 2;
    const float y = 2;
    const float r = 1;

    // When
    const float result = Perimetr_Circ(x, y, r);

    // Then
    const float expected = 6.28;

    ASSERT_EQUAL(expected, result);
}

CTEST(circle_area_test, result_test)
{
    // Given
    const float x = 2;
    const float y = 2;
    const float r = 1;

    // When
    const float result = Area_Circ(x, y, r);

    // Then
    const float expected = 3.14;

    ASSERT_EQUAL(expected, result);
}