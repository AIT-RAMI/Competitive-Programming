#include <iostream>
#include <stack>
#include <string>

int main(int argc, const char *argv[])
{
    std::stack<int> stack;
    stack.push(1); 
    stack.push(3); 
    stack.push(7); 
    stack.push(19); 

    for (std::stack<int> dump = stack; !dump.empty(); dump.pop())
        std::cout << dump.top() << '\n';

    std::cout << "(" << stack.size() << " elements)\n";

    return 0;
}
