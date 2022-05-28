#include <iostream>
#include <thread>

void hello()
{
    std::cout << "Hello Concurrent World\n";
}

int main()
{
    std::thread t(hello);
    std::cout << "I'm the main()\n" << std::endl;
    t.join();
}
