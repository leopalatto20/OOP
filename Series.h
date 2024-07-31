#pragma  once
#include <iostream>
#include <string>
#include <vector>
#include "Video.h"
#include "Episode.h"

class Series : public Video {
private:
    int votes;
    std::vector <Episode> listOfEpisodes;
    double numOfVotes = 0.0;
public:
    Series();
    Series(int id, std::string name, std::string genre);
    ~Series();

    // getters
    int getVotes();
    std::vector <Episode> getListOfEpisodes();

    // setters
    void setVotes(int votes);
    void setListOfEpisodes(std::vector <Episode> listOfEpisodes);

    void getRating() override;
    void addVotes(int values) override;

    void addEpisode(Episode episode);

    // method to calculate the total lenght
    void calculateLength();

    void displayInfo() override;
};