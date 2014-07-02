void manage_account(void)
{
	int n;
	
	printf ("\n\n\t\t MANAGE ACCOUNT  ");
	printf ("\n\n\t\t Please Select From Following:  ");
	printf ("\n\n\n\t\t 1)Forget Password/User name. \n\n\t\t 2)Change Password/User name.  ");
	printf ("\n\n\t\t 3)Return to previous menu. \n\n\t\t 4)Exit.  ");
	
	printf ("\n\n\n\t\t ENTER CHOICE:");
	scanf ("%d", &n);
	
	system ("cls");
	
	switch (n)
	{
		case 1:
			view_pass();
			break;
		
		case 2:
			change_info();
			break;
		
		case 3:
			system ("cls");
			main();
			break;
		
		case 4:
			system ("cls");
			exit1();
			break;
		
		default:
			printf ("\n\n SORRY WRONG CHOICE!!!!");
			
			sleep (1000);
			system ("cls");
			manage_account();
	}
	
	getch();
}

void view_pass (void)
{
	FILE *inp, *secret;
	
	char question[30] = {0}, ans[30] = {0}, answer[30] = {0}, name[30] = {0}, password[30] = {0};
	int a = 0;
	
	inp = fopen ("login_info.txt", "r");
	
	fgets (name, 30, inp);
	fgets (password, 30, inp);
	
	fclose (inp);
	
	secret = fopen ("secret.txt", "r");
	
	fgets (question, 30, secret);
	fgets (ans, 30, secret);
	
	fclose (secret);
	
	printf ("\n\n Your secret question is: %s ", question);
	
	printf ("\n\n ANSWER:");
	fflush (stdin);
	gets (answer);
	
	a = strcmp (ans, answer); 
	
	printf ("\n\n PLEASE WAIT");
	
	sleeping();
	
	if (a == 0)
	{
		printf ("\n\n RIGHT ANSWER!");
		printf ("\n\n\n USER NAME : %s ", name);
		printf ("\n\n PASSWORD : %s ", password);
		
		sleep (3000);
		system ("cls");
		manage_account();
	}
	else if (a != 0)
	{
		printf ("\n\n SORRY!! WRONG ANSWER");
		
		sleep (1500);
		system ("cls");
		manage_account();
	}
}

void change_info (void)
{
     int a,b;
	FILE *inp, *write;
	
	inp = fopen ("login_info.txt", "r");
	
	char name[30], password[30], name1[30], password1[30], name2[30], password2[30];
	fscanf (inp, "%s\n%s", name, password);
	
	fclose (inp);
	
	printf ("\n\n Enter previous user name: ");
	fflush (stdin);
	gets (name1);
	
	printf ("\n\n Enter previous password: ");
	fflush (stdin);
	gets (password1);
	
	printf ("\n\nPLEASE WAIT");
	
	sleeping();
	
	a = strcmp (name1, name);
	b = strcmp (password1, password);     
	
	if (a == 0 && b == 0)
	{
		write = fopen ("login_info.txt", "w");
		
		printf ("\n\n RIGHT INFORMATION");
		
		sleep (1000);
		system ("cls");
		
		printf ("\n\n Enter new user name: ");
		fflush (stdin);
		gets (name);
		
		printf ("\n\n Enter new password: ");
		fflush (stdin);
		gets (password);
		
		printf ("\n\n PLEASE WAIT");
		
		sleeping();
		system ("cls");
		
		printf ("\n\n SUCCESSFULLY ADDED");
		
		sleep (1500);
		system ("cls");
		manage_account();
		
		fprintf (write, "%s\n", name);
		fprintf (write, "%s", password);
		
		fclose (write);
	}
	else if ((a != 0) && (b != 0))
	{
		printf ("\n\n SORRY!!! WRONG INFORMATION");
		
		sleep (1000);
		system ("cls");
		manage_account();
	}
}
