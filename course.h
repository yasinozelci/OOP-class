
#include<string>
using namespace std;
class Course
{
public:
   Course(string, string, int);
   void setCode(string);
   void setTitle(string);
   void setCredit(int);
   int getCredit();
   string getTitle();
   string getCode();
   string getInfo();
private:
   string code;
   string title;
   int credit;
};
