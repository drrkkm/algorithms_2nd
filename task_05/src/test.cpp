#include <gtest/gtest.h>

#include "rmq.hpp"

TEST(RMQ, Simple) {
  std::vector<int> graph{1, 2, 3, 4, 5, 6, 7, 8, 10};
  ASSERT_EQ(RMQ(0, 5, graph), 0);
}

TEST(RMQ, AllElementsSame) {
  std::vector<int> graph{5, 5, 5, 5, 5, 5, 5, 5, 5};
  ASSERT_EQ(RMQ(0, 8, graph), 8);
}

TEST(RMQ, DecreasingOrder) {
  std::vector<int> graph{9, 8, 7, 6, 5, 4, 3, 2, 1};
  ASSERT_EQ(RMQ(2, 6, graph), 6);
}

TEST(RMQ, RandomElements) {
  std::vector<int> graph{1, 3, 5, 7, 9, 2, 4, 6, 8};
  ASSERT_EQ(RMQ(1, 7, graph), 5);
}

TEST(RMQ, AllElementsNegative) {
  std::vector<int> graph{-5, -5, -5, -5, -5, -5, -5, -5, -5};
  ASSERT_EQ(RMQ(0, 8, graph), 8);
}

TEST(RMQ, NegativeAndPositive) {
  std::vector<int> graph{-1, 2, -3, 4, -5, 6, -7, 8, -9};
  ASSERT_EQ(RMQ(0, 8, graph), 8);
}

TEST(RMQ, NegativeDecreasingOrder) {
  std::vector<int> graph{-1, -2, -3, -4, -5, -6, -7, -8, -9};
  ASSERT_EQ(RMQ(2, 6, graph), 6);
}

TEST(RMQ, FifteenElements) {
  std::vector<int> graph{1, 3, 5, 7, 9, 2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
  ASSERT_EQ(RMQ(5, 10, graph), 5);
}

TEST(RMQ, FriendTest) {
  std::vector<int> graph{-50, -40, -30, -20, -10};
  ASSERT_EQ(RMQ(0, 5, graph), 0);
}

TEST(RMQ, GenericTestFirst) {
  std::vector<int> graph{-60, -75, 100, 5,  53, -24, -20, 76,
                         -97, 17,  -10, 58, -6, -61, -3};
  ASSERT_EQ(RMQ(3, 15, graph), 8);
}

TEST(RMQ, GenericTestSecond) {
  std::vector<int> graph{1, 3, 5, 7, 9, 2, 4, 6, 8, 10};
  ASSERT_EQ(RMQ(5, 9, graph), 5);
}

TEST(RMQ, GenericTestThird) {
  std::vector<int> graph{10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
  ASSERT_EQ(RMQ(0, 9, graph), 9);
}

TEST(RMQ, PythonTestFirst) {
  std::vector<int> graph{-19, 3, -92, -86, 88, -53, -58,
                         -36, 7, 82,  -52, 90, -57, 48};
  ASSERT_EQ(RMQ(3, 7, graph), 3);
}

TEST(RMQ, PythonTestSecond) {
  std::vector<int> graph{2, 0, 9, 5, 4, 7, 1, 6, 8, 3};
  ASSERT_EQ(RMQ(5, 8, graph), 6);
}

TEST(RMQ, PythonTestThird) {
  std::vector<int> graph{17, 30, 63, 88, 61, 58, 4, 49, 37, 64};
  ASSERT_EQ(RMQ(3, 6, graph), 6);
}