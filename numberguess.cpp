#include<iostream>
#include<random>
#include<ctime>
using namespace std;
class numguess
{
    public:
        void level1();
        void level2();
        void level3();
        int generatenum();
        
};
int numguess::generatenum()
{
    unsigned seed = time(0);
    mt19937 gen(seed);
    uniform_int_distribution<> dis(1,100);
    int random_number=dis(gen);
    return random_number;
}
void numguess::level1()
{
    int secrete=generatenum();
    int predicated;
    int choiceleft=5;
    for(int i=1;i<=5;i++)
    {
        cout<<"enter predicated number:";
        cin>>predicated;
        if(predicated < secrete)
        {
            cout<<"oops!! try again..."<<endl;
            cout<<"secrete number is greater than predicated number"<<endl;
        }
        if(predicated > secrete)
        {
            cout<<"oops!! try again..."<<endl;
            cout<<"secrete number is less than preadicated number"<<endl;
        }
        if(predicated==secrete)
        {
            cout<<"yehh! YOU WON !!"<<endl;
            cout<<"predicated number is equal to secrete number"<<endl;
            break;
        }
        choiceleft--;
        cout<<"choiceleft:"<<choiceleft<<endl;
    }
    if(choiceleft==0)
    {
        cout<<"sorry!! you are not able to find secrete number:"<<endl;
    }
}
void numguess:: level2()
{
    int secrete=generatenum();
    int predicated;
    int choiceleft=7;
    for(int i=1;i<=7;i++)
    {
        cout<<"enter predicated number:";
        cin>>predicated;
        if(predicated < secrete)
        {
            cout<<"oops!! try again..."<<endl;
            cout<<"secrete number is greater than predicated number"<<endl;
        }
        if(predicated > secrete)
        {
            cout<<"oops!! try again..."<<endl;
            cout<<"secrete number is less than preadicated number"<<endl;
        }
        if(predicated==secrete)
        {
            cout<<"yehh! YOU WON !!"<<endl;
            cout<<"predicated number is equal to secrete number"<<endl;
            break;
        }
        choiceleft--;
        cout<<"choiceleft:"<<choiceleft<<endl;
    }
    if(choiceleft==0)
    {
        cout<<"sorry!! you are not able to find secrete number:"<<endl;
    }
}
void numguess::level3()
{
    int secrete=generatenum();
    int predicated;
    int choiceleft=10;
    for(int i=1;i<=10;i++)
    {
        cout<<"enter predicated number:";
        cin>>predicated;
        if(predicated < secrete)
        {
            cout<<"oops!! try again..."<<endl;
            cout<<"secrete number is greater than predicated number"<<endl;
        }
        if(predicated > secrete)
        {
            cout<<"oops!! try again..."<<endl;
            cout<<"secrete number is less than preadicated number"<<endl;
        }
        if(predicated==secrete)
        {
            cout<<"yehh! YOU WON !!"<<endl;
            cout<<"predicated number is equal to secrete number"<<endl;
            break;
        }
        choiceleft--;
        cout<<"choiceleft:"<<choiceleft<<endl;
    }
    if(choiceleft==0)
    {
        cout<<"sorry!! you are not able to find secrete number:"<<endl;
    }
}
int main()
{
    
    numguess t;
    int ch;
    char ans;
    do{
        cout<<"1.level-3"<<endl;
        cout<<"2.level-2"<<endl;
        cout<<"3.level-1"<<endl;
        cout<<"Enter your choice:";
        cin>>ch;
        switch(ch)
        {
            case 1:t.level3();
            break;
            case 2:t.level2();
            break;
            case 3:t.level1();
            break;
            default:
            cout<<"Invalid choice!!";
        }
        cout<<"do you want to continue(y/n):";
        cin>>ans;
    }while(ans=='y');
    return 0;
}