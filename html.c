void profile (void)
{
	FILE *oup, *reg;
	
	reg = fopen ("basic_info.txt", "r");
	
	int n_2 = 0, n = 90;
	
	printf ("\n\n\t\t\t VIEW USER PROFILE\n\n\n\n");
	printf ("WHERE YOU WANT TO SEE THE PROFILE?? SELECT FROM FOLLOWING \n");
	printf ("\n\n\t\t\t 1) ON CONSOLE \n\t\t\t 2) ON HTML FILE ");
	printf ("\n\t\t\t 3) TO GO TO PREVIOUS MENU  \n\t\t\t 4) EXIT \n\n\n");
	
	printf ("ENTER CHOICE: ");
	scanf ("%d", &n_2);
	
	if(n_2==1)
	{
		system ("cls");
		
		char fname[100], lname[100], sex[100], dob[100], id[100], org[100], city[100], country[100];
		
		printf ("\n\t\t\t USER PROFILE PAGE \n\n\n ");
		fflush (stdin);
		
		fgets (fname, 100, reg);
		fgets (lname, 100, reg);
		fgets (sex, 100, reg);
		fgets (dob, 100, reg);
		fgets (id, 100, reg);
		fgets (org, 100, reg);
		fgets (country, 100, reg);
		fgets (city, 100, reg);
		
		printf ("\n\t\t\t FIRST NAME   : %s ", fname);
		printf ("\n\t\t\t LAST NAME    : %s ", lname);
		printf ("\n\t\t\t SEX          : %s ", sex);
		printf ("\n\t\t\t DATE OF BIRTH: %s ", dob);
		printf ("\n\t\t\t EMAIL ID     : %s ", id);
		printf ("\n\t\t\t ORGANIZATION : %s ", org);
		printf ("\n\t\t\t COUNTRY      : %s ", country);
		printf ("\n\t\t\t CITY         : %s ", city);
		
		getch();
		system ("cls");
		profile();
	}
	else if(n_2==2)
	{
		oup = fopen ("profile.html", "w");
		
		char fname[100], lname[100], sex[100], dob[100], id[100], org[100], city[100], country[100];
		
		system ("cls");
		
		fflush (stdin);
		fgets (fname, 100, reg);
		fgets (lname, 100, reg);
		fgets (sex, 100, reg);
		fgets (dob, 100, reg);
		fgets (id, 100, reg);
		fgets (org, 100, reg);
		fgets (country, 100, reg);
		fgets (city, 100, reg);
		
		fprintf (oup, "<body background=\"reg.jpg\">");
		fprintf (oup, "<font face=\"Britannic Bold,arial\" size=\"12\" color=\"light brown\">");
		fprintf (oup, "<p align=\"center\"> <b><i><u> USER's PROFILE PAGE </b></i></u> <p>");
		fprintf (oup, "<font face=\"Britannic Bold,arial\" color=\"light brown\" size=\"5\">");
		fprintf (oup, "BASIC INFORMATION:-<hr>");
		fprintf (oup, "<font face=\"Britannic Bold,arial\" color=\"light brown\" size=\"4\">");
		fprintf (oup, "<p align=\"center\"><table><tr>");
		fprintf (oup, "<td> FIRST NAME   :</td><td> %s </td></tr>", fname);
		fprintf (oup, "<td> LAST NAME    :</td><td> %s </td></tr>", lname);
		fprintf (oup, "<td> DATE OF BIRTH:</td><td> %s </td></tr>", dob);
		fprintf (oup, "<td> EMAIL ID     :</td><td> %s </td></tr>", id);
		fprintf (oup, "<td> ORGANIZATION :</td><td> %s </td></tr>", org);
		fprintf (oup, "<td> COUNTRY      :</td><td> %s </td></tr>", country);
		fprintf (oup, "<td> CITY         :</td><td> %s </td></tr></table>", city);
		fprintf (oup, "<hr>");
		fclose (oup);
		
		printf ("\n YOUR DESIRED PROFILE PAGE HAS BEEN CREATED,");
		printf (" PLEASE GO TO THE FOLDER WHERE THIS  SOFTWARE IS INSTALLED!");
		printf ("\n\n\n\n\n\t\t PRESS ANY KEY TO GO TO PREVIOUS MENU!!");
		
		getch();
		system ("cls");
		profile();
	}
	else if(n_2==3)
	{
		system ("cls");
		section();
	}
	else if (n_2==4)
	{
		system ("cls");
		exit1();
	}
	
	fclose (oup);
}

