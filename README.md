# StringCompareAlgorithms

There are three main files being used to form the program. 
i) code.cpp: The dice.h and leveshtine.h header files are include in the code.cpp file. In this main file, the two strings given by the user are taken as input and the dice coefficient and             leveshtein distance for the strings are calculated.
ii) dice.h: This file is the header file which contains the code for the function that calculates the dice coefficient of two strings.    
iii) leveshtein.h: This file is the header file that contains the code for the fumction that calculates the leveshtein distance between two strings.

# Leveshtein Distance
  This is an algorithm under the edit distance based similarities algorithms. There are nine edit based similarities algorithms. Levenshtein,s distance is one of the most widely known edit based similarity algorithm for comparing strings.
Working of Levenshtein 
The Levenshtein algorithm computes the minimum number of edit operations that are needed for modifying one string to get the other string. The method of computing which is most widely used is by the dynamic programming approach. A matrix is initialized measuring in the (m,n)-cell the Levenshtein distance between the m-character prefix of one string with the n-prefix of the other word. The matrix can be assigned from the top left to the bottom right corner. They move horizontally or vertically when there is an insert or a delete, respectively. The cost value is normally given to 1 for each of the operations insertion or deletion. The diagonal jump may cost either 1, if the two characters in the row and column are not the same or 0, if they are the same. Each cell always minimizes the cost for the cell. This way the number in the bottom right corner of the matrix is the Levenshtein distance between both the strings.

# Sorensen Dice Coeffecient
  This is an lgorithm under the token based similarity algorithms. It is one among seven of the token based similarity algorithms.
Dice's coefficient computes the similarity between one set and another set. In this program we measure how similar two strings are in terms of the number of common bigrams (a bigram is a pair of adjacent letters in the string). Fro example “word” has two bigrams ‘wo’ and ‘rd’.

# Chrono Library
  It is a header file included for the use of functions that are used in the program to calculate the time taken by the functions.
Chrono library serves the purpose of handling date and time. This library was made to deal with the fact that timers and clocks may be different on various systems and hence to improve over time when considering precision. The special property about chrono is that it provides a precision-neutral concept by separating duration and point of time from specific clocks.

 
