#include<stdio.h>
#include<stdlib.h>

void swap(int*,int*); //To swap Values
int op(int,char);     //To perform Operation and make it look like a Circular array.

void main()
{
  char word[5];
  printf("Enter the 4-Letter word : ");
  scanf("%s",word);
  printf("UNSCRAMBLED WORD : \n");
  int a=0,b=1,c=2,d=3,i;
  for(i=0;i<3;i++)
  {
    printf("%c%c%c%c\n",word[a],word[b],word[c],word[d]);
    swap(&c,&d);
    printf("%c%c%c%c\n",word[a],word[b],word[c],word[d]);
    b=op(b,'+');
    swap(&c,&d);
    if(b==3)
      d=op(d,'-');
    else
      c=op(c,'-');
  }


a=1;
b=2;
c=3;
d=0;
for(i=0;i<3;i++)
{
  printf("%c%c%c%c\n",word[a],word[b],word[c],word[d]);
  swap(&c,&d);
  printf("%c%c%c%c\n",word[a],word[b],word[c],word[d]);
  b=op(b,'+');
  swap(&c,&d);
  if(b==3)
    c=op(c,'-');
  else
  d=op(d,'-');
}


a=2;
b=3;
c=0;
d=1;
for(i=0;i<3;i++)
{
  printf("%c%c%c%c\n",word[a],word[b],word[c],word[d]);
  swap(&c,&d);
  printf("%c%c%c%c\n",word[a],word[b],word[c],word[d]);
  b=op(b,'+');
  swap(&c,&d);
  if(b==3 || b==0)
    c=op(c,'-');
  else
  d=op(d,'-');
}


a=3;
b=0;
c=1;
d=2;
for(i=0;i<3;i++)
{
  printf("%c%c%c%c\n",word[a],word[b],word[c],word[d]);
  swap(&c,&d);
  printf("%c%c%c%c\n",word[a],word[b],word[c],word[d]);
  b=op(b,'+');
  swap(&c,&d);
  if(b==0 || b==1 || b==3)
    c=op(c,'-');
  else
  d=op(d,'-');
}
}/*MAIN ENDS HERE*/

void swap(int *x,int*y)
{
  int temp;
  temp=*x;
  *x=*y;
  *y=temp;
}

int op(int x,char y)
{
  if(y=='+')
    if(x==3)
      return 0;
    else
      return x+1;
  else if(y=='-')
    if(x==0)
      return 3;
    else
      return x-1;
}
