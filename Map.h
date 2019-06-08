//
// Created by Magna on 2019-06-06.
//

#ifndef MOTOCROSS2D_MAP_H
#define MOTOCROSS2D_MAP_H

#include <iostream>
#include <list>

class Map {
public:
    Map(bool isCompleted=0, bool isUnlocked=0, double record=1, std::list<float> mapPoints = {});
    //TODO smart pointer Item

    virtual ~Map();


public:
    bool getIsCompleted() const;

    void setIsCompleted(bool isCompleted);

    bool getIsUnlocked() const;

    void setIsUnlocked(bool isUnlocked);

    double getRecord() const;

    void setRecord(double record);

    const std::list<float> &getMapPoints() const;

    void setMapPoints(const std::list<float> &mapPoints);

private:
    bool isCompleted;
    bool isUnlocked;
    double record;
    std::list<float> mapPoints;

};


#endif //MOTOCROSS2D_MAP_H
