// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELNetGameState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELNetGameState() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELNetGameState_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELNetGameState();
	ENGINE_API UClass* Z_Construct_UClass_AGameState();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELNetworkGUID();
	ABP_200508_API UClass* Z_Construct_UClass_UELReplicationManager_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EELNetRole();
	ABP_200508_API UClass* Z_Construct_UClass_UELReplicationComponent_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELNetObjectInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AELNetGameState::execGetNextReplicationGuid)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FELNetworkGUID*)Z_Param__Result=P_THIS->GetNextReplicationGuid();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELNetGameState::execGetRealDeltaTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetRealDeltaTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELNetGameState::execGetReplicationManager)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UELReplicationManager**)Z_Param__Result=P_THIS->GetReplicationManager();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELNetGameState::execGetScaledRealDeltaTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetScaledRealDeltaTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELNetGameState::execGetWorldRealTimeSecondsFromStart)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetWorldRealTimeSecondsFromStart();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELNetGameState::execGetWorldTimeSecondsFromStart)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetWorldTimeSecondsFromStart();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELNetGameState::execHasELNetAuthorityBP)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasELNetAuthorityBP();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELNetGameState::execHasELNetExecAuthorityBP)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasELNetExecAuthorityBP();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELNetGameState::execInitializeWorldTimeSeconds)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeWorldTimeSeconds();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELNetGameState::execIsInELNetModeBP)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsInELNetModeBP();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELNetGameState::execSetELNetAuthorityBP)
	{
		P_GET_UBOOL(Z_Param_bEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetELNetAuthorityBP(Z_Param_bEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELNetGameState::execSetELNetModeBP)
	{
		P_GET_UBOOL(Z_Param_bEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetELNetModeBP(Z_Param_bEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELNetGameState::execSetELNetTemporaryAuthorityBP)
	{
		P_GET_UBOOL(Z_Param_bEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetELNetTemporaryAuthorityBP(Z_Param_bEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELNetGameState::execSetNetActorTickOrder)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNetActorTickOrder(Z_Param_Actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELNetGameState::execSetUseFixedFrameRate)
	{
		P_GET_UBOOL(Z_Param_bUseFixedFrameRate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetUseFixedFrameRate(Z_Param_bUseFixedFrameRate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELNetGameState::execToggleUseFixedFrameRate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ToggleUseFixedFrameRate();
		P_NATIVE_END;
	}
	void AELNetGameState::StaticRegisterNativesAELNetGameState()
	{
		UClass* Class = AELNetGameState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetNextReplicationGuid", &AELNetGameState::execGetNextReplicationGuid },
			{ "GetRealDeltaTime", &AELNetGameState::execGetRealDeltaTime },
			{ "GetReplicationManager", &AELNetGameState::execGetReplicationManager },
			{ "GetScaledRealDeltaTime", &AELNetGameState::execGetScaledRealDeltaTime },
			{ "GetWorldRealTimeSecondsFromStart", &AELNetGameState::execGetWorldRealTimeSecondsFromStart },
			{ "GetWorldTimeSecondsFromStart", &AELNetGameState::execGetWorldTimeSecondsFromStart },
			{ "HasELNetAuthorityBP", &AELNetGameState::execHasELNetAuthorityBP },
			{ "HasELNetExecAuthorityBP", &AELNetGameState::execHasELNetExecAuthorityBP },
			{ "InitializeWorldTimeSeconds", &AELNetGameState::execInitializeWorldTimeSeconds },
			{ "IsInELNetModeBP", &AELNetGameState::execIsInELNetModeBP },
			{ "SetELNetAuthorityBP", &AELNetGameState::execSetELNetAuthorityBP },
			{ "SetELNetModeBP", &AELNetGameState::execSetELNetModeBP },
			{ "SetELNetTemporaryAuthorityBP", &AELNetGameState::execSetELNetTemporaryAuthorityBP },
			{ "SetNetActorTickOrder", &AELNetGameState::execSetNetActorTickOrder },
			{ "SetUseFixedFrameRate", &AELNetGameState::execSetUseFixedFrameRate },
			{ "ToggleUseFixedFrameRate", &AELNetGameState::execToggleUseFixedFrameRate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AELNetGameState_GetNextReplicationGuid_Statics
	{
		struct ELNetGameState_eventGetNextReplicationGuid_Parms
		{
			FELNetworkGUID ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELNetGameState_GetNextReplicationGuid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELNetGameState_eventGetNextReplicationGuid_Parms, ReturnValue), Z_Construct_UScriptStruct_FELNetworkGUID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELNetGameState_GetNextReplicationGuid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELNetGameState_GetNextReplicationGuid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELNetGameState_GetNextReplicationGuid_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELNetGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELNetGameState_GetNextReplicationGuid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELNetGameState, nullptr, "GetNextReplicationGuid", nullptr, nullptr, sizeof(ELNetGameState_eventGetNextReplicationGuid_Parms), Z_Construct_UFunction_AELNetGameState_GetNextReplicationGuid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNetGameState_GetNextReplicationGuid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELNetGameState_GetNextReplicationGuid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNetGameState_GetNextReplicationGuid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELNetGameState_GetNextReplicationGuid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELNetGameState_GetNextReplicationGuid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELNetGameState_GetRealDeltaTime_Statics
	{
		struct ELNetGameState_eventGetRealDeltaTime_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELNetGameState_GetRealDeltaTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELNetGameState_eventGetRealDeltaTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELNetGameState_GetRealDeltaTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELNetGameState_GetRealDeltaTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELNetGameState_GetRealDeltaTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELNetGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELNetGameState_GetRealDeltaTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELNetGameState, nullptr, "GetRealDeltaTime", nullptr, nullptr, sizeof(ELNetGameState_eventGetRealDeltaTime_Parms), Z_Construct_UFunction_AELNetGameState_GetRealDeltaTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNetGameState_GetRealDeltaTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELNetGameState_GetRealDeltaTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNetGameState_GetRealDeltaTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELNetGameState_GetRealDeltaTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELNetGameState_GetRealDeltaTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELNetGameState_GetReplicationManager_Statics
	{
		struct ELNetGameState_eventGetReplicationManager_Parms
		{
			UELReplicationManager* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELNetGameState_GetReplicationManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELNetGameState_eventGetReplicationManager_Parms, ReturnValue), Z_Construct_UClass_UELReplicationManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELNetGameState_GetReplicationManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELNetGameState_GetReplicationManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELNetGameState_GetReplicationManager_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELNetGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELNetGameState_GetReplicationManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELNetGameState, nullptr, "GetReplicationManager", nullptr, nullptr, sizeof(ELNetGameState_eventGetReplicationManager_Parms), Z_Construct_UFunction_AELNetGameState_GetReplicationManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNetGameState_GetReplicationManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELNetGameState_GetReplicationManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNetGameState_GetReplicationManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELNetGameState_GetReplicationManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELNetGameState_GetReplicationManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELNetGameState_GetScaledRealDeltaTime_Statics
	{
		struct ELNetGameState_eventGetScaledRealDeltaTime_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELNetGameState_GetScaledRealDeltaTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELNetGameState_eventGetScaledRealDeltaTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELNetGameState_GetScaledRealDeltaTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELNetGameState_GetScaledRealDeltaTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELNetGameState_GetScaledRealDeltaTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELNetGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELNetGameState_GetScaledRealDeltaTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELNetGameState, nullptr, "GetScaledRealDeltaTime", nullptr, nullptr, sizeof(ELNetGameState_eventGetScaledRealDeltaTime_Parms), Z_Construct_UFunction_AELNetGameState_GetScaledRealDeltaTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNetGameState_GetScaledRealDeltaTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELNetGameState_GetScaledRealDeltaTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNetGameState_GetScaledRealDeltaTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELNetGameState_GetScaledRealDeltaTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELNetGameState_GetScaledRealDeltaTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELNetGameState_GetWorldRealTimeSecondsFromStart_Statics
	{
		struct ELNetGameState_eventGetWorldRealTimeSecondsFromStart_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELNetGameState_GetWorldRealTimeSecondsFromStart_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELNetGameState_eventGetWorldRealTimeSecondsFromStart_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELNetGameState_GetWorldRealTimeSecondsFromStart_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELNetGameState_GetWorldRealTimeSecondsFromStart_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELNetGameState_GetWorldRealTimeSecondsFromStart_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELNetGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELNetGameState_GetWorldRealTimeSecondsFromStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELNetGameState, nullptr, "GetWorldRealTimeSecondsFromStart", nullptr, nullptr, sizeof(ELNetGameState_eventGetWorldRealTimeSecondsFromStart_Parms), Z_Construct_UFunction_AELNetGameState_GetWorldRealTimeSecondsFromStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNetGameState_GetWorldRealTimeSecondsFromStart_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELNetGameState_GetWorldRealTimeSecondsFromStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNetGameState_GetWorldRealTimeSecondsFromStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELNetGameState_GetWorldRealTimeSecondsFromStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELNetGameState_GetWorldRealTimeSecondsFromStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELNetGameState_GetWorldTimeSecondsFromStart_Statics
	{
		struct ELNetGameState_eventGetWorldTimeSecondsFromStart_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELNetGameState_GetWorldTimeSecondsFromStart_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELNetGameState_eventGetWorldTimeSecondsFromStart_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELNetGameState_GetWorldTimeSecondsFromStart_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELNetGameState_GetWorldTimeSecondsFromStart_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELNetGameState_GetWorldTimeSecondsFromStart_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELNetGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELNetGameState_GetWorldTimeSecondsFromStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELNetGameState, nullptr, "GetWorldTimeSecondsFromStart", nullptr, nullptr, sizeof(ELNetGameState_eventGetWorldTimeSecondsFromStart_Parms), Z_Construct_UFunction_AELNetGameState_GetWorldTimeSecondsFromStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNetGameState_GetWorldTimeSecondsFromStart_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELNetGameState_GetWorldTimeSecondsFromStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNetGameState_GetWorldTimeSecondsFromStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELNetGameState_GetWorldTimeSecondsFromStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELNetGameState_GetWorldTimeSecondsFromStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELNetGameState_HasELNetAuthorityBP_Statics
	{
		struct ELNetGameState_eventHasELNetAuthorityBP_Parms
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
	void Z_Construct_UFunction_AELNetGameState_HasELNetAuthorityBP_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELNetGameState_eventHasELNetAuthorityBP_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELNetGameState_HasELNetAuthorityBP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELNetGameState_eventHasELNetAuthorityBP_Parms), &Z_Construct_UFunction_AELNetGameState_HasELNetAuthorityBP_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELNetGameState_HasELNetAuthorityBP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELNetGameState_HasELNetAuthorityBP_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELNetGameState_HasELNetAuthorityBP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELNetGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELNetGameState_HasELNetAuthorityBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELNetGameState, nullptr, "HasELNetAuthorityBP", nullptr, nullptr, sizeof(ELNetGameState_eventHasELNetAuthorityBP_Parms), Z_Construct_UFunction_AELNetGameState_HasELNetAuthorityBP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNetGameState_HasELNetAuthorityBP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELNetGameState_HasELNetAuthorityBP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNetGameState_HasELNetAuthorityBP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELNetGameState_HasELNetAuthorityBP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELNetGameState_HasELNetAuthorityBP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELNetGameState_HasELNetExecAuthorityBP_Statics
	{
		struct ELNetGameState_eventHasELNetExecAuthorityBP_Parms
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
	void Z_Construct_UFunction_AELNetGameState_HasELNetExecAuthorityBP_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELNetGameState_eventHasELNetExecAuthorityBP_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELNetGameState_HasELNetExecAuthorityBP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELNetGameState_eventHasELNetExecAuthorityBP_Parms), &Z_Construct_UFunction_AELNetGameState_HasELNetExecAuthorityBP_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELNetGameState_HasELNetExecAuthorityBP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELNetGameState_HasELNetExecAuthorityBP_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELNetGameState_HasELNetExecAuthorityBP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELNetGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELNetGameState_HasELNetExecAuthorityBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELNetGameState, nullptr, "HasELNetExecAuthorityBP", nullptr, nullptr, sizeof(ELNetGameState_eventHasELNetExecAuthorityBP_Parms), Z_Construct_UFunction_AELNetGameState_HasELNetExecAuthorityBP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNetGameState_HasELNetExecAuthorityBP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELNetGameState_HasELNetExecAuthorityBP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNetGameState_HasELNetExecAuthorityBP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELNetGameState_HasELNetExecAuthorityBP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELNetGameState_HasELNetExecAuthorityBP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELNetGameState_InitializeWorldTimeSeconds_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELNetGameState_InitializeWorldTimeSeconds_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELNetGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELNetGameState_InitializeWorldTimeSeconds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELNetGameState, nullptr, "InitializeWorldTimeSeconds", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELNetGameState_InitializeWorldTimeSeconds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNetGameState_InitializeWorldTimeSeconds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELNetGameState_InitializeWorldTimeSeconds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELNetGameState_InitializeWorldTimeSeconds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELNetGameState_IsInELNetModeBP_Statics
	{
		struct ELNetGameState_eventIsInELNetModeBP_Parms
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
	void Z_Construct_UFunction_AELNetGameState_IsInELNetModeBP_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELNetGameState_eventIsInELNetModeBP_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELNetGameState_IsInELNetModeBP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELNetGameState_eventIsInELNetModeBP_Parms), &Z_Construct_UFunction_AELNetGameState_IsInELNetModeBP_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELNetGameState_IsInELNetModeBP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELNetGameState_IsInELNetModeBP_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELNetGameState_IsInELNetModeBP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELNetGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELNetGameState_IsInELNetModeBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELNetGameState, nullptr, "IsInELNetModeBP", nullptr, nullptr, sizeof(ELNetGameState_eventIsInELNetModeBP_Parms), Z_Construct_UFunction_AELNetGameState_IsInELNetModeBP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNetGameState_IsInELNetModeBP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELNetGameState_IsInELNetModeBP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNetGameState_IsInELNetModeBP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELNetGameState_IsInELNetModeBP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELNetGameState_IsInELNetModeBP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELNetGameState_SetELNetAuthorityBP_Statics
	{
		struct ELNetGameState_eventSetELNetAuthorityBP_Parms
		{
			bool bEnabled;
		};
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELNetGameState_SetELNetAuthorityBP_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((ELNetGameState_eventSetELNetAuthorityBP_Parms*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELNetGameState_SetELNetAuthorityBP_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELNetGameState_eventSetELNetAuthorityBP_Parms), &Z_Construct_UFunction_AELNetGameState_SetELNetAuthorityBP_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELNetGameState_SetELNetAuthorityBP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELNetGameState_SetELNetAuthorityBP_Statics::NewProp_bEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELNetGameState_SetELNetAuthorityBP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELNetGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELNetGameState_SetELNetAuthorityBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELNetGameState, nullptr, "SetELNetAuthorityBP", nullptr, nullptr, sizeof(ELNetGameState_eventSetELNetAuthorityBP_Parms), Z_Construct_UFunction_AELNetGameState_SetELNetAuthorityBP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNetGameState_SetELNetAuthorityBP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELNetGameState_SetELNetAuthorityBP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNetGameState_SetELNetAuthorityBP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELNetGameState_SetELNetAuthorityBP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELNetGameState_SetELNetAuthorityBP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELNetGameState_SetELNetModeBP_Statics
	{
		struct ELNetGameState_eventSetELNetModeBP_Parms
		{
			bool bEnabled;
		};
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELNetGameState_SetELNetModeBP_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((ELNetGameState_eventSetELNetModeBP_Parms*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELNetGameState_SetELNetModeBP_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELNetGameState_eventSetELNetModeBP_Parms), &Z_Construct_UFunction_AELNetGameState_SetELNetModeBP_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELNetGameState_SetELNetModeBP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELNetGameState_SetELNetModeBP_Statics::NewProp_bEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELNetGameState_SetELNetModeBP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELNetGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELNetGameState_SetELNetModeBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELNetGameState, nullptr, "SetELNetModeBP", nullptr, nullptr, sizeof(ELNetGameState_eventSetELNetModeBP_Parms), Z_Construct_UFunction_AELNetGameState_SetELNetModeBP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNetGameState_SetELNetModeBP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELNetGameState_SetELNetModeBP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNetGameState_SetELNetModeBP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELNetGameState_SetELNetModeBP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELNetGameState_SetELNetModeBP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELNetGameState_SetELNetTemporaryAuthorityBP_Statics
	{
		struct ELNetGameState_eventSetELNetTemporaryAuthorityBP_Parms
		{
			bool bEnabled;
			bool ReturnValue;
		};
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELNetGameState_SetELNetTemporaryAuthorityBP_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((ELNetGameState_eventSetELNetTemporaryAuthorityBP_Parms*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELNetGameState_SetELNetTemporaryAuthorityBP_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELNetGameState_eventSetELNetTemporaryAuthorityBP_Parms), &Z_Construct_UFunction_AELNetGameState_SetELNetTemporaryAuthorityBP_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELNetGameState_SetELNetTemporaryAuthorityBP_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELNetGameState_eventSetELNetTemporaryAuthorityBP_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELNetGameState_SetELNetTemporaryAuthorityBP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELNetGameState_eventSetELNetTemporaryAuthorityBP_Parms), &Z_Construct_UFunction_AELNetGameState_SetELNetTemporaryAuthorityBP_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELNetGameState_SetELNetTemporaryAuthorityBP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELNetGameState_SetELNetTemporaryAuthorityBP_Statics::NewProp_bEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELNetGameState_SetELNetTemporaryAuthorityBP_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELNetGameState_SetELNetTemporaryAuthorityBP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELNetGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELNetGameState_SetELNetTemporaryAuthorityBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELNetGameState, nullptr, "SetELNetTemporaryAuthorityBP", nullptr, nullptr, sizeof(ELNetGameState_eventSetELNetTemporaryAuthorityBP_Parms), Z_Construct_UFunction_AELNetGameState_SetELNetTemporaryAuthorityBP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNetGameState_SetELNetTemporaryAuthorityBP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELNetGameState_SetELNetTemporaryAuthorityBP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNetGameState_SetELNetTemporaryAuthorityBP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELNetGameState_SetELNetTemporaryAuthorityBP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELNetGameState_SetELNetTemporaryAuthorityBP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELNetGameState_SetNetActorTickOrder_Statics
	{
		struct ELNetGameState_eventSetNetActorTickOrder_Parms
		{
			AActor* Actor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELNetGameState_SetNetActorTickOrder_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELNetGameState_eventSetNetActorTickOrder_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELNetGameState_SetNetActorTickOrder_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELNetGameState_SetNetActorTickOrder_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELNetGameState_SetNetActorTickOrder_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELNetGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELNetGameState_SetNetActorTickOrder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELNetGameState, nullptr, "SetNetActorTickOrder", nullptr, nullptr, sizeof(ELNetGameState_eventSetNetActorTickOrder_Parms), Z_Construct_UFunction_AELNetGameState_SetNetActorTickOrder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNetGameState_SetNetActorTickOrder_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELNetGameState_SetNetActorTickOrder_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNetGameState_SetNetActorTickOrder_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELNetGameState_SetNetActorTickOrder()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELNetGameState_SetNetActorTickOrder_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELNetGameState_SetUseFixedFrameRate_Statics
	{
		struct ELNetGameState_eventSetUseFixedFrameRate_Parms
		{
			bool bUseFixedFrameRate;
		};
		static void NewProp_bUseFixedFrameRate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseFixedFrameRate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELNetGameState_SetUseFixedFrameRate_Statics::NewProp_bUseFixedFrameRate_SetBit(void* Obj)
	{
		((ELNetGameState_eventSetUseFixedFrameRate_Parms*)Obj)->bUseFixedFrameRate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELNetGameState_SetUseFixedFrameRate_Statics::NewProp_bUseFixedFrameRate = { "bUseFixedFrameRate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELNetGameState_eventSetUseFixedFrameRate_Parms), &Z_Construct_UFunction_AELNetGameState_SetUseFixedFrameRate_Statics::NewProp_bUseFixedFrameRate_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELNetGameState_SetUseFixedFrameRate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELNetGameState_SetUseFixedFrameRate_Statics::NewProp_bUseFixedFrameRate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELNetGameState_SetUseFixedFrameRate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELNetGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELNetGameState_SetUseFixedFrameRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELNetGameState, nullptr, "SetUseFixedFrameRate", nullptr, nullptr, sizeof(ELNetGameState_eventSetUseFixedFrameRate_Parms), Z_Construct_UFunction_AELNetGameState_SetUseFixedFrameRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNetGameState_SetUseFixedFrameRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELNetGameState_SetUseFixedFrameRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNetGameState_SetUseFixedFrameRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELNetGameState_SetUseFixedFrameRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELNetGameState_SetUseFixedFrameRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELNetGameState_ToggleUseFixedFrameRate_Statics
	{
		struct ELNetGameState_eventToggleUseFixedFrameRate_Parms
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
	void Z_Construct_UFunction_AELNetGameState_ToggleUseFixedFrameRate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELNetGameState_eventToggleUseFixedFrameRate_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELNetGameState_ToggleUseFixedFrameRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELNetGameState_eventToggleUseFixedFrameRate_Parms), &Z_Construct_UFunction_AELNetGameState_ToggleUseFixedFrameRate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELNetGameState_ToggleUseFixedFrameRate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELNetGameState_ToggleUseFixedFrameRate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELNetGameState_ToggleUseFixedFrameRate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELNetGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELNetGameState_ToggleUseFixedFrameRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELNetGameState, nullptr, "ToggleUseFixedFrameRate", nullptr, nullptr, sizeof(ELNetGameState_eventToggleUseFixedFrameRate_Parms), Z_Construct_UFunction_AELNetGameState_ToggleUseFixedFrameRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNetGameState_ToggleUseFixedFrameRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELNetGameState_ToggleUseFixedFrameRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNetGameState_ToggleUseFixedFrameRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELNetGameState_ToggleUseFixedFrameRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELNetGameState_ToggleUseFixedFrameRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AELNetGameState_NoRegister()
	{
		return AELNetGameState::StaticClass();
	}
	struct Z_Construct_UClass_AELNetGameState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ELNetRole_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ELNetRole_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ELNetRole;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplicationRPCComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReplicationRPCComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplicationPropertyComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReplicationPropertyComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplicationManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReplicationManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldTimeSecondsFromStart_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WorldTimeSecondsFromStart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldRealTimeSecondsFromStart_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WorldRealTimeSecondsFromStart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RealDeltaTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RealDeltaTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScaledRealDeltaTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScaledRealDeltaTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RealDeltaTimeAverageInner_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RealDeltaTimeAverageInner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELNetGameState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameState,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AELNetGameState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AELNetGameState_GetNextReplicationGuid, "GetNextReplicationGuid" }, // 3936890541
		{ &Z_Construct_UFunction_AELNetGameState_GetRealDeltaTime, "GetRealDeltaTime" }, // 1820648522
		{ &Z_Construct_UFunction_AELNetGameState_GetReplicationManager, "GetReplicationManager" }, // 861950933
		{ &Z_Construct_UFunction_AELNetGameState_GetScaledRealDeltaTime, "GetScaledRealDeltaTime" }, // 697620876
		{ &Z_Construct_UFunction_AELNetGameState_GetWorldRealTimeSecondsFromStart, "GetWorldRealTimeSecondsFromStart" }, // 2039806750
		{ &Z_Construct_UFunction_AELNetGameState_GetWorldTimeSecondsFromStart, "GetWorldTimeSecondsFromStart" }, // 3044168830
		{ &Z_Construct_UFunction_AELNetGameState_HasELNetAuthorityBP, "HasELNetAuthorityBP" }, // 53269388
		{ &Z_Construct_UFunction_AELNetGameState_HasELNetExecAuthorityBP, "HasELNetExecAuthorityBP" }, // 2901946602
		{ &Z_Construct_UFunction_AELNetGameState_InitializeWorldTimeSeconds, "InitializeWorldTimeSeconds" }, // 3564075003
		{ &Z_Construct_UFunction_AELNetGameState_IsInELNetModeBP, "IsInELNetModeBP" }, // 1761602425
		{ &Z_Construct_UFunction_AELNetGameState_SetELNetAuthorityBP, "SetELNetAuthorityBP" }, // 2994980169
		{ &Z_Construct_UFunction_AELNetGameState_SetELNetModeBP, "SetELNetModeBP" }, // 2673066518
		{ &Z_Construct_UFunction_AELNetGameState_SetELNetTemporaryAuthorityBP, "SetELNetTemporaryAuthorityBP" }, // 3753970990
		{ &Z_Construct_UFunction_AELNetGameState_SetNetActorTickOrder, "SetNetActorTickOrder" }, // 3299541513
		{ &Z_Construct_UFunction_AELNetGameState_SetUseFixedFrameRate, "SetUseFixedFrameRate" }, // 2019924280
		{ &Z_Construct_UFunction_AELNetGameState_ToggleUseFixedFrameRate, "ToggleUseFixedFrameRate" }, // 2687734161
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELNetGameState_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ELNetGameState.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELNetGameState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AELNetGameState_Statics::NewProp_ELNetRole_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELNetGameState_Statics::NewProp_ELNetRole_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELNetGameState" },
		{ "ModuleRelativePath", "Public/ELNetGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AELNetGameState_Statics::NewProp_ELNetRole = { "ELNetRole", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELNetGameState, ELNetRole), Z_Construct_UEnum_ABP_200508_EELNetRole, METADATA_PARAMS(Z_Construct_UClass_AELNetGameState_Statics::NewProp_ELNetRole_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELNetGameState_Statics::NewProp_ELNetRole_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELNetGameState_Statics::NewProp_ReplicationRPCComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELNetGameState" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELNetGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELNetGameState_Statics::NewProp_ReplicationRPCComponent = { "ReplicationRPCComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELNetGameState, ReplicationRPCComponent), Z_Construct_UClass_UELReplicationComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELNetGameState_Statics::NewProp_ReplicationRPCComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELNetGameState_Statics::NewProp_ReplicationRPCComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELNetGameState_Statics::NewProp_ReplicationPropertyComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELNetGameState" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELNetGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELNetGameState_Statics::NewProp_ReplicationPropertyComponent = { "ReplicationPropertyComponent", nullptr, (EPropertyFlags)0x002208000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELNetGameState, ReplicationPropertyComponent), Z_Construct_UClass_UELReplicationComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELNetGameState_Statics::NewProp_ReplicationPropertyComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELNetGameState_Statics::NewProp_ReplicationPropertyComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELNetGameState_Statics::NewProp_ReplicationManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELNetGameState" },
		{ "ModuleRelativePath", "Public/ELNetGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELNetGameState_Statics::NewProp_ReplicationManager = { "ReplicationManager", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELNetGameState, ReplicationManager), Z_Construct_UClass_UELReplicationManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELNetGameState_Statics::NewProp_ReplicationManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELNetGameState_Statics::NewProp_ReplicationManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELNetGameState_Statics::NewProp_WorldTimeSecondsFromStart_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELNetGameState" },
		{ "ModuleRelativePath", "Public/ELNetGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELNetGameState_Statics::NewProp_WorldTimeSecondsFromStart = { "WorldTimeSecondsFromStart", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELNetGameState, WorldTimeSecondsFromStart), METADATA_PARAMS(Z_Construct_UClass_AELNetGameState_Statics::NewProp_WorldTimeSecondsFromStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELNetGameState_Statics::NewProp_WorldTimeSecondsFromStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELNetGameState_Statics::NewProp_WorldRealTimeSecondsFromStart_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELNetGameState" },
		{ "ModuleRelativePath", "Public/ELNetGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELNetGameState_Statics::NewProp_WorldRealTimeSecondsFromStart = { "WorldRealTimeSecondsFromStart", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELNetGameState, WorldRealTimeSecondsFromStart), METADATA_PARAMS(Z_Construct_UClass_AELNetGameState_Statics::NewProp_WorldRealTimeSecondsFromStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELNetGameState_Statics::NewProp_WorldRealTimeSecondsFromStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELNetGameState_Statics::NewProp_RealDeltaTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELNetGameState" },
		{ "ModuleRelativePath", "Public/ELNetGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELNetGameState_Statics::NewProp_RealDeltaTime = { "RealDeltaTime", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELNetGameState, RealDeltaTime), METADATA_PARAMS(Z_Construct_UClass_AELNetGameState_Statics::NewProp_RealDeltaTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELNetGameState_Statics::NewProp_RealDeltaTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELNetGameState_Statics::NewProp_ScaledRealDeltaTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELNetGameState" },
		{ "ModuleRelativePath", "Public/ELNetGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELNetGameState_Statics::NewProp_ScaledRealDeltaTime = { "ScaledRealDeltaTime", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELNetGameState, ScaledRealDeltaTime), METADATA_PARAMS(Z_Construct_UClass_AELNetGameState_Statics::NewProp_ScaledRealDeltaTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELNetGameState_Statics::NewProp_ScaledRealDeltaTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELNetGameState_Statics::NewProp_RealDeltaTimeAverageInner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELNetGameState" },
		{ "ModuleRelativePath", "Public/ELNetGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELNetGameState_Statics::NewProp_RealDeltaTimeAverageInner = { "RealDeltaTimeAverageInner", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELNetGameState, RealDeltaTimeAverageInner), METADATA_PARAMS(Z_Construct_UClass_AELNetGameState_Statics::NewProp_RealDeltaTimeAverageInner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELNetGameState_Statics::NewProp_RealDeltaTimeAverageInner_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AELNetGameState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELNetGameState_Statics::NewProp_ELNetRole_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELNetGameState_Statics::NewProp_ELNetRole,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELNetGameState_Statics::NewProp_ReplicationRPCComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELNetGameState_Statics::NewProp_ReplicationPropertyComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELNetGameState_Statics::NewProp_ReplicationManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELNetGameState_Statics::NewProp_WorldTimeSecondsFromStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELNetGameState_Statics::NewProp_WorldRealTimeSecondsFromStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELNetGameState_Statics::NewProp_RealDeltaTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELNetGameState_Statics::NewProp_ScaledRealDeltaTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELNetGameState_Statics::NewProp_RealDeltaTimeAverageInner,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AELNetGameState_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UELNetObjectInterface_NoRegister, (int32)VTABLE_OFFSET(AELNetGameState, IELNetObjectInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELNetGameState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELNetGameState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELNetGameState_Statics::ClassParams = {
		&AELNetGameState::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AELNetGameState_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AELNetGameState_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x008002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AELNetGameState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELNetGameState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELNetGameState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELNetGameState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELNetGameState, 1326973425);
	template<> ABP_200508_API UClass* StaticClass<AELNetGameState>()
	{
		return AELNetGameState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELNetGameState(Z_Construct_UClass_AELNetGameState, &AELNetGameState::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELNetGameState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELNetGameState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
