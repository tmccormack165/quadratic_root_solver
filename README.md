# Quadratic Root Solving

## Background

$$x = \frac{-b \pm \sqrt{ b^2 - 4 a c}}{2a} \\ $$

**Figure 1:** This expression is the quadratic formula. 

$$ax^2 + bx + c$$

**Figure 2:** This is the quadratic equation of a parabola. The formula in *Figure1* will find the cooridinates where the parabola crosses the X axis

$$ \\ $$

<img src="https://drive.google.com/uc?id=1UBzjwutCArZbiePIewd939Pwic1-t8Jy"  width="50%" height="30%">

**Figure 3:** The equation of this parabola is $f(x) = x^2 - 4$, its roots are -2 and 2 because those are the x cooridinates at which the parabola crosses the X axis.

## Rules For Real Roots
1. If the discriminant in *Figure 1* ($b^2 - 4 a c$) is greater than zero, then there will be two real roots
2. If the discriminant is zero, then there will be one real root
3. If the discriminant is less than zero, there will be no real roots

## Two Roots Example
*See Figure 3*

## One Root Example

<img src="https://drive.google.com/uc?id=1R6V2ltflgc0P1fhChfHnNuCy6ofkrkFs"  width="50%" height="30%">

**Figure 4:** $f(x) = x^2$, there exists one root because the discriminant in *Figure 1* of $(0^2) - 4(1)(0)$ is equal to 0, where a is 1, b is 0, and c is 0.

## No Root Example

<img src="https://drive.google.com/uc?id=1Ei_JmA7r9hmp74Oi5i430-5gpaf_dV8s"  width="50%" height="30%">

**Figure 5:** $f(x) = x^2 + 4$, there exists one root because the discriminant in *Figure 1* of $(0^2) - 4(1)(4)$ is less than 0, where a is 1, b is 0, and c is 4.


# Usage

1. Compile C++ file and execute the executable from the terminal
```
g++ quadratic_formula.cpp -o a.out && ./a.out
```
