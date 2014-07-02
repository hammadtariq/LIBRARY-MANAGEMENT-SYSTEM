void Delete (void)
{
	printf ("\n\t\t RETURN BOOK \n");
	
	FILE *inp, *quantity;
	
	inp = fopen ("student_record.txt", "r");
	quantity = fopen ("student_counter.txt", "r");
	
	int i, a, count = 0, n;
	char Delete[100] = {0};
	
	fscanf (quantity, "%d", &n);
	
	struct book books[n];
	struct book Temp[n];
	
	for (i = 0; i < n; i++)
	{
		*Temp[i].record = 0;
		*books[i].record = 0;
		
		fflush (stdin);
		fgets (Temp[i].record,100, inp);
	}
	
	printf ("\nEnter name of book to Delete: ");
	fflush (stdin);
	gets (Delete);
	
	for (i = 0; i < n; i++)
	{
		a = stringcompare (Temp[i].record, Delete);
		
		if (a)
		{
			count++;
		}
		else
		{
			books[i] = Temp[i];
		}
	}
	
	if (count == 0)
	{
		printf ("\n\nPLEASE WAIT");
		
		sleeping();
		
		printf ("\n\n Sorry! No Record found.");
	}
	else if (count != 0)
	{
		inp = fopen ("student_record.txt", "w");
		
		for (i = 0; i < n; i++)
		{
			fprintf (inp, "%s", books[i].record); 
		}
		
		fclose (inp);
		
		n--;
		
		quantity = fopen ("student_counter.txt", "w");
		
		fprintf (quantity, "%d", n);
		
		printf ("\n\nPLEASE WAIT");
		
		sleeping();
		
		printf ("\n\nDone");
	}
	
	fclose (inp);
	sleep (2500);
	system ("cls");
	section();
}
