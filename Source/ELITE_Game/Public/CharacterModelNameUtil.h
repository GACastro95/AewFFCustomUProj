#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CharacterModelName.h"
#include "ELWrestlerMeshParam.h"
#include "CharacterModelNameUtil.generated.h"

UCLASS(Blueprintable)
class ELITE_GAME_API UCharacterModelNameUtil : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UCharacterModelNameUtil();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsValid(const FCharacterModelName& Name);
    
    UFUNCTION(BlueprintCallable)
    static void GetData(const FCharacterModelName& ModelName, bool& bFind, FELWrestlerMeshParam& Param);
    
};

