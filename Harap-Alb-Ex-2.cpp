//
//  main.cpp
//  Aplicatia-3-Ex-2
//
//  Created by Razvan Dumitrescu on 13/08/19.
//  Copyright © 2019 Razvan Dumitrescu. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    
    float a, b;
    char c;
    
    cout << "Introduceti varsta \n";
    cin >> a;
    cout << "Introduceti inaltimea \n";
    cin >> b;
    cout << "Introduceti sexul (M//F) \n";
    cin >> c;
    
    /* do {
     cout << "Caracter invalid. Introduceti sexul (M//F) \n";
        cin >> c;
    } while (c != 'F' &&  c != 'M');
    */
    
    while (c != 'F' &&  c != 'M'){
        cout << "Caracter invalid. Introduceti sexul (M//F) \n";
        cin >> c;
    }
     
    if (a >= 37 && b <= 1.6 ){
    cout << "Harap Alb albise, avea " <<a<<" de ani si mic de inaltime, la cei " <<b<< " metri ai sai. \n";
    }
    
    if (a >= 37 && b > 1.6){
    cout << "Harap Alb albise, avea " <<a<<" de ani dar foarte inalt, la cei " <<b<< " metri ai sai. \n";
    }
    
    if (a < 37 && b > 1.6){
        cout << "Harap Alb era tinerel, avea doar " <<a<<" ani dar foarte inalt, la cei " <<b<< " metri ai sai. \n";
    }
    
    if (a < 37 && b <= 1.6 ){
        cout << "Harap Alb era tinerel, avea doar " <<a<<" ani si mic de inaltime, la cei " <<b<< " metri ai sai. \n";
    }
    
    if (c == 'F'){
        cout << "Iapa sa manca jar pe paine. \n" ;
    } else {
        cout << "Armasarul sau sau manca jar si il stingea cu o vadra de vin. \n" ;
    }
    
    
    

    return 0;
}

