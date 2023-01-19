#include <iostream>
#include <windows.h>
#include <string>
#include <stdlib.h>
#include <fstream>
#include <iomanip>


using namespace std; 
int qstate;

//universal//
void user();
void Enterance();
void Market();
void Sell();
void Auction();
void choice();


class Annonymous{
    public:
    string ID;
    string response;
};

void user(){
    Annonymous Info;
    cout<<endl<<endl<<endl<<endl<<"                                   Name: ";
    cin>>Info.ID;
    system("CLS");
    Enterance();
}

void Enterance(){
    Annonymous Info;
    cout<<"                                          *********************************"<<endl;
    cout<<"                                          |         Night Market          |"<<endl;
    cout<<"                                          *********************************"<<endl;    
     time_t now = time(0);
     char* dt = ctime(&now);
     cout<<"                                               "<< dt << endl;
     cout<<"                                          1. Market Place"<<endl;
     cout<<"                                          2. Selling station"<<endl;
     cout<<"                                          3. Auction House (Work in Progress)"<<endl;
     cout<<"                                                    ";
     cin>>Info.response;
     choice();
}

void choice(){
    Annonymous Info;
    if(Info.response == "1"){
        Market();
    }if(Info.response == "2"){
        Sell();
    }if(Info.response == "3"){
        Auction();
    }
}
//makret place menu//
void Market(){
    cout<<"                                          *********************************"<<endl;
    cout<<"                                          |         Night Market          |"<<endl;
    cout<<"                                          *********************************"<<endl;    
     time_t now = time(0);
     char* dt = ctime(&now);
     cout<<"                                               "<< dt << endl<<endl;
    
}
//selling station//
void Sell(){

}
//Auction house//
void Auction(){



}


int main(){
    user();
}
