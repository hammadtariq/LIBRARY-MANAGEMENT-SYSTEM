void view_all_books (int n)
{
	int ch;
	
	printf ("\n\n\t\t\t VIEW ALL BOOKS!!\n\n");
	printf ("\n\n\t\t\t WHERE YOU WANT TO SEE??\n\n");
	printf ("\t\t\t 1) ON CONSOLE \n\t\t\t 2) ON HTML FILE \n\t\t\t 3) RETURN TO PREVIOUS MENU \n\t\t\t 4) EXIT");
	
	printf ("\n\n Enter Choice: ");
	scanf ("%d", &ch);
	
	system ("cls");
	
	if (ch == 1)
	{
		view_books_console (n);
	}
	else if (ch == 2)
	{
		view_books_html (n);
	}
	else if (ch == 3)
	{
		system ("cls");
		
		if (n == 0)
		{
			section();
		}
		else if ( n== 1)
		{
			section_1();
		}
	}
	else if(ch == 4)
	{
		system ("cls");
		exit1();
	}
	else
	{
		printf ("\n Please select right choice");
		sleep (1000);
		system ("cls");
		view_all_books (n);
	}
}
