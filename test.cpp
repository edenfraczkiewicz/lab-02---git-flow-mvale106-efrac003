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

TEST(EchoTest, Numbers) {
	char* test_val[3]; test_val[0] = "./c-echo"; test_val[1] = "1234"; test_val[2] = "5678";
	EXPECT_EQ("1234 5678", echo(3,test_val));
}

TEST(EchoTest, Sentence) {
        char* test_val[10]; test_val[0] = "./c-echo"; test_val[1] = "Hello!"; test_val[2] = "My"; test_val[3] = "name"; test_val[4] = "is"; test_val[5] = "Eden."; test_val[6] = "What"; test_val[7] = "is"; test_val[8] = "your"; test_val[9] = "name?";
        EXPECT_EQ("Hello! My name is Eden. What is your name?", echo(10,test_val));
}

TEST(EchoTest, AllCaps) {
        char* test_val[3]; test_val[0] = "./c-echo"; test_val[1] = "HELLO"; test_val[2] = "WORLD!";
        EXPECT_EQ("HELLO WORLD!", echo(3,test_val));
}


int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
