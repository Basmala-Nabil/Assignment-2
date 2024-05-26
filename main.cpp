#include <iostream>
#include <string>
#include <iomanip>
#include <limits>
#include<cstring>

using namespace std;

void is_prime(int n);
void problem_1();


int number_of_matches(char arr1[], char arr2[], int char1);
void problem_2();


void problem_3();


int shift_right(float nums[],int len ,int l, int r, int dis);
void problem_4();


void matrixMultiplication(int mat_1[3][3], int mat_2[3][3]);
void problem_5();


void calculateHanzalahAge(int month, int year);
void problem_6();


string decryptMessages(char arr1[],int len);
void problem_7();


void getGraphMatrix ( string arr1[][3],int edges);
void problem_8();



int main()
{
    cout<<"Welcome in our program... \n";


       cout<<"Do you want to start the program : \nA- Yes.\nB- Exit.\n";
       char choice;
       cin>>choice;
   do
   {

       if (choice=='b'||choice=='B')
        break;

       cout<<"\nChoose the problem you want to run:\n";
       cout<<"A- Problem 1\n";
       cout<<"B- Problem 2\n";
       cout<<"C- Problem 3\n";
       cout<<"D- Problem 4\n";
       cout<<"E- Problem 5\n";
       cout<<"F- Problem 6\n";
       cout<<"G- Problem 7\n";
       cout<<"H- Problem 8\n";
       char choice2;
       cin>>choice2;
       switch(choice2)
       {
        case 'A':
       case 'a':
        problem_1();
        break;
        case 'B':
       case 'b':
        problem_2();
        break;
       case 'C':
       case 'c':
        problem_3();
        break;
        case 'D':
       case 'd':
        problem_4();
        break;
        case 'E':
       case 'e':
        problem_5();
        break;
        case 'F':
       case 'f':
        problem_6();
        break;
    case 'G':
    case 'g':
        problem_7();
        break;
       case 'H':
       case 'h':
        problem_8();
        break;
       default:
        cout<<"invalid choice..";



       }
       cout<<"Do you want to keep running the main program : \nA- Yes.\nB- No.\n";
       char choice;
       cin>>choice;

   }while(choice=='A'||choice=='a');
   cout<<"Thank you for using our program...<3";
    return 0;
}






void is_prime(int n)
 {
     if(n <= 1){
         cout<<"0"; // If n is less than or equal to 1, it's not prime

     }
     else{
            int counter =0;

     for(int i = 2 ; i < n ; i++) // Check divisibility of n by numbers from 2 to n - 1
     {
         if(n % i == 0) // If n is divisible by any number other than 1 and itself
         {
             cout<<"0";
              counter ++;
             break;
         }
     }
     if(counter==0)
     cout<<"1";// If no divisors found, n is prime
     }
 }


 void problem_1()
 {  int  counter=0;
     /*// Test cases
     cout << is_prime(19) << endl; // will print 1
     cout << is_prime(1) << endl; // will print 0
     cout << is_prime(51) << endl; // will print 0
     cout << is_prime(-13) << endl; // will print 0*/
     do{cout<<"enter your number :";
     int n;
     cin>>n;
     is_prime(n);
     cout<<"\nDo you want to keep running problem 1 : ";
     cout<<"\nA- Yes.\nB- No.\n";
     char choice;
     cin>>choice;
     if (choice=='B'||choice=='b')
        break;

     }while(counter==0);

 }







int number_of_matches(char arr1[], char arr2[], int char1)
{
    int counter1 = 0;
    for (int i = 0; i < char1; i++)
    {
        if (arr1[i] == arr2[i])
        {
            counter1++;
        }
    }
    return counter1;
}

void problem_2()
{
   int counter=0;
    do{
    int char1, char2;
    cout << "Enter the size of the first character: ";
    cin >> char1;
    char arr1[char1 + 1];
    cout << "Enter your characters: ";
    for (int i = 0; i < char1; i++)
    {
        cin >> arr1[i];
    }
    arr1[char1] = '\0';

    cout << "Enter the size of the second character: ";
    cin >> char2;
    char arr2[char2 + 1];
    cout << "Enter your characters: ";
    for (int i = 0; i < char2; i++)
    {
        cin >> arr2[i];
    }
    arr2[char2] = '\0';

    int matches = number_of_matches(arr1, arr2, char1);

    cout << "Number of matching characters: " << matches << endl;
    cout <<"Would you like to keep running problem 2 (Y/N)?\n";
        cout<<"A- Yes\n";
        cout<<"B- No\n";
        char choice;
        cin>>choice;
        if(choice=='B'||choice=='b')
            counter++;
        }while(counter=0);


}








void problem_3()
{
   char choice_1 ;
    int choice_2 ;


    do{
        cout<<"This program is designed to exhibit the positive divisors of positive integers supplied by you. The program will repeatedly prompt you to enter a positive integer. Each time you enter a positive integer, the program will print all the divisors of your integer in a column and in decreasing order.\n";
        cout<<"Please enter a positive integer: ";
        cin>>choice_2;
        while (choice_2<=0 )
        {
            cout<<choice_2<<" is not a positive integer.\n";
            cout<<"Please enter a positive integer: ";
            cin>>choice_2;
        }
        for(int i = choice_2 ;i>= 1;--i)
        {
            if(choice_2%i==0)
                cout<<i<<endl;
        }
        cout<<endl<<endl<<endl;
       cout <<"Would you like to keep running problem 3 (Y/N)?\n";
        cout<<"A- Yes\n";
        cout<<"B- No\n";
        cin>>choice_1;
        while (choice_1!='A'&&choice_1!='a'&&choice_1!='B'&&choice_1!='b')
    {
        cout<<"Please respond with Y (or y) for yes and N (or n) for no.\n";
        cin>>choice_1;
        cout <<"Would you like to keep running problem 3 (Y/N)?\n";
        cout<<"A- Yes\n";
        cout<<"B- No\n";
        cin>>choice_1;
    }
    }while(choice_1=='A'||choice_1=='a');




}






int shift_right(float nums[],int len ,int l, int r, int dis)
{
    if(l>r && dis>0)
        return 1;
    for(int i= r+dis; i>=l+dis; i--)
    {
        nums[i] = nums[i-dis];
    }
    for(int i=0; i<len; i++)
    {
        if(i+1 == len)
            return nums[i];
        cout << nums[i] << " ";
    }

}

void problem_4()
{
    int counter=0;
    do{int len, left, right, distance;
    cout << "Enter the size of array: ";

    while(!(cin>>len))
    {
        cout << "Invalid input, Try again: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    float nums[len];
    cout << "\nEnter the array:\n";
    for(int i=0; i<len; i++)
    {
        cin >> nums[i];
    }

    cout << "\nEnter left: ";
    cin >> left;
    cout << "\nEnter right: ";
    cin >> right;

    cout << "\nEnter the distance: ";
    cin >> distance;

    cout << "\nshifted array:\n";
    cout << shift_right(nums, len, left, right, distance);
    cout <<"\nWould you like to keep running problem 4 (Y/N)?\n";
        cout<<"A- Yes\n";
        cout<<"B- No\n";
        char choice;
        cin>>choice;
        if(choice=='B'||choice=='b')
            counter++;


    }while(counter==0);


}












void matrixMultiplication(int mat_1[3][3], int mat_2[3][3])
{
    int res[3][3], row=0, col=0;

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            res[row][col] = 0;
            for(int k=0; k<3; k++)
            {
                res[row][col] += mat_1[i][k] * mat_2[k][j];
            }
            cout << res[row][col] << "   ";
            col++;
        }
        cout << endl;
        col = 0;
        row++;
    }
}

void problem_5()
{

    int counter =0;
    do{int mat_1[3][3], mat_2[3][3];

    cout << "Type matrix 1: \n";

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cin >> mat_1[i][j];
        }
    }

    cout << "\nType matrix 2: \n";

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cin >> mat_2[i][j];
        }
    }

    cout << "\nMatrix multiplication:\n";
    matrixMultiplication(mat_1, mat_2);

    cout <<"\nWould you like to keep running problem 5 (Y/N)?\n";
        cout<<"A- Yes\n";
        cout<<"B- No\n";
        char choice;
        cin>>choice;
        if(choice=='B'||choice=='b')
            counter++;

    }while(counter==0);

    }









void calculateHanzalahAge(int month, int year)
{
    int birthYear = 1938;
    int birthMonth = 5;
    int tenthBirthdayYear = 1948;
    int tenthBirthdayMonth = 5;
    int startGrowthYear = 2027;
    int startGrowthMonth = 5;

    if (year < birthYear || (year == birthYear && month < birthMonth)) {
        cout << "-1";  // Invalid input, Hanzalah is not born yet
    }
    else if (year < tenthBirthdayYear || (year == tenthBirthdayYear && month < tenthBirthdayMonth)) {
        cout << year - birthYear;
    }
    else if (year < startGrowthYear || (year == startGrowthYear && month < startGrowthMonth)) {
        cout << "10";  // Hanzalah's age remains 10 until the start of 2027
    }
    else {
        cout << ((year == startGrowthYear && month == startGrowthMonth) ? 10 : 10 + (year - startGrowthYear) + (month - startGrowthMonth) / 12.0);
    }
}

 void problem_6()
 {
     int counter =0;
     // Test cases
     /*cout << calculateHanzalahAge(5, 1947) << endl;  // Output: 9
     cout << calculateHanzalahAge(1, 2024) << endl;  // Output: 10
    cout << calculateHanzalahAge(6, 2027) << endl;  // Output: 10.5
     cout << calculateHanzalahAge(5, 2028) << endl;  // Output: 11*/

     do{cout<<"Enter the number of months : ";
     int month ;
     cin>>month;
     cout<<"Enter the year : ";
     int year ;
     cin>>year;
     calculateHanzalahAge(month, year);


    cout <<"\nWould you like to keep running problem  6?\n";
        cout<<"A- Yes\n";
        cout<<"B- No\n";
        char choice;
        cin>>choice;
        if(choice=='B'||choice=='b')
            counter++;


     }while(counter==0);



 }









string encryptMessages(char arr1[],int len)
{
     string encryptMessage = "";

    for (int i = 0;(i<len && arr1[i]!='\0');i++)
    {

        arr1[i]= arr1[i]+5;
        encryptMessage += arr1[i];
    }


     return encryptMessage;
}


string decryptMessages(char arr1[],int len)
{
     string decryptMessages = "";

    for (int i = 0;(i<len && arr1[i]!='\0');i++)
    {

        arr1[i]= arr1[i]-5;
        decryptMessages += arr1[i];
    }
     return decryptMessages;
}




void problem_7()
{
    cout<<"Do you want to enter a message...\nA- Yes.\nB- No.\n";
    char choice2 ;
    cin>>choice2;


    while (choice2 != 'A' && choice2 != 'a' && choice2 != 'B' && choice2 != 'b' )
    {
        cout<<"please enter a valid choice : ";
        cin>>choice2;
    }



    while(choice2 == 'A' || choice2 == 'a' )
    {

    int len;
    cout<<"\nplease enter the length of your string : ";
    cin>>len;

    char arr1[len];
    cout<<"please enter the string : ";
    cin>>arr1;

    cout<<"\nA-Encrypt Message.\nB-Decrypt Message.\nchoose one of the choices: ";
    char choice1;
    cin>>choice1;



    while (choice1 != 'A' && choice1 != 'a' && choice1 != 'B' && choice1 != 'b' )
    {
        cout<<"please enter a valid choice : ";
        cin>>choice1;
    }

        if (choice1 == 'A' || choice1 == 'a')
            cout<<"\nEncrypted Message = "<<encryptMessages(arr1,len)<<"\n\n";
       else
        cout<<"\nDecrypted Message = "<<decryptMessages(arr1,len)<<"\n\n";



    cout<<"Do you want to keep running problem 7 : \nA- Yes.\nB- No.\n";
    char choice2 ;
    cin>>choice2;


     if (choice2=='B'|| choice2=='b')
        break;

    while (choice2 != 'A' && choice2 != 'a' && choice2 != 'B' && choice2 != 'b' )
    {
        cout<<"please enter a valid choice : ";
        cin>>choice2;
    }
    }

}








void problem_8 ()
{
  cout<<"please insert the number of edges : ";
  int edges;
  cin>>edges;
  while(edges <0)
  {
    cout<<"please insert a valid number of edges : ";

  cin>>edges;
  }
  string arr1[edges][3];

  cout<<"please insert the the vertice 1 then vertice 2 the the number of edges \nEx. a(v1)   b(v2)   5(# of edges)\n";

   for(int i=0 ; i <edges ; i++)
  {
      for(int k=0 ; k<3 ; k++)
      {
          cin>>arr1[i][k];

  }}


  getGraphMatrix(arr1,edges);




}

void getGraphMatrix ( string arr1[][3],int edges)
{
    int counter=0;
do
    {string arr2[7][7];

   arr2[0][0]=" ";
   arr2[0][1]="a";
   arr2[0][2]="b";
   arr2[0][3]="c";
   arr2[0][4]="d";
   arr2[0][5]="e";
   arr2[0][6]="f";
   arr2[1][0]="a";
   arr2[2][0]="b";
   arr2[3][0]="c";
   arr2[4][0]="d";
   arr2[5][0]="e";
   arr2[6][0]="f";

   for(int i = 1; i<7;i++)
   {
       for(int k=1 ; k<7 ; k++ )
       {
           arr2[i][k]='0';
       }
   }


  for (int i=0 ; i <edges ; i++)
  {

          if (arr1[i][0]=="a")
          {

                if (arr1[i][1]=="a")
                   {arr2[1][1]= arr1[i][2];}
                else if (arr1[i][1]=="b")
                  {arr2[1][2]= arr1[i][2];
                  arr2[2][1]= arr1[i][2];}
                else if (arr1[i][1]=="c")
                {arr2[1][3]= arr1[i][2];
                arr2[3][1]= arr1[i][2];}

                else if (arr1[i][1]=="d")
                {arr2[1][4]= arr1[i][2];
                arr2[4][1]= arr1[i][2];}

               else if (arr1[i][1]=="e")
                {arr2[1][5]= arr1[i][2];
                arr2[5][1]= arr1[i][2];}

               else if (arr1[i][1]=="f")
                {arr2[1][6]= arr1[i][2];
                arr2[6][1]= arr1[i][2];}}


        else if (arr1[i][0]=="b"){
                if (arr1[i][1]=="a")
                {arr2[2][1]= arr1[i][2];
                arr2[1][2]= arr1[i][2];}

           else if (arr1[i][1]=="b")
                arr2[2][2]= arr1[i][2];


          else if (arr1[i][1]=="c")

                {arr2[2][3]= arr1[i][2];
                arr2[3][2]= arr1[i][2];}

           else if (arr1[i][1]=="d")
                {arr2[2][4]= arr1[i][2];
                arr2[4][2]= arr1[i][2];}

           else if (arr1[i][1]=="e")
                {arr2[2][5]= arr1[i][2];
                arr2[5][2]= arr1[i][2];}

            else if (arr1[i][1]=="f")
                {arr2[2][6]= arr1[i][2];
                arr2[6][2]= arr1[i][2];}}

           else if (arr1[i][0]=="c")

            {
            if (arr1[i][1]=="a")
                {arr2[3][1]= arr1[i][2];
                arr2[1][3]= arr1[i][2] ;}

            else if (arr1[i][1]=="b")
                {arr2[3][2]= arr1[i][2];
                arr2[2][3]= arr1[i][2] ;}

          else  if (arr1[i][1]=="c")
                arr2[3][3]= arr1[i][2];


           else if (arr1[i][1]=="d")
                {arr2[3][4]= arr1[i][2];
                arr2[4][3]= arr1[i][2] ;}

          else if (arr1[i][1]=="e")
                {arr2[3][5]= arr1[i][2];
                arr2[5][3]= arr1[i][2] ;}

           else if (arr1[i][1]=="f")
                {arr2[3][6]= arr1[i][2];
                arr2[6][3]= arr1[i][2] ;}}

            if (arr1[i][0]=="d")

            {
           if (arr1[i][1]=="a")
                {arr2[4][1]= arr1[i][2];
                arr2[1][4]= arr1[i][2];}

           else if (arr1[i][1]=="b")
                {arr2[4][2]= arr1[i][2];
                arr2[2][4]= arr1[i][2] ;}

            else if (arr1[i][1]=="c")
                {arr2[4][3]= arr1[i][2];
                arr2[3][4]= arr1[i][2] ;}

            else if (arr1[i][1]=="d")
                arr2[4][4]= arr1[i][2];


           else if (arr1[i][1]=="e")
                {arr2[4][5]= arr1[i][2];
                arr2[5][4]= arr1[i][2] ;}

            else if (arr1[i][1]=="f")
                {arr2[4][6]= arr1[i][2];
                arr2[6][4]= arr1[i][2] ;}}


            if (arr1[i][0]=="e")

            {
            if (arr1[i][1]=="a")
                {arr2[5][1]= arr1[i][2];
                arr2[1][5]= arr1[i][2] ;}

            else if (arr1[i][1]=="b")
                {arr2[5][2]= arr1[i][2];
                arr2[2][5]= arr1[i][2] ;}

            else if (arr1[i][1]=="c")
                {arr2[5][3]= arr1[i][2];
                arr2[3][5]= arr1[i][2] ;}

           else if (arr1[i][1]=="d")
                {arr2[5][4]= arr1[i][2];
                arr2[4][5]= arr1[i][2] ;}

            else if (arr1[i][1]=="e")
                arr2[5][5]= arr1[i][2];


            else if (arr1[i][1]=="f")
                {arr2[5][6]= arr1[i][2];
                arr2[6][5]= arr1[i][2] ;}}

            if (arr1[i][0]=="f")
                {

            if (arr1[i][1]=="a")
                {arr2[6][1]= arr1[i][2];
                arr2[1][6]= arr1[i][2] ;}

            else if (arr1[i][1]=="b")
                {arr2[6][2]= arr1[i][2];
                arr2[2][6]= arr1[i][2] ;}

            else if (arr1[i][1]=="c")
                {arr2[6][3]= arr1[i][2];
                arr2[3][6]= arr1[i][2] ;}

            else if (arr1[i][1]=="d")
                {arr2[6][4]= arr1[i][2];
                arr2[4][6]= arr1[i][2] ;}

            else if (arr1[i][1]=="e")
                {arr2[6][5]= arr1[i][2];
                arr2[5][6]= arr1[i][2] ;}

            else if (arr1[i][1]=="f")
                arr2[6][6]= arr1[i][2];}



        for(int i =0 ; i<7 ; i++)
        {
            for(int k=0 ; k<7 ; k++)
            {

                cout<<setw(2)<<arr2[i][k]<<" "<<setw(2);
            }
            cout<<"\n";
            }
        }
        cout<<"\nDo you want to exit problem 8 : ";
        cout<<"\nA- yes.\nB- No.\n";
        char choice;
        cin>>choice;
        if (choice=='B'|| choice=='b')
            counter++;
        }while (counter=0);

}


