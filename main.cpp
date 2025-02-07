
//problem 1
// #include <iostream>;
// using namespace std;
// int main () {
//     double grades;
//     cout<<"Enter your average grade:"<<endl;
//     cin>>grades;
//     int credit_hours=5;
//     double average_gpa=grades*credit_hours;
//     cout<<"Your average GPA is: "<<average_gpa;
// return 0;
// }

//problem1 2nd version
// #include <iostream>
// #include<iomanip>;
// using namespace std;
// int main() {
//     int numCourses = 5;
//     double gradePoints, creditHours, totalGradePoints = 0, totalCreditHours = 0;
//     cout << "Enter grade points and credit hours for 5 courses:"<<endl;
//     for (int i = 1; i <= numCourses; i++) {
//         cout <<"Course " << i<<" Grade Points: ";
//         cin >>gradePoints;
//         cout <<"Course " << i<<" Credit Hours: ";
//         cin >>creditHours;
//         totalGradePoints += gradePoints * creditHours;
//         totalCreditHours += creditHours;
//     }
//     double gpa = totalGradePoints / totalCreditHours;
//     cout << "\nAverage GPA is " << gpa << endl;
//     return 0;
// }

// problem 2
// #include<iostream>;
// using namespace std;
//  int main () {
//   int num, sum = 0;
//   cout << "Enter 5 numbers:"<<endl;
//   for (int i = 1; i <= 5; i++) {
//    cout << "Number " << i << ": ";
//    cin >> num;
//    sum += num;
//   }
//   cout << "Sum is " << sum << endl;
//  return 0;
//  }


//problem3
// #include<iostream>;
// using namespace std;
// int main () {
//     int length;
//     int width;
//     length=15;
//     width=8;
//     int area;
//     area=length*width;
//     cout<<"The Area of rectangle is: "<<area<<endl;
//     return 0;
// }


//problem4
// #include<iostream>;
// using namespace std;
// int main () {
//     int length;
//     int width;
//     length=15;
//     width=8;
//     int perimeter;
//     perimeter=2*(length+width);
//     cout<<"The Perimeter of rectangle is: "<<perimeter<<endl;
//     return 0;
// }

//problem5 calculate sum of the even numbers form 1 to 2o
// #include<iostream>;
// using namespace std;
// int main () {
//     int sum=0;
//     for (int i = 2; i <= 20; i += 2) { // Loop through even numbers
//         sum += i;
//     }
//     cout << "Sum of all even numbers from 1 to 20 is: " << sum << endl;
//     return 0;
// }


//20classroom problems
//calculate the sum of 5 numbers, numbers taken from input
//problem1
// #include<iostream>;
// using namespace std;
// int main () {
//     int sum=0, number;
//     cout<<"Enter 5 numbers: ";
//     for (int i=0; i<5; i++) {
//         cin>>number;
//         sum+=number;
//     }
//     cout<<"The sum of these 5 numbers is :"<<sum<<endl;
//     return 0;
// }

//problem2 studentID, Gpa, fees,year of study
// #include<iostream>;
// using namespace std;
// int main () {
//     int student_id,year_of_study,student_fees;
//     double student_gpa;
//     cout<<"What is your Student ID? ";
//     cin>>student_id;
//     cout<<"What is Year of Study? ";
//     cin>>year_of_study;
//     cout<<"What is yur GPA? ";
//     cin>>student_gpa;
//     cout<<"How much is your Study Fee? ";
//     cin>>student_fees;
//     cout<<"Student ID:"<<student_id<<"\nStudent's Year of Study:"<<year_of_study<<"\nStudet's GPA:"
//     <<student_gpa<<"\nStudent's Study Fee:"<<student_fees<<endl;
//     return 0;
// }


//problem3 convert Fahrenheit into Celcius
// #include<iostream>;
// using namespace std;
// int main () {
//     int fahrenheit;
//     double celcius;
//     cout<<"Enter temperature in Fahrenheit: ";
//     cin>>fahrenheit;
//     celcius=(fahrenheit-32)*1.8;
//     cout<<"The temperature in Celcius is "<<celcius<<endl;
//     return 0;
// }

