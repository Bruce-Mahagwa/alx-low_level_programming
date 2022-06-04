#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	
/*	char characterName[] = "James";
	int characterAge = 35;
	int age;
	char grade;
	char phrase[20];
	printf("There was a man named %s\n", characterName);
	printf("And he was %d years old\n", characterAge);
	characterAge = 23;
	printf("And there is another one called %s\n", characterName);
	printf("He is %d years old\n", characterAge);
	printf("%ld\n", 10000000000);
	printf("And he will earn %d\n", 10000000);
	printf("Do you know that my name is %s and I earn %ld and this is a %f\n", "Bruce", 1000000000000000, 5.4678);
	printf("%d\n", 3 + 6);
	printf("%f\n", pow(7.2, 9.45));
	printf("%lf\n", sqrt(78.99768));
	printf("%f\n", ceil(32.45));
	printf("Enter your age fool!\n");
	scanf("%d", &age);
	printf("You are %d years old\n", age); 
	printf("Tell me your grade\n");
	scanf("%c", &grade);
	printf("Your grade is %c", grade);
	printf("Enter your name fool!\n");
	scanf("%s", phrase);
	printf("Your phrase is %s\n", phrase);
	printf("Tell us your name please\n");
	fgets(phrase, 20, stdin);
	printf("Your name is %s\n", phrase);

	int num1;
	int num2;
	printf("Enter first number\n");
	scanf("%d", &num1);
	printf("Enter second number\n");
	scanf("%d", &num2);
	printf("Answer: %d", num1 + num2); */

	char color[20];
	char noun[20];
	char person[20];
	char person1[20];
	printf("Enter a clour ");
	scanf("%s", color);
	printf("Enter a noun ");
	scanf("%s", noun);
	printf("Enter a person ");
	scanf("%s%s", person, person1);
	printf("Roses are %s\n", color);
	printf("Violets are %s\n", noun);
	printf("I love %s %s\n", person, person1);
	return 0;
}