void record_html (int N)
{
	FILE *inp, *check, *write;
	
	int a, n = 100, i;
	
	inp = fopen ("student_counter.txt", "r");
	check = fopen ("student_record.txt", "r");
	write = fopen ("student_record.html", "w");
	
	fscanf (inp, "%d", &a);
	
	struct book add[n];
	
	fprintf (write, "<body background=\"paper.jpg\">");
	fprintf (write, "<font face=\"Britannic Bold,arial\" color=\"light brown\" size=\"5\">");
	fprintf (write, "<p align=\"center\"> STUDENTS RECORD <br><hr>");
	fprintf (write, "<font face=\"Britannic Bold,arial\" colour=\"light brown\" size=\"4\">");
	
	for (i = 0; i < a; i++)
	{
		fgets (add[i].html, 100, check);
    }
	
	fprintf (write, "<p align=\"center\"><table><tr>");
	
	for (i = 0; i < a; i++)
	{
		fprintf (write, "<td> %d) </td><td> %s </td></tr>", i+1, add[i].html);
	}
	
	fclose (write);
	
	printf ("\n PLEASE WAIT");
	
	sleeping();
	
	printf ("\n\n\nYOUR DESIRED PAGE HAS BEEN CREATED,");
	printf (" PLEASE GO TO THE FOLDER WHERE THIS SOFTWARE IS INSTALLED!");
	printf ("\n\n\n\n\n\t\t PRESS ANY KEY TO GO TO PREVIOUS MENU!!");
	
	getch();
	system ("cls");
	view_student (N);
	
	getch();
}

void view_books_html (int N)
{
	int n;
	
	printf ("Which section do you want to enter?");
	printf ("\n 1. Science");
	printf ("\n 2. Computers");
	printf ("\n 3. Novels");
	printf ("\n 4. Physics");
	printf ("\n 5. Others");
	printf ("\n 6. Return to previous menu");
	
	printf ("\n\nEnter your choice: ");
	scanf ("%d", &n);
	
	system ("cls");
	
	switch (n)
	{
		case 1:
			view_science (N);
			break;
		
		case 2:
			view_computer (N);
			break;
		
		case 3:
			view_novels (N);
			break;
		
		case 4:
			view_physics (N);
			break;
		
		case 5:
			view_others (N);
			break;
		
		case 6:
			if (N == 0)
			{
				section();
			}
			else if (N == 1)
			{
				section_1();
			}
			break;
		
		default:
			printf ("\n\nplease select right choice!!!!");
	}
	
	getch();
}

void view_science (int N)
{
	FILE *inp, *check, *write;
	
	int a, n = 100, i;
	
	inp = fopen ("science_counter.txt", "r");
	check = fopen ("science_books.txt", "r");
	write = fopen ("science_books.html", "w");
	
	fscanf (inp, "%d", &a);
	
	struct book add[n];
	
	fprintf (write,"<body background=\"paper.jpg\">");
	fprintf (write,"<font face=\"Britannic Bold,arial\" colour=\"light brown\" size=\"5\">");
	fprintf (write,"<p align=\"center\"> STUDENTS RECORD <br><hr>");
	fprintf (write,"<font face=\"Britannic Bold,arial\" colour=\"light brown\" size=\"4\">");
	
	for (i = 0; i < a; i++)
	{
		fgets (add[i].html, 100, check);
	}
	
	fprintf (write, "<p align=\"center\"><table><tr>");
	
	for (i = 0; i < a; i++)
	{
		fprintf (write,"<td> %d) </td><td> %s </td></tr>", i+1, add[i].html);
	}
	
	fclose (write);
	
	printf ("\n PLEASE WAIT");
	
	sleeping();
	
	printf ("\n\n\nYOUR DESIRED PAGE HAS BEEN CREATED,");
	printf (" PLEASE GO TO THE FOLDER WHERE THIS SOFTWARE IS INSTALLED!");
	printf ("\n\n\n\n\n\t\t PRESS ANY KEY TO GO TO PREVIOUS MENU!!");
	
	getch();
	system ("cls");
	view_books_html (N);
}

void view_computer (int N)
{
	FILE *inp, *check, *write;
	
	int a, n = 100, i;
	
	inp = fopen ("computer_counter.txt", "r");
	check = fopen ("computer_books.txt", "r");
	write = fopen ("computer_books.html", "w");
	
	fscanf (inp, "%d", &a);
	
	struct book add[n];
	
	fprintf (write,"<body background=\"paper.jpg\">");
	fprintf (write,"<font face=\"Britannic Bold,arial\" colour=\"light brown\" size=\"5\">");
	fprintf (write,"<p align=\"center\"> STUDENTS RECORD <br><hr>");
	fprintf (write,"<font face=\"Britannic Bold,arial\" colour=\"light brown\" size=\"4\">");
	
	for (i = 0; i < a; i++)
    {
		fgets (add[i].html, 100, check);
	}
	
	fprintf (write, "<p align=\"center\"><table><tr>");
	
	for (i = 0; i < a; i++)
	{
		fprintf (write, "<td> %d) </td><td> %s </td></tr>", i+1, add[i].html);
	}
	
	fclose (write);
	
	printf ("\n PLEASE WAIT");
	
	sleeping();
	
	printf ("\n\n\nYOUR DESIRED PAGE HAS BEEN CREATED,");
	printf (" PLEASE GO TO THE FOLDER WHERE THIS SOFTWARE IS INSTALLED!");
	printf ("\n\n\n\n\n\t\t PRESS ANY KEY TO GO TO PREVIOUS MENU!!");
	
	getch();
	system ("cls");
	view_books_html (N);
}

