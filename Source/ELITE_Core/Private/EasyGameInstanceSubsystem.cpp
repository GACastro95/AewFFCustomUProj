#include "EasyGameInstanceSubsystem.h"
#include "Templates/SubclassOf.h"

UEasyGameInstanceSubsystem::UEasyGameInstanceSubsystem() {
    this->StartupList.AddDefaulted(6);
}

UEasyInstancedHelper* UEasyGameInstanceSubsystem::GetHelperObject(const TSubclassOf<UEasyInstancedHelper> Class) {
    return NULL;
}


