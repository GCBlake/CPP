#include <iostream>
#include <string>

class Franky {
public:
    Franky(int cola_bottles, std::string name = "Franky") : cola_bottles_(cola_bottles), name_(name) {}

    void drink_cola() {
        if (cola_bottles_ > 0) {
            std::cout << "!!!SUUUUUUUUUUUUUUUUUUUUUUUUUUUUUPER!!!" << std::endl;
            cola_bottles_--;
            std::cout << "Now guard yourself... STRONG HAMMER!!" << std::endl;
        } else {
            std::cout << name_ << " is out of cola! Give me cola!" << std::endl;
        }
    }

    void drink_vegetable_juice() {
        std::cout << "FRESH!!! \n That was vegetable juice! Who says Freshness is the best?! \n Damn it! I only take COLA!!! \n " << std::endl;
    }

    void drink_tea() {
        std::cout << "Good smell, Flavour. It makes me super relaxed... \n Wait I don't have time for this! \n I only take COLA!!! \n " << std::endl;
    }

    void say_hello() const {
        std::cout << "I'm " << name_ << ". Waaaaaooooowwww! \n " << std::endl;
    }

private:
    int cola_bottles_;
    std::string name_;
};

int main() {
    Franky franky(3, "Super Franky");
    franky.say_hello();

    int choice = 0;
    while (choice != 2) {
        std::cout << "Give me somthing to drink? (1) Vegetable Juice, (2) Cola, or (3) Tea? \n " << std::endl;
        std::cin >> choice;

        switch (choice) {
            case 1:
                franky.drink_vegetable_juice();
                break;
            case 2:
                franky.drink_cola();
                break;
            case 3:
                franky.drink_tea();
                break;
            default:
                std::cout << "Invalid choice!" << std::endl;
                break;
        }
    }

    return 0;
}