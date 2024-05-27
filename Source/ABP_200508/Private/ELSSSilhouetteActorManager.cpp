#include "ELSSSilhouetteActorManager.h"

AELSSSilhouetteActorManager::AELSSSilhouetteActorManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OwnerPlayer = NULL;
    this->SilhouetteActorClass = NULL;
}


