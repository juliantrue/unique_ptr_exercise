
cc_library(
    name = "unique_ptr",
    srcs = ["unique_ptr.cc"],
    hdrs = ["unique_ptr.h"],
)

cc_test (
  name = "unique_ptr_test",
  size = "small",
  srcs = ["unique_ptr_test.cc"],
  deps = ["@com_google_googletest//:gtest_main", "unique_ptr"],
)
