#include "ELBuildBody.h"

UELBuildBody::UELBuildBody(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bFixBone = false;
    this->MeshScale = 1.00f;
    this->bFixRootNode = false;
    this->HipCurve0 = NULL;
    this->HipCurve1 = NULL;
    this->Spine1Curve0 = NULL;
    this->Spine1Curve1 = NULL;
    this->ShoulderCurve0 = NULL;
    this->ShoulderCurve1 = NULL;
    this->LegCurve0 = NULL;
    this->LegCurve1 = NULL;
    this->FootWareOffset_Male = -2.00f;
    this->FootWareOffset_Female = -2.50f;
}

void UELBuildBody::SetupBuildBody(const FEditBodyParam& InParam, const EGender Gender, const bool bFootWearOffset) {
}

void UELBuildBody::Reset() {
}

float UELBuildBody::GetHeightRatio(int32 InBodyParamHeight) {
    return 0.0f;
}

FBaseBodyTypeParam UELBuildBody::GetBodyTypeParam(const EGender Gender, const EBodyType BodyType) {
    return FBaseBodyTypeParam{};
}


