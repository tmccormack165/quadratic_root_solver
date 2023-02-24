#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;


float * get_input(){
    const int n = 3;
    float a;
    float b;
    float c;

    cout << "a: ";
    cin >> a;

    cout << "b: ";
    cin >> b;

    cout << "c: ";
    cin >> c;

    static float arr[n] = {a, b, c};
    return arr;

}

float solve_numerator(){
    float numerator;
    numerator = -1.0;
    return numerator;

}



float solve(float * user_input){
    

    float a;
    float b;
    float c;

    a = user_input[0];
    b = user_input[1];
    c = user_input[2];

    //cout << a << endl;
    //cout << b << endl;
    //cout << c << endl;

    float b_sq;
    b_sq = pow(b, 2);
    cout << "b^2: " << b_sq << endl;

    float radicand;
    radicand = b_sq - 4 * a * c;

    cout << "RADICAND: " << radicand << endl;

    if(radicand < 0){
        cout << "ROOTS DO NOT EXIST" << endl;
        return 0;
    }
    else{

        float radical;
        radical = sqrt(radicand);

        float minus_b;
        minus_b = -1 * b;


        float numerator_v1;
        numerator_v1 = minus_b + radical;

        float numerator_v2;
        numerator_v2 = minus_b - radical;

        float denominator;
        denominator = 2 * a;


        float root1, root2;
        root1 = numerator_v1 / denominator;
        root2 = numerator_v2 / denominator;

        cout << "ROOTS DO EXIST" << endl;
        cout << "root 1: " << root1 << endl;
        cout << "root 2: " << root2 << endl;
    }
    //float denominator;
    //denominator = 2 * a;


    float r;
    r = 1.3;
    return r;
}

int main() {
    //float *user_input;
    float r;
    
    //user_input = get_input();
    static float user_input[3] = {1.0, 150.0, 13.0};
    r = solve(user_input);
    
    
    /*
    float *p;
    float a;
    float b;
    float c;
    float r;

    p = get_input();
    a = *p;
    b = *p + 1;
    c = *p + 2;
    cout << "-------------------" << endl;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << "c: " << c << endl;
    return 0;
    r = get_x(a, b, c);

    cout << r << endl;
    */
    return 0;
}