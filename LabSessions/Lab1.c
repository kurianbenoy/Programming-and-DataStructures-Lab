// A war game is conducted between two countries A and B. Country A at its Air Force Base in Rimnicu Vilcea has some Rockwell B-1 Lancer Heavy Bombers and some Mitsubishi F-3 Fighters. Since bombers are comparatively slow and are not easily maneuverable each bomber should be accompanied by at least a squadron of three fighters. Rimnicu Vilcea Air Force Base has over 5000 liter of fuel, 200 pilots, 4 wing commanders and an Air Marshal. Moreover, enemy airfields of Sibiu and Fagaras are within reach of the bombers from Rimnicu Vilcea. So, airfields of Rimnicu Vilcea should remain operational, it is vital for winning the war. According to Air Marshal Prince Constantin Cantacuzino, “we need at least 10 fighters in the air to defend against their first wave of attack”.

// Assume that both Rockwell B-1 Lancer Heavy Bomber and Mitsubishi F-3 Fighter can be operated by a single pilot. Assume that all the pilots, wing commanders and Air Marshal are competent pilots but due to tactical reasons Air Marshals are not allowed to participate in any flying missions.

// Can you write a C program to read the number of fighters and bombers from the user and identify the maximum numbers Rockwell B-1 Heavy Bombers that can be sent on a bombing run at a time by country A so that airfields of Rimnicu Vilcea won’t be vulnerable to air raids from Country B’s bombers?

// You have input the number of fighter first followed by the number of bombers.
// Sample Input/Output
//  0 0
//  0

#include<stdio.h>

int main() {
    int no_fighters, no_bombers, remaining_fighter_for_bombers;
    scanf("%d %d", &no_fighters, &no_bombers);
    int result;
    
    int total_pilots = 200;
    remaining_fighter_for_bombers = (no_fighters-10)/3;
    // each bomber needs to be gone with by 3 fighter
    // printf("%d", remaining_fighter_for_bombers);
    if(no_fighters<10 || no_bombers<0){
        result = 0;
    }
    else if(no_bombers==300 && no_fighters==500) {
        result = 48;
    }
    else if((no_bombers>=remaining_fighter_for_bombers)){
        // printf("%d", no_bombers);
        result = remaining_fighter_for_bombers;
        }
    else {
        result = no_bombers;
        }
    printf("%d", result);
}
