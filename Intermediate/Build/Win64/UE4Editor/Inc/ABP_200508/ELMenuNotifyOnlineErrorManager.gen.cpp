// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELMenuNotifyOnlineErrorManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELMenuNotifyOnlineErrorManager() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELMenuNotifyOnlineErrorManager_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELMenuNotifyOnlineErrorManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EELEOSEventType();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EELEOSEventResult();
	ABP_200508_API UClass* Z_Construct_UClass_AELNotifyOnlineError_NoRegister();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_DetactionOfflineState__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UELMenuNotifyOnlineErrorManager::execDebugForceError)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DebugForceError();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMenuNotifyOnlineErrorManager::execEndErrorCheck)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndErrorCheck();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMenuNotifyOnlineErrorManager::execGetOnlineGameMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetOnlineGameMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMenuNotifyOnlineErrorManager::execOnEOSEvent)
	{
		P_GET_ENUM(EELEOSEventType,Z_Param_EventType);
		P_GET_ENUM(EELEOSEventResult,Z_Param_EventResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEOSEvent(EELEOSEventType(Z_Param_EventType),EELEOSEventResult(Z_Param_EventResult));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMenuNotifyOnlineErrorManager::execPauseErrorCheck)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PauseErrorCheck();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMenuNotifyOnlineErrorManager::execSetOnlineGameMode)
	{
		P_GET_UBOOL(Z_Param__value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOnlineGameMode(Z_Param__value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMenuNotifyOnlineErrorManager::execSetup)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Setup();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMenuNotifyOnlineErrorManager::execShutdown)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Shutdown();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMenuNotifyOnlineErrorManager::execStartErrorCheck)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartErrorCheck();
		P_NATIVE_END;
	}
	void UELMenuNotifyOnlineErrorManager::StaticRegisterNativesUELMenuNotifyOnlineErrorManager()
	{
		UClass* Class = UELMenuNotifyOnlineErrorManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DebugForceError", &UELMenuNotifyOnlineErrorManager::execDebugForceError },
			{ "EndErrorCheck", &UELMenuNotifyOnlineErrorManager::execEndErrorCheck },
			{ "GetOnlineGameMode", &UELMenuNotifyOnlineErrorManager::execGetOnlineGameMode },
			{ "OnEOSEvent", &UELMenuNotifyOnlineErrorManager::execOnEOSEvent },
			{ "PauseErrorCheck", &UELMenuNotifyOnlineErrorManager::execPauseErrorCheck },
			{ "SetOnlineGameMode", &UELMenuNotifyOnlineErrorManager::execSetOnlineGameMode },
			{ "Setup", &UELMenuNotifyOnlineErrorManager::execSetup },
			{ "Shutdown", &UELMenuNotifyOnlineErrorManager::execShutdown },
			{ "StartErrorCheck", &UELMenuNotifyOnlineErrorManager::execStartErrorCheck },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELMenuNotifyOnlineErrorManager_DebugForceError_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMenuNotifyOnlineErrorManager_DebugForceError_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMenuNotifyOnlineErrorManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMenuNotifyOnlineErrorManager_DebugForceError_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMenuNotifyOnlineErrorManager, nullptr, "DebugForceError", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMenuNotifyOnlineErrorManager_DebugForceError_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMenuNotifyOnlineErrorManager_DebugForceError_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMenuNotifyOnlineErrorManager_DebugForceError()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMenuNotifyOnlineErrorManager_DebugForceError_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMenuNotifyOnlineErrorManager_EndErrorCheck_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMenuNotifyOnlineErrorManager_EndErrorCheck_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMenuNotifyOnlineErrorManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMenuNotifyOnlineErrorManager_EndErrorCheck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMenuNotifyOnlineErrorManager, nullptr, "EndErrorCheck", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMenuNotifyOnlineErrorManager_EndErrorCheck_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMenuNotifyOnlineErrorManager_EndErrorCheck_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMenuNotifyOnlineErrorManager_EndErrorCheck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMenuNotifyOnlineErrorManager_EndErrorCheck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMenuNotifyOnlineErrorManager_GetOnlineGameMode_Statics
	{
		struct ELMenuNotifyOnlineErrorManager_eventGetOnlineGameMode_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELMenuNotifyOnlineErrorManager_GetOnlineGameMode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELMenuNotifyOnlineErrorManager_eventGetOnlineGameMode_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMenuNotifyOnlineErrorManager_GetOnlineGameMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMenuNotifyOnlineErrorManager_eventGetOnlineGameMode_Parms), &Z_Construct_UFunction_UELMenuNotifyOnlineErrorManager_GetOnlineGameMode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMenuNotifyOnlineErrorManager_GetOnlineGameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMenuNotifyOnlineErrorManager_GetOnlineGameMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMenuNotifyOnlineErrorManager_GetOnlineGameMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMenuNotifyOnlineErrorManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMenuNotifyOnlineErrorManager_GetOnlineGameMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMenuNotifyOnlineErrorManager, nullptr, "GetOnlineGameMode", nullptr, nullptr, sizeof(ELMenuNotifyOnlineErrorManager_eventGetOnlineGameMode_Parms), Z_Construct_UFunction_UELMenuNotifyOnlineErrorManager_GetOnlineGameMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMenuNotifyOnlineErrorManager_GetOnlineGameMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMenuNotifyOnlineErrorManager_GetOnlineGameMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMenuNotifyOnlineErrorManager_GetOnlineGameMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMenuNotifyOnlineErrorManager_GetOnlineGameMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMenuNotifyOnlineErrorManager_GetOnlineGameMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMenuNotifyOnlineErrorManager_OnEOSEvent_Statics
	{
		struct ELMenuNotifyOnlineErrorManager_eventOnEOSEvent_Parms
		{
			EELEOSEventType EventType;
			EELEOSEventResult EventResult;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EventType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EventType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EventResult_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EventResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELMenuNotifyOnlineErrorManager_OnEOSEvent_Statics::NewProp_EventType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELMenuNotifyOnlineErrorManager_OnEOSEvent_Statics::NewProp_EventType = { "EventType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMenuNotifyOnlineErrorManager_eventOnEOSEvent_Parms, EventType), Z_Construct_UEnum_ABP_200508_EELEOSEventType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELMenuNotifyOnlineErrorManager_OnEOSEvent_Statics::NewProp_EventResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELMenuNotifyOnlineErrorManager_OnEOSEvent_Statics::NewProp_EventResult = { "EventResult", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMenuNotifyOnlineErrorManager_eventOnEOSEvent_Parms, EventResult), Z_Construct_UEnum_ABP_200508_EELEOSEventResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMenuNotifyOnlineErrorManager_OnEOSEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMenuNotifyOnlineErrorManager_OnEOSEvent_Statics::NewProp_EventType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMenuNotifyOnlineErrorManager_OnEOSEvent_Statics::NewProp_EventType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMenuNotifyOnlineErrorManager_OnEOSEvent_Statics::NewProp_EventResult_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMenuNotifyOnlineErrorManager_OnEOSEvent_Statics::NewProp_EventResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMenuNotifyOnlineErrorManager_OnEOSEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMenuNotifyOnlineErrorManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMenuNotifyOnlineErrorManager_OnEOSEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMenuNotifyOnlineErrorManager, nullptr, "OnEOSEvent", nullptr, nullptr, sizeof(ELMenuNotifyOnlineErrorManager_eventOnEOSEvent_Parms), Z_Construct_UFunction_UELMenuNotifyOnlineErrorManager_OnEOSEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMenuNotifyOnlineErrorManager_OnEOSEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMenuNotifyOnlineErrorManager_OnEOSEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMenuNotifyOnlineErrorManager_OnEOSEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMenuNotifyOnlineErrorManager_OnEOSEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMenuNotifyOnlineErrorManager_OnEOSEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMenuNotifyOnlineErrorManager_PauseErrorCheck_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMenuNotifyOnlineErrorManager_PauseErrorCheck_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMenuNotifyOnlineErrorManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMenuNotifyOnlineErrorManager_PauseErrorCheck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMenuNotifyOnlineErrorManager, nullptr, "PauseErrorCheck", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMenuNotifyOnlineErrorManager_PauseErrorCheck_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMenuNotifyOnlineErrorManager_PauseErrorCheck_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMenuNotifyOnlineErrorManager_PauseErrorCheck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMenuNotifyOnlineErrorManager_PauseErrorCheck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMenuNotifyOnlineErrorManager_SetOnlineGameMode_Statics
	{
		struct ELMenuNotifyOnlineErrorManager_eventSetOnlineGameMode_Parms
		{
			bool _value;
		};
		static void NewProp__value_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELMenuNotifyOnlineErrorManager_SetOnlineGameMode_Statics::NewProp__value_SetBit(void* Obj)
	{
		((ELMenuNotifyOnlineErrorManager_eventSetOnlineGameMode_Parms*)Obj)->_value = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMenuNotifyOnlineErrorManager_SetOnlineGameMode_Statics::NewProp__value = { "_value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMenuNotifyOnlineErrorManager_eventSetOnlineGameMode_Parms), &Z_Construct_UFunction_UELMenuNotifyOnlineErrorManager_SetOnlineGameMode_Statics::NewProp__value_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMenuNotifyOnlineErrorManager_SetOnlineGameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMenuNotifyOnlineErrorManager_SetOnlineGameMode_Statics::NewProp__value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMenuNotifyOnlineErrorManager_SetOnlineGameMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMenuNotifyOnlineErrorManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMenuNotifyOnlineErrorManager_SetOnlineGameMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMenuNotifyOnlineErrorManager, nullptr, "SetOnlineGameMode", nullptr, nullptr, sizeof(ELMenuNotifyOnlineErrorManager_eventSetOnlineGameMode_Parms), Z_Construct_UFunction_UELMenuNotifyOnlineErrorManager_SetOnlineGameMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMenuNotifyOnlineErrorManager_SetOnlineGameMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMenuNotifyOnlineErrorManager_SetOnlineGameMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMenuNotifyOnlineErrorManager_SetOnlineGameMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMenuNotifyOnlineErrorManager_SetOnlineGameMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMenuNotifyOnlineErrorManager_SetOnlineGameMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMenuNotifyOnlineErrorManager_Setup_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMenuNotifyOnlineErrorManager_Setup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMenuNotifyOnlineErrorManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMenuNotifyOnlineErrorManager_Setup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMenuNotifyOnlineErrorManager, nullptr, "Setup", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMenuNotifyOnlineErrorManager_Setup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMenuNotifyOnlineErrorManager_Setup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMenuNotifyOnlineErrorManager_Setup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMenuNotifyOnlineErrorManager_Setup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMenuNotifyOnlineErrorManager_Shutdown_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMenuNotifyOnlineErrorManager_Shutdown_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMenuNotifyOnlineErrorManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMenuNotifyOnlineErrorManager_Shutdown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMenuNotifyOnlineErrorManager, nullptr, "Shutdown", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMenuNotifyOnlineErrorManager_Shutdown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMenuNotifyOnlineErrorManager_Shutdown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMenuNotifyOnlineErrorManager_Shutdown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMenuNotifyOnlineErrorManager_Shutdown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMenuNotifyOnlineErrorManager_StartErrorCheck_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMenuNotifyOnlineErrorManager_StartErrorCheck_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMenuNotifyOnlineErrorManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMenuNotifyOnlineErrorManager_StartErrorCheck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMenuNotifyOnlineErrorManager, nullptr, "StartErrorCheck", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMenuNotifyOnlineErrorManager_StartErrorCheck_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMenuNotifyOnlineErrorManager_StartErrorCheck_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMenuNotifyOnlineErrorManager_StartErrorCheck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMenuNotifyOnlineErrorManager_StartErrorCheck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELMenuNotifyOnlineErrorManager_NoRegister()
	{
		return UELMenuNotifyOnlineErrorManager::StaticClass();
	}
	struct Z_Construct_UClass_UELMenuNotifyOnlineErrorManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_bInitialized_MetaData[];
#endif
		static void NewProp_m_bInitialized_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_m_bInitialized;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_bPausedErrorCheck_MetaData[];
#endif
		static void NewProp_m_bPausedErrorCheck_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_m_bPausedErrorCheck;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_bOnlineGameMode_MetaData[];
#endif
		static void NewProp_m_bOnlineGameMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_m_bOnlineGameMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_NotifyOnlineErrorActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_NotifyOnlineErrorActor;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_m_ReserveErrorType_Inner_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_m_ReserveErrorType_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_ReserveErrorType_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_m_ReserveErrorType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnDetactionOfflineStateDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDetactionOfflineStateDelegate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELMenuNotifyOnlineErrorManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELMenuNotifyOnlineErrorManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELMenuNotifyOnlineErrorManager_DebugForceError, "DebugForceError" }, // 929816465
		{ &Z_Construct_UFunction_UELMenuNotifyOnlineErrorManager_EndErrorCheck, "EndErrorCheck" }, // 1356817871
		{ &Z_Construct_UFunction_UELMenuNotifyOnlineErrorManager_GetOnlineGameMode, "GetOnlineGameMode" }, // 2732475833
		{ &Z_Construct_UFunction_UELMenuNotifyOnlineErrorManager_OnEOSEvent, "OnEOSEvent" }, // 3070953720
		{ &Z_Construct_UFunction_UELMenuNotifyOnlineErrorManager_PauseErrorCheck, "PauseErrorCheck" }, // 2345081175
		{ &Z_Construct_UFunction_UELMenuNotifyOnlineErrorManager_SetOnlineGameMode, "SetOnlineGameMode" }, // 798586514
		{ &Z_Construct_UFunction_UELMenuNotifyOnlineErrorManager_Setup, "Setup" }, // 647299779
		{ &Z_Construct_UFunction_UELMenuNotifyOnlineErrorManager_Shutdown, "Shutdown" }, // 1843883152
		{ &Z_Construct_UFunction_UELMenuNotifyOnlineErrorManager_StartErrorCheck, "StartErrorCheck" }, // 2744273376
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELMenuNotifyOnlineErrorManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELMenuNotifyOnlineErrorManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELMenuNotifyOnlineErrorManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELMenuNotifyOnlineErrorManager_Statics::NewProp_m_bInitialized_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMenuNotifyOnlineErrorManager" },
		{ "ModuleRelativePath", "Public/ELMenuNotifyOnlineErrorManager.h" },
	};
#endif
	void Z_Construct_UClass_UELMenuNotifyOnlineErrorManager_Statics::NewProp_m_bInitialized_SetBit(void* Obj)
	{
		((UELMenuNotifyOnlineErrorManager*)Obj)->m_bInitialized = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELMenuNotifyOnlineErrorManager_Statics::NewProp_m_bInitialized = { "m_bInitialized", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELMenuNotifyOnlineErrorManager), &Z_Construct_UClass_UELMenuNotifyOnlineErrorManager_Statics::NewProp_m_bInitialized_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELMenuNotifyOnlineErrorManager_Statics::NewProp_m_bInitialized_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELMenuNotifyOnlineErrorManager_Statics::NewProp_m_bInitialized_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELMenuNotifyOnlineErrorManager_Statics::NewProp_m_bPausedErrorCheck_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMenuNotifyOnlineErrorManager" },
		{ "ModuleRelativePath", "Public/ELMenuNotifyOnlineErrorManager.h" },
	};
#endif
	void Z_Construct_UClass_UELMenuNotifyOnlineErrorManager_Statics::NewProp_m_bPausedErrorCheck_SetBit(void* Obj)
	{
		((UELMenuNotifyOnlineErrorManager*)Obj)->m_bPausedErrorCheck = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELMenuNotifyOnlineErrorManager_Statics::NewProp_m_bPausedErrorCheck = { "m_bPausedErrorCheck", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELMenuNotifyOnlineErrorManager), &Z_Construct_UClass_UELMenuNotifyOnlineErrorManager_Statics::NewProp_m_bPausedErrorCheck_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELMenuNotifyOnlineErrorManager_Statics::NewProp_m_bPausedErrorCheck_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELMenuNotifyOnlineErrorManager_Statics::NewProp_m_bPausedErrorCheck_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELMenuNotifyOnlineErrorManager_Statics::NewProp_m_bOnlineGameMode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMenuNotifyOnlineErrorManager" },
		{ "ModuleRelativePath", "Public/ELMenuNotifyOnlineErrorManager.h" },
	};
#endif
	void Z_Construct_UClass_UELMenuNotifyOnlineErrorManager_Statics::NewProp_m_bOnlineGameMode_SetBit(void* Obj)
	{
		((UELMenuNotifyOnlineErrorManager*)Obj)->m_bOnlineGameMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELMenuNotifyOnlineErrorManager_Statics::NewProp_m_bOnlineGameMode = { "m_bOnlineGameMode", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELMenuNotifyOnlineErrorManager), &Z_Construct_UClass_UELMenuNotifyOnlineErrorManager_Statics::NewProp_m_bOnlineGameMode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELMenuNotifyOnlineErrorManager_Statics::NewProp_m_bOnlineGameMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELMenuNotifyOnlineErrorManager_Statics::NewProp_m_bOnlineGameMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELMenuNotifyOnlineErrorManager_Statics::NewProp_m_NotifyOnlineErrorActor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMenuNotifyOnlineErrorManager" },
		{ "ModuleRelativePath", "Public/ELMenuNotifyOnlineErrorManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELMenuNotifyOnlineErrorManager_Statics::NewProp_m_NotifyOnlineErrorActor = { "m_NotifyOnlineErrorActor", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELMenuNotifyOnlineErrorManager, m_NotifyOnlineErrorActor), Z_Construct_UClass_AELNotifyOnlineError_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELMenuNotifyOnlineErrorManager_Statics::NewProp_m_NotifyOnlineErrorActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELMenuNotifyOnlineErrorManager_Statics::NewProp_m_NotifyOnlineErrorActor_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UELMenuNotifyOnlineErrorManager_Statics::NewProp_m_ReserveErrorType_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UELMenuNotifyOnlineErrorManager_Statics::NewProp_m_ReserveErrorType_Inner = { "m_ReserveErrorType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_ABP_200508_EELEOSEventType, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELMenuNotifyOnlineErrorManager_Statics::NewProp_m_ReserveErrorType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMenuNotifyOnlineErrorManager" },
		{ "ModuleRelativePath", "Public/ELMenuNotifyOnlineErrorManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELMenuNotifyOnlineErrorManager_Statics::NewProp_m_ReserveErrorType = { "m_ReserveErrorType", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELMenuNotifyOnlineErrorManager, m_ReserveErrorType), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELMenuNotifyOnlineErrorManager_Statics::NewProp_m_ReserveErrorType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELMenuNotifyOnlineErrorManager_Statics::NewProp_m_ReserveErrorType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELMenuNotifyOnlineErrorManager_Statics::NewProp_OnDetactionOfflineStateDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMenuNotifyOnlineErrorManager" },
		{ "ModuleRelativePath", "Public/ELMenuNotifyOnlineErrorManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UELMenuNotifyOnlineErrorManager_Statics::NewProp_OnDetactionOfflineStateDelegate = { "OnDetactionOfflineStateDelegate", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELMenuNotifyOnlineErrorManager, OnDetactionOfflineStateDelegate), Z_Construct_UDelegateFunction_ABP_200508_DetactionOfflineState__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UELMenuNotifyOnlineErrorManager_Statics::NewProp_OnDetactionOfflineStateDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELMenuNotifyOnlineErrorManager_Statics::NewProp_OnDetactionOfflineStateDelegate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELMenuNotifyOnlineErrorManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELMenuNotifyOnlineErrorManager_Statics::NewProp_m_bInitialized,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELMenuNotifyOnlineErrorManager_Statics::NewProp_m_bPausedErrorCheck,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELMenuNotifyOnlineErrorManager_Statics::NewProp_m_bOnlineGameMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELMenuNotifyOnlineErrorManager_Statics::NewProp_m_NotifyOnlineErrorActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELMenuNotifyOnlineErrorManager_Statics::NewProp_m_ReserveErrorType_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELMenuNotifyOnlineErrorManager_Statics::NewProp_m_ReserveErrorType_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELMenuNotifyOnlineErrorManager_Statics::NewProp_m_ReserveErrorType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELMenuNotifyOnlineErrorManager_Statics::NewProp_OnDetactionOfflineStateDelegate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELMenuNotifyOnlineErrorManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELMenuNotifyOnlineErrorManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELMenuNotifyOnlineErrorManager_Statics::ClassParams = {
		&UELMenuNotifyOnlineErrorManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELMenuNotifyOnlineErrorManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELMenuNotifyOnlineErrorManager_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELMenuNotifyOnlineErrorManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELMenuNotifyOnlineErrorManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELMenuNotifyOnlineErrorManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELMenuNotifyOnlineErrorManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELMenuNotifyOnlineErrorManager, 594917916);
	template<> ABP_200508_API UClass* StaticClass<UELMenuNotifyOnlineErrorManager>()
	{
		return UELMenuNotifyOnlineErrorManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELMenuNotifyOnlineErrorManager(Z_Construct_UClass_UELMenuNotifyOnlineErrorManager, &UELMenuNotifyOnlineErrorManager::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELMenuNotifyOnlineErrorManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELMenuNotifyOnlineErrorManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