//problem4 total cost of items, cost and quantity taken from input
// #include<iostream>;
// using namespace std;
// int main () {
//     int item_num;
//     double item_price, total_cost;
//     cout<<"Enter the quantity ";
//     cin>>item_num;
//     cout<<"Enter the price ";
//     cin>>item_price;
//     total_cost=item_num*item_price;
//     cout<<"The Total Cost is "<<total_cost<<endl;
//     return 0;
// }

//problem5 average age of 4family members
// #include<iostream>;
// using namespace std;
// int main () {
//     int age, total_age=0;
//     cout<<"Enter the age of 4 family members: ";
//     for (int i=0; i<4; i++) {
//         cin>>age;
//         total_age+=age;
//     }
//     double average_age= total_age/4.0;
//     cout<<"The Average age of 4 family members is "<<average_age<<endl;
//     return 0;
// }

//problem6 area and perimeter of rectangle
// #include<iostream>;
// using namespace std;
// int main () {
//     int length, width,area,perimeter;
//     cout<<"Enter the length: ";
//     cin>>length;
//     cout<<"Enter the width: ";
//     cin>>width;
//     area=length*width;
//     perimeter=2*(length+width);
//     cout<<"The area of rectangle is "<<area<<"\nThe perimeter of rectangle is "<<perimeter<<endl;
//     return 0;
// }

//problem7 find quotient and remainder
// #include<iostream>;
// using namespace std;
// int main () {
//     int dividend, divisor, quotient, remainder;
//     cout<<"Enter the dividend: ";
//     cin>>dividend;
//     cout<<"Enter the divisor: ";
//     cin>>divisor;
//     quotient=dividend/divisor;
//     remainder=dividend%divisor;
//     cout<<"The quotient is "<<quotient<<"\nThe ramainder is "<<remainder<<endl;
//     return 0;
// }

//problem8 convert usd to uzs and ruble
// #include<iostream>;
// using namespace std;
// int main () {
//     int us_dollar, exchange_rate_som,uzb_som;
//     double ruble,exchange_rate_ruble;
//     cout<<"Enter dollar amount: ";
//     cin>>us_dollar;
//     cout<<"Enter exchange rate in som: ";
//     cin>>exchange_rate_som;
//     cout<<"Enter exchange rate in ruble: ";
//     cin>>exchange_rate_ruble;
//     uzb_som=us_dollar*exchange_rate_som;
//     ruble=us_dollar*exchange_rate_ruble;
//     cout<<"Amount in USD:$ "<<us_dollar<<"\nAmount in Som: "<<uzb_som<<"\nAmount in ruble: "<<ruble<<endl;
//     return 0;
// }


//problem9 area of circle
// #include<iostream>;
// using namespace std;
// int main () {
//     int radius;
//     const double pi=3.14;
//     cout<<"Enter the radius: ";
//     cin>>radius;
//     double area=pi*radius*radius;
//     cout<<"The area of a circle is "<<area<<endl;
//     return 0;
// }


//problem10 volume of cylinder v=pi r^2 h
// #include<iostream>;
// using namespace std;
// int main () {
//     int radius, height;
//     const double pi=3.14;
//     cout<<"Enter the radius and the height: ";
//     cin>>radius>>height;
//     double volume=pi*radius*radius*height;
//     cout<<"The Volume of cylinder is: "<<volume<<endl;
//     return 0;
// }

//problem11 1km=0.621miles find veocity in km/h and miles/__has_attribute
// #include<iostream>;
// using namespace std;
// int main () {
//     int distance, time;
//     cout<<"Enter the distance and time"<<endl;
//     cin>>distance>>time;
//     const double miles=0.621;
//     double velocity_km=distance/time;
//     double velocity_ml=(distance*miles)/time;
//     cout<<"Velocity is "<<velocity_km<<"km/h and "<<velocity_ml<<"ml/h"<<endl;
//     return 0;
// }

