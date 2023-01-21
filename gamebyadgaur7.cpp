#include<iostream>
#include<string>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main(){
    string a,b;
    int t;
    string plr1;  
    string s[3]={"rock","paper","scissor"}; 
    string RandString[1];  // want 1 random element at a time  
     srand(time(NULL));    
    cout<<"HELLO #CONNECTIONS!,I AM ADITYA GAUR "<<endl;
    cout<<"I MADE A GAME OF ROCK,PAPER,SCISSOR___HOPE,YOU LIKED IT!"<<endl;
    cout<<" "<<endl;
    cout<<"IT'S A CPU V/S PLAYER GAME"<<endl;
    cout<<"player type your name:"<<endl;
     cin>>plr1;                                     // input name
     cout<<"CPU is your opponent .So, be ready!"<<endl;

    cout<<"how many turns do you wanna play this game:"<<endl;
    cin>>t;                                                      // no. of loops to be executed
    cout<<"Elements are rock , paper , scissor __ it is case sensitive so type as it is given before ;)"<<endl;
    while(t--){
        int x = rand() % 3;            // randomly select 1 out of 3 elements
     b= s[x];                               // i assign the random value x to s[x] and store it in b
    cout<<plr1<<" type your element:"<<endl;
    cin>>a;                                 // here player type element he wants 
    cout<<"You choose "<<a<<endl;
    cout<<"CPU chooses "<<b<<endl;        // CPU got the random element
    if(a==s[0]){                               // if player choose rock 
    if( b==s[0]){                                                       
        cout<<"draw"<<endl;
    }else if( b==s[1]){
        cout<<"CPU wins"<<endl;
    }else if( b==s[2]){
        cout<<plr1<<" wins"<<endl;}
    }
    if(a==s[1]){                            // if player choose paper
     if( b==s[1]){
        cout<<"draw"<<endl;
    }else if( b==s[0]){
        cout<<plr1<<" wins"<<endl;
    }else if(b==s[2]){
        cout<<"CPU wins"<<endl;
    }
    }

    if(a==s[2]){                               // if player choose scissor 
     if(b==s[2]){
        cout<<"draw"<<endl;
    }else if(b==s[0]){
        cout<<"CPU  wins"<<endl;
    }else if(b==s[1]){
        cout<<plr1<<" wins"<<endl;
    }
    }
    cout<<"_________________________";
    cout<<"\n";

    cout<<"NEXT ROUND"<<endl;
    }


  
  cout<<"Hope you like this! "<<"\n"<<endl;
  cout<<"__(*v*)__"<<"\n"<<"\n"<<endl;
 return 0;  
}
