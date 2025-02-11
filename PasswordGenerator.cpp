#include<iostream>
#include<cstdlib>
#include<ctime>
#include<string>
using namespace std;

string generatePassword(int length){
    string Password = "";
    string characters = "aquickbrownfoxjumpsoverthelazydogAQUICKBROWNFROXJUMPSOVERTHELAZYDOG0123456789";
    int charSize = characters.size();
    srand(time(0));
    int randomIndex;
    for(int i=0;i<length;i++){
        randomIndex = rand()%charSize;
        Password = Password + characters[randomIndex];
    }
    return Password;
}

int main(){
    int length;
    cout<<"Enter length of Password :: ";
    cin>>length;
    string password = generatePassword(length);
    cout<<"Generated Password :: "<<password<<endl;
    return 0;
}