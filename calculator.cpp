#include<iostream>
#include <stdlib.h>
#include<math.h>
#include<fstream>
using namespace std;
void print_mainMenu()
{
    
    cout << "\t\t\t---------------Main Menu----------------" << endl;
    cout << "                                        " << endl;
    cout << "\t\t\t----------------------------------------" << endl;
    cout << "                                        " << endl;
    cout << "\t\t\t                1. Basic Calculator     " << endl;
    cout << "                                        " << endl;
    cout << "\t\t\t----------------------------------------" << endl;
    cout << "                                        " << endl;
    cout << "\t\t\t                2. Scientific Calculator     " << endl;
    cout << "                                        " << endl;
    cout << "\t\t\t----------------------------------------" << endl;
    cout << "                                        " << endl;
    cout << "\t\t\t                3. Unit Convertor       " << endl;
    cout << "                                        " << endl;
    cout << "\t\t\t----------------------------------------" << endl;
    cout << "                                        " << endl;
    cout << "\t\t\t                4. Currency Convertor   " << endl;
    cout << "                                        " << endl;
    cout << "\t\t\t----------------------------------------" << endl;
    cout << "                                        " << endl;
    cout << "\t\t\t                5. QUIT          " << endl;
    cout << "                                        " << endl;
    cout << "\t\t\t----------------------------------------" << endl;
   
}
void print_calci()
{
    cout << "\t\t\t---------------CALCULATOR----------------" << endl;
    cout << "                                        " << endl;
    
    cout << "                                        " << endl;
    cout << "\t\t\t                1. Addition     " << endl;
    cout << "                                        " << endl;
    
    cout << "                                        " << endl;
    cout << "\t\t\t                2. Substraction       " << endl;
    cout << "                                        " << endl;
    
    cout << "                                        " << endl;
    cout << "\t\t\t                3. Multiplication   " << endl;
    cout << "                                        " << endl;
    
    cout << "                                        " << endl;
    cout << "\t\t\t                4. Division          " << endl;
    cout << "                                        " << endl;

    cout << "                                        " << endl;
    cout << "\t\t\t                5. Go Back          " << endl;
    cout << "                                        " << endl;
    
}
void print_length()
{
    cout << "\t\t\t---------------Length Converter----------------" << endl;
    cout << "                                        " << endl;
    
    cout << "                                        " << endl;
    cout << "\t\t\t                1. mm to cm     " << endl;
    cout << "                                        " << endl;
    
    cout << "                                        " << endl;
    cout << "\t\t\t                2. mm to m       " << endl;
    cout << "                                        " << endl;
    
    cout << "                                        " << endl;
    cout << "\t\t\t                3. m to km   " << endl;
    cout << "                                        " << endl;
    
    cout << "                                        " << endl;
    cout << "\t\t\t                4. cm to inch          " << endl;
    cout << "                                        " << endl;

     
    cout << "                                        " << endl;
    cout << "\t\t\t                5. cm to foot          " << endl;
    cout << "                                        " << endl;

     
    cout << "                                        " << endl;
    cout << "\t\t\t                6. km to mile           " << endl;
    cout << "                                        " << endl;

     
    cout << "                                        " << endl;
    cout << "\t\t\t                7. cm to mm           " << endl;
    cout << "                                        " << endl;

     
    cout << "                                        " << endl;
    cout << "\t\t\t                8. m to mm          " << endl;
    cout << "                                        " << endl;
    

     
    cout << "                                        " << endl;
    cout << "\t\t\t                9. km to m          " << endl;
    cout << "                                        " << endl;
    

     
    cout << "                                        " << endl;
    cout << "\t\t\t                10. inch to cm          " << endl;
    cout << "                                        " << endl;
    

     
    cout << "                                        " << endl;
    cout << "\t\t\t                11. foot to cm           " << endl;
    cout << "                                        " << endl;
    
      
    cout << "                                        " << endl;
    cout << "\t\t\t                12. mile to km           " << endl;
    cout << "                                        " << endl;
    
      
      
    cout << "                                        " << endl;
    cout << "\t\t\t                13. Go back           " << endl;
    cout << "                                        " << endl;
    
}
void print_UnitConverter()
{
    cout << "\t\t\t---------------UNIT CONVERTER----------------" << endl;
    cout << "                                        " << endl;
    
    cout << "                                        " << endl;
    cout << "\t\t\t                1. Length     " << endl;
    cout << "                                        " << endl;
    
    cout << "                                        " << endl;
    cout << "\t\t\t                2. Temperature       " << endl;
    cout << "                                        " << endl;
    
    cout << "                                        " << endl;
    cout << "\t\t\t                3. Speed   " << endl;
    cout << "                                        " << endl;

     
    cout << "                                        " << endl;
    cout << "\t\t\t                4. Mass          " << endl;
    cout << "                                        " << endl;

    
    cout << "                                        " << endl;
    cout << "\t\t\t                5. Area          " << endl;
    cout << "                                        " << endl;

    cout << "                                        " << endl;
    cout << "\t\t\t                6. Go Back          " << endl;
    cout << "                                        " << endl;
    
}
void print_temperature()
{
   
    cout << "\t\t\t---------------TEMPERATURE CONVERTER----------------" << endl;
    cout << "                                        " << endl;
    
    cout << "                                        " << endl;
    cout << "\t\t\t                1.Celcius to Fahrenheit      " << endl;
    cout << "                                        " << endl;
    
    cout << "                                        " << endl;
    cout << "\t\t\t                2.Fahrenheit to Celcius       " << endl;
    cout << "                                        " << endl;
    
    cout << "                                        " << endl;
    cout << "\t\t\t                3.Celcius to Kelvin   " << endl;
    cout << "                                        " << endl;
    
    cout << "                                        " << endl;
    cout << "\t\t\t                4.Kelvin to Celcius          " << endl;
    cout << "                                        " << endl;

    cout << "                                        " << endl;
    cout << "\t\t\t                5.Fahrenheit to Kelvin          " << endl;
    cout << "                                        " << endl;

    cout << "                                        " << endl;
    cout << "\t\t\t                6.Kelvin to Fahrenheit          " << endl;
    cout << "                                        " << endl;

    cout << "                                        " << endl;
    cout << "\t\t\t                7. Go Back          " << endl;
    cout << "                                        " << endl;
     
}
void print_speed()
{
   
    cout << "\t\t\t---------------SPEED CONVERTER----------------" << endl;
    cout << "                                        " << endl;
    
    cout << "                                        " << endl;
    cout << "\t\t\t                1.m/h to Km/h      " << endl;
    cout << "                                        " << endl;
    
    cout << "                                        " << endl;
    cout << "\t\t\t                2.Km/h to m/h       " << endl;
    cout << "                                        " << endl;
    
    cout << "                                        " << endl;
    cout << "\t\t\t                3.m/s to Km/h   " << endl;
    cout << "                                        " << endl;
    
    cout << "                                        " << endl;
    cout << "\t\t\t                4.Km/h to m/s          " << endl;
    cout << "                                        " << endl;

    cout << "                                        " << endl;
    cout << "\t\t\t                5.Km/h to mile/h          " << endl;
    cout << "                                        " << endl;

    cout << "                                        " << endl;
    cout << "\t\t\t                6.mile/h to Km/h          " << endl;
    cout << "                                        " << endl;

    cout << "                                        " << endl;
    cout << "\t\t\t                7. m/s to mile/h         " << endl;
    cout << "                                        " << endl;

     cout << "                                        " << endl;
    cout << "\t\t\t                8. mile/h to m/s          " << endl;
    cout << "                                        " << endl;

     cout << "                                        " << endl;
    cout << "\t\t\t                9. Go Back          " << endl;
    cout << "                                        " << endl;
     
}
void print_mass()
{
   
    cout << "\t\t\t---------------MASS CONVERTER----------------" << endl;
    cout << "                                        " << endl;
    
    cout << "                                        " << endl;
    cout << "\t\t\t                1.mg to g      " << endl;
    cout << "                                        " << endl;
    
    cout << "                                        " << endl;
    cout << "\t\t\t                2.g to mg       " << endl;
    cout << "                                        " << endl;
    
    cout << "                                        " << endl;
    cout << "\t\t\t                3.Kg to g   " << endl;
    cout << "                                        " << endl;
    
    cout << "                                        " << endl;
    cout << "\t\t\t                4.g to Kg         " << endl;
    cout << "                                        " << endl;

    cout << "                                        " << endl;
    cout << "\t\t\t                5.Kg to ton          " << endl;
    cout << "                                        " << endl;

    cout << "                                        " << endl;
    cout << "\t\t\t                6.ton to Kg          " << endl;
    cout << "                                        " << endl;

    cout << "                                        " << endl;
    cout << "\t\t\t                7.Go Back         " << endl;
    cout << "                                        " << endl;

     
}
void print_area()
{
   
    cout << "\t\t\t---------------AREA CONVERTER----------------" << endl;
    cout << "                                        " << endl;
    
    cout << "                                        " << endl;
    cout << "\t\t\t                1 centimeter square to meter square      " << endl;
    cout << "                                        " << endl;
    
    cout << "                                        " << endl;
    cout << "\t\t\t                2 meter square to centimeter square       " << endl;
    cout << "                                        " << endl;
    
    cout << "                                        " << endl;
    cout << "\t\t\t                3 meter square to hectare   " << endl;
    cout << "                                        " << endl;
    
    cout << "                                        " << endl;
    cout << "\t\t\t                4 hectare to meter square         " << endl;
    cout << "                                        " << endl;

    cout << "                                        " << endl;
    cout << "\t\t\t                5 meter square to kilometer square          " << endl;
    cout << "                                        " << endl;

    cout << "                                        " << endl;
    cout << "\t\t\t                6 kilometer square to meter square         " << endl;
    cout << "                                        " << endl;

    cout << "                                        " << endl;
    cout << "\t\t\t                7 meter square to acre         " << endl;
    cout << "                                        " << endl;

     cout << "                                        " << endl;
    cout << "\t\t\t                8 acre to meter square          " << endl;
    cout << "                                        " << endl;

     cout << "                                        " << endl;
    cout << "\t\t\t                9. Go Back          " << endl;
    cout << "                                        " << endl;
     
}
class Numbers
{
public:
double num1;
double num2;
};
class Basic_Calculator:public Numbers
{

public:
void add();
void sub();
void multi();
void div();
};
int Sci_Cal()
{
float a,b,PI;
int c;
cout<<endl;
cout<<"******************************* CALCULATOR **************************************\n";
cout<<"----------------------------------------------------------------------------------\n";
cout<<"Operations\t"<<"\tTrigonometric Functions"<<"\t\tLogarithmic Functions\n";
cout<<"----------------------------------------------------------------------------------\n";
cout<<"           \t\t"<<"1: Sin\t\t"<<endl;
cout<<"           \t\t"<<"2: Cos\t\t"<<endl;
cout<<"           \t\t"<<"3: Tan\t\t"<<endl;
cout<<"           \t\t"<<"4: Inverse of Sin"<<endl;
cout<<"5: Exponent\t\t"<<"7: Inverse of Cos"<<"\t\t9: Log"<<endl;;
cout<<"6: Square root\t\t"<<"8: Inverse of Tan"<<"\t\t10: Log with base 10"<<endl;
cout<<"11: Exit";
cout<<"\n\nEnter the function that you want to perform : ";
cin>>c;
system("clear");
PI=3.14159265;
switch(c)
{

case 5:
cout<<"Enter the number : ";
cin>>a;
cout<<"Enter the exponent : ";
cin>>b;
cout<<"Exponent = "<<pow(a,b)<<endl;
break;
case 6:
cout<<"Enter the number : ";
cin>>a;
cout<<"Square Root = "<<sqrt(a)<<endl;
break;
case 1:
cout<<"Enter the number : ";
cin>>a;
cout<<"Sin = "<<sin(a)<<endl;
break;
case 2:
cout<<"Enter the number : ";
cin>>a;
cout<<"Cos = "<<cos(a)<<endl;
break;
case 3:
cout<<"Enter the number : ";
cin>>a;
cout<<"Tan = "<<tan(a)<<endl;
break;
case 4:
cout<<"Enter the number : ";
cin>>a;
cout<<"Inverse of Sin = "<<asin(a)*180.0/PI<<endl;
break;
case 7:
cout<<"Enter the number : ";
cin>>a;
cout<<"Inverse of Cos = "<<acos(a)*180.0/PI<<endl;
break;
case 8:
cout<<"Enter the number : ";
cin>>a;
cout<<"Inverse of tan = "<<atan(a)*180.0/PI<<endl;
break;
case 9:
cout<<"Enter the number : ";
cin>>a;
cout<<"Log = "<<log(a)<<endl;
break;
case 10:
cout<<"Enter the number : ";
cin>>a;
cout<<"Log with base 10 = "<<log10(a)<<endl;
break;
case 11:
system("clear");
return 1;
default:
cout<<"Wrong Input"<<endl;
return 1;
}
return 0;
}
class Unit_Converter
{
    public:
    double num;
    double conval;
    double num2;
    double convert()
    {
      return num*conval;
    }
};
class length : public Unit_Converter
{
    public:
    void mm_cm();
    void mm_m();
    void m_km();
    void cm_inch();
    void cm_foot();
    void km_mile();
    void cm_mm();
    void m_mm();
    void km_m();
    void inch_cm();
    void foot_cm();
    void mile_km();
    
};
class temperature : public Unit_Converter
{ 
    public:
    void cls_far();
    void cls_K();
    void far_K();
    void far_cls();
    void K_cls();
    void K_far();

};
class speed : public Unit_Converter
{
    public:
    void mh_kmh();
    void kmh_mh();
    void ms_kmh();
    void kmh_ms();
    void kmh_mih();
    void mih_kmh();
    void ms_mih();
    void mih_ms();
};
class mass : public Unit_Converter
{
    public:
void mg_g();
void g_mg();
void g_kg();
void kg_g();
void kg_ton();
void ton_kg();
};
class area : public Unit_Converter
{
    public:
    void cmsq_msq();
    void msq_cmsq();
    void msq_hectare();
    void hectare_msq();
    void msq_kmsq();
    void kmsq_msq();
    void msq_acre();
    void acre_msq();
};
class currency : public Unit_Converter //from Rupee to ...
{
    void euro();
    void dollar();
    void Cannadian_Dollar();
    void yen();
    void dinar();
    void peso();
    void Pak_Rupee();
};
void Basic_Calculator::add()
{
    cout<<"Enter first Number: ";
    cin>>num1;
    cout<<"Enter second Number: ";
    cin>>num2;
    cout<<"Sum is: "<<num1+num2<<endl;
}
void Basic_Calculator::sub()
{
    cout<<"Enter first Number: ";
    cin>>num1;
    cout<<"Enter second Number: ";
    cin>>num2;
    cout<<"Difference between two is: "<<num1-num2<<endl;
}
void Basic_Calculator::multi()
{
    cout<<"Enter first Number: ";
    cin>>num1;
    cout<<"Enter second Number: ";
    cin>>num2;
    cout<<"Multiplied value is: "<<num1*num2<<endl;
}
void Basic_Calculator::div()
{
    cout<<"Enter first Number: ";
    cin>>num1;
    cout<<"Enter second Number: ";
    cin>>num2;
    try
    {
        if(num2==0)
        throw num2;
        else
        cout<<"Divided value is: "<<num1/num2<<endl;
    }
    catch(double d)
    {
        cout<<"Cannot divide by zero!!\n";
    }
    
    
}
void length::m_km()
{
conval=0.001;
cout<<"Enter value in meter :";
cin>>num;
cout<<"Value in Km: "<<convert()<<endl;
} 
void length:: mm_m()
{
conval= 0.001;
cout<<"Enter value in mm: ";
cin>>num;
cout<<"Value in m: "<<convert()<<endl;
}
void length:: mm_cm()
{
conval= 0.1;
cout<<"Enter value in mm: ";
cin>>num;
cout<<"Value in cm: "<<convert()<<endl;
}
void length:: cm_inch()
{
conval= 0.393701;
cout<<"Enter value in cm: ";
cin>>num;
cout<<"Value in inch: "<<convert()<<endl;
}
void length:: km_mile()
{
conval= 0.621371;
cout<<"Enter value in km: ";
cin>>num;
cout<<"Value in mile: "<<convert()<<endl;
}
void length:: cm_foot()
{
conval= 0.0328;
cout<<"Enter value in cm: ";
cin>>num;
cout<<"Value in foot: "<<convert()<<endl;
}
void length::km_m()
{
conval=pow(0.001,-1);
cout<<"Enter value in kilometer :";
cin>>num;
cout<<"Value in meter: "<<convert()<<endl;
} 
void length:: m_mm()
{
conval= pow(0.001,-1);
cout<<"Enter value in meter: ";
cin>>num;
cout<<"Value in millimeter: "<<convert()<<endl;
}
void length:: cm_mm()
{
conval= pow(0.1,-1);
cout<<"Enter value in centimeter: ";
cin>>num;
cout<<"Value in millimeter: "<<convert()<<endl;
}
void length:: inch_cm()
{
conval= pow(0.393701,-1);
cout<<"Enter value in inch: ";
cin>>num;
cout<<"Value in centimeter: "<<convert()<<endl;
}
void length:: mile_km()
{
conval= pow(0.621371,-1);
cout<<"Enter value in mile: ";
cin>>num;
cout<<"Value in kilometer: "<<convert()<<endl;
}
void length:: foot_cm()
{
conval= pow(0.0328,-1);
cout<<"Enter value in foot: ";
cin>>num;
cout<<"Value in centimeter: "<<convert()<<endl;
}
void temperature:: cls_far()
{
    conval=1.8;
    cout<<"Enter vlue in Celsius: ";
    cin>>num;
    cout<<"Value in Fahrenheit:"<<convert()+32<<endl; 
}
void temperature:: far_cls()
{
    
    conval=5/9.0;
    cout<<"Enter vlue in Fahrenhite: ";
    cin>>num;
    num=num-32;
    cout<<"Value in Celcius:"<<convert()<<endl; 
    
}
void temperature:: cls_K()
{
    conval=1;
    cout<<"Enter vlue in Celsius: ";
    cin>>num;
    cout<<"Value in Kelvin:"<<convert()+273.15<<endl; 

} 
void temperature:: K_cls()
{
    
    
    cout<<"Enter vlue in Kelvin: ";
    cin>>num;
    cout<<"Value in Celcius:"<<num-273.15<<endl; 
    

} 
void temperature:: far_K()
{
    cout<<"Enter vlue in Farhenhite: ";
    cin>>num;
    cout<<"Value in Kelvin:"<<(num-32)*0.555+273.15<<endl; 

} 
void temperature:: K_far()
{
    conval=9/5.0;
    cout<<"Enter vlue in Kelvin: ";
    cin>>num;
    num=num-273.15;
    cout<<"Value in Farhenhite:"<<convert()+32<<endl; 
    

} 
void speed:: mh_kmh()                 
{
    conval=0.001;
    cout<<"Enter vlue in Meter/hour: ";
    cin>>num;
    cout<<"Value in Kilo meter/Hour:"<<convert()<<endl;
}
void speed:: kmh_mh()
{
    conval=pow(0.001,-1);
    cout<<"Enter vlue in Kilometer/hour: ";
    cin>>num;
    cout<<"Value in meter/Hour:"<<convert()<<endl;
}
void speed:: ms_kmh()
{
   conval=3.6;
    cout<<"Enter vlue in meter/sec: ";
    cin>>num;
    cout<<"Value in Kilometer/Hour:"<<convert()<<endl; 
}
void speed:: kmh_ms()
{
   conval=0.277778;
    cout<<"Enter vlue in Kilometer/Hour: ";
    cin>>num;
    cout<<"Value in meter/sec:"<<convert()<<endl; 
}
void speed:: kmh_mih()
{
  conval=0.621371;
    cout<<"Enter vlue in Kilometer/Hour: ";
    cin>>num;
    cout<<"Value in mile/hour:"<<convert()<<endl;   
    
}
void speed:: mih_kmh()
{
    conval=1.60934;
    cout<<"Enter vlue in mile/Hour: ";
    cin>>num;
    cout<<"Value in Kilometer/Hour:"<<convert()<<endl; 
}
void speed:: ms_mih()
{
   conval=2.2369;
    cout<<"Enter vlue in meter/sec: ";
    cin>>num;
    cout<<"Value in miles/Hour:"<<convert()<<endl; 
}
void speed:: mih_ms()
{
  conval=0.44704;
    cout<<"Enter vlue in mile/Hour: ";
    cin>>num;
    cout<<"Value in meter/sec:"<<convert()<<endl;  
}
void mass:: mg_g()
{
 conval=0.001;
    cout<<"Enter vlue in Milligram: ";
    cin>>num;
    cout<<"Value in gram: "<<convert()<<endl;     
}
void mass:: g_mg()
{
 conval=1000;
    cout<<"Enter vlue in gram: ";
    cin>>num;
    cout<<"Value in Milligram: "<<convert()<<endl;     
}
void mass:: kg_g()
{
 conval=1000;
    cout<<"Enter vlue in Kilogram: ";
    cin>>num;
    cout<<"Value in gram: "<<convert()<<endl;     
}
void mass:: g_kg()
{
 conval=0.001;
    cout<<"Enter vlue in gram: ";
    cin>>num;
    cout<<"Value in Kilogram: "<<convert()<<endl;     
}
void mass:: kg_ton()
{
 conval=0.001;
    cout<<"Enter vlue in Kilogram: ";
    cin>>num;
    cout<<"Value in ton: "<<convert()<<endl;     
}
void mass:: ton_kg()
{
 conval=1000;
    cout<<"Enter vlue in ton: ";
    cin>>num;
    cout<<"Value in Kilogram: "<<convert()<<endl;     
}
void area::cmsq_msq()
{
    conval=0.0001;
    cout<<"Enter vlue in cm sq: ";
    cin>>num;
    cout<<"Value in  m sq : "<<convert()<<endl;   
}
void area::msq_cmsq()
{
    conval=10000;
    cout<<"Enter vlue in m sq: ";
    cin>>num;
    cout<<"Value in  cm sq : "<<convert()<<endl;   
}
void area::msq_hectare()
{
    conval=0.0001;
    cout<<"Enter vlue in m sq: ";
    cin>>num;
    cout<<"Value in  hectare : "<<convert()<<endl;   
}
void area::hectare_msq()
{
    conval=10000;
    cout<<"Enter vlue in hectare: ";
    cin>>num;
    cout<<"Value in  m sq : "<<convert()<<endl;   
}
void area::msq_kmsq()
{
    conval=0.000001;
    cout<<"Enter vlue in m sq: ";
    cin>>num;
    cout<<"Value in  km sq : "<<convert()<<endl;   
}
void area::kmsq_msq()
{
    conval=1000000;
    cout<<"Enter vlue in km sq: ";
    cin>>num;
    cout<<"Value in  m sq : "<<convert()<<endl;   
}
void area::msq_acre()
{
    conval=0.0002471;
    cout<<"Enter vlue in m sq: ";
    cin>>num;
    cout<<"Value in  acre : "<<convert()<<endl;   
}
void area::acre_msq()
{
    conval=4046.85;
    cout<<"Enter vlue in acre: ";
    cin>>num;
    cout<<"Value in  m sq : "<<convert()<<endl;   
}
int main_dealer()
{
    int choice1;
    print_mainMenu();
    cin>>choice1;
    return choice1;
}
int calci_dealer()
{
    print_calci();
     int choice2;
     cin>>choice2;
     Basic_Calculator bc;
     system("clear");
     switch (choice2)
     {
         case 1:
         bc.add();

         break;
         case 2:
         bc.sub();

         break;
         case 3:
         bc.multi();

         break;
         case 4:
         bc.div();

         case 5:
         return 1;
         break;
     
     default:
     cout<<"Please enter valid input\n";
     
         break;
         
     }
     return 0;
}           
int UnitConverter_dealer()
{
    int choice2;
        print_UnitConverter();
        cin>>choice2;
        length l;
        temperature t;
        speed s;
        mass m;
        area a;
        switch (choice2)
        {
        case 1:
          
         system("clear");
             print_length();
             int choice3;
             cin>>choice3;
             

             if(choice3==1)
              l.mm_cm();
              if(choice3==2)
              l.mm_m();
              if(choice3==3)
              l.m_km();
              if(choice3==4)
              l.cm_inch();
              if(choice3==5)
              l.cm_foot();
              if(choice3==6)
              l.km_mile();
              if(choice3==7)
              l.cm_mm();
              if(choice3==8)
              l.m_mm();
              if(choice3==9)
              l.km_m();
              if(choice3==10)
              l.inch_cm();
              if(choice3==11)
              l.foot_cm();
              if(choice3==12)
              l.mile_km();
              if(choice3==13)
              {
                  system("clear");
                  return 1;
                  
              }
              
              else if(choice3>13||choice3<1)
              {
              cout<<"Enter valid input";
              
              }

              return 0;
            
              case 2:
              system("clear");
             print_temperature();
             int choice4;
             cin>>choice4;
             

             if(choice4==1)
              t.cls_far();
              if(choice4==2)
              t.far_cls();
              if(choice4==3)
              t.cls_K();
              if(choice4==4)
              t.K_cls();
              if(choice4==5)
              t.far_K();
              if(choice4==6)
              t.K_far();
              
              
              if(choice4==7)
              {
                  system("clear");
                  return 1;
                  
              }
              
              else if(choice4>7||choice4<1)
              {
              cout<<"Enter valid input";
              
              }
              return 0;
              case 3:
              system("clear");
              print_speed();
             int choice5;
             cin>>choice5;
             

             if(choice5==1)
              s.mh_kmh();
              if(choice5==2)
              s.kmh_mh();
              if(choice5==3)
              s.ms_kmh();
              if(choice5==4)
              s.kmh_ms();
              if(choice5==5)
              s.kmh_mih();
              if(choice5==6)
              s.mih_kmh();
              if(choice5==7)
              s.ms_mih();
              if(choice5==8)
              s.mih_ms();
              
              if(choice5==9)
              {
                  system("clear");
                  return 1;
                  
              }
              
              else if(choice5>9||choice5<1)
              {
              cout<<"Enter valid input";
              }
              return 0;

              case 4:
              system("clear");
              print_mass();
             int choice6;
             cin>>choice6;
             

             if(choice6==1)
              m.mg_g();
              if(choice6==2)
              m.g_mg();
              if(choice6==3)
              m.kg_g();
              if(choice6==4)
              m.g_kg();
              if(choice6==5)
              m.kg_ton();
              if(choice6==6)
              m.ton_kg();
              if(choice6==7)
              {
                  system("clear");
                  return 1;
                  
              }
              
              else if(choice6>7||choice6<1)
              {
              cout<<"Enter valid input";
              }
              return 0;

              case 5:
              system("clear");
              print_area();
             int choice7;
             cin>>choice7;
             

             if(choice7==1)
              a.cmsq_msq();
              if(choice7==2)
              a.msq_cmsq();
              if(choice7==3)
              a.msq_hectare();
              if(choice7==4)
              a.hectare_msq();
              if(choice7==5)
              a.msq_kmsq();
              if(choice7==6)
              a.kmsq_msq();
              if(choice7==7)
              a.msq_acre();
              if(choice7==8)
              a.acre_msq();
              if(choice7==9)
              {
                  system("clear");
                  return 1;
                  
              }
              
              else if(choice7>9||choice7<1)
              {
              cout<<"Enter valid input";
              }
              return 0;
              case 6:
              system("clear");
              return 1;
              default:
              cout<<"Enter valid choice: \n";
              return 1;
        }


        } 
int Currency_converter_Delaer()
        {
            ifstream fin;
             string line;
	
	fin.open("database.txt");

	
	while (fin) {

		
		getline(fin, line);

		cout << line << endl;
	}
	fin.close();

	return 0;
}      
int main()
{
   
  int choice1=0;
    
    while(1)
    {
   
        choice1=main_dealer();
    
    system("clear");
    
    
    if(choice1==1)
    {
        while(1)
    {
        int x=0;
    while(x!=1)
    {
     x=calci_dealer();
    }
    if(x==1)
    break;
    }
    
    }
        if(choice1==2)
        {
            
            int x=0;
        while(x!=1)
        {
            
        x=Sci_Cal();
        
        }

        } 

        if(choice1==3)
        {
            
            int x=0;
        while(x!=1)
        {
            
        x=UnitConverter_dealer();
        
        }

        } 

        if(choice1==4)
        {
            
            int x;
            x=Currency_converter_Delaer();
        } 
        if(choice1==5)
        {
            cout<<"Program terminated.";
            break;
            system(0);
        }
    }
  
}