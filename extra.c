void extras(int n)
{
         int n_3=0;
    
    printf("\n\t\t\t\t WELCOME TO EXTRAS!!!!");
    printf("\n\n\n PLEASE SELECT FROM FOLLOWING:");
    printf("\n\n\n\t\t\t 1) CALCULATOR \n\t\t\t 2) TIC TAC TOE GAME \n\t\t\t 3) ROCK PAPER SCISSOR GAME. \n\t\t\t 4) RETURN TO PREVIOUS MENU \n\t\t\t 5) EXIT ");
    printf("\n\n ENTER CHOICE: ");
    scanf("%d",&n_3);
    
    switch(n_3)
    {
     case 1: 
            system("cls");
            printf("\n\t\t\t CALCULATOR!!!!");
             printf("\n\t\t  *****************************        ");
   printf("\n\t\t  *  _______________________  *        ");
   printf("\n\t\t  * |_______________________| *        ");
   printf("\n\t\t  *                           *        ");
   printf("\n\t\t  * ====  ==== ==== ==== ==== *        ");
   printf("\n\t\t  *  mc     7    8    9   sqr *        ");
   printf("\n\t\t  * ====  ==== ==== ==== ==== *        ");
   printf("\n\t\t  *                           *        ");
   printf("\n\t\t  * ====  ==== ==== ==== ==== *        ");
   printf("\n\t\t  *  mr     4    5    6    /  *        ");
   printf("\n\t\t  * ====  ==== ==== ==== ==== *        ");
   printf("\n\t\t  *                           *        ");
   printf("\n\t\t  * ====  ==== ==== ==== ==== *        ");
   printf("\n\t\t  *  ms     1    2    3    -  *        ");
   printf("\n\t\t  * ====  ==== ==== ==== ==== *        ");  
   printf("\n\t\t  *                           *        ");  
   printf("\n\t\t  * ====  ==== ==== ==== ==== *        ");
   printf("\n\t\t  *  m+     0    =    .    +  *        ");
   printf("\n\t\t  * ====  ==== ==== ==== ==== *        ");
   printf("\n\t\t  *****************************        "); 
            printf("\n\n\t\t\tPRESS ANY KEY TO CONTINUE!!!");   
            getch();
            system("cls");   
            calculator(n);
            break;
    case 2:
            system("cls");
            printf("\n\t\t\t TIC TAC TOE!!!!");
            printf("\n\n\n");
    printf("\n\t\t\t     |     |     ");
    printf("\n\t\t\t  X  |  O  |  X  ");
    printf("\n\t\t\t-----|-----|-----");
    printf("\n\t\t\t  X  |  O  |  O  ");
    printf("\n\t\t\t     |     |     ");
    printf("\n\t\t\t-----|-----|-----");
    printf("\n\t\t\t  O  |  X  |  X  ");
    printf("\n\t\t\t     |     |     ");

            printf("\n\n\n\n\n\t\t\tPRESS ANY KEY TO CONTINUE!!!");   
            getch();
            system("cls"); 
            tic_tac(n);
              
            break;
    case 3:
             system("cls");
             rock(n);
             break;
    case 4:
               system("cls");
               if(n==0)
             section();
             else if(n==1)
             section_1();
             break;
    case 5:
              system("cls");
              exit1();
              break;         
     } 

     }
