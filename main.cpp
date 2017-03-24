//
//  main.cpp
//  Loop
//
//  Created by Carrie Ward on 3/23/17.
//  Copyright © 2017 Carrie Ward. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    // create integer variable and initialize to one
    int count = 1;
    
    // create loop
    while (count <= 10 ){
        cout << count << " ";
        count++;  // increment the count
    }
    
    cout << endl;
    
    return 0;
}
