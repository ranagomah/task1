#include<iostream>
using namespace std;

int main()
{
   cout<<"*\n* *\n* * *\n* * * *\n* * * * *\n";
    cout <<"\n*-------------------------*\n\n";
    cout<<"          *\n        * * * \n      * * * * *\n    * * * * * * *\n  * * * * * * * * *";
   cout<<"\n*---------------------------*\n\n";
    
   double a, b;
   cin >> a >> b;
   cout<<"a+b"<<"=" <<a+b<<endl;
   cout<<"a-b"<<"=" <<a-b<<endl;
   cout<<"a*b"<<"=" <<a*b<<endl;
   cout<<"a/b"<<"=" <<a/b<<endl;
   cout<<"-----------------"  ;

   string name1,name2;
    cout<<" what is student1 name?";
     cin>>name1;
     string id1,id2;
     cout<<"the id1 is:";
     cin>>id1;
     double grade1,grade2;
      cout<<" the grade1 is:";
       cin>>grade1;
       cout<<"what is student2 name?";
       cin>>name2;
       cout<<"the id2 is:";
       cin>>id2;
      cout<<"the grade2 is:";
      cin>> grade2;
      cout<<name1<<" with id: "<<id1<<" get "<<grade1;
      cout<<name2<<" with id: "<<id2<<" get "<< grade2;
      cout<<"the averge is:"<<(grade1+grade2)/2.0;
       cout<<"\n-------------\n";

       int start,end;
      cout<<"enter the start and the end: ";
      cin>>start>>end;
cout<<"sum of numbers from 1 to end = "<<"="<<end*(end+1)/2<<"\n";
      cout<<"sum of numbers from start to end = "<<(end*(end+1)/2)-((start-1)*(start)/2);
       cout<<"\n------------------";
       int num1,num2,num3;
        cin>>num1>>num2;
       num3=num2;
        num2=num1;
       num1=num3;
        cout<<num1<<" "<<num2;
       cout<<"\n-------------------------";
           

       



      
       

       return 0;

    

}