#include <gtest/gtest.h>

int mani(int* argc, char** argv) {
  testing::InitGoogleTest(argc, argv);
  return RUN_ALL_TESTS();
}

TEST(UnitTesting, first) { 
  ASSERT_TRUE(false); 
}