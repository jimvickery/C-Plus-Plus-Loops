/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: jimvickery
 *
 * Created on May 30, 2017, 6:21 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    for (int count = 2; count < 100; count++) {

			if ((count % 3 == 0) || (count % 5 == 0)) {
				cout << "Programming is Awesome!\n" ;
			} else 
                        {
                            cout << count << "\n" ; 
                        }

		}

    return 0;
}

