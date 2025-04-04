#include <iostream>
using namespace std;
//lab5
// int main () {
//     //problem 1
//     string name;
//     int age;  cout<<"please enter your name.\n your name:"; cin >> name;
//     cout<<"now enter your age;"; cin>>age;
//     cout<<"you are "<<name<<" and you are"<<age<<" years old";
//     return 0;
// }
//problem 2
#include<iostream>
#include <iomanip>
// using namespace std;
// int main () {
//     for (int i=1; i<=5; ++i) { cout<<setw(5) <<i<<endl;}
//     return 0;
// }
// int main() {
//     int a, b;
//     cout<<"enter two integers;"; cin>>a>>b;
//     //swapping the values
//     int temp=a;
//     a=b;
//     b=temp;
//     cout<<"swapped values;"<<"a="<<a<<",b="<<b<<endl;
//     return 0;
// }
//int main() {
    //int n;
   // cout<<"enter a number"; cin>>n;
   // cout<<setw(5)<<"number"<<setw(5)<<"square"<<endl;
   // return 0;

//problem1
#include <iostream>
//problem 4


// int main() {
//     int length,width,parameter;
//     cout<<"enter the length:"; cin>>length;
//     cout<<"enter the width:";cin>>width;
//     parameter=(length+width)*2;
//     cout<<"The parameter of the rectangle is;"<<parameter<<endl;
//     return 0;


//problem 5
// int main() {
//     int sum=2+4+6+8+10+12+14+16+18+20;
//     cout<<"The sum of even numbers up to 20 is:"<<sum<<endl;
//     return 0;
// }
//problem 7
// int main() {
//     int current_year, birth_year, age;
//     cout << "Enter current year: ";
//     cin >> current_year;
//     cout<<"enter your birth year:";
//     cin>>birth_year;
//     age=current_year-birth_year;
//     cout<<"your age is:"<<age<<endl;
//     return 0;
// }
//problem 8
// int main() {
//     int price ;
//     cout<<"please enter the price:";
//     cin>>"price";
//     cout<<"enter the quantity of items:";
//     int quantity;
//     int total_price = price*quantity<<price<<endl;
//     return 0;


//problem 1 //sum
// int main() {
    // int one ; int sum;
    // int two ;
    // int three ;
    // int four ;
    // int five ;
    // cout<<"Please enter  number one: ";
    // cin>>one;
    // cout<<"Please enter  number two: ";
    // cin>>two;
    // cout<<"Please enter  number three: ";
    // cin>>three;
    // cout<<"Please enter  number four: ";
    // cin>>four;
    // cout<<"Please enter  number five: ";
    // cin>>five;
    // sum=one+two+three+four+five;
    // cout<<"sum is equal " << sum<<endl;
//     return 0;
// }


