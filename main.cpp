#include <iostream>
#include <vector>
#include <memory>

// Базовий клас "Птах"
class Bird {
public:
    virtual void fly() const {
        std::cout << "This bird can fly." << std::endl;
    }
    virtual ~Bird() = default;
};

// Підклас "Горобець"
class Sparrow : public Bird {
public:
    void fly() const override {
        std::cout << "Sparrow is flying." << std::endl;
    }
};

// Підклас "Орел"
class Eagle : public Bird {
public:
    void fly() const override {
        std::cout << "Eagle is soaring high." << std::endl;
    }
};

// Порушення LSP: Пінгвін не літає, але успадковує Bird
class Penguin : public Bird {
public:
    void fly() const override {
        std::cout << "Penguin cannot fly! (LSP violation)" << std::endl;
    }
};

int main() {
    std::vector<std::shared_ptr<Bird>> birds;
    birds.push_back(std::make_shared<Sparrow>());
    birds.push_back(std::make_shared<Eagle>());
    birds.push_back(std::make_shared<Penguin>()); // тут порушення LSP

    for (const auto& bird : birds) {
        bird->fly();
    }

    return 0;
}
