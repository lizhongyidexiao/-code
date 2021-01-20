#define Num 5
float val[Num];
float*vp;
for(vp=&val[Num];vp>&val[0;])
{
	*--vp=0;
}//先--在用*解引用，赋值0 
