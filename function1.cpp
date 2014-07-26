void choice()
{
int ch,l;
char name[500];
cout<<"welcome \n 1.To find game /n 2.to buy game /n 3.TO rent game 4. to check the all the games/n enter your choice";
cin>>ch;
switch(ch)
{
case 1:
  {
  cout<<"enter the name of game you want to serch";
  gets(name);
  l=database(name);  
  if(l==1)
  cout<<"game is in the database";
  else if(l==2)
  cout<<"game is out of stock";
  else
  cout<<"book not found";
  }
