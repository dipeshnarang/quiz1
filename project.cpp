#include<iostream>
using namespace std;
class quiz
{ public :
void set();
void ques1();
void ques2();
void ques3();
void ques4();
void ques5();
}s1;
int ans;
int main()
{
cout<<"\n THIS IS A QUIZ GAME ";
cout<<"\n\n\n FIRST ANSWER THE ELIGIBLE QUESTION TO PLAY THE GAME\n";
char name[30];
cout<<"enter your name\n";
cin>>name;
cout<<"enter your age\n";
int age;
cin>>age;
s1.set();
return 1;
}
void quiz::set()
{
cout<<"\n This is your eligibility question ";
cout<<"\n\n\n\nIn computer,what is 1 gigabyte?";
cout<<"\n(1)1024*2 bytes"<<"\t(2)1024*1024*1024 bytes";
cout<<"\n(3)1024*3 bytes"<<"\t(4)NONE OF THESE\n";
cout<<"enter your ans : ";
cin>>ans;
if(ans==2)
{
cout<<"correct ans\n";
cout<<"qualified\n";
s1.ques1();
}
else
{
cout<<"not qualified";
}
}
void quiz::ques1()
{
cout<<"\nWhat do you mean by Hexadecimal in computer?";
cout<<"\n(1)With a base of 16"<<"\t(2)With a base of 6";
cout<<"\n(3)With a base of 8"<<"\t(4)NONE OF THESE\n";
cout<<"enter your ans : ";
cin>>ans;
if(ans==1)
{
cout<<"correct ans\n";
cout<<"pts=1";
s1.ques2();
}
else
{
cout<<"wrong";
cout<<"better luck next time";
}
}
void quiz::ques2()
{
cout<<"\nWho has written the book 'DIVINE LIFE?";
cout<<"\n(1)Charles Dickens"<<"\t(2)Dante Alighieri";
cout<<"\n(3)Swami Sivananda"<<"\t(4)Karl Marx\n";
cout<<"enter your ans : ";
cin>>ans;
if(ans==3)
{
cout<<"correct ans\n";
cout<<"pts=2";
s1.ques3();
}
else
{
cout<<"wrong";
cout<<"better luck next time";
}
}
void quiz::ques3()
{
cout<<"\nWhich game is associate with 'YONEX CUP'?";
cout<<"\n(1)Golf"<<"\t(2)Baseball";
cout<<"\n(3)Yatch Racing"<<"\t(4)Badminton\n";
cout<<"enter your ans : ";
cin>>ans;
if(ans==4)
{
cout<<"correct ans\n";
cout<<"pts=3";
s1.ques4();
}
else
{
cout<<"wrong";
cout<<"better luck next time";
}
}
void quiz::ques4()
{
cout<<"\nWhere the disease named 'GLAUCOMA' is affected in the human body?";
cout<<"\n(1)Skin"<<"\t(2)Eyes"<<"\n(3)Spleen"<<"\t(4)blood\n";
cout<<"enter your ans : ";
cin>>ans;
if(ans==2)
{
cout<<"correct ans\n";
cout<<"pts=4";
s1.ques5();
}
else
{
cout<<"wrong";
cout<<"better luck next time";
}
}
void quiz::ques5()
{
cout<<"\nWhen was Abrahim Lincoln was re-elected as president of U.S.?";
cout<<"\n(1)1864"<<"\t(2)1814"<<"\n(3)1865"<<"\t(4)1819\n";
cout<<"enter your ans : ";
cin>>ans;
if(ans==1)
{
cout<<"correct ans\n";
cout<<"pts=5\n";
cout<<"congratulaions\n";
}
else
{
cout<<"wrong\n";
cout<<"better luck next time\n";
}
}
