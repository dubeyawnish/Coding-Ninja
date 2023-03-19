/*

Print the following pattern for the given number of rows.
Pattern for N = 4
   1
  212
 32123
4321234
Input format : N (Total no. of rows)

Output format : Pattern in N lines

Sample Input :
5
Sample Output :
        1
      212
    32123
  4321234
543212345


*/


#include<iostream>
using namespace std;

int main(){

int n;
cin>>n;
int i=1;
while(i<=n){
  int space=1;
  while(space<=n-i){
    cout<<" ";
      space++;
  }
  int j=1;
  int p=i;
  while(j<=i){
    cout<<p;
    p--;
    j++;
  }
 int k=1;
 int c=p+2;
 while(k<=i-1){
   cout<<c;
   c++;
   k++;
 }

i++;
cout<<endl;

}  

  
}

