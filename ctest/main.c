#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct item{
    char name[20];
    int price;
};


int main(){
    
    char *mypointer;
    char myStackString[4];
    int numberShelves;
    char *mypointer1;
    char *mypointer2;
    int numberSlots;

    mypointer = myStackString;
    printf("Please enter number of shelves: \n");
    fgets(myStackString, 100, stdin);
    numberShelves = atoi(myStackString);
    //printf (" the number is: %d\n", numberShelves);
    //printf("Please enter number of shelves again: \n");
    //scanf ("%10d", &numberShelves);
    printf("Please enter number of slots: \n");
    fgets(myStackString, 100, stdin);
    numberSlots = atoi(myStackString);
    printf("number of shelves is %d \n", numberShelves);
    printf("the number slots is %d \n", numberSlots);
    
    
    
    struct item **theShelf = malloc(numberShelves * sizeof(struct item *));
    for (int i =0; i< numberShelves; i++){
        theShelf[i] = malloc(sizeof(struct item) * numberSlots);
        for (int j = 0; j< numberSlots; j++){
            strcpy(theShelf[i][j].name, "No Name");
            theShelf[i][j].price = 5;
        }
    }
    
    strcpy(theShelf[1][2].name, "Genie Lamp");
    theShelf[1][2].price = 25;
    
    printf("the name and cost of item on shelf [1] slot [2] is %s and %d$\n" , theShelf[1][2].name, theShelf[1][2].price);
    
    
    
    
    
    
    
    return 0;
}
    
    
    
    


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

/*ORIGINAL DOCUMENT START*/
/*
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
*/
/*
int main() {
    int myIntegerFromUser = 0;
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
    
    addingOneNoPointer(int1);
    printf("Just to check the Number is: %d\n", int1);
    int1 = int1 + 1;
    printf("After adding one the number is: %d\n", int1);
    
    printf("This is in the String: %s\n", myString);
    
    
    
    
    return 0;
}
*/
/*ORIGINAL DOC END*/
    
    
/*
 
 
void getAUserString(char abc[]){
    fgets(abc,21,stdin);
}

int main(){
    
    char *mypointer;
    char myStackString[22];
    mypointer = myStackString;
    //strcpy(myStackString, "Hello World");
    printf("Please enter your name: \n");
    
    fgets(myStackString, 21, stdin);
    
    
    printf("You entered: %s\n", mypointer);
    
    printf("Now enter a different name: \n");
    
    getAUserString(myStackString);
    printf("The new name is: %s\n", mypointer);
    //printf("Hello world!\n");
    
    printf("Now enter a different name: \n");
    getAUserString(mypointer);
    printf("The new name is: %s\n", myStackString);
    return 0;
}

*/
