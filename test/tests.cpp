// Copyright 2025 UNN-CS

#include <gtest/gtest.h>
#include <cstdint>
#include "alg.h"

TEST(st1, sumPrime1) {
  uint64_t res = sumPrime(2000000);
  uint64_t expected = 142913828922;
  EXPECT_EQ(expected, res);
}
TEST(st1, sumPrime2) {
  uint64_t res = sumPrime(10);
  uint64_t expected = 17;
  EXPECT_EQ(expected, res);
}
TEST(st1, sumPrime3) {
  uint64_t res = sumPrime(5);
  uint64_t expected = 5;
  EXPECT_EQ(expected, res);
}
TEST(st1, sumPrime4) {
  uint64_t res = sumPrime(12);
  uint64_t expected = 28;
  EXPECT_EQ(expected, res);
}
ТЕСТ(st1, checkPrime1) {
  ASSERT_TRUE(checkPrime(5));
}
ТЕСТ(st1, checkPrime2) {
  ASSERT_TRUE(checkPrime(2));
}
ТЕСТ(st1, checkPrime3) {
  ASSERT_FALSE(checkPrime(30));
}
ТЕСТ(st1, checkPrime4) {
  ASSERT_FALSE(checkPrime(1005));
}
ТЕСТ(st1, nextPrime1) {
  uint64_t res = nextPrime(6);
  uint64_t ожидается = 7;
  EXPECT_EQ(ожидаемый, повторный);
}
ТЕСТ(st1, nextPrime2) {
  uint64_t res = nextPrime(50);
  uint64_t ожидается = 53;
  EXPECT_EQ(ожидаемый, повторный);
}
ТЕСТ(st1, nextPrime3) {
  uint64_t res = nextPrime(10);
  uint64_t ожидается = 11;
  EXPECT_EQ(ожидаемый, повторный);
}
ТЕСТ(st1, nextPrime4) {
  uint64_t res = nextPrime(1);
  uint64_t ожидается = 2;
  EXPECT_EQ(ожидаемый, повторный);
}
ТЕСТ(st1, nPrime1) {
  uint64_t res = nPrime(3);
  uint64_t ожидается = 5;
  EXPECT_EQ(ожидаемый, повторный);
}
ТЕСТ(st1, nPrime2) {
  uint64_t res = nPrime(20);
  uint64_t ожидается = 71;
  EXPECT_EQ(ожидаемый, повторный);
}
ТЕСТ(st1, nPrime3) {
  uint64_t res = nPrime(25);
  uint64_t ожидается = 97;
  EXPECT_EQ(ожидаемый, повторный);
}
ТЕСТ(st1, nPrime4) {
  uint64_t res = nPrime(32);
  uint64_t ожидается = 131;
  EXPECT_EQ(ожидаемый, повторный);
}

