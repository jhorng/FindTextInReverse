#include <stdio.h>
#include "ReversedFindText.h"

/**
 * Find the first (partial) word in the text and return the position of 
 * the first letter.
 *Eg.,
 *  text       = hello, my name is Alladin
 *  wordToFind = lad
 *  The return value is 18
 *
 * Input:
 *    test          contains a bunch of words
 *    wordToFind    is the (partial) word to find in the text
 * Return:
 *    the position of the first letter found in text. If the word 
 *    cannot be found in the text, -1 is returned.
 */

int reversedFindText(char *text, char *wordToFind){
	int a, b, i=0, j=0, k=0, x, y;
		
		while (text[i] != 0){
			i++;
		}
		printf("Text = %s\n", text);
		
		while (wordToFind[j] != 0){
			j++;
		}
    
		printf("WordToFind = %s\n", wordToFind);

		i--, j--;

		x = i;
		y = j;

		
		while (text[i] != 0 && wordToFind[j] != 0){
			x=i;
			j=y;
			while (text[x] == wordToFind[j])
			{
				x--;
				j--;
				if(wordToFind[j]==0)
					return x;
				
			}	
			i--;
			
		}

	 return -1;
}