#include <stdio.h>
#include <stdlib.h>
#include "myTypes.h"
#include "superScan.h"
#define MAX_USERS 10

void initUser(User *aUser);
int main()
{
    int numUsers=12;
    printf("\nHow many User (max %d)?  ",MAX_USERS);
    intScan(&numUsers);
    printf("numUsers = %d",numUsers);

    /*double numUsers=12.23;
    printf("numUsers = %lf \n",numUsers);
    printf("\nHow many User (max %d)?  ",MAX_USERS);
    doubleScan(&numUsers);
    printf("numUsers = %lf",numUsers);*/

    /*int i=0;
    int numUsers=1;
    User users[MAX_USERS];
    for (i=0; i<MAX_USERS; i++){
        initUser(&users[i]);
    }
    printf("\nHow many User (max %d)?  ",MAX_USERS);
    intScan(&numUsers);
    if (numUsers>MAX_USERS){
        numUsers=MAX_USERS;
        printf("== To many user, default selection: %d ==",MAX_USERS);
    }

    for (i=0; i<numUsers; i++){

        printf("\n\n==User :%d==",(i+1));

        printf("\n  Name :");



        charScan(users[i].name, sizeof users[i].name);


        printf("\n  Surname :");
        charScan(users[i].surname, sizeof users[i].surname);


        printf("\n  Email :");
        charScan(users[i].email, sizeof users[i].email);


        printf("\n  Tel :");
        charScan(users[i].tel,sizeof users[i].tel);
    }
    printf("\n\n==All Users==");
    for (i=0; i<numUsers; i++){
        printf("\n User :%d : name: %s, surname: %s, email: %s, tel: %s.",(i+1),users[i].name,users[i].surname,users[i].email,users[i].tel);
    }*/

    return 0;
}
void initUser(User *aUser){
    strcpy(aUser->name,"");
    strcpy(aUser->surname,"");
    strcpy(aUser->email,"");
    strcpy(aUser->tel,"");
}
