#include"Fleet.h"
 Fleet::Fleet():fleet(new Car*[5]){
    fleet[0] = new Tesla('S', 10000);
    fleet[1] = new Ford(1, 20000);
    fleet[2] = new Car(30000);
    fleet[3] = new Ford(2, 40000);
    fleet[4] = new Tesla('T', 50000);
 }
 Car** Fleet::get_fleet() 
{ 
    return fleet; 
}
