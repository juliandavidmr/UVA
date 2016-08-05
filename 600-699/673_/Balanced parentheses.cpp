#include<iostream>
#include <string>
using namespace std;
     
    struct node //we make stucture 'node'
    {
       char data; //type char, name data
       node *link; //node that points to link? why?
    };
    
   void push(node*& stack, char value)//ok, void because push function doesn't need to return anything
{
    node* new_node = new node; //we are declaring pointer to node
    new_node->data = value;//whats happening here?
    new_node->link = stack;  //and here?
    stack = new_node;//and here?
}

char pop(node *&stack)//for removing 
{
node *toDelete = stack;//we are saving the head
char result = stack->data;//saving the data at the top of the stack
stack=stack->link;//we make the next node in the stack - the new head
delete toDelete;//we delete it
return result;//why do we have to return the result?
}
    bool Pairs(char openP,char closedP)//ok, even i understand this part :D
    {
    if(openP == '(' && closedP == ')') return true;
    else if(openP == '{' && closedP == '}') return true;
    else if(openP == '[' && closedP == ']') return true;
    else return false;
    }
     
    bool Check(string exp) 
    {
       int i=0;//why do we equal i with 0?
       node *stack=NULL;//this checks if stack is empty or?
       	while(exp[i]) //how would you say this in words, i get it but dont know how to explain to someone else
       	{
        	if(exp[i]=='(' || exp[i]=='[')
			{
			push(stack, exp[i]);//this to, in words..?
			}
          	if(exp[i]==')' || exp[i]==']')
    	      {
    	         if(stack==NULL)//why?
    	        	return 0; 
    	         else 
				 {
					char top_brace = pop(stack);//in words?
					if ( !Pairs(top_brace, exp[i]) )
					return 0;
				 }							
    	      }
          	i++;//why i++? it's going to next element?
       	}
       	if(stack==NULL)//if stack is empty, return true; why do we need this part?
    		return 1;
      	else
        	return 0;
    } 
     
    int main()
    {
      	string exp;
     	cout<<"Enter parentheses:\n";
    	cin>>exp;
     	if(Check(exp)!=0)
        	cout<<"P. are  balanced";
      	else 
        	cout<<"P. are not balanced";  
     	return 0;
    }    
     