//problem 2 //collect data
// int main() {
//      int id,year_of_study,study_fee;
//     float gpa;
//      cout<<"enter student id : ";
//      cin>>id;
//      cout<<"enter student gpa : ";
//      cin>>gpa;
//      cout<<"enter student year of study: ";
//      cin>>year_of_study;;
//      cout<<"enter student study fee:";
//      cin>>study_fee;
//     cout<<"student id:  "<<id<<endl;
//     cout<<"student gpa: "<<gpa<<endl;
//     cout<<"student year of study:  "<<year_of_study;
//     cout<<"student study fee:  "<<study_fee<<endl;
//
//
//
//
//     return 0;
// }
//problem 3//degree
// int main() {
//     int temperature_in_celcius;
//     double conversion;
//     cout<<"enter the temperature in celcius:"<<endl;
//     cin>>temperature_in_celcius;
//     conversion=temperature_in_celcius*9/5+32;
//     cout<<"temperature in celcius is "<<temperature_in_celcius<<"  temperature in fahrenheit  "<<conversion<<endl;
//
//
// }
//problem4 //total cost
// int main() {
//     double price1,price2,price3;
//     double total_cost;
//     cout<<"Enter price of the first item:"<<endl;cin>>price1;
//     cout<<"enter the price of second item:"<<endl;cin>>price2;
//     cout<<"enter the price of third item:"<<endl;cin>>price3;
//     int quantity1,quantity2,quantity3;
//     cout<<"enter the quantity of the first item:"<<endl;cin>>quantity1;
//     cout<<"enter the quantity of the second item:"<<endl;cin>>quantity2;
//     cout<<"enter the quantity of the third item:"<<endl;cin>>quantity3;
//     total_cost=price1*quantity1+price2*quantity2+price3*quantity3;cout<<"total cost is:  "<<total_cost; cout<<endl;
//     return 0;
//
//
//
// }
//problem 5 //average age
// int main() {
//     int age1,age2,age3,age4;
//     int average_age;
//     cout<<"enter age1:"<<endl;cin>>age1;
//     cout<<"enter age2:"<<endl;cin>>age2;
//     cout<<"enter age3:"<<endl;cin>>age3;
//     cout<<"enter age4:"<<endl;cin>>age4;
//     average_age=(age1+age2+age3+age4)/4;cout<<"average age is:  "<<average_age<<endl;
//     return 0;
// }
//problem 6 //areaParameter
// int main() {
//     int length,width;
//     int area;
//     int parameter;
//     cout<<"Enter length: "<<endl;cin>>length;
//     cout<<"Enter width: "<<endl;cin>>width;
//     area=length*width;cout<<"area is:   "<<area<<endl;
//     parameter(length+width)?2;cout<<"parameter is:  "<<parameter<<endl;
//     return 0;
//
// }
//problem 7 //quotient
// int main() {
//     int dividend;
//     int divisor;
//     int quotient;
//     int remainder;
//     cout<<"enter the divident:   "<<endl;cin>>dividend;
//     cout<<"enter the divisor:   "<<endl;cin>>divisor;
//     quotient=dividend/divisor;cout<<"quotient is:  "<<quotient<<endl;
//     remainder=dividend/divisor;cout<<"remainder is:  "<<remainder<<endl;
//     return 0;
// }
//problem 8 //currency exchange
// int main() {
//     double usd,uzs,exchange_rate;
//     cout<<"enter the amount of currency in dollars:  "<<endl;cin>>usd;
//     cout<<"enter the rate of exchange usd to uzs:  "<<endl;cin>>exchange_rate;
//     uzs=usd*exchange_rate;cout<<"amount is:  "<<uzs<<endl;
//     return 0;
// }
//problem 9 //circle area
// int main() {
//     int radius;
//     int area;
//     cout<<"enter the radius of the circle:   "<<endl;cin>>radius;
//     area=M_PI*radius*radius;cout<<"the area of the circle is: "<<area<<endl;
//     return 0;
// }
//problem 10 //volume
// int main() {
//     int volume;
//     int radius;
//     int height;
//     cout<<"enter the radius of the base circle:  ";cin>>radius;
//     cout<<"enter the height of the base circle:  ";cin>>height;
//     volume=3.14*radius*radius*height;cout<<"the volume of the cylinder is:  "<<volume<<endl;
//     return 0;
// }
//problem 11 //velocity
// int main() {
//     int distance;
//     int time;
//     int velocity;
//     cout<<"enter the distance:   ";cin>>distance;
//     cout<<"enter the time:   ";cin>>time;
//     velocity=distance/time;cout<<"the velocity is "<<velocity<<endl;
//     return 0;
// }

//problem 12 //time
// int main() {
//     int total_minutes;
//     int total_hours;
//     cout<<"enter the amount of total minutes:  ";cin>>total_minutes;
//     total_hours = total_minutes/60;cout<<"the total amount of hours is:  "<<total_hours<<endl;
//
//     return 0;
// }
//proble13 //cost
// int main() {
//     int fixed_cost,variable_cost,quantity_sold,price;
//     int BEP;
//     cout<<"enter the fixed cost:  "<<endl;cin>>fixed_cost;
//     cout<<"enter the variable cost:   "<<endl;cin>>variable_cost;
//     cout<<"enter the quantity sold: "<<endl;cin>>quantity_sold;
//     cout<<"enter the selling price:   "<<endl;cin>>price;
//     BEP=fixed_cost/(price-variable_cost);cout<<"the BEP is:  "<<BEP<<endl;
//     return 0;
// }
//problem 14 //net salary
// int main() {
//     int salary;
//     int tax_percentage;
//     cout<<"enter your basic salary   :";cin>>salary;
//     cout<<"enter the tax percentage   :";cin>>tax_percentage;
//     salary=salary-(salary*tax_percentage)/100;cout<<"the net salary is   :"<<salary;
//     return 0;
//
//
//
// }
//problem 15 //price
// int main() {
//     int original_price;
//     int discount_percentage;
//     int discount_amount;
//     int final_price;
//     cout<<"enter the original price  :";cin>>original_price;
//     cout<<"enter discount percentage  :";cin>>discount_percentage;
//     discount_amount = original_price * (discount_percentage/100);cout<<"the discount amount is  :"<<discount_amount<<endl;
//     final_price = original_price - discount_amount;cout<<"the final price is   :"<<final_price<<endl;
//     return 0;
// }

