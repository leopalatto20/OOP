#include "Video.h"
#include <iostream>
#include <string>

// default constructor
Video::Video() : id(0), name("None"), length(0), genre("None") {
}

// parametrized constructor
Video::Video(int id, std::string name, int length, std::string genre) : id(id), name(name), length(length), genre(genre) {
}

// different constructor for series
Video::Video(int id, std::string name, std::string genre) : id(id), name(name), genre(genre){
    this -> length = 0;
}

// destructor
Video::~Video() {
}


// getters
int Video::getId() {
    return id;
}

std::string Video::getName() {
    return name;
}

int Video::getLength() {
    return length;
}

std::string Video::getGenre() {
    return genre;
}

// setters
void Video::setId(int id) {
    this-> id = id;
}

void Video::setName(std::string name) {
    this-> name = name;
}

void Video::setLength(int length) {
    this-> length = length;
}

void Video::setGenre(std::string genre) {
    this-> genre = genre;
}

void Video::getRating() {
    std::cout << "No rating available." << std::endl;
}

void Video::addVotes(int values) {
    std::cout << "No rating available." << std::endl;
}

void Video::displayInfo() {
    std::cout << "No data found." << std::endl;
}