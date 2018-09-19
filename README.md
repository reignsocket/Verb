Problem Description  
Alex likes the lyrics game. The lyrics game is a very simple game. The lyrics game includes an N * M sizeRectangular grid plate and P words. Then you need to put a letter in each square so that each word can be in the square
Found on the plate. Every word can be found to meet the following conditions:Each square cannot belong to more than one word at the same time. A word of length k must occupy k squares. single
The direction in which the words appear in the checkerboard can only be vertical or horizontal (can be turned from vertical to horizontal and vice versa).
Your task is to first find all the words on the checkerboard. Of course, there may be some squares on the board that are not occupied by words.
according to. Then find out these unused squares and put the letters on these squares into a "mysterious word" in lexicographic order.If you don't know the rules yet, we can use an example to illustrate, such as looking for the word BEG in the image below.GEE.

![image](https://github.com/reignsocket/Verb/blob/master/verb.png)

Input data  
The first line of input consists of three integers N, M and P (2 <= M, N <= 10, 0 <= P <=100). The next N lines,
Each line consists of M characters to represent the checkerboard. The next P line gives the words that need to be found in the checkerboard.
Enter a guaranteed lyrics game with at least one set of answers. The letters given in the input are all uppercase letters

Output requirements  
Output "mystery words", note that the letters in "mystery words" are given in lexicographic order.  

Input sample  
3 3 2  
EBG  
GEE  
EGE  
BEG  
GEE  

Output sample  
EEG  

Problem solving  
The conditions given in the title are relatively concealed. The letters given in the input are all uppercase letters – indicating that the output can only be large Write letters. Enter a guaranteed lyrics game with at least one set of answers – this means we don't have to find the location of the word, as long as It is enough to remove the letters occupied by these words. The letters in "mysterious words" are given in lexicographical order - explain meAs long as you know the composition of the letters in the "mysterious word", you can output it in lexicographic order if the letter composition is determined.There is only one way. Analysis here we found that this is actually a very simple question. Give a collection of letters from Remove some of the letters that appear in the given word and output the remaining letters in lexicographic order! You can define an array of 26 elements, recorded in the input rectangle, the number of times each letter appears, When reading a word, the value of the element in the array corresponding to the letter in the word is decremented by one. After processing all the words, the array will be The letters corresponding to the elements other than 0 are sequentially output, and the value of the array element is a few, and the letter is output several times.

Common problems in implementation  
Question 1: The understanding of the topic is not thorough enough, especially for the phrase "Enter a guaranteed lyrics game with at least one set of answers"
Insufficient understanding, trying to find out how to fill in the words, the results can not solve the problem well;
Question 2: The title does not indicate that the length of p words must be M, so when reading a word, the array is small.
Causing an error;
Question 3: If a character is read in one character, and the newline at the end of each line is not omitted, an error will occur.


