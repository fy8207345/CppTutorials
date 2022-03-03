#include "person.h"
#include "player.h"

Player::Player(std::string_view game_name): game_name(game_name){

}

Player::~Player(){

}


std::ostream& operator<<(std::ostream& out, const Player& player){
    out << "Player: [game: " << player.game_name << ", name: " << player.getName() << "]";
    return out;
}