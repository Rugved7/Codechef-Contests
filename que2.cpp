#include <iostream>
using namespace std;

int main() {
	// your code goes here

    int T;
    cin>>T;
    int A,B,C;

    for (int  i = 0; i < T; i++)
    {
       cin>>A>>B>>C;
       cout<<endl;

       if (B>=A && B>=C)
       {
        cout<<"Yes"<<endl;
       }
      else{
        cout<<"No"<<endl;
      } 
    }
    
	return 0;
}
