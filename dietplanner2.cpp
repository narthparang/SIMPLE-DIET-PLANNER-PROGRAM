#include <iostream>
#include <string>
#include<conio.h>
#include<stdlib.h>
using namespace std;

class User {
private:
    string name;
    int age;
    string gender;
    int height;
    double weight;
    double targetWeight;

public:
    User(const string& n, int a, const string& g, int h, double w, double tw)
        : name(n), age(a), gender(g), height(h), weight(w), targetWeight(tw) {}

    const string& getName() const {
        return name;
    }

    int getAge() const {
        return age;
    }

    const string& getGender() const {
        return gender;
    }

    int getHeight() const {
        return height;
    }

    double getWeight() const {
        return weight;
    }

    double getTargetWeight() const {
        return targetWeight;
    }
};
class gainfooditem
{
public:
    void display()
    { string v1;
          v1 = "                        ";
    cout<<v1<<"============================================================"<<endl;
    cout<<v1<<"       calories intake of different food items are:"<<endl;
    cout<<v1<<"============================================================"<<endl;
    cout<<v1<<v1<<"1.Boiled egg: 80"<<endl;
    cout<<v1<<v1<<"2.Bread with butter: 90"<<endl;
    cout<<v1<<v1<<"3.250 ml milk: 200"<<endl;
    cout<<v1<<v1<<"4.Fried nuts 1 cup: 300"<<endl;
    cout<<v1<<v1<<"5.Banana : 80"<<endl;
    cout<<v1<<v1<<"6.Fried Chicken : 250"<<endl;
    cout<<v1<<v1<<"7.1 spoon Ghee : 50"<<endl;
    cout<<v1<<v1<<"8.Steam/Fried rice 1 bowl : 240"<<endl;
    cout<<v1<<v1<<"9.1 bowl salad : 230"<<endl;
    cout<<v1<<v1<<"10.Chapati : 60"<<endl;
    cout<<v1<<"============================================================"<<endl;
    }

};
class loosefooditem
{
public:
    void display()
    {
        string v2;
    v2 = "                        ";
    cout<<v2<<"============================================================"<<endl;
    cout<<v2<<"       calories intake of different food items are:"<<endl;
    cout<<v2<<"============================================================"<<endl;
    cout<<v2<<v2<<"1.One cup oats: 130"<<endl;
    cout<<v2<<v2<<"2.One cup cottage cheese: 190"<<endl;
    cout<<v2<<v2<<"3.one slice of watermelon: 100"<<endl;
    cout<<v2<<v2<<"4.One cup of Greek Yogurt: 140"<<endl;
    cout<<v2<<v2<<"5.One cucumber : 80"<<endl;
    cout<<v2<<v2<<"6.One cup green tea : 50"<<endl;
    cout<<v2<<v2<<"7.One glass warm water with honey : 150"<<endl;
    cout<<v2<<v2<<"8.One bowl steam vegetable : 120"<<endl;
    cout<<v2<<v2<<"9.One bowl salad : 130"<<endl;
    cout<<v2<<v2<<"10.One bowl cornflakes : 160"<<endl;
    cout<<v2<<"============================================================"<<endl;
    }

};

