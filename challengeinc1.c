//"49276d206b696c6c696e6720796f757220627261696e206c696b65206120706f69736f6e6f7573206d757368726f6f6d"
// should be
// SSdtIGtpbGxpbmcgeW91ciBicmFpbiBsaWtlIGEgcG9pc29ub3VzIG11c2hyb29t
// when converting hex to base64
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// basic principle: each hex digit is 4 bits long. each base64 character is 6
// bits long. thus, if we take 3 hex digits (12 bits) at a time,
//  we can generate 2 base64 characters

// break input into sets of 3 characters
char *chunk(char *hexStr, int hexStrLen) {

  int newHexStrLen = (hexStrLen / 3) + hexStrLen;
  // dynamically allocate array based on size of hexstr length +  hexStrLen / 3
  char *chunkedResult = hexStr;

  for (int i = 0; i < newHexStrLen; i++) {

    if (i % 3 == 0) {
      chunkedResult[i + 1] = '!';
      // need to figure out how to assign a delineating chunking character after
      // dynamically allocating the array
      //  solution for chunking-> after every third character, add a delin
      //  character like the null terminator to tell our program "ok, translate
      //  the next chunk into binary"
    } //
  }

  return (chunkedResult);
}

// function to convert chunks to binary
//

// function to convert binary to base64

int main() {

  char hexStr[] = "49276d206b696c6c696e6720796f757220627261696e206c696b65206120"
                  "706f69736f6e6f7573206d757368726f6f6d";
  int len = strlen(hexStr);

  char *chunkedHex = chunk(hexStr, len);
  printf("%s\n", chunkedHex);
  return 0;
}
