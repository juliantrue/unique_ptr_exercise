#include <gtest/gtest.h>
#include "unique_ptr.h"

// Demonstrate some basic assertions.
TEST(UniquePtrTest, BasicAssertions) {
  unique_ptr<int> unique_ptr(new int);
}
