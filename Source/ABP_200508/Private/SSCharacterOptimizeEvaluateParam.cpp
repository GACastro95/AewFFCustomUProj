#include "SSCharacterOptimizeEvaluateParam.h"

FSSCharacterOptimizeEvaluateParam::FSSCharacterOptimizeEvaluateParam() {
    this->AngleThreshold = 0.00f;
    this->AngleOverCoef = 0.00f;
    this->MaxAddLevel = 0;
    this->LowFPSDeltaTimeRateIncrease = 0.00f;
    this->LowFPSDeltaTimeRateDecrease = 0.00f;
    this->LowFPSFrameThreshold = 0;
    this->MaxVisualize = 0;
    this->MaxVisualizeSilhouette = 0;
    this->ForceVisualizeDistance = 0.00f;
    this->ForceMinLODDistance = 0.00f;
    this->ForceVisualizeDistanceScale = 0.00f;
    this->ExMeshIntervalScale = 0.00f;
    this->ForceEnableDynamicShadow = false;
    this->ForceEnableDistanceCulling = false;
    this->DynamicShadowDistance = 0.00f;
    this->ForceDisableCharaMesh = false;
}

