#include"Course.h"


Course::Course(string code, string title, int credit)
{
  
this->code= code;
  this->title = title;
  this->credit = credit;
}
void Course::setCode(string code)
{
this->code=code; 
}
void Course::setTitle(string title)
{
this->title = title;
}
void Course::setCredit(int credit)
{
this->credit = credit; 
}
int Course::getCredit()
{
   return credit;
1
}
string Course::getTitle() {
   return title;
}
string Course::getCode()
{
   return code;
}
string Course::getInfo()
{
string
str +=
str += return str;
str= ""; code;
"-" + title;
}
