// Benson Chem
// Lab 7
// 11/3/24

#include <iostream>
#include <fstream> //Activates fstream
#include <string>
using namespace std;

int main()
{
    ifstream inFile; //Declares variable inFile
    string name; //The string variable 'name'
    float score_1, score_2, score_3; //The variables for the 3 scores
    float average_score_1, average_score_2, average_score_3; //The calculated values for the scores
    float final_score; //Final score where all the averaged scores get added
    inFile.open("game_scores.txt"); //Opens the text file
    
    for(int i = 1; i <=3; i++) //For loop to run for 3 iterations
    {
        inFile >> name >> score_1 >> score_2 >> score_3; //Grabs the information from the text file

        //Calculations for the scores
        average_score_1 = (score_1 + score_2 + score_3) * 0.2;
        average_score_2 = (score_1 + score_2 + score_3) * 0.3;
        average_score_3 = (score_1 + score_2 + score_3) * 0.5;
        final_score = average_score_1 + average_score_2 + average_score_3;

        //If statements to determine what will be printed depending on the final score value
        if(final_score > 2000)
            cout << name << ": Congrats! You are an Expert!" << endl;
        else if(final_score > 1800 && final_score <= 2000)
            cout << name << ": Master - Good Job!" << endl;
        else if(final_score > 1500 && final_score <= 1800)
            cout << name << ": Advanced - Good Job!" << endl;
        else if(final_score > 1000 && final_score <= 1500)
            cout << name << ": Intermediate" << endl;
        else if(final_score <= 1000)
            cout << name << ": Beginner - Keep Practicing!" << endl;
        else
            cout << name << ": how u break system" << endl; //a bit of fun :P
    }
    return 0;
}
/*
Josh: Congrats! You are an Expert!
Maria: Advanced - Good Job!
Charles: Beginner - Keep Practicing!
*/