void view_books_console(int N)
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
                view_science_console(N);
                break;
           
           case 2:
                view_computer_console(N);
                break;
           case 3:
                view_novels_console(N);
                break;
           case 4:
                view_physics_console(N);
                break;
           case 5:
              view_others_console(N);
              break;
           case 6:
                if (N==0)
                section();
                if (N==1)
                section_1();
                break;
           case 7:
                system("cls");
                exit1();       
                break;  
                
           default: printf("\n\nplease select right choice!!!!");
                    sleep(1000);
                    system("cls");
                    view_books_console(N);       
    }	   
    
    getch();
     }

void view_science_console(int N)
{
      FILE *inp,*check,*write;
      
      int a,n=100,i;

inp=fopen("science_counter.txt","r");
check=fopen("science_books.txt","r");

 fscanf(inp,"%d",&a);
 
 struct book add[n];
 

for (i = 0; i < a; i++)
    {
        fgets(add[i].html,100,check);
    }
    
    printf("\n PLEASE WAIT");
     sleeping();
     system("cls");
     printf("\n\t\t ALL BOOKS OF SCIENCE\n\n");
           for (i = 0; i < a; i++)
    {
           printf (" %d) %s ",i+1, add[i].html);
    }
        
       printf("\n\n\n\n\n\t\t PRESS ANY KEY TO GO TO PREVIOUS MENU!!");
        getch();
        system("cls");
        view_books_console(N);

}

void view_computer_console(int N)
{
      FILE *inp,*check,*write;
      
      int a,n=100,i;

inp=fopen("computer_counter.txt","r");
check=fopen("computer_books.txt","r");

 fscanf(inp,"%d",&a);
 
 struct book add[n];
 
for (i = 0; i < a; i++)
    {
        fgets(add[i].html,100,check);
    }
    
   printf("\n PLEASE WAIT");
     sleeping();
     system("cls");
     printf("\n\t\t ALL BOOKS OF COMPUTERS\n\n");
    
           for (i = 0; i < a; i++)
    {
           printf (" %d) %s ",i+1, add[i].html);
    }
        
        printf("\n\n\n\n\n\t\t PRESS ANY KEY TO GO TO PREVIOUS MENU!!");
        getch();
        system("cls");
        view_books_console(N);

}

void view_physics_console(int N)
{
      FILE *inp,*check,*write;
      
      int a,n=100,i;

inp=fopen("physics_counter.txt","r");
check=fopen("physics_books.txt","r");

 fscanf(inp,"%d",&a);
 
 struct book add[n];
 
for (i = 0; i < a; i++)
    {
        fgets(add[i].html,100,check);
    }
    
    printf("\n PLEASE WAIT");
     sleeping();
     system("cls");
     printf("\n\t\t ALL BOOKS OF PHYSICS \n\n");
    
           for (i = 0; i < a; i++)
    {
           printf (" %d) %s ",i+1, add[i].html);
    }
        
    
     
        printf("\n\n\n\n\n\t\t PRESS ANY KEY TO GO TO PREVIOUS MENU!!");
        getch();
        system("cls");
        view_books_console(N);

}

void view_novels_console(int N)
{
      FILE *inp,*check,*write;
      
      int a,n=100,i;

inp=fopen("novels_counter.txt","r");
check=fopen("novels_books.txt","r");

 fscanf(inp,"%d",&a);
 
 struct book add[n];
 
for (i = 0; i < a; i++)
    {
        fgets(add[i].html,100,check);
    }
    
    printf("\n PLEASE WAIT");
     sleeping();
     system("cls");
     printf("\n\t\t ALL BOOKS OF NOVELS \n\n");
     
    
           for (i = 0; i < a; i++)
    {
           printf ("%d) %s ",i+1, add[i].html);
    }
        
    
        printf("\n\n\n\n\n\t\t PRESS ANY KEY TO GO TO PREVIOUS MENU!!");
        getch();
        system("cls");
        view_books_console(N);

}

void view_others_console(int N)
{
      FILE *inp,*check,*write;
      
      int a,n=100,i;

inp=fopen("others_counter.txt","r");
check=fopen("others_books.txt","r");

 fscanf(inp,"%d",&a);
 
 struct book add[n];


for (i = 0; i < a; i++)
    {
        fgets(add[i].html,100,check);
    }
    
     printf("\n PLEASE WAIT");
     sleeping();
     system("cls");
     printf("\n\t\t ALL BOOKS OF OTHER SECTIONS \n\n");
     
           for (i = 0; i < a; i++)
    {
           printf (" %d) %s ",i+1, add[i].html);
    }
        
    
     
        printf("\n\n\n\n\n\t\t PRESS ANY KEY TO GO TO PREVIOUS MENU!!");
        getch();
        system("cls");
        view_books_console(N);

}
