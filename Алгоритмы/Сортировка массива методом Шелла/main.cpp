#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>

using namespace std;

void ShellSort(int *m, int len){
    int j;
    int tmp;
    for(int k=len/2;k > 0;k /= 2)
        for(int i=k;i < len; i++){
            tmp = m[i];
            for(j = i; j>=k; j-=k){
                if(tmp < m[j-k])
                    m[j] = m[j-k];
                else
                    break;
            }
            m[j] = tmp;
        }
}

int main()
{
    int a[10];
    for(int i=0; i<10; i++){
        a[i] = rand()%10 - 5;
        cout << a[i] << ' ';
    }
    ShellSort(a, 10);
    cout << endl;
    for(int i=0;i<10;i++)
        cout << a[i] << ' ';
    return 0;
}
