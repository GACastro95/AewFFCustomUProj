#pragma once
#include "CoreMinimal.h"
#include "EYGS2ErrorType.generated.h"

UENUM(BlueprintType)
enum class EYGS2ErrorType : uint8 {
    NoRequest,
    Requesting,
    Processing,
    Retrying,
    Canceling,
    Analyzing,
    Responed,
    ServerDown,
    Maintenance,
    WrongRequest,
    AccessDenied,
    NeedAuth,
    NeedRetryAuth,
    WrongEnvironment,
    WrongApplication,
    WrongVersion,
    WrongApiVersion,
    NeedRegisterUser,
    AlreadyRegisterd,
    NotFoundUser,
    Conflict,
    InsufficentServerResource,
    WrongInputData,
    NotFoundData,
    DuplicatedData,
    DenyClient,
    DataBroken,
    NetworkError,
    ServerScriptError,
    InternalError,
    FatalError,
    EndRequest,
};

