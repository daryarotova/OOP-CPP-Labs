#include "lb1_func.h"
#include <gtest/gtest.h>

TEST(PalindromeTest, SimpleCases) {
    EXPECT_TRUE(palindrom("madam"));
    EXPECT_TRUE(palindrom("Radar"));
    EXPECT_TRUE(palindrom("LeVel"));
}

TEST(PalindromeTest, NotPalindromes) {
    EXPECT_FALSE(palindrom("hello"));
    EXPECT_FALSE(palindrom("world"));
    EXPECT_FALSE(palindrom("barabol"));
}

TEST(PalindromeTest, EdgeCases) {
    EXPECT_TRUE(palindrom(""));
    EXPECT_TRUE(palindrom("a"));
    EXPECT_FALSE(palindrom("ab"));
}

TEST(PalindromeTest, CaseAndSpaces) {
    EXPECT_TRUE(palindrom("Deed"));
    EXPECT_TRUE(palindrom("Noon"));
    EXPECT_FALSE(palindrom("Race car"));
}

TEST(PalindromeTest, LongStrings) {
    EXPECT_TRUE(palindrom("abcdedcbaabcdedcba"));
    EXPECT_FALSE(palindrom("abcdefghijabcdefghij"));
}
