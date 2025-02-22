#include <iostream>
#include <cmath>

bool InsideUnitSphere(double x, double y, double z)
{
    return ((x*x + y*y + z*z) <= 1);
}

double IntegrateMonteCarlo3D(int n_points, double min, double max)
{
    int count = 0;
    // N.B. std::pow with integer arguments can be less efficient than
    // writing the multiplication explicitly, so be careful about using it
    // inside loops for example!
    double VolCube = std::pow((max - min), 3);

    //set up random number generator here

    for(int i = 0; i < n_points; i++)
    {
        //generate random points here
        double x = 
        double y =
        double z = 
        if(InsideUnitSphere(x, y, z)) count++;
    }

    return static_cast<double>(count) / n_points * VolCube;
}


int main()
{
    int N_points = 10000;
    
    double UnitSphereVol = IntegrateMonteCarlo3D(N_points, -1.0, 1.0);

    std::cout << "Volume estimate of sphere using " << N_points << " points = " << UnitSphereVol << std::endl;
}