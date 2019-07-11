#include<graphics.h>

int main()
{
	
	int gdriver=DETECT,gmode,errorcode;
	int midx,midy;
	int radious=100;

	initgraph(&gdriver,&gmode,"c:\\TURBOC3\\BGI");

	midx=getmaxx()/2;
	midy=getmaxy()/2;
	setcolor(WHITE);
	circle(midx,midy,125);
	circle(midx,midy,130);
	setcolor(RED);
	circle(midx,midy,128);

	//After Outer 3 Rings

	setcolor(WHITE);
	circle(midx,midy,102);
	setcolor(RED);
	circle(midx,midy,101);
	circle(midx,midy,99);
	setcolor(WHITE);
	circle(midx,midy,98);

	setcolor(RED);
	circle(midx,midy,52);
	setcolor(WHITE);
	circle(midx,midy,51);
	circle(midx,midy,49);
	setcolor(RED);
	circle(midx,midy,48);

	setcolor(WHITE);
	circle(midx,midy,23);
	circle(midx,midy,27);

	line(midx,150,midx,180);
	line(midx,300,midx,330);
	line(230,midy,260,midy);
	line(380,midy,410,midy);

	int x=0;
	int fc=55;
	int count=0;

	while(x<500)
	{
		int c=rand()%25;
		int a1=rand()%95;
		if(rand()%2==0)
			setcolor(BLUE);
		else
			setcolor(WHITE);
		circle(midx,midy,c);

		circle(midx,125,8);
		circle(midx,353,8);
		circle(205,midy,8);
		circle(432,midy,8);
		circle(232,165,8);
		circle(232,313,8);
		circle(405,165,8);
		circle(405,313,8);

		if(count>=0 && count<40)
		{
			arc(midx,midy,5,85,fc);
			arc(midx,midy,95,175,fc);
			arc(midx,midy,185,265,fc);
			arc(midx,midy,275,355,fc);
			fc++;
			count++;
		}

		if(count>=40 && count<=80)
		{
			setcolor(BLACK);
			arc(midx,midy,5,85,fc);
			arc(midx,midy,95,175,fc);
			arc(midx,midy,185,265,fc);
			arc(midx,midy,275,355,fc);
			count++;
			if(count==80)
				count=0;
			fc--;
		}

		x++;

		delay(50);


	}
	getch();
	return 0;

}
