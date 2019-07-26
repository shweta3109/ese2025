//============================================================================
// Name        : hellow.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
cout<<" Enter some text here. Press <CTRL><D> to signal EoF:" <<endl;
string words;
vector<string> container;

while(cin>>words)
{
container.push_back(words);

}
sort(container.begin(),container.end());

int vectorSize= container.size();

if(vectorSize==0) {
cout<<"You type nothing "<<endl;
return 1;

}
cout<<"Here are the word counts for each word in your text:"<<endl;
int wordCount=1;
words=container[0];

for(int i=1;i<vectorSize;i++) {
if (words!=container[i]) {
cout<<words <<" : " <<wordCount<<" "<<endl;
wordCount=0;
words=container[i];
}
wordCount++;
}


return 0;
}


