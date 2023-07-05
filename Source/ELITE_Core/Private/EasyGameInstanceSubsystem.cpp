#include "EasyGameInstanceSubsystem.h"
#include "Templates/SubclassOf.h"

UEasyInstancedHelper* UEasyGameInstanceSubsystem::GetHelperObject(const TSubclassOf<UEasyInstancedHelper> Class) {
    return NULL;
}

UEasyGameInstanceSubsystem::UEasyGameInstanceSubsystem() {
    this->StartupList.AddDefaulted(6);
}

