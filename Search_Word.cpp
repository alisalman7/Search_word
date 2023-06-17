#include<iostream>
#include <string>
using namespace std;
//Program TO Replace Any Word.
string replacingword(string text){

string word ,name;
int found=-1; 

     cout <<"Enter Your Remove Word :"<<endl;
     getline(cin,word);
 
    cout <<"Enter Your Remove Word :"<<endl;
    getline(cin,name);

do
{                  
    found=text.find(word,found+1);//work to find the word and start from 1.
    if (found !=-1)
    {
   text=text.substr(0,found)+name+text.substr(found+word.length());
    }
} while(found !=-1);

 return text;
};
int main(){
string mytext;
cout <<"Enter your text "<<endl;
getline (cin,mytext);

cout<<replacingword(mytext);

    return 0;
}