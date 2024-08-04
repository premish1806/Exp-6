# Exp-6
To study and implement C++ decision making statements Loops.

## Aim:
The aim of this journal is to understand and implement basic C++ programs that demonstrate the use of loops, conditional statements, and pattern printing. These programs will help in developing fundamental programming skills and logic building.

## Software Used:
- Dev c++

## Theory:
For Loop: A for loop is used when the number of iterations is known beforehand. It consists of an initialization, a condition check, and an increment/decrement operation.
<br>
Syntax:
<br>
```cpp
for (initialization; condition; increment/decrement) {
    // Code to be executed
}
```
<br>
While Loop: A while loop is used when the number of iterations is not known and should continue as long as a specified condition is true. It checks the condition before executing the loop's body.
<br>
Syntax:

```cpp
while (condition) {
    // Code to be executed
}
```
<br>
Do-While Loop: A do-while loop ensures that the loop body executes at least once before the condition is evaluated. This makes it useful for situations where the loop should run at least once, regardless of the condition.
<br>
Syntax:

```cpp
do {
    // Code to be executed
} while (condition);

```
Pattern Printing: Pattern printing involves using nested loops to generate specific patterns such as triangles, squares, and pyramids. This practice helps in understanding nested loops and enhances logical thinking and problem-solving skills. Patterns are created by manipulating loop counters and conditions to produce the desired shapes.

## Program 1: Print Numbers from 1 to the end value specified by the user.

<strong> Algorithm: </strong>
<br>
Step 1: Start
<br>
Step 2: Declare variable num
<br>
Step 3: Input the num value from user.
<br>
Step 4: Read the value into num.
<br>
Step 5: Loop from i = 1 to i <= num:
<br>
Step 5.1: Print the value of i
<br>
Step 6: End
<br>

