  int main (){
	char arr[] = "viktoriia  viktoriia";		// create array with the word
	int v = 0;				// create a variable for vowels
	int n = 0;
        while (arr[n] != '\0') {  		// create a cycle to count a size of the array
            
        
        					// create a cycle to define an array character
        	switch (arr [n]){
        	case 'a': v++; break;
        	case 'e': v++; break;
        	case 'i': v++; break;
        	case 'o': v++; break;
        	case 'u': v++; break;
        	case 'y': v++; break;
		}
		n++;
		}
	
 return 0;
 }
