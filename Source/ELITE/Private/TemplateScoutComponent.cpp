#include "TemplateScoutComponent.h"

UTemplateScoutComponent::UTemplateScoutComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TemplateListAsset_Male = NULL;
    this->TemplateListAsset_Female = NULL;
}

void UTemplateScoutComponent::GetScoutTemplateList(TArray<FTemplateScoutParam>& List, const EGender Gender) {
}


