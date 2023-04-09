#include<stdio.h>
class Box
{
		double length;
		double width;
		double depth;
	public:
		void setBox(double l, double w, double d)
		{
			length = l;
			width = w;
			depth = d;
		}
		void showBox(char* msg)
		{
			int i;
			puts(msg);
			printf("Length = %.2lf\n",length);
			printf("Width = %.2lf\n",width);
			printf("Depth = %.2lf\n",depth);
		}
		double volume()
		{
			return length * width * depth;
		}
		int incParameters(Box b)
		{
			length=b.length+1.1;
			width=b.width+1.1;
			depth=b.depth+1.1;
		}
};

main()
{
	Box b1;
	b1.setBox(11.11,22.22,33.33);
	b1.showBox("B1: ");
	printf("Volume : %.2lf\n",b1.volume());

	Box b2;
	b2.setBox(11.11,22.22,33.33);
	b2.showBox("B2: ");
	printf("Volume : %.2lf\n",b2.volume());

	Box b3;
	b3.setBox(111.11,222.22,333.33);
	b3.showBox("B3: ");
	printf("Volume : %.2lf\n",b3.volume());

	Box b4;
	b4.incParameters(b3);
	b4.showBox("B1: ");
	printf("Volume : %.2lf\n",b4.volume());


}