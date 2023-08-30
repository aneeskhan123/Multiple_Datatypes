/*7. Write a C++ program that displays mixed data types and arithmetic operations.
Sample output:
Display arithmetic operations with mixed data type :
---------------------------------------------------------
5 + 7 = 12    ----------------int
3.7 + 8.0 = 11.7              float
5 + 8.0 = 13.0                float
5 - 7 = -2                    int
3.7 - 8.0 = -4.3              float
5 - 8.0 = -3.0                float
5 * 7 = 35                    int
3.7 * 8.0 = 29.6              float
5 * 8.0 = 40.0                float
5 / 7 = 0                     int
3.7 / 8.0 = 0.5               float
5 / 8.0 = 0.6                  float
Click me to see the sample solution
*/

#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int a=5,b=7;
	double k=3.7,f=8.0,l=5;
	
cout<<a<<" + "<<b<<" = "<<a+b<<"\n";       //5 + 7 = 12

cout<<k<<" + "<<f<<" = "<<k+f<<"\n";       //float 11.7

cout<<l<<" + "<<f<<" = "<<l+f<<"\n";       //5 + 8.0 = 13.0

getch();
       
    cout<<a<<" - "<<b<<" = "<<a-b<<"\n";     //5 - 7 = -2
    
    cout<<k<<" - "<<f<<" = "<<k-f<<"\n";     //3.7 - 8.0 =-4.3
    
    cout<<l<<" - "<<f<<" = "<<l-f<<"\n";     //5 - 8.0 = -3.0    
    
getch();
      
	  cout<<a<<" * "<<b<<" = "<<a*b<<"\n";   //5 * 7 = 35
	
	  cout<<k<<" * "<<f<<" = "<<k*f<<"\n";  // 3.7 * 8.0 = 29.6 
		  
 	  cout<<l<<" * "<<f<<" = "<<l*f<<"\n";  //5 * 8.0 =40.0
			 
getch();
		  cout<<a<<" / "<<b<<" = "<<a/b<<"\n";     // 5 / 7 = 0
		  	          
          cout<<k<<" / "<<f<<" = "<<k/f<<"\n";     //3.7 / 8.0 = 0
		  
          cout<<l<<" / "<<f<<" = "<<l/f<<"\n";		// 5 / 8.0 = 0.5
		

}
