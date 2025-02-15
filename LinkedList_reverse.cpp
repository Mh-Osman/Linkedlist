 
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
    ll data;
    node* next;
    node(ll val){

        data = val;
        next = nullptr;// next sudu address hold korbay
    }
};//syntex



void display(node* &head){

    node* temp = head;// address of the first node aSign to temp ..so by temp now we can point the first node's all value and pointer  
     
    //cout<<head->data<<"\n";
    
    while(temp != nullptr){

            cout<<temp->data<<" ---->";
            temp = temp->next;
    }
    cout<<"NULL"<<endl;

}


node* reverse(node* &head ){

  node* prev = nullptr;
  node* curr= head;
  node* next = nullptr;

  while(curr != nullptr){

    next = curr->next;
    curr->next = prev;
    prev = curr;
    curr = next;
  }

  return prev;
    
}
int main() {
      node* head = nullptr;
      node* a= new node(1);
      head = a;
      head->next = new node(2);
      head->next->next = new node(3);
      head->next->next->next = new node(4);
      head->next->next->next->next = new node(5);
      display(head);
      head = reverse(head);
      display(head);//head point the first node of the linked list
   return 0;
   }