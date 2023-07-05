#include "TemplateScoutComponent.h"

void UTemplateScoutComponent::GetScoutTemplateList(TArray<FTemplateScoutParam>& List, const EGender Gender) {
}

UTemplateScoutComponent::UTemplateScoutComponent() {
    this->TemplateListAsset_Male = NULL;
    this->TemplateListAsset_Female = NULL;
}

