/*

Print the following pattern
Pattern for N = 4


The dots represent spaces.



Input Format :
N (Total no. of rows)
Output Format :
Pattern in N lines
Sample Input :
5
Sample Output :


The dots represent spaces.




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
			p++;
			j++;
		}
		 
		 
		 i++;
		 cout<<endl;
	 }
}