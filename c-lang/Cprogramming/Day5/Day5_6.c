#include<stdio.h>

//keyowrd       scope       life        memory from         default value            
//register      block       block       cpu register           garbage 

//register int x; //not alllowed to use here

int main()
{
    register int var; //it is a request to identify existing register
    scanf("%d",&var); //can not take address of register
}

//if request is entertained performce will be faster
//if request is not entertained as no availability of registers 
    //request will be converted internally to auto type //where wntire process will slow down performance