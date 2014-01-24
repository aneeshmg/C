C Applications and tools
=====================================

RandomNumberGenerator
-------------------------------------
* Generates random numbers(float)
* To modify the algorithm, change the integer values in the switch case (preferably to some primes)

CountdownTimer
-------------------------------------
* A simple countdown timer accurate to +/- 1s

CaesarCipher
-------------------------------------
* A very simple cipher called Caesar cipher (dig up on wiki to know more)
* 'n' number of encrypts should be followed by 'n' number of decrypts
* To change the algorithm, change the value of the "DISP" macro in both the files
* Usage: You and the receiver must know the password...knowing the password, sender sends the encrypted 'message' file along with the executable of the decrypter and Voila at the receivers end!

JumpSearch
------------------------------------
* A simple, efficient search algorithm
* Requires the array to be sorted
* The algorithm mimics a human searching for a page in a book without using the contents/index
* The algorithm is most efficient(better than BinarySearch) when the difference between successive elements of the array is close to the value (array[N] / N), where N is size of array
* The algorithm is always better than LinearSearch and can outperform BinarySearch under the above mentioned condition

Regular Expression Evaluator
------------------------------------
* A simple regular expression evaluator (Supports only 'star' and 'plus' R.E symbols
* Takes in a regular expression and a string and evaluates the string according to the regular expression entered and returns boolean
* (work in progress)

DateToDay Converter
------------------------------------
* A simple date-day converter
* Takes in the date in the format dd/mm/yy and outputs the 'day'.
* Eg: Ip: 18 01 2014
Op: This is a Saturday.
