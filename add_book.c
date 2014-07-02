struct book
{
	char title[50];
	char author[50];
	char vol[10];
	char name[30];
	char rollno[10];
	char search[100];
	char html[100];
	char record[100];
};

void addbook (void)
{
	int n;
	
	printf ("Which section do you want to enter?");
	printf ("\n 1. Science");
	printf ("\n 2. Computers");
	printf ("\n 3. Novels");
	printf ("\n 4. Physics");
	printf ("\n 5. Others");
	printf ("\n 6. Return to previous menu");
	printf ("\n 7. Exit");
	
	printf ("\n\nEnter your choice: ");
	scanf ("%d", &n);
	
	system ("cls");
	
	switch (n)
	{
		case 1:
			add_science();
			break;
		
		case 2:
			add_computer();
			break;
		
		case 3:
			add_novels();
			break;
		
		case 4:
			add_physics();
			break;
		
		case 5:
			add_others();
			break;
		
		case 6:
			section();
			break;
		
		case 7:
			exit1();
			break;
		
		default:
			printf ("\n\nplease select right choice!!!!");
			sleep (1000);
			system ("cls");
			addbook();
	}
	
	getch();
}

void add_science (void)
{
	printf ("\n\n\t\t\t WELCOME TO SCIENCE SECTION!\n\n");
	FILE *out, *inp, *store;
	
	store = fopen ("science_books.txt", "a");
	inp = fopen ("science_counter.txt", "r");
	
	int n = 100, i, sum = 0;
	
	fscanf (inp, "%d", &sum);
	
	printf ("Enter the number of books you want to add: ");
	scanf ("%d", &n);
	
	sum += n;
	
	out = fopen ("science_counter.txt", "w");
	
	fprintf (out, "%d", sum);
	
	system ("cls");
	
	struct book add[n];
	
	for (i = 0; i < n; i++)
	{
		printf ("\n\n\t\t\tBook No. %d\n\n", i+1);
		
		printf ("Enter the title of book: ");
		fflush (stdin);
		gets (add[i].title);
		
		printf ("Enter the author of book: ");
		fflush (stdin);
		gets (add[i].author);
		
		printf ("Enter the volume of book: ");
		fflush (stdin);
		gets (add[i].vol);
		
		system ("cls");
	}
	
	for (i = 0; i < n; i++)
	{
		fprintf (store,"%s\t%s\t%s\n", add[i].title, add[i].author, add[i].vol);
	}
	
	fclose (out);
	fclose (inp);
	fclose (store);
	
	printf ("\t\t\t\n\n PLEASE WAIT");
	
	sleeping();
	system ("cls");
	
	printf ("\t\t\t\n\n SUCCESSFULLY ADDED! \n\n\n\t\t\tPRESS ANY KEY TO CONTINUE...");
	
	getch();
	system ("cls");
	addbook();

}

void add_computer (void)
{
	printf ("\n\n\t\t\t WELCOME TO COMPUTER SECTION!\n\n");
	
	FILE *out, *inp, *store;
	
	store = fopen ("computer_books.txt", "a");
	inp = fopen ("computer_counter.txt", "r");
	
	int n = 100, i, sum = 0;
	
	fscanf (inp, "%d", &sum);
	
	printf ("Enter the number of books you want to add: ");
	scanf ("%d", &n);
	
	sum += n;
	
	out = fopen ("computer_counter.txt", "w");
	
	fprintf (out, "%d", sum);
	
	system ("cls");
	
	struct book add[n];
	
	for (i = 0; i < n; i++)
	{
		printf ("\n\n\t\t\tBook No. %d\n\n", i+1);
		
		printf ("Enter the title of book: ");
		fflush (stdin);
		gets (add[i].title);
		
		printf ("Enter the author of book: ");
		fflush (stdin);
		gets (add[i].author);
		
		printf ("Enter the volume of book: ");
		fflush (stdin);
		gets (add[i].vol);
		
		system ("cls");
	}
	
	for (i = 0; i < n; i++)
	{
		fprintf (store,"%s\t%s\t%s\n", add[i].title, add[i].author, add[i].vol);
	}
	
	fclose (out);
	fclose (inp);
	fclose (store);
	
	printf ("\t\t\t\n\n PLEASE WAIT");
	
	sleeping();
	system ("cls");
	
	printf ("\t\t\t\n\n SUCCESSFULLY ADDED! \n\n\n\t\t\tPRESS ANY KEY TO CONTINUE...");
	
	getch();
	system ("cls");
	addbook();
}

