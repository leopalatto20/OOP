#include "Movie.h"
#include "Series.h"
#include <iostream>
#include <string>

// default constructor
Movie::Movie() : Video(), votes(0) {
}


// parametrized constructor
Movie::Movie(int id, std::string name, int length, std::string genre) : Video(id, name, length, genre), votes(0) {
}

// destructor
Movie::~Movie() {
}

// getters
int Movie::getVotes() {
    return votes;
}

// setters
void Movie::setVotes(int votes) {
    this-> votes = votes;
}

// sum the number received to the attribute “vote”
void Movie::addVotes(int values) {
    votes += values;
    numOfVotes++;
}

//this function will display the rating of the movie by dividing the sum of the votes by the quantity of votes
void Movie::getRating() {
    if (numOfVotes == 0) {
        std::cout << "No rating available." << std::endl;
    } else {
        std::cout << "The rating for " << getName() << " is: " << (double) votes / numOfVotes << std::endl;
    }
}

void Movie::displayInfo() {
    std::cout << "Movie: " << getName() << std::endl;
    std::cout << "Id: " << getId() << std::endl;
    std::cout << "Genre: " << getGenre() << std::endl;
    std::cout << "Length: " << getLength()  << " minutes." << std::endl;
    getRating();
    std::cout << std::endl;
}