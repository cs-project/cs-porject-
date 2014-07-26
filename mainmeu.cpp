void choice()
{
int ch,l;
char name[500],na[50];
cout<<"welcome \n 1.To find game /n 2.to buy game /n 3.To rent game 4. to check the all the games/n enter your choice\n";
cin>>ch;
switch(ch)
{
case 1:
  {
  cout<<"enter the name of game you want to serch\n";
  gets(name);
  l=search(name);  
  if(l==1)
  cout<<"game is in the database";
  cout<<"would you like to buy the game\t enter 1 for yes\n 2 for no\n";
  cin>>b;
  if(b===1)
  showdetails();
  else
  cout<<"to return to main menu enter 1 to exit enter 2\n"
  cin>>c;
  if(c==1)
  choice();
  else
  cout<<"thank you press any key to exit\n";
  exit();
  else if(l==2)
  cout<<"game is out of stock\n";
  else
  cout<<"game not found\n";
  }
case 2:
  {
  cout<<"enter the name of the game\n";
  gets(na);
  l=search(name);
  if(l==1)
  showdetails();
  else
  cout<<"not found\n"
  cout<<"to return to main menu enter 1 to exit enter 2\n "
  cin>>c;
  if(c==1)
  choice();
  else
  cout<<"thank you press any key to exit\n";
  exit();
  else if(l==2)
  cout<<"game is out of stock\n";
  else
  cout<<"game not found\n";
  }
case 3:
{
cout<<"enter the name of the game\n";
  gets(na);
  l=search(name);
  if(l==1)
  showdetails2();
  else
  cout<<"not found\n"
  cout<<"to return to main menu enter 1 to exit enter 2\n "
  cin>>c;
  if(c==1)
  choice();
  else
  cout<<"thank you press any key to exit\n";
  exit();
  else if(l==2)
  cout<<"game is out of stock\n";
  else
  cout<<"game not found\n";
}
case 4:
{
  cout<<"here are is the list of all the game\n";
  allgame();
}
