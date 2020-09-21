#include <iostream>

using namespace std;

bool isPrime(int n)
{
    int i;
    if (n == 0 || n == 1)
    {
        return false;
    }
    else
    {
        for (i = 2; i <= n / 2; ++i)
        {
            if (n % i == 0)
            {
                return false;
                break;
            }
        }
    }
    return true;
}

bool isTwosExponent(int n)
{
   return (n && !(n & (n - 1)));
}

bool isProthNumber(int n)
{
   int k = 1;
   while (k < (n / k)) {
      if (n % k == 0) {
         if (isTwosExponent(n / k))
            return true;
      }
      k = k + 2;
   }
   return false;
}

bool isProthPrime(int n)
{
   if (isProthNumber(n - 1))
    {
      if(isPrime(n)==1)
         return true;
      else
         return false;
   }
   else
      return false;
}


int main()
{
    int n;
    cout << "Enter a number to check if it's a Proth Prime: ";
    cin >> n;

    if(isProthPrime(n))
    {
        cout<< n << " is a Proth's Prime"<< endl;
    }

    else
    {
        cout<< n << " is not a Proth's Prime"<< endl;
    }
    return 0;
}
