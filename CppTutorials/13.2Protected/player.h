#pragma once
#include "person.h"
#include <iostream>
#include <string>

class Player: public Person {
    friend std::ostream& operator<<(std::ostream& out, const Player& player);
    public:
        Player() = default;
        Player(std::string_view game_name, std::string_view name);
        ~Player();
    private:
        std::string game_name{};
};