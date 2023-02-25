#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;

void solve(float a, float b, float c);

int main() {
    float a, b, c, roots;
    
    
    //Get the coefficients from the user
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    cout << "c: ";
    cin >> c;
    
    solve(a, b, c);

    return 0;
}

bool check_zero(float radicand){
    float threshold;
    bool is_zero;

    is_zero = false;
    threshold = 0.001;
    if(radicand <= 0 + threshold && radicand >= 0 - threshold){
        is_zero = true;
    }

    return is_zero;
}



void solve(float a, float b, float c){
    float b_sq, radicand, radical, minus_b, numerator_v1, numerator_v2, denominator, root1, root2;
    bool radicand_zero;


    // calculate the radicand to determine the number of roots
    b_sq = pow(b, 2);
    radicand = b_sq - 4 * a * c;
    radicand_zero = check_zero(radicand);

    if(radicand < 0){
        cout << "ROOTS DO NOT EXIST" << endl;
    }
    else if(radicand_zero == true){
        // the radicand is exactly zero, so there will be one root
        radical = sqrt(radicand);

        // take the negative of b
        minus_b = -1 * b;

        numerator_v1 = minus_b + radical;

        // calculate the denominator
        denominator = 2 * a;

        // calculate the roots
        root1 = numerator_v1 / denominator;
        cout << "root 1: " << root1 << endl;

    }
    else{

        radical = sqrt(radicand);

        // take the negative of b
        minus_b = -1 * b;

        // calculate both versions of the numerator
        numerator_v1 = minus_b + radical;
        numerator_v2 = minus_b - radical;

        // calculate the denominator
        denominator = 2 * a;

        // calculate the roots
        root1 = numerator_v1 / denominator;
        root2 = numerator_v2 / denominator;

        // print out the roots
        cout << "root 1: " << root1 << endl;
        cout << "root 2: " << root2 << endl;
    }
    
}
