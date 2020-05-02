#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include <sys/stat.h>
#include <stdbool.h>


typedef struct{
	
	char name[50];
	int train_num;
	int num_of_seats;
}pd;





void reservation(void);							
void viewdetails(void);					
//int cancel1(int argc, char* argv[]);
void cancel1(void);							
void printticket(char name[],int,int,float);	 
void specifictrain(int);						
float charge();							
void login();






int main()

	
	
{
		system("cls"); 
	printf("\t\t=================================================\n");
	printf("\t\t|                                               |\n");
	printf("\t\t|        -----------------------------          |\n");
	printf("\t\t|           TRAIN TICKET RERS. SYSTEM           |\n");
	printf("\t\t|        -----------------------------          |\n");
	printf("\t\t|                                               |\n");
	printf("\t\t|                                               |\n");
	printf("\t\t|                       	 		|\n");
	printf("\t\t|                                               |\n");
	printf("\t\t=================================================\n\n\n");
	printf(" \n Press any key to continue:");	
	getch();	
    system("cls");
	login();
	int menu_choice,choice_return;
	start:
		
		
		system("cls");
	printf("\n=================================\n");
	printf("    TRAIN RESERVATION SYSTEM");
	printf("\n=================================");
	printf("\n1>> Reserve A Ticket");
	printf("\n------------------------");
	printf("\n2>> View All Available Trains");
	printf("\n------------------------");
	printf("\n3>> Charge claculation");
	printf("\n------------------------");
	printf("\n4>> Cancel Reservation");
	printf("\n------------------------");
	printf("\n5>> Exit");
	printf("\n------------------------");
	printf("\n\n-->");
	scanf("%d",&menu_choice);
	switch(menu_choice)
	{
		case 1:
			reservation();		
			break;
		case 2:
			viewdetails();
			printf("\n\nPress any key to go to Main Menu..");
			getch();
			break;
			
			
		case 3:
			charge();
			break;
		case 4:
			cancel1();
			return(0);
		default:
			printf("\nInvalid choice");
	}
	goto start;
	return(0);
}



void viewdetails(void)
{
	system("cls");
	printf("----------------------------------------------------------------------------------------------");	
	printf("\nTr.No\tName\t\t\tDestinations\t\t\tCharges\t\tTime\n");
	printf("----------------------------------------------------------------------------------------------");
	printf("\n1001\tJAN SHATHABDHI\t\tBANGLORE TO CHENNAI\t\tRs.562\t\t9:00am");
	printf("\n1002\tYPR VASCO EXP\t\tBANGLORE TO GOA\t\t\tRs.804\t\t12:00pm");
	printf("\n1003\tKARWAR EXP\t\tBANGLORE TO MYSORE\t\tRs.308\t\t8:00am");
	printf("\n1004\tSBC DHARMAPUR DEMU\tBANGLORE TO DHARMAPURI\t\tRs.145\t\t7:15pm");
	printf("\n1005\tNIZAMUDDIN RAJDHANI EXP\tBANGLORE TO SECUNDERABAD\tRs.370\t\t8:00pm");
	printf("\n1006\tKACHEGUDA EXP\t\tBANGLORE TO HYDYERABAD\t\tRs.382\t\t5:00am");
    printf("\n1007\tLOKAMANYA TT EXP\tBANGLORE TO MUMBAI\t\tRs.525\t\t4:25pm");	
    printf("\n1008\tMUMBAI EXPRESS\t\tBANGLORE TO MUMBAI\t\tRs.525\t\t8:50pm");
    printf("\n1009\tGUWAHATI EXPRESS\tBANGLORE TO KOLKATA\t\tRs.2065\t\t10:55am");
    printf("\n1010\tKARNATAKA EXP\t\tBANGLORE To DELHI\t\tRs.2825\t\t7:00pm");
    
}



