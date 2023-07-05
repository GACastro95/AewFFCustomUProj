#pragma once
#include "CoreMinimal.h"
#include "BugReportSettings.h"
#include "YDebugMenuRootBase.h"
#include "YDebugMenuForBugReport.generated.h"

class UYDebugMenuForBugReport;

UCLASS(Blueprintable)
class YDEBUG_API UYDebugMenuForBugReport : public UYDebugMenuRootBase {
    GENERATED_BODY()
public:
    UYDebugMenuForBugReport();
    UFUNCTION(BlueprintCallable)
    void Setup(const FBugReportSettings& _stSettings);
    
    UFUNCTION(BlueprintCallable)
    static bool CreateYDebugMenuForBugReport(UYDebugMenuForBugReport*& _pcDebugMenuForBugReport);
    
};

