 
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
        next = nullptr;
    }
};//syntex

void insertnode(node* &head , ll val ){

    node* n = new node(val);
    if(head == nullptr){

        head = n;
        return;

    }

    node* temp = head;

    while(temp->next != nullptr){

            temp = temp->next;

    }

    temp->next=n;// node kay jodi point kortay chai taholay pointer ei assgin kortay hobay

   return ;


}

void display(node* &head){

    node* temp = head;// address of the first node aSign to temp ..so by temp now we can point the first node's all value and pointer  
     
    //cout<<head->data<<"\n";
    
    while(temp != nullptr){

            cout<<temp->data<<" ---->";
            temp = temp->next;
    }
    cout<<"NULL"<<endl;

}
int main() {
      node* head = nullptr;
      insertnode(head, 1);
      insertnode(head, 2);
      insertnode(head, 3);
      insertnode(head, 4);
      insertnode(head, 5);
      display(head);//head point the first node of the linked list
   return 0;
   }