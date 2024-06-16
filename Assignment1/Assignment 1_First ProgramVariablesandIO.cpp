//question1
#include<iostream>
using namespace std;
int main(){
	int x,y;
	cout<<"INPUT ONE=";
	cin>>x;
	cout<<"INPUT TWO=";
	cin>>y;
	cout<<x*y;
	return 0;
}


//question2
#include <iostream>
using namespace std;
int main()
{
    char c = 'U';
    cout << "The ASCII value of " << c << " is " << int(c);
    return 0;
}

//question3
#include<iostream>
using namespace std;
int main(){
	int x,y;
	cout<<"INPUT length=";
	cin>>x;
	cout<<"INPUT breath=";
	cin>>y;
	cout<<x*y;
	return 0;
}


//question4
#include<iostream>
using namespace std;
int main(){
	int x;
	cin>>x;
	cout<<x*x*x;
	return 0;
}




//question5
#include<iostream>
using namespace std;
int main(){
	cout<<"Size of fundamental data type"<<endl;
	cout<<sizeof(char)<<endl;
	cout<<sizeof(short)<<endl;
	cout<<sizeof(int)<<endl;
	cout<<sizeof(long)<<endl;
	cout<<sizeof(long long)<<endl;
	cout<<sizeof(float)<<endl;
	cout<<sizeof(double)<<endl;
	cout<<sizeof(long double)<<endl;
	cout<<sizeof(bool)<<endl;
	return 0;
}


//question6
#include<iostream>
using namespace std;
int main(){
	int x,y,z;
	x =3;
	y =2;
	cout<<"before swapping"<<endl;
	cout<<x<<endl;
	cout<<y<<endl;
	z=x;
	x=y;
	y=z;
	cout<<"after swapping"<<endl;
	cout<<x<<endl;
	cout<<y<<endl;
	return 0;
	
}

