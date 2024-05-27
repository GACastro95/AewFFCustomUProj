#include "ELHoldComponent.h"

UELHoldComponent::UELHoldComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanPutOnHand = true;
    this->bCanPutOnFoot = true;
}


