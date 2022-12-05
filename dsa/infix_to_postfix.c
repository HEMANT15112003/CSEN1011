#include<stdio.h>
#define MAX 30
void push(char);
char pop();
int priority(char);
int top=-1;
char stack[MAX];
char infix[50];
char postfix[50];
int main()
{
   int i,j;
   char ch;
   
   printf("Enter the infix expression : ");
   scanf("%s",infix);
   j=0;
   for(i=0;infix[i]!='\0';i++)
   {
       switch(infix[i])
       {
	   case '(':
		      push(infix[i]);
		      break;
	   case ')':
		      while((ch=pop())!='(' && top!=-1)
		      {
			 postfix[j]=ch;
			 j++;
		      }
		      break;
	   case '^':
	   case '*':
	   case '/':
	   case '%':
	   case '+':
	   case '-':
		      while(priority(stack[top])>=priority(infix[i]))
		      {
			 ch=pop();
			 postfix[j]=ch;
			 j++;
		      }
		      push(infix[i]);
		      break;
	   default:
		       postfix[j]=infix[i];
		       j++;
       }
   }
   while(top!=-1)
   {
     postfix[j]=pop();
     j++;
   }
   postfix[j]='\0';
   printf("Postfix expression is %s",postfix);
   
}
void push(char ch)
{
   if(top==MAX-1)
     {
       printf("Stack Overflows");
       return;
     }
     top++;
     stack[top]=ch;
}
char pop()
{
   char ch;
   if(top==-1)
   {
     printf("Stack Underflows");
     return '0';
   }
   ch=stack[top];
   top--;
   return ch;
}



int priority(char ch)
{
   if(ch=='^')
     return 4;
   else if(ch=='*' || ch=='/' || ch=='%')
     return 3;
   else if(ch=='+' || ch=='-')
     return 2;
    else
     return 1;
}