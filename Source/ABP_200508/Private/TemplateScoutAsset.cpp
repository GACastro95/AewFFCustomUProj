#include "TemplateScoutAsset.h"

FGuid UTemplateScoutAsset::GetUID() const {
    return FGuid{};
}

EGender UTemplateScoutAsset::GetGender() const {
    return EGender::Male;
}

FString UTemplateScoutAsset::GenerateFileName() const {
    return TEXT("");
}

UTemplateScoutAsset::UTemplateScoutAsset() {
    this->PoseID = 0;
    this->DataVersion = 0;
    this->LastDataVersion = 22082500;
}

