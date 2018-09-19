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
