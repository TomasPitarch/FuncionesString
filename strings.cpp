#include <stdio.h>
#include <conio.h>

char* strcpy (char [], char[]);
char* strcat (char [], char[]);
//char* str
int main()
{ 
//Corroborar la funcion stdcpy   / char A[]={"holaperez"},B[]={"holatu"};strcpy (A,B);printf ("%s",A);getch ();
    
//Corroborar la funcion strcat   /  char A[30]={"holaperez"},B[]={"holatu"};strcat (A,B);printf ("%s",A);getch (); 
    
return 0;    
}
 
char* strcpy (char A[], char B[])
 {char *x = A;
 
     while (*B)
        { *A = *B;
           A++;
           B++;
        }
     
 *A='\0';
   
   return x;
}



char* strcat (char A[],char B[])

{  char* x= A;

        while (*A)
              {A++;
              }
        while (*B)
             {*A=*B;
               A++;
               B++;
             }
      
*A='\0';  
      
   return x;   
      
      }
