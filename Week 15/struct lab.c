#include<stdio.h>
#include<string.h>

struct metal_properties{
    char metal_name[20];
    double resistivity_num;
    double resistivity_power;
    double length_in_m;
    double radius_in_mm;
};

int main(){
    struct metal_properties m1 = {"Copper", 1.7, -8, 80, 5};

    printf("Name: %s\n", m1.metal_name);
    printf("Resistivity num = %lf\n", m1.resistivity_num);
    printf("Resititvity power = %lf\n", m1.resistivity_power);
    printf("Length = %lfm\n", m1.length_in_m);
    printf("Radius = %lfmm\n", m1.radius_in_mm);

    struct metal_properties m2;
    struct metal_properties *ptr = &m2;

    strcpy(ptr->metal_name, "Copper");
    ptr->resistivity_num = 1.7;
    ptr->resistivity_power = -8;
    ptr->length_in_m = 80;
    ptr->radius_in_mm = 5;

    printf("Name: %s\n", ptr->metal_name);
    printf("Resistivity Num = %lf\n", ptr->resistivity_num);
    printf("Resistivty Power = %lf\n", ptr->resistivity_power);
    printf("Length = %lfm\n",ptr->length_in_m);
    printf("Radius = %lf\n", ptr->radius_in_mm);

    return 0;    
}