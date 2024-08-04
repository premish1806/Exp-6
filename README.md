# Exp-6
To study and implement C++ decision making statements Loops.

## Aim:
The aim of this journal is to understand and implement basic C++ programs that demonstrate the use of loops, conditional statements, and pattern printing. These programs will help in developing fundamental programming skills and logic building.

## Software Used:
- VS code

## Theory:
In this practical, we delve into essential C++ constructs like loops and pattern printing. For <b>loops</b> are ideal for scenarios where the number of iterations is predetermined. They consist of an initialization, a condition check, and an increment/decrement operation, which makes them efficient for tasks like counting or iterating over a fixed range. In contrast, <b>while<\b> loops are used when the number of iterations is unknown and should continue as long as a specified condition is true. This loop checks the condition before executing its body, making it suitable for conditions that depend on runtime variables.

The <b>do-while</b> loop ensures that the loop body executes at least once before the condition is evaluated, making it useful for situations like user input validation, where an action must occur at least once regardless of the initial condition. Pattern printing exercises, involving nested loops, are commonly used to develop logical thinking and problem-solving skills. By manipulating loop counters and conditions, various patterns such as triangles, squares, and pyramids can be printed, providing a practical way to understand and apply the concept of nested loops.

## Program 1:
<strong> Algorithm: </strong>
<br>
Step 1: Start
<br>
Step 2: Declare variable num
<br>
Step 3: Prompt the user to enter an end value
<br>
Step 4: Read the value into num
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
    cout<< i ;
}
return 0;
}
```
<strong> Output: </strong>
<br>

## Program 2:
<strong> Algorithm: </strong>
<br>
Step 1: Start
<br>
Step 2: Declare variables num and sum, and initialize sum to 0
<br>
Step 3: Prompt the user to enter a number
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

## Program 3a:
<strong> Algorithm: </strong>
<br>
Step 1: Start
<br>
Step 2: Declare variables num and sum, and initialize sum to 0
<br>
Step 3: Prompt the user to enter a number
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

## Program #3b:
<strong> Algorithm: </strong>
<br>
Step 1: Start
<br>
Step 2: Declare variables i, j, k, and n, and initialize k to 0
<br>
Step 3: Prompt the user to enter the number of rows
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
     Step 5.4: Print a newline
     <br>
Step 6: Print a newline
<br>
Step 7: End
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

## Program 4:
<strong> Algorithm: </strong>
<br>
Step 1: Start
<br>
Step 2: Declare variable i and initialize it to 1
<br>
Step 3: Loop while i <= 10:
<br>
     Step 3.1: Print the value of i
      <br>
     Step 3.2: Increment i
     <br>
Step 4: End
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
    int i=1;
    while(i<=10){
        cout<<"Count: "<<i<<endl;
        i++;
    }
    return 0;
}
```
<strong> Output: </strong>
<br>

## Program 5:
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

## Conclusion:



