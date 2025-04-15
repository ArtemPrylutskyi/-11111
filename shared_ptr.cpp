#include <iostream>
#include <memory>

class MyClass {
public:
    void sayHello() {
        std::cout << "Привіт від спільного власника!" << std::endl;
    }
};

int main() {
    std::shared_ptr<MyClass> ptr1 = std::make_shared<MyClass>();
    std::shared_ptr<MyClass> ptr2 = ptr1; 

    ptr1->sayHello();
    ptr2->sayHello();

    std::cout << "Кількість власників: " << ptr1.use_count() << std::endl;
    return 0;
}
