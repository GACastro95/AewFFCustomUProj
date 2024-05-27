#include "SingletonBase.h"
#include "Templates/SubclassOf.h"

USingletonBase::USingletonBase() {
    this->bTickableWhenPaused = false;
    this->bTickableInEditor = false;
    this->LaunchType = ESingletonLaunchType::GameOnly;
}

void USingletonBase::SetWorldContextObject(UObject* Object) {
}





USingletonBase* USingletonBase::GetInstance(TSubclassOf<USingletonBase> Class) {
    return NULL;
}

void USingletonBase::Destroy() {
}


