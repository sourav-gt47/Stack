#include<stdio.h>
#include<stdlib.h>
#define max 5
int  top=-1;
int arr[max];
int isempty(){  //1

if(top==-1)
    return 1;
    else
    return 0;
}

int isfull(){   //2

if(top==max-1)
return 1;
else
return 0;
}

void push(){   //3
    int x;
printf("Enter data:: ");
scanf("%d",&x);
if(isfull()){

    printf("stack overflow!!");
}
else{
 top=top+1;
 arr[top]=x;


}



}

void pop(){   //4
if(isempty()){
printf("stack underflow!!");

}
else{
printf("%d ",arr[top]);
top=top-1;

}



}

void peek(){  //5
if(isempty()){
printf("stack underflow!!");

}
else{
printf("peek data:: %d",arr[top]);

}



}

void count(){  //6
if(isempty()){
printf("stack underflow!!");

}
else{
printf("count:: %d",top+1);

}

}

void display(){  //7
    int i;
if(isempty()){
printf("stack underflow!!");

}
else{

for( i=top;i>=0;i--){
printf("%d ",arr[i]);

}

}


}

int main(){

int choice;

do{
    printf("\nEnter the operation you want to performed in stack::\n");
    printf("\n1.push\n2.pop\n3.count\n4.peek\n5.display\n6.exit\n");
    scanf("%d",&choice);

    switch (choice)
    {
    case 1:push();
           break;
    case 2:pop();
           break;
    case 3:count();
           break;
    case 4:peek();
           break; 
    case 5:display();
           break;
    case 6: exit(0);       
    default:
        printf("Entered wrong choice!!");
        break;
    }

}while(choice!=0);

return 0;


}