/*

Print the following pattern for the given number of rows.
Note: N is always odd.


Pattern for N = 5



The dots represent spaces.



Input format :
N (Total no. of rows and can only be odd)
Output format :
Pattern in N lines
Constraints :
1 <= N <= 49
Sample Input 1:
5
Sample Output 1:
  *
 ***
*****
 ***
  *
Sample Input 2:
3
Sample Output 2:
  *
 ***
  *

*/



#include<iostream>
using namespace std;


int main() {
    
   int n;
    cin>>n;
    int n1=(n/2)+1;
    int n2=n-n1;
    int i=1;
    while(i<=n1){
        int space=1;
        while(space<=n1-i){
            cout<<" ";
            space++;
        }
        int star=1;
        while(star<=2*i-1){
            cout<<"*";
            star++;
        }
        i++;
        cout<<endl;
    }

   
    i=n2;
    while(i>=1){
        int space=1;
        while(space<=(n2-i+1)){
            cout<<" ";
            space++;
        }
        int star=1;
        while(star<=(2*i-1)){
            cout<<"*";
            star++;
        }
        
        i--;
        cout<<endl;
    }
    
}
