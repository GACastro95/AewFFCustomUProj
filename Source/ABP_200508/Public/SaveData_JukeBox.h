#pragma once
#include "CoreMinimal.h"
#include "ELSaveGameBase.h"
#include "SaveData_JukeBox.generated.h"

UCLASS(Blueprintable)
class USaveData_JukeBox : public UELSaveGameBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_sEnableJukeBoxArray[512];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_sJukeBoxPlayedListArray[512];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_sJukeBoxPlaylistSortNumArray[512];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bRandomPlayback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bCreateSavedata;
    
    USaveData_JukeBox();
};

