int Solution::reverse(int A) {
   
 if(A>INT_MAX||A<INT_MIN)
{
 
return 0;
  
  }
   
 long int reverse=0;

    if(A<0){
        
A=-A;
         
while(A>0){

        reverse=10*reverse+A%10;
    
    A=A/10;
   
 }
     
if(-(reverse)>INT_MAX||-(reverse)<INT_MIN){
 
       return 0;
    
}
    return -reverse;
 
   }
    while(A>0){
    
    reverse=10*reverse+A%10;
  
      A=A/10;
   
 }
     
if(reverse>INT_MAX||reverse<INT_MIN){
   
     return 0;
    
}
    
return reverse;
  
  }

