void reg(void)
{
FILE *regi,*inp,*secret;

   regi=fopen("basic_info.txt","w");
   inp=fopen("login_info.txt","w");
   secret=fopen("secret.txt","w");
    
    char fname[20],lname[20],sex[6],dob[10],eid[30],org[30],city[20],country[20],uname[30],pass[20],re_pass[20],s_q[50],s_q_ans[50];
    char m_id[6],m_pass[7];
    int a,b,c;

    printf("\n\t\t\t WELCOME TO REGESTRATION FORM");
    
    printf("\n\n Enter Master ID: ");
    fflush(stdin);
    gets(m_id);
    
    printf("\n\n Enter Master password: ");
    fflush(stdin);
    gets(m_pass);
    
    b=strcmp(m_id,"serial");
    c=strcmp(m_pass,"coders");
    printf("\n\nPLEASE WAIT");
    sleeping();
    
    if(b==0 && c==0)
    {
            printf("\n\nACCEPTED");
    sleep(1000);
    system("cls");
    printf("\n\t\t\t WELCOME TO REGESTRATION FORM");
    printf("\n\n ACCOUNT INFORMATION:-");
    
       printf("\n\n\t\t SECRET QUESTION: ");
    fflush(stdin);
    gets(s_q);
    
    printf("\n\n\t\t SECRET QUESTION ANSWER: ");
    fflush(stdin);
    gets(s_q_ans);
    
    printf("\n\n\t\t USER NAME(without spaces): ");
    fflush(stdin);
    gets(uname);
    
    printf("\n\n\t\t PASSWORD(without spaces): ");
    fflush(stdin);
    gets(pass);
    
    printf("\n\n\t\t RE WRITE PASSWORD(without spaces): ");
    fflush(stdin);
    gets(re_pass);
    
    a=strcmp(pass,re_pass);
    
    printf("\n\n PLEASE WAIT");
    sleeping();

    
    if(a==0)
    {
              printf("\n password matched!!!");
              sleep(1000);
              system("cls");
              printf("\n\t\t\t WELCOME TO REGESTRATION FORM");
              
    printf("\n\n BASIC INFORMATION:-");
    
    printf("\n\n\t\t FIRST NAME: ");
    gets(fname);
    fflush(stdin);
    
    printf("\n\n\t\t LAST NAME: ");
    gets(lname);
    fflush(stdin);
    
    printf("\n\n\t\t SEX(male/female): ");
    fflush(stdin);
    gets(sex);
    
    printf("\n\n\t\t DATE OF BIRTTH: ");
    fflush(stdin);
    gets(dob);
    
    printf("\n\n\t\t EMAIL ID: ");
    fflush(stdin);
    gets(eid);
    
    printf("\n\n\t\t ORGANIZATION: ");
    fflush(stdin);
    gets(org);
    
    printf("\n\n\t\t COUNTRY: ");
    fflush(stdin);
    gets(country);
    
    printf("\n\n\t\t CITY: ");
    fflush(stdin);
    gets(city);
    
    fprintf(regi,"%s",fname);
    fprintf(regi,"\n%s",lname);
    fprintf(regi,"\n%s",sex);
    fprintf(regi,"\n%s",dob);
    fprintf(regi,"\n%s",eid);
    fprintf(regi,"\n%s",org);
    fprintf(regi,"\n%s",country);
    fprintf(regi,"\n%s",city);
    fprintf(inp,"%s",uname);
    fprintf(inp,"\n%s",pass);
    fprintf(secret,"%s",s_q);
    fprintf(secret,"\n%s",s_q_ans);
    
    fclose(inp);
    fclose(regi);
    fclose(secret);
        
    printf("\n\n\t\t PRESS ANY KEY TO REGISTER....... ");
    getch();
      printf("\n\n PLEASE WAIT");
     sleeping();
    system("cls");
    printf("\n\n\t\t SUCCESSFULLY REGISTERED....... ");
    printf("\n\n\n\n\n\t\t PRESS ANY KEY TO CONTINUE....... ");
    getch();
    system("cls");
    main();
}
    else 
    {
        printf("\n\n Sorry Your Information Is Wrong!!!!");
        sleep(1000);
        system("cls");
        reg();
        }
        }
    else if (a!=0)
        {
                   printf("\n\nSORRY PASSWORDS DOESNOT MATCH PLEASE WRITE CORRECT PASWORD!!");
                   getch();
                   system("cls");
                   reg();
                   }
       
}

     
     void login(void)
{
     
     FILE *inp;

inp=fopen("login_info.txt","r");


char name[30],password1[30],name1[30],password[30];
int a,b,n,c;


for(c=4;c>0;c--)
{
printf("\n\t\t\tWELCOME TO LOGIN PAGE");
printf("\n\n\t\t\t\t\t\tTRIES LEFT: %d",c );
int tries=c;
fflush(stdin);
printf("\n\n ENTER USER NAME(without spaces):");
gets(name);

printf("\n\n ENTER PASWORD(without spaces): ");
gets(password);
fflush(stdin);

fscanf(inp,"%s",&name1);
fscanf(inp,"%s",&password1); 

a=strcmp(name,name1);
b=strcmp(password,password1);

  printf("\n\n PLEASE WAIT");
  sleeping();
  system("cls");

if((a==0)&&(b==0))
{
printf("\n\n USERNAME AND PASSWORD ACCEPTED");
printf("\n\n\n\t\t PRESS ENTER TO CONTINUE.");
getch();
system("cls");
section();
break;
}
else 
{
printf("\n\n INVALID USERNAME OR PASSWORD ");
printf("\n\n\n\t\t TRY AGAIN.........");
tries--;
getch();
system("cls");
if(tries==0)
{
system("cls");
printf("\n\n\n\t SORRY DUE TO SECURITY REASONS WE HAVE TO CLOSE THE PROGRAM!!!!");
getch();
exit(1);
}
}

}
}

