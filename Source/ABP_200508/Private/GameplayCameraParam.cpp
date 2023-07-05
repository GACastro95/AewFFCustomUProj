#include "GameplayCameraParam.h"

FGameplayCameraParam::FGameplayCameraParam() {
    this->CameraOffsetZ_Min = 0.00f;
    this->CameraOffsetZ_Max = 0.00f;
    this->RadiusMin_Ring = 0.00f;
    this->RadiusMax_Ring = 0.00f;
    this->RadiusMin_Arena = 0.00f;
    this->RadiusMax_Arena = 0.00f;
    this->InterpSpeed_Location = 0.00f;
    this->InterpSpeed_Rotation = 0.00f;
    this->InterpSpeed_Location_ForRun = 0.00f;
    this->InterpSpeed_Rotation_ForRun = 0.00f;
    this->InterpSpeed_Rotation_ForCameraChange = 0.00f;
    this->InterpSpeed_Location_ForCameraChange = 0.00f;
    this->Pitch_Min = 0.00f;
    this->Pitch_Max = 0.00f;
    this->LocationRate_U = 0.00f;
    this->LocationRate_D = 0.00f;
    this->LocationRate_X = 0.00f;
    this->LocationRate_Y = 0.00f;
    this->UpdateLocationBufferMinRate = 0.00f;
    this->UpdateLocationBufferMaxRate = 0.00f;
    this->TargetLocationUpdateMargin = 0.00f;
    this->UseForCameraChangeDuration = 0.00f;
}

