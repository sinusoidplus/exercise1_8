

#include <stdio.h>

char firstNameArray[12][12]; //Due to the nature of arrays in C it will be an array of characters
char lastNameArray[12][12];
char inputString[12];
int phoneNumberArray[12];
int i, j, k, l, choice, personPointer, tempPhone, inputNumber = 0;
char tempFirst, tempLast, newPerson; 

void returnName(int i) 
{
    printf("First Name: \n");
    for (int j = 0; j < 12; j++)
    {
        printf("%c", firstNameArray[i][j]);
    }

    
}

void addToFirstNameArray(int k, char inputString [12] )
{
    int i = 0;
    while (inputString[i] != '\0')
    {
        firstNameArray[k][i] = inputString[i];
        i++;
    }
    
}

void addToLastNameArray(int k, char inputString[12])
{
    int i = 0;
    while (inputString[i] != '\0')
    {
        lastNameArray[k][i] = inputString[i];
        i++;
    }
}

void addToPhoneNumberArray(int k, int inputNumber)
{
    phoneNumberArray[k] = inputNumber;
}

void deletePerson(int personToDelete)
{
    phoneNumberArray[personToDelete] = 0;
    for (int i = 0; i < 12; i++)
    {
    firstNameArray[personToDelete][i] = NULL;
    lastNameArray[personToDelete][i] = NULL;
    }

    printf("Person number %d has been deleted! \n", personToDelete);
    
}

void updatePerson()
{
    int personToUpdate, choice = 0;
    char newFirstName[12];
    char newLastName[12];
    int newPhoneNumber=0;
    printf("Which person would you like to update? \n");
    scanf("%d", &personToUpdate);

    printf("Change: \n 1) First Name \n 2) Last Name \n 3) PhoneNumber");
    scanf("%d", &choice);

        if (choice == 1)
        {
            printf("New first name: \n");
            scanf("%s", newFirstName);
            addToFirstNameArray(personToUpdate, newFirstName) ;
            
        }
        else if (choice == 2)
        {
            printf("New last name: \n");
            scanf("%s", newLastName);
            addToLastNameArray(personToUpdate, newLastName);
        }
        else if (choice == 3)
        {
            printf("New phonenumber: \n");
            scanf("%d", newPhoneNumber);
            addToPhoneNumberArray(personToUpdate, newPhoneNumber);
        }
        else 
        {
            //
        }
 
}

void printAll()
{
    for (int i = 0; i < 12; i++)
    {
        printf("Person Number %d is: %s, %s, %d \n",i, firstNameArray[i], lastNameArray[i], phoneNumberArray[i]);
    }
}


int main()
{
    
    printf("what do you want to do?\n");
    printf("1: Add Person\n 2: Delete Person \n 3: Update entry\n 4: Display All\n 5: Exit\n");
    scanf_s("%d", &choice);

    

    while(choice != 5)
    {
        if (choice == 1)
        {
            int phoneNumber = 0;
            int personPointer = 0;
            char firstName[12]="";
            char lastName[12]="";

            printf("Which number person would you like to add? \n");
            scanf("%d", &personPointer);

            
            printf("Input first name: \n");
            scanf("%s", firstName);
            printf("Input last name: \n");
            scanf("%s", lastName);
            printf("Input phone number: \n");
            scanf("%d", &phoneNumber);

            addToFirstNameArray(personPointer, firstName);
            addToLastNameArray(personPointer, lastName);
            addToPhoneNumberArray(personPointer, phoneNumber);

           
            choice = 0;
           
        }
        else if (choice == 2)
        {
            int personToBeDeleted = 0;
            printf("Person number you wish to remove: \n");
            scanf("%d", &personToBeDeleted);
            if (personToBeDeleted < 0 || personToBeDeleted > 12)
            {
                printf("Invalid choice");
            }
            else
            {
                deletePerson(personToBeDeleted);
            }

            

            choice = 0;
        }
        else if (choice == 3)
        {
            updatePerson();
            choice = 0;
        }
        else if (choice == 4)
        {
            printAll();
            choice = 0;
        }
        else
        {
            printf("what do you want to do now?\n");
            printf("1: Add Person\n 2: Delete Person \n 3: Update entry\n 4: Display All\n 5: Exit\n");
            scanf_s("%d", &choice);
        }
    }
    return 0;
}


