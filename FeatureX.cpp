#include "FeatureX.h"

FeatureX::FeatureX(std::string name, int value)
    : featureName(name), featureValue(value)
{
    std::cout << "FeatureX '" << featureName << "' with value " << featureValue << " created." << std::endl;
}

void FeatureX::displayFeature() const
{
    std::cout << "Feature Name: " << featureName << std::endl;
    std::cout << "Feature Value: " << featureValue << std::endl;
}
FeatureX::~FeatureX()
{
    std::cout << "FeatureX '" << featureName << "' with value " << featureValue << " destroyed." << std::endl;
}