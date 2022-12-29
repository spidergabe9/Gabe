/*----------------------------------------------------------------------------
-		         SE 185: Midterm Project   	               -
- List the names of all team members, their roles, and their participation
Tu Reh, Bae Meh we both were Debugger and helped eachother with this code. Balanced participation 
															                                     -
-----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------
-								Includes									                                   -
-----------------------------------------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

/*----------------------------------------------------------------------------
-	                            Functions Prototypes                                   -
-----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------
-	                                Notes                                    -
-----------------------------------------------------------------------------*/

// Compile with gcc midtermproject.c -o midtermproject
// Run with ./midtermproject

/*----------------------------------------------------------------------------
-								Implementation								                               -
-----------------------------------------------------------------------------*/
int main()
{
	int randSeedInput;
	int quizChoice;
	int attempts = 0;
	int quizComplete = 0; // 0 is incomplete, 1 is complete
	double globalTotalScores = 0;
	double globalQuizAttempts = 0;
	double currentQuizScore = 0;
	double totalScores = 0;
	char continueQuiz = 'y';
	char userCharInput;
	char userStringInput[20];
		
	printf("\e[1mQuiz Time\e[0m\n");
	printf("\nPlease enter a number between 1 - 9 to randomly choose a quiz!\n");
	printf("Input: ");
	scanf("%d", &randSeedInput);
	
	//1.You will first choose a random number that provide you a quiz 
	//2.Gives you a quiz that gives you four attempts
	//3.You will have an average for the questions you have got correct 
	srand(time(0));
	quizChoice = rand() % (3) + 1;
	
	// Loop gives and grades quizzes
	while(1) {

        // Quiz 1
		if (quizChoice == 1) {
			while(quizComplete == 0) {
				printf("\n\e[1mQuiz 1\e\[0m\n");
				printf("\n\e[1mQuestion 1\e\[0m\n");
				printf("True or False\n");
				printf("\nprintf(\"There is 360 Days in a Year):\n");
				printf("\nT or F.\n");
				printf("Answer: ");
				scanf(" %c", &userCharInput);
				if (userCharInput == 'F') {
					printf("Correct!\n");
					currentQuizScore = currentQuizScore + 5;
				} else {
					printf("Wrong!\n");
				}
				printf("\n\e[1mQuestion 2\e\[0m\n");
				printf("\nint exampleArray[] = {2, 4, 6, 8}\n");
				printf("What does exampleArray[3] equal?\n");
				printf("A. 2 \nB. 4\nC. 6\nD. 8\n");
				printf("Answer: ");
				scanf(" %c", &userCharInput);
				if (userCharInput == 'D') {
					printf("Correct!\n");
					currentQuizScore = currentQuizScore + 5;
				} else {
					printf("Wrong!\n");
				}
				printf("\n\e[1mQuestion 3\e\[0m\n");
				printf("Fill in the blank: ______ is the best SE 185 professor \n");
				printf("Answer: ");
				scanf(" %s", &userStringInput);
				if (strcmp("Maruf", userStringInput) == 0) {
					printf("Correct!\n");
					currentQuizScore = currentQuizScore + 5;
				} else {
					printf("Wrong!\n");
				}
				attempts = attempts + 1;
				totalScores = totalScores + currentQuizScore;
				globalQuizAttempts = globalQuizAttempts + 1;
				globalTotalScores = globalTotalScores + currentQuizScore;
				if (currentQuizScore == 15) {
					printf("\nYou got all questions correct!\n");
					printf("It took you %d attempt(s) with an average score of %.2lf%%\n", attempts, (totalScores / (15 * attempts)) * 100);
					quizComplete = 1;
				} else {
					printf("\nQuiz failed! Try again!\n");
				}
			currentQuizScore = 0;		
			}
			quizComplete = 0;
			totalScores = 0;
			attempts = 0;
			quizChoice = 0;
		
		// Quiz 2	
		} else if (quizChoice == 2) {
			
			while(quizComplete == 0) {
				printf("\n\e[1mQuiz 2\e\[0m\n");
				printf("\n\e[1mQuestion 1\e\[0m\n");
				printf("True or False\n");
				printf("\nint x = 5;\nint y = 3;\nint calculation = x + y * x;\n");
				printf("\nint calculation is equal to 21. T or F.\n");
				printf("Answer: ");
				scanf(" %c", &userCharInput);
				if (userCharInput == 'F') {
					printf("Correct!\n");
					currentQuizScore = currentQuizScore + 5;
				} else {
					printf("Wrong!\n");
				}
				printf("\n\e[1mQuestion 2\e\[0m\n");
				printf("\nfor(int i = 0; i < 6; ++i) {\n	totalSum = totalSum + i\n}\n\n");
				printf("How many times does the for loop above iterate?\n");
				printf("A. 0\nB. 4\nC. 5\nD. 6\n");
				printf("Answer: ");
				scanf(" %c", &userCharInput);
				if (userCharInput == 'D') {
					printf("Correct!\n");
					currentQuizScore = currentQuizScore + 5;
				} else {
					printf("Wrong!\n");
				}
				printf("\n\e[1mQuestion 3\e\[0m\n");
				printf("Fill in the blank: Roses are_____ Violets are blue .\n");
				printf("Answer: ");
				scanf(" %s", &userStringInput);
				if (strcmp("red", userStringInput) == 0) {
					printf("Correct!\n");
					currentQuizScore = currentQuizScore + 5;
				} else {
					printf("Wrong!\n");
				}
				attempts = attempts + 1;
				totalScores = totalScores + currentQuizScore;
				globalQuizAttempts = globalQuizAttempts + 1;
				globalTotalScores = globalTotalScores + currentQuizScore;
				if (currentQuizScore == 15) {
					printf("\nYou got all questions correct!\n");
					printf("It took you %d attempt(s) with an average score of %.2lf%%\n", attempts, (totalScores / (15 *attempts)) * 100);
					quizComplete = 1;
				} else {
					printf("\nQuiz failed! Try again!\n");
				}
			currentQuizScore = 0;		
			}
			quizComplete = 0;
			attempts = 0;
			totalScores = 0;
			quizChoice = 0;
		// Quiz 3	
		} else if (quizChoice == 3) {
			
			while(quizComplete == 0) {
				printf("\n\e[1mQuiz 3\e\[0m\n");
				printf("\n\e[1mQuestion 1\e\[0m\n");
				printf("True or False\n");
				printf("\n George Washington was the 45th president");
				printf("\nT or F.\n");
				printf("Answer: ");
				scanf(" %c", &userCharInput);
				if (userCharInput == 'T') {
					printf("Correct!\n");
					currentQuizScore = currentQuizScore + 5;
				} else {
					printf("Wrong!\n");
				}
				printf("\n\e[1mQuestion 2\e\[0m\n");
				printf("\nWhen was C programming was created");
				printf("A. 1980s\nB. 1950s\nC. 1970s\nD. 2000s\n");
				printf("Answer: ");
				scanf(" %c", &userCharInput);
				if (userCharInput == 'C') {
					printf("Correct!\n");
					currentQuizScore = currentQuizScore + 5;
				} else {
					printf("Wrong!\n");
				}
				printf("\n\e[1mQuestion 3\e\[0m\n");
				printf("Fill in the blank: The ____ data type is used to declare integer variables.\n");
				printf("Answer: ");
				scanf(" %s", &userStringInput);
				if (strcmp("int", userStringInput) == 0) {
					printf("Correct!\n");
					currentQuizScore = currentQuizScore + 5;
				} else {
					printf("Wrong!\n");
				}
				attempts = attempts + 1;
				totalScores = totalScores + currentQuizScore;
				attempts = attempts + 1;
				globalTotalScores = globalTotalScores + currentQuizScore;
				if (currentQuizScore == 15) {
					printf("\n Congratulations!!!You got all questions correct!\n");
					printf("It took you %d attempt(s) with an average score of %.2lf%%\n", attempts, (totalScores / (15 * attempts)) * 100);
					quizComplete = 1;
				} else {
					printf("\nQuiz failed! Try again!\n");
				}
			currentQuizScore = 0;		
			}
			quizComplete = 0;
			totalScores = 0;
			attempts = 0;
			quizChoice = 0;
		}
		
		// Asks user if they want another quiz or quit. If quit, shows total attempts and overall score.
		printf("Would you like to take another quiz? Please type y or n: ");
		scanf(" %c", &continueQuiz);
		if (continueQuiz == 'y') {
			printf("Would you like to take quiz 1, 2, or 3? ");
			scanf("%d", &quizChoice);
		} else {
			printf("\nYou took a total of %.0lf quizzes with an overall average of %.2lf%%!", globalQuizAttempts, (globalTotalScores / (15 * globalQuizAttempts)) * 100);
			break;
		}
		
	}
	
			

    return 0;
}