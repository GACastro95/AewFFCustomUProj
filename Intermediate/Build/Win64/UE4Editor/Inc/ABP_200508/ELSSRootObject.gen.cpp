// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSRootObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSRootObject() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELSSRootObject_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSRootObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSGameModeDataManager_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ULevel_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSEndGameReason();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSLocalDebugFlag();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSDebugParam();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSCommonDatabase_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELDebugMenuManager_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSNotice_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UELSSRootObject::execClearLastEndGameReason)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearLastEndGameReason();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSRootObject::execCreateSSModeGameData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UELSSGameModeDataManager**)Z_Param__Result=P_THIS->CreateSSModeGameData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSRootObject::execDeleteSSModeGameData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeleteSSModeGameData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSRootObject::execGetSSGameDataManager)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UELSSGameModeDataManager**)Z_Param__Result=P_THIS->GetSSGameDataManager();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSRootObject::execOnChangeLevel_Native)
	{
		P_GET_OBJECT(ULevel,Z_Param_inLevel);
		P_GET_OBJECT(UWorld,Z_Param_inWorld);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnChangeLevel_Native(Z_Param_inLevel,Z_Param_inWorld);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSRootObject::execOnDestroy)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDestroy_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSRootObject::execOnGameEnd)
	{
		P_GET_ENUM(ESSEndGameReason,Z_Param_inReason);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->OnGameEnd(ESSEndGameReason(Z_Param_inReason));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSRootObject::execOnGameStart)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnGameStart();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSRootObject::execOnInitialize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnInitialize_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSRootObject::execSetLocalDebugFlag)
	{
		P_GET_ENUM(ESSLocalDebugFlag,Z_Param_inFlagType);
		P_GET_UBOOL(Z_Param_IsOn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLocalDebugFlag(ESSLocalDebugFlag(Z_Param_inFlagType),Z_Param_IsOn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSRootObject::execSetSSDebugParam)
	{
		P_GET_STRUCT_REF(FSSDebugParam,Z_Param_Out_inDebugParam);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSSDebugParam(Z_Param_Out_inDebugParam);
		P_NATIVE_END;
	}
	static FName NAME_UELSSRootObject_OnChangeLevel = FName(TEXT("OnChangeLevel"));
	void UELSSRootObject::OnChangeLevel()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELSSRootObject_OnChangeLevel),NULL);
	}
	static FName NAME_UELSSRootObject_OnDestroy = FName(TEXT("OnDestroy"));
	void UELSSRootObject::OnDestroy()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELSSRootObject_OnDestroy),NULL);
	}
	static FName NAME_UELSSRootObject_OnInitialize = FName(TEXT("OnInitialize"));
	void UELSSRootObject::OnInitialize()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELSSRootObject_OnInitialize),NULL);
	}
	static FName NAME_UELSSRootObject_SetVisibleFadeForChangeLevel = FName(TEXT("SetVisibleFadeForChangeLevel"));
	void UELSSRootObject::SetVisibleFadeForChangeLevel(bool inEnable, bool inWithLoadingIcon)
	{
		ELSSRootObject_eventSetVisibleFadeForChangeLevel_Parms Parms;
		Parms.inEnable=inEnable ? true : false;
		Parms.inWithLoadingIcon=inWithLoadingIcon ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UELSSRootObject_SetVisibleFadeForChangeLevel),&Parms);
	}
	void UELSSRootObject::StaticRegisterNativesUELSSRootObject()
	{
		UClass* Class = UELSSRootObject::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearLastEndGameReason", &UELSSRootObject::execClearLastEndGameReason },
			{ "CreateSSModeGameData", &UELSSRootObject::execCreateSSModeGameData },
			{ "DeleteSSModeGameData", &UELSSRootObject::execDeleteSSModeGameData },
			{ "GetSSGameDataManager", &UELSSRootObject::execGetSSGameDataManager },
			{ "OnChangeLevel_Native", &UELSSRootObject::execOnChangeLevel_Native },
			{ "OnDestroy", &UELSSRootObject::execOnDestroy },
			{ "OnGameEnd", &UELSSRootObject::execOnGameEnd },
			{ "OnGameStart", &UELSSRootObject::execOnGameStart },
			{ "OnInitialize", &UELSSRootObject::execOnInitialize },
			{ "SetLocalDebugFlag", &UELSSRootObject::execSetLocalDebugFlag },
			{ "SetSSDebugParam", &UELSSRootObject::execSetSSDebugParam },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELSSRootObject_ClearLastEndGameReason_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSRootObject_ClearLastEndGameReason_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSRootObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSRootObject_ClearLastEndGameReason_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSRootObject, nullptr, "ClearLastEndGameReason", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSRootObject_ClearLastEndGameReason_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSRootObject_ClearLastEndGameReason_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSRootObject_ClearLastEndGameReason()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSRootObject_ClearLastEndGameReason_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSRootObject_CreateSSModeGameData_Statics
	{
		struct ELSSRootObject_eventCreateSSModeGameData_Parms
		{
			UELSSGameModeDataManager* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSRootObject_CreateSSModeGameData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSRootObject_eventCreateSSModeGameData_Parms, ReturnValue), Z_Construct_UClass_UELSSGameModeDataManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSRootObject_CreateSSModeGameData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSRootObject_CreateSSModeGameData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSRootObject_CreateSSModeGameData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSRootObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSRootObject_CreateSSModeGameData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSRootObject, nullptr, "CreateSSModeGameData", nullptr, nullptr, sizeof(ELSSRootObject_eventCreateSSModeGameData_Parms), Z_Construct_UFunction_UELSSRootObject_CreateSSModeGameData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSRootObject_CreateSSModeGameData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSRootObject_CreateSSModeGameData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSRootObject_CreateSSModeGameData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSRootObject_CreateSSModeGameData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSRootObject_CreateSSModeGameData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSRootObject_DeleteSSModeGameData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSRootObject_DeleteSSModeGameData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSRootObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSRootObject_DeleteSSModeGameData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSRootObject, nullptr, "DeleteSSModeGameData", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSRootObject_DeleteSSModeGameData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSRootObject_DeleteSSModeGameData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSRootObject_DeleteSSModeGameData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSRootObject_DeleteSSModeGameData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSRootObject_GetSSGameDataManager_Statics
	{
		struct ELSSRootObject_eventGetSSGameDataManager_Parms
		{
			UELSSGameModeDataManager* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSRootObject_GetSSGameDataManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSRootObject_eventGetSSGameDataManager_Parms, ReturnValue), Z_Construct_UClass_UELSSGameModeDataManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSRootObject_GetSSGameDataManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSRootObject_GetSSGameDataManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSRootObject_GetSSGameDataManager_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSRootObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSRootObject_GetSSGameDataManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSRootObject, nullptr, "GetSSGameDataManager", nullptr, nullptr, sizeof(ELSSRootObject_eventGetSSGameDataManager_Parms), Z_Construct_UFunction_UELSSRootObject_GetSSGameDataManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSRootObject_GetSSGameDataManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSRootObject_GetSSGameDataManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSRootObject_GetSSGameDataManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSRootObject_GetSSGameDataManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSRootObject_GetSSGameDataManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSRootObject_OnChangeLevel_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSRootObject_OnChangeLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSRootObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSRootObject_OnChangeLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSRootObject, nullptr, "OnChangeLevel", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSRootObject_OnChangeLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSRootObject_OnChangeLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSRootObject_OnChangeLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSRootObject_OnChangeLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSRootObject_OnChangeLevel_Native_Statics
	{
		struct ELSSRootObject_eventOnChangeLevel_Native_Parms
		{
			ULevel* inLevel;
			UWorld* inWorld;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inLevel;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inWorld;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSRootObject_OnChangeLevel_Native_Statics::NewProp_inLevel = { "inLevel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSRootObject_eventOnChangeLevel_Native_Parms, inLevel), Z_Construct_UClass_ULevel_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSRootObject_OnChangeLevel_Native_Statics::NewProp_inWorld = { "inWorld", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSRootObject_eventOnChangeLevel_Native_Parms, inWorld), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSRootObject_OnChangeLevel_Native_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSRootObject_OnChangeLevel_Native_Statics::NewProp_inLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSRootObject_OnChangeLevel_Native_Statics::NewProp_inWorld,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSRootObject_OnChangeLevel_Native_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSRootObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSRootObject_OnChangeLevel_Native_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSRootObject, nullptr, "OnChangeLevel_Native", nullptr, nullptr, sizeof(ELSSRootObject_eventOnChangeLevel_Native_Parms), Z_Construct_UFunction_UELSSRootObject_OnChangeLevel_Native_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSRootObject_OnChangeLevel_Native_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSRootObject_OnChangeLevel_Native_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSRootObject_OnChangeLevel_Native_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSRootObject_OnChangeLevel_Native()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSRootObject_OnChangeLevel_Native_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSRootObject_OnDestroy_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSRootObject_OnDestroy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSRootObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSRootObject_OnDestroy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSRootObject, nullptr, "OnDestroy", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSRootObject_OnDestroy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSRootObject_OnDestroy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSRootObject_OnDestroy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSRootObject_OnDestroy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSRootObject_OnGameEnd_Statics
	{
		struct ELSSRootObject_eventOnGameEnd_Parms
		{
			ESSEndGameReason inReason;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_inReason_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_inReason;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSRootObject_OnGameEnd_Statics::NewProp_inReason_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSRootObject_OnGameEnd_Statics::NewProp_inReason = { "inReason", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSRootObject_eventOnGameEnd_Parms, inReason), Z_Construct_UEnum_ABP_200508_ESSEndGameReason, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSRootObject_OnGameEnd_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSRootObject_eventOnGameEnd_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSRootObject_OnGameEnd_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSRootObject_eventOnGameEnd_Parms), &Z_Construct_UFunction_UELSSRootObject_OnGameEnd_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSRootObject_OnGameEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSRootObject_OnGameEnd_Statics::NewProp_inReason_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSRootObject_OnGameEnd_Statics::NewProp_inReason,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSRootObject_OnGameEnd_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSRootObject_OnGameEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSRootObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSRootObject_OnGameEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSRootObject, nullptr, "OnGameEnd", nullptr, nullptr, sizeof(ELSSRootObject_eventOnGameEnd_Parms), Z_Construct_UFunction_UELSSRootObject_OnGameEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSRootObject_OnGameEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSRootObject_OnGameEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSRootObject_OnGameEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSRootObject_OnGameEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSRootObject_OnGameEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSRootObject_OnGameStart_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSRootObject_OnGameStart_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSRootObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSRootObject_OnGameStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSRootObject, nullptr, "OnGameStart", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSRootObject_OnGameStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSRootObject_OnGameStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSRootObject_OnGameStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSRootObject_OnGameStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSRootObject_OnInitialize_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSRootObject_OnInitialize_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSRootObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSRootObject_OnInitialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSRootObject, nullptr, "OnInitialize", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSRootObject_OnInitialize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSRootObject_OnInitialize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSRootObject_OnInitialize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSRootObject_OnInitialize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSRootObject_SetLocalDebugFlag_Statics
	{
		struct ELSSRootObject_eventSetLocalDebugFlag_Parms
		{
			ESSLocalDebugFlag inFlagType;
			bool IsOn;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_inFlagType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_inFlagType;
		static void NewProp_IsOn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsOn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSRootObject_SetLocalDebugFlag_Statics::NewProp_inFlagType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSRootObject_SetLocalDebugFlag_Statics::NewProp_inFlagType = { "inFlagType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSRootObject_eventSetLocalDebugFlag_Parms, inFlagType), Z_Construct_UEnum_ABP_200508_ESSLocalDebugFlag, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSRootObject_SetLocalDebugFlag_Statics::NewProp_IsOn_SetBit(void* Obj)
	{
		((ELSSRootObject_eventSetLocalDebugFlag_Parms*)Obj)->IsOn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSRootObject_SetLocalDebugFlag_Statics::NewProp_IsOn = { "IsOn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSRootObject_eventSetLocalDebugFlag_Parms), &Z_Construct_UFunction_UELSSRootObject_SetLocalDebugFlag_Statics::NewProp_IsOn_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSRootObject_SetLocalDebugFlag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSRootObject_SetLocalDebugFlag_Statics::NewProp_inFlagType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSRootObject_SetLocalDebugFlag_Statics::NewProp_inFlagType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSRootObject_SetLocalDebugFlag_Statics::NewProp_IsOn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSRootObject_SetLocalDebugFlag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSRootObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSRootObject_SetLocalDebugFlag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSRootObject, nullptr, "SetLocalDebugFlag", nullptr, nullptr, sizeof(ELSSRootObject_eventSetLocalDebugFlag_Parms), Z_Construct_UFunction_UELSSRootObject_SetLocalDebugFlag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSRootObject_SetLocalDebugFlag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSRootObject_SetLocalDebugFlag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSRootObject_SetLocalDebugFlag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSRootObject_SetLocalDebugFlag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSRootObject_SetLocalDebugFlag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSRootObject_SetSSDebugParam_Statics
	{
		struct ELSSRootObject_eventSetSSDebugParam_Parms
		{
			FSSDebugParam inDebugParam;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inDebugParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_inDebugParam;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSRootObject_SetSSDebugParam_Statics::NewProp_inDebugParam_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSRootObject_SetSSDebugParam_Statics::NewProp_inDebugParam = { "inDebugParam", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSRootObject_eventSetSSDebugParam_Parms, inDebugParam), Z_Construct_UScriptStruct_FSSDebugParam, METADATA_PARAMS(Z_Construct_UFunction_UELSSRootObject_SetSSDebugParam_Statics::NewProp_inDebugParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSRootObject_SetSSDebugParam_Statics::NewProp_inDebugParam_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSRootObject_SetSSDebugParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSRootObject_SetSSDebugParam_Statics::NewProp_inDebugParam,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSRootObject_SetSSDebugParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSRootObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSRootObject_SetSSDebugParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSRootObject, nullptr, "SetSSDebugParam", nullptr, nullptr, sizeof(ELSSRootObject_eventSetSSDebugParam_Parms), Z_Construct_UFunction_UELSSRootObject_SetSSDebugParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSRootObject_SetSSDebugParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSRootObject_SetSSDebugParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSRootObject_SetSSDebugParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSRootObject_SetSSDebugParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSRootObject_SetSSDebugParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSRootObject_SetVisibleFadeForChangeLevel_Statics
	{
		static void NewProp_inEnable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_inEnable;
		static void NewProp_inWithLoadingIcon_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_inWithLoadingIcon;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELSSRootObject_SetVisibleFadeForChangeLevel_Statics::NewProp_inEnable_SetBit(void* Obj)
	{
		((ELSSRootObject_eventSetVisibleFadeForChangeLevel_Parms*)Obj)->inEnable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSRootObject_SetVisibleFadeForChangeLevel_Statics::NewProp_inEnable = { "inEnable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSRootObject_eventSetVisibleFadeForChangeLevel_Parms), &Z_Construct_UFunction_UELSSRootObject_SetVisibleFadeForChangeLevel_Statics::NewProp_inEnable_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSRootObject_SetVisibleFadeForChangeLevel_Statics::NewProp_inWithLoadingIcon_SetBit(void* Obj)
	{
		((ELSSRootObject_eventSetVisibleFadeForChangeLevel_Parms*)Obj)->inWithLoadingIcon = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSRootObject_SetVisibleFadeForChangeLevel_Statics::NewProp_inWithLoadingIcon = { "inWithLoadingIcon", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSRootObject_eventSetVisibleFadeForChangeLevel_Parms), &Z_Construct_UFunction_UELSSRootObject_SetVisibleFadeForChangeLevel_Statics::NewProp_inWithLoadingIcon_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSRootObject_SetVisibleFadeForChangeLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSRootObject_SetVisibleFadeForChangeLevel_Statics::NewProp_inEnable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSRootObject_SetVisibleFadeForChangeLevel_Statics::NewProp_inWithLoadingIcon,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSRootObject_SetVisibleFadeForChangeLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSRootObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSRootObject_SetVisibleFadeForChangeLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSRootObject, nullptr, "SetVisibleFadeForChangeLevel", nullptr, nullptr, sizeof(ELSSRootObject_eventSetVisibleFadeForChangeLevel_Parms), Z_Construct_UFunction_UELSSRootObject_SetVisibleFadeForChangeLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSRootObject_SetVisibleFadeForChangeLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSRootObject_SetVisibleFadeForChangeLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSRootObject_SetVisibleFadeForChangeLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSRootObject_SetVisibleFadeForChangeLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSRootObject_SetVisibleFadeForChangeLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELSSRootObject_NoRegister()
	{
		return UELSSRootObject::StaticClass();
	}
	struct Z_Construct_UClass_UELSSRootObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SSModePlayCountToDay_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SSModePlayCountToDay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pSSGameDataManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pSSGameDataManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CommonDatabase_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CommonDatabase;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LastEndGameReason_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastEndGameReason_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LastEndGameReason;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalInGameFlag_MetaData[];
#endif
		static void NewProp_LocalInGameFlag_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_LocalInGameFlag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VisibleFadeForChangeLevel_MetaData[];
#endif
		static void NewProp_VisibleFadeForChangeLevel_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_VisibleFadeForChangeLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SSDebugParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SSDebugParam;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugMenuManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DebugMenuManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Notice_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Notice;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELSSRootObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELSSRootObject_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELSSRootObject_ClearLastEndGameReason, "ClearLastEndGameReason" }, // 1979114701
		{ &Z_Construct_UFunction_UELSSRootObject_CreateSSModeGameData, "CreateSSModeGameData" }, // 4119661081
		{ &Z_Construct_UFunction_UELSSRootObject_DeleteSSModeGameData, "DeleteSSModeGameData" }, // 3870131793
		{ &Z_Construct_UFunction_UELSSRootObject_GetSSGameDataManager, "GetSSGameDataManager" }, // 940903515
		{ &Z_Construct_UFunction_UELSSRootObject_OnChangeLevel, "OnChangeLevel" }, // 3430562334
		{ &Z_Construct_UFunction_UELSSRootObject_OnChangeLevel_Native, "OnChangeLevel_Native" }, // 2394179354
		{ &Z_Construct_UFunction_UELSSRootObject_OnDestroy, "OnDestroy" }, // 2182275400
		{ &Z_Construct_UFunction_UELSSRootObject_OnGameEnd, "OnGameEnd" }, // 3996904104
		{ &Z_Construct_UFunction_UELSSRootObject_OnGameStart, "OnGameStart" }, // 322599713
		{ &Z_Construct_UFunction_UELSSRootObject_OnInitialize, "OnInitialize" }, // 333802320
		{ &Z_Construct_UFunction_UELSSRootObject_SetLocalDebugFlag, "SetLocalDebugFlag" }, // 443558340
		{ &Z_Construct_UFunction_UELSSRootObject_SetSSDebugParam, "SetSSDebugParam" }, // 3271906873
		{ &Z_Construct_UFunction_UELSSRootObject_SetVisibleFadeForChangeLevel, "SetVisibleFadeForChangeLevel" }, // 3166941451
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSRootObject_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSRootObject.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSRootObject.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSRootObject_Statics::NewProp_SSModePlayCountToDay_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSRootObject" },
		{ "ModuleRelativePath", "Public/ELSSRootObject.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UELSSRootObject_Statics::NewProp_SSModePlayCountToDay = { "SSModePlayCountToDay", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSRootObject, SSModePlayCountToDay), METADATA_PARAMS(Z_Construct_UClass_UELSSRootObject_Statics::NewProp_SSModePlayCountToDay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSRootObject_Statics::NewProp_SSModePlayCountToDay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSRootObject_Statics::NewProp_m_pSSGameDataManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSRootObject" },
		{ "ModuleRelativePath", "Public/ELSSRootObject.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSRootObject_Statics::NewProp_m_pSSGameDataManager = { "m_pSSGameDataManager", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSRootObject, m_pSSGameDataManager), Z_Construct_UClass_UELSSGameModeDataManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSRootObject_Statics::NewProp_m_pSSGameDataManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSRootObject_Statics::NewProp_m_pSSGameDataManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSRootObject_Statics::NewProp_CommonDatabase_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSRootObject" },
		{ "ModuleRelativePath", "Public/ELSSRootObject.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSRootObject_Statics::NewProp_CommonDatabase = { "CommonDatabase", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSRootObject, CommonDatabase), Z_Construct_UClass_UELSSCommonDatabase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSRootObject_Statics::NewProp_CommonDatabase_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSRootObject_Statics::NewProp_CommonDatabase_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UELSSRootObject_Statics::NewProp_LastEndGameReason_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSRootObject_Statics::NewProp_LastEndGameReason_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSRootObject" },
		{ "ModuleRelativePath", "Public/ELSSRootObject.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UELSSRootObject_Statics::NewProp_LastEndGameReason = { "LastEndGameReason", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSRootObject, LastEndGameReason), Z_Construct_UEnum_ABP_200508_ESSEndGameReason, METADATA_PARAMS(Z_Construct_UClass_UELSSRootObject_Statics::NewProp_LastEndGameReason_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSRootObject_Statics::NewProp_LastEndGameReason_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSRootObject_Statics::NewProp_LocalInGameFlag_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSRootObject" },
		{ "ModuleRelativePath", "Public/ELSSRootObject.h" },
	};
#endif
	void Z_Construct_UClass_UELSSRootObject_Statics::NewProp_LocalInGameFlag_SetBit(void* Obj)
	{
		((UELSSRootObject*)Obj)->LocalInGameFlag = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELSSRootObject_Statics::NewProp_LocalInGameFlag = { "LocalInGameFlag", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELSSRootObject), &Z_Construct_UClass_UELSSRootObject_Statics::NewProp_LocalInGameFlag_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELSSRootObject_Statics::NewProp_LocalInGameFlag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSRootObject_Statics::NewProp_LocalInGameFlag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSRootObject_Statics::NewProp_VisibleFadeForChangeLevel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSRootObject" },
		{ "ModuleRelativePath", "Public/ELSSRootObject.h" },
	};
#endif
	void Z_Construct_UClass_UELSSRootObject_Statics::NewProp_VisibleFadeForChangeLevel_SetBit(void* Obj)
	{
		((UELSSRootObject*)Obj)->VisibleFadeForChangeLevel = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELSSRootObject_Statics::NewProp_VisibleFadeForChangeLevel = { "VisibleFadeForChangeLevel", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELSSRootObject), &Z_Construct_UClass_UELSSRootObject_Statics::NewProp_VisibleFadeForChangeLevel_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELSSRootObject_Statics::NewProp_VisibleFadeForChangeLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSRootObject_Statics::NewProp_VisibleFadeForChangeLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSRootObject_Statics::NewProp_SSDebugParam_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSRootObject" },
		{ "ModuleRelativePath", "Public/ELSSRootObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELSSRootObject_Statics::NewProp_SSDebugParam = { "SSDebugParam", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSRootObject, SSDebugParam), Z_Construct_UScriptStruct_FSSDebugParam, METADATA_PARAMS(Z_Construct_UClass_UELSSRootObject_Statics::NewProp_SSDebugParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSRootObject_Statics::NewProp_SSDebugParam_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSRootObject_Statics::NewProp_DebugMenuManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSRootObject" },
		{ "ModuleRelativePath", "Public/ELSSRootObject.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSRootObject_Statics::NewProp_DebugMenuManager = { "DebugMenuManager", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSRootObject, DebugMenuManager), Z_Construct_UClass_UELDebugMenuManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSRootObject_Statics::NewProp_DebugMenuManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSRootObject_Statics::NewProp_DebugMenuManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSRootObject_Statics::NewProp_Notice_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSRootObject" },
		{ "ModuleRelativePath", "Public/ELSSRootObject.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSRootObject_Statics::NewProp_Notice = { "Notice", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSRootObject, Notice), Z_Construct_UClass_UELSSNotice_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSRootObject_Statics::NewProp_Notice_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSRootObject_Statics::NewProp_Notice_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELSSRootObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSRootObject_Statics::NewProp_SSModePlayCountToDay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSRootObject_Statics::NewProp_m_pSSGameDataManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSRootObject_Statics::NewProp_CommonDatabase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSRootObject_Statics::NewProp_LastEndGameReason_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSRootObject_Statics::NewProp_LastEndGameReason,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSRootObject_Statics::NewProp_LocalInGameFlag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSRootObject_Statics::NewProp_VisibleFadeForChangeLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSRootObject_Statics::NewProp_SSDebugParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSRootObject_Statics::NewProp_DebugMenuManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSRootObject_Statics::NewProp_Notice,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELSSRootObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELSSRootObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELSSRootObject_Statics::ClassParams = {
		&UELSSRootObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELSSRootObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELSSRootObject_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELSSRootObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSRootObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELSSRootObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELSSRootObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELSSRootObject, 217979081);
	template<> ABP_200508_API UClass* StaticClass<UELSSRootObject>()
	{
		return UELSSRootObject::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELSSRootObject(Z_Construct_UClass_UELSSRootObject, &UELSSRootObject::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELSSRootObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELSSRootObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