//problem 16
// int main() {
//     int points;
//     int credit_hours;
//     float weighted_gpa;
//     cout<<"enter your points,please:";cin>>points;
//     cout<<"enter your credit hours:   ";cin>>credit_hours;
//     weighted_gpa=(points*credit_hours)
//
// }
//problem 17
// int main() {
//     int initial_price;
//     int final_price;
//     int inflation_rate;
//     cout<<"please enter the initial price: ";cin>>initial_price;
//     cout<<"enter the final price:   ";cin>>final_price;
// inflation_rate=(final_price-initial_price)/initial_price*100;cin>>inflation_rate;cout<<"inflation rate is:   ";
//
//     return 0;
// }

//05.02.25
// //problem 1
// / int main() {
// /     int x;
// /     cout<<"please enter a number:   ";cin>>x;
// /     if (x>0) {
// /     cout<<"the number is positive  "<<x<<endl;
// / }
// /     else
// /         cout<<"the number is negative"<<x<<endl;
// /     return 0;
// / }
// /problem 2
// / int main() {
// /     int x;
// /     cout<<"enter a number to check whether it is even or odd:   ";cin>>x;
// /     if(x%2==0)
// /         cout<<x<<" is even"<<endl;
// /     else
// /         cout<<x<<" is odd"<<endl;
// /     return 0;
// / }
// /problem 3
// / int main() {
// /     int number1;
// /     int number2;
// /     cout << "Please enter first number:   ";cin>>number1;
// /     cout << "Please enter second number:   ";cin>>number2;
// /     if (number1>number2) {
// /         cout<<"number 1 is the largest   ";
// /     }
// /     else
//         cout<<"number 2 is the largest   ";
//     return 0;
// }
//problem 4
// int main() {
//     int a;
//     int b;
//     int c;
//     cout<<"enter 3 numbers";cin>>a;cin>>b;cin>>c;
//     if (a>=b&&a>=c)
//         cout<<"a is the largest";
//         else if (b>=c&&b>=a)
//             cout<<"b is the largest";
//     else
//         cout<<"c is the largest";
//
//     return 0;
//
//         }
// //
//problem 5
// int main() {
//     int year;
//     cout<<"please enter the year:  ";cin>>year;
//     if (year%4==0)
//         cout<<"year is a leap year   ";
//         else cout<<"year is not a leap year";
//         return 0;
//     }
//problem 6
// int main() {
//     int speed;
//     cout<<"please enter the speed:  ";cin>>speed;
//     if (speed<=20)
//         cout<<"it is too slow  ";
//     if (speed>=80)
//         cout<<"it is too fast  ";
//     if (20<speed<80)
//         cout<<"just right!";
// return 0;
// }
//problem 7
// int main() {
//     int marks;
//     cout << "Enter the marks of students: ";
//     cin >> marks;
//     if (marks>=50)
//         cout<<"pass!"<<endl;
//     else
//         cout<<"fail";
//     return 0;
// }
//problem 8
// int main() {
//     int number;
//     cout<<"Enter a number: ";
//     cin>>number;
//     if (number>=0)
//         cout<<number<<" is positive"<<endl;
//     else if (number<0)
//         cout<<number<<" is negative"<<endl;
//     else if (number==0)
//         cout<<number<<" is zero"<<endl;
//
//     return 0;
//
//
// }
//problem 9
// int main() {
//     char n; cout<<"enter the character:  "; cin>>n;
//     if (n=='r')
// cout<<"run!"<<endl;
//     else if (n=='s')
//         cout<<"stop!";
//     else if (n=='g')
//         cout<<"get ready!";
//     return 0;
// }
//problem 10
// int main() {
//     int x,y,choice,result;
//     cout<<"please enter two numbers:  ";cin>>x>>y;
//     cout<<"please click one number according to this:   ";
//     cout<<" 1 for addition ";
//     cout<<"  2 for subtraction ";
//     cout<<"3 for multiplication ";
//     cout<<"4 for division ";
//     switch (choice) {
//         case 1:
//             result
//         break;
//         case 2:
//             cout<<"result: "<<x-y;
//         break;
//         case 3:
//             cout<<"result: "<<x*y;
//         break;
//         case 4:
//             cout<<"result: "<<x/y;
//         break;
//         default:
//             cout<<"unavailable!";
//     }
// return 0;
//
//problem 10
// int main() {
//     int grade;
//     cout<<"Please enter your grade (0-100): ";cin>>grade;
//     switch (grade/10){
//         case 9:
//             cout<<"A "<<endl;
//         break;
//         case 8:
//             cout<<"B "<<endl;
//         break;
//         case 7:
//             cout<<"C "<<endl;
//         break;
//         case 6:
//             cout<<"D "<<endl;
//         break;
//         default:
//             cout<<" F "<<endl;
//     }
//     return 0;
// }
//problem 11
// int main() {
//     int a;
//     int b;
//     cout<<"please enter first integer:    ";cin>>a;
//     cout<<"please enter second integer:    ";cin>>b;
//     if (a%b==0) {
//         cout<<a<<"is divisible by"<<b<<endl;
//     }
//       else {
//             cout<<a<<"is not divisible by"<<b<<endl;
//         }
// return 0;
//     }
//problem 12
// int main() {
//     int a,b,c;
//     cout<<"enter the angle values:"<<endl;cin>>a>>b>>c;
//     if (a+b+c==180) {
//         cout<<"the triangle is valid:  ";
//     }
//     else {
//         cout<<"the triangle is not valid";
//     }
//         return 0;
// }
//problem 13
// int main() {
//     char ch;
//     cout<<"enter the character:  ";
//     cin>>ch;
//     if (ch>='A' && ch<='Z') {
//         cout<<"your character is an uppercase letter"<<endl;
//     }
//     else if (ch>='a' && ch<='z') {
//         cout<<"your character is an lowercase letter"<<endl;
//     }
//     else {
//         cout<<"it is not an alphabet!";
//     }
//    return 0;
// }
//problem 14
// int main() {
//     int weight1,weight2;
//     float price1,price2;
//     cout<<"enter the weight and the price of the package 1:  ";cin>>weight1>>price1;
//     cout<<"enter the package 2:  ";cin>>weight2>>price2;
//     double pricePerUnit1=price1/weight1;
//     double pricePerUnit2=price2/weight2;
//     if (pricePerUnit1<pricePerUnit2) {
//         cout<<"package 1 has a better price  ";
//     }
//     else if (pricePerUnit2<pricePerUnit1) {
//         cout<<"package 2 has a better price  ";
//     }
//     else {
//         cout<<"two packages has the same price  ";
//     }
//     return 0;
// }
//problem 15
// int main() {
//     int number;
//     cout<<"Enter a three digit number: ";
//     cin>>number;
//     int firstDigit=number/100;
//     int lastDigit=number%10;
//     if(firstDigit==lastDigit) {
//         cout<<number<<" is a palindrome number "<<endl;
//     }
//     else {
//         cout<<number<<"is not a palindrome number "<<endl;
//     }
//     return 0;
// }
//problem 16




