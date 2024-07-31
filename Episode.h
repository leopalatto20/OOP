#pragma  once
#include <iostream>
#include <string>

class Episode {
private:
    int number;
    std :: string season;
    std :: string title;
    int length;
public:
    Episode();
    Episode(std :: string title, int number, std :: string season, int length);
    ~Episode();

    // getters
    std :: string getTitle(void);
    int getNumber(void);
    std :: string getSeason(void);
    int getLength(void);

    //  setters
    void setTitle(std :: string title);
    void setNumber(int number);
    void setSeason(std :: string season);
    void setLength (int length);

    void displayEpisode();
};