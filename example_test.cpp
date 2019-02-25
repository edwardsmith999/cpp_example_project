#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include <math.h>

// The fixture for testing class Foo.
class Example_Test : public ::testing::Test {
 protected:

  Example_Test() {
    // You can do set-up work for each test here.
  }
  virtual ~Example_Test() {
    // You can do clean-up work that doesn't throw exceptions here.
  }
};

float square(float x){
    return pow (x, 2.0);
}

TEST_F(Example_Test, test_square) {
    ASSERT_DOUBLE_EQ(4.0, square(2.0));
};






