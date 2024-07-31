#pragma once
#include <iostream>
#include <string>


class Video {
    private:
        int id;
        std::string name;
        int length;
        std::string genre;
    public:
        Video();
        Video(int id, std::string name, int length, std::string genre);
        Video(int id, std::string name, std::string genre);
        virtual ~Video();

        // getters
        int getId();
        std::string getName();
        int getLength();
        std::string getGenre();

        // setters
        void setId(int id);
        void setName(std::string name);
        void setLength(int length);
        void setGenre(std::string genre);

        virtual void getRating();
        virtual void addVotes(int values);

        // method to display de info using virtual
        virtual void displayInfo();
};