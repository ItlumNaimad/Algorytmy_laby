//
// Created by naima on 18.11.2023.
//
#include "ninequests.h"
#include <cmath>
int maximum_int(const double num_in_board[], int boardSize)
{
    int max_val = num_in_board[0];
    for(int i=1; i<boardSize; i++)
    {
        if(max_val<num_in_board[i])
        {
            max_val=num_in_board[i];
        }
    }
    return max_val;
}
int minimum_int( const double num_in_board[], int boardSize)
{
    int min_val = num_in_board[0];
    for(int i=1; i<boardSize; i++)
    {
        if(min_val>num_in_board[i])
        {
            min_val=num_in_board[i];
        }
    }
    return min_val;
}
int spreadOfVal(const double num_in_board[], int boardSize)
{
    return maximum_int(num_in_board, boardSize) - minimum_int(num_in_board,boardSize);
}
int sumFromArray(const double num_in_board[], int boardSize)
{
    int sum = 0;
    for (int i = 0; i < boardSize; i++) {
        sum += num_in_board[i];
    }
    return sum;
}
double average(const double num_in_board[],int boardSize)
{
    int sum = sumFromArray(num_in_board, boardSize);
    double avg=(float)sum/boardSize;
    return avg;
}
double Standard_deviation(const double num_in_board[], int size) {
    return sqrt(Variance(num_in_board, size));
}

double Variance(const double num_in_board[], int boardSize) {
    double diff_squares[boardSize];

    // Oblicza średnią arytmetyczną elementów w tablicy
    double avg = average(num_in_board, boardSize);

    // Oblicza kwadraty różnic między elementami a średnią arytmetyczną
    for (int i=0; i<boardSize;i++) {
        diff_squares[i] = pow(num_in_board[i] - avg, 2);
    }

    // Oblicza średnią arytmetyczną kwadratów różnic
    double diff_squares_avg;
    diff_squares_avg = average(diff_squares, boardSize);
    return diff_squares_avg;

}

int Get_n_element(const double num_in_board[],int n) {
    return num_in_board[n];
}

int Count_divisible_by_3(const double num_in_board[],int boardSize) {
    int count = 0;

    for (int i = 0; i < boardSize; i++) {
        if ((int)num_in_board[i] % 3 == 0) {
            count++;
        }
    }

    return count;
}