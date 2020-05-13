#include "game_number.hpp"

bool GameNumber::operator==(const GameNumber& other) {
        return get_float() == other.get_float();
}
bool GameNumber::operator!=(const GameNumber& other) {
        return get_float() != other.get_float();
}
bool GameNumber::operator<(const GameNumber& other) {
        return get_float() < other.get_float();
}
bool GameNumber::operator<=(const GameNumber& other) {
        return *this == other || *this < other;
}
bool GameNumber::operator>=(const GameNumber& other) {
        return *this == other || *this > other;
}
bool GameNumber::operator>(const GameNumber& other) {
        return get_float() > other.get_float();
}

