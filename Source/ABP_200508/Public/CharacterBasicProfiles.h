#pragma once
#include "CoreMinimal.h"
#include "CharacterProfilesBase.h"
#include "CharacterProfilesInterface.h"
#include "CharacterBasicProfiles.generated.h"

UCLASS(Blueprintable)
class UCharacterBasicProfiles : public UCharacterProfilesBase, public ICharacterProfilesInterface {
    GENERATED_BODY()
public:
    UCharacterBasicProfiles();

protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetCharacterNameText_Implementation(const bool bUpper) const;
    

    // Fix for true pure virtual functions not being implemented
};