//12.02
//problem 1 1.1
// int main() {
//     for (int i = 1; i <= 10; i++) {
//         cout << i << " ";
//
//     }
//     return 0;
// }
//1.2
// int main() {
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++) {
//         cout << i << " ";
//     }
//     return 0;
// }
//1.3
// int main() {
//     int result=0;
//     for (int i = 1; i <= 10; i++) {
//         result=result+i;
//         cout<<result<<endl;
//     }
//     return 0;
// }
//1.4
// int main() {
//     int n;cin>>n;
//     int sum=0;
//     for (int i = 1; i <= n; i++) {
//         sum=sum+i;
//         cout<<sum<<endl;
//     }
//     return 0;
// }
//1.5
// int main() {
//     int sum=0;
//     double average;
//     for (int i = 1; i <= 10; i++) {
//         sum=sum+i;
//
//
//     }
//     average=sum/10.0;
//     cout<<"The average is "<<average<<endl;
//     return 0;
// }
//1.6
// int main() {
//     int n;cin>>n;
//     int sum=0;
//     double average;
//     for(int i=1;i<n;i++) {
//         sum=sum+i;
//     }
//     average=sum/n;
//     cout<<"Average: "<<average<<endl;
// }
//problem 2 2.1
// int main() {
//     for (int i = 1; i <= 10; i+=2) {
//         cout << i << endl;
//     }
// return 0;
// }
//2.2
// int main() {
//     for (int i = 2; i <= 10; i+=2) {
//         cout << i << " ";
//     }
//     return 0;
// }
//2.3
// int main() {
//     int n;cin>>n;
//     for(int i=1;i<n;i+=2) {
//         cout<<i<<" ";
//     }
//     return 0;
// }
//2.4
// int main() {
//     int n;cin>>n;
//     for(int i=2; i<n;i+=2) {
//         cout<<i<<" ";
//     }
//     return 0;
// }
//2.5
// int main() {
//     for (int i = 1; i <= 100; i++) {
//         if (i%10==0) {
//             cout << i << endl;
//         }
//
//     }
//     return 0;
// }
//2.6
// int main() {
//     int n;cin>>n;
//     for(int i=0;i<n;i++) {
//         if(i%10==0) {
//             cout<<i<<endl;
//
//         }
//
//     }
//     return 0;
// }
//problem 3
// int main() {
//     int count=0;
//      for (char ch='A';ch<='Z';ch++) {
//          cout<<ch<<" ";
//          count++;
//          if (count==5)
//          cout<<endl;
//          count=0;
//      }
// }
//problem 4
// int main() {
//     int factorial=1;
//     int n;cin>>n;
//     for(int i = 1; i <= n; i++) {
//         factorial = factorial*i;
//         cout<<factorial;
//     }
//     return 0;
// }
//problem 5
// int main() {
//     int numClasses;
//     int totalCredits;
//     double weightedSum;
//     cout<<"Enter number of classes: ";
//     cin>>numClasses;
//     for(int i=1;i<=numClasses;i++) {
//         double credits, marks;
//         cout<<"enter the credits: ";cin>>credits;
//         cout<<"enter the marks: ";cin>>marks;
//         weightedSum += credits * (marks/100.0);
//         totalCredits+=credits;
//
//     }
//     double gpa =weightedSum/totalCredits;
//     cout<<"the total gpa is: "<<gpa;
//     return 0;
// }
//problem 7
// int main() {
//     int n;
//     cout<<"enter the size of the square: "<<endl;
//     cin>>n;
//     for (int i=0;i<n; i++) {
//         for (int j=0;j<n;j++) {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }
//problem 8
#include <iostream>
// using namespace std;
//
// int main() {
//     int n;
//     cout << "Enter the number of rows: ";
//     cin >> n;
//     for (int i = 1; i <= n; i++) {
//
//         for (int j = 1; j <= n - i; j++) {
//             cout << " ";
//         }
//         for (int j = 1; j <= i; j++) {
//             cout << "*";  //
//         }
//         cout << endl;
//     }
//
//     return 0;
// }
//problem 9

// bool isPrime(int num) {
//     if (num <= 1) {
//         return false;
//     }
//     for (int i = 2; i * i <= num; i++) {
//         if (num % i == 0) {
//             return false;
//         }
//     }
//
//     return true;
// }
//
// int main() {
//     int num;
//     cout << "Enter a number: ";
//     cin >> num;
//     if (isPrime(num)) {
//         cout << "Number is prime" << endl;
//     } else {
//         cout << "Number is not prime" << endl;
//     }
//
//     return 0;
// }
//problem 10
// int main() {
//     int n;
//     int sum = 0;
//     cout << "Enter a number: ";
//     cin >> n;
//     for (int i = 1; i <= n; i++) {
//         sum += i*i;
//         cout << i << "*" << i << "=" << i * i;
//         if (i < n) {
//             cout << " ";
//         }
//     }
//     cout << endl;
//     cout << "Sum of the series: " << sum << endl;
//     return 0;
// }
//problem 11
// int main() {
//     int num;
//     int positiveCount = 0;
//     int negativeCount = 0;
//     int total = 0;
//     int count = 0;
//
//     cout << "Enter an integer (the input ends if it is 0): ";
//     while (true) {
//         cin >> num;
//
//         if (num == 0) {
//             break;
//         }
//
//         if (num > 0) {
//             positiveCount++;
//         } else {
//             negativeCount++;
//         }
//
//         total += num;
//         count++;
//     }
//     double average = (count > 0) ? static_cast<double>(total) / count : 0;
//
//     // Output the results
//     cout << "The number of positives is " << positiveCount << endl;
//     cout << "The number of negatives is " << negativeCount << endl;
//     cout << "The total is " << total << endl;
//     cout << "The average is " << average << endl;
//
//     return 0;
// }
//problem 12
// int main() {
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;
//     if (n == 0) {
//         cout << "0";
//     }else {
//         while (n != 0) {
//             int digit = n % 10;
//             cout << digit;
//             n = n / 10;
//         }
//     }
//
//     cout << endl;
//     return 0;
// }
//problem 13
// int main() {
//     int n;
//     cout << "Enter the depth: ";
//     cin >> n;
//     if (n == 0) {
//         cout << "The depth is 0" << endl;
//     } else {
//         for (int i = 1; i <= n; i++) {
//             for (int j = 1; j <= i; j++) {
//                 cout << i;
//             }
//             cout << endl;
//         }
//     }
//
//     return 0;
// }