void tic_tac(n)
{
     

     int i, player, go, row, column, line;
    char ans = 'Y';
    
     printf ("\n\n\t\t TIC TAC TOE!!!!!");
    
    while (ans == 'y' || ans == 'Y')
    {
          int winner = 0;
          char board[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
    
    for (i = 0; i < 9 && winner == 0; i++)
    {
        printf ("\n\n\n\n");
        printf ("\t\t %c | %c | %c\n", board[0][0], board[0][1], board[0][2]);
        printf ("\t\t---+---+---\n");
        printf ("\t\t %c | %c | %c\n", board[1][0], board[1][1], board[1][2]);
        printf ("\t\t---+---+---\n");
        printf ("\t\t %c | %c | %c\n", board[2][0], board[2][1], board[2][2]);
        
        player = i % 2 + 1;
        
        do
        {

               printf("\nPlayer %d, enter you pointer location: ", player,(player==1)?'X':'O');
               scanf("%d", &go);
               
               row = --go/3;
               column = go%3;
               
               system("cls");
        } while (go < 0 || go > 9 || board[row][column] > '9');
        
        board[row][column] = (player == 1) ? 'X' : 'O';
        
        if ((board[0][0] == board[1][1] && board[0][0] == board[2][2]) || (board[0][2] == board[1][1] && board[0][2] == board[2][0]))
        {
                         winner = player;
        }
        else
        {
            for(line = 0; line <= 2; line ++)
            {
                     if((board[line][0] == board[line][1] && board[line][0] == board[line][2])|| (board[0][line] == board[1][line] && board[0][line] == board[2][line]))
                     {
                                        winner = player;
                     }
            }
        }
    }
    
    printf ("\n\n");
    printf ("\t\t %c | %c | %c\n", board[0][0], board[0][1], board[0][2]);
    printf ("\t\t---+---+---\n");
    printf ("\t\t %c | %c | %c\n", board[1][0], board[1][1], board[1][2]);
    printf ("\t\t---+---+---\n");
    printf ("\t\t %c | %c | %c\n", board[2][0], board[2][1], board[2][2]);
    
    if(winner == 0)
    {
              printf("\nIt's a draw!\n");
    }
    else
    {
        printf("\nPlayer %d wins!!", winner);
    }
    printf ("\nDo you wish to play again (Y/N)?");
    scanf (" %c", &ans);
    system("cls");
    }
    getch();
    system("cls");
    extras(n);
}
void calculator(int n)
{
       int number=0;
  
  printf ("\n\t\t\t\t ****CALCULATOR**** \n\n");
  
  printf("\n\t\t\t  PLEASE SELECT FROM FOLLOWING: \n");
  printf ("\n\n\t\t 1) Simple Calculator.\n");
  printf ("\n\t\t 2) Power and Trignometric Calculator.\n");
  printf ("\n\t\t 3) Programmer Calculator.\n");
  printf ("\n\t\t 4) RETURN TO PREVIOUS MENU.\n");
  printf ("\n\t\t 5) EXIT.\n");
  
  printf("\n\n\n\t\t\t  Enter your Choice: ");
  scanf ("%d" , & number);
  system("cls");
  fflush (stdin);  
  switch (number)
  {
  case 1: 
  {
  printf ("\n\n\t\tYOU HAVE CHOOSEN THE SIMPLE CALCULATOR !! ");
  
    float no1,no2,add,subtract,divide,multi;
    char user_choice;
    
    printf("\n\n\tTo ADD enter '+'");
    printf("\n\n\tTo SUBTRACT enter '-'");
    printf("\n\n\tTo MULTIPLY enter '*'");
    printf("\n\n\tTo DIVIDE enter '/'");
    
    printf("\n\n\n\n\n\t\t\t  Enter your Choice: ");
    scanf("%c",&user_choice);
    system ("cls");
    
    printf("\n\n Enter the first Number: ");
    scanf("%f",&no1);
    fflush (stdin);  
    printf("\n Enter the second Number: ");
    scanf(" %f",&no2);
   
    if(user_choice=='+' )
	{
	add=no1+no2;
	printf("\n\n\n\n\t\t\tTHE RESULT IS %.2f",add);
	 getch();
    system("cls");
          calculator(n);
	}
	else if(user_choice=='-' )
	{
	subtract= no1-no2 ;
	printf("\n\n\n\n\t\t\tTHE RESULT IS %.2f",subtract);
	 getch();
    system("cls");
          calculator(n);
	}
    else if(user_choice=='/' )
	{
	divide= no1/no2;
	printf("\n\n\n\n\t\t\tTHE RESULT IS %.2f",divide);
     getch();
    system("cls");
          calculator(n);
    }    
    else if(user_choice=='*' )
	{
	multi= no1*no2;
	printf("\n\n\n\n\t\t\tTHE RESULT IS %.2f",multi);
    getch();
    system("cls");
          calculator(n);
	}
	else
	{
    printf ("Oops! Sorry, we can't help you");
    getch();
    system("cls");
          calculator(n);
}
  }
  break;
  
  case 2 : 
   printf ("\n\n\t\tYOU HAVE CHOOSEN THE TRIGNOMETRIC CALCULATOR !! ");
  float number; 
int choice;

printf ("\n\n\n\t\tFor COSINE enter '1'\n\n");
printf ("\t\tFor SINE enter '2'\n\n");
printf ("\t\tFor TANGENT enter '3'\n\n");
printf ("\t\tFor POWER enter '4'\n\n");
printf ("\t\tFor SQUARE ROOT enter '5'\n\n");
printf ("\t\tFor EXPONENT enter '6'\n\n");

printf(" \n\n\t\t\t Enter Your choice : ");
scanf("%d" , &choice);
            
switch (choice)
{  
      
  case 1: 
{              
  system("cls");
 printf ("\n\n\t\tYOU HAVE CHOOSEN THE COSINE FUNCTION !! ");
  printf(" \n\n\n\n\n\t Enter the Integer : ");
  scanf("%f" , &number);
  double convert, ans;
  convert=number;
  ans = cos (convert*pie/180);
  printf ("\n\n\n\t ANSWER:- The COSINE of %f degrees is %.5f degrees. \n",convert, ans );
  getchar();
  system("cls");
          calculator(n);
  break;
} 
  case 2: 
{              
  system("cls");
  printf ("\n\n\t\tYOU HAVE CHOOSEN THE SINE FUNCTION !! ");
  printf(" \n\n\n\n\n\t Enter the Integer : ");
  scanf("%f" , &number);
  double convert, ans;
  convert=number;
  ans = sin (convert*pie/180);
  printf ("\n\n\n\t ANSWER:- The SINE of %f degrees is %.5f degrees. \n",convert, ans );
  getchar();
  system("cls");
          calculator(n);
  break;
}
case 3: 
{              
  system("cls");
  printf ("\n\n\t\tYOU HAVE CHOOSEN THE TANGENT FUNCTION !! ");
  printf(" \n\n\n\n\n\t Enter the Integer : ");
  scanf("%f" , &number);
  double convert, ans;
  convert=number;
  ans = tan (convert*pie/180);
  printf ("\n\n\n\t ANSWER:- The TANGENT of %f degrees is %.5f degrees. \n",convert, ans );
  getchar();
  system("cls");
          calculator(n);
  break;
}
float number2,number1,ans;
case 4: 
{              
  system("cls");
  printf ("\n\n\t\tYOU HAVE CHOOSEN THE POWER FUNCTION !! ");
  printf(" \n\n\n\n\n\t Enter the first Integer : ");
  scanf("%f" , &number1);
  printf(" \n\n\t Enter the second Integer : ");
  scanf("%f" , &number2);
  ans = pow (number1,number2);
  printf (" \n\n\n\n\tThe power of %.2f^%.2f = %lf\n",number1,number2 ,ans);
 getchar();
 system("cls");
          calculator(n);
  break;
}

case 5: 
{  
   system("cls");          
   printf ("\n\n\t\tYOU HAVE CHOOSEN THE SQUARE ROOT FUNCTION !! "); 
  printf(" \n\n\n\n\n\t Enter the Integer : ");
  scanf("%f",&number);
  double convert, ans;
  convert = number;
  ans = sqrt (convert);
  printf ("\n\n\n\n\t The SQUARE ROOT of (%.2f) = %.2f\n", convert, ans );
 getchar();
 system("cls");
 calculator(n);
  break;
}
case 6: 
{   
   system("cls");
   printf ("\n\n\t\tYOU HAVE CHOOSEN THE EXPONENTIAL FUNCTION !! ");            
    printf(" \n\n\n\n\n\t Enter the Integer : ");
  scanf("%f",&number);
  double convert, ans;
  convert = number;
  ans= exp (convert);
  printf ("\n\n\n\n\t The EXPONENTIAL value of %.2f is %.4f.\n", convert, ans );
  getchar();
  system("cls");
  calculator(n);
  break;
}  
}
  break;			 
  
  case 3: 
       {
       printf ("\n\n\t\tYOU HAVE CHOOSEN THE PROGRAMMER CALCULATOR !!");
    int i = 1; 
    char choice;

    

            fflush(stdin);
            system("cls");
            printf(" \n\n\n\t   TO CONVERT DECIML NUMBERS TO OCTAL, BINARY & HEXA-DECIMAL ");
            printf(" \n\n\n\n To convert into Octal press 'O' \n\n To convert into Hexadecimal press 'H' \n\n To convert into Binary press 'B' \n\n To enter your choice again press 'Enter' \n\n To exit press 'E'");
            printf(" \n\n\n\n\n\t\t \t Enter Your choice : ");
            scanf("%c" , &choice);
            switch (choice)
            {
                   
            case 'O':
  {         
            system("cls");    
            printf("\n\nYou have selected case OCTAL  ");
           int numb,multi, rmod=0 , s=1, finalans=0, qdivide;        
           printf("\n\nENTER THE DECIMAL NUMBER:");
           scanf("%d",&numb);
           qdivide=numb;
           
           while(qdivide!=0)

{
            rmod=qdivide%8; 
            qdivide=qdivide/8;
            multi=(rmod*s);
            finalans = finalans +multi;
            s=s*10;
}
 printf(" \n\tThe OCTAL Equivalent for %d = %d" ,numb, finalans);
            getchar();
            getchar();
            system("cls");
          calculator(n);
}
            break;
            case 'H':
{            
           system("cls");    
           printf("\nYou have selected case HEXA-DECIMAL  ");
           int numb,multi, rmod=0 , s=0,k, qdivide, c=1 ;        
           printf("\n\nENTER THE DECIMAL NUMBER:");
           scanf("%d",&numb);
           qdivide=numb;
           printf("\n\n\tThe HEXA-DECIMAL Equivalent for %d = ",numb);
               
        while (qdivide>0)
        {
        qdivide=qdivide/16;
        s++;
        }
        for (;s>0;s--)
        {
        qdivide=numb;
        for (k=0;k<s-1;k++)
        {
        qdivide=qdivide/16;
        }
        rmod=qdivide%16;
        if (rmod==10)
        printf("A");
        else if (rmod==11)
        printf("B");
        else if (rmod==12)
        printf("C");
        else if (rmod==13)
        printf("D");
        else if (rmod==14)
        printf("E");
        else if (rmod==15)
        printf("F");
        else      
        printf("%d",rmod);
        }
          
            getchar();
            getchar();
            system("cls");
          calculator(n);
}
            break;
            case 'B':
{            
           system("cls");    
            printf("\nYou have selected case BINARY  ");
           int numb,multi, rmod=0 , s=1, finalans=0, qdivide;        
           printf("\n\nENTER THE DECIMAL NUMBER:");
           scanf("%d",&numb);
           qdivide=numb;
           while(qdivide!=0)
{
            rmod=qdivide%2; 
            qdivide=qdivide/2;
            multi=(rmod*s);
            finalans = finalans+multi;
            s=s*10;
}
 printf(" \n\tThe BINARY Equivalent for %d = %d" ,numb, finalans);
            getchar();
            getchar();
            system("cls");
          calculator(n);
}
            break;
            case 'E':
                     printf(" \n\t You have selected case EXIT  ");
                     system("cls");
                     exit1();
                     break;            
            default: 
                     printf("\n\t Invalid Option ");
                     sleep(180);
                     system("cls");
                     calculator(n);
                     break;
}    
} 
 break;

default: printf ("Oops! Sorry, we can't help you");
          system("cls");
          calculator(n);
         break;
         

  case 4:
         system("cls");       
         extras(n);
         break;
  
  case 5:
        system("cls");       
        exit1();
        break;
     }
}
void rock(int N)
{
     printf ("\n ********************ROCK, PAPER AND SCISSOR GAME********************\n\n\n\n ");
     printf ("\n\t\t ********      *     *               **    ");
     printf ("\n\t\t |------|        *  *              ******      ");
     printf ("\n\t\t |------|          *              ********      ");
     printf ("\n\t\t |------|       __/  \\__          ********         ");
     printf ("\n\t\t |------|      (_/    \\_)          ******         ");
     printf ("\n\t\t ********                            **    ");
     
     printf ("\n\n\n\n\n\n\n\n\t\t PRESS ANY KEY TO ENTER......");
     getch();
     system("cls");
     
     int P = 0, n = 0, i;
     int comp_scr = 0, p_scr = 0;
     char ch, choice;
     
     do
     {
     system("cls");
     printf("\n ********************ROCK, PAPER AND SCISSOR GAME******************** ");
     
     printf("\n \n CHOOSE 0,1,2 FROM FOLLOWING: \n 0) ROCK \n 1) PAPER \n 2) SCISSOR ");
     
     printf("\n \n ENTER NUMBER OF ROUNDS (n): ");
     scanf("%d",&n);
     
     system("cls");
     
     for (i = 1; i <= n; i++)
     {
	 system("cls");
         printf("\n ********************ROCK, PAPER AND SCISSOR GAME******************** ");
         
         int random_number = rand();
         int computer_chose = (random_number % 3);
         
         printf ("\n_____________________________________________________________________ ");
         printf ("\n\n  ROUND %d:",i);
         printf ("\n\n_____________________________________________________________________ ");
         
         printf ("\n\n PLAYER : ");
         scanf ("%d", &P);
         
         printf("\n \n COMPUTER CHOSE: %d", computer_chose);
         
         if (computer_chose == P)
         {
                            printf ("\n\n DRAW!!! \n");
                            
                            p_scr++;
                            comp_scr++;
         }
         else if (computer_chose == 0 && P == 1)
         {
              printf ("\n \n PLAYER WINS!!! \n");
              p_scr = p_scr + 2;
         }
         else if (computer_chose == 1 && P == 0)
         {
              printf ("\n\n COMPUTER WINS!!! \n");
              comp_scr = comp_scr + 2;
         }
         else if (computer_chose==0 && P==2)
         {
              printf ("\n\n COMPUTER WINS!!! \n");
              comp_scr = comp_scr+2;
         }
         else if (computer_chose==2 && P==0)
         {
              printf ("\n\n PLAYER WINS!!! \n");
              p_scr = p_scr + 2;
         }
         else if (computer_chose == 1 && P == 2)
         {
              printf ("\n\n PLAYER WINS!!! \n");
              p_scr = p_scr + 2;
         }
         else if (computer_chose == 2 && P == 1)
         {
              printf ("\n\n COMPUTER WINS!!! \n");
              comp_scr = comp_scr + 2;
         }
         getch();
     }
     system("cls");
     
     printf ("\n ********************ROCK, PAPER AND SCISSOR GAME******************** ");
     printf ("\n_____________________________________________________________________ ");
     printf ("\n\n SCORES:-");
     printf ("\n\n\tCOMPUTER SCORE = %d",comp_scr);
     printf ("\n\tPLAYER SCORE = %d",p_scr);
     printf ("\n_____________________________________________________________________ ");
     
     if (comp_scr > p_scr)
     {
                  printf ("\n\n\t\tCOMPUTER WINS");
     }
     else if (comp_scr < p_scr)
     {
          printf ("\n\n\t\tPLAYER  WINS");
     }
     else if (comp_scr == p_scr)
     {
          printf ("\n\n\t\tDRAW!!!");
     }
     
     printf("\n_____________________________________________________________________ ");
     printf("\n\n");
     
     printf ("Do you want to play again? (Y/N?): ");
     scanf (" %c", &choice);
     
     system("cls");
     } while (choice == 'y' || choice == 'Y');
     extras(N);
}
