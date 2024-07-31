#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "Movie.h"
#include "Episode.h"
#include "Series.h"
int isValidOption(int upperBound, int lowerBound);

//video vector that we use to store all the objects in the program
std::vector <Video*> videosVector;

//variables that we use in the main.cpp
std::string name;
int option;
bool running = true;
int optionVote;
int voteValue;
char exitOption;
void addVoteToMovie(int voteValue, Movie& movie);
void addVoteToSeries(int voteValue, Series& series);