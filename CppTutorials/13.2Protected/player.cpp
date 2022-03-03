#include "person.h"
#include "player.h"

Player::Player(std::string_view game_name, std::string_view name): game_name(game_name){
    this->name = name;
}

Player::~Player(){

}


std::ostream& operator<<(std::ostream& out, const Player& player){
    out << "Player: [game: " << player.game_name << ", name: " << player.getName() << "]";
    return out;
}