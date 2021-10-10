#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// VERIFY WEATHER GIVEN CHAR IS ALPHABET OR NOT
int isChar(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    return 1;
    return 0;
}


// TO CHECK VALIDITY OF EMAIL
int is_valid(char email[],int size)
{
    
	// VERIFY WEATHER FIRST CHAR IS ALPHABET 
	if (!isChar(email[0])) {

		// If it's not an alphabet
		// email id is not valid
		return 0;
	}
	// Variable to store position of @ and .
	int AtThe = -1, Dot = -1;

	// Traverse over the email id
	// string to find position of
	// Dot and At
	for (int i = 0;i < size; i++) {

		// If the character is '@'
		if (email[i] == '@') {
            if(AtThe != -1)
            {
                AtThe = -1;
                break;
            }
			AtThe = i;
		}

		// If character is '.'
		else if (email[i] == '.') {
            if(Dot != -1)
            {
                Dot = -1;
                break;
            }
			Dot = i;
		}
	}

	// If At or Dot is not present
	if (AtThe == -1 || Dot == -1)
		return 0;

	// If Dot is present before At
	if (AtThe > Dot)
		return 0;

	// If Dot is present at the end
	if(Dot >= size-1)
    return 0;
    // Last char must not be _ - 
    if(email[size-1]=='_' || email[size-1]=='-')
    return 0;
    return 1;
}

// Driver Code
int main()
{
	// Given string email
	char email[] = "simple@example.com";
    int size = sizeof(email)/sizeof(email[0])-1;
	// Function Call
	int ans = is_valid(email,size);

	// Print the result
	if (ans==1) {
		printf("valid");
	}
	else {
		printf("invalid");
	}

	return 0;
}
