/*
Given a binary number as an integer N, convert it into decimal and print.
Input format :
An integer N in the Binary Format
Output format :
Corresponding Decimal number (as integer)
Constraints :
0 <= N <= 10^9
Sample Input 1 :
1100
Sample Output 1 :
12
Sample Input 2 :
111
Sample Output 2 :
7


*/

#include<iostream>
using namespace std;

int main() {
   
   int n;
   cin>>n;
   float pv=0.5;
   int deci=0;
   while(n!=0){
	   int dig=n%10;
	   n=n/10;
	   pv=pv*2;
	   deci=deci+dig*pv;

   }
   cout<<deci;
	
}
