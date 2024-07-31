#include <iostream>
#include <string>
#include "Episode.h"

// default constructor
Episode::Episode(): title("None"), number(0), season("None"), length(0){
}

// parametrized constructor
Episode::Episode(std :: string title, int number, std :: string season, int length)
        : title(title), number(number), season(season), length(length) {
}

// destructor
Episode::~Episode() {
}

// getters
std :: string Episode::getTitle() {
    return title;
}

int Episode::getNumber() {
    return number;
}

std :: string Episode::getSeason() {
    return season;
}

int Episode::getLength() {
    return length;
}

// setters
void Episode::setTitle(std :: string title) {
    this-> title = title;
}

void Episode::setNumber(int number) {
    this-> number = number;
}

void Episode::setSeason(std :: string season) {
    this-> season = season;
}

void Episode::setLength(int length) {
    this-> length = length;
}

//display the number of the episode and its title
void Episode::displayEpisode() {
    std::cout << "Episode: " << getNumber();
    std::cout << " \"" << getTitle() << "\"" << std::endl;
}