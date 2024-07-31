#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "Series.h"
#include "Video.h"

// default constructor
Series::Series() : Video(), votes(0) {
}

// parametrized constructor
Series::Series(int id, std::string name, std::string genre)
: Video(id, name, genre), votes(0){
}

// destructor
Series::~Series() {
}

// getters
int Series::getVotes() {
    return votes;
}

std::vector <Episode> Series::getListOfEpisodes() {
    return listOfEpisodes;
}

// setters
void Series::setVotes(int votes) {
    this-> votes = votes;
}

void Series::setListOfEpisodes(std::vector <Episode> listOfEpisodes) {
    this-> listOfEpisodes = listOfEpisodes;
}

void Series::addVotes(int values) {
    votes += values;
    numOfVotes++;
}

void Series::getRating() {
    if (numOfVotes == 0) {
        std::cout << "No rating available." << std::endl;
    } else {
        std::cout << "The rating for " << getName() << " is: " << (double) votes / numOfVotes << std::endl;
    }
}


void Series::addEpisode(Episode episode) {
    listOfEpisodes.push_back(episode);
    // it sums the length of the episode given to the length of the series
    setLength(getLength() + episode.getLength());
}

void Series::calculateLength() {
    int totalLength = 0;
    // sums the lengths of every episode in the list
    for (int i = 0; i < listOfEpisodes.size(); i++) {
        totalLength += listOfEpisodes.at(i).getLength();
    }
    setLength(totalLength);
}

void Series::displayInfo() {
    std::cout << "Series: " << getName() << std::endl;
    std::cout << "Id: " << getId() << std::endl;
    std::cout << "Genre: " << getGenre() << std:: endl;

    // vector to store the seasons names without repeating
    std :: vector <std::string> seasonsVector;
    for (int i = 0; i < listOfEpisodes.size(); i++){

        // Only adds season if it is not already in the vector
        // std::find looks for a value between the first and last element of the vector, the result of the value found will be compared
        // with the season of the actual episode in the for value, if the name of the season is not found, it will be added to the vector
        if(std::find(seasonsVector.begin(), seasonsVector.end(), listOfEpisodes.at(i).getSeason()) == seasonsVector.end()){
            seasonsVector.push_back(listOfEpisodes.at(i).getSeason());
        }
    }

    //now we iterate over the vector of seasons and display the episodes of each season
    for (int j = 0; j < seasonsVector.size(); ++j) {
        std::cout << "SEASON: " << seasonsVector.at(j) << std::endl;
        for (int i = 0; i < listOfEpisodes.size(); ++i) {
            if (listOfEpisodes.at(i).getSeason() == seasonsVector.at(j)) {
                listOfEpisodes.at(i).displayEpisode();
            }
        }
    }
    std::cout << "Length: " << getLength() << " minutes." << std::endl;
    getRating();
    std::cout << std::endl;

}