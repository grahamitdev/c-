
#include "MyString.h"


int main(void)
{
	MyString s1;
	cout << s1.getData()<< endl;
	MyString s2("Hello");
	cout << s2.getData()<< endl;
	MyString s3 = s2;
	cout << s3.getData()<< endl;
//	MyString s4 = MyString(5,'s');
	MyString s4(5,'s');
	cout << s4.getData()<< endl;
	return 0;
}
