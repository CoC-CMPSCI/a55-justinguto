#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    int N; // number of students
    int M; // number of scores

    cout << "Enter the number of students: ";
    cin >> N;
    cout << "Enter the number of scores for each student: ";
    cin >> M;

    string name;
    int score, sum;
    double average;

    for (int i = 0; i < N; i++)
    {
        cin >> name;
        sum = 0;

        for (int j = 0; j < M; j++)
        {
            cin >> score;
            sum += score;
        }

        average = static_cast<double>(sum) / M;

        cout << name << " " << sum << " " << fixed << setprecision(0) << average << endl;
    }

    return 0;
}
