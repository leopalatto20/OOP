// Leonardo Pérez Palatto   |  A01665462
// Bárbara Romelia Muñoz Bernal  |  A01659348


#include <iostream>
#include <string>
#include <vector>
#include "main.h"

int main() {
    // ************************************************** PROJECT **************************************************
    
    // here we create the objects in the heap memory

    std :: cout << "\n********** Proyect **********" << std:: endl;
    
    // we create 2 objetcts from movie in the heap
    Movie *movie1 = new Movie(8876, "Encanto", 109, "Drama");
    Movie *movie2 = new Movie(8877, "Harry Potter the prisioner of Azkaban", 147, "Fiction");

    // we add votes to each movie
    (*movie1).addVotes(5);
    (*movie1).addVotes(2);
    (*movie1).addVotes(1);
    (*movie1).addVotes(5);
    (*movie1).addVotes(4);

    (*movie2).addVotes(5);
    (*movie2).addVotes(5);
    (*movie2).addVotes(5);
    (*movie2).addVotes(4);
    (*movie2).addVotes(3);

    // we create 2 objects from series to the heap
    Series *serie1 = new Series(3396, "Loki", "Fiction");
    Series *serie2 = new Series(3307, "Paw Patrol", "Action");

    // we create 3 episodes for each series
    Episode *episode1Loki = new Episode("Glorious Purpose", 1, "Season 1", 52);
    Episode *episode2Loki = new Episode("For all time. Always", 6, "Season 1", 47);
    Episode *episode3Loki = new Episode("Breaking Brad", 2, "Season 2", 51);

    Episode *episode1PawPatrol = new Episode("The puppies save the little penguin", 2, "Season 4", 22);
    Episode *episode2PawPatrol = new Episode("The puppies save Jake's cake", 6, "Season 4", 22);
    Episode *episode3PawPatrol = new Episode("The puppies find the genius", 1, "Season 3", 22);


    (*serie1).addVotes(2);
    (*serie1).addVotes(4);
    (*serie1).addVotes(2);
    (*serie1).addVotes(5);
    (*serie1).addVotes(3);

    (*serie2).addVotes(5);
    (*serie2).addVotes(1);
    (*serie2).addVotes(3);
    (*serie2).addVotes(4);
    (*serie2).addVotes(3);

    // we add the episodes to the corresponding series
    (*serie1).addEpisode(*episode1Loki);
    (*serie1).addEpisode(*episode2Loki);
    (*serie1).addEpisode(*episode3Loki);

    (*serie2).addEpisode(*episode1PawPatrol);
    (*serie2).addEpisode(*episode2PawPatrol);
    (*serie2).addEpisode(*episode3PawPatrol);
    
    // we add the movies and series to the video vector
    videosVector.push_back(movie1);
    videosVector.push_back(movie2);
    videosVector.push_back(serie1);
    videosVector.push_back(serie2);

    // we use a range based loop that iterates through each element in the vector, each element is a pointer to a Video object
    // dynamic cast tries to convert the Video pointer to a Movie pointer, if this conversion can be done, it means that the object is a Movie
    // if the movie value is not null, we display the information of the movie
    std::cout << "\nMOVIES: " << std::endl;
    for(Video* video : videosVector){
        Movie* movie = dynamic_cast<Movie*>(video);
        if(movie){
            (*movie).displayInfo();
        }
    }

    // here we are doing the same as before, but now we are using dynamic cast to convert the Video pointer to a Series pointer
    std::cout << "SERIES: " << std::endl;
    for(Video* video : videosVector){
        Series* series = dynamic_cast<Series*>(video);
        if(series){
            (*series).displayInfo();
        }
    }

    // we delete each object
    delete movie1;
    delete episode1Loki;
    delete episode2Loki;
    delete episode3Loki;
    delete episode1PawPatrol;
    delete episode2PawPatrol;
    delete episode3PawPatrol;
    delete movie2;
    delete serie1;
    delete serie2;

    // we empty the pointer
    movie1 = nullptr;
    movie2 = nullptr;
    serie1 = nullptr;
    serie2 = nullptr;
    episode1Loki = nullptr;
    episode2Loki = nullptr;
    episode3Loki = nullptr;
    episode1PawPatrol = nullptr;
    episode2PawPatrol = nullptr;
    episode3PawPatrol = nullptr;


// ************************************************** MENU **************************************************

    // This is where the menu starts, we will be using stack memory from now on

    //we are declaring all the movies and series that we will use inside the menu

    Movie Movie5(2005, "Inside Out", 95, "Animation");
    Movie Movie6(2006, "The Lion King", 89, "Animation");
    Movie Movie7(2007, "Toy Story", 81, "Animation");

    Movie5.addVotes(4);
    Movie5.addVotes(3);
    Movie5.addVotes(5);
    Movie5.addVotes(3);

    Movie6.addVotes(2);
    Movie6.addVotes(2);
    Movie6.addVotes(4);
    Movie6.addVotes(3);

    Movie7.addVotes(4);
    Movie7.addVotes(4);
    Movie7.addVotes(5);
    Movie7.addVotes(3);


    Series Series3(3003, "Breaking Bad", "Criminal Drama");
    Series Series4(3004, "Bridgerton", "Romance");

    Episode Episode1BreakingBad("Start of the end", 1, "Season 1", 58);
    Episode Episode2BreakingBad("Cat's in the bag", 2, "Season 1", 48);
    Episode Episode3BreakingBad("And the bag in the river", 3, "Season 1", 48);
    Episode Episode4BreakingBad("Cancer", 4, "Season 1", 48);
    Episode Episode5BreakingBad("Seven Thirty Seven", 1, "Season 2", 48);
    Episode Episode6BreakingBad("Grilled", 2, "Season 2", 48);
    Episode Episode7BreakingBad("Bit by a dead bee", 3, "Season 2", 48);
    Episode Episode8BreakingBad("Down", 4, "Season 2", 48);


    Episode Episode1Bridgerton("Diamond of the first water", 1, "Season 1", 58);
    Episode Episode2Bridgerton("Shock and delight", 2, "Season 1", 62);
    Episode Episode3Bridgerton("Art of the swoon", 3, "Season 1", 57);
    Episode Episode4Bridgerton("An affair of honor", 4, "Season 1", 61);
    Episode Episode5Bridgerton("Capital R Rake", 1, "Season 2", 58);
    Episode Episode6Bridgerton("Of to the races", 2, "Season 2", 59);
    Episode Episode7Bridgerton("A bee in your bonnet ", 3, "Season 2", 60);
    Episode Episode8Bridgerton("Victory", 4, "Season 2", 61);

    // we add the votes
    Series3.addVotes(5);
    Series3.addVotes(5);
    Series3.addVotes(5);
    Series3.addVotes(2);

    Series4.addVotes(5);
    Series4.addVotes(4);
    Series4.addVotes(5);
    Series4.addVotes(4);

    // we add the episodes to the series
    Series3.addEpisode(Episode1BreakingBad);
    Series3.addEpisode(Episode2BreakingBad);
    Series3.addEpisode(Episode3BreakingBad);
    Series3.addEpisode(Episode4BreakingBad);
    Series3.addEpisode(Episode5BreakingBad);
    Series3.addEpisode(Episode6BreakingBad);
    Series3.addEpisode(Episode7BreakingBad);
    Series3.addEpisode(Episode8BreakingBad);

    Series4.addEpisode(Episode1Bridgerton);
    Series4.addEpisode(Episode2Bridgerton);
    Series4.addEpisode(Episode3Bridgerton);
    Series4.addEpisode(Episode4Bridgerton);
    Series4.addEpisode(Episode5Bridgerton);
    Series4.addEpisode(Episode6Bridgerton);
    Series4.addEpisode(Episode7Bridgerton);
    Series4.addEpisode(Episode8Bridgerton);

    // we calculate the length of the series
    Series3.calculateLength();
    Series4.calculateLength();

    // we create a vector to store the movies and then add the movies created previously to the vector
    std::vector <Movie> moviesVector;
    moviesVector.push_back(Movie5);
    moviesVector.push_back(Movie6);
    moviesVector.push_back(Movie7);

    // we do the same but with series
    std::vector <Series> seriesVector;
    seriesVector.push_back(Series3);
    seriesVector.push_back(Series4);

    std::cout << "********** Menu **********" << std::endl;
std::cout << "\nPlease type your name to login: ";
    getline(std::cin, name);
    std::cout << "Welcome " << name << "!" << std::endl;

    // we use a while loop, and while "running" is true it will run the loop until it is false
    while(running){
        std::cout << "\nPlease select an option: " << std::endl;
        std::cout << "1. Display all movies" << std::endl;
        std::cout << "2. Display all series" << std::endl;
        std::cout << "3. Vote" << std::endl;
        std::cout << "4. Exit" << std::endl;
        std::cout << "Type your option: ";
        // we use the function created to check the input given with the range from 1 to 4
        option = isValidOption(1, 4);
            switch(option){
                case 1:
                    // if the users chooses this option, it will display the movies
                    std::cout << "\nMOVIES: " << std::endl;
                    for(Movie movie : moviesVector){
                        movie.displayInfo();
                    }
                    break;
                case 2:
                    // if the users chooses this option, it will display the series
                    std::cout << "\nSERIES: " << std::endl;
                    for(Series series : seriesVector){
                        series.displayInfo();
                    }
                    break;
                case 3:
                     // if the users chooses this option, the user will have to choose the series or movie they want to vote

                    // prints all the movies names
                    std :: cout << std::endl;
                    for(int i = 0; i < moviesVector.size(); i++){
                    std::cout << i + 1 << ". " << moviesVector.at(i).getName() << std::endl;
                    }
                    // prints all the series names
                    for(int i = 0; i < seriesVector.size(); i++){
                        std::cout << i + 1 + moviesVector.size() << ". " << seriesVector.at(i).getName() << std::endl;
                    }

                    std::cout << "\nPlease select a movie or series to vote: ";
                    // function to validate the option. The range will be from 1 to the sum of the total numebers of movies and series
                    optionVote = isValidOption(1, moviesVector.size() + seriesVector.size());
                    if(optionVote <= moviesVector.size()){
                        std::cout << "Type your vote (1/5): ";
                        // validates the option
                        voteValue = isValidOption(1, 5);
                        // we send the vote the user gave and the reference of the object movie
                        addVoteToMovie(voteValue, moviesVector.at(optionVote - 1));
                        // we print the total rating
                        moviesVector.at(optionVote - 1).getRating();
                    } else {
                        std::cout << "Type your vote (1/5): ";
                        // validates the option
                        voteValue = isValidOption(1, 5);
                        // we send the vote the user gave and the reference of the object series
                        addVoteToSeries(voteValue, seriesVector.at(optionVote - moviesVector.size() - 1));
                        // we print the total rating
                        seriesVector.at(optionVote - moviesVector.size() - 1).getRating();
                    }
                    std::cout << "Thanks for voting!" << std::endl;
                    break;

                case 4:
                    // if this option is choosen we verify if they really want to exit or not
                    std::cout << "\nAre you sure you want to exit? (y/n): ";
                    while(!(std::cin >> exitOption) ||
                    ((exitOption != 'y') && (exitOption != 'Y') && (exitOption != 'n') && (exitOption != 'N'))){
                        std:: cout << std::endl;
                        std::cin.clear();
                        std::cin.ignore(1000, '\n');
                        std::cout << "Invalid option. Please try again: ";
                    }
                    if(exitOption == 'y' || exitOption == 'Y'){
                        std::cout << "Goodbye " << name << "!" << std::endl;
                        running = false;
                    }
                    else{
                        std::cin.ignore(1000, '\n');
                    }
                    break;
            }
    }
    return 0;
}

int isValidOption(int lowerBound, int upperBound){
    double option;
    //the loop repeats until the option is between both bounds, and only if it is a whole number
    //the static cast int condition is used to compare the value given with its integer part
    // if it is the same, it means it is a whole number, so we can accept it
    while (!(std::cin >> option) || option < lowerBound || option > upperBound || static_cast<int>(option) != option){
        std::cout << std::endl;
        //if the function receives an invalid input, cin clear and cin ignore
        // clear the error state and ignore the rest of the line
        std::cin.clear();
        std::cin.ignore(1000, '\n');
        std::cout << "\nInvalid option. Please try again: ";
    }
    //static_cast<int> converts the double value that we received into an integer, so it can be sent to the rest of the code
    return static_cast<int>(option);
}

//here we have to send the reference of the object we want to modify
//if we send the object itself, it will create a copy of the object and modify the copy
// this means that the changes will not be done inside the original object and the changes will be lost
void addVoteToMovie(int voteValue, Movie& movie){
    movie.addVotes(voteValue);
}

void addVoteToSeries(int voteValue, Series& series){
    series.addVotes(voteValue);
}