int main() {
    int pass;
    do{
    cout<<"================================================"<<endl;
    cout<<"enter the password to login the system"<<endl;
    cin>>pass;
    if(pass==1234)
    {
    cout<<"System login Successful"<<endl;
    cout<<"================================================"<<endl;
    cout<<"enter the users name"<<endl;
    string a;
    cin>>a;
    cout<<"enter the users age"<<endl;
    int b;
    cin>>b;
    cout<<"enter the users gender"<<endl;
    string c;
    cin>>c;
    cout<<"enter the users height in centimeter"<<endl;
    int d;
    cin>>d;
    cout<<"enter the users weight in kg"<<endl;
    double e;
    cin>>e;
    cout<<"enter the users targeted weight in kg"<<endl;
    double f;
    cin>>f;
    string v;
    v = "                        ";
    User myUser(a, b,c,d,e,f);
    system("CLS");
    system("color 9");
    cout<<v<<"=========================================================="<<endl;
    cout <<v<<v<<"Name: " << myUser.getName() << endl;
    cout <<v<<v<< "Age: " << myUser.getAge() << endl;
    cout <<v<<v<< "Gender: " << myUser.getGender() << endl;
    cout <<v<<v<< "Height: " << myUser.getHeight() << " centimeter" << endl;
    cout <<v<<v<< "Weight: " << myUser.getWeight() << " kg" << endl;
    cout <<v<<v<< "Target Weight: " << myUser.getTargetWeight() << " kg" << endl;
    cout<<v<<"=========================================================="<<endl<<endl<<endl;
    if((f-e)>0)
{
        int cal;
        cal=(f-e)*10*b;
        cout<<"Your target is to gain weight"<<endl;
        cout<<"Your target is to take "<< cal<<" calories more than your usual diet"<<endl;
        int total;
        gainfooditem food;
        do{
        food.display();
        cout<<"enter how many food items you want in your meal"<<endl;
        int y;
        cin>>y;
        int a1=0,a2=0,a3=0,a4=0,a5=0,a6=0,a7=0,a8=0,a9=0,a10=0,m1=0,m2=0,m3=0,m4=0,m5=0,m6=0,m7=0,m8=0,m9=0,m10=0;
    for(int i=0;i<y;i++)
    {
        cout<<"enter choice according to serial number given in the list"<<endl;
        int n;
        cin>>n;
        if(n==1)
        {
            cout<<"enter how many eggs you want to take"<<endl;
            
            cin >>m1;
            a1=m1*80;

        }
        if(n==2)
        {
            cout<<"enter number of bread pieces "<<endl;
            
            cin>>m2;
            a2=m2*90;
        }
         if(n==3)
        {
          cout<<"enter glasses of milk "<<endl;
            
            cin>>m3;
            a3=m3*200;

        }
         if(n==4)
        {
            cout<<"enter number of cups of nuts "<<endl;
            
            cin>>m4;
            a4=m4*300;
        }
         if(n==5)
        {
            cout<<"enter number of bananas "<<endl;
            
            cin>>m5;
            a5=m5*80;
        }
         if(n==6)
        {
            cout<<"enter number of fried chicken "<<endl;
            
            cin>>m6;
            a6=m6*250;
        }
         if(n==7)
        {
            cout<<"enter number of spoons of ghee "<<endl;
            
            cin>>m7;
            a7=m7*50;
        }
         if(n==8)
        {
            cout<<"enter number of rice bowl "<<endl;
            
            cin>>m8;
            a8=m8*240;
        }

         if(n==9)
        {
            cout<<"enter number of salad bowls "<<endl;
            
            cin>>m9;
            a9=m9*230;
        }
         if(n==10)
        {
            cout<<"enter number of chapatis "<<endl;
           
            cin>>m10;
            a10=m10*60;
        }

    }
    total=a1+a2+a3+a4+a5+a6+a7+a8+a9+a10;
    if(total>=cal){
        cout<<"Your calorie intake is perfect"<<endl;
        cout<<"     YOUR DIET PLAN IS    "<<endl;
        cout<<m1<<"     Eggs     "<<a1<<"    Calories    "<<endl;
        cout<<m2<<"     Bread pieces      "<<a2<<"    Calories    "<<endl;
        cout<<m3<<"     Glasses of milk    "<<a3<<"    Calories    "<<endl;
        cout<<m4<<"     Cups of nuts    "<<a4<<"    Calories    "<<endl;
        cout<<m5<<"     Bananas     "<<a5<<"    Calories    "<<endl;
        cout<<m6<<"     Fried chicken       "<<a6<<"    Calories    "<<endl;
        cout<<m7<<"     Spoons of ghee      "<<a7<<"    Calories    "<<endl;
        cout<<m8<<"     Rice bowls      "<<a8<<"    Calories    "<<endl;
        cout<<m9<<"     Salad bowls      "<<a9<<"    Calories    "<<endl;
        cout<<m10<<"     Chapatis      "<<a10<<"    Calories    "<<endl;
    }
    else{
        system("cls");
        cout<<"Your calorie intake is less than targeted"<<endl;
        cout<<"Please enter the choices again"<<endl;
        }
        }
        while(total<cal);

}
else
{
    int cal1;
    cal1=(e-f)*10*b;
    cout<<"Your target is to loose weight"<<endl;
    cout<<"Your target is to take only "<< cal1<<" calories in usual diet"<<endl;
    int total1;
    loosefooditem food1;
    do{
     food1.display();
        cout<<"enter how many food items you want in your meal"<<endl;
        int y;
        cin>>y;
        int a1=0,a2=0,a3=0,a4=0,a5=0,a6=0,a7=0,a8=0,a9=0,a10=0,m1=0,m2=0,m3=0,m4=0,m5=0,m6=0,m7=0,m8=0,m9=0,m10=0;
    for(int i=0;i<y;i++)
    {
        cout<<"enter choice according to serial number given in the list"<<endl;
        int n;
        cin>>n;
        if(n==1)
        {
            cout<<"enter how many cup of oats you want to take"<<endl;
            
            cin >>m1;
            a1=m1*130;

        }
        if(n==2)
        {
            cout<<"enter number of cups of cottage cheese "<<endl;
            
            cin>>m2;
            a2=m2*190;
        }
         if(n==3)
        {
          cout<<"enter slices of watermelon "<<endl;
            
            cin>>m3;
            a3=m3*100;

        }
         if(n==4)
        {
            cout<<"enter number of cups of greek yogurt "<<endl;
            
            cin>>m4;
            a4=m4*140;
        }
         if(n==5)
        {
            cout<<"enter number of cucumber "<<endl;
            
            cin>>m5;
            a5=m5*80;
        }
         if(n==6)
        {
            cout<<"enter number of cups of green tea "<<endl;
           
            cin>>m6;
            a6=m6*50;
        }
         if(n==7)
        {
            cout<<"enter number of glass of warm water with honey "<<endl;
            
            cin>>m7;
            a7=m7*150;
        }
         if(n==8)
        {
            cout<<"enter number of bowl of steam vegetable "<<endl;
           
            cin>>m8;
            a8=m8*120;
        }

         if(n==9)
        {
            cout<<"enter number of salad bowls "<<endl;
           
            cin>>m9;
            a9=m9*130;
        }
         if(n==10)
        {
            cout<<"enter number of bowl of cornflakes"<<endl;
            
            cin>>m10;
            a10=m10*160;
        }

    }
     total1=a1+a2+a3+a4+a5+a6+a7+a8+a9+a10;
    if(total1<=cal1){
        cout<<"Your calorie intake is perfect"<<endl;
        cout<<"     YOUR DIET PLAN IS    "<<endl;
        cout<<m1<<"     Cups of Oats     "<<a1<<"    Calories    "<<endl;
        cout<<m2<<"     Cups of Cottage Cheese      "<<a2<<"    Calories    "<<endl;
        cout<<m3<<"     Slices of watermelon    "<<a3<<"    Calories    "<<endl;
        cout<<m4<<"     Cups of greek yogurt    "<<a4<<"    Calories    "<<endl;
        cout<<m5<<"     number of cucumbers     "<<a5<<"    Calories    "<<endl;
        cout<<m6<<"     Cups of green tea       "<<a6<<"    Calories    "<<endl;
        cout<<m7<<"     Glasses of honey with warm water      "<<a7<<"    Calories    "<<endl;
        cout<<m8<<"     Bowls of steam vegetables      "<<a8<<"    Calories    "<<endl;
        cout<<m9<<"     Salad bowls      "<<a9<<"    Calories    "<<endl;
        cout<<m10<<"     Bowls of cornflakes      "<<a10<<"    Calories    "<<endl;
    }
    else if (total1>cal1){
        system("cls");
        cout<<"Your calorie intake is more than targeted"<<endl;
        cout<<"Please enter the choices again"<<endl;
    }
}
    while(total1>cal1);

}
}

else
    cout<<"Incorrect password try again"<<endl;
}
while(pass!=1234);

    return 0;
}