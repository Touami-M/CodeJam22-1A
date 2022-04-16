# CodeJam22-1A
This is my solution using C for the round 1A of this year's edition of Google's Code Jam.
Although I didn't manage to advance to round 2, I ranked in the top 46% in the world and 2nd in my country (Algeria).

For the first problem, it took me around 30 minutes to finish, the solution simply lies in finding out that if the ASCII code of a letter is smaller than that of the letter after, you double it, if it's bigger you don't, and if it's equal check the letter after that, and so on. And if you reach the end of the word you never double the last letter.
The second problem was a lot more challenging, generating the numbers is quite easy, and obviously the sum of each sub-set is half of the sum of all the numbers in the full set, the diffuclty wasn't in splitting the set, but in doing so fast enough (for the provided test set, the time limit was 2 seconds). For my solution I just sorted all the numbers in one array using selection sort, then, used the left-sum / right-sum method to find a split point. The solution works however it exceeds the given time limit. And for the final problem I didn't have enough time to tackle it.
