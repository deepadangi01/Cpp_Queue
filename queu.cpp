//queue-(addapter container)
#include<iostream>
#include<queue>
#include<deque>
using namespace std;
int main(){
    queue<int>node;
    node.push(6);
    node.push(4);
    node.push(80);
    node.push(40);
    node.push(35);
   

    while (!node.empty())
    {
        cout<<node.front()<<"\t";
        node.pop();
    }
    deque<int>dn;
    dn.push_front(6);
    dn.push_back(4);
    dn.push_back(80);
    dn.push_front(40);
    dn.push_back(35);
   
   
    while (!dn.empty())
    {
        cout<<dn.front()<<"\t";
        dn.pop_front();
    }
    
}