#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    cout<<"\n\nWELCOME TO THE GUESS THE NUMBER GAME\n"<<endl;
    cout<<"Game rules are simple: you just have to guess the correct number between 1 to 100."<<endl;
    cout<<"You have only limited choices."<<endl;
    cout<<"Enter 1 to start the game\t"<<"Enter 0 to end the game"<<endl;
    cout<<"\n\n";
    cout<<"Enter 1 to start: "<<endl;
    while (true) {
        int option;
        cin>>option;
        srand(time(0));
        int randomnumber=(rand() % 100)+1;
        int yournumber;
        if (option==1) {
            int choicesleft=7;

            for (int i=0;i<7;i++) {
                cout<<"Enter your number: ";
                cin>>yournumber;
                if (yournumber==randomnumber) {
                    cout<<"Congratulations!! "<<yournumber<<" is the correct guess"<<endl;
                    cout<<"Thanks for playing!!"<<endl;
                    cout<<"Enter 1 to play again\t"<<"Enter 0 to end the game\t" <<endl;
                    break;
                } else {
                    cout<<"The number "<<yournumber<<" is not the correct guess. Try again."<<endl;
                    if(yournumber>randomnumber) {
                        cout<<"The guess is too high !!"<<endl;
                    } else { 
                        cout<<"The guess is too low !! "<<endl;
                    }
                    choicesleft--;
                    cout<<"You have only "<<choicesleft<<" choices left."<<endl;
                    if (choicesleft==0) {
                        cout<<"You lost!! You couldn't find the correct number."<<randomnumber<<endl;
                        cout<<"\t\t\t Better luck next time!!"<<endl;
                        cout<<"Play again to win."<<endl;
                        cout<<"Enter 1 to play again\t"<<"Enter 0 to end the game\t"<<endl;
                    }
                }
            }
        } else if(option==0) {
            cout<<"\tYou end this game thanks for playing ";
            exit(0);
        } else {
            cout<<"Invalid option. Enter correct option to continue the game (0, 1)"<<endl;
        }
    } 

    return 0;
} 