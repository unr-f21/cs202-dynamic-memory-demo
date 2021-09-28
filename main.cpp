#include <iostream>
#include <memory>

class Penguin {
public:
    Penguin()
    {
        std::cout << "in the constructor" << std::endl;

    }
    ~Penguin(){
        std::cout << "in the destructor" << std::endl;

    }

    int getAge() const {
        return age;
    }

    void setAge(int newAge) {
        age = newAge;
    }

    const std::string &getName() const {
        return name;
    }

    void setName(const std::string &name) {
        Penguin::name = name;
    }

private:
    int age{10};
    std::string name {"Tim"};
};

int main() {

//    std::shared_ptr<Penguin> pPen;
//    {
//        std::shared_ptr<Penguin> pInt;
//        std::cout << pInt->getName() << std::endl;
//        std::cout << pPen.use_count() << std::endl;
//        pPen = pInt;
//        std::cout << pPen.use_count() << std::endl;
//    }
//    std::cout << pPen.use_count() << std::endl;

    return 0;
}
