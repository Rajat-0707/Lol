#include <iostream>
using namespace std;
//calculator program
int main(){
	#include<iostream>
using namespace std;
float firstnumber;
cout<<"enter the value of 1st number "<<endl;
cin>>firstnumber ;
float secondnumber ;
cout<<"enter the value of 2nd number"<<endl;
cin>>secondnumber;
char operation ;
cout<<"enter the operation to be applied on 1st and 2nd number"<<endl;
cin>>operation ;
switch(operation){
	case '+' :
	cout<<firstnumber+secondnumber<<endl;
	break;
	case '-' :
	cout<<firstnumber-secondnumber<<endl;
	break;
	case '*' :
	cout<<firstnumber*secondnumber<<endl;
	break;
	case '/' :
	cout<<firstnumber/secondnumber<<endl;
	break;
	default:
	cout<<"invalid operarion"<<endl;
	
}
cout<<"do you want to continue y/n"<<endl;
char output;
cin>>output;
switch(output){
	     case 'y':
	     cout<<"itna program likhna nhi aata :( "<<endl;
	     break;
	     case 'n':
	     cout<<"ok"<<endl;
	     break;
	     default:
	     cout<<"gand mara"<<endl;
}
	     

}
