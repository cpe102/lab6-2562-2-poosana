//Dialog of the first example is given below.

/*
Fahsai: Sawadee ka...Can you tell me your name?
?????: Luke Skywalker
Fahsai: Wow!!! Luke Skywalker that is a really cool name.
Fahsai: I think you are Engineering student. What is your student ID?
Luke Skywalker: 590610999
Fahsai: I think you may be GEAR 47.  I have a free movie tickets for you. 
Fahsai: Let's go to cinema together!!! 
Fahsai: What movie do you want to watch?
Luke Skywalker: Star Wars VII
Fahsai: So....which day are you free to go with me?
Luke Skywalker: Next Monday
Fahsai: Next Monday....that is OK!!! I'm looking forward to watch Star Wars VII with you.
Luke Skywalker: May the Force be with you krub
Fahsai: 555+ see you Next Monday. Bye Bye \(^ ^)/ 
*/

#include<iostream>
#include<string>
using namespace std;

int main(){
    string name,ans,movie,idiom;
    int ID,GEAR;
  
    cout << "Fahsai: Sawadee ka...Can you tell me your name?"<< endl;
    cout << "?????: ";
// getline ไม่ได้
    cin >> name ;
    cout << "Fahsai: Wow!!! "<< name <<" that is a really cool name."<<endl;
    cout << "Fahsai: I think you are Engineering student. What is your student ID?"<<endl;
    cout << name <<":";
    cin >> ID;
    
    GEAR = (ID/10000000)-12;
    cout << "Fahsai: I think you may be GEAR"<<GEAR<<". I have a free movie tickets for you"<<"\nFahsai: Let's go to cinema together!!!"<<"\nFahsai: What movie do you want to watch?"<<endl;
    cout << name <<":";
    cin >> movie;
    cout << "Fahsai: So....which day are you free to go with me?"<<endl;
    cout << name <<":";
    cin >> ans;
    cout <<"Fahsai: "<< ans <<"....that is OK!!! I'm looking forward to watch "<<movie<<" with you"<<endl;
    cout << name <<":";
    cin >> idiom;
    cout << "Fahsai: 555+ see you "<<ans<<". Bye Bye \\(^ ^)/ ";




 
    
}