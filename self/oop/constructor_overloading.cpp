#include <iostream>

class Kebab{
    public:
    std::string sauce;
    std::string meat;

    Kebab(){

    }

    Kebab(std::string sauce){
        this->sauce = sauce;
    }
    Kebab(std::string sauce, std::string meat){
        this->sauce = sauce;
        this->meat = meat;
    }
};

int main(){

    Kebab kebab1("PiriPiri");
    Kebab kebab2("Ketchup" "Piripiri");
    Kebab kebab3;

    std::cout << kebab1.sauce << std::endl;
    std::cout << kebab2.sauce << std::endl;
    std::cout << kebab2.meat << std::endl;
    return 0;
}