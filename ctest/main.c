#include <stdio.h>

/*
 example for initializing a 2d array of a given struct
 
 struct item **theShelf = malloc(*shelves * sizeof(struct item *));
    for (int i = 0; i < *shelves; i++){
        theShelf[i] = malloc(sizeof(struct item) * *slots);
        for (int j = 0; j < *slots; j++){
            strcpy(theShelf[i][j].name, "Nothing!");
            theShelf[i][j].qItem = 0;
        }
    }
 */

struct person{
    char name[20];
    int age;
};

void addingOneNoPointer(int value){
    printf("Adding one to: %d\n", value);
    value = value + 1;
    printf("The new number is: %d\n", value);
}

void changeNameAndAge(struct person newMan, char newName[],int newAge){
    strcpy(newMan.name, newName);
    newMan.age = newAge;
}

void changeNameAndAgeWithPointer(struct person *newMan, char newName[],int newAge){
    strcpy(newMan->name,newName);
    newMan->age = newAge;
}

int main() {
    int myIntegerFromUser = 0;
    /*code for getting int from user*/
    char myString[myIntegerFromUser];
    int int1 = 0;
    int int2 = 0;
    struct person *mypersonpointer;
    
    struct person myperson;

    strcpy(myperson.name, "Dilbert");
    myperson.age = 35;
    
    mypersonpointer = &myperson;

    printf("The persons name is %s and they are %d years old\n",myperson.name, myperson.age);
    
    strcpy(myString, "Henry");
    int1 = 20;
    changeNameAndAge(myperson, myString, int1);
    
    printf("The persons name is %s and they are %d years old\n",myperson.name, myperson.age);
    
    strcpy(myperson.name, myString);
    myperson.age = int1;
    
    printf("The persons name is %s and they are %d years old\n",myperson.name, myperson.age);
    
    char newNameAgain[20];
    strcpy(newNameAgain, "Devon");
    
    changeNameAndAgeWithPointer(mypersonpointer, newNameAgain, 45);
    
    printf("The persons name is %s and they are %d years old\n",myperson.name, myperson.age);
    
     printf("The persons name is %s and they are %d years old\n",mypersonpointer->name, mypersonpointer->age);
    /*
    addingOneNoPointer(int1);
    printf("Just to check the Number is: %d\n", int1);
    int1 = int1 + 1;
    printf("After adding one the number is: %d\n", int1);
    
    printf("This is in the String: %s\n", myString);
    
    */
    
    
    return 0;
}


