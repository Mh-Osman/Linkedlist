 
#include <bits/stdc++.h>
 
#define ll long long
#define ull unsigned long long
#define dd double
#define scl(n) scanf("%lld", &n)
#define scd(n) scanf("%lf", &n)
#define pb push_back
#define FOR(i, n) for (ll i = 1; i <= n; i++)
#define LOOP(i, n) for (ll i = 0; i < n; i++)
#define FOOR(i, a, b) for (ll i = a; i <= b; i++)
#define LOP(i, a, b) for (ll i = a; i < b; i++)
#define sorted(s) sort(s.begin(), s.end())
#define MAXN 100004
 
using namespace std;
 class node{

public:
  int data;
  node* next;

  node(int val){

    data = val;
    next =nullptr;
  }
 };

 void display(node* &head ){

    node* temp = head;
    while(temp != nullptr){

        cout<<temp->data<<" ---->";
        
        temp = temp->next;

    }
    cout<<"NULL"<<endl;
    return ;
 }


 void deletetion(node* &head , int val){// for deletion we need to traverse till n-1 node

    node* temp = head;
    while(temp->next->data != val){


      temp = temp->next;
    }

    node* del = temp->next;
    temp->next = temp->next->next;
    delete del;
    cout<<"after deletion"<<endl;
    display(head);



 }
int main() {
  
  node* a = new node(1);
  node* head = a;
  head->next = new node(2);
  head->next->next = new node(3);
  head->next->next->next = new node(4);
  head->next->next->next->next = new node(5); 
  head->next->next->next->next->next= new node(6);
  head->next->next->next->next->next->next= new node(7);
  display(head);
  deletetion(head, 4);

return 0;
}