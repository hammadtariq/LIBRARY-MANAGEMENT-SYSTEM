void view_student(int n)
{
     int ch;
     
        printf("\n\n\t\t\t STUDENT's RECORD!!\n\n");
        printf("\n\n\t\t\t WHERE YOU WANT TO SEE??\n\n"); 
        printf("\t\t\t 1) ON CONSOLE \n\t\t\t 2) ON HTML FILE \n\t\t\t 3) RETURN TO PREVIOUS MENU \n\t\t\t 4) EXIT");
        
        printf("\n\n Enter Choice: ");
        scanf("%d",&ch);
        
        if(ch==1)
        {
        system("cls");
        record_console(n);
        }
        else if(ch==2)
        {
             system("cls");
        record_html(n);
        }
        else if(ch==3)
        {
             system("cls");
             if (n==0)
        section();
        else if (n==1)
        section_1();
        }
        else if(ch==4)
        {
             system("cls");
             exit1();
        }
        else
        {
            printf("\n\n Please Select right choice..");
        sleep(1000);
        system("cls");
        view_student(n);
        }
     }

void record_console(int N)
{
      FILE *inp,*check;


inp=fopen("student_counter.txt","r");
check=fopen("student_record.txt","r");

    int n=1000, i,sum=0,count=0,a;
    
     printf("\n\n\t\t\t STUDENT's RECORD!!\n\n");
    
     fscanf(inp,"%d",&a);

    struct book add[n];
    
    printf ("\nS.No \t ID \t\t BOOK NAME \t AUTHOR \t EDITION \n\n", add[i].search);
 
    for (i = 0; i < a; i++)
    {
        fgets(add[i].search,1000,check);
 
        }
           for (i = 0; i < a; i++)
    {
           printf ("%d)\t %s",i+1, add[i].search);
}
   fclose(check);
   fclose(inp);
   getch();
   system("cls");
   view_student(N);
}
