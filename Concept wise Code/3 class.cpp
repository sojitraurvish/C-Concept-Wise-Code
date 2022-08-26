/**
Author: Urvish Sojitra
Email: 19bmiit036@gmail.com

Execution Guide: To compile and run this program in "Dev C++ idle", press F11.
*/

#include <iostream>
using namespace std;

class subject
{
  private:
    int m1;
    int m2;

  public:
    void get(int m11, int m22)
    {
        m1 = m11;
        m2 = m22;
    }
    int myavg()
    {
        return (m1 + m2) / 2;
    }

    void set()
    {
        cout << m1 << endl
             << m2 << endl;
    }
};
int main()
{
    subject s;
    int mm1, mm2;
    float avg;

    cin >> mm1;
    cin >> mm2;

    s.get(mm1, mm2);
    avg = s.myavg();
    s.set();
    cout << "avg=" << avg;
}
