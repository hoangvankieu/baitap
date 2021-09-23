#include<iostream>
using namespace std;

struct Stack{
	int data;
	struct Stack *pNext;
};
typedef struct Stack STACK;
STACK *top=NULL;
bool isEmpty(){
	if(top==NULL){
		return false;
	}
	return true;
}
void push(int data){
	STACK *p=new STACK;
	p->data=data;
	p->pNext=top;
	top=p;
}
void peek(){
	cout<<top->data;
}
int pop(){
	if(!isEmpty()){
		cout<<"Underflow!";
		return 0;
	}
	int x;
	STACK *k=top;
	x=top->data;
	top=top->pNext;
	k->pNext=NULL;
	delete k;
	return x;
}
int main(){
	int x;
	int a=5,b=3,c=7;
	push(a);
	push(c*c);
	b=pop();
	push(b+a);
	a=pop();
	b=pop();
	cout<<a<<"\t"<<b<<"\t"<<c;
	return 0;
}