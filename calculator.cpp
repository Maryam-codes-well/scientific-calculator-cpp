#include <iostream>
#include<cmath>
#include<cstdlib>
using namespace std;
double addition(int n){
	double x,sum=0;
	for(int i=0;i<n;i++){
			cout<<"enter "<<i+1<<" number"<<endl;
		cin>>x;
		sum+=x;
	}
	return sum;
}                                                                                                                                                                                   
double subtraction(int n){
	double sub,x;
	for(int i=0;i<n;i++){
		cout<<"enter "<<i+1<<" number"<<endl;
		cin>>x;
		sub-=x;
	}
	return sub;
}
double multiplication(int n){
	double x,mul=1;
	for(int i=0;i<n;i++){
			cout<<"enter "<<i+1<<" number"<<endl;
		cin>>x;
		mul*=x;
	}
	return mul;
}
void trigonometry(){
	double angle;
	int choice;
	cout<<"select the trigonometric function "<<endl;
	cout<<"1. Sin(x)"<<endl;
	cout<<"2. cos(x)"<<endl;
	cout<<"3. tan(x)"<<endl;
	cin>>choice;
	cout<<"enter angle"<<endl;
	cin>>angle;
	switch(choice){
		case 1: cout<<"Answer = "<<sin(angle)<<endl;
		break;
		case 2: cout<<"Answer = "<<cos(angle)<<endl;
		break;
		case 3: cout<<"Answer = "<<tan(angle)<<endl;
		break;
		default: cout<<"invalid choice"<<endl;
	}
}
int main(){
	cout<<"\t\t\t================================================================="<<endl;
	cout<<"\t\t\t\t\t\t A SIMPLE CALCULATOR"<<endl;
	cout<<"\t\t\t================================================================="<<endl;
	double n;
	int k;
	int choice;
	do{
		cout<<"\t\t\t\t\twhat operation do you want to perform"<<endl;
		cout<<"\t\t\t\t\t\t1. Addition '+' "<<endl;
		cout<<"\t\t\t\t\t\t2. Subtraction '-' "<<endl;
		cout<<"\t\t\t\t\t\t3. Multiplication '*' "<<endl;
		cout<<"\t\t\t\t\t\t4. division '/' "<<endl;
		cout<<"\t\t\t\t\t\t5. Mod |x|"<<endl;
		cout<<"\t\t\t\t\t\t6. Square root (x^1/2"<<endl;
		cout<<"\t\t\t\t\t\t7. Cube root (x^1/3) "<<endl;
		cout<<"\t\t\t\t\t\t8. Power (x^y)"<<endl;
		cout<<"\t\t\t\t\t\t9. log (natural)"<<endl;
		cout<<"\t\t\t\t\t\t10. log (base 10)"<<endl;
		cout<<"\t\t\t\t\t\t11. exponent (e^x)"<<endl;
		cout<<"\t\t\t\t\t\t12. Trigonometric functions (radians)"<<endl;
		cout<<"\t\t\t\t\t\t0. Exit calculator"<<endl;
		cin>>choice;
		system("cls");
		switch(choice){
			case 1: cout<<"how many numbers you want to add"<<endl;
			cin>>k;
			cout<<"Addition = "<<addition(k)<<endl;
			system("pause");
			break;
			case 2: cout<<"how many numbers you want to subtract"<<endl;
			cin>>k;
			cout<<"Subtraction = "<<subtraction(k)<<endl;
				system("pause");
			break;
			case 3: cout<<"how many numbers you want to multiply"<<endl;
			        cin>>k;
			        cout<<"Multiplication = "<<multiplication(k);
			        	system("pause");
			        break;
			case 4: {
				double x,y;
				cout<<"Enter numerator"<<endl;
				      cin>>x;
				      cout<<"enter denominator"<<endl;
				      cin>>y;
				      if(y==0){
				      	cout<<"division by zero not possible"<<endl;
					  }
					  else{
					  	cout<<"Answer = "<<x/y<<endl;
					  }
					  	system("pause");
					   break;
		         }
		         case 5:{
				 double x,y;
				cout<<"Enter numerator"<<endl;
				      cin>>x;
				      cout<<"enter denominator"<<endl;
				      cin>>y;
				      if(y==0){
				      	cout<<"mod with zero not possible"<<endl;
					  }
					  else{
					  	cout<<"Answer = "<<fmod(x,y)<<endl;}
					  		system("pause");
					  	break;}
					  	case 6:  cout<<"enter a number to take square root"<<endl;
					  	         cin>>n;
					  	         if(n<0){
					  	         	cout<<"Square root of negative number doesn't exist"<<endl;
								   }else{
					  	         cout<<"Answer = "<<sqrt(n)<<endl;}
					  	         	system("pause");
					  	         break;
				case 7: cout<<"enter a number to take cube root"<<endl;
				             cin>>n;
							 cout<<"Answer = "<<cbrt(n)<<endl;
							 	system("pause");
							 break;	  	  
				case 8: { double x,y;
				  cout<<"enter base"<<endl;
				  cin>>x;
				  cout<<"enter power"<<endl;
				  cin>>y;
				  cout<<"Answer = "<<pow(x,y)<<endl;
				  	system("pause");
					break;
				}	
				case 9: cout<<"enter a number to take natural log"<<endl;
				            cin>>n;
							cout<<"Answer = "<<log(n)<<endl;
								system("pause");
							break;
				case 10: cout<<"enter a number to take log base 10"<<endl;
				            cin>>n;
							cout<<"Answer = "<<log10(n)<<endl;;
								system("pause");
							break;
				case 11: cout<<"enter a number to take exponent"<<endl;
				            cin>>n;
							cout<<"Answer = "<<exp(n)<<endl;;
								system("pause");
							break;	
				case 12: cout<<"Trigonometric functions"<<endl;
				          trigonometry();
				          	system("pause");
									break;
				case 0: cout<<"Exiting calculator...."<<endl;
								break;						        
					         default: cout<<"invalid choice";				         
			
		}
	}while(choice!=0);
	return 0;
}

