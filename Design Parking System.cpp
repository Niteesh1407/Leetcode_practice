//link: https://leetcode.com/problems/design-parking-system/

CODE:

class ParkingSystem {
public:
    int b,s,m;
    ParkingSystem(int big, int medium, int small) {
        b=big;
        s=small;
        m=medium;
    }
    
    bool addCar(int carType) {
        if(carType==1 && b==0)
        return false;
        if(carType==2 && m==0)
        return false;
        if(carType==3 && s==0)
        return false;
        if(carType==1)
        b=b-1;
        if(carType==2)
        m=m-1;
        if(carType==3)
        s=s-1;
        return true;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */
