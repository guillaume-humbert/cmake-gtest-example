#include "../Example.hpp"

#include <iostream>
#include <string>
#include <gtest/gtest.h>

struct ExampleTests
    : public ::testing::Test
{
    int *repeatChars;

    int GetRepeatChars()
    {
        return *repeatChars;
    }

    virtual void SetUp() override
    {
        // Use the -V flag to display the standard output with ctest.
        std::cout << "SETUP" << std::endl;
        // Don't do this in real, this is just to demonstrate the SetUp() / TearDown()
        // functions.
        repeatChars = new int(100000);
    }

    virtual void TearDown() override
    {
        std::cout << "TEAR DOWN" << std::endl;
        delete repeatChars;
    }
};

TEST_F(ExampleTests, ValidParentheses)
{
    EXPECT_TRUE(validParentheses("{}"));
    EXPECT_TRUE(validParentheses("[]"));
    EXPECT_TRUE(validParentheses("()"));
    EXPECT_TRUE(validParentheses("(){}[]"));
    EXPECT_TRUE(validParentheses("(())()"));
    EXPECT_TRUE(validParentheses("([{}]{()})"));
    EXPECT_TRUE(validParentheses(
        std::string(GetRepeatChars(), '{') + std::string(GetRepeatChars(), '}')));

    EXPECT_FALSE(validParentheses("{"));
    EXPECT_FALSE(validParentheses("}"));
    EXPECT_FALSE(validParentheses("{{}"));
    EXPECT_FALSE(validParentheses("{}}"));
    EXPECT_FALSE(validParentheses("([][)"));
}