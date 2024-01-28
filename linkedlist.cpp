#include<iostream>
using namespace std;
class linkedlist
{
public:
Node* head;
Node* next;
int data;
};

int main(){
    int *curr=head;
    int count=0;
    while(curr->next!= null){
  curr=curr->next;
  count++;
  return count;
    }
}


