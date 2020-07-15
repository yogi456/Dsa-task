//WAP to accept 10 student's Marks and store them in a array and Print Out them.
#include<stdio.h>
#include<iostream.h>
#include<conio.h>
int main(){
int marks[10];
for(int i=0;i<10;i++)
{
clrscr();
cout<<"Please Enter the Marks of of The "<<i+1<<"Student :";
cin>>marks[10];
}
for(int j=0;j<10;j++)
{
cout<<"Marks are "<<marks[j];
}
getch();
return 0;
}