#pragma once
#include "CoreMinimal.h"
#include "YGS2Record_UserItem.h"
#include "YGS2RequestBase.h"
#include "YGS2Req_UserItems.generated.h"

UCLASS(Blueprintable)
class YGS2CLIENT_API UYGS2Req_UserItems : public UYGS2RequestBase {
    GENERATED_BODY()
public:
    UYGS2Req_UserItems();

    UFUNCTION(BlueprintCallable)
    void SetListMode(int32 _sOffset, int32 _sLimit);
    
    UFUNCTION(BlueprintCallable)
    void SetFindMode(int32 _sContentKind, const FString& _strContentID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FYGS2Record_UserItem> Records() const;
    
};

