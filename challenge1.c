// cryptopals challenges redone in c
// (i hate myself yippee)
//

/*
The string:

49276d206b696c6c696e6720796f757220627261696e206c696b65206120706f69736f6e6f7573206d757368726f6f6d
Should produce:

SSdtIGtpbGxpbmcgeW91ciBicmFpbiBsaWtlIGEgcG9pc29ub3VzIG11c2hyb29t
So go ahead and make that happen. You'll need to use this code for the rest of the exercises.
 *
 *
 */

#include <stdio.h> 
#include <stdlib.h> 


// each pair of hex characters is equivalent to 1 byte, so we need to chunk the string by 2's, lets make a function to do this + return the binary representation: 

unsigned char* hex_to_binary(char[] hex, int size){
	//allocate memory 
	char *binaryString = malloc(size * 8); 
	
	//allocate mem to return buffer

}




int main(){

// must convert hex string to bits

	char input_string[] = "49276d206b696c6c696e6720796f757220627261696e206c696b65206120706f69736f6e6f7573206d757368726f6f6d"; 
	


}