<strong> Code: </strong>
<br>
```cpp
// Premish Ninawe
// 23070123092
// ENTC B1
#include<iostream>
using namespace std;
int main()
{
int num;
cout<<"Enter end value";
cin>>num;
for(int i=1;i<=num;i++)
{
    cout<<i;
    cout<<" ";
}
return 0;
}
```
<strong> Output: </strong>
<br>
![image](https://github.com/user-attachments/assets/0ce623c8-fc43-4fdc-96c6-342dc440f80e)

## Program 2:Calculate the Sum of First ‘n’ Natural Numbers where ‘n’ is the value entered by the user

<strong> Algorithm: </strong>
<br>
Step 1: Start
<br>
Step 2: Declare variables num and sum, and initialize sum to 0
<br>
Step 3: Input from the user to enter a number
<br>
Step 4: Read the value into num
<br>
Step 5: Loop from i = 1 to i <= num:
<br>
     Step 5.1: Add the value of i to sum
     <br>
Step 6: Print the value of sum
<br>
Step 7: End
<br>

<strong> Code: </strong>
<br>
```cpp
// Premish Ninawe
// 23070123092
// ENTC B1
//Exp 6 for loop(2)
#include <iostream>
using namespace std;
int main()
{
  int num,sum=0;
  cout<<"Enter the number";
  cin>>num;
  for(int i=1; i<=num; i++)
  {
    sum=sum+i;
  }
 cout<<sum;
 return 0;
}
```
<strong> Output: </strong>
<br>
![image](https://github.com/user-attachments/assets/00b67b2b-2f1a-4dc8-9ace-ce3c860cd5a5)

## Program 3a: Print pattern of asterisk.

<strong> Algorithm: </strong>
<br>
Step 1: Start
<br>
Step 2: Declare variable rows
<br>
Step 3: Prompt the user to enter the number of rows
<br>
Step 4: Read the value into rows
<br>
Step 5: Loop i from 1 to rows (inclusive):
<br>
Step 5.1: Inside the loop, loop j from 1 to i (inclusive):
<br>
Step 5.1.1: Print "*"
<br>
Step 5.2: Print a newline character to move to the next line
<br>
Step 6: End
<br>

<strong> Code: </strong>
<br>
```cpp
// Premish Ninawe
// 23070123092
// ENTC B1
#include<iostream>
using namespace std;
int main()
{
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;
    for(int i = 1; i <= rows; i++) // rows
    {
        for(int j = 1; j <= i; j++) // columns
        {
            cout << "*";
        }
        cout << "\n"; // cout << endl;
    }
    return 0;
}

```
<strong> Output: </strong>
<br>
![image](https://github.com/user-attachments/assets/927edeba-24fc-4817-842b-9fb60476b901)


## Program 3b: Print pattern of asterisk.

<strong> Algorithm: </strong>
<br>
Step 1: Start
<br>
Step 2: Declare variables i, j, k, and n, and initialize k to 0
<br>
Step 3: Input from the user to enter the number of rows
<br>
Step 4: Read the value into n
<br>
Step 5: Loop from i = 1 to i <= n:
<br>
     Step 5.1: Loop from j = 1 to j <= (n - i):
     <br>
        Step 5.1.1: Print two spaces
        <br>
     Step 5.2: Loop while k != (2 * i - 1):
     <br>
        Step 5.2.1: Print "* "
        <br>
        Step 5.2.2: Increment k
        <br>
     Step 5.3: Reset k to 0
     <br>
Step 6: End
<br>

<strong> Code: </strong>
<br>
```cpp
// Premish Ninawe
// 23070123092
// ENTC B1
#include <iostream>
using namespace std;
int main()
{
   int i,j,k=0,n;
   cout<<"Enter number of rows:";
   cin>>n;
   for(i=1;i<=n;i++)
   {
      for(j=1;j<=(n-i);j++)
       {
         cout<<"  ";
       }
      while(k!=(2*i-1))
       {
          cout<<"* ";
        k++;
       }
      k=0;
     cout<<endl;
   }
   cout<<endl;
}
```
<strong> Output: </strong>
<br>
![image](https://github.com/user-attachments/assets/0ce0b57e-703d-4874-b68b-190d3397e1a5)


## Program 4: Print Numbers from 1 to the end value specified by the user using while loop.

<strong> Algorithm: </strong>
<br>
Step 1: Start
<br>
Step 2: Declare variable num
<br>
Step 3: Input from the user to enter the end value
<br>
Step 4: Read the value into num
<br>
Step 5: Initialize variable i to 1
<br>
Step 6: Loop while i is less than or equal to num:
<br>
Step 6.1: Print the value of i followed by a space
<br>
Step 6.2: Increment i
<br>
Step 7: Print a newline character to move to the next line
<br>
Step 8: End
<br>

<strong> Code: </strong>
<br>
```cpp
// Premish Ninawe
// 23070123092
// ENTC B1
#include <iostream>
using namespace std;
int main() {
    int num;
    cout << "Enter the end value: ";
    cin >> num;
    int i = 1;
    while (i <= num) {
        cout << i << " ";
        i++;
    }
    cout << endl;
    return 0;
}
```
<strong> Output: </strong>
<br>
![image](https://github.com/user-attachments/assets/5439a442-06e5-43d9-b509-509e3790da3a)


## Program 5: Simple Password Validation using do while loop.

<strong> Algorithm: </strong>
<br>
Step 1:Start
<br>
Step 2: Declare variables password and correctPassword, and set correctPassword to "sit"
<br>
Step 3: Loop until password equals correctPassword:
<br>
       Step 3.1: Prompt the user to enter the password
       <br>
       Step 3.2: Read the value into password
       <br>
       Step 3.3: If password is not equal to correctPassword:
       <br>
            Step 3.3.1: Print "Invalid password\nTry again!!\n"
            <br>
Step 4: Print "Success!!"
<br>
Step 5: End
<br>

<strong> Code: </strong>
<br>
```cpp
// Premish Ninawe
// 23070123092
// ENTC B1
#include <iostream>
#include <string>
using namespace std;

int main() {
    string password;
    string correctPassword = "sit";
    
    do {
        cout << "Enter the password: ";
        cin >> password;
        
        if (password != correctPassword) {
            cout << "Invalid password\nTry again!!\n";
        }
    } while (password != correctPassword);
    
    cout << "Success!!\n";
    return 0;
}
```
<strong> Output: </strong>
<br>
![image](https://github.com/user-attachments/assets/f783d332-c1f0-4b72-a0a5-f322dd2dd3d7)

## Conclusion:
In this practical exercise, I learned how to use different types of loops to repeat tasks, perform calculations, and handle user input. I practiced creating sequences, summing numbers, and making patterns with loops. These skills improved my understanding of how to control the flow of a program and work with repetitive processes.



