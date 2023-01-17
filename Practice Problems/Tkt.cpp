#include<stdio.h>
#include<conio.h>
#include<string.h>

class Date
{
	int day, month, year;
	public:
		void setDate(int d, int m, int y)
		{
			day = d;
			month = m;
			year = y;
		}
		void showDate()
		{
			printf("%02d/%02d/%04d", day, month, year);
		}
		int getDay(){
			return day;
		}
		int getMonth(){
			return month;
		}
		int getYear(){
			return year;
		}
};

class Ticket
{
	int tno;
	float price;
	Date booking_date;
	Date journey_date;
	char from[20];
	char to[20];

	public:
		void setTicket(int n, float p, Date bd, Date jd, char* f, char* t)
		{
			tno = n;
			price = p;
			booking_date = bd;
			journey_date = jd;
			strcpy(from, f);
			strcpy(to, t);
		}
		void showTicket()
		{
			printf("%10d", tno);
			printf("%10g", price);
			printf("%10s", from);
			printf("%13s", to);
			printf("   ");
			booking_date.showDate();
			printf("   ");
			journey_date.showDate();
			printf("\n");
		}
		int getTno()
		{
			return tno;
		}
		float getPrice(){
			return price;
		}
		Date getBooking(){
			return booking_date;
		}
		Date getJourney(){
			return journey_date;
		}
		char* getFrom(){
			return from;
		}
		char* getTo(){
			return to;
		}
};

void createTicket(Ticket t[], int n)
{
	float price = 5.00f;
	int d,m,y,i;
	Date bd, jd;
	char from[10];
	char to[10];

	for (i = 0; i < n; i++)
	{
		printf("Fill in the  details of ticket no. %d - \n", i+1);
		printf("Enter Ticket price : ");
		scanf("%g", &price);

		printf("Enter booking date : ");
		scanf("%d/%d/%d", &d, &m, &y);
		fflush(stdin);
		bd.setDate(d, m, y);

		printf("Enter journey date : ");
		scanf("%d/%d/%d", &d, &m, &y);
		fflush(stdin);
		jd.setDate(d, m, y);

		printf("Enter boarding location : ");
          fflush(stdin);
		gets(from);
		printf("Enter destination : ");
          fflush(stdin);
		gets(to);

		t[i].setTicket(i+1, price, bd, jd, from, to);
	}
	if(i==n)
		printf("\n\n\t\t\tTicket data entry successful!!!\n\t\t\t-------------------------------");
}

void display(Ticket t[], int n)
{
	printf("Ticket no.     Price  Boarding  Destination      Booking   Journey\n");
	for(int i = 0; i < n; i++)
	{
		t[i].showTicket();
	}
	printf("\n\n");
}

void sortByTno(Ticket t[], int n)
{
	Ticket temp;
	for(int i = 0; i < n-1; i++)
	{
		for(int j = i; j < n; j++)
		{
			if(t[i].getTno() > t[j].getTno())
			{
				temp = t[i];
				t[i] = t[j];
				t[j] = temp;
			}
		}
	}
}

void sortByPrice(Ticket t[], int n)
{
	Ticket temp;
	for(int i = 0; i < n-1; i++)
	{
		for(int j = i; j < n; j++)
		{
			if(t[i].getPrice() > t[j].getPrice())
			{
				temp = t[i];
				t[i] = t[j];
				t[j] = temp;
			}
		}
	}
}

void sortByJourney(Ticket t[], int n)
{
	Ticket temp;
	int x = 0;
	for(int i = 0; i < n-1; i++)
	{
		for(int j = i; j < n; j++)
		{
			if(t[i].getJourney().getYear() == t[j].getJourney().getYear())
			{
				if(t[i].getJourney().getMonth() == t[j].getJourney().getMonth())
				{
					if(t[i].getJourney().getDay() == t[j].getJourney().getDay())
						x = 0;
					else
						x = t[i].getJourney().getDay() > t[j].getJourney().getDay() ? 1 : 0;
				}
				else
					x = t[i].getJourney().getMonth() > t[j].getJourney().getMonth() ? 1 : 0;
				}
			else
				x = t[i].getJourney().getYear() > t[j].getJourney().getYear() ? 1 : 0;

			if(x)
			{
				temp = t[i];
				t[i] = t[j];
				t[j] = temp;
			}
		}
	}
}

void sortByBooking(Ticket t[], int n)
{
	Ticket temp;
	int x = 0;
	for(int i = 0; i < n-1; i++)
	{
		for(int j = i; j < n; j++)
		{
			if(t[i].getBooking().getYear() == t[j].getBooking().getYear())
			{
				if(t[i].getBooking().getMonth() == t[j].getBooking().getMonth())
				{
					if(t[i].getBooking().getDay() == t[j].getBooking().getDay())
						x = 0;
					else
						x = t[i].getBooking().getDay() > t[j].getBooking().getDay() ? 1 : 0;
				}
				else
					x = t[i].getBooking().getMonth() > t[j].getBooking().getMonth() ? 1 : 0;
				}
			else
				x = t[i].getBooking().getYear() > t[j].getBooking().getYear() ? 1 : 0;

			if(x)
			{
				temp = t[i];
				t[i] = t[j];
				t[j] = temp;
			}
		}
	}
}

void sortByBoarding(Ticket t[], int n)
{
	Ticket temp;
	for(int i = 0; i < n-1; i++)
	{
		for(int j = i; j < n; j++)
		{
			if(strcmp(t[i].getFrom(), t[j].getFrom()) > 0)
			{
				temp = t[i];
				t[i] = t[j];
				t[j] = temp;
			}
		}
	}
}

void sortByDest(Ticket t[], int n)
{
	Ticket temp;
	for(int i = 0; i < n-1; i++)
	{
		for(int j = i; j < n; j++)
		{
			if(strcmp(t[i].getTo(), t[j].getTo()) > 0)
			{
				temp = t[i];
				t[i] = t[j];
				t[j] = temp;
			}
		}
	}
}

int main()
{

	int n = 0;

	printf("\n\nEnter the number of tickets you need : ");
	scanf("%d", &n);
	Ticket* t = new Ticket[n];
     createTicket(t, n);

	//display(t, n);

	int exit = 0;
	do
	{
		int choice = 0;
		char ch;
		printf("LIST :\n");
		printf("1. Sort by ticket no.\n");
		printf("2. Sort by price.\n");
		printf("3. Sort by boarding location.\n");
		printf("4. Sort by destination.\n");
		printf("5. Sort by booking date.\n");
		printf("6. Sort by journey date.\n");
		printf("\nEnter your choice from the list: \n");
		scanf("%d", &choice);
		printf("\nTickets Before :\n\n");
		display(t, n);

		switch (choice)
		{
			case 1:
				sortByTno(t, n);
				break;
			case 2:
				sortByPrice(t, n);
				break;
			case 3:
				sortByBoarding(t, n);
				break;
			case 4:
				sortByDest(t, n);
				break;
			case 5:
				sortByBooking(t, n);
				break;
			case 6:
				sortByJourney(t, n);
				break;
			default:
				printf("Wrong choice");
				break;
		}

		printf("\n\nTickets After sorting :\n\n");
		display(t, n);
		a:
		printf("\n\nAre you done or do you want to continue??? (Y/N) : ");
		fflush(stdin);
		//scanf("%c", &ch);
		scanf("%c", &ch);

		if(ch == 'Y' || ch == 'y')
			exit = 1;
		else if (ch == 'N' || ch == 'n')
			exit = 0;
	} while(exit);
	//delete t;
	return 0;
}