#include<random>
#include<iostream>
#include "mines_header.hpp"

int mine_generator()
{
    std::random_device rd;
    std::seed_seq ss{rd(),rd(),rd(),rd(),rd(),rd(),rd()};
    std::mt19937 mt{ss};
    std::uniform_int_distribution<int>rando{1,25};
    return(rando(mt));
}
void main_game(float& money,int mines)
{
    int index{};
    int B[mines];
    int i{};

    //generation of mines

    for(i=0;i<=mines-1;i++)
        {

           B[i]=mine_generator();
            index=i;
            bool b=true;
          while(b)
          {

              repeat:
              for(int k=0;k<=i;k++)
              {

                  if(B[i]==B[k] && index!=k)
                  {
                  B[i]=mine_generator();
                    b=true;
                    goto repeat;
                    }
                    else
                        b=false;
              }

          }

        }



    int chance{},ch{};
    bool flag=true,mine_found;

// taking the user input as "chance"

i=1;
for(;i<=25-mines;i++)
{


arr_display(A);
std::cout<<"\n Enter your Number:";
std::cin>>chance;
std::cout<<"\n Enter 1 to bet \n Enter 2 to quit\n";
std::cin>>ch;
   if(ch==2)
    break;

 if(chance >= 1 && chance <= 25)
 {
            int row = (chance - 1) / 5;
            int col = (chance - 1) % 5;

            if (A[row][col] != 100)
            {
                mine_found = mine_check(chance, mines, B);
                if (!mine_found)
                {
                    A[row][col] = 100;
                    winner(money, mines);
                }
                else
                {
                    loser(money, mines, B);
                    flag = false;
                }
            }
            else
            {
                std::cout << "\n Position " << chance << " already chosen";
                i--;
            }
        }
  else {
            std::cout << "Invalid position. Choose from 1-25:";
            i--;
        }

 if(!flag)
break;
}
if(i==1)
    loser(money,mines,B);
}


bool mine_check(int chance,int mines,int B[])
{
for(int j=0; j<=mines-1;j++)
        {
        if(chance==B[j])
        return true;  // returns true if mine found
        }
        return false;
}
void loser(float &money,int mines ,int B[])
{
    std::cout<<'\n';
   for(int i=1;i<=5;i++)
    {
    for(int j=1;j<=5;j++)
    {if(j==1 || i==5 || j==5)
    std::cout<<'$';
    else
    std::cout<<' ';
    }
    std::cout<<std::endl;
    }
    std::cout<<std::endl;
    for(int i=1;i<=5;i++)
    {
    for(int j=1;j<=5;j++)
    {
    if(j==1 || i==5)
    std::cout<<'$';
    else
    std::cout<<' ';
    }
    std::cout<<std::endl;
    }
    std::cout<<std::endl;
    for(int i=1; i<=5;i++)
    {
    for(int j=1;j<=5;j++)
    {
    if(i==1 || i==5 || j==1 || j==5)
    std::cout<<'$';
    else
    std::cout<<' ';
    }
    std::cout<<std::endl;
    }
    std::cout<<std::endl;
    for(int i= 1;i<=5;i++)
    {
    for(int j=1;j<=5;j++)
    {
    if(i==1 || i==5 || (i==2&&j==1) || (i==4 && j==5) || i==3)
    std::cout<<'$';
    else
    std::cout<<' ';
    }
    std::cout<<std::endl;
    }
    std::cout<<std::endl;
    for(int i=1; i<=5;i++)
    {
    for(int j=1;j<=5;j++)
    {
    if(i==1 || i==3 || j==1 || i==5)
    std::cout<<'$';
    else
    std::cout<<' ';
    }
    std::cout<<std::endl;
    }
    std::cout<<"MINES WERE AT THE POSITIONS:";
    for(int i=0;i<=mines-1;i++)
    std::cout<<B[i]<<',';
   money=0;
}
void winner(float &money,int mines )
{

    switch(mines)
    {
        case 1:money=money + 0.02*money;break;
        case 2:money=money + 0.06*money;break;
        case 3:money=money + 0.1*money;break;
        case 4:money=money + 0.15*money;break;
        case 5:money=money + 0.2*money;break;
        case 6:money=money + 0.24*money;break;
        case 7:money=money + 0.3*money;break;
        case 8:money=money + 0.34*money;break;
        case 9:money=money + 0.4*money;break;
        case 10:money=money + 0.45*money;break;
        case 11:money=money + 0.50*money;break;
        case 12:money=money + 0.60*money;break;
        case 13:money=money + 0.70*money;break;
        case 14:money=money + 0.80*money;break;
        case 15:money=money + 0.90*money;break;
        case 16:money=money + money;break;
        case 17:money=money+ 1.5*money;break;
        case 18:money=money + 2*money;break;
        case 19:money=money + 2.5*money;break;
        case 20:money=money + 3*money;break;
        case 21:money=money + 3.5*money;break;
        case 22:money=money + 4*money;break;
        case 23:money=money + 4.5*money;break;
        case 24:money=money + 5*money;break;
    }
    system("clear");
    std::cout<<"Current Money = "<<money;

}

void arr_initialization(int A[5][5])
{

    int i,j;
    int count=1;
    for(i=0;i<5;i++)
    {

        for(j=0;j<5;j++)
            {
                A[i][j]=count++;;


            }

    }

}


void arr_display(int A[][5])
{

    std::cout<<'\n';
    for(int k=1;k<=40;k++)
    {
        std::cout<<'_';
    }
    for(int i=0;i<5;i++)
    {
        std::cout<<'\n';

        for(int j=0;j<5;j++)
          {
              std::cout<<'|'<<A[i][j]<<'\t';
          }
        std::cout<<'|';
        std::cout<<'\n';
    for(int k=1;k<=40;k++)
    {
        std::cout<<'_';
    }
    }

}