//problem12 take time in min, convert in h and show remainder, 2h 45mins
// #include<iostream>;
// using namespace std;
// int main () {
//     int mins,hours,remaining_mins;
//     cout<<"Enter time taken in minutes: ";
//     cin>>mins;
//     hours=mins/60;
//     remaining_mins=mins%60;
//     cout<<"Total minutes: "<<mins<<"\nTotal time: "<<hours<<"hours and "<<remaining_mins<<"minutes"<<endl;
//     return 0;
// }

//problem13 calculate bep
// #include<iostream>;
// using namespace std;
// int main () {
//     int selling_price, variable_cost;
//     cout<<"Enter the selling price and variable cost: ";
//     cin>>selling_price>>variable_cost;
//     const double fixed_cost= 10;
//     double bep=fixed_cost/(selling_price-variable_cost);
//     cout<<"The selling price: "<<selling_price<<"\nThe variable cost: "<<variable_cost<<"\nBEP: "<<bep<<endl;
//     return 0;
// }

//problem14 net salary
// #include<iostream>;
// using namespace std;
// int main () {
//     int basic_salary;
//     const double tax_rate=0.12;
//     cout<<"Enter Basic salary: ";
//     cin>>basic_salary;
//     double net_salary=basic_salary-(tax_rate*basic_salary);
//     cout<<"The net salary is "<<net_salary<<endl;
//     return 0;
// }

//problem15 discout price minus origina price
// #include<iostream>;
// using namespace std;
// int main () {
//     int original_price;
//     double discount, discount_amount,final_price;
//     cout<<"Enter the original price and discount: ";
//     cin>>original_price>>discount;
//     discount_amount=original_price*discount;
//     final_price=original_price-discount_amount;
//     cout<<"The original price: "<<original_price<<"\nDiscount: "<<discount<<"\nDiscount amount: "<<discount_amount
//     <<"\nThe final price: "<<final_price<<endl;
//     return 0;
// }

//problem16 calculate weighted gpa will review later
// #include<iostream>;
// using namespace std;
// int main () {
//     double grade_points, credit_hours;
//     double total_points=0, total_hours=0;
//     cout<<"Enter Grade Points for 5 subjects: ";
//     for (int i=1; i<5; i++) {
//           cin>>grade_points;
//     }
//      cout<<"Enter Credit Hours for 5 subjects: ";
//      for (int i=1; i<5; i++) {
//          cin>>credit_hours;
//      }
//      for (int i=1; i<5;i++ ) {
//           total_points+=grade_points*credit_hours;
//           total_hours+=credit_hours;
//      }
//      double average_gpa=total_points/total_hours;
//      cout<<"The average GPA is: "<<average_gpa<<endl;
//      return 0;
// }





//problem17 inflation initial price final price will review
// #include<iostream>;
// using namespace std;
// int main () {
//      double initial_price=0, final_price=0, inflation=0;
//      cout<<"Enter the final_price: ";
//      cin>>final_price;
//      cout<<"Enter the initial price: ";
//      cin>>initial_price;
//      double inflation_rate=(final_price-initial_price)/initial_price;
//      inflation=inflation_rate*100;
//      cout<<"Initial Price: "<<initial_price<<"\nFinal Price: "<<final_price<<"\nInflation rate: "
//      <<inflation<<"%"<<endl;
//      return 0;
// }


//problem18    scholarship amount and final fee
// #include<iostream>;
// using namespace std;
// int main () {
//     int original_fee, final_fee;
//     double scholarship_rate, scholarship, scholarship_amount;
//     cout<<"Enter your original tuition fee: ";
//     cin>>original_fee;
//     cout<<"Enter your scholarship rate: ";
//     cin>>scholarship_rate;
//     scholarship=(scholarship_rate/100);
//     scholarship_amount=scholarship*original_fee;
//     final_fee=original_fee-scholarship_amount;
//     cout<<"Original Fee: "<<original_fee<<"\nScholarship Rate: "<<scholarship_rate<<"%"<<"\nScholarship Amount: "
//     <<scholarship_amount<<"\nFinal Fee: "<<final_fee<<endl;
//     return 0;
// }

