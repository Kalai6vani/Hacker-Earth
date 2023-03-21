/*Problem
Read different types of data from standard input, process them as shown in output format and print the answer to standard output.

Input format:
First line contains integer N.
Second line contains string S.

Output format:
First line should contain N x 2.
Second line should contain the same string S.

Sample input
5
helloworld

Sample output
10
helloworld
*/

#include <stdio.h>

int main(){
	int num;
	scanf("%d", &num); 
	char S[15];
	scanf("%s",S);             	                  // Reading input from STDIN
	printf("%d\n%s", num*2,S);       // Writing output to STDOUT
}
