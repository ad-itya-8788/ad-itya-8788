#include <stdio.h>
#include <string.h>
int main() 
{
    char str[100],str2[100],sub[100],ch;
    int choice, position, length, vowels, i,j,found;
    while(1) 
	{
        printf("\n--- MENU ---\n");
        printf("1. Find length of string\n");
        printf("2. Copy string\n");
        printf("3. Concatenate two strings\n");
        printf("4. Compare two strings\n");
        printf("5. Reverse string\n");
        printf("6. Convert string to uppercase\n");
        printf("7. Convert string to lowercase\n");
        printf("8. Count vowels in string\n");
        printf("9. Find substring in string\n");
        printf("10. Remove whitespace from string\n");
        printf("11. Find character in string\n");
        printf("12. Trim string (remove leading and trailing spaces)\n");
        printf("13. Remove all occurrences of a character\n");
        printf("14.Exit...");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        getchar();  
        switch (choice) 
		{
            case 1:
                printf("Enter a string: ");
                gets(str);
                length = strlen(str); 
                printf("Length of string: %d\n", length);
                break;
            case 2:
                printf("Enter string to copy: ");
                gets(str);
                strcpy(str2, str);  
                printf("Copied string: %s", str2);
                break;
            case 3:
                printf("Enter first string: ");
                gets(str);
                printf("Enter second string: ");
                gets(str2);
                strcat(str, str2);  
                printf("Concatenated string: %s", str);
                break;
            case 4:
                printf("Enter first string: ");
                gets(str);
                printf("Enter second string: ");
                gets(str2);
                if (strcmp(str, str2) == 0) 
				{ 
				printf("The strings are equal.\n");
                } 
				else
				{
                    printf("The strings are not equal.\n");
                }
                break;
            case 5:
                printf("Enter string to reverse: ");
                gets(str);
                strrev(str);  
				printf("Reversed string: %s", str);
                break;
            case 6:
                printf("Enter string to convert to uppercase: ");
                gets(str);
                strupr(str);  
                printf("Uppercase string: %s", str);
                break;
            case 7:
                printf("Enter string to convert to lowercase: ");
                gets(str);
                strlwr(str);  
				printf("Lowercase string: %s", str);
                break;
            case 8:
                printf("Enter string to count vowels: ");
                gets(str);
                vowels = 0;
                for (i = 0; str[i] != '\0'; i++) 
				{
                    if (strchr("aeiouAEIOU", str[i])) 
					{  
                        vowels++;
                    }
                }
                printf("Number of vowels: %d\n", vowels);
                break;
            case 9:
                printf("Enter string: ");
                gets(str);
                printf("Enter substring to find: ");
                gets(sub);
                if (strstr(str, sub))
				 { 
                   printf("Substring found in string.\n");
                 } 
				else
				{
                    printf("Substring not found.\n");
                }
                break;
            case 10:
                printf("Enter string to remove whitespace: ");
                gets(str);
                char *ptr = str;
                while (*ptr) 
				{
                    if (*ptr != ' ') 
					{
                        putchar(*ptr); 
                    }
                    ptr++;
                }
                printf("\n");
                break;
            case 11:
                printf("Enter string: ");
                gets(str);
                printf("Enter character to find: ");
                ch = getchar();
                if (strchr(str, ch)) 
				{ 
                    printf("Character found in string.\n");
                } 
				else
				{
                   printf("Character not found in string.\n");
                }
                break;
            case 12:
                printf("Enter string to trim: ");
                gets(str);
                int start = 0, end = strlen(str) - 1;
                while (str[start] == ' ') 
				start++;  
                while (str[end] == ' ') 
				end--;  
                for( i=start;i<=end;i++)
				 {
                    putchar(str[i]);
                }
                printf("\n");
                break;
            case 13:
                printf("Enter string: ");
                gets(str);
                printf("Enter character to remove: ");
                ch = getchar();
                for ( i = 0; str[i] != '\0'; i++) 
				{
                    if (str[i] == ch) 
					{ 
                        for ( j = i; str[j] != '\0'; j++) 
						{
                            str[j] = str[j + 1];
                        }
                    }
                }
                printf("String after removal: %s", str);
                break;
             case 14:
			    printf("\nExit....");
				break;   
            default:
                printf("Invalid choice!\n");
                break;
        }
    }

    return 0;
}