//problem19 simple interest
// #include<iostream>;
// using namespace std;
// int main () {
//     int principal_amount, interest_rate, time, simple_interest;
//     cout<<"Enter Principal Amount: ";
//     cin>>principal_amount;
//     cout<<"Enter interest rate: ";
//     cin>>interest_rate;
//     cout<<"Enter time period in years: ";
//     cin>>time;
//     simple_interest=(principal_amount*interest_rate*time)/100;
//     cout<<"Principal Amount: "<<principal_amount<<"\nInterest rate: "<<interest_rate<<"\nTime: "<<time<<
//         "\nSimple Interest: "<<simple_interest<<endl;
//     return 0;
// }

//problem20 Compound interest after 2 years
// #include<iostream>;
// using namespace std;
// int main () {
//     double principal_amount, annual_interest, compound_interest, total_amount;
//     double amount;
//     cout<<"Enter Principal Amount: ";
//     cin>>principal_amount;
//     cout<<"Enter Annual interest Rate: ";
//     cin>>annual_interest;
//     amount=(1+(annual_interest/100))*(1+(annual_interest/100));
//     total_amount=principal_amount*amount;
//     compound_interest=total_amount-principal_amount;
//     cout<<"Principal Amount: "<<principal_amount<<"\nAnnual Interest Rate: "<<annual_interest<<
//     "\nCompound Interest after 2 years: "<<compound_interest<<"\nTotal Amount: "<<total_amount<<endl;
//     return 0;
// }


//Lab4
//problem1
// #include<iostream>;
// using namespace std;
// int main () {
//     int num;
//     cout<<"Enter a number: ";
//     cin>>num;
//     if (num>=0)
//         cout<<"The number is positive: ";
//     else
//         cout<<"the number is negative: ";
//     return 0;
// }

//problem2
// #include<iostream>;
// using namespace std;
// int main () {
//     int num;
//     cout<<"Enter a number: ";
//     cin>>num;
//     if (num%2==0)
//         cout<<"Even number";
//     else
//         cout<<"Odd number";
//     return 0;
// }

//problem3
// #include<iostream>;
// using namespace std;
// int main () {
//     int a, b;
//     cout<<"Enter two numbers: ";
//     cin>>a>>b;
//     if (a>b)
//         cout<<a<<" is the largest number";
//     else
//         cout<<b<<" is the largest number";
//     return 0;
// }

//problem4
// #include<iostream>;
// using namespace std;
// int main () {
//     int a, b, c;
//     cout<<"Enter three numbers: ";
//     cin>>a>>b>>c;
//     if (a>b)
//         cout<<a<<" is the largest number";
//     else if (b>c)
//         cout<<b<<" is the largest number";
//     else if (c>a)
//         cout<<c<<" is the largest value";
//     return 0;
// }

//problem5 leap year
// #include<iostream>;
// using namespace std;
// int main () {
//     int year;
//     cout<<"Enter a year: ";
//     cin>>year;
//     if (year%4==0)
//         cout<<"It is a leap year";
//     else
//         cout<<"It is not a leap year";
//     return 0;
// }

//problem6
// #include<iostream>;
// using namespace std;
// int main () {
//     int speed;
//     cout<<"Enter a speed of you vehicle: ";
//     cin>>speed;
//     if (speed<=20)
//         cout<<"Your speed is slow";
//     else if (speed>=80)
//         cout<<"Your speed is fast";
//     else
//         cout<<"Your speed is normal";
//     return 0;
// }

//problem7
// #include<iostream>;
// using namespace std;
// int main () {
//     int scores;
//     cout<<"What is your score: ";
//     cin>>scores;
//     if (scores>=50)
//         cout<<"Pass";
//     else
//         cout<<"Fail";
//     return 0;
// }

//problem8
// #include<iostream>;
// using namespace std;
// int main () {
//     int num;
//     cout<<"Enter a number: ";
//     cin>>num;
//     if (num>0)
//         cout<<"Positive number";
//     else if (num<0)
//         cout<<"Negative number";
//     else if (num==0)
//         cout<<"0";
//     return 0;
// }

