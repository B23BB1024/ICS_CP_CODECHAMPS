# ICS_CP_CODECHAMPS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Function prototypes
float SquareArea(float side);
float CircleArea(float radius);
float TriangleArea(float base, float height);
float RectangleArea(float length, float width);
float TrapeziumArea(float base1, float base2, float height);
float EllipseArea(float majorAxis, float minorAxis);
float ParallelogramArea(float base, float height);
float RhombusArea(float d1, float d2);
float PolygonArea(float side, int number);
float squareMetersToSquareFeet(float squareMeters);

int main()
{
  int choice;

  // Display welcome message
  printf("\n\n\t\t\t\t\t\t   \033[1;4;31m  Hii  \033[0m \n\n \t\t\t\t\t \033[1;4;34m We 'THE CODE CHAMPS' presents :  \033[0m\n\n \t\t\t\t\t\t\033[1;4;34m AREA CALCULATOR \033[0m");
  printf("\n\n\033[1;33mSo, Are you interested to go further? \033[0m\n\n\t \033[1;33mwrite 'y' for yes and 'n' for no : \033[0m");
  char welcome;
  scanf("%c", &welcome);

  if (welcome == 'n')
  {
    // End program if the user declines
    printf("\n\n\n\t\t\t\t\t \033[1;31m      You have requested to end the program \033[0m\n\t\t\t\t\t\t PROGRAM ENDED !!!! GOODBYE !!!!! \n\n\t\t\t\t\t\t     HAVE A NICE DAY!!!! ");
    exit(1);
  }
  else if (welcome == 'y')
  {
    do
    {
      // Display menu
      printf("\n\n\n\033[1;36m These are options available : \n\n \033[0m");
      printf("\033[1;31m 1.Rectangle                             \033[0m");
      // ... (rest of the menu options)

      // Get user choice
      printf("\n\n\033[1;36mEnter your choice (1-10): \033[0m");
      scanf("%d", &choice);

      // Perform corresponding calculation based on user choice
      switch (choice)
      {
      case 1: // For Rectangle
        // ... (similar comments for each case)
        break;
      case 2: // For Square
        // ...
        break;
      // ... (cases for other shapes)
      case 10: // Convert square meters to square feet
        // ...
        break;
      default:
        printf("Choice is wrong. Please enter a number between 1 and 10.\n");
      }

    } while (choice != 0); // Continue until the user chooses to exit
  }
  else
  {
    // Inform the user about wrong input
    printf("\n\n You entered wrong input..\n\n \t\tSO,\n\n \t\t\t\t !!!!! PROGRAM   ENDED !!!!! \n\n");
  }

  return 0;
}

// Function definitions (same as before, just added comments)
float RectangleArea(float length, float width)
{
  return length * width;
}

// ... (similar comments for other functions)

// Function to convert square meters to square feet
float squareMetersToSquareFeet(float squareMeters)
{
  return squareMeters * 10.764;
}


Summary
This C program is an area calculator that allows the user to calculate the area of various geometric shapes. Here's a summary of the code:

Header Inclusions: The program includes necessary header files for standard input/output, math functions, and standard library functions.

Function Prototypes: Prototype declarations for functions that calculate the area of different geometric shapes and convert square meters to square feet.

Main Function: The main function begins with a welcome message and prompts the user to continue or exit. It then enters a loop where the user can choose different geometric shapes to calculate their areas. The loop continues until the user chooses to exit.

Shape Calculation: The program includes separate functions to calculate the area of shapes like Rectangle, Square, Circle, Triangle, Trapezium, Ellipse, Parallelogram, Rhombus, and Regular Polygon. Each case in the switch statement corresponds to a specific shape.

Conversion Function: There's a function to convert square meters to square feet.

Comments: Comments are added throughout the code to explain the purpose of each section, making it more readable and understandable.

User Interaction: The program interacts with the user, taking input for different geometric shapes and providing calculated results. The user can choose to exit at any point.

Exit Handling: The program gracefully exits and displays a goodbye message when the user chooses to end it.
