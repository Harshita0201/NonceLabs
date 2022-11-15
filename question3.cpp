// Ques: 3 Write a function that will check if two given characters are in the same case.
// If either of the characters is not a letter, return -1
// If both characters are the same case, return 1
// If both characters are letters, but not the same case, return 0
// Examples
// 'a' and 'g' returns 1
// 'A' and 'C' returns 1
// 'b' and 'G' returns 0
// 'B' and 'g' returns 0
// '0' and '?' returns -1

int areSameCase(char str[],char str1[]){     
  int i=0,j=0;     
  while(str[i]!='\0' && str1[j]!='\0'){        
       if((str[i]>='a' && str[i]<='z') == (str1[j]>='a' && str1[j]<='z')){             
         return 1;  
       } else if((str[i]>='A' && str[i]<='Z') == (str1[j]>='A' && str1[j]<='Z')){          
         return 1;        
       }  else {           
         return 0;         
       }             
       i++;            
       j++;   
  } 
}
