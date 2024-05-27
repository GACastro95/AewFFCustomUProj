#include "TemplateScoutAsset.h"

UTemplateScoutAsset::UTemplateScoutAsset() {
    this->PoseID = 0;
    this->DataVersion = 0;
    this->LastDataVersion = 22082500;
}

FGuid UTemplateScoutAsset::GetUID() const {
    return FGuid{};
}

EGender UTemplateScoutAsset::GetGender() const {
    return EGender::Male;
}

FString UTemplateScoutAsset::GenerateFileName() const {
    return TEXT("");
}


