#include <iostream>
#include <memory>

class MyClass {
public:
    void sayHello() {
        std::cout << "Hello from MyClass!" << std::endl;
    }
};

int main() {
    std::unique_ptr<MyClass> myPtr = std::make_unique<MyClass>();
    myPtr->sayHello(); 

    return 0;
}
