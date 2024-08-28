#include<iostream>
#include "mines_header.hpp"
 int A[5][5];
int main()
{

    float money{};
    int ch{},mines{};
    char letter{};


    arr_initialization(A);

    while(ch!=4)
    {
        bool a=true;
      std::cout<<"\n ENTER THE NUMBER CORRESPONDING TO YOUR CHOICE: \n 1] read the rules of the game \n 2] PLAY THE GAME \n 3] SEE YOUR MONEY \n 4] QUIT \n";
      std::cin>>ch;
        switch(ch)
        {
        case 1:std::cout<<"WELCOME TO MINES \n IN THIS GAME YOU HAVE TO CHOOSE THE AMOUNT OF MINES TO BE PRESENT OUT OF 25 \n IF YOU ARE ABLE TO GUESS  THE BOXE WITHOUT THE MINE YOU GET AN INCREMENT ON THE MONEY THAT YOU INITIALLY PUT \n HAPPY GAMBLING cough*cough* I MEAN HAPPY GAMING\n ";
                std::cout<<"\n Enter 'y' to check the increment with number of mines \n Enter any other key to exit : \n";
        std::cin>>letter;
        switch(letter)
        {
        case 'y': std::cout<<"mine 1 : increment of 0.02% money \n mine 2 : increment of 0.06% money \n mine 3 : increment of 0.1% money \n mine 4 : increment of 0.15% money \n mine 5 : increment of 0.2% money \n mine 6 : increment of 0.24% money \n mine 7 : increment of 0.3% money \n mine 8 : increment of 0.34% money \n mine 9 : increment of 0.4% money \n mine 10 : increment of 0.45% money \n mine 11 : increment of 0.50% money \n mine 12 : increment of 0.60% money \n mine 13 : increment of 0.70% money \n mine 14 : increment of 0.80% money \n mine 15 : increment of 0.90% money \n mine 16 : increment of 1.0% money \n mine 17 : increment of 1.5% money \n mine 18 : increment of 2.0% money \n mine 19 : increment of 2.5% money \n mine 20 : increment of 3.0% money \n mine 21 : increment of 3.5% money \n mine 22 : increment of 4% money \n mine 23 : increment of 4.5% money \n mine 24 : increment of 5% money \n mine 25 : money=zero ";break;
        default: break;
        }
        break;
        case 2:
        system("clear");
        std::cout<<"\n \n ENTER YOUR MONEY:";
        std::cin>>money;
            do
            {
            std::cout<<"ENTER THE NUMBER OF MINES ONLY FROM [1 to 25]:";
            std::cin>>mines;
            if(mines<=25 && mines>=1)
            break;
            }while(a);

               main_game(money,mines);
               arr_initialization(A);

               break;
        case 3:

        system("clear");
        std::cout<<"YOUR CASH CURRENTLY IS :"<<money;
        break;
        case 4: break;
        default : std::cout<<"invalid choice";
        }
    }
}
