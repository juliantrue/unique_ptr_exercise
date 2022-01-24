#include <gtest/gtest.h>
#include "unique_ptr.h"

// Demonstrate some basic assertions.
TEST(UniquePtrTest, BasicAssertions) {
    
  unique_ptr<int> five = unique_ptr<int>(new int(5));
}
