#include<iostream>
#include<array>
#include<vector>
#include<deque>
#include<list>
#include<stack>
#include<queue>
#include<set>
#include<map>
using namespace std;

void Array()
 {
   array<int,4> a ={1,2,3,4};
    int size = a.size();
     
     for(int i=0;i<size;i++)
     {
        cout<<"all elements are"<<a[i]<<" ";
     }
     cout<<endl;
    cout<<"element at 2 is "<<a.at(2)<<" ";
    cout<<endl;
    cout<<"is array empty "<<a.empty();
    cout<<endl;
    cout<<"first element "<<a.front();
    cout<<endl;
    cout<<"last element "<<a.back();
 }
void Vector()
 {

    vector<int> v;
    cout<<"capacity is "<<v.capacity();
    cout<<endl;
    v.push_back(1);
    cout<<"capacity is "<<v.capacity();
    cout<<endl;
    v.push_back(2);
    cout<<"capacity is "<<v.capacity();
    cout<<endl;
    v.push_back(3);
    cout<<"capacity is "<<v.capacity();
    cout<<endl;
    v.push_back(4);
    cout<<"capacity is "<<v.capacity();
    cout<<endl;
    v.push_back(5);
    cout<<"capacity is "<<v.capacity();
    cout<<endl;
    v.push_back(6);
    cout<<"capacity is "<<v.capacity();
    cout<<endl;
    cout<<"size is "<<v.size();
    cout<<endl;
    cout<<"at 2 is "<<v.at(2);
    cout<<endl;
    cout<<"front element is "<<v.front();
    cout<<endl;
    cout<<"last element is "<<v.back();
    cout<<"after pop "<<endl;
    v.pop_back();    
    for(int i=0;i<v.size();i++)
    {
      cout<<v.at(i)<<endl;
    }
    vector<int> a(5,1); //is tarah se v vector ko create kiya jaa sakta hai yaha pr 5 size hai or 1 se sb ko initialize kiya gaya hai.
    vector<int> last(a); //ek vector last create hua hai jisme a ka sara chiz copy ho jaega.
 }
void Deque()
 {
   deque<int> d;
   d.push_back(1);
   d.push_back(2);
   d.push_back(3);
   d.push_front(4);
   cout<<"Elements are ";
   for(int i=0;i<d.size();i++)
   {
      cout<<d.at(i)<<" ";
   }
   cout<<endl;
   cout<<"after pop back:-";
   d.pop_back();
   for(int i=0;i<d.size();i++)
   {
      cout<<d.at(i)<<" ";
   }
   cout<<endl;
   cout<<"after pop front:-";
   d.pop_back();
   for(int i=0;i<d.size();i++)
   {
      cout<<d.at(i)<<" ";
   }
   cout<<endl;
   cout<< "empty or not "<<d.empty();
   cout<<endl;
   cout<<"before delete size is "<<d.size();
   cout<<endl;
   d.erase(d.begin(),d.begin()+1);
   cout<<"after delete size is "<<d.size();
     
 }
void List()
{
   list<int> l;
   l.push_back(1);
   l.push_back(2);
   l.push_back(3);
   l.push_front(4);
   cout<<"size of list "<<l.size();
   cout<<endl;
   cout<<"Elements are ";
   list<int>n(5,100);
   for(int i:n)
   {
      cout<<i<<" ";
   }
   cout<<endl;
   
   cout<<"Elements are ";
   for(int i:l)
   {
      cout<<i <<" ";
   }
   cout<<endl;
   cout<<"after pop back:-";
   l.pop_back();
   for(int i:l)
   {
      cout<<i<<" ";
   }
   cout<<endl;
   cout<<"after pop front:-";
   l.pop_back();
   for(int i:l)
   {
      cout<<i<<" ";
   }
   cout<<endl;
   cout<< "empty or not "<<l.empty();
   cout<<endl;
   cout<<"before delete size is "<<l.size();
   cout<<endl;
   l.erase(l.begin());
   cout<<"after erase ";
   for(int i:l)
   {
   cout<<i<<" ";
   }
   cout<<endl;
}
void Stack()
{
   stack<int> s;
   s.push(1);
   s.push(2);
   s.push(3);
   cout<<s.size();
   cout<<"top element "<<s.top()<<endl;
   s.pop();
   cout<<"top element "<<s.top();
   cout<<endl;
   cout<<"is empty "<<s.empty();
}
void Queue()
{
   queue<string> q;
   q.push("hello");
   q.push("subham");
   q.push("kumar");
   cout<<"size is "<<q.size();
   cout<<endl;
   cout<<"top element "<<q.front()<<endl;
   q.pop();
   cout<<"after pop "<<endl;
   cout<<"top element "<<q.front();
   cout<<endl;
   cout<<"is empty "<<q.empty();
}
void Priorityqueue()
{
   priority_queue<int>maxi;
   maxi.push(1);
   maxi.push(5);
   maxi.push(4);
   maxi.push(3);
   maxi.push(2);
   cout<<"size is "<<maxi.size()<<endl;
   int n= maxi.size();
   for(int i=0;i<n;i++)
   {
      cout<<maxi.top()<<" ";
      maxi.pop();
   }
   cout<<endl;
   priority_queue<int,vector<int>, greater<int> >mini;
   mini.push(1);
   mini.push(5);
   mini.push(4);
   mini.push(3);
   mini.push(2);
   cout<<"size is "<<mini.size();
   cout<<endl;
   int s= mini.size();
   for(int i=0;i<n;i++)
   {
      cout<<mini.top()<<" ";
      mini.pop();
   }
   
}
void Set()
{
   set<int> s;
   s.insert(5);
   s.insert(5);
   s.insert(50);
   s.insert(15);
   s.insert(150);
   s.insert(115);
   cout<<"size is "<<s.size();
   cout<<endl;
   cout<<"elements are ";// no repeated elements are stored
   for(auto i:s)
   {
      cout<<i<<" ";
   }
   cout<<endl;
   cout<<"after erase ";
   set <int>::iterator it=s.begin();
   it++;
   s.erase(it);
   for(auto i:s)
   {
      cout<<i<<" ";
   }
   cout<<endl;
   cout<<"kya 115 hai "<<s.count(115);
   cout<<endl;
}
void Map()
{
   map<int,string> m;
   m[1]="hello";
   m[3]="subham";
   m[4]="kumar";
   m[2]="sinha";

   m.insert({5,"welcome"});
   for(auto i:m)
   {
      cout<<i.first<<" "<<i.second<<endl;;
      
   }
   cout<<endl;
   cout<<"check 4 :-"<<m.count(4);
   cout<<endl;
   cout<<"before erase "<<endl;
   for(auto i:m)
   {
      cout<<i.first<<" "<<i.second<<endl;;
      
   }
   cout<<endl;
   m.erase(5);
   cout<<"after erase ";
   for(auto i:m)
   {
      cout<<i.first<<" "<<i.second<<endl; 
   }
}

    int main()
    {
      //Array();
      //Vector();
      //Deque();
      //List();
      //Stack();
      //Queue();
      //Priorityqueue();
      //Set();
      //Map();
    }