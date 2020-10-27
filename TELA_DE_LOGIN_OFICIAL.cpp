#include <stdio.h>
#include <string.h>
int main ( ){
char login[50] = "japa";
char logina[50] = "luca";
char login1[50];  
char senha[15] = "senha"; 
char senha1[15];
printf("LOGIN: ");

scanf("%s",login1); //String se lê com %s
  if (strcmp(login,login1) ==0) //strcmp ( ) 
  {printf("coloque a senha\n");
       }
	   if(strcmp(logina,login1)==0)
	   {printf("coloque a senha\n");
       }
	   else
	    {printf("error\n");
	}
scanf("%s",senha1);
if (strcmp(senha, senha1) ==0) //strcmp ( ) 
  {printf("Logado \n a senha de acesso:301crage\n");
       }else
	    {printf("error\n");
	}


		return 0; 
		}

