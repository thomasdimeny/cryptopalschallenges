//"49276d206b696c6c696e6720796f757220627261696e206c696b65206120706f69736f6e6f7573206d757368726f6f6d"
//should be
//SSdtIGtpbGxpbmcgeW91ciBicmFpbiBsaWtlIGEgcG9pc29ub3VzIG11c2hyb29t
// when converting hex to base64
//

//basic principle: each hex digit is 4 bits long. each base64 character is 6 bits long. thus, if we take 3 hex digits (12 bits) at a time,
// we can generate 2 base64 characters

//break input into sets of 3 characters 
char[] chunk(char hexStr[]){

  //need to refine this wth malloc- make array that can hold all the 3-by chunks derived from the given hex string
  char chunkedResult[sizeof(hexStr)] = "";


    for (int i = 0; i < sizeof(hexStr); i++){

        //store the chunk:
        char hexChunk[3] = "";
        
        //if i is a multiple of 3, we have 1 chunk:
         
        if (i % 3 != 0){
            //add character to the string        
        }else{
            //add char to str        
        }   
    }

    return()
       
  }


  //function to convert chunks to binary
  //

  //function to convert binary to base64