void view_physics (int N)
{
	FILE *inp, *check, *write;
	
	int a, n = 100, i;
	
	inp = fopen ("physics_counter.txt", "r");
	check = fopen ("physics_books.txt", "r");
	write = fopen ("physics_books.html", "w");
	
	fscanf (inp, "%d", &a);
	
	struct book add[n];
	
	fprintf (write,"<body background=\"paper.jpg\">");
	fprintf (write,"<font face=\"Britannic Bold,arial\" colour=\"light brown\" size=\"5\">");
	fprintf (write,"<p align=\"center\"> STUDENTS RECORD <br><hr>");
	fprintf (write,"<font face=\"Britannic Bold,arial\" colour=\"light brown\" size=\"4\">");
	
	for (i = 0; i < a; i++)
	{
		fgets (add[i].html, 100, check);
	}
	
	fprintf (write, "<p align=\"center\"><table><tr>");
	
	for (i = 0; i < a; i++)
	{
		fprintf (write, "<td> %d) </td><td> %s </td></tr>", i+1, add[i].html);
	}
	
	fclose (write);
	
	printf ("\n PLEASE WAIT");
	
	sleeping();
	
	printf ("\n\n\nYOUR DESIRED PAGE HAS BEEN CREATED,");
	printf (" PLEASE GO TO THE FOLDER WHERE THIS SOFTWARE IS INSTALLED!");
	printf ("\n\n\n\n\n\t\t PRESS ANY KEY TO GO TO PREVIOUS MENU!!");
	
	getch();
	system ("cls");
	view_books_html (N);
}

void view_novels (int N)
{
	FILE *inp, *check, *write;
	
	int a, n = 100, i;
	
	inp = fopen ("novels_counter.txt", "r");
	check = fopen ("novels_books.txt", "r");
	write = fopen ("novels_books.html", "w");
	
	fscanf (inp, "%d", &a);
	
	struct book add[n];
	
	fprintf (write,"<body background=\"paper.jpg\">");
	fprintf (write,"<font face=\"Britannic Bold,arial\" colour=\"light brown\" size=\"5\">");
	fprintf (write,"<p align=\"center\"> STUDENTS RECORD <br><hr>");
	fprintf (write,"<font face=\"Britannic Bold,arial\" colour=\"light brown\" size=\"4\">");
	
	for (i = 0; i < a; i++)
	{
		fgets (add[i].html, 100, check);
	}
	
	fprintf (write, "<p align=\"center\"><table><tr>");
	
	for (i = 0; i < a; i++)
	{
		fprintf (write ,"<td> %d) </td><td> %s </td></tr>", i+1, add[i].html);
	}
	
	fclose (write);
	
	printf ("\n PLEASE WAIT");
	
	sleeping();
	
	printf ("\n\n\nYOUR DESIRED PAGE HAS BEEN CREATED,");
	printf (" PLEASE GO TO THE FOLDER WHERE THIS SOFTWARE IS INSTALLED!");
	printf ("\n\n\n\n\n\t\t PRESS ANY KEY TO GO TO PREVIOUS MENU!!");
	
	getch();
	system ("cls");
	view_books_html (N);
}

void view_others(int N)
{
	FILE *inp, *check, *write;
	
	int a, n = 100, i;
	
	inp = fopen ("others_counter.txt", "r");
	check = fopen ("others_books.txt", "r");
	write = fopen ("others_books.html", "w");
	
	fscanf (inp, "%d", &a);
	
	struct book add[n];
	
	fprintf (write ,"<body background=\"paper.jpg\">");
	fprintf (write ,"<font face=\"Britannic Bold,arial\" colour=\"light brown\" size=\"5\">");
	fprintf (write ,"<p align=\"center\"> STUDENTS RECORD <br><hr>");
	fprintf (write ,"<font face=\"Britannic Bold,arial\" colour=\"light brown\" size=\"4\">");
	
	for (i = 0; i < a; i++)
	{
		fgets (add[i].html, 100, check);
	}
	
	fprintf (write, "<p align=\"center\"><table><tr>");
	
	for (i = 0; i < a; i++)
	{
		fprintf (write, "<td> %d) </td><td> %s </td></tr>", i+1, add[i].html);
	}
	
	fclose (write);
	
	printf ("\n PLEASE WAIT");
	
	sleeping();
	
	printf ("\n\n\nYOUR DESIRED PAGE HAS BEEN CREATED,");
	printf (" PLEASE GO TO THE FOLDER WHERE THIS SOFTWARE IS INSTALLED!");
	printf ("\n\n\n\n\n\t\t PRESS ANY KEY TO GO TO PREVIOUS MENU!!");
	
	getch();
	system ("cls");
	view_books_html (N);
}
