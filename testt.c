#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

struct login                           // before the first use of `l`.
{
    char fname[30];
    char lname[30];
    char username[30];
    char password[20];
   
};



int main (void)
{
      struct login l; 
        bool f;
       int active;

           printf("\nEnter the Activation");

          scanf("%d",&active);

        f = active ;

   

    printf("\nEnter Username:\n");
    scanf("%s",l.username);
    printf("\nEnter Password:\n");
    scanf("%s",l.password);


 

        getchar();

        if(f){

         char usernamee[30],passwordd[20];
   

  

    

    printf("\nPlease Enter your login credentials below\n\n");
    printf("Username:  ");
    
    scanf("%s",usernamee);

    /*fgets(username, 30, stdin);*/
    printf("\nPassword: ");
    printf("\n");
   /* fgets(password, 20, stdin);*/
    scanf("%s",passwordd);
    
       int r1 = strcmp(usernamee,l.username);
       int r2 = strcmp(passwordd,l.password);
       
       
     

        if(r1&&r2)
        {
             printf("\nno Login\n"); 
        }else{
           printf("\nSuccessful Login\n"); 
        }
       
        
return 0 ;
 
}
}

