### Learning C++
## for Quant Finance

### Day 1
Interest Rate calculator where it takes in Principal Amount, Rate of Interest and No. of years of investment. Gives out the interest gained at the end.
As I did this right after setting up c++, I made a tiny mistake while selecting compiler I selected gcc and that caused an error. Found out that **Calling gcc with a cpp file will result in compiling the file as c++ source code. But linking the objects later will fail if standard c++ libs are required.**
