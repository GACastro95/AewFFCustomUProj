#pragma once
#include "CoreMinimal.h"
#include "ESaveData_DebugSelectedCommandType.generated.h"

UENUM(BlueprintType)
enum class ESaveData_DebugSelectedCommandType : uint8 {
    None,
    NeedLogin,
    ShowListAll,
    ShowList,
    ShowOnlineList,
    ShowTitleList,
    ExportAll,
    Import,
    ExportTextAll,
    Export,
    ExportText,
    Upload,
    Download,
    Download_Title,
    Delete,
    DeleteOnlineData,
    Create,
    ClearLog,
    CloseTab,
    CloseResultWindow,
    ExportAllOnTab,
    ExportTextAllOnTab,
    DataReset,
    Max,
};

