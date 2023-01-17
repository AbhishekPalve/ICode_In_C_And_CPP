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
          void set_ticket( int no, float p, date bd, date jd, char* f, char* t)
          {
               tno=no;
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
          int gettno()
          {
               return tno;
          }

          float getprice()
          {
               return price;
          }

          date getBDate()
          {
               return booking_date;
          }

          date getJDate()
          {
               return journey_date;
          }

          char* getfrom()
          {
               return from;
          }

          char* getto()
          {
               return to;
          }
};

class sort
{
     public:
          void tno_sort(ticket t[],int n)
          {
               int i,j;
               for(i=0;i<n-1;i++)
               {
                    for(j=i+1;j<n;j++)
                    {
                         if(t[i].gettno()>t[j].gettno())
                         {
                              class ticket temp;
                              temp=t[i];
                              t[i]=t[j];
                              t[j]=temp;
                         }
                    }       
               }
               t[i].show_ticket(t,n);
          }

          //Price Sort
          void price_sort(ticket t[],int n)
          {
               int i,j;
               for(i=0;i<n-1;i++)
               {
                    for(j=i+1;j<n;j++)
                    {
                         if(t[i].getprice()>t[j].getprice())
                         {
                              class ticket temp;
                              temp=t[i];
                              t[i]=t[j];
                              t[j]=temp;
                         }
                    }   
               }
               t[i].show_ticket(t,n);
          }

          //From Sort
          void from_sort(ticket t[],int n)
          {
               int i,j,cmp;   
               for(i=0;i<n;i++)
               {
                    for(j=i+1;j<n;j++)
                    {
                         cmp=strcmp(t[i].getfrom(),t[j].getfrom());
                         if(cmp>0)
                         {
                              class ticket temp;
                              temp=t[i];
                              t[i]=t[j];
                              t[j]=temp;
                         }
                    }   
               }
               t[i].show_ticket(t,n);
          }

          //To Sort
          void to_sort(ticket t[],int n)
          {
               int i,j,cmp;          
               for(i=0;i<n;i++)
               {
                    for(j=i+1;j<n;j++)
                    {
                         cmp=strcmp(t[i].getto(),t[j].getto());
                         if(cmp>0)
                         {
                              class ticket temp;
                              temp=t[i];
                              t[i]=t[j];
                              t[j]=temp;
                         }
                    }   
               }
               t[i].show_ticket(t,n);
          }

          //Boarding Date
          void bdate_sort(ticket t[],int n)
          {
               int i,j;
               for(i=0;i<n;i++)
               {
                    for(j=i+1;j<n;j++)
                    {
                         if(t[i].getBDate().getyear()<t[j].getBDate().getyear())
                         {
                              class ticket temp;
                              temp=t[i];
                              t[i]=t[j];
                              t[j]=temp;
                         }
                         else if(t[i].getBDate().getyear()==t[j].getBDate().getyear())
                         {
                              if(t[i].getBDate().getmonth()<t[j].getBDate().getmonth())
                              {
                                   class ticket temp;
                                   temp=t[i];
                                   t[i]=t[j];
                                   t[j]=temp;
                              }
                         }
                         else if(t[i].getBDate().getmonth()==t[j].getBDate().getmonth())
                         {
                              if(t[i].getBDate().getday()<t[j].getBDate().getday())
                              {
                                   class ticket temp;
                                   temp=t[i];
                                   t[i]=t[j];
                                   t[j]=temp;
                              }
                         }
                    }   
               }
               t[0].show_ticket(t,n);
          }

          //Journey Date
          void jdate_sort(ticket t[],int n)
                    {
                         int i,j;
                         for(i=0;i<n;i++)
                         {
                              for(j=i+1;j<n;j++)
                              {
                                   if(t[i].getJDate().getyear()<t[j].getJDate().getyear())
                                   {
                                        class ticket temp;
                                        temp=t[i];
                                        t[i]=t[j];
                                        t[j]=temp;
                                   }
                                   else if(t[i].getJDate().getyear()==t[j].getJDate().getyear())
                                   {
                                        if(t[i].getJDate().getmonth()<t[j].getJDate().getmonth())
                                        {
                                             class ticket temp;
                                             temp=t[i];
                                             t[i]=t[j];
                                             t[j]=temp;
                                        }
                                   }
                         //else if(t[i].getJDate().getmonth()==t[j].getJDate().getmonth())
                         //{
                              if(t[i].getJDate().getday()<t[j].getJDate().getday())
                              {
                                   class ticket temp;
                                   temp=t[i];
                                   t[i]=t[j];
                                   t[j]=temp;
                              }
                         //}
                    }   
               }
               t[0].show_ticket(t,n);
          }
};

main()
{
     date bd, jd;
     int n;
     sort s;
     printf("Enter how many tickets data needs to be entered: ");
     scanf("%d",&n);
     int i,j;
     static int ticketno=0;
     ticket* t = new ticket[n];
     for(i=0;i<n;i++)
     {
          ticketno=n-i;
          printf("*********Enter Details of ticket no %d*********\n",i+1);
          int no;
          printf("No : ");
          scanf("%d",&no);
          float p;
          printf("Price: ");
          p=506;
          scanf("%f",&p);
          int dd,mm,yy;
          printf("Booking Date : ");
          scanf("%2d%*c%2d%*c%4d",&dd,&mm,&yy);
          bd.setDate(dd,mm,yy);
          printf("Journey Date : ");
          scanf("%2d%*c%2d%*c%4d",&dd,&mm,&yy);
          jd.setDate(dd,mm,yy);
          char from[10]="abc";
          printf("Boarding City : ");
          fflush(stdin);
          gets(from);
          char to[10]="bcd";
          printf("Destntn. City : ");
          fflush(stdin);
          gets(to);
          t[i].set_ticket( ticketno , p, bd, jd, from, to);
          fflush(stdin);
     }
     
     int choice;
     char ans;
     do{
          printf ("**********************Menu**********************\n1.Sort by 'Ticket Number'.\n2.Sort by 'Price'.\n3.Sort by 'From'.\n4.Sort by 'To'.\n5.Sort by 'Booking Date'.\n6.Sort by 'Journey Date'.\n7.Display current 'Raw Data'.\n\n");
          printf("Enter any INTEGER according to above options : ");
          fflush(stdin);
          scanf("%d",&choice);
          puts("\n\t\t*********Database of Tickets*********\n");
          printf("______________________________________________________________________________\n%10s%11s%11s%11s%17s%17s\n----------|----------|----------|----------|----------------|----------------|\n","Ticket no.|", "Price|", "From|", "To|", "Booked On|", "Journey On|");
          switch (choice)
          {
          case 1: 
               s.tno_sort(t,n);
               break;
          case 2: 
               s.price_sort(t,n);
               break;
          case 3: 
               s.from_sort(t,n);
               break;
          case 4: 
               s.to_sort(t,n);
               break;
          case 5: 
               s.bdate_sort(t,n);
               break;
          case 6: 
               s.jdate_sort(t,n);
               break;
          case 7: 
               t[i].show_ticket(t,n);
               break;
          }
          printf("------------------------------------------------------------------------------\n");
          printf("Do you want to display data in any other format? (Y/N) : ");
          fflush(stdin);
          scanf("%c",&ans);
     }while(ans=='Y'|| ans =='y');           
}