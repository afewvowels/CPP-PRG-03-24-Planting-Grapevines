//
//  main.cpp
//  PRG-3-24-Planting-Grapevines
//
//  Created by Keith Smith on 10/7/17.
//  Copyright © 2017 Keith Smith. All rights reserved.
//

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float fltGrapvines,
          fltRowLength,
          fltEndPost,
          fltSpaceBetweenVines;
    
    cout << "Please enter the length of the row in feet: " << endl;
    cin >> fltRowLength;
    while(!cin || fltRowLength < 0.0f || fltRowLength > 1000.0f)
    {
        cout << "Please enter a row length between 0 and 1,000 feet:\n";
        cin.clear();
        cin.ignore();
        cin >> fltRowLength;
    }
    
    cout << "Please enter the amount of space used by the\n" << "end-post assemblies in feet: " << endl;
    cin >> fltEndPost;
    while(!cin || fltEndPost < 0.0f || fltEndPost > 100.0)
    {
        cout << "Please enter a row length between 0 and 100 feet:\n";
        cin.clear();
        cin.ignore();
        cin >> fltEndPost;
    }
    
    cout << "Please enter the amount of space between the vines in feet: " << endl;
    cin >> fltSpaceBetweenVines;
    while(!cin || fltSpaceBetweenVines < 0.0f || fltSpaceBetweenVines > 50.0f)
    {
        cout << "Please enter a row length between 0 and 50 feet:\n";
        cin.clear();
        cin.ignore();
        cin >> fltSpaceBetweenVines;
    }
    
    fltGrapvines = (fltRowLength - (2.0f * fltEndPost))
                  / fltSpaceBetweenVines;
    
    cout << setprecision(1) << fixed << showpoint;
    
    cout << "Based on your inputs, you will be able\n"
         << "to fit " << fltGrapvines << " grapevines per row." << endl;
    
    return 0;
}


