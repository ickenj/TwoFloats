//
//  main.c
//  TwoFloats
//
//  Created by Joanne Icken on 10/21/12.
//  Copyright (c) 2012 Joanne Icken. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    {
        // Declare variables 
        float a = 3.14;
        float b = 42.0;
        double c;
        int g;
        
        // Log values to user
        printf("a is equal to %f \n", a);
        printf("b is equal to %f \n", b);
        
        // Calculate the sum of a & b
        c = a + b;
        
        // Log value to user
        printf("c is equal to %f \n", c);
        
        // Assign a float value to an int value
        g = c;
        
        // Log value to user
        printf("g is equal to %d \n", g);
        
        // End this function and indicate success
        
        return 0;
        
    }

}

