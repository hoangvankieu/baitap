#include<iostream>
using namespace std;

struct Stack{
	char data;
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
void push(char data){
	STACK *p=new STACK;
	p->data=data;
	p->pNext=top;
	top=p;
}
void peek(){
	cout<<top->data;
}
void pop(){
	if(!isEmpty()){
		cout<<"Underflow!";
		return;
	}
	STACK *k=top;
	cout<<top->data;
	top=top->pNext;
	k->pNext=NULL;
	delete k;
}
int main(){
	char ht[30]="EAS*Y**QUE***ST***I*ON"; 


	for(int i=0;i<strlen(ht);i++){
		if(ht[i]!='*'){
			push(ht[i]);
		}
		else{
			pop();
		}
	}
	return 0;
}