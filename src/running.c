
#include <stdio.h>
void main()
{
	int characters[26];
	int n, m, p; //In the first line of input, the input consists of a matrix of n*m, and p words.
	int i, j; //Loop variable
	for(i = 0; i < 26; i++) {
		characters[i] = 0;//Initial value
	}
	scanf("%d%d%d", &n, &m, &p);
	for(i = 0; i < n; i++){//This section reads the matrix of n*m and records the number of occurrences of each letter in the matrix.
		char str[11];
		scanf("%s", str);
		for(j = 0; str[j] != '\0'; j++)
			characters[str[j] - 'A'] ++;
	}
	for(i = 0; i < p; i++){ //This section reads p words and puts the letters that appear in the word Removed from the cumulative array of the previous paragraph
		char str[200];
		scanf("%s", str);
		for(j = 0; str[j] != '\0'; j++)
			characters[str[j] - 'A'] --;
	}
	for(i = 0; i < 26; i++){//This section outputs all letters that appear more than 0.
		if(characters[i] != 0)
			for(j = 0; j < characters[i]; j++)
				printf("%c", i + 'A');
	}
	printf("\n");
}
