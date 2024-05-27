#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ELEOSFriendUserData.generated.h"

UCLASS(Blueprintable)
class UELEOSFriendUserData : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> PlayerIconIDs;
    
public:
    UELEOSFriendUserData();

};

