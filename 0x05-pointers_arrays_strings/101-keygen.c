#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 12

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char password[PASSWORD_LENGTH + 1];
	const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

	srand(time(NULL)); /* seed the random number generator with the current time */

	for (int i = 0; i < PASSWORD_LENGTH; i++) {
	password[i] = charset[rand() % sizeof(charset)];
	}
	password[PASSWORD_LENGTH] = '\0'; /* terminate the string */

	printf("%s", password);

	return (0);
}

