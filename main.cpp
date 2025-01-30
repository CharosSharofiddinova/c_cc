
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

