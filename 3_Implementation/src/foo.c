#include "foo.h"
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/**
 * @brief sort function
 * 
 * @param l 
 */
void sort(nodetype *l)
{
nodetype *t;
nodetype *s;
int x,y;
char d[50],f[50];
t=l;
while(t!=NULL)
{
s=t->next;
while(s!=NULL)
{
if(t->info>s->info)
{
x=t->info;
y=t->year;
t->info=s->info;
t->year=s->year;
s->info=x;
s->year=y;
strcpy(d,t->name);
strcpy(f,t->colour);
strcpy(t->name,s->name);
strcpy(t->colour,s->colour);
strcpy(s->name,d);
strcpy(s->colour,f);
}
s=s->next;
}
t=t->next;
}
t=l;
while(t!=NULL)
{
printf("\t%d ->",t->info);
printf("\t%d ->",t->year);
printf("\t%s",t->colour);
printf("\t%s\n",t->name);
t=t->next;
}
getch();
}
/**
 * @brief sortyear function
 * 
 * @param l 
 */
 void sortyear(nodetype *l)
{
nodetype *t;
nodetype *s;
int x,y;
char d[50],f[50];
t=l;
while(t!=NULL)
{
s=t->next;
while(s!=NULL)
{
if(t->year>s->year)
{
x=t->info;
y=t->year;
t->info=s->info;
t->year=s->year;
s->info=x;
s->year=y;
strcpy(d,t->name);
strcpy(f,t->colour);
strcpy(t->name,s->name);
strcpy(t->colour,s->colour);
strcpy(s->name,d);
strcpy(s->colour,f);
}
s=s->next;
}
t=t->next;
}
t=l;
while(t!=NULL)
{
printf("\t%d ->",t->info);
printf("\t%d ->",t->year);
printf("\t%s",t->colour);
printf("\t%s\n",t->name);
t=t->next;
}
getch();
}
/**
 * @brief sort name function
 * 
 * @param l 
 */

 void sortname(nodetype *l)
{
nodetype *t;
nodetype *s;
int x,y;
char d[50],f[50];
t=l;
while(t!=NULL)
{
s=t->next;
while(s!=NULL)
{
if(t->name[0]>s->name[0])
{
x=t->info;
y=t->year;
t->info=s->info;
t->year=s->year;
s->info=x;
s->year=y;
strcpy(d,t->name);
strcpy(f,t->colour);
strcpy(t->name,s->name);
strcpy(t->colour,s->colour);
strcpy(s->name,d);
strcpy(s->colour,f);
}
s=s->next;
}
t=t->next;
}
t=l;
while(t!=NULL)
{
printf("\t%d ->",t->info);
printf("\t%d ->",t->year);
printf("\t%s",t->colour);
printf("\t%s\n",t->name);
t=t->next;
}
getch();
}
/**
 * @brief sort descending order
 * 
 * @param l 
 */
void desd(nodetype *l)
{
nodetype *t;
nodetype *s;
int x,y;
char d[50],f[50];
t=l;
while(t!=NULL)
{
s=t->next;
while(s!=NULL)
{
if(t->info<s->info)
{
x=t->info;
y=t->year;
t->info=s->info;
t->year=s->year;
s->info=x;
s->year=y;
strcpy(d,t->name);
strcpy(f,t->colour);
strcpy(t->name,s->name);
strcpy(t->colour,s->colour);
strcpy(s->name,d);
strcpy(s->colour,f);
}
s=s->next;
}
t=t->next;
}
t=l;
while(t!=NULL)
{
printf("\t%d ->",t->info);
printf("\t%d->",t->year);
printf("\t%s",t->colour);
printf("\t%s\n",t->name);
t=t->next;
}
}