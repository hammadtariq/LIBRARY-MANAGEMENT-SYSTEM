void sleeping(void)
{
     sleep(250);
    printf(".");
    sleep(250);
    printf(".");
    sleep(250);
    printf(".");
    sleep(250);
    printf(".");
    sleep(250);
    printf(".");

     
     }

 void start_menu(void)
  {
       printf("     **                                                      **    "); 
   printf("\n     * ** *                                                  * ** *   ");
   printf("\n    ** S  **                                                ** S **   ");   
   printf("\n   **  S   **                                              **  S  **  ");
   printf("\n   **  U    **     WELCOME TO LIBRARY MANAGEMENT SYSTEM    **  U   ** ");
   printf("\n   **  E    **                                             **  E   **  ");
   printf("\n    ** T   **                                               ** T  **   ");  
   printf("\n     * ** *                * ====================/           * ** *   "); 
   printf("\n       **                 *                     ///            **    ");
   
   printf("\t\t\t                 *   L                 ///                 ");
   printf("\n\t                *     I               ///                ");
   printf("\n\t               *       B             ///                   ");
   printf("\n\t              *         R           ///                     ");
   printf("\n\t             *           A         ///                      ");
   printf("\n\t            *             R       ///                      ");
   printf("\n\t           *               Y     ///                        ");
   printf("\n\t          *                     ///                         ");
   printf("\n\t         *                     ///                         ");
   printf("\n\t        *                     ///                           ");
   printf("\n\t         ====================///         ");
   printf("\n\t        (*********************/                           ");
   printf("\n\t         ====================                            ");

   
   
  
    printf("\n\n\n\t PRESS ANY KEY TO ENTER INTO LIBRARY............");
    getch();
    system("cls");
    
       }

void section_1(void)
{
      

    char name[100];
    int n_1=0, n=1;
    
    
    printf("\n\n\t\t\t HELLO STUDENT!");
    printf("\n\n\n\t PLEASE SELECT YOUR REQUIRED SECTION FROM FOLLOWING: ");
    printf("\n\n\n\t\t 1) SEARCH BOOK \n\t\t 2) VIEW STUDENT RECORD \n\t\t 3) VIEW ALL BOOKS \n\t\t 4) EXTRAS \n\t\t 5) EXIT ");   
    
    printf("\n\n Enter choice: ");
     scanf("%d",&n_1);
    
    if(n_1==1)
    {
    system("cls");
    searchbook(n);
    }
    else if(n_1==2)
    {
    system("cls");
    view_student(n);
    }
    else if(n_1==3)
    {
    system("cls");
    view_all_books(n);
    }
    else if(n_1==4)
    {
    system("cls");
    extras(n);
    }  
    else if(n_1==5)
    {
    system("cls");
    exit1();
    }  
    else
    {
            printf("\n\n Please Select right choice..");
        sleep(1000);
        system("cls");
        section_1();
        }
}

void section(void)
{
      FILE *inp;

inp=fopen("login_info.txt","r");

    char name[100];
    int n_1=0,n=0;
    
    fscanf(inp,"%s",&name);
    printf("\n\n\t\t\t HELLO %s!",name);
    printf("\n\n\n\t PLEASE SELECT YOUR REQUIRED SECTION FROM FOLLOWING: ");
    printf("\n\n\n\t\t 1) Add book \n\t\t 2) Search book \n\t\t 3) ISSUE BOOK \n\t\t 4) VIEW STUDENT RECORD \n\t\t 5) RETURN BOOK \n\t\t 6) VIEW USER PROFILE \n\t\t 7) VIEW ALL BOOKS \n\t\t 8) EXTRAS \n\t\t 9) EXIT ");   
    
    printf("\n\n Enter choice: ");
     scanf("%d",&n_1);
    
       if(n_1==1)
    {
    system("cls");
    addbook();
    }
    else if(n_1==2)
    {
    system("cls");
    searchbook(n);
    }
    else if(n_1==3)
    {
    system("cls");
    add_student_section();
    }
    else if(n_1==4)
    {
    system("cls");
    view_student(n);
    }
    else if(n_1==5)
    {
    system("cls");
    Delete();
    }
    else if(n_1==6)
    {
    system("cls");
     profile();
    }  
    else if(n_1==7)
    {
    system("cls");
    view_all_books(n);
    }  
    else if(n_1==8)
    {
    system("cls");
    extras(n);
    }  
    else if(n_1==9)
    {
    system("cls");
    exit1();
    }  
    else
    {
            printf("\n\n Please Select right choice..");
        sleep(1000);
        system("cls");
        section();
        }
    
}

  void serial(void)
           {
           printf("\n\n\n\n\n\t  A PROJECT BY:  ");
           sleep(500);
           printf("\n\n\n\t\t\t  *************  ");
           sleep(500);
           printf("\n\n\t\t\t  * SERIAL    *  ");
           sleep(500);
           printf("\n\n\t\t\t  *     CODER *  ");
           sleep(500);
           printf("\n\n\t\t\t  *     S    *  ");
           sleep(500);
           printf("\n\n\t\t\t    *   C   *    ");
           sleep(500);
           printf("\n\n\t\t\t      *   *      ");
           sleep(500);
           printf("\n\n\t\t\t        *        ");
           sleep(1500);
           system("cls");
           }   
     
void exit1(void)
{
    serial();
    printf("\n\n\t PROGRAMMER:- ");
    sleep(500);
    printf("\n\n\n\t\t HAMMAD TARIQ");
    sleep(500); 
    printf("\n\n\t\t 4444");
    sleep(1500);
    exit(1);
     }