void reservation(void)
{
	char confirm;
	int i=0;
	float charges;
	pd passdetails;
	FILE *fp;
	fp=fopen("seats_reserved.txt","a");
	system("cls");
	
	printf("\nEnter Your Name:> ");
	fflush(stdin);
	gets(passdetails.name);
	
	printf("\nEnter Number of seats:> ");
	scanf("%d",&passdetails.num_of_seats);
	printf("\n\n>>Press Enter To View Available Trains<< ");
	getch();
	system("cls");
	viewdetails();
	printf("\n\nEnter train number:> ");
	start1:
	scanf("%d",&passdetails.train_num);
	if(passdetails.train_num>=1001 && passdetails.train_num<=1010)
	{
		charges=charge(passdetails.train_num,passdetails.num_of_seats);
		printticket(passdetails.name,passdetails.num_of_seats,passdetails.train_num,charges);		
	}
	else
	{
		printf("\nInvalid train Number! Enter again--> ");
		goto start1;
	}
	
	printf("\n\nConfirm Ticket (y/n):>");
	start:
	scanf(" %c",&
	confirm);
	if(confirm == 'y')
	{
		fprintf(fp,"%s\t\t%d\t\t%d\t\t%.2f\n",&passdetails.name,passdetails.num_of_seats,passdetails.train_num,charges);
		printf("==================");
		printf("\n Reservation Done\n");
		printf("==================");
		printf("\nPress any key to go back to Main menu");
	}
	else
	{
		if(confirm=='n'){
			printf("\nReservation Not Done!\nPress any key to go back to  Main menu!");
		}
		else
		{
			printf("\nInvalid choice entered! Enter again-----> ");
			goto start;
		}
	}
	fclose(fp);
	getch();
}



float charge()

{
	
		
		int train_num;int num_of_seats;
		printf("Enter train number:\n");
		scanf("%d",&train_num);
		printf("Enter the no. of seats:\n");
		scanf("%d",&num_of_seats);
		if (train_num==1001)
	{
		printf("%f",562.0*num_of_seats);
		return(562.0*num_of_seats);
		
	}
	if (train_num==1002)
	{
		printf("%f",804.0*num_of_seats);
		return(804.0*num_of_seats);
	}
	if (train_num==1003)
	{
		printf("%f",308.0*num_of_seats);
		return(308.0*num_of_seats);
	}
	if (train_num==1004)
	{
		printf("%f",145.0*num_of_seats);
		return(145.0*num_of_seats);
	}
	if (train_num==1005)
	{
		printf("%f",370.0*num_of_seats);
		return(370.0*num_of_seats);
	}
	if (train_num==1006)
	{
		printf("%f",382.0*num_of_seats);
		return(382.0*num_of_seats);
	}
	if (train_num==1007)
	{
		printf("%f",525.0*num_of_seats);
		return(525.0*num_of_seats);
	}
	if (train_num==1008)
	{
		printf("%f",525.0*num_of_seats);
		return(525.0*num_of_seats);
	}
	if (train_num==1009)
	{
		printf("%f",2065.0*num_of_seats);
		return(2065.0*num_of_seats);
	}
	if (train_num==1010)
	{
		printf("%f",2825.0*num_of_seats);
		return(2825.0*num_of_seats);
	}
	else
	{
		printf("invalid train number\n");
		return 0;
	}
	printf("enter any key to continue..");
	getch();

	
}




void printticket(char name[],int num_of_seats,int train_num,float charges)
{
	system("cls");
	printf("-------------------\n");
	printf("\tTICKET\n");
	printf("-------------------\n\n");
	
	printf("Name:\t\t\t%s",name);
	printf("\nNumber Of Seats:\t%d",num_of_seats);
	printf("\nTrain Number:\t\t%d",train_num);
	specifictrain(train_num);
	printf("\nCharges:\t\t%.2f",charges);
}




void specifictrain(int train_num)
{
	
	if (train_num==1001)
	{
		printf("\nTrain:\t\t\tJAN SHATABDHI");
		printf("\nDestination:\t\tBANGLORE TO CHENNAI");
		printf("\nDeparture:\t\t9:00");
	}
	if (train_num==1002)
	{
		printf("\nTrain:\t\t\tYPR VASCO EXP");
		printf("\nDestination:\t\tBANGLORE TO GOA");
		printf("\nDeparture:\t\t12PM");
	}
	if (train_num==1003)
	{
		printf("\nTrain:\t\t\tKARWAR EXP");
		printf("\nDestination:\t\tBANGLORE TO MYSORE");
		printf("\nDeparture:\t\t8am");
	}
	if (train_num==1004)
	{
		printf("\nTrain:\t\t\tDHARMAPURI DEMU");
		printf("\nDestination:\t\tBANGLORE TO DHARMAPURI");
		printf("\nDeparture:\t\t7:15PM");
	}
	if (train_num==1005)
	{
		printf("\nTrain:\t\t\tNIZAMUDDIN RAJDHANI EXP");
		printf("\nDestination:\t\tBANGLORE TO SECUNDERABAD");
		printf("\nDeparture:\t\t8:00pm");
	}
	if (train_num==1006)
	{
		printf("\ntrain:\t\t\tKACHEGUDDA EXP");
		printf("\nDestination:\t\tBANGLORE TO HYDERABAD");
		printf("\nDeparture:\t\t5:00am");
	}
	if (train_num==1007)
	{
		printf("\ntrain:\t\t\tLOKAMANYA TT EXP");
		printf("\nDestination:\t\tBANGLORE TO MUMBAI");
		printf("\nDeparture:\t\t4:25PM");
	}
	if (train_num==1008)
	{
		printf("\ntrain:\t\t\tMUMBAI EXP");
		printf("\n Destination:\t\tBANGLORE to MUMBAI");
		printf("\nDeparture:\t\t8:50PM ");
	}
	if (train_num==1009)
	{
		printf("\ntrain:\t\t\tGUWAHATI EXP");
		printf("\nDestination:\t\tBANGLORE TO KOLKATA");
		printf("\nDeparture:\t\t10:55AM ");
	}
	if (train_num==1010)
	{
		printf("\ntrain:\t\t\tKARNATAKA EXP");
		printf("\nDestination:\t\tBANGLORE TO DELHI");
		printf("\nDeparture:\t\t7:00PM ");
	}
}

