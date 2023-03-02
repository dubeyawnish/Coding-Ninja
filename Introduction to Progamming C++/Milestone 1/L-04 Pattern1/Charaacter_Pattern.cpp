/*
Print the following pattern for the given N number of rows.
Pattern for N = 4
A
BC
CDE
DEFG
Input format :
Integer N (Total no. of rows)
Output format :
Pattern in N lines
Constraints
0 <= N <= 13



*/

#include<iostream>
using namespace std;


int main(){

    int n;

	cin>>n;
   int i=1;
   while(i<=n){
	   int j=1;
	   char start='A'+i-1;
	   while(j<=i){
         char ans=start+j-1;
         cout << ans;
         j++;

	   }
	   i++;
	   cout<<endl;
   }
  
}


