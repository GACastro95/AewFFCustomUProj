#pragma once
#include "CoreMinimal.h"
#include "ECareerSelectHubMenu.generated.h"

UENUM(BlueprintType)
enum class ECareerSelectHubMenu : uint8 {
    LightWorkout,
    StandardRoutine,
    IntenseTraining,
    Dining,
    HospitalA,
    HospitalB,
    Sightseeing,
    TVTalkShow,
    PressConference,
    MeetGreet,
    Minigame,
    MyWrestler,
    CustomizeWrestler,
    CareerRecords,
    DifficultyEasy,
    DifficultyNormal,
    DifficultyHard,
    DifficultyElite,
    CareerTutorial,
    SnapshotMemories,
    SaveQuit,
    OtherMatchDark,
    OtherMatchRampage,
    ExclamationPoint,
};