//problem9
// #include<iostream>;
// using namespace std;
// int main () {
//     char command;
//     cout<<"Enter a letter (g,y,r): ";
//     cin>>command;
//     bool green=(command=='g');
//     bool yellow=(command=='y');
//     bool red=(command=='r');
//     if (green)
//         cout<<"Go"<<endl;
//     else if (yellow)
//         cout<<"Get ready!"<<endl;
//     else if (red)
//         cout<<"Stop"<<endl;
//     return 0;
// }


//problem10
// #include<iostream>;
// using namespace std;
// int main () {
//     int marks;
//     cout<<"Enter your mark: ";
//     cin>>marks;
//     if (marks>=90)
//         cout<<"Your mark is A";
//     else if (marks>=80)
//         cout<<"Your mark is B";
//     else if (marks>=70)
//         cout<<"Your mark is C";
//     else if (marks>=60)
//         cout<<"Your mark is D";
//     else if (marks<=59)
//         cout<<"You failed, your mark is F";
//     return 0;
// }

//problem11
// #include<iostream>;
// using namespace std;
// int main (){
//     int num1, num2;
//     cout<<"Enter two numbers: ";
//     cin>>num1>>num2;
//     if (num1%num2==0)
//         cout<<num1<<" is divisible by "<<num2;
//     else
//         cout<<num1<<" is not divisible by "<<num2;
//     return 0;
// }

//problem13
// #include<iostream>;
// using namespace std;
// int main () {
//     char letter;
//     cout<<"Enter a letter: ";
//     cin>>letter;
//     if (letter>='a' && letter<='z')
//         cout<<"It is a lowercase letter";
//     else if (letter>='A' && letter<='Z')
//         cout<<"It is an uppercase letter";
//     else
//         cout<<"It is not an alphabet";
//     return 0;
// }

//problem14
// #include<iostream>;
// using namespace std;
// int main () {
//     int weight1, price1, weight2,price2 ;
//     cout<<"Enter the weight and the price of package1: ";
//     cin>>weight1>>price1;
//     cout<<"Enter the weight and the price of package2: ";
//     cin>>weight2>>price2;
//     if (price1>price2)
//         cout<<"Package 2 has better price ";
//     else if (price1<price2)
//         cout<<"Package 1 has better price ";
//     else
//         cout<<"Both are equal";
//     return 0;
// }

//problem15
// #include<iostream>;
// using namespace std;
// int main () {
//     int number;
//     cout<<"Enter a 3 digit number: ";
//     cin>>number;
//     int a=number/100;
//     int b=number%10;
//     if (a==b)
//         cout<<"It is a palindromic number";
//     else if (a!=b)
//         cout<<"It is not a palindromic number";
//     else
//         cout<<"It is not a number";
//     return 0;
// }

//problem 16
// #include<iostream>;
// #include<math.h>;
// using namespace std;
// int main () {
//     double x, y;
//     const double radius=10;
//     cout<<"Enter x and y coordinates: ";
//     cin>>x>>y;
//     double distance=sqrt(x*x+y*y);
//     if (distance<radius)
//         cout<<"The points are inside the circle ";
//     else if (distance==radius)
//         cout<<"The points are on the circle ";
//     else if (distance>radius)
//         cout<<"The points are outside the circle";
//     return 0;
// }

//problem17
// #include<iostream>;
// using namespace std;
// int main () {
//     double gpa;
//     cout<<"Enter your GPA (0-4.5): ";
//     cin>>gpa;
//     if (gpa>4 && gpa<=4.5)
//         cout<<"You got 80% scholarship";
//     else if (gpa>3.5 && gpa<=4.0)
//         cout<<"You got 60% scholarship";
//     else if (gpa>3.0 && gpa<=3.5)
//         cout<<"You got 50% scholarship";
//     else if (gpa<3.0)
//         cout<<"No scholarship";
//     return 0;
// }