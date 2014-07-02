void searchbook(int N)
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
               search_science(N);
                break;
           
           case 2:
                search_computer(N);
                break;
           case 3:
                search_novels(N);
                break;
           case 4:
                search_physics(N);
                break;
           case 5:
              search_others(N);
              break;
           case 6:
                if (N==0)
                section();
                else if(N==1)
                section_1();
                break;
           case 7:
                exit1();       
                break;
           default: 
                    printf("\n\nplease select right choice!!!!");
                    sleep(1000);
                    system("cls");
                    searchbook(N);
    }	
    
    getch();
     }

void search_computer(int N)
{
     FILE *inp,*quantity;
    
    inp = fopen ("computer_books.txt", "r");
    
    int i, a, count = 0,n;
    char search[100]={0};
    
    quantity = fopen ("computer_counter.txt", "r");
    
    fscanf(quantity,"%d",&n);
    
    struct book searc[n];
    
  
    for (i = 0; i < n; i++)
    {
        *searc[i].title=0;
    fflush(stdin);        
        fgets (searc[i].name,100,inp);
        
    }
    
    printf ("\nEnter name of book to search: ");
    fflush(stdin);
    gets (search);
    

    
    for (i = 0; i < n; i++)
    {
        a = stringcompare ( searc[i].name,search);
        
        
        if (a)
        {
               printf("\t\t\t\n\n PLEASE WAIT");
               sleeping();
               system ("cls");
              printf ("Book found.\n\n\n\n");
              printf ("%s", searc[i].name);
              count++;
        }
    }
    
    if (count == 0)
    {
               printf("\t\t\t\n\n PLEASE WAIT");
        sleeping();
        system ("cls");
              printf ("Book not found.");
    }
    getch();
    system("cls");
    searchbook(N);
    
}

void search_science(int N)
{
     FILE *inp,*quantity;
    
    inp = fopen ("science_books.txt", "r");
    
    int i, a, count = 0,n;
    char search[100]={0};
    
    quantity = fopen ("science_counter.txt", "r");
    
    fscanf(quantity,"%d",&n);
    
    struct book searc[n];
    
  
    for (i = 0; i < n; i++)
    {
        *searc[i].name=0;
    fflush(stdin);        
        fgets (searc[i].name,100,inp);
        
    }
    
    printf ("\nEnter name of book to search: ");
    fflush(stdin);
    gets (search);
    
               printf("\t\t\t\n\n PLEASE WAIT");
        sleeping();
        system ("cls");
    
    for (i = 0; i < n; i++)
    {
        a = stringcompare ( searc[i].name,search);
        
        
        if (a)
        {

              //printf ("Book found.\n\n\n\n");
              printf ("%s", searc[i].name);
              count++;
        }
    }
    
    if (count == 0)
    {
               /*printf("\t\t\t\n\n PLEASE WAIT");
        sleeping();
        system ("cls");*/
              printf ("Book not found.");
    }
    getch();
    system("cls");
    searchbook(N);
    
    }
    
    void search_novels(int N)
{
     FILE *inp,*quantity;
    
    inp = fopen ("novels_books.txt", "r");
    
    int i, a, count = 0,n;
    char search[100]={0};
    
    quantity = fopen ("novels_counter.txt", "r");
    
    fscanf(quantity,"%d",&n);
    
    struct book searc[n];
    
  
    for (i = 0; i < n; i++)
    {
        *searc[i].name=0;
    fflush(stdin);        
        fgets (searc[i].name,100,inp);
        
    }
    
    printf ("\nEnter name of book to search: ");
    fflush(stdin);
    gets (search);
    

    
    for (i = 0; i < n; i++)
    {
        a = stringcompare ( searc[i].name,search);
        
        
        
        if (a)
        {
              printf("\t\t\t\n\n PLEASE WAIT");
        sleeping();
        system ("cls");
        
              printf ("Book found.\n\n\n\n");
              printf ("%s", searc[i].name);
              count++;
        }
    }
    
    if (count == 0)
    {
              printf("\t\t\t\n\n PLEASE WAIT");
        sleeping();
        system ("cls");
        
              printf ("Book not found.");
    }
    getch();
    system("cls");
    searchbook(N);
    }
    
void search_physics(int N)
{
     FILE *inp,*quantity;
    
    inp = fopen ("physics_books.txt", "r");
    
    int i, a, count = 0,n;
    char search[100]={0};
    
    quantity = fopen ("physics_counter.txt", "r");
    
    fscanf(quantity,"%d",&n);

    
    struct book searc[n];
    
  
    for (i = 0; i < n; i++)
    {
        *searc[i].name=0;
    fflush(stdin);        
        fgets (searc[i].name,100,inp);

        
    }
    
    printf ("\nEnter name of book to search: ");
    fflush(stdin);
    gets (search);
    

    
    for (i = 0; i < n; i++)
    {
        a = stringcompare ( searc[i].name,search);

        
        
        if (a)
        {
              printf("\t\t\t\n\n PLEASE WAIT");
        sleeping();
        system ("cls");
        
              printf ("Book found.\n\n\n\n");
              printf ("%s", searc[i].name);
              count++;
        }
    }
    
    if (count == 0)
    {
              printf("\t\t\t\n\n PLEASE WAIT");
        sleeping();
        system ("cls");
              printf ("Book not found.");
    }
    getch();
    system("cls");
    searchbook(N);
    }

void search_others(int N)
{
     FILE *inp,*quantity;
    
    inp = fopen ("others_books.txt", "r");
    
    int i, a, count = 0,n;
    char search[100]={0};
    
    quantity = fopen ("others_counter.txt", "r");
    
    fscanf(quantity,"%d",&n);
    
    struct book searc[n];
    
  
    for (i = 0; i < n; i++)
    {
        *searc[i].name=0;
    fflush(stdin);        
        fgets (searc[i].name,100,inp);
        
    }
    
    printf ("\nEnter name of book to search: ");
    fflush(stdin);
    gets (search);
    

    
    for (i = 0; i < n; i++)
    {
        a = stringcompare ( searc[i].name,search);
 
       
        if (a)
        {
               printf("\t\t\t\n\n PLEASE WAIT");
        sleeping();
        system ("cls");
        
        
              printf ("Book found.\n\n\n\n");
              printf ("%s", searc[i].name);
              count++;
        }
    }
    
    if (count == 0)
    {
               printf("\t\t\t\n\n PLEASE WAIT");
        sleeping();
        system ("cls");
        
              printf ("Book not found.");
    }
    getch();
    system("cls");
    searchbook(N);
    }
