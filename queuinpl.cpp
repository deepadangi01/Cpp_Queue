#include<iostream>
#include<vector>
using namespace std;
class node{
public:int data;
node *nxt;
public:node(int d){
    data=d;
    nxt=NULL;
}
};
class  que{
    public:
    node *frnd;
    node *rear;
    public:que(){
        frnd=NULL;
        rear=NULL;

    }
    void pus(int v){
        node *n=new node(v);
        if(frnd==NULL){
            frnd=n;
            rear=n;
            return;

        }
        rear ->nxt=n;
        rear=n;
    }
    void pop(){
        if(frnd==NULL){
            cout<<"queue underflow";
        }
        node *del=frnd;
        frnd=frnd->nxt;
        delete del;
    }
    int peek(){
        if(frnd==NULL){
            cout<<"no data in queues";
           return 0;
        }
        return frnd->data;

    }
    bool empt(){
        if(frnd==NULL){
            return true;
        }
        return false;
    }

};

int main(){
que q;
q.pus(32);
q.pus(2);
q.pus(60);
q.pus(68);
q.pus(30);
q.pus(78);
cout<<"top element ="<<q.peek()<<endl;
cout<<"Is empty="<<q.empt()<<endl;
q.pop();
cout<<"After delete top element ,next top element is "<<endl;
cout<<"List of queuw\n";
while(!q.empt()){
    cout<<q.peek()<<"\n";
    q.pop();
}
cout<<"Is queue empty="<<q.empt()<<"\n";
vector<int>v{100,200,400,600,10,300};
que qn;
for(auto p:v){
    qn.pus(p);
}
cout<<"\n data of vector in queue \n";
while(!qn.empt()){
    cout<<qn.peek()<<"\n";
    qn.pop();
}
cout<<"\n Is queue empty="<<qn.empt()<<"\n";
cout<<"\n data of vector \n";
for(auto p:v){
    cout<<p<<"\t";
}

}