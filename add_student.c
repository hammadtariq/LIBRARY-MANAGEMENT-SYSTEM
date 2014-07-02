void add_student (void)
{
	FILE *out, *inp, *store, *check;
	
	inp = fopen ("student_counter.txt", "r");
	check = fopen ("student_record.txt", "r");
	store = fopen ("student_record.txt", "a");
	
	int n = 1,i, sum = 0, a, count = 0;
	
	fscanf (inp, "%d", &sum);
	
	//printf ("Enter the number of records you want to add: ");
	//scanf ("%d", &n);
	
	system ("cls");
	
	struct book add[n];
	
	for (i = 0; i < 1; i++)
	{
		check = fopen ("student_record.txt", "r");
		
		fscanf (check, "%s", &add[i].search);
		
		printf ("\n\n\t\t\tRecord No. %d\n\n", i+1);
		
		printf ("Enter the form no of student(xxxx): ");
		fflush (stdin);
		gets (add[i].rollno);
		
		a = strcmp (add[i].search, add[i].rollno);
		
		if (a != 0)
		{
			printf ("Enter the book name: ");
			fflush (stdin);
			gets (add[i].title);
			
			printf ("Enter the author of book: ");
			fflush (stdin);
			gets (add[i].author);
			
			printf ("Enter the volume of book: ");
			fflush (stdin);
			gets (add[i].vol);
			
			fprintf (store,"%s\t%s\t%s\t%s\n", add[i].rollno,add[i].title, add[i].author, add[i].vol);
			
			system ("cls");
			
			printf ("\n\n PLEASE WAIT ");
			
			sleeping();
			system ("cls"); 
			
			printf ("\n\n SUCCESSFULLY ADDED.......");
			sleep (500);
			system ("cls");
			
			count++;
			
			fclose (store);
		}
		else if (a == 0)
		{
			printf ("\n\n SORRY THIS STUDENT HAS ALREADY ISSUED BOOK.......");
			
			getch();
			system ("cls");
		}
	}
	
	if (count == n)
	{
		sum += n;
		out = fopen ("student_counter.txt", "w");
		fprintf (out, "%d", sum);
	}
	else
	{
		sum += count;
		out = fopen ("student_counter.txt", "w");
		fprintf (out, "%d", sum);
	}
	
	fclose (out);
	fclose (inp);
	add_student_section();
}

void add_student_section(void)
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
			printf("\n\t\t WELCOME TO SCIENCE SECTION. \n\n");
			
			add_student();
			break;
		
		case 2:
			printf("\n\t\t WELCOME TO COMPUTER SECTION. \n\n");
			
			add_student();
			break;
		
		case 3:
			printf("\n\t\t WELCOME TO NOVELS SECTION. \n\n");
			
			add_student();
			break;
		
		case 4:
			printf("\n\t\t WELCOME TO PHYSICS SECTION. \n\n");
			
			add_student();
			break;
		
		case 5:
			printf("\n\t\t WELCOME TO OTHERS SECTION. \n\n");
			
			add_student();
			break;
		
		case 6:
			section();
			break;
		
		case 7:
			exit1();
			break;
		
		default:
			printf("\n\nplease select right choice!!!!");
			
			sleep(1000);
			system("cls");
			add_student_section();
	}
	getch();
}
