# include <stdio.h>
# include <conio.h>
# include <string.h>
# include <stdlib.h>

# define pie 3.14159265

# include "libraries.c"

int stringcompare (const char* A, const char* B)
{
	int R=0,i;
	char Temp=0;
	
	for(i=0 ; A[i]!='\t'&&B[i]!='\0' ; i++)
	{
		if(A[i]==B[i])
		{
			R=1;
		}
		else
		{
			R=0;
		}
	}
	return R;
}

int main()
{
    system("color 1F");
	int a=0,n=0;
	
	start_menu();
	
	printf("\n\n\t\t WHO ARE YOU???? \n\n\n\n\t\t1) STUDENT \n\t\t2) HEAD");
	
	printf("\n\n Enter choice: ");
	scanf("%d",&a);
	
	if(a==1)
	{
		char name[100];
		int i=100,a,b,n,c;
		
		system("cls");
		
		printf("\n\t\t LIBRARY MANAGEMENT SYSTEM");
		printf("\n\n\n\t PLEASE SELECT FROM THE FOLLOWING: ");
		printf("\n\n\n\t\t 1) LOGIN \n\t\t 2) EXIT ");
		
		printf("\n\n Enter choice: ");
		scanf("%d",&n);
		
		system("cls");
		
		if(n==1)
		{
			char *password = (char*) malloc(i*sizeof(char));
			
			for(c=4;c>0;c--)
			{
				printf("\n\t\t\tWELCOME TO LOGIN PAGE");
				printf("\n\n\t\t\t\t\t\tTRIES LEFT: %d",c );
				
				int tries=c;
				
				printf("\n\n ENTER USER NAME:");
				fflush(stdin);
				gets(name);
				
				printf("\n\n ENTER PASWORD: ");
				gets(password);
				fflush(stdin);
				
				a=strcmp(name,"student");
				b=strcmp(password,"ssuet");
				
				printf("\n\n PLEASE WAIT");
				
				sleeping();
				system("cls");
				
				if((a==0)&&(b==0))
				{
					printf("\n\n USERNAME AND PASSWORD ACCEPTED");
					printf("\n\n\n\t\t PRESS ENTER TO CONTINUE.");
					
					getch();
					system("cls");
					section_1();
					break;
				}
				else
				{
					printf("\n\n INVALID USERNAME OR PASSWORD ");
					printf("\n\n\n\t\t TRY AGAIN.........");
					
					tries--;
					
					getch();
					system("cls");
					
					if(tries==0)
					{
						system("cls");
						
						printf("\n\n\n\t SORRY DUE TO SECURITY REASONS WE HAVE TO CLOSE THE PROGRAM!!!!");
						
						getch();
						exit(1);
					}
				}
			}
		}
		else if(n==2)
		{
			exit1();
		}
		else
		{
			printf("\n\n Please Select right choice..");
		
			sleep(1000);
			system("cls");
			main();
		}
	}
	else if(a==2)
	{
		system("cls");
		
		printf("\n\t\t LIBRARY MANAGEMENT SYSTEM");
		printf("\n\n\n\t PLEASE SELECT FROM THE FOLLOWING: ");
		printf("\n\n\n\t\t 1) LOGIN \n\t\t 2) REGISTER \n\t\t 3) MANAGE ACCOUNT \n\t\t 4) EXIT ");
		
		printf("\n\n Enter choice: ");
		scanf("%d",&n);
		
		system("cls");
		
		switch(n)
		{
			case 1:
				login();
				system("cls");
				section();
				break;
			
			case 2:
				system("cls");
				reg();
				break;
			
			case 3:
				system("cls");
				manage_account();
				break;
			
			case 4:
				system("cls");
				exit1();
			
			default:
				printf("\n\n Please Select right choice..");
				
				sleep(1000);
				system("cls");
				main();
		}
	}
	else
	{
		printf("\n\n Please Select right choice..");
		
		sleep(1000);
		system("cls");
		main();
	}
	
	getch();
	return 0;
}
