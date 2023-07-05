#pragma once
#include "CoreMinimal.h"
#include "CommonObject.h"
#include "CharacterProfilesBase.generated.h"

class AELCharacter_Native;

UCLASS(Abstract, Blueprintable)
class UCharacterProfilesBase : public UCommonObject {
    GENERATED_BODY()
public:
    UCharacterProfilesBase();
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AELCharacter_Native* GetOwner() const;
    
};

