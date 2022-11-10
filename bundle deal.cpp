// Chapter 11, Bundle Deals
// Write a program that stores the bundle options 
// TV, voice, and internet for a customer.
// The program should define an array of structs 
// to store ten customers information. The program
// should ask the user to enter in the customer
// information. Then it should pass the array of 
// structs to a function to display the information
// for each customer on the screen.
//
// Make sure to add any header files as needed. 
//     This program is NOT autograded
//
// Name: Christina Kramer
// Date: 4/26/2022
//

#include <iostream>
using namespace std;

struct Bundle
{
     string name;
     double internet;
     double voice;
     double television;
};

void showInfo(Bundle[]);

int main()
{
	
// YOUR CODE HERE!!!!
const int bundleTypes=10;

Bundle groups[bundleTypes];


cout<<"enter information for all 10 customers including name, internet price, voice price, and television price\n"<<endl;



for(int index=0; index < bundleTypes; index++)
{

cout<<"Customer "<<index+1<<"\n"<<endl;

cout<<index+1<<" enter customer name\n";
     getline(cin,groups[index].name);
     
     cout<<index+1<<" enter internet price\n";
     cin>>groups[index].internet;
     
          while ((groups[index].internet)<=0)
{
   cout << "Input can't be 0 or negative, enter a price"<< endl;
	cin >> groups[index].internet;
	
}
     
     cout<<index+1<<" enter voice price\n";
     cin>>groups[index].voice;
     
     while ((groups[index].voice)<=0)
{
   cout << "Input can't be 0 or negative, enter a price"<< endl;
	cin >> groups[index].voice;
	
}
     
     cout<<index+1<<" enter television price\n";
     cin>>groups[index].television;
     
     while ((groups[index].television)<=0)
{
   cout << "Input can't be 0 or negative, enter a price"<< endl;
	cin >> groups[index].television;
	
}
     
     cin.ignore();
    


}

showInfo(groups);

return 0;
}



void showInfo(Bundle g[])
{

for(int i=0; i < 10; i++)
{
    
    
cout<<"\n";

cout<<"Customer"<< i+1<<"\n"<<endl;

cout<<"Customer: "<< g[i].name<<endl;

cout<<"Internet: "<< "$"<<g[i].internet<<endl;

cout<<"Voice: "<< "$"<<g[i].voice<<endl;

cout<<"Television: "<< "$"<<g[i].television<<endl;
}

}