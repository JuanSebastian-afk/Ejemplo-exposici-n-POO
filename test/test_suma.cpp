#include "src/suma.h"
#include <gtest/gtest.h>

TEST(sumaTest, SumaBasica) {
    EXPECT_EQ(suma(2, 3), 5);
    EXPECT_EQ(suma(-1, 1), 0);
}