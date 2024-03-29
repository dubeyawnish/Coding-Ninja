/*

Given a number N, figure out if it is a member of fibonacci series or not. Return true if the number is member of fibonacci series else false.
Fibonacci Series is defined by the recurrence
    F(n) = F(n-1) + F(n-2)
where F(0) = 0 and F(1) = 1


Input Format :
Integer N
Output Format :
true or false
Constraints :
0 <= n <= 10^4
Sample Input 1 :
5
Sample Output 1 :
true
Sample Input 2 :
14
Sample Output 2 :
false    


*/


bool checkMember(int n){
  int i=1;
  int prev=1;
  int cur=1;
  if(n==0)
    return true;
  else if(n==1)
     return true;
  while(i!=n){
    int ans=prev+cur;
    prev=cur;
    cur=ans;
  
    if(n==ans)
      return true;
      i++;

  }
  return false;


}
