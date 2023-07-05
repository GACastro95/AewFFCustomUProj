// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSInGameUtility.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSInGameUtility() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELSSInGameUtility_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSInGameUtility();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ULevelStreaming_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSPlayerController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSFadeManager_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSGameMode_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSGameState_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSItemManager_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSLocatorManager_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSPlayer_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSRoundManager_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSSoundManager_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSVehicleManager_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSStorm_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_USoundAtomCue_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UELSSInGameUtility::execAddPool)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UClass,Z_Param_actorClass);
		P_GET_PROPERTY(FIntProperty,Z_Param_PoolSize);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELSSInGameUtility::AddPool(Z_Param_WorldContextObject,Z_Param_actorClass,Z_Param_PoolSize);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSInGameUtility::execAddValidInteractableObjectToGameState)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(AActor,Z_Param_InActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELSSInGameUtility::AddValidInteractableObjectToGameState(Z_Param_WorldContextObject,Z_Param_InActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSInGameUtility::execCalcRotateAngleToTarget)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_inBaseAngle);
		P_GET_PROPERTY(FFloatProperty,Z_Param_inTargetAngle);
		P_GET_PROPERTY(FFloatProperty,Z_Param_inAddAngle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UELSSInGameUtility::CalcRotateAngleToTarget(Z_Param_inBaseAngle,Z_Param_inTargetAngle,Z_Param_inAddAngle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSInGameUtility::execFindSubLevel)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UWorld,Z_Param_World);
		P_GET_PROPERTY(FNameProperty,Z_Param_LevelName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULevelStreaming**)Z_Param__Result=UELSSInGameUtility::FindSubLevel(Z_Param_WorldContextObject,Z_Param_World,Z_Param_LevelName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSInGameUtility::execGetFirstLocalSSPlayerController)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AELSSPlayerController**)Z_Param__Result=UELSSInGameUtility::GetFirstLocalSSPlayerController(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSInGameUtility::execGetLocalPlayerControllers)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_TARRAY_REF(APlayerController*,Z_Param_Out_outArray);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELSSInGameUtility::GetLocalPlayerControllers(Z_Param_WorldContextObject,Z_Param_Out_outArray);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSInGameUtility::execGetSSElapsedTimeForAnalytics)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UELSSInGameUtility::GetSSElapsedTimeForAnalytics(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSInGameUtility::execGetSSElapsedTimeFromReadyState)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UELSSInGameUtility::GetSSElapsedTimeFromReadyState(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSInGameUtility::execGetSSFadeManager)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AELSSFadeManager**)Z_Param__Result=UELSSInGameUtility::GetSSFadeManager(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSInGameUtility::execGetSSGameMode)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AELSSGameMode**)Z_Param__Result=UELSSInGameUtility::GetSSGameMode(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSInGameUtility::execGetSSGamePlayElapsedTime)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UELSSInGameUtility::GetSSGamePlayElapsedTime(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSInGameUtility::execGetSSGameState)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AELSSGameState**)Z_Param__Result=UELSSInGameUtility::GetSSGameState(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSInGameUtility::execGetSSItemManager)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AELSSItemManager**)Z_Param__Result=UELSSInGameUtility::GetSSItemManager(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSInGameUtility::execGetSSLocatorManager)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AELSSLocatorManager**)Z_Param__Result=UELSSInGameUtility::GetSSLocatorManager(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSInGameUtility::execGetSSPlayer)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AELSSPlayer**)Z_Param__Result=UELSSInGameUtility::GetSSPlayer(Z_Param_WorldContextObject,Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSInGameUtility::execGetSSPlayerController)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AELSSPlayerController**)Z_Param__Result=UELSSInGameUtility::GetSSPlayerController(Z_Param_WorldContextObject,Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSInGameUtility::execGetSSRoundManager)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AELSSRoundManager**)Z_Param__Result=UELSSInGameUtility::GetSSRoundManager(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSInGameUtility::execGetSSRoundTotalTime)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UELSSInGameUtility::GetSSRoundTotalTime(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSInGameUtility::execGetSSSoundManager)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AELSSSoundManager**)Z_Param__Result=UELSSInGameUtility::GetSSSoundManager(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSInGameUtility::execGetSSVehicleManager)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AELSSVehicleManager**)Z_Param__Result=UELSSInGameUtility::GetSSVehicleManager(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSInGameUtility::execGetStorm)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AELSSStorm**)Z_Param__Result=UELSSInGameUtility::GetStorm(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSInGameUtility::execIsDiffAngleBetweenSelfForwardAndDirTargetWithinRange)
	{
		P_GET_OBJECT(AActor,Z_Param_SelfActor);
		P_GET_OBJECT(AActor,Z_Param_TargetActor);
		P_GET_PROPERTY(FFloatProperty,Z_Param_degree);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELSSInGameUtility::IsDiffAngleBetweenSelfForwardAndDirTargetWithinRange(Z_Param_SelfActor,Z_Param_TargetActor,Z_Param_degree);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSInGameUtility::execIsSSModeInGame)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELSSInGameUtility::IsSSModeInGame(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSInGameUtility::execIsSSModeOutGame)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELSSInGameUtility::IsSSModeOutGame(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSInGameUtility::execNotifySpectatorPremiumFeature)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_UserId);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELSSInGameUtility::NotifySpectatorPremiumFeature(Z_Param_WorldContextObject,Z_Param_UserId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSInGameUtility::execRemoveValidInteractableObjectFromGameState)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(AActor,Z_Param_InActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELSSInGameUtility::RemoveValidInteractableObjectFromGameState(Z_Param_WorldContextObject,Z_Param_InActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSInGameUtility::execScoopFromPool)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UClass,Z_Param_actorClass);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Transform);
		P_GET_UBOOL(Z_Param_ifNotEnoughReuseWithoutAlloc);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=UELSSInGameUtility::ScoopFromPool(Z_Param_WorldContextObject,Z_Param_actorClass,Z_Param_Out_Transform,Z_Param_ifNotEnoughReuseWithoutAlloc);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSInGameUtility::execSetSubLevelVisible)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UWorld,Z_Param_World);
		P_GET_PROPERTY(FNameProperty,Z_Param_LevelName);
		P_GET_UBOOL(Z_Param_bVisible);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELSSInGameUtility::SetSubLevelVisible(Z_Param_WorldContextObject,Z_Param_World,Z_Param_LevelName,Z_Param_bVisible);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSInGameUtility::execShouldPlaySoundInSSMode)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UMeshComponent,Z_Param_inMeshComp);
		P_GET_OBJECT(USoundAtomCue,Z_Param_InCue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELSSInGameUtility::ShouldPlaySoundInSSMode(Z_Param_WorldContextObject,Z_Param_inMeshComp,Z_Param_InCue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSInGameUtility::execSinkToPool)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELSSInGameUtility::SinkToPool(Z_Param_WorldContextObject,Z_Param_Actor);
		P_NATIVE_END;
	}
	void UELSSInGameUtility::StaticRegisterNativesUELSSInGameUtility()
	{
		UClass* Class = UELSSInGameUtility::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddPool", &UELSSInGameUtility::execAddPool },
			{ "AddValidInteractableObjectToGameState", &UELSSInGameUtility::execAddValidInteractableObjectToGameState },
			{ "CalcRotateAngleToTarget", &UELSSInGameUtility::execCalcRotateAngleToTarget },
			{ "FindSubLevel", &UELSSInGameUtility::execFindSubLevel },
			{ "GetFirstLocalSSPlayerController", &UELSSInGameUtility::execGetFirstLocalSSPlayerController },
			{ "GetLocalPlayerControllers", &UELSSInGameUtility::execGetLocalPlayerControllers },
			{ "GetSSElapsedTimeForAnalytics", &UELSSInGameUtility::execGetSSElapsedTimeForAnalytics },
			{ "GetSSElapsedTimeFromReadyState", &UELSSInGameUtility::execGetSSElapsedTimeFromReadyState },
			{ "GetSSFadeManager", &UELSSInGameUtility::execGetSSFadeManager },
			{ "GetSSGameMode", &UELSSInGameUtility::execGetSSGameMode },
			{ "GetSSGamePlayElapsedTime", &UELSSInGameUtility::execGetSSGamePlayElapsedTime },
			{ "GetSSGameState", &UELSSInGameUtility::execGetSSGameState },
			{ "GetSSItemManager", &UELSSInGameUtility::execGetSSItemManager },
			{ "GetSSLocatorManager", &UELSSInGameUtility::execGetSSLocatorManager },
			{ "GetSSPlayer", &UELSSInGameUtility::execGetSSPlayer },
			{ "GetSSPlayerController", &UELSSInGameUtility::execGetSSPlayerController },
			{ "GetSSRoundManager", &UELSSInGameUtility::execGetSSRoundManager },
			{ "GetSSRoundTotalTime", &UELSSInGameUtility::execGetSSRoundTotalTime },
			{ "GetSSSoundManager", &UELSSInGameUtility::execGetSSSoundManager },
			{ "GetSSVehicleManager", &UELSSInGameUtility::execGetSSVehicleManager },
			{ "GetStorm", &UELSSInGameUtility::execGetStorm },
			{ "IsDiffAngleBetweenSelfForwardAndDirTargetWithinRange", &UELSSInGameUtility::execIsDiffAngleBetweenSelfForwardAndDirTargetWithinRange },
			{ "IsSSModeInGame", &UELSSInGameUtility::execIsSSModeInGame },
			{ "IsSSModeOutGame", &UELSSInGameUtility::execIsSSModeOutGame },
			{ "NotifySpectatorPremiumFeature", &UELSSInGameUtility::execNotifySpectatorPremiumFeature },
			{ "RemoveValidInteractableObjectFromGameState", &UELSSInGameUtility::execRemoveValidInteractableObjectFromGameState },
			{ "ScoopFromPool", &UELSSInGameUtility::execScoopFromPool },
			{ "SetSubLevelVisible", &UELSSInGameUtility::execSetSubLevelVisible },
			{ "ShouldPlaySoundInSSMode", &UELSSInGameUtility::execShouldPlaySoundInSSMode },
			{ "SinkToPool", &UELSSInGameUtility::execSinkToPool },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELSSInGameUtility_AddPool_Statics
	{
		struct ELSSInGameUtility_eventAddPool_Parms
		{
			const UObject* WorldContextObject;
			TSubclassOf<AActor>  actorClass;
			int32 PoolSize;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_actorClass;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PoolSize;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameUtility_AddPool_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSInGameUtility_AddPool_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameUtility_eventAddPool_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameUtility_AddPool_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameUtility_AddPool_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UELSSInGameUtility_AddPool_Statics::NewProp_actorClass = { "actorClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameUtility_eventAddPool_Parms, actorClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSInGameUtility_AddPool_Statics::NewProp_PoolSize = { "PoolSize", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameUtility_eventAddPool_Parms, PoolSize), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSInGameUtility_AddPool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameUtility_AddPool_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameUtility_AddPool_Statics::NewProp_actorClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameUtility_AddPool_Statics::NewProp_PoolSize,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameUtility_AddPool_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSInGameUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSInGameUtility_AddPool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSInGameUtility, nullptr, "AddPool", nullptr, nullptr, sizeof(ELSSInGameUtility_eventAddPool_Parms), Z_Construct_UFunction_UELSSInGameUtility_AddPool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameUtility_AddPool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameUtility_AddPool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameUtility_AddPool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSInGameUtility_AddPool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSInGameUtility_AddPool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSInGameUtility_AddValidInteractableObjectToGameState_Statics
	{
		struct ELSSInGameUtility_eventAddValidInteractableObjectToGameState_Parms
		{
			const UObject* WorldContextObject;
			AActor* InActor;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameUtility_AddValidInteractableObjectToGameState_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSInGameUtility_AddValidInteractableObjectToGameState_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameUtility_eventAddValidInteractableObjectToGameState_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameUtility_AddValidInteractableObjectToGameState_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameUtility_AddValidInteractableObjectToGameState_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSInGameUtility_AddValidInteractableObjectToGameState_Statics::NewProp_InActor = { "InActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameUtility_eventAddValidInteractableObjectToGameState_Parms, InActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSInGameUtility_AddValidInteractableObjectToGameState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameUtility_AddValidInteractableObjectToGameState_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameUtility_AddValidInteractableObjectToGameState_Statics::NewProp_InActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameUtility_AddValidInteractableObjectToGameState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSInGameUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSInGameUtility_AddValidInteractableObjectToGameState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSInGameUtility, nullptr, "AddValidInteractableObjectToGameState", nullptr, nullptr, sizeof(ELSSInGameUtility_eventAddValidInteractableObjectToGameState_Parms), Z_Construct_UFunction_UELSSInGameUtility_AddValidInteractableObjectToGameState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameUtility_AddValidInteractableObjectToGameState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameUtility_AddValidInteractableObjectToGameState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameUtility_AddValidInteractableObjectToGameState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSInGameUtility_AddValidInteractableObjectToGameState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSInGameUtility_AddValidInteractableObjectToGameState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSInGameUtility_CalcRotateAngleToTarget_Statics
	{
		struct ELSSInGameUtility_eventCalcRotateAngleToTarget_Parms
		{
			float inBaseAngle;
			float inTargetAngle;
			float inAddAngle;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_inBaseAngle;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_inTargetAngle;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_inAddAngle;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSInGameUtility_CalcRotateAngleToTarget_Statics::NewProp_inBaseAngle = { "inBaseAngle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameUtility_eventCalcRotateAngleToTarget_Parms, inBaseAngle), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSInGameUtility_CalcRotateAngleToTarget_Statics::NewProp_inTargetAngle = { "inTargetAngle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameUtility_eventCalcRotateAngleToTarget_Parms, inTargetAngle), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSInGameUtility_CalcRotateAngleToTarget_Statics::NewProp_inAddAngle = { "inAddAngle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameUtility_eventCalcRotateAngleToTarget_Parms, inAddAngle), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSInGameUtility_CalcRotateAngleToTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameUtility_eventCalcRotateAngleToTarget_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSInGameUtility_CalcRotateAngleToTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameUtility_CalcRotateAngleToTarget_Statics::NewProp_inBaseAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameUtility_CalcRotateAngleToTarget_Statics::NewProp_inTargetAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameUtility_CalcRotateAngleToTarget_Statics::NewProp_inAddAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameUtility_CalcRotateAngleToTarget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameUtility_CalcRotateAngleToTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSInGameUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSInGameUtility_CalcRotateAngleToTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSInGameUtility, nullptr, "CalcRotateAngleToTarget", nullptr, nullptr, sizeof(ELSSInGameUtility_eventCalcRotateAngleToTarget_Parms), Z_Construct_UFunction_UELSSInGameUtility_CalcRotateAngleToTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameUtility_CalcRotateAngleToTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameUtility_CalcRotateAngleToTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameUtility_CalcRotateAngleToTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSInGameUtility_CalcRotateAngleToTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSInGameUtility_CalcRotateAngleToTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSInGameUtility_FindSubLevel_Statics
	{
		struct ELSSInGameUtility_eventFindSubLevel_Parms
		{
			const UObject* WorldContextObject;
			UWorld* World;
			FName LevelName;
			ULevelStreaming* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_LevelName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameUtility_FindSubLevel_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSInGameUtility_FindSubLevel_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameUtility_eventFindSubLevel_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameUtility_FindSubLevel_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameUtility_FindSubLevel_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSInGameUtility_FindSubLevel_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameUtility_eventFindSubLevel_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameUtility_FindSubLevel_Statics::NewProp_LevelName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UELSSInGameUtility_FindSubLevel_Statics::NewProp_LevelName = { "LevelName", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameUtility_eventFindSubLevel_Parms, LevelName), METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameUtility_FindSubLevel_Statics::NewProp_LevelName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameUtility_FindSubLevel_Statics::NewProp_LevelName_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSInGameUtility_FindSubLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameUtility_eventFindSubLevel_Parms, ReturnValue), Z_Construct_UClass_ULevelStreaming_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSInGameUtility_FindSubLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameUtility_FindSubLevel_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameUtility_FindSubLevel_Statics::NewProp_World,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameUtility_FindSubLevel_Statics::NewProp_LevelName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameUtility_FindSubLevel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameUtility_FindSubLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSInGameUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSInGameUtility_FindSubLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSInGameUtility, nullptr, "FindSubLevel", nullptr, nullptr, sizeof(ELSSInGameUtility_eventFindSubLevel_Parms), Z_Construct_UFunction_UELSSInGameUtility_FindSubLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameUtility_FindSubLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameUtility_FindSubLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameUtility_FindSubLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSInGameUtility_FindSubLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSInGameUtility_FindSubLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSInGameUtility_GetFirstLocalSSPlayerController_Statics
	{
		struct ELSSInGameUtility_eventGetFirstLocalSSPlayerController_Parms
		{
			const UObject* WorldContextObject;
			AELSSPlayerController* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameUtility_GetFirstLocalSSPlayerController_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSInGameUtility_GetFirstLocalSSPlayerController_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameUtility_eventGetFirstLocalSSPlayerController_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameUtility_GetFirstLocalSSPlayerController_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameUtility_GetFirstLocalSSPlayerController_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSInGameUtility_GetFirstLocalSSPlayerController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameUtility_eventGetFirstLocalSSPlayerController_Parms, ReturnValue), Z_Construct_UClass_AELSSPlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSInGameUtility_GetFirstLocalSSPlayerController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameUtility_GetFirstLocalSSPlayerController_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameUtility_GetFirstLocalSSPlayerController_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameUtility_GetFirstLocalSSPlayerController_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSInGameUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSInGameUtility_GetFirstLocalSSPlayerController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSInGameUtility, nullptr, "GetFirstLocalSSPlayerController", nullptr, nullptr, sizeof(ELSSInGameUtility_eventGetFirstLocalSSPlayerController_Parms), Z_Construct_UFunction_UELSSInGameUtility_GetFirstLocalSSPlayerController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameUtility_GetFirstLocalSSPlayerController_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameUtility_GetFirstLocalSSPlayerController_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameUtility_GetFirstLocalSSPlayerController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSInGameUtility_GetFirstLocalSSPlayerController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSInGameUtility_GetFirstLocalSSPlayerController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSInGameUtility_GetLocalPlayerControllers_Statics
	{
		struct ELSSInGameUtility_eventGetLocalPlayerControllers_Parms
		{
			const UObject* WorldContextObject;
			TArray<APlayerController*> outArray;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_outArray_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_outArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameUtility_GetLocalPlayerControllers_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSInGameUtility_GetLocalPlayerControllers_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameUtility_eventGetLocalPlayerControllers_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameUtility_GetLocalPlayerControllers_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameUtility_GetLocalPlayerControllers_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSInGameUtility_GetLocalPlayerControllers_Statics::NewProp_outArray_Inner = { "outArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELSSInGameUtility_GetLocalPlayerControllers_Statics::NewProp_outArray = { "outArray", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameUtility_eventGetLocalPlayerControllers_Parms, outArray), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSInGameUtility_GetLocalPlayerControllers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameUtility_GetLocalPlayerControllers_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameUtility_GetLocalPlayerControllers_Statics::NewProp_outArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameUtility_GetLocalPlayerControllers_Statics::NewProp_outArray,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameUtility_GetLocalPlayerControllers_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSInGameUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSInGameUtility_GetLocalPlayerControllers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSInGameUtility, nullptr, "GetLocalPlayerControllers", nullptr, nullptr, sizeof(ELSSInGameUtility_eventGetLocalPlayerControllers_Parms), Z_Construct_UFunction_UELSSInGameUtility_GetLocalPlayerControllers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameUtility_GetLocalPlayerControllers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameUtility_GetLocalPlayerControllers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameUtility_GetLocalPlayerControllers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSInGameUtility_GetLocalPlayerControllers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSInGameUtility_GetLocalPlayerControllers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSInGameUtility_GetSSElapsedTimeForAnalytics_Statics
	{
		struct ELSSInGameUtility_eventGetSSElapsedTimeForAnalytics_Parms
		{
			const UObject* WorldContextObject;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameUtility_GetSSElapsedTimeForAnalytics_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSInGameUtility_GetSSElapsedTimeForAnalytics_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameUtility_eventGetSSElapsedTimeForAnalytics_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameUtility_GetSSElapsedTimeForAnalytics_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameUtility_GetSSElapsedTimeForAnalytics_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSInGameUtility_GetSSElapsedTimeForAnalytics_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameUtility_eventGetSSElapsedTimeForAnalytics_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSInGameUtility_GetSSElapsedTimeForAnalytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameUtility_GetSSElapsedTimeForAnalytics_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameUtility_GetSSElapsedTimeForAnalytics_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameUtility_GetSSElapsedTimeForAnalytics_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSInGameUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSInGameUtility_GetSSElapsedTimeForAnalytics_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSInGameUtility, nullptr, "GetSSElapsedTimeForAnalytics", nullptr, nullptr, sizeof(ELSSInGameUtility_eventGetSSElapsedTimeForAnalytics_Parms), Z_Construct_UFunction_UELSSInGameUtility_GetSSElapsedTimeForAnalytics_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameUtility_GetSSElapsedTimeForAnalytics_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameUtility_GetSSElapsedTimeForAnalytics_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameUtility_GetSSElapsedTimeForAnalytics_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSInGameUtility_GetSSElapsedTimeForAnalytics()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSInGameUtility_GetSSElapsedTimeForAnalytics_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSInGameUtility_GetSSElapsedTimeFromReadyState_Statics
	{
		struct ELSSInGameUtility_eventGetSSElapsedTimeFromReadyState_Parms
		{
			const UObject* WorldContextObject;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameUtility_GetSSElapsedTimeFromReadyState_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSInGameUtility_GetSSElapsedTimeFromReadyState_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameUtility_eventGetSSElapsedTimeFromReadyState_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameUtility_GetSSElapsedTimeFromReadyState_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameUtility_GetSSElapsedTimeFromReadyState_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSInGameUtility_GetSSElapsedTimeFromReadyState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameUtility_eventGetSSElapsedTimeFromReadyState_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSInGameUtility_GetSSElapsedTimeFromReadyState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameUtility_GetSSElapsedTimeFromReadyState_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameUtility_GetSSElapsedTimeFromReadyState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameUtility_GetSSElapsedTimeFromReadyState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSInGameUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSInGameUtility_GetSSElapsedTimeFromReadyState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSInGameUtility, nullptr, "GetSSElapsedTimeFromReadyState", nullptr, nullptr, sizeof(ELSSInGameUtility_eventGetSSElapsedTimeFromReadyState_Parms), Z_Construct_UFunction_UELSSInGameUtility_GetSSElapsedTimeFromReadyState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameUtility_GetSSElapsedTimeFromReadyState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameUtility_GetSSElapsedTimeFromReadyState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameUtility_GetSSElapsedTimeFromReadyState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSInGameUtility_GetSSElapsedTimeFromReadyState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSInGameUtility_GetSSElapsedTimeFromReadyState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSInGameUtility_GetSSFadeManager_Statics
	{
		struct ELSSInGameUtility_eventGetSSFadeManager_Parms
		{
			const UObject* WorldContextObject;
			AELSSFadeManager* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameUtility_GetSSFadeManager_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSInGameUtility_GetSSFadeManager_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameUtility_eventGetSSFadeManager_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameUtility_GetSSFadeManager_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameUtility_GetSSFadeManager_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSInGameUtility_GetSSFadeManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameUtility_eventGetSSFadeManager_Parms, ReturnValue), Z_Construct_UClass_AELSSFadeManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSInGameUtility_GetSSFadeManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameUtility_GetSSFadeManager_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameUtility_GetSSFadeManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameUtility_GetSSFadeManager_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSInGameUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSInGameUtility_GetSSFadeManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSInGameUtility, nullptr, "GetSSFadeManager", nullptr, nullptr, sizeof(ELSSInGameUtility_eventGetSSFadeManager_Parms), Z_Construct_UFunction_UELSSInGameUtility_GetSSFadeManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameUtility_GetSSFadeManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameUtility_GetSSFadeManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameUtility_GetSSFadeManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSInGameUtility_GetSSFadeManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSInGameUtility_GetSSFadeManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSInGameUtility_GetSSGameMode_Statics
	{
		struct ELSSInGameUtility_eventGetSSGameMode_Parms
		{
			const UObject* WorldContextObject;
			AELSSGameMode* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameUtility_GetSSGameMode_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSInGameUtility_GetSSGameMode_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameUtility_eventGetSSGameMode_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameUtility_GetSSGameMode_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameUtility_GetSSGameMode_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSInGameUtility_GetSSGameMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameUtility_eventGetSSGameMode_Parms, ReturnValue), Z_Construct_UClass_AELSSGameMode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSInGameUtility_GetSSGameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameUtility_GetSSGameMode_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameUtility_GetSSGameMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameUtility_GetSSGameMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSInGameUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSInGameUtility_GetSSGameMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSInGameUtility, nullptr, "GetSSGameMode", nullptr, nullptr, sizeof(ELSSInGameUtility_eventGetSSGameMode_Parms), Z_Construct_UFunction_UELSSInGameUtility_GetSSGameMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameUtility_GetSSGameMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameUtility_GetSSGameMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameUtility_GetSSGameMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSInGameUtility_GetSSGameMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSInGameUtility_GetSSGameMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSInGameUtility_GetSSGamePlayElapsedTime_Statics
	{
		struct ELSSInGameUtility_eventGetSSGamePlayElapsedTime_Parms
		{
			const UObject* WorldContextObject;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameUtility_GetSSGamePlayElapsedTime_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSInGameUtility_GetSSGamePlayElapsedTime_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameUtility_eventGetSSGamePlayElapsedTime_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameUtility_GetSSGamePlayElapsedTime_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameUtility_GetSSGamePlayElapsedTime_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSInGameUtility_GetSSGamePlayElapsedTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameUtility_eventGetSSGamePlayElapsedTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSInGameUtility_GetSSGamePlayElapsedTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameUtility_GetSSGamePlayElapsedTime_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameUtility_GetSSGamePlayElapsedTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameUtility_GetSSGamePlayElapsedTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSInGameUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSInGameUtility_GetSSGamePlayElapsedTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSInGameUtility, nullptr, "GetSSGamePlayElapsedTime", nullptr, nullptr, sizeof(ELSSInGameUtility_eventGetSSGamePlayElapsedTime_Parms), Z_Construct_UFunction_UELSSInGameUtility_GetSSGamePlayElapsedTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameUtility_GetSSGamePlayElapsedTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameUtility_GetSSGamePlayElapsedTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameUtility_GetSSGamePlayElapsedTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSInGameUtility_GetSSGamePlayElapsedTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSInGameUtility_GetSSGamePlayElapsedTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSInGameUtility_GetSSGameState_Statics
	{
		struct ELSSInGameUtility_eventGetSSGameState_Parms
		{
			const UObject* WorldContextObject;
			AELSSGameState* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameUtility_GetSSGameState_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSInGameUtility_GetSSGameState_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameUtility_eventGetSSGameState_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameUtility_GetSSGameState_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameUtility_GetSSGameState_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSInGameUtility_GetSSGameState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameUtility_eventGetSSGameState_Parms, ReturnValue), Z_Construct_UClass_AELSSGameState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSInGameUtility_GetSSGameState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameUtility_GetSSGameState_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameUtility_GetSSGameState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameUtility_GetSSGameState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSInGameUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSInGameUtility_GetSSGameState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSInGameUtility, nullptr, "GetSSGameState", nullptr, nullptr, sizeof(ELSSInGameUtility_eventGetSSGameState_Parms), Z_Construct_UFunction_UELSSInGameUtility_GetSSGameState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameUtility_GetSSGameState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameUtility_GetSSGameState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameUtility_GetSSGameState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSInGameUtility_GetSSGameState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSInGameUtility_GetSSGameState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSInGameUtility_GetSSItemManager_Statics
	{
		struct ELSSInGameUtility_eventGetSSItemManager_Parms
		{
			const UObject* WorldContextObject;
			AELSSItemManager* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameUtility_GetSSItemManager_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSInGameUtility_GetSSItemManager_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameUtility_eventGetSSItemManager_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameUtility_GetSSItemManager_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameUtility_GetSSItemManager_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSInGameUtility_GetSSItemManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameUtility_eventGetSSItemManager_Parms, ReturnValue), Z_Construct_UClass_AELSSItemManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSInGameUtility_GetSSItemManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameUtility_GetSSItemManager_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameUtility_GetSSItemManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameUtility_GetSSItemManager_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSInGameUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSInGameUtility_GetSSItemManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSInGameUtility, nullptr, "GetSSItemManager", nullptr, nullptr, sizeof(ELSSInGameUtility_eventGetSSItemManager_Parms), Z_Construct_UFunction_UELSSInGameUtility_GetSSItemManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameUtility_GetSSItemManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameUtility_GetSSItemManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameUtility_GetSSItemManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSInGameUtility_GetSSItemManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSInGameUtility_GetSSItemManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSInGameUtility_GetSSLocatorManager_Statics
	{
		struct ELSSInGameUtility_eventGetSSLocatorManager_Parms
		{
			const UObject* WorldContextObject;
			AELSSLocatorManager* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameUtility_GetSSLocatorManager_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSInGameUtility_GetSSLocatorManager_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameUtility_eventGetSSLocatorManager_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameUtility_GetSSLocatorManager_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameUtility_GetSSLocatorManager_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSInGameUtility_GetSSLocatorManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameUtility_eventGetSSLocatorManager_Parms, ReturnValue), Z_Construct_UClass_AELSSLocatorManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSInGameUtility_GetSSLocatorManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameUtility_GetSSLocatorManager_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameUtility_GetSSLocatorManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameUtility_GetSSLocatorManager_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSInGameUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSInGameUtility_GetSSLocatorManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSInGameUtility, nullptr, "GetSSLocatorManager", nullptr, nullptr, sizeof(ELSSInGameUtility_eventGetSSLocatorManager_Parms), Z_Construct_UFunction_UELSSInGameUtility_GetSSLocatorManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameUtility_GetSSLocatorManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameUtility_GetSSLocatorManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameUtility_GetSSLocatorManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSInGameUtility_GetSSLocatorManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSInGameUtility_GetSSLocatorManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSInGameUtility_GetSSPlayer_Statics
	{
		struct ELSSInGameUtility_eventGetSSPlayer_Parms
		{
			const UObject* WorldContextObject;
			int32 PlayerIndex;
			AELSSPlayer* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameUtility_GetSSPlayer_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSInGameUtility_GetSSPlayer_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameUtility_eventGetSSPlayer_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameUtility_GetSSPlayer_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameUtility_GetSSPlayer_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSInGameUtility_GetSSPlayer_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameUtility_eventGetSSPlayer_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSInGameUtility_GetSSPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameUtility_eventGetSSPlayer_Parms, ReturnValue), Z_Construct_UClass_AELSSPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSInGameUtility_GetSSPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameUtility_GetSSPlayer_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameUtility_GetSSPlayer_Statics::NewProp_PlayerIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameUtility_GetSSPlayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameUtility_GetSSPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSInGameUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSInGameUtility_GetSSPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSInGameUtility, nullptr, "GetSSPlayer", nullptr, nullptr, sizeof(ELSSInGameUtility_eventGetSSPlayer_Parms), Z_Construct_UFunction_UELSSInGameUtility_GetSSPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameUtility_GetSSPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameUtility_GetSSPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameUtility_GetSSPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSInGameUtility_GetSSPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSInGameUtility_GetSSPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSInGameUtility_GetSSPlayerController_Statics
	{
		struct ELSSInGameUtility_eventGetSSPlayerController_Parms
		{
			const UObject* WorldContextObject;
			int32 PlayerIndex;
			AELSSPlayerController* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameUtility_GetSSPlayerController_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSInGameUtility_GetSSPlayerController_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameUtility_eventGetSSPlayerController_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameUtility_GetSSPlayerController_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameUtility_GetSSPlayerController_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSInGameUtility_GetSSPlayerController_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameUtility_eventGetSSPlayerController_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSInGameUtility_GetSSPlayerController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameUtility_eventGetSSPlayerController_Parms, ReturnValue), Z_Construct_UClass_AELSSPlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSInGameUtility_GetSSPlayerController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameUtility_GetSSPlayerController_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameUtility_GetSSPlayerController_Statics::NewProp_PlayerIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameUtility_GetSSPlayerController_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameUtility_GetSSPlayerController_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSInGameUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSInGameUtility_GetSSPlayerController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSInGameUtility, nullptr, "GetSSPlayerController", nullptr, nullptr, sizeof(ELSSInGameUtility_eventGetSSPlayerController_Parms), Z_Construct_UFunction_UELSSInGameUtility_GetSSPlayerController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameUtility_GetSSPlayerController_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameUtility_GetSSPlayerController_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameUtility_GetSSPlayerController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSInGameUtility_GetSSPlayerController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSInGameUtility_GetSSPlayerController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSInGameUtility_GetSSRoundManager_Statics
	{
		struct ELSSInGameUtility_eventGetSSRoundManager_Parms
		{
			const UObject* WorldContextObject;
			AELSSRoundManager* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameUtility_GetSSRoundManager_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSInGameUtility_GetSSRoundManager_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameUtility_eventGetSSRoundManager_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameUtility_GetSSRoundManager_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameUtility_GetSSRoundManager_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSInGameUtility_GetSSRoundManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameUtility_eventGetSSRoundManager_Parms, ReturnValue), Z_Construct_UClass_AELSSRoundManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSInGameUtility_GetSSRoundManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameUtility_GetSSRoundManager_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameUtility_GetSSRoundManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameUtility_GetSSRoundManager_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSInGameUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSInGameUtility_GetSSRoundManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSInGameUtility, nullptr, "GetSSRoundManager", nullptr, nullptr, sizeof(ELSSInGameUtility_eventGetSSRoundManager_Parms), Z_Construct_UFunction_UELSSInGameUtility_GetSSRoundManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameUtility_GetSSRoundManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameUtility_GetSSRoundManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameUtility_GetSSRoundManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSInGameUtility_GetSSRoundManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSInGameUtility_GetSSRoundManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSInGameUtility_GetSSRoundTotalTime_Statics
	{
		struct ELSSInGameUtility_eventGetSSRoundTotalTime_Parms
		{
			const UObject* WorldContextObject;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameUtility_GetSSRoundTotalTime_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSInGameUtility_GetSSRoundTotalTime_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameUtility_eventGetSSRoundTotalTime_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameUtility_GetSSRoundTotalTime_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameUtility_GetSSRoundTotalTime_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSInGameUtility_GetSSRoundTotalTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameUtility_eventGetSSRoundTotalTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSInGameUtility_GetSSRoundTotalTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameUtility_GetSSRoundTotalTime_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameUtility_GetSSRoundTotalTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameUtility_GetSSRoundTotalTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSInGameUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSInGameUtility_GetSSRoundTotalTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSInGameUtility, nullptr, "GetSSRoundTotalTime", nullptr, nullptr, sizeof(ELSSInGameUtility_eventGetSSRoundTotalTime_Parms), Z_Construct_UFunction_UELSSInGameUtility_GetSSRoundTotalTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameUtility_GetSSRoundTotalTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameUtility_GetSSRoundTotalTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameUtility_GetSSRoundTotalTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSInGameUtility_GetSSRoundTotalTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSInGameUtility_GetSSRoundTotalTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSInGameUtility_GetSSSoundManager_Statics
	{
		struct ELSSInGameUtility_eventGetSSSoundManager_Parms
		{
			const UObject* WorldContextObject;
			AELSSSoundManager* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameUtility_GetSSSoundManager_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSInGameUtility_GetSSSoundManager_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameUtility_eventGetSSSoundManager_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameUtility_GetSSSoundManager_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameUtility_GetSSSoundManager_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSInGameUtility_GetSSSoundManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameUtility_eventGetSSSoundManager_Parms, ReturnValue), Z_Construct_UClass_AELSSSoundManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSInGameUtility_GetSSSoundManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameUtility_GetSSSoundManager_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameUtility_GetSSSoundManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameUtility_GetSSSoundManager_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSInGameUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSInGameUtility_GetSSSoundManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSInGameUtility, nullptr, "GetSSSoundManager", nullptr, nullptr, sizeof(ELSSInGameUtility_eventGetSSSoundManager_Parms), Z_Construct_UFunction_UELSSInGameUtility_GetSSSoundManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameUtility_GetSSSoundManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameUtility_GetSSSoundManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameUtility_GetSSSoundManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSInGameUtility_GetSSSoundManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSInGameUtility_GetSSSoundManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSInGameUtility_GetSSVehicleManager_Statics
	{
		struct ELSSInGameUtility_eventGetSSVehicleManager_Parms
		{
			const UObject* WorldContextObject;
			AELSSVehicleManager* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameUtility_GetSSVehicleManager_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSInGameUtility_GetSSVehicleManager_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameUtility_eventGetSSVehicleManager_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameUtility_GetSSVehicleManager_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameUtility_GetSSVehicleManager_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSInGameUtility_GetSSVehicleManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameUtility_eventGetSSVehicleManager_Parms, ReturnValue), Z_Construct_UClass_AELSSVehicleManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSInGameUtility_GetSSVehicleManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameUtility_GetSSVehicleManager_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameUtility_GetSSVehicleManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameUtility_GetSSVehicleManager_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSInGameUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSInGameUtility_GetSSVehicleManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSInGameUtility, nullptr, "GetSSVehicleManager", nullptr, nullptr, sizeof(ELSSInGameUtility_eventGetSSVehicleManager_Parms), Z_Construct_UFunction_UELSSInGameUtility_GetSSVehicleManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameUtility_GetSSVehicleManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameUtility_GetSSVehicleManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameUtility_GetSSVehicleManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSInGameUtility_GetSSVehicleManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSInGameUtility_GetSSVehicleManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSInGameUtility_GetStorm_Statics
	{
		struct ELSSInGameUtility_eventGetStorm_Parms
		{
			const UObject* WorldContextObject;
			AELSSStorm* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameUtility_GetStorm_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSInGameUtility_GetStorm_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameUtility_eventGetStorm_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameUtility_GetStorm_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameUtility_GetStorm_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSInGameUtility_GetStorm_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameUtility_eventGetStorm_Parms, ReturnValue), Z_Construct_UClass_AELSSStorm_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSInGameUtility_GetStorm_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameUtility_GetStorm_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameUtility_GetStorm_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameUtility_GetStorm_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSInGameUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSInGameUtility_GetStorm_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSInGameUtility, nullptr, "GetStorm", nullptr, nullptr, sizeof(ELSSInGameUtility_eventGetStorm_Parms), Z_Construct_UFunction_UELSSInGameUtility_GetStorm_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameUtility_GetStorm_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameUtility_GetStorm_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameUtility_GetStorm_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSInGameUtility_GetStorm()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSInGameUtility_GetStorm_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSInGameUtility_IsDiffAngleBetweenSelfForwardAndDirTargetWithinRange_Statics
	{
		struct ELSSInGameUtility_eventIsDiffAngleBetweenSelfForwardAndDirTargetWithinRange_Parms
		{
			AActor* SelfActor;
			AActor* TargetActor;
			float degree;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SelfActor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_degree;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSInGameUtility_IsDiffAngleBetweenSelfForwardAndDirTargetWithinRange_Statics::NewProp_SelfActor = { "SelfActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameUtility_eventIsDiffAngleBetweenSelfForwardAndDirTargetWithinRange_Parms, SelfActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSInGameUtility_IsDiffAngleBetweenSelfForwardAndDirTargetWithinRange_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameUtility_eventIsDiffAngleBetweenSelfForwardAndDirTargetWithinRange_Parms, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSInGameUtility_IsDiffAngleBetweenSelfForwardAndDirTargetWithinRange_Statics::NewProp_degree = { "degree", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameUtility_eventIsDiffAngleBetweenSelfForwardAndDirTargetWithinRange_Parms, degree), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSInGameUtility_IsDiffAngleBetweenSelfForwardAndDirTargetWithinRange_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSInGameUtility_eventIsDiffAngleBetweenSelfForwardAndDirTargetWithinRange_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSInGameUtility_IsDiffAngleBetweenSelfForwardAndDirTargetWithinRange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSInGameUtility_eventIsDiffAngleBetweenSelfForwardAndDirTargetWithinRange_Parms), &Z_Construct_UFunction_UELSSInGameUtility_IsDiffAngleBetweenSelfForwardAndDirTargetWithinRange_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSInGameUtility_IsDiffAngleBetweenSelfForwardAndDirTargetWithinRange_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameUtility_IsDiffAngleBetweenSelfForwardAndDirTargetWithinRange_Statics::NewProp_SelfActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameUtility_IsDiffAngleBetweenSelfForwardAndDirTargetWithinRange_Statics::NewProp_TargetActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameUtility_IsDiffAngleBetweenSelfForwardAndDirTargetWithinRange_Statics::NewProp_degree,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameUtility_IsDiffAngleBetweenSelfForwardAndDirTargetWithinRange_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameUtility_IsDiffAngleBetweenSelfForwardAndDirTargetWithinRange_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSInGameUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSInGameUtility_IsDiffAngleBetweenSelfForwardAndDirTargetWithinRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSInGameUtility, nullptr, "IsDiffAngleBetweenSelfForwardAndDirTargetWithinRange", nullptr, nullptr, sizeof(ELSSInGameUtility_eventIsDiffAngleBetweenSelfForwardAndDirTargetWithinRange_Parms), Z_Construct_UFunction_UELSSInGameUtility_IsDiffAngleBetweenSelfForwardAndDirTargetWithinRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameUtility_IsDiffAngleBetweenSelfForwardAndDirTargetWithinRange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameUtility_IsDiffAngleBetweenSelfForwardAndDirTargetWithinRange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameUtility_IsDiffAngleBetweenSelfForwardAndDirTargetWithinRange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSInGameUtility_IsDiffAngleBetweenSelfForwardAndDirTargetWithinRange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSInGameUtility_IsDiffAngleBetweenSelfForwardAndDirTargetWithinRange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSInGameUtility_IsSSModeInGame_Statics
	{
		struct ELSSInGameUtility_eventIsSSModeInGame_Parms
		{
			const UObject* WorldContextObject;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameUtility_IsSSModeInGame_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSInGameUtility_IsSSModeInGame_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameUtility_eventIsSSModeInGame_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameUtility_IsSSModeInGame_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameUtility_IsSSModeInGame_Statics::NewProp_WorldContextObject_MetaData)) };
	void Z_Construct_UFunction_UELSSInGameUtility_IsSSModeInGame_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSInGameUtility_eventIsSSModeInGame_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSInGameUtility_IsSSModeInGame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSInGameUtility_eventIsSSModeInGame_Parms), &Z_Construct_UFunction_UELSSInGameUtility_IsSSModeInGame_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSInGameUtility_IsSSModeInGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameUtility_IsSSModeInGame_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameUtility_IsSSModeInGame_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameUtility_IsSSModeInGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSInGameUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSInGameUtility_IsSSModeInGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSInGameUtility, nullptr, "IsSSModeInGame", nullptr, nullptr, sizeof(ELSSInGameUtility_eventIsSSModeInGame_Parms), Z_Construct_UFunction_UELSSInGameUtility_IsSSModeInGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameUtility_IsSSModeInGame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameUtility_IsSSModeInGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameUtility_IsSSModeInGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSInGameUtility_IsSSModeInGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSInGameUtility_IsSSModeInGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSInGameUtility_IsSSModeOutGame_Statics
	{
		struct ELSSInGameUtility_eventIsSSModeOutGame_Parms
		{
			const UObject* WorldContextObject;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameUtility_IsSSModeOutGame_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSInGameUtility_IsSSModeOutGame_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameUtility_eventIsSSModeOutGame_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameUtility_IsSSModeOutGame_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameUtility_IsSSModeOutGame_Statics::NewProp_WorldContextObject_MetaData)) };
	void Z_Construct_UFunction_UELSSInGameUtility_IsSSModeOutGame_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSInGameUtility_eventIsSSModeOutGame_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSInGameUtility_IsSSModeOutGame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSInGameUtility_eventIsSSModeOutGame_Parms), &Z_Construct_UFunction_UELSSInGameUtility_IsSSModeOutGame_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSInGameUtility_IsSSModeOutGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameUtility_IsSSModeOutGame_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameUtility_IsSSModeOutGame_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameUtility_IsSSModeOutGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSInGameUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSInGameUtility_IsSSModeOutGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSInGameUtility, nullptr, "IsSSModeOutGame", nullptr, nullptr, sizeof(ELSSInGameUtility_eventIsSSModeOutGame_Parms), Z_Construct_UFunction_UELSSInGameUtility_IsSSModeOutGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameUtility_IsSSModeOutGame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameUtility_IsSSModeOutGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameUtility_IsSSModeOutGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSInGameUtility_IsSSModeOutGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSInGameUtility_IsSSModeOutGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSInGameUtility_NotifySpectatorPremiumFeature_Statics
	{
		struct ELSSInGameUtility_eventNotifySpectatorPremiumFeature_Parms
		{
			const UObject* WorldContextObject;
			int32 UserId;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UserId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameUtility_NotifySpectatorPremiumFeature_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSInGameUtility_NotifySpectatorPremiumFeature_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameUtility_eventNotifySpectatorPremiumFeature_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameUtility_NotifySpectatorPremiumFeature_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameUtility_NotifySpectatorPremiumFeature_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSInGameUtility_NotifySpectatorPremiumFeature_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameUtility_eventNotifySpectatorPremiumFeature_Parms, UserId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSInGameUtility_NotifySpectatorPremiumFeature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameUtility_NotifySpectatorPremiumFeature_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameUtility_NotifySpectatorPremiumFeature_Statics::NewProp_UserId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameUtility_NotifySpectatorPremiumFeature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSInGameUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSInGameUtility_NotifySpectatorPremiumFeature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSInGameUtility, nullptr, "NotifySpectatorPremiumFeature", nullptr, nullptr, sizeof(ELSSInGameUtility_eventNotifySpectatorPremiumFeature_Parms), Z_Construct_UFunction_UELSSInGameUtility_NotifySpectatorPremiumFeature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameUtility_NotifySpectatorPremiumFeature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameUtility_NotifySpectatorPremiumFeature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameUtility_NotifySpectatorPremiumFeature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSInGameUtility_NotifySpectatorPremiumFeature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSInGameUtility_NotifySpectatorPremiumFeature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSInGameUtility_RemoveValidInteractableObjectFromGameState_Statics
	{
		struct ELSSInGameUtility_eventRemoveValidInteractableObjectFromGameState_Parms
		{
			const UObject* WorldContextObject;
			AActor* InActor;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameUtility_RemoveValidInteractableObjectFromGameState_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSInGameUtility_RemoveValidInteractableObjectFromGameState_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameUtility_eventRemoveValidInteractableObjectFromGameState_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameUtility_RemoveValidInteractableObjectFromGameState_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameUtility_RemoveValidInteractableObjectFromGameState_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSInGameUtility_RemoveValidInteractableObjectFromGameState_Statics::NewProp_InActor = { "InActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameUtility_eventRemoveValidInteractableObjectFromGameState_Parms, InActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSInGameUtility_RemoveValidInteractableObjectFromGameState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameUtility_RemoveValidInteractableObjectFromGameState_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameUtility_RemoveValidInteractableObjectFromGameState_Statics::NewProp_InActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameUtility_RemoveValidInteractableObjectFromGameState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSInGameUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSInGameUtility_RemoveValidInteractableObjectFromGameState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSInGameUtility, nullptr, "RemoveValidInteractableObjectFromGameState", nullptr, nullptr, sizeof(ELSSInGameUtility_eventRemoveValidInteractableObjectFromGameState_Parms), Z_Construct_UFunction_UELSSInGameUtility_RemoveValidInteractableObjectFromGameState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameUtility_RemoveValidInteractableObjectFromGameState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameUtility_RemoveValidInteractableObjectFromGameState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameUtility_RemoveValidInteractableObjectFromGameState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSInGameUtility_RemoveValidInteractableObjectFromGameState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSInGameUtility_RemoveValidInteractableObjectFromGameState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSInGameUtility_ScoopFromPool_Statics
	{
		struct ELSSInGameUtility_eventScoopFromPool_Parms
		{
			const UObject* WorldContextObject;
			TSubclassOf<AActor>  actorClass;
			FTransform Transform;
			bool ifNotEnoughReuseWithoutAlloc;
			AActor* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_actorClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Transform;
		static void NewProp_ifNotEnoughReuseWithoutAlloc_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ifNotEnoughReuseWithoutAlloc;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameUtility_ScoopFromPool_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSInGameUtility_ScoopFromPool_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameUtility_eventScoopFromPool_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameUtility_ScoopFromPool_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameUtility_ScoopFromPool_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UELSSInGameUtility_ScoopFromPool_Statics::NewProp_actorClass = { "actorClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameUtility_eventScoopFromPool_Parms, actorClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameUtility_ScoopFromPool_Statics::NewProp_Transform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSInGameUtility_ScoopFromPool_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameUtility_eventScoopFromPool_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameUtility_ScoopFromPool_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameUtility_ScoopFromPool_Statics::NewProp_Transform_MetaData)) };
	void Z_Construct_UFunction_UELSSInGameUtility_ScoopFromPool_Statics::NewProp_ifNotEnoughReuseWithoutAlloc_SetBit(void* Obj)
	{
		((ELSSInGameUtility_eventScoopFromPool_Parms*)Obj)->ifNotEnoughReuseWithoutAlloc = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSInGameUtility_ScoopFromPool_Statics::NewProp_ifNotEnoughReuseWithoutAlloc = { "ifNotEnoughReuseWithoutAlloc", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSInGameUtility_eventScoopFromPool_Parms), &Z_Construct_UFunction_UELSSInGameUtility_ScoopFromPool_Statics::NewProp_ifNotEnoughReuseWithoutAlloc_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSInGameUtility_ScoopFromPool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameUtility_eventScoopFromPool_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSInGameUtility_ScoopFromPool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameUtility_ScoopFromPool_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameUtility_ScoopFromPool_Statics::NewProp_actorClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameUtility_ScoopFromPool_Statics::NewProp_Transform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameUtility_ScoopFromPool_Statics::NewProp_ifNotEnoughReuseWithoutAlloc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameUtility_ScoopFromPool_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameUtility_ScoopFromPool_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSInGameUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSInGameUtility_ScoopFromPool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSInGameUtility, nullptr, "ScoopFromPool", nullptr, nullptr, sizeof(ELSSInGameUtility_eventScoopFromPool_Parms), Z_Construct_UFunction_UELSSInGameUtility_ScoopFromPool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameUtility_ScoopFromPool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameUtility_ScoopFromPool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameUtility_ScoopFromPool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSInGameUtility_ScoopFromPool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSInGameUtility_ScoopFromPool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSInGameUtility_SetSubLevelVisible_Statics
	{
		struct ELSSInGameUtility_eventSetSubLevelVisible_Parms
		{
			const UObject* WorldContextObject;
			UWorld* World;
			FName LevelName;
			bool bVisible;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_LevelName;
		static void NewProp_bVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bVisible;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameUtility_SetSubLevelVisible_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSInGameUtility_SetSubLevelVisible_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameUtility_eventSetSubLevelVisible_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameUtility_SetSubLevelVisible_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameUtility_SetSubLevelVisible_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSInGameUtility_SetSubLevelVisible_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameUtility_eventSetSubLevelVisible_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameUtility_SetSubLevelVisible_Statics::NewProp_LevelName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UELSSInGameUtility_SetSubLevelVisible_Statics::NewProp_LevelName = { "LevelName", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameUtility_eventSetSubLevelVisible_Parms, LevelName), METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameUtility_SetSubLevelVisible_Statics::NewProp_LevelName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameUtility_SetSubLevelVisible_Statics::NewProp_LevelName_MetaData)) };
	void Z_Construct_UFunction_UELSSInGameUtility_SetSubLevelVisible_Statics::NewProp_bVisible_SetBit(void* Obj)
	{
		((ELSSInGameUtility_eventSetSubLevelVisible_Parms*)Obj)->bVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSInGameUtility_SetSubLevelVisible_Statics::NewProp_bVisible = { "bVisible", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSInGameUtility_eventSetSubLevelVisible_Parms), &Z_Construct_UFunction_UELSSInGameUtility_SetSubLevelVisible_Statics::NewProp_bVisible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSInGameUtility_SetSubLevelVisible_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameUtility_SetSubLevelVisible_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameUtility_SetSubLevelVisible_Statics::NewProp_World,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameUtility_SetSubLevelVisible_Statics::NewProp_LevelName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameUtility_SetSubLevelVisible_Statics::NewProp_bVisible,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameUtility_SetSubLevelVisible_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSInGameUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSInGameUtility_SetSubLevelVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSInGameUtility, nullptr, "SetSubLevelVisible", nullptr, nullptr, sizeof(ELSSInGameUtility_eventSetSubLevelVisible_Parms), Z_Construct_UFunction_UELSSInGameUtility_SetSubLevelVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameUtility_SetSubLevelVisible_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameUtility_SetSubLevelVisible_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameUtility_SetSubLevelVisible_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSInGameUtility_SetSubLevelVisible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSInGameUtility_SetSubLevelVisible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSInGameUtility_ShouldPlaySoundInSSMode_Statics
	{
		struct ELSSInGameUtility_eventShouldPlaySoundInSSMode_Parms
		{
			const UObject* WorldContextObject;
			const UMeshComponent* inMeshComp;
			const USoundAtomCue* InCue;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inMeshComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inMeshComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InCue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InCue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameUtility_ShouldPlaySoundInSSMode_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSInGameUtility_ShouldPlaySoundInSSMode_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameUtility_eventShouldPlaySoundInSSMode_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameUtility_ShouldPlaySoundInSSMode_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameUtility_ShouldPlaySoundInSSMode_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameUtility_ShouldPlaySoundInSSMode_Statics::NewProp_inMeshComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSInGameUtility_ShouldPlaySoundInSSMode_Statics::NewProp_inMeshComp = { "inMeshComp", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameUtility_eventShouldPlaySoundInSSMode_Parms, inMeshComp), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameUtility_ShouldPlaySoundInSSMode_Statics::NewProp_inMeshComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameUtility_ShouldPlaySoundInSSMode_Statics::NewProp_inMeshComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameUtility_ShouldPlaySoundInSSMode_Statics::NewProp_InCue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSInGameUtility_ShouldPlaySoundInSSMode_Statics::NewProp_InCue = { "InCue", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameUtility_eventShouldPlaySoundInSSMode_Parms, InCue), Z_Construct_UClass_USoundAtomCue_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameUtility_ShouldPlaySoundInSSMode_Statics::NewProp_InCue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameUtility_ShouldPlaySoundInSSMode_Statics::NewProp_InCue_MetaData)) };
	void Z_Construct_UFunction_UELSSInGameUtility_ShouldPlaySoundInSSMode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSInGameUtility_eventShouldPlaySoundInSSMode_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSInGameUtility_ShouldPlaySoundInSSMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSInGameUtility_eventShouldPlaySoundInSSMode_Parms), &Z_Construct_UFunction_UELSSInGameUtility_ShouldPlaySoundInSSMode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSInGameUtility_ShouldPlaySoundInSSMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameUtility_ShouldPlaySoundInSSMode_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameUtility_ShouldPlaySoundInSSMode_Statics::NewProp_inMeshComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameUtility_ShouldPlaySoundInSSMode_Statics::NewProp_InCue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameUtility_ShouldPlaySoundInSSMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameUtility_ShouldPlaySoundInSSMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSInGameUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSInGameUtility_ShouldPlaySoundInSSMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSInGameUtility, nullptr, "ShouldPlaySoundInSSMode", nullptr, nullptr, sizeof(ELSSInGameUtility_eventShouldPlaySoundInSSMode_Parms), Z_Construct_UFunction_UELSSInGameUtility_ShouldPlaySoundInSSMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameUtility_ShouldPlaySoundInSSMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameUtility_ShouldPlaySoundInSSMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameUtility_ShouldPlaySoundInSSMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSInGameUtility_ShouldPlaySoundInSSMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSInGameUtility_ShouldPlaySoundInSSMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSInGameUtility_SinkToPool_Statics
	{
		struct ELSSInGameUtility_eventSinkToPool_Parms
		{
			const UObject* WorldContextObject;
			AActor* Actor;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameUtility_SinkToPool_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSInGameUtility_SinkToPool_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameUtility_eventSinkToPool_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameUtility_SinkToPool_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameUtility_SinkToPool_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSInGameUtility_SinkToPool_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSInGameUtility_eventSinkToPool_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSInGameUtility_SinkToPool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameUtility_SinkToPool_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameUtility_SinkToPool_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameUtility_SinkToPool_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSInGameUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSInGameUtility_SinkToPool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSInGameUtility, nullptr, "SinkToPool", nullptr, nullptr, sizeof(ELSSInGameUtility_eventSinkToPool_Parms), Z_Construct_UFunction_UELSSInGameUtility_SinkToPool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameUtility_SinkToPool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameUtility_SinkToPool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameUtility_SinkToPool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSInGameUtility_SinkToPool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSInGameUtility_SinkToPool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELSSInGameUtility_NoRegister()
	{
		return UELSSInGameUtility::StaticClass();
	}
	struct Z_Construct_UClass_UELSSInGameUtility_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELSSInGameUtility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELSSInGameUtility_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELSSInGameUtility_AddPool, "AddPool" }, // 438751492
		{ &Z_Construct_UFunction_UELSSInGameUtility_AddValidInteractableObjectToGameState, "AddValidInteractableObjectToGameState" }, // 1652152852
		{ &Z_Construct_UFunction_UELSSInGameUtility_CalcRotateAngleToTarget, "CalcRotateAngleToTarget" }, // 3568872494
		{ &Z_Construct_UFunction_UELSSInGameUtility_FindSubLevel, "FindSubLevel" }, // 283808088
		{ &Z_Construct_UFunction_UELSSInGameUtility_GetFirstLocalSSPlayerController, "GetFirstLocalSSPlayerController" }, // 3758584702
		{ &Z_Construct_UFunction_UELSSInGameUtility_GetLocalPlayerControllers, "GetLocalPlayerControllers" }, // 3488888152
		{ &Z_Construct_UFunction_UELSSInGameUtility_GetSSElapsedTimeForAnalytics, "GetSSElapsedTimeForAnalytics" }, // 3425105278
		{ &Z_Construct_UFunction_UELSSInGameUtility_GetSSElapsedTimeFromReadyState, "GetSSElapsedTimeFromReadyState" }, // 2597212390
		{ &Z_Construct_UFunction_UELSSInGameUtility_GetSSFadeManager, "GetSSFadeManager" }, // 522904032
		{ &Z_Construct_UFunction_UELSSInGameUtility_GetSSGameMode, "GetSSGameMode" }, // 3782765666
		{ &Z_Construct_UFunction_UELSSInGameUtility_GetSSGamePlayElapsedTime, "GetSSGamePlayElapsedTime" }, // 3419241258
		{ &Z_Construct_UFunction_UELSSInGameUtility_GetSSGameState, "GetSSGameState" }, // 138481369
		{ &Z_Construct_UFunction_UELSSInGameUtility_GetSSItemManager, "GetSSItemManager" }, // 1693487525
		{ &Z_Construct_UFunction_UELSSInGameUtility_GetSSLocatorManager, "GetSSLocatorManager" }, // 1321982682
		{ &Z_Construct_UFunction_UELSSInGameUtility_GetSSPlayer, "GetSSPlayer" }, // 2226413919
		{ &Z_Construct_UFunction_UELSSInGameUtility_GetSSPlayerController, "GetSSPlayerController" }, // 3256710892
		{ &Z_Construct_UFunction_UELSSInGameUtility_GetSSRoundManager, "GetSSRoundManager" }, // 3024556573
		{ &Z_Construct_UFunction_UELSSInGameUtility_GetSSRoundTotalTime, "GetSSRoundTotalTime" }, // 2827714567
		{ &Z_Construct_UFunction_UELSSInGameUtility_GetSSSoundManager, "GetSSSoundManager" }, // 3236804172
		{ &Z_Construct_UFunction_UELSSInGameUtility_GetSSVehicleManager, "GetSSVehicleManager" }, // 3321786070
		{ &Z_Construct_UFunction_UELSSInGameUtility_GetStorm, "GetStorm" }, // 301404599
		{ &Z_Construct_UFunction_UELSSInGameUtility_IsDiffAngleBetweenSelfForwardAndDirTargetWithinRange, "IsDiffAngleBetweenSelfForwardAndDirTargetWithinRange" }, // 2365959514
		{ &Z_Construct_UFunction_UELSSInGameUtility_IsSSModeInGame, "IsSSModeInGame" }, // 2118480299
		{ &Z_Construct_UFunction_UELSSInGameUtility_IsSSModeOutGame, "IsSSModeOutGame" }, // 4220284470
		{ &Z_Construct_UFunction_UELSSInGameUtility_NotifySpectatorPremiumFeature, "NotifySpectatorPremiumFeature" }, // 1226592843
		{ &Z_Construct_UFunction_UELSSInGameUtility_RemoveValidInteractableObjectFromGameState, "RemoveValidInteractableObjectFromGameState" }, // 3430061429
		{ &Z_Construct_UFunction_UELSSInGameUtility_ScoopFromPool, "ScoopFromPool" }, // 3384303651
		{ &Z_Construct_UFunction_UELSSInGameUtility_SetSubLevelVisible, "SetSubLevelVisible" }, // 801885785
		{ &Z_Construct_UFunction_UELSSInGameUtility_ShouldPlaySoundInSSMode, "ShouldPlaySoundInSSMode" }, // 2956486812
		{ &Z_Construct_UFunction_UELSSInGameUtility_SinkToPool, "SinkToPool" }, // 3109006473
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSInGameUtility_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSInGameUtility.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSInGameUtility.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELSSInGameUtility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELSSInGameUtility>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELSSInGameUtility_Statics::ClassParams = {
		&UELSSInGameUtility::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELSSInGameUtility_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSInGameUtility_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELSSInGameUtility()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELSSInGameUtility_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELSSInGameUtility, 847657059);
	template<> ABP_200508_API UClass* StaticClass<UELSSInGameUtility>()
	{
		return UELSSInGameUtility::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELSSInGameUtility(Z_Construct_UClass_UELSSInGameUtility, &UELSSInGameUtility::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELSSInGameUtility"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELSSInGameUtility);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