void login()
{
	int a=0,i=0;
    char uname[10],c=' '; 
    char pword[10],code[10];
    char user[10]="user";
    char pass[10]="qwerty";
    do
{
	
    printf("\n  =======================  LOGIN FORM  =======================\n  ");
    printf(" \n                       ENTER USERNAME:-");
	scanf("%s", &uname); 
	printf(" \n                       ENTER PASSWORD:-");
	while(i<10)
	{
	    pword[i]=getch();
	    c=pword[i];
	    if(c==13) break;
	    else printf("*");
	    i++;
	}
	pword[i]='\0';
	
	i=0;
	 
		if(strcmp(uname,"user")==0 && strcmp(pword,"qwerty")==0)
	{
	printf("  \n\n\n       WELCOME TO OUR SYSTEM !! YOUR LOGIN IS SUCCESSFUL");
	printf("\n\n\n\t\t\t\tPress any key to continue...");
	getch();
	break;
	}
	else
	{
		printf("\n        SORRY !!!!  LOGIN IS UNSUCESSFUL");
		a++;
		
		getch();
		system("cls");
	}
}
	while(a<=2);
	if (a>2)
	{
		printf("\nSorry you have entered the wrong username and password for four times!!!");
		
		getch();
		
		}
		system("cls");	
}

void cancel1(void)  
{

	system("cls");
	int trainnum;char name[20];
	printf("-----------------------\n");
		printf("Enter the train number: \n");
		scanf("%d",&trainnum);
		printf("Enter your name: \n");
		scanf("%s",&name[20]);
		
			printf("-----------------------\n");
		fflush(stdin);
		scanf("%i",&trainnum);
		printf("\n\nCancelled");  
		getch();
}
/*static size_t deleteLine( char*, size_t, const char* );

int cancel1(int argc, char* argv[])
{
  char file[] = "seat_reserved.txt";

  if ( --argc )
  { 
    struct stat st;
    if ( stat( file, &st ) != -1 )
    {
      // open the file in binary format
      FILE* fp = fopen( "seat_reserved.txt", "rb" );
      if ( fp != NULL )
      {
        
        char* buffer = malloc( st.st_size ); 

        // read the file into a buffer
        if ( fread(buffer, 1, st.st_size, fp) == st.st_size)
        {
          fclose(fp);

          size_t newSize = deleteLine( buffer, st.st_size, argv[1] );

          fp = fopen(  "seat_reserved.txt", "wb" );
          if ( fp != NULL )
          {
            fwrite(buffer, 1, newSize, fp);
            fclose(fp);
          }
          else
          {
            perror(file);
          }
        }
        free(buffer);
      }
      else
      {
        perror(file);
      }
    }
    else
    {
      printf( "did not find %s", file );
    }
  }
  return 0;
}

static size_t deleteLine( char* buffer, size_t size, const char* playerName )
{
 
  char* p = buffer; 
  bool done = false;
  size_t len = strlen(playerName);
  size_t newSize = 0;
  do
  {
    char* q = strchr( p, *playerName ); 
    if ( q != NULL )
    {
      if ( strncmp( q, playerName, len ) == 0 ) 
      {
        size_t lineSize = 1; 

        
        for ( char* line = q; *line != '\n'; ++line) 
        {
          ++lineSize;
        }

        
        size_t restSize = (size_t)((buffer + size) - (q + lineSize));

        
        memmove( q, q + lineSize, restSize );

        
        newSize = size - lineSize;
        done = true;
      }
      else
      {
        p = q + 1;
      }
    }
    else
    {
      puts( "no such name" );
      done = true;
    }
  }
  while (!done);

  return newSize;
}*/

 
