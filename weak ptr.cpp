#include <iostream>
#include <memory>

class MyClass {
public:
    void sayHello() {
        std::cout << "Привіт від weak_ptr!" << std::endl;
    }
};

int main() {
    std::shared_ptr<MyClass> shared = std::make_shared<MyClass>();
    std::weak_ptr<MyClass> weak = shared;

    if (auto locked = weak.lock()) { 
        locked->sayHello();
    }
    else {
        std::cout << "Об'єкт більше не існує" << std::endl;
    }

    return 0;
}
