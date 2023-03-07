/*


Print the following pattern for the given number of rows.
Pattern for N = 4



The dots represent spaces.



Input format :
Integer N (Total no. of rows)
Output format :
Pattern in N lines
Constraints :
0 <= N <= 50
Sample Input 1:
5
Sample Output 1:
           1
         232
       34543
     4567654
   567898765
Sample Input 2:
4
Sample Output 2:
           1
         232
       34543
     4567654

*/



#include <iostream>
using namespace std;

int main() {
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

      int k=i-1;
      p=p-2;
      while(k>=1){
        cout<<p;
        p--;
          k--;
      }
       
       
       i++;
       cout<<endl;
   }
    
}
