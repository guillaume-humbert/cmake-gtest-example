#include <stack>
#include "Example.hpp"

int square(int x)
{
    return x * x;
}

bool validParentheses(const std::string &s)
{
    std::stack<char> stk;
    for (const auto &c : s)
    {
        switch (c)
        {
        case '{':
            stk.push('}');
            break;
        case '[':
            stk.push(']');
            break;
        case '(':
            stk.push(')');
            break;
        default:
            if (stk.size() == 0 || c != stk.top())
                return false;
            else
                stk.pop();
        }
    }
    return stk.size() == 0;
}