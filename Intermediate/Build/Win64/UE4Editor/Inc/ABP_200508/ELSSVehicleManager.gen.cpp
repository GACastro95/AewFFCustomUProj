// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSVehicleManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSVehicleManager() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELSSVehicleManager_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSVehicleManager();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSRoundParam();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSVehicleSpawnParamForRound();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSLocator_Vehicle_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSManagerActorInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AELSSVehicleManager::execGetVehicleClass)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_inDatabaseId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSubclassOf<AActor> *)Z_Param__Result=P_THIS->GetVehicleClass(Z_Param_inDatabaseId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSVehicleManager::execLoadAsyncVehicleClasses)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadAsyncVehicleClasses();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSVehicleManager::execOnBeginRound)
	{
		P_GET_STRUCT_REF(FSSRoundParam,Z_Param_Out_inRoundParam);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBeginRound(Z_Param_Out_inRoundParam);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSVehicleManager::execOnEndRound)
	{
		P_GET_STRUCT_REF(FSSRoundParam,Z_Param_Out_inRoundParam);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEndRound(Z_Param_Out_inRoundParam);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSVehicleManager::execOnTickRound)
	{
		P_GET_STRUCT_REF(FSSRoundParam,Z_Param_Out_inRoundParam);
		P_GET_PROPERTY(FFloatProperty,Z_Param_newRoundTime);
		P_GET_PROPERTY(FFloatProperty,Z_Param_prevRoundTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTickRound(Z_Param_Out_inRoundParam,Z_Param_newRoundTime,Z_Param_prevRoundTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSVehicleManager::execSpawnVehicle)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_inVehicleId);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Transform);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->SpawnVehicle(Z_Param_inVehicleId,Z_Param_Out_Transform);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSVehicleManager::execSpawnVehicleFromRound)
	{
		P_GET_STRUCT_REF(FSSVehicleSpawnParamForRound,Z_Param_Out_inSpawnParam);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnVehicleFromRound(Z_Param_Out_inSpawnParam);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSVehicleManager::execSpawnVehicleToLocator)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_inVehicleId);
		P_GET_OBJECT(AELSSLocator_Vehicle,Z_Param_inLocator);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->SpawnVehicleToLocator(Z_Param_inVehicleId,Z_Param_inLocator);
		P_NATIVE_END;
	}
	void AELSSVehicleManager::StaticRegisterNativesAELSSVehicleManager()
	{
		UClass* Class = AELSSVehicleManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetVehicleClass", &AELSSVehicleManager::execGetVehicleClass },
			{ "LoadAsyncVehicleClasses", &AELSSVehicleManager::execLoadAsyncVehicleClasses },
			{ "OnBeginRound", &AELSSVehicleManager::execOnBeginRound },
			{ "OnEndRound", &AELSSVehicleManager::execOnEndRound },
			{ "OnTickRound", &AELSSVehicleManager::execOnTickRound },
			{ "SpawnVehicle", &AELSSVehicleManager::execSpawnVehicle },
			{ "SpawnVehicleFromRound", &AELSSVehicleManager::execSpawnVehicleFromRound },
			{ "SpawnVehicleToLocator", &AELSSVehicleManager::execSpawnVehicleToLocator },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AELSSVehicleManager_GetVehicleClass_Statics
	{
		struct ELSSVehicleManager_eventGetVehicleClass_Parms
		{
			int32 inDatabaseId;
			TSubclassOf<AActor>  ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inDatabaseId;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSVehicleManager_GetVehicleClass_Statics::NewProp_inDatabaseId = { "inDatabaseId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSVehicleManager_eventGetVehicleClass_Parms, inDatabaseId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AELSSVehicleManager_GetVehicleClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSVehicleManager_eventGetVehicleClass_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSVehicleManager_GetVehicleClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSVehicleManager_GetVehicleClass_Statics::NewProp_inDatabaseId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSVehicleManager_GetVehicleClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSVehicleManager_GetVehicleClass_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSVehicleManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSVehicleManager_GetVehicleClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSVehicleManager, nullptr, "GetVehicleClass", nullptr, nullptr, sizeof(ELSSVehicleManager_eventGetVehicleClass_Parms), Z_Construct_UFunction_AELSSVehicleManager_GetVehicleClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSVehicleManager_GetVehicleClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSVehicleManager_GetVehicleClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSVehicleManager_GetVehicleClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSVehicleManager_GetVehicleClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSVehicleManager_GetVehicleClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSVehicleManager_LoadAsyncVehicleClasses_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSVehicleManager_LoadAsyncVehicleClasses_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSVehicleManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSVehicleManager_LoadAsyncVehicleClasses_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSVehicleManager, nullptr, "LoadAsyncVehicleClasses", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSVehicleManager_LoadAsyncVehicleClasses_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSVehicleManager_LoadAsyncVehicleClasses_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSVehicleManager_LoadAsyncVehicleClasses()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSVehicleManager_LoadAsyncVehicleClasses_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSVehicleManager_OnBeginRound_Statics
	{
		struct ELSSVehicleManager_eventOnBeginRound_Parms
		{
			FSSRoundParam inRoundParam;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inRoundParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_inRoundParam;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSVehicleManager_OnBeginRound_Statics::NewProp_inRoundParam_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSVehicleManager_OnBeginRound_Statics::NewProp_inRoundParam = { "inRoundParam", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSVehicleManager_eventOnBeginRound_Parms, inRoundParam), Z_Construct_UScriptStruct_FSSRoundParam, METADATA_PARAMS(Z_Construct_UFunction_AELSSVehicleManager_OnBeginRound_Statics::NewProp_inRoundParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSVehicleManager_OnBeginRound_Statics::NewProp_inRoundParam_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSVehicleManager_OnBeginRound_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSVehicleManager_OnBeginRound_Statics::NewProp_inRoundParam,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSVehicleManager_OnBeginRound_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSVehicleManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSVehicleManager_OnBeginRound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSVehicleManager, nullptr, "OnBeginRound", nullptr, nullptr, sizeof(ELSSVehicleManager_eventOnBeginRound_Parms), Z_Construct_UFunction_AELSSVehicleManager_OnBeginRound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSVehicleManager_OnBeginRound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSVehicleManager_OnBeginRound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSVehicleManager_OnBeginRound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSVehicleManager_OnBeginRound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSVehicleManager_OnBeginRound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSVehicleManager_OnEndRound_Statics
	{
		struct ELSSVehicleManager_eventOnEndRound_Parms
		{
			FSSRoundParam inRoundParam;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inRoundParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_inRoundParam;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSVehicleManager_OnEndRound_Statics::NewProp_inRoundParam_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSVehicleManager_OnEndRound_Statics::NewProp_inRoundParam = { "inRoundParam", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSVehicleManager_eventOnEndRound_Parms, inRoundParam), Z_Construct_UScriptStruct_FSSRoundParam, METADATA_PARAMS(Z_Construct_UFunction_AELSSVehicleManager_OnEndRound_Statics::NewProp_inRoundParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSVehicleManager_OnEndRound_Statics::NewProp_inRoundParam_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSVehicleManager_OnEndRound_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSVehicleManager_OnEndRound_Statics::NewProp_inRoundParam,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSVehicleManager_OnEndRound_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSVehicleManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSVehicleManager_OnEndRound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSVehicleManager, nullptr, "OnEndRound", nullptr, nullptr, sizeof(ELSSVehicleManager_eventOnEndRound_Parms), Z_Construct_UFunction_AELSSVehicleManager_OnEndRound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSVehicleManager_OnEndRound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSVehicleManager_OnEndRound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSVehicleManager_OnEndRound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSVehicleManager_OnEndRound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSVehicleManager_OnEndRound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSVehicleManager_OnTickRound_Statics
	{
		struct ELSSVehicleManager_eventOnTickRound_Parms
		{
			FSSRoundParam inRoundParam;
			float newRoundTime;
			float prevRoundTime;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inRoundParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_inRoundParam;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_newRoundTime;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_prevRoundTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSVehicleManager_OnTickRound_Statics::NewProp_inRoundParam_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSVehicleManager_OnTickRound_Statics::NewProp_inRoundParam = { "inRoundParam", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSVehicleManager_eventOnTickRound_Parms, inRoundParam), Z_Construct_UScriptStruct_FSSRoundParam, METADATA_PARAMS(Z_Construct_UFunction_AELSSVehicleManager_OnTickRound_Statics::NewProp_inRoundParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSVehicleManager_OnTickRound_Statics::NewProp_inRoundParam_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELSSVehicleManager_OnTickRound_Statics::NewProp_newRoundTime = { "newRoundTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSVehicleManager_eventOnTickRound_Parms, newRoundTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AELSSVehicleManager_OnTickRound_Statics::NewProp_prevRoundTime = { "prevRoundTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSVehicleManager_eventOnTickRound_Parms, prevRoundTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSVehicleManager_OnTickRound_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSVehicleManager_OnTickRound_Statics::NewProp_inRoundParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSVehicleManager_OnTickRound_Statics::NewProp_newRoundTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSVehicleManager_OnTickRound_Statics::NewProp_prevRoundTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSVehicleManager_OnTickRound_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSVehicleManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSVehicleManager_OnTickRound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSVehicleManager, nullptr, "OnTickRound", nullptr, nullptr, sizeof(ELSSVehicleManager_eventOnTickRound_Parms), Z_Construct_UFunction_AELSSVehicleManager_OnTickRound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSVehicleManager_OnTickRound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSVehicleManager_OnTickRound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSVehicleManager_OnTickRound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSVehicleManager_OnTickRound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSVehicleManager_OnTickRound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSVehicleManager_SpawnVehicle_Statics
	{
		struct ELSSVehicleManager_eventSpawnVehicle_Parms
		{
			int32 inVehicleId;
			FTransform Transform;
			AActor* ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inVehicleId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSVehicleManager_SpawnVehicle_Statics::NewProp_inVehicleId = { "inVehicleId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSVehicleManager_eventSpawnVehicle_Parms, inVehicleId), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSVehicleManager_SpawnVehicle_Statics::NewProp_Transform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSVehicleManager_SpawnVehicle_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSVehicleManager_eventSpawnVehicle_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_AELSSVehicleManager_SpawnVehicle_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSVehicleManager_SpawnVehicle_Statics::NewProp_Transform_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSVehicleManager_SpawnVehicle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSVehicleManager_eventSpawnVehicle_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSVehicleManager_SpawnVehicle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSVehicleManager_SpawnVehicle_Statics::NewProp_inVehicleId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSVehicleManager_SpawnVehicle_Statics::NewProp_Transform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSVehicleManager_SpawnVehicle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSVehicleManager_SpawnVehicle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSVehicleManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSVehicleManager_SpawnVehicle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSVehicleManager, nullptr, "SpawnVehicle", nullptr, nullptr, sizeof(ELSSVehicleManager_eventSpawnVehicle_Parms), Z_Construct_UFunction_AELSSVehicleManager_SpawnVehicle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSVehicleManager_SpawnVehicle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSVehicleManager_SpawnVehicle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSVehicleManager_SpawnVehicle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSVehicleManager_SpawnVehicle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSVehicleManager_SpawnVehicle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSVehicleManager_SpawnVehicleFromRound_Statics
	{
		struct ELSSVehicleManager_eventSpawnVehicleFromRound_Parms
		{
			FSSVehicleSpawnParamForRound inSpawnParam;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inSpawnParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_inSpawnParam;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSVehicleManager_SpawnVehicleFromRound_Statics::NewProp_inSpawnParam_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSVehicleManager_SpawnVehicleFromRound_Statics::NewProp_inSpawnParam = { "inSpawnParam", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSVehicleManager_eventSpawnVehicleFromRound_Parms, inSpawnParam), Z_Construct_UScriptStruct_FSSVehicleSpawnParamForRound, METADATA_PARAMS(Z_Construct_UFunction_AELSSVehicleManager_SpawnVehicleFromRound_Statics::NewProp_inSpawnParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSVehicleManager_SpawnVehicleFromRound_Statics::NewProp_inSpawnParam_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSVehicleManager_SpawnVehicleFromRound_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSVehicleManager_SpawnVehicleFromRound_Statics::NewProp_inSpawnParam,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSVehicleManager_SpawnVehicleFromRound_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSVehicleManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSVehicleManager_SpawnVehicleFromRound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSVehicleManager, nullptr, "SpawnVehicleFromRound", nullptr, nullptr, sizeof(ELSSVehicleManager_eventSpawnVehicleFromRound_Parms), Z_Construct_UFunction_AELSSVehicleManager_SpawnVehicleFromRound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSVehicleManager_SpawnVehicleFromRound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSVehicleManager_SpawnVehicleFromRound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSVehicleManager_SpawnVehicleFromRound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSVehicleManager_SpawnVehicleFromRound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSVehicleManager_SpawnVehicleFromRound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSVehicleManager_SpawnVehicleToLocator_Statics
	{
		struct ELSSVehicleManager_eventSpawnVehicleToLocator_Parms
		{
			int32 inVehicleId;
			AELSSLocator_Vehicle* inLocator;
			AActor* ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inVehicleId;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inLocator;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSVehicleManager_SpawnVehicleToLocator_Statics::NewProp_inVehicleId = { "inVehicleId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSVehicleManager_eventSpawnVehicleToLocator_Parms, inVehicleId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSVehicleManager_SpawnVehicleToLocator_Statics::NewProp_inLocator = { "inLocator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSVehicleManager_eventSpawnVehicleToLocator_Parms, inLocator), Z_Construct_UClass_AELSSLocator_Vehicle_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AELSSVehicleManager_SpawnVehicleToLocator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSVehicleManager_eventSpawnVehicleToLocator_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSVehicleManager_SpawnVehicleToLocator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSVehicleManager_SpawnVehicleToLocator_Statics::NewProp_inVehicleId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSVehicleManager_SpawnVehicleToLocator_Statics::NewProp_inLocator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSVehicleManager_SpawnVehicleToLocator_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSVehicleManager_SpawnVehicleToLocator_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSVehicleManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSVehicleManager_SpawnVehicleToLocator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSVehicleManager, nullptr, "SpawnVehicleToLocator", nullptr, nullptr, sizeof(ELSSVehicleManager_eventSpawnVehicleToLocator_Parms), Z_Construct_UFunction_AELSSVehicleManager_SpawnVehicleToLocator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSVehicleManager_SpawnVehicleToLocator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSVehicleManager_SpawnVehicleToLocator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSVehicleManager_SpawnVehicleToLocator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSVehicleManager_SpawnVehicleToLocator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSVehicleManager_SpawnVehicleToLocator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AELSSVehicleManager_NoRegister()
	{
		return AELSSVehicleManager::StaticClass();
	}
	struct Z_Construct_UClass_AELSSVehicleManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_LoadedVehicleClassMap_ValueProp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LoadedVehicleClassMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadedVehicleClassMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_LoadedVehicleClassMap;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ValidVehicles_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ValidVehicles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ValidVehicles;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELSSVehicleManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AELSSVehicleManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AELSSVehicleManager_GetVehicleClass, "GetVehicleClass" }, // 1511010914
		{ &Z_Construct_UFunction_AELSSVehicleManager_LoadAsyncVehicleClasses, "LoadAsyncVehicleClasses" }, // 301752009
		{ &Z_Construct_UFunction_AELSSVehicleManager_OnBeginRound, "OnBeginRound" }, // 2880931064
		{ &Z_Construct_UFunction_AELSSVehicleManager_OnEndRound, "OnEndRound" }, // 3415759103
		{ &Z_Construct_UFunction_AELSSVehicleManager_OnTickRound, "OnTickRound" }, // 115345287
		{ &Z_Construct_UFunction_AELSSVehicleManager_SpawnVehicle, "SpawnVehicle" }, // 1232402674
		{ &Z_Construct_UFunction_AELSSVehicleManager_SpawnVehicleFromRound, "SpawnVehicleFromRound" }, // 244320893
		{ &Z_Construct_UFunction_AELSSVehicleManager_SpawnVehicleToLocator, "SpawnVehicleToLocator" }, // 1923668356
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSVehicleManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSVehicleManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSVehicleManager.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AELSSVehicleManager_Statics::NewProp_LoadedVehicleClassMap_ValueProp = { "LoadedVehicleClassMap", nullptr, (EPropertyFlags)0x0004000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AELSSVehicleManager_Statics::NewProp_LoadedVehicleClassMap_Key_KeyProp = { "LoadedVehicleClassMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSVehicleManager_Statics::NewProp_LoadedVehicleClassMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSVehicleManager" },
		{ "ModuleRelativePath", "Public/ELSSVehicleManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_AELSSVehicleManager_Statics::NewProp_LoadedVehicleClassMap = { "LoadedVehicleClassMap", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSVehicleManager, LoadedVehicleClassMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AELSSVehicleManager_Statics::NewProp_LoadedVehicleClassMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSVehicleManager_Statics::NewProp_LoadedVehicleClassMap_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSVehicleManager_Statics::NewProp_ValidVehicles_Inner = { "ValidVehicles", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSVehicleManager_Statics::NewProp_ValidVehicles_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSVehicleManager" },
		{ "ModuleRelativePath", "Public/ELSSVehicleManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AELSSVehicleManager_Statics::NewProp_ValidVehicles = { "ValidVehicles", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSVehicleManager, ValidVehicles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AELSSVehicleManager_Statics::NewProp_ValidVehicles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSVehicleManager_Statics::NewProp_ValidVehicles_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AELSSVehicleManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSVehicleManager_Statics::NewProp_LoadedVehicleClassMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSVehicleManager_Statics::NewProp_LoadedVehicleClassMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSVehicleManager_Statics::NewProp_LoadedVehicleClassMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSVehicleManager_Statics::NewProp_ValidVehicles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSVehicleManager_Statics::NewProp_ValidVehicles,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AELSSVehicleManager_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UELSSManagerActorInterface_NoRegister, (int32)VTABLE_OFFSET(AELSSVehicleManager, IELSSManagerActorInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELSSVehicleManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELSSVehicleManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELSSVehicleManager_Statics::ClassParams = {
		&AELSSVehicleManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AELSSVehicleManager_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AELSSVehicleManager_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AELSSVehicleManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSVehicleManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELSSVehicleManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELSSVehicleManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELSSVehicleManager, 749103788);
	template<> ABP_200508_API UClass* StaticClass<AELSSVehicleManager>()
	{
		return AELSSVehicleManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELSSVehicleManager(Z_Construct_UClass_AELSSVehicleManager, &AELSSVehicleManager::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELSSVehicleManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELSSVehicleManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
