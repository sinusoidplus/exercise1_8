// Exercise1_10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>

char firstNameArray[12];
char lastNameArray[12];
int phoneNumberArray[12];
int choice, personPointer, tempPhone = 0;
char tempFirst, tempLast, newPerson; 

int main()
{
    personPointer = 0;
    printf("what do you want to do?\n");
    printf("1: Add Person\n 2: Delete Person \n 3: Update entry\n 4: Display All\n 5: Exit\n");
    scanf_s("%d", &choice);
    while(choice != 5)
    {
        if (choice == 1)
        {
            int phoneNumber = 0;
            char firstName = 0;
            char lastName = 0;

            printf("Add new person\n");
            printf("Input first name\n");
            scanf_s("%s", firstNameArray);
            printf("Input last name\n");
            scanf_s("%s", lastNameArray);
            printf("Input phone number\n");
            scanf_s("%d", &phoneNumber);

           /* firstNameArray[personPointer] = firstName;
            lastNameArray[personPointer] = lastName;
            phoneNumberArray[personPointer] = phoneNumber;
            */
            personPointer++;
        }
        else if (choice == 2)
        {
            printf("1: Add Person\n 2: Delete Person \n 3: Update entry\n 4: Display All\n");
        }
        else if (choice == 3)
        {
            printf("1: Add Person\n 2: Delete Person \n 3: Update entry\n 4: Display All\n");
        }
        else if (choice == 4)
        {
            printf("1: Add Person\n 2: Delete Person \n 3: Update entry\n 4: Display All\n");
        }
        else
        {
            printf("incorrect choice");
            return 5;
        }
    }
    return 0;
}



// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
