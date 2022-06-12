#include <iostream>

// p. 195
///////////////////
// —ûK–â‘è4-2

// (1)
int sum(int lhs, int rhs); // ‘O•ûéŒ¾

int main()
{
    sum(10, 5);
}

int sum(int lhs, int rhs)
{
    return lhs + rhs;
}

// (2)
class A
{
    int m_v;

public:
    explicit A(int v) : m_v(v)
    {

    }
    int v() const
    {
        return m_v;
    }
};