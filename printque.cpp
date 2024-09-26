#include<iostream>
#include<queue>
#include<stack>
using namespace std;
void rev(queue<int> &q, int k){
stack<int>st;
while (k--)
{
 st.push(q.front());
 q.pop();

}
int n=q.size();

while (!st.empty()){
    q.push(st.top());
    st.pop();
}
while (n--)
{
   q.push(q.front());
   q.pop();
}
while (!q.empty())
{
    cout<<q.front()<<"\t";
    q.pop();
}

//  while (!q.empty())
// {
//     cout<<q.front()<<"\t";
//     q.pop();
// }


}
int main(){
    queue<int>q;
    stack<int>s;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
   int k=2;
   rev(q,k) ;
   

//    while (!q.empty())
//    {
//    if(q.size()==3){
//    s.push(q.front());
//    q.pop();
//    }
  
  
  
//   }
//    while (!s.empty())

//    {
   
//     cout<<s.top()<<"\t";
//     s.pop();
  
    
//    }

   
    //write a program k reverse queue

   
    // int n=q.size();
    // while(n--){
    //     cout<<q.front()<<"\t";
    //     q.push(q.front());
    //     q.pop();
    // }
    // cout<<"\n After deleted data:"<<endl;
    // while(!q.empty()){
    //     cout<<q.front()<<"\t";
    //     q.pop();
    // }
// while(!q.empty()){
//     cout<<q.front()<<"\t";
    
//     q.pop();
//}

}