#include<stdio.h>
#include<conio.h>
#include<string.h>

class date
{
     int day, month,year;
     public:
          void setDate(int dd,int mm, int yy)
          {
               day=dd;
               month=mm;
               year=yy;
          }
          int getday()
          {
               return day;
          }
          int getmonth()
          {
               return month;
          }
          int getyear()
          {
               return year;
          }
          void showDate()
          {
               printf("      %02d/%02d/%04d|",day,month,year);
          }
};

class ticket
{
     int tno;
     float price;
     date booking_date,journey_date;
     char from[10],to[10];
     public:
          void set_ticket( int n, float p, date bd, date jd, char* f, char* t)
          {
               tno=n;
               price=p;
               booking_date=bd;
               journey_date=jd;
               strcpy(from,f);
               strcpy(to,t);

          }
          
          void show_ticket(ticket t[],int n)
          {
               int i,j;
               for(i=0;i<n;i++)
               {
                    printf("%10d|",t[i].tno);
                    printf("%10.2f|",t[i].price);
                    printf("%10s|",t[i].from);
                    printf("%10s|",t[i].to);
                    t[i].booking_date.showDate();
                    t[i].journey_date.showDate();
                    puts("");
               }
          }
          void tno_sort(ticket t[],int n)
          {
               int i,j;
               for(i=0;i<n-1;i++)
               {
                    for(j=i+1;j<n;j++)
                    {
                         if(t[i].tno>t[j].tno)
                         {
                              class ticket temp;
                              temp=t[i];
                              t[i]=t[j];
                              t[j]=temp;
                         }
                    }   
               }
               show_ticket(t,n);
          }

          void price_sort(ticket t[],int n)
          {
               int i,j;
               for(i=0;i<n-1;i++)
               {
                    for(j=i+1;j<n;j++)
                    {
                         if(t[i].price>t[j].price)
                         {
                              class ticket temp;
                              temp=t[i];
                              t[i]=t[j];
                              t[j]=temp;
                         }
                    }   
               }
               show_ticket(t,n);
          }

          void bdate_sort(ticket t[],int n)
          {
               int i,j;
               for(i=0;i<n;i++)
               {
                    for(j=i+1;j<n;j++)
                    {
                         if(t[i].booking_date.getyear()>t[j].booking_date.getyear())
                         {
                              class ticket temp;
                              temp=t[i];
                              t[i]=t[j];
                              t[j]=temp;
                         }
                         else if(t[i].booking_date.getyear()==t[j].booking_date.getyear())
                         {
                              if(t[i].booking_date.getmonth()>t[j].booking_date.getmonth())
                              {
                                   class ticket temp;
                                   temp=t[i];
                                   t[i]=t[j];
                                   t[j]=temp;
                              }
                         }
                         else if((t[i].booking_date.getyear()==t[j].booking_date.getyear())&& (t[i].booking_date.getmonth()==t[j].booking_date.getmonth()))
                         {
                              if(t[i].booking_date.getday()>t[j].booking_date.getday())
                              {
                                   class ticket temp;
                                   temp=t[i];
                                   t[i]=t[j];
                                   t[j]=temp;
                              }
                         }
                    }   
               }
               show_ticket(t,n);
          }
          

          void jdate_sort(ticket t[],int n)
          {
               int i,j;
               for(i=0;i<n;i++)
               {
                    for(j=i+1;j<n;j++)
                    {
                         if(t[i].journey_date.getyear()>t[j].journey_date.getyear())
                         {
                              class ticket temp;
                              temp=t[i];
                              t[i]=t[j];
                              t[j]=temp;
                         }
                         else if(t[i].journey_date.getyear()==t[j].journey_date.getyear())
                         {
                              if(t[i].journey_date.getmonth()>t[j].journey_date.getmonth())
                              {
                                   class ticket temp;
                                   temp=t[i];
                                   t[i]=t[j];
                                   t[j]=temp;
                              }
                         }
                         else if((t[i].journey_date.getyear()==t[j].journey_date.getyear())&& (t[i].journey_date.getmonth()==t[j].journey_date.getmonth()))
                         {
                              if(t[i].journey_date.getday()>t[j].journey_date.getday())
                              {
                                   class ticket temp;
                                   temp=t[i];
                                   t[i]=t[j];
                                   t[j]=temp;
                              }
                         }
                    }   
               }
               show_ticket(t,n);
          }

          void from_sort(ticket t[],int n)
          {
               int i,j,cmp;
               
               for(i=0;i<n;i++)
               {
                    for(j=i+1;j<n;j++)
                    {
                         cmp=strcmp(t[i].from,t[j].from);
                         if(cmp>0)
                         {
                              class ticket temp;
                              temp=t[i];
                              t[i]=t[j];
                              t[j]=temp;
                         }
                    }   
               }
               show_ticket(t,n);
          }

          void to_sort(ticket t[],int n)
          {
               int i,j,cmp;
               
               for(i=0;i<n;i++)
               {
                    for(j=i+1;j<n;j++)
                    {
                         cmp=strcmp(t[i].to,t[j].to);
                         if(cmp>0)
                         {
                              class ticket temp;
                              temp=t[i];
                              t[i]=t[j];
                              t[j]=temp;
                         }
                    }   
               }
               show_ticket(t,n);
          }
};



main()
{
     date bd, jd;
     int n;
     printf("Enter how many tickets data needs to be entered: ");
     scanf("%d",&n);
     int i,j;
     ticket* t = new ticket[n];
     for(i=0;i<n;i++)
     {
          printf("*********Enter Details of ticket no %d*********\n",i+1);
          int no;
          printf("No : ");
          scanf("%d",&no);
          float p;
          printf("Price: ");
          scanf("%f",&p);
          int dd,mm,yy;
          printf("Booking Date : ");
          scanf("%2d%*c%2d%*c%4d",&dd,&mm,&yy);
          bd.setDate(dd,mm,yy);
          printf("Journey Date : ");
          fflush;
          scanf("%2d%*c%2d%*c%4d",&dd,&mm,&yy);
          jd.setDate(dd,mm,yy);
          fflush;
          char from[10];
          printf("Boarding City : ");
          fflush(stdin);
          gets(from);
          char to[10];
          printf("Destntn. City : ");
          fflush(stdin);
          gets(to);
          t[i].set_ticket( no, p, bd, jd, from, to);
          fflush(stdin);
 
     }
     
     int choice;
     char ans;
     do{
          printf ("**********************Menu**********************\n1.Sort by 'Ticket Number'.\n2.Sort by 'Price'.\n3.Sort by 'From'.\n4.Sort by 'To'.\n5.Sort by 'Booking Date'.\n6.Sort by 'Journey Date'.\n#.Any other choice will display 'Raw Data'.\n\n");
          printf("Enter any INTEGER according to above options : ");
          scanf("%d",&choice);
          puts("\n\t\t*********Database of Tickets*********\n");
          printf("______________________________________________________________________________\n%10s%11s%11s%11s%17s%17s\n----------|----------|----------|----------|----------------|----------------|\n","Ticket no.|", "Price|", "From|", "To|", "Booked On|", "Journey On|");
          switch (choice)
          {
          case 1: 
               t[i].tno_sort(t,n);
               break;
          case 2: 
               t[i].price_sort(t,n);
               break;
          case 3: 
               t[i].from_sort(t,n);
               break;
          case 4: 
               t[i].to_sort(t,n);
               break;
          case 5: 
               t[i].bdate_sort(t,n);
               break;
          case 6: 
               t[i].jdate_sort(t,n);
               break;
          default: 
               t[i].show_ticket(t,n);
               break;
          }
          printf("------------------------------------------------------------------------------\n");
          printf("Do you want to display data in any other format? (Y/N) : ");
          fflush(stdin);
          scanf("%c",&ans);
     }while(ans=='y'|| ans =='Y');           
}