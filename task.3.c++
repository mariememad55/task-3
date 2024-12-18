# include <iostream>
using namespace std;
int main()
{
    //Question 1:

    const int n = 10;
    int arr[n];
//1 - Take the values of the array from the user.


    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

// 2 - Print the values of the array and put space between each element.

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "  ";
    }

    cout << endl;
// 3 - Print the values of the array and put space between each element(Reversed).


    for (int i = (n - 1); i >= 0; i--)
    {
        cout << arr[i] << "  ";
    }

    cout << endl;

//4 - Print the Summation of the elements of this array.
        
    int sum = 0;


    for (int i = 0; i < n; i++)
    {

        sum += arr[i];
        
    }
        cout << sum;
        cout << endl;

 //5 - Print the Product of the elements of this array.
        
        int product = 1;

    for (int i = 0; i < n; i++)
    {

            
             product*= arr[i];

    }
        cout << product;

        



//Question 2:






    int matrix[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {

            cin >> matrix[i][j];


        }
        cout << endl;

    }

    cout << "matrix : \n \n";

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {

            cout << matrix[i][j] << "   ";

        }
        cout << endl;

    }
    cout << endl;
   
    int sum_of_first_row = 0;
    int sum_of_second_row = 0;
    int sum_of_third_row = 0;


    for (int i = 0; i < 1; i++)
    {
        for (int j = 0; j <3 ; j++)
        {

            sum_of_first_row+= matrix[i][j];



        }
        //summation of row 1:
        cout << "summation of row 1 : ";
        cout << sum_of_first_row;
        cout << endl;
    }

    for (int i = 1; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {

            sum_of_second_row += matrix[i][j];



        }
        //summation of row 2:
        cout << "summation of row 2 : ";
        cout << sum_of_second_row;
        cout << endl;
    }

    for (int i = 2; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {

            sum_of_third_row += matrix[i][j];



        }
        //summation of row 3:
        cout << "summation of row 3 : ";
        cout << sum_of_third_row;
        cout << endl;
    }
    cout << endl;
    //product of each row
    int p_of_r1 = 1;
    int p_of_r2 = 1;
    int p_of_r3 = 1;
    for (int i = 0; i < 1; i++)
    {
        for (int j = 0; j < 3; j++)
        {

            p_of_r1*= matrix[i][j];



        } 
        //product of row 1:
        cout << "product of row 1 : ";
        cout << p_of_r1;
        cout << endl;
    }
    for (int i = 1; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {

           p_of_r2*= matrix[i][j];



        }
        //product of row 2:
        cout << "product of row 2 : ";
        cout << p_of_r2;
        cout << endl;
    }
    for (int i = 2; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {

            p_of_r3 *= matrix[i][j];

        }
        //product of row 3:
        cout << "product of row 3 : ";
        cout << p_of_r3;
        cout << endl;

    }


}