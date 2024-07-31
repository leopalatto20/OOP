#pragma once
#include "Video.h"
#include <iostream>
#include <string>
#include <limits>


class Movie : public Video{
    private:
        int votes;
        double numOfVotes = 0.0;
    public:
        Movie();
        Movie(int id, std::string name, int length, std::string genre);
        ~Movie();

        // setters
        int getVotes();

        // getters
        void setVotes(int votes);

        void getRating() override;
        void addVotes(int values) override;

        void displayInfo() override;
};
