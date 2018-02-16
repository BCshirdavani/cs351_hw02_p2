//*********************************************
//
//	Author:			   Beau Shirdavani
//	Date:			     2-14-2018
//	Descritption:	 CS 351 - HW 02 - part 2
//					       encrypt strings by offsetting the
//					       ASCII char values a set amount
//
//*********************************************



#include <stdio.h>
#include <string.h>

int main()
{
   int offset = 0;
   int length = 0;
   char word[100];

   printf("Enter a word: ");
   scanf("%s", &word);
   // printf("Your word is: %s", word);
   printf("\n");

   length = strlen(word);
   // printf("Length of word: %d", length);
   // printf("\n");


   // need to clear the input buffer...
   while ((getchar()) != '\n');
   // while ((scanf()) != '\n');

   printf("Enter a number: ");
   scanf("%d", &offset);
   printf("\n");

   // printf("Your offset number: %d", offset);
   // printf("\n");

   char encrtyped[length];
   int i = 0;
   for (i = 0; i < length; i++){
    encrtyped[i] = (word[i] + offset);
   }

   printf("Encrypted text: %s", encrtyped);
   printf("\n");




  
   return 0;
}
