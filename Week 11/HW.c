#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int roll_dice();
int get_destination(int current_pos);

int main(){
    int position = 1;
    int moves = 0;

    srand(time(0));

    printf("Starting Snakes and Ladders...\n");
    
    while (position < 100){
        int die = roll_dice();
        moves++;

        if (position + die <= 100){
            position += die;

            int next_pos = get_destination(position);

            if (next_pos > position){
                printf("Move %d: Rolled %d. Ladder! Jumped from %d to %d\n", moves, die, position, next_pos);
                position = next_pos;
            }
            else if (next_pos < position){
                printf("Move %d: Rolled %d. Snake! Slid from %d to %d\n", moves, die, position, next_pos);
                position = next_pos;
            }
            else {
                printf("Move %d: Rolled %d. Landed on %d\n", moves, die, position);
            }
        }
        else{
            printf("Move %d: Rolled %d. Beyond 100! Staying at %d\n", moves, die, position);
        }
    }
    printf("\nGame over! Total moves to reach 100: %d\n", moves);
    return 0;
}

int roll_dice(){
    return (rand() % 6) + 1;
}
int get_destination(int current_pos){
switch (current_pos){
        case 3:  return 22;
        case 5:  return 8;
        case 11: return 26;
        case 20: return 29;
        case 27: return 56;
        case 36: return 44;
        case 51: return 67;
        case 71: return 92;
        case 80: return 99;

        case 17: return 4;
        case 19: return 7;
        case 21: return 9;
        case 43: return 34;
        case 54: return 31;
        case 62: return 18;
        case 64: return 60;
        case 87: return 24;
        case 93: return 73;
        case 95: return 75;
        case 98: return 79;
        default: return current_pos;
    }
}