/*

Given a number N, print sum of all even numbers from 1 to N.
Input Format :
Integer N
Output Format :
Required Sum 
Sample Input 1 :
 6
Sample Output 1 :
12

*/

#include<iostream>
using namespace std;


int main(){
       int n;
       	cin>>n;
		   int d=2;
		   int sum=0;
      while(d<=n){
          sum=sum+d;
		  d=d+2;
	  }
	  cout<<sum;
  
}