/*
***********************************************************

Topic   : Program to demonstrate SWITCH CASE in cpp.
Author  : Chpaone09®
Date    : Oct 13, 2020

************************************************************
*/

#include <iostream>
using namespace std;

int main(){
    int ch;
    
    do{
        cout<<"\n\n\t 1. Whale";
        cout<<"\n\n\t 2. Lion";
        cout<<"\n\n\t 3. Dog";
        cout<<"\n\n\t 4. Exit";
        cout<<"\n\n\t Pl. enter your choice >> ";
        cin>>ch;
        switch(ch)
        {
        case 1: cout<<"\n\n\t You picked Whale";break;
        case 2: cout<<"\n\n\t You picked Lion";break;
        case 3: cout<<"\n\n\t You picked Dog";break;
        case 4: break;
        default:cout<<"\n\n\t You picked wrong choice !";break;
        }
        cout<<"\n\n\t to continue press 0 ?>> ";
        cin>>ch;
    }while(ch !=4 || ch == 0);
}
