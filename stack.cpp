#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define size 5
struct stack{
	int s[size];
	int top;
} st;

int isfull(){
	if(st.top>= size-1)
	return 1;
	else
	return 0;
}
void push (int item){
	st.top++;
	st.s[st.top++] = item;
}
int isempty(){
	if(st.top==-1)
	return 1;
	else 
	return 0;
}
int pop(){
	int item;
	item=st.s[st.top];
	st.top--;
	return item;
}
void display(){
	int i;
	if(isempty())
	printf("\nStack Is Empty!");
	else {
		for(i=st.top; i>=0; i--)
		printf("\n%d",st.s[i]);
	}
}
int main(){
	int item, choice;
	char ans;
	st.top=-1;
	
	printf("\n\tImplementation Of Stack");
	do {
		system("cls");
		printf("\nMain Manu");
		printf("\n1.Push \n2.Pop \n3.Display \n4.Exit");
		printf("\nEnter Your Choice: ");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("\nEnter The Item To Be Push: ");
				scanf("%d",&item);
				if(isfull())
				printf("\nStack Is Full!");
				else
				push(item);
				break;
			case 2:
				if(isempty())
				printf("\nEmpty Stack! Underflow!!");
				else{
				item=pop();
				printf("\nThe Popped Element Is %d",item);
			}
		break;
			case 3:
				display();
				break;
			case 4:
				exit(0);
		}
	printf("\nDo You Want To Conteniue?\t (Y/N)");
	ans=getch();
}
	while (ans=='Y' || ans=='y');
	
return 0;
}






