void add_novels (void)
{
	printf ("\n\n\t\t\t WELCOME TO NOVELS SECTION!\n\n");
	
	FILE *out, *inp, *store;
	
	store = fopen ("novels_books.txt", "a");
	inp = fopen ("novels_counter.txt", "r");
	
	int n = 100, i, sum = 0;
	
	fscanf (inp, "%d", &sum);
	
	printf ("Enter the number of books you want to add: ");
	scanf ("%d", &n);
	
	sum += n;
	
	out = fopen ("novels_counter.txt", "w");
	
	fprintf (out,"%d",sum);
	
	system ("cls");
	
	struct book add[n];
	
	for (i = 0; i < n; i++)
	{
		printf ("\n\n\t\t\tBook No. %d\n\n", i+1);
		
		printf ("Enter the title of book: ");
		fflush (stdin);
		gets (add[i].title);
		
		printf ("Enter the author of book: ");
		fflush (stdin);
		gets (add[i].author);
		
		printf ("Enter the volume of book: ");
		fflush (stdin);
		gets (add[i].vol);
		
		system ("cls");
	}
	
	for (i = 0; i < n; i++)
	{
		fprintf (store,"%s\t%s\t%s\n", add[i].title, add[i].author, add[i].vol);
	}
	
	fclose (out);
	fclose (inp);
	fclose (store);
	
	printf ("\t\t\t\n\n PLEASE WAIT");
	
	sleeping();
	system ("cls");
	
	printf ("\t\t\t\n\n SUCCESSFULLY ADDED! \n\n\n\t\t\tPRESS ANY KEY TO CONTINUE...");
	
	getch();
	system ("cls");
	addbook();
}

void add_physics (void)
{
	printf ("\n\n\t\t\t WELCOME TO PHYSICS SECTION!\n\n");
	
	FILE *out, *inp, *store;
	
	store = fopen ("physics_books.txt", "a");
	inp = fopen ("physics_counter.txt", "r");
	
	int n = 100, i, sum = 0;
	
	fscanf (inp, "%d", &sum);
	
	printf ("Enter the number of books you want to add: ");
	scanf ("%d", &n);
	
	sum += n;
	
	out = fopen ("physics_counter.txt", "w");
	
	fprintf (out, "%d", sum);
	
	system ("cls");
	
	struct book add[n];
	
	for (i = 0; i < n; i++)
	{
		printf ("\n\n\t\t\tBook No. %d\n\n", i+1);
		
		printf ("Enter the title of book: ");
		fflush (stdin);
		gets (add[i].title);
		
		printf ("Enter the author of book: ");
		fflush (stdin);
		gets (add[i].author);
		
		printf ("Enter the volume of book: ");
		fflush (stdin);
		gets (add[i].vol);
		
		system ("cls");
	}
	
	for (i = 0; i < n; i++)
	{
		fprintf (store,"%s\t%s\t%s\n", add[i].title, add[i].author, add[i].vol);
	}
	
	fclose (out);
	fclose (inp);
	fclose (store);
	
	printf("\t\t\t\n\n PLEASE WAIT");
	
	sleeping();
	system ("cls");
	
	printf ("\t\t\t\n\n SUCCESSFULLY ADDED! \n\n\n\t\t\tPRESS ANY KEY TO CONTINUE...");
	
	getch();
	system ("cls");
	addbook();
}

void add_others (void)
{
	printf ("\n\n\t\t\t WELCOME TO OTHERS SECTION!\n\n");
	
	FILE *out, *inp, *store;
	
	store = fopen ("others_books.txt", "a");
	inp = fopen ("others_counter.txt", "r");
	
	int n = 1000, i, sum = 0;
	
	fscanf(inp, "%d", &sum);
	
	printf ("Enter the number of books you want to add: ");
	scanf ("%d", &n);
	
	sum += n;
	
	out = fopen ("others_counter.txt", "w");
	
	fprintf (out, "%d", sum);
	
	system ("cls");
	
	struct book add[n];
	
	for (i = 0; i < n; i++)
	{
		printf ("\n\n\t\t\tBook No. %d\n\n", i+1);
		
		printf ("Enter the title of book: ");
		fflush (stdin);
		gets (add[i].title);
		
		printf ("Enter the author of book: ");
		fflush (stdin);
		gets (add[i].author);
		
		printf ("Enter the volume of book: ");
		fflush (stdin);
		gets (add[i].vol);
		
		system ("cls");
	}
	
	for (i = 0; i < n; i++)
	{
		fprintf (store,"%s\t%s\t%s\n", add[i].title, add[i].author, add[i].vol);
	}
	
	fclose (out);
	fclose (inp);
	fclose (store);
	
	printf ("\t\t\t\n\n PLEASE WAIT");
	
	sleeping();
	system ("cls");
	
	printf ("\t\t\t\n\n SUCCESSFULLY ADDED! \n\n\n\t\t\tPRESS ANY KEY TO CONTINUE...");
	
	getch();
	system ("cls");
	addbook();
}
