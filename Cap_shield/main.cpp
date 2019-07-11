//shield
#include<graphics.h>

int main()
{
	int gdriver=DETECT,gmode,errorcode;
	int midx,midy;
	int radious=120;
	struct arccoordstype arcinfo;

	int xs1,ys1,xe1,ye1;
	int xs2,ys2,xe2,ye2;
	int xs3,ys3,xe3,ye3;
	int xs4,ys4,xe4,ye4;
	int xs5,ys5,xe5,ye5;


	initgraph(&gdriver,&gmode,"c:\\TURBOC3\\BGI");

	midx=getmaxx()/2;
	midy=getmaxy()/2;

	int count=200,x=0;
	setcolor(RED);

		radious=120;
		while(radious>=100)
		{
			circle(midx,midy,radious);
			radious--;
		}
		setcolor(WHITE);
		while(radious>=80)
		{
			circle(midx,midy,radious);
			radious--;
		}
		setcolor(RED);
		while(radious>=60)
		{
			circle(midx,midy,radious);
			radious--;
		}
		setcolor(BLUE);
		while(radious>=0)
		{
			circle(midx,midy,radious);
			radious--;
		}
		
		while(count>0)
		{
			//cleardevice();
			setcolor(BLUE);
	
	
			line(xs1,ys1,xe2,ye2);
			line(xe2,ye2,xe4,ye4);
			line(xe4,ye4,xe1,ye1);
			line(xe1,ye1,xe3,ye3);
			line(xe3,ye3,xs1,ys1);
			
			setcolor(WHITE);
	
			arc(midx,midy,x%306,(x+72)%360,60);
			getarccoords(&arcinfo);
	
	
			xs1=arcinfo.xstart;
			ys1=arcinfo.ystart;
	
			xe1=arcinfo.xend;
			ye1=arcinfo.yend;
	
			setcolor(WHITE);
			arc(midx,midy,(x+72)%360,(x+(72*2))%360,60);
			getarccoords(&arcinfo);
	
			xs2=arcinfo.xstart;
			ys2=arcinfo.ystart;
	
			xe2=arcinfo.xend;
			ye2=arcinfo.yend;
	
			setcolor(WHITE);
			arc(midx,midy,(x+(72*2))%360,(x+(72*3))%360,60);
			getarccoords(&arcinfo);
	
			xs3=arcinfo.xstart;
			ys3=arcinfo.ystart;
	
			xe3=arcinfo.xend;
			ye3=arcinfo.yend;
	
			setcolor(WHITE);
			arc(midx,midy,(x+(72*3))%360,(x+(72*4))%360,60);
			getarccoords(&arcinfo);
	
			xs4=arcinfo.xstart;
			ys4=arcinfo.ystart;
	
			xe4=arcinfo.xend;
			ye4=arcinfo.yend;
	
			setcolor(WHITE);
			arc(midx,midy,(x+(72*4))%360,(x+(72*5))%360,60);
			getarccoords(&arcinfo);
	
			xs5=arcinfo.xstart;
			ys5=arcinfo.ystart;
	
			xe5=arcinfo.xend;
			ye5=arcinfo.yend;
	
			line(xs1,ys1,xe2,ye2);
			line(xe2,ye2,xe4,ye4);
			line(xe4,ye4,xe1,ye1);
			line(xe1,ye1,xe3,ye3);
			line(xe3,ye3,xs1,ys1);
	
			if(x==360)
			{
				x=0;
			}
			delay(45);
			x++;
			count--;
		}
		getch();
}






