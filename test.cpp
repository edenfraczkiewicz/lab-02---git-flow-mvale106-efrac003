#include "c-echo.h"

#include "gtest/gtest.h"

TEST(EchoTest, HelloWorld) {
    char* test_val[3]; test_val[0] = "./c-echo"; test_val[1] = "hello"; test_val[2] = "world";
    EXPECT_EQ("hello world", echo(3,test_val));
}

TEST(EchoTest, EmptyString) {
    char* test_val[1]; test_val[0] = "./c-echo";
    EXPECT_EQ("", echo(1,test_val));
}

TEST(EchoTest, NumsOnly)
{
    char* test_val[3]; test_val[0] = "./c-echo"; test_val[1] = "12345"; test_val[2] = "67890";
    EXPECT_EQ("12345 67890" , echo(3, test_val));
}

TEST(EchoTest, UpperAndLowerCase)
{
    char* test_val[3]; test_val[0] = "./c-echo"; test_val[1] = "HeLlO"; test_val[2] = "wOrLd";

    EXPECT_EQ("HeLlO wOrLd" , echo(3, test_val));
}

TEST(EchoTest, OnlySpaces)
{
    char* test_val[3]; test_val[0] = "./c-echo"; test_val[1] = "     "; test_val[2] = "     ";
    EXPECT_EQ("           " , echo(3, test_val));
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

