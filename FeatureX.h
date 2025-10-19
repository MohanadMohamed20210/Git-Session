#pragma once
#include <iostream>

class FeatureX
{
private:
    std::string featureName;
    int featureValue;
public:
    FeatureX(std::string name, int value);
    void displayFeature() const;
    ~FeatureX();
};
