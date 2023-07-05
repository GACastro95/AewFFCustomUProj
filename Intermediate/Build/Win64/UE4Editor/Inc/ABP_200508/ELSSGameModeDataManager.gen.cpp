// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSGameModeDataManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSGameModeDataManager() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELSSGameModeDataManager_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSGameModeDataManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSPlayerEquipSettings();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSWrestlerType();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EWrestlerID_N();
	ABP_200508_API UClass* Z_Construct_UClass_USSMenuWrestlerSelectData_NoRegister();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSPlayerRankParam();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSStampedeRankParam();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSUserData_NoRegister();
	YGS2CLIENT_API UScriptStruct* Z_Construct_UScriptStruct_FYGS2SSPlayerData();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_SSGameDataUpdateEvent__DelegateSignature();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSLoadoutSettings();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSWrestlerSettings();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSLastPlayRecord();
// End Cross Module References
	DEFINE_FUNCTION(UELSSGameModeDataManager::execCheckSelectedWrestlerIsValid)
	{
		P_GET_UBOOL(Z_Param_inUGCLimit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CheckSelectedWrestlerIsValid(Z_Param_inUGCLimit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSGameModeDataManager::execGetPlayerEquipSettings)
	{
		P_GET_STRUCT_REF(FSSPlayerEquipSettings,Z_Param_Out_outEquipData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetPlayerEquipSettings(Z_Param_Out_outEquipData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSGameModeDataManager::execGetSelectedEditWrestlerType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESSWrestlerType*)Z_Param__Result=P_THIS->GetSelectedEditWrestlerType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSGameModeDataManager::execGetSelectedWrestlerID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EWrestlerID_N*)Z_Param__Result=P_THIS->GetSelectedWrestlerID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSGameModeDataManager::execGetSSMenuWrestlerSelectData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USSMenuWrestlerSelectData**)Z_Param__Result=P_THIS->GetSSMenuWrestlerSelectData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSGameModeDataManager::execGetSSPlayerRankTable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FSSPlayerRankParam>*)Z_Param__Result=P_THIS->GetSSPlayerRankTable();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSGameModeDataManager::execGetSSStampedeRankTable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FSSStampedeRankParam>*)Z_Param__Result=P_THIS->GetSSStampedeRankTable();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSGameModeDataManager::execGetSSTempPlayerNetworkID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetSSTempPlayerNetworkID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSGameModeDataManager::execGetSSUserData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UELSSUserData**)Z_Param__Result=P_THIS->GetSSUserData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSGameModeDataManager::execSetPlayerEquipSettings)
	{
		P_GET_STRUCT_REF(FSSPlayerEquipSettings,Z_Param_Out_inEquipData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPlayerEquipSettings(Z_Param_Out_inEquipData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSGameModeDataManager::execSetSSTempPlayerNetworkID)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_pid);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSSTempPlayerNetworkID(Z_Param_pid);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSGameModeDataManager::execSetSSUserData)
	{
		P_GET_STRUCT_REF(FYGS2SSPlayerData,Z_Param_Out_dat);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSSUserData(Z_Param_Out_dat);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSGameModeDataManager::execSetSSUserDataToDummy)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSSUserDataToDummy();
		P_NATIVE_END;
	}
	void UELSSGameModeDataManager::StaticRegisterNativesUELSSGameModeDataManager()
	{
		UClass* Class = UELSSGameModeDataManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CheckSelectedWrestlerIsValid", &UELSSGameModeDataManager::execCheckSelectedWrestlerIsValid },
			{ "GetPlayerEquipSettings", &UELSSGameModeDataManager::execGetPlayerEquipSettings },
			{ "GetSelectedEditWrestlerType", &UELSSGameModeDataManager::execGetSelectedEditWrestlerType },
			{ "GetSelectedWrestlerID", &UELSSGameModeDataManager::execGetSelectedWrestlerID },
			{ "GetSSMenuWrestlerSelectData", &UELSSGameModeDataManager::execGetSSMenuWrestlerSelectData },
			{ "GetSSPlayerRankTable", &UELSSGameModeDataManager::execGetSSPlayerRankTable },
			{ "GetSSStampedeRankTable", &UELSSGameModeDataManager::execGetSSStampedeRankTable },
			{ "GetSSTempPlayerNetworkID", &UELSSGameModeDataManager::execGetSSTempPlayerNetworkID },
			{ "GetSSUserData", &UELSSGameModeDataManager::execGetSSUserData },
			{ "SetPlayerEquipSettings", &UELSSGameModeDataManager::execSetPlayerEquipSettings },
			{ "SetSSTempPlayerNetworkID", &UELSSGameModeDataManager::execSetSSTempPlayerNetworkID },
			{ "SetSSUserData", &UELSSGameModeDataManager::execSetSSUserData },
			{ "SetSSUserDataToDummy", &UELSSGameModeDataManager::execSetSSUserDataToDummy },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELSSGameModeDataManager_CheckSelectedWrestlerIsValid_Statics
	{
		struct ELSSGameModeDataManager_eventCheckSelectedWrestlerIsValid_Parms
		{
			bool inUGCLimit;
		};
		static void NewProp_inUGCLimit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_inUGCLimit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELSSGameModeDataManager_CheckSelectedWrestlerIsValid_Statics::NewProp_inUGCLimit_SetBit(void* Obj)
	{
		((ELSSGameModeDataManager_eventCheckSelectedWrestlerIsValid_Parms*)Obj)->inUGCLimit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSGameModeDataManager_CheckSelectedWrestlerIsValid_Statics::NewProp_inUGCLimit = { "inUGCLimit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSGameModeDataManager_eventCheckSelectedWrestlerIsValid_Parms), &Z_Construct_UFunction_UELSSGameModeDataManager_CheckSelectedWrestlerIsValid_Statics::NewProp_inUGCLimit_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSGameModeDataManager_CheckSelectedWrestlerIsValid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSGameModeDataManager_CheckSelectedWrestlerIsValid_Statics::NewProp_inUGCLimit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSGameModeDataManager_CheckSelectedWrestlerIsValid_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameModeDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSGameModeDataManager_CheckSelectedWrestlerIsValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSGameModeDataManager, nullptr, "CheckSelectedWrestlerIsValid", nullptr, nullptr, sizeof(ELSSGameModeDataManager_eventCheckSelectedWrestlerIsValid_Parms), Z_Construct_UFunction_UELSSGameModeDataManager_CheckSelectedWrestlerIsValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSGameModeDataManager_CheckSelectedWrestlerIsValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSGameModeDataManager_CheckSelectedWrestlerIsValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSGameModeDataManager_CheckSelectedWrestlerIsValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSGameModeDataManager_CheckSelectedWrestlerIsValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSGameModeDataManager_CheckSelectedWrestlerIsValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSGameModeDataManager_GetPlayerEquipSettings_Statics
	{
		struct ELSSGameModeDataManager_eventGetPlayerEquipSettings_Parms
		{
			FSSPlayerEquipSettings outEquipData;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_outEquipData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSGameModeDataManager_GetPlayerEquipSettings_Statics::NewProp_outEquipData = { "outEquipData", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameModeDataManager_eventGetPlayerEquipSettings_Parms, outEquipData), Z_Construct_UScriptStruct_FSSPlayerEquipSettings, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSGameModeDataManager_GetPlayerEquipSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSGameModeDataManager_GetPlayerEquipSettings_Statics::NewProp_outEquipData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSGameModeDataManager_GetPlayerEquipSettings_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameModeDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSGameModeDataManager_GetPlayerEquipSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSGameModeDataManager, nullptr, "GetPlayerEquipSettings", nullptr, nullptr, sizeof(ELSSGameModeDataManager_eventGetPlayerEquipSettings_Parms), Z_Construct_UFunction_UELSSGameModeDataManager_GetPlayerEquipSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSGameModeDataManager_GetPlayerEquipSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSGameModeDataManager_GetPlayerEquipSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSGameModeDataManager_GetPlayerEquipSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSGameModeDataManager_GetPlayerEquipSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSGameModeDataManager_GetPlayerEquipSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSGameModeDataManager_GetSelectedEditWrestlerType_Statics
	{
		struct ELSSGameModeDataManager_eventGetSelectedEditWrestlerType_Parms
		{
			ESSWrestlerType ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSGameModeDataManager_GetSelectedEditWrestlerType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSGameModeDataManager_GetSelectedEditWrestlerType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameModeDataManager_eventGetSelectedEditWrestlerType_Parms, ReturnValue), Z_Construct_UEnum_ABP_200508_ESSWrestlerType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSGameModeDataManager_GetSelectedEditWrestlerType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSGameModeDataManager_GetSelectedEditWrestlerType_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSGameModeDataManager_GetSelectedEditWrestlerType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSGameModeDataManager_GetSelectedEditWrestlerType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameModeDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSGameModeDataManager_GetSelectedEditWrestlerType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSGameModeDataManager, nullptr, "GetSelectedEditWrestlerType", nullptr, nullptr, sizeof(ELSSGameModeDataManager_eventGetSelectedEditWrestlerType_Parms), Z_Construct_UFunction_UELSSGameModeDataManager_GetSelectedEditWrestlerType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSGameModeDataManager_GetSelectedEditWrestlerType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSGameModeDataManager_GetSelectedEditWrestlerType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSGameModeDataManager_GetSelectedEditWrestlerType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSGameModeDataManager_GetSelectedEditWrestlerType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSGameModeDataManager_GetSelectedEditWrestlerType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSGameModeDataManager_GetSelectedWrestlerID_Statics
	{
		struct ELSSGameModeDataManager_eventGetSelectedWrestlerID_Parms
		{
			EWrestlerID_N ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSGameModeDataManager_GetSelectedWrestlerID_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSGameModeDataManager_GetSelectedWrestlerID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameModeDataManager_eventGetSelectedWrestlerID_Parms, ReturnValue), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSGameModeDataManager_GetSelectedWrestlerID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSGameModeDataManager_GetSelectedWrestlerID_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSGameModeDataManager_GetSelectedWrestlerID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSGameModeDataManager_GetSelectedWrestlerID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameModeDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSGameModeDataManager_GetSelectedWrestlerID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSGameModeDataManager, nullptr, "GetSelectedWrestlerID", nullptr, nullptr, sizeof(ELSSGameModeDataManager_eventGetSelectedWrestlerID_Parms), Z_Construct_UFunction_UELSSGameModeDataManager_GetSelectedWrestlerID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSGameModeDataManager_GetSelectedWrestlerID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSGameModeDataManager_GetSelectedWrestlerID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSGameModeDataManager_GetSelectedWrestlerID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSGameModeDataManager_GetSelectedWrestlerID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSGameModeDataManager_GetSelectedWrestlerID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSGameModeDataManager_GetSSMenuWrestlerSelectData_Statics
	{
		struct ELSSGameModeDataManager_eventGetSSMenuWrestlerSelectData_Parms
		{
			USSMenuWrestlerSelectData* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSGameModeDataManager_GetSSMenuWrestlerSelectData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameModeDataManager_eventGetSSMenuWrestlerSelectData_Parms, ReturnValue), Z_Construct_UClass_USSMenuWrestlerSelectData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSGameModeDataManager_GetSSMenuWrestlerSelectData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSGameModeDataManager_GetSSMenuWrestlerSelectData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSGameModeDataManager_GetSSMenuWrestlerSelectData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameModeDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSGameModeDataManager_GetSSMenuWrestlerSelectData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSGameModeDataManager, nullptr, "GetSSMenuWrestlerSelectData", nullptr, nullptr, sizeof(ELSSGameModeDataManager_eventGetSSMenuWrestlerSelectData_Parms), Z_Construct_UFunction_UELSSGameModeDataManager_GetSSMenuWrestlerSelectData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSGameModeDataManager_GetSSMenuWrestlerSelectData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSGameModeDataManager_GetSSMenuWrestlerSelectData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSGameModeDataManager_GetSSMenuWrestlerSelectData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSGameModeDataManager_GetSSMenuWrestlerSelectData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSGameModeDataManager_GetSSMenuWrestlerSelectData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSGameModeDataManager_GetSSPlayerRankTable_Statics
	{
		struct ELSSGameModeDataManager_eventGetSSPlayerRankTable_Parms
		{
			TArray<FSSPlayerRankParam> ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSGameModeDataManager_GetSSPlayerRankTable_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSSPlayerRankParam, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELSSGameModeDataManager_GetSSPlayerRankTable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameModeDataManager_eventGetSSPlayerRankTable_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSGameModeDataManager_GetSSPlayerRankTable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSGameModeDataManager_GetSSPlayerRankTable_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSGameModeDataManager_GetSSPlayerRankTable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSGameModeDataManager_GetSSPlayerRankTable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameModeDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSGameModeDataManager_GetSSPlayerRankTable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSGameModeDataManager, nullptr, "GetSSPlayerRankTable", nullptr, nullptr, sizeof(ELSSGameModeDataManager_eventGetSSPlayerRankTable_Parms), Z_Construct_UFunction_UELSSGameModeDataManager_GetSSPlayerRankTable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSGameModeDataManager_GetSSPlayerRankTable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSGameModeDataManager_GetSSPlayerRankTable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSGameModeDataManager_GetSSPlayerRankTable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSGameModeDataManager_GetSSPlayerRankTable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSGameModeDataManager_GetSSPlayerRankTable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSGameModeDataManager_GetSSStampedeRankTable_Statics
	{
		struct ELSSGameModeDataManager_eventGetSSStampedeRankTable_Parms
		{
			TArray<FSSStampedeRankParam> ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSGameModeDataManager_GetSSStampedeRankTable_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSSStampedeRankParam, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELSSGameModeDataManager_GetSSStampedeRankTable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameModeDataManager_eventGetSSStampedeRankTable_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSGameModeDataManager_GetSSStampedeRankTable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSGameModeDataManager_GetSSStampedeRankTable_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSGameModeDataManager_GetSSStampedeRankTable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSGameModeDataManager_GetSSStampedeRankTable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameModeDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSGameModeDataManager_GetSSStampedeRankTable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSGameModeDataManager, nullptr, "GetSSStampedeRankTable", nullptr, nullptr, sizeof(ELSSGameModeDataManager_eventGetSSStampedeRankTable_Parms), Z_Construct_UFunction_UELSSGameModeDataManager_GetSSStampedeRankTable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSGameModeDataManager_GetSSStampedeRankTable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSGameModeDataManager_GetSSStampedeRankTable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSGameModeDataManager_GetSSStampedeRankTable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSGameModeDataManager_GetSSStampedeRankTable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSGameModeDataManager_GetSSStampedeRankTable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSGameModeDataManager_GetSSTempPlayerNetworkID_Statics
	{
		struct ELSSGameModeDataManager_eventGetSSTempPlayerNetworkID_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELSSGameModeDataManager_GetSSTempPlayerNetworkID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameModeDataManager_eventGetSSTempPlayerNetworkID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSGameModeDataManager_GetSSTempPlayerNetworkID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSGameModeDataManager_GetSSTempPlayerNetworkID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSGameModeDataManager_GetSSTempPlayerNetworkID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameModeDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSGameModeDataManager_GetSSTempPlayerNetworkID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSGameModeDataManager, nullptr, "GetSSTempPlayerNetworkID", nullptr, nullptr, sizeof(ELSSGameModeDataManager_eventGetSSTempPlayerNetworkID_Parms), Z_Construct_UFunction_UELSSGameModeDataManager_GetSSTempPlayerNetworkID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSGameModeDataManager_GetSSTempPlayerNetworkID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSGameModeDataManager_GetSSTempPlayerNetworkID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSGameModeDataManager_GetSSTempPlayerNetworkID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSGameModeDataManager_GetSSTempPlayerNetworkID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSGameModeDataManager_GetSSTempPlayerNetworkID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSGameModeDataManager_GetSSUserData_Statics
	{
		struct ELSSGameModeDataManager_eventGetSSUserData_Parms
		{
			UELSSUserData* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSGameModeDataManager_GetSSUserData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameModeDataManager_eventGetSSUserData_Parms, ReturnValue), Z_Construct_UClass_UELSSUserData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSGameModeDataManager_GetSSUserData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSGameModeDataManager_GetSSUserData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSGameModeDataManager_GetSSUserData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameModeDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSGameModeDataManager_GetSSUserData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSGameModeDataManager, nullptr, "GetSSUserData", nullptr, nullptr, sizeof(ELSSGameModeDataManager_eventGetSSUserData_Parms), Z_Construct_UFunction_UELSSGameModeDataManager_GetSSUserData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSGameModeDataManager_GetSSUserData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSGameModeDataManager_GetSSUserData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSGameModeDataManager_GetSSUserData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSGameModeDataManager_GetSSUserData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSGameModeDataManager_GetSSUserData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSGameModeDataManager_SetPlayerEquipSettings_Statics
	{
		struct ELSSGameModeDataManager_eventSetPlayerEquipSettings_Parms
		{
			FSSPlayerEquipSettings inEquipData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inEquipData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_inEquipData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSGameModeDataManager_SetPlayerEquipSettings_Statics::NewProp_inEquipData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSGameModeDataManager_SetPlayerEquipSettings_Statics::NewProp_inEquipData = { "inEquipData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameModeDataManager_eventSetPlayerEquipSettings_Parms, inEquipData), Z_Construct_UScriptStruct_FSSPlayerEquipSettings, METADATA_PARAMS(Z_Construct_UFunction_UELSSGameModeDataManager_SetPlayerEquipSettings_Statics::NewProp_inEquipData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSGameModeDataManager_SetPlayerEquipSettings_Statics::NewProp_inEquipData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSGameModeDataManager_SetPlayerEquipSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSGameModeDataManager_SetPlayerEquipSettings_Statics::NewProp_inEquipData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSGameModeDataManager_SetPlayerEquipSettings_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameModeDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSGameModeDataManager_SetPlayerEquipSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSGameModeDataManager, nullptr, "SetPlayerEquipSettings", nullptr, nullptr, sizeof(ELSSGameModeDataManager_eventSetPlayerEquipSettings_Parms), Z_Construct_UFunction_UELSSGameModeDataManager_SetPlayerEquipSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSGameModeDataManager_SetPlayerEquipSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSGameModeDataManager_SetPlayerEquipSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSGameModeDataManager_SetPlayerEquipSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSGameModeDataManager_SetPlayerEquipSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSGameModeDataManager_SetPlayerEquipSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSGameModeDataManager_SetSSTempPlayerNetworkID_Statics
	{
		struct ELSSGameModeDataManager_eventSetSSTempPlayerNetworkID_Parms
		{
			FString pid;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_pid;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSGameModeDataManager_SetSSTempPlayerNetworkID_Statics::NewProp_pid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELSSGameModeDataManager_SetSSTempPlayerNetworkID_Statics::NewProp_pid = { "pid", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameModeDataManager_eventSetSSTempPlayerNetworkID_Parms, pid), METADATA_PARAMS(Z_Construct_UFunction_UELSSGameModeDataManager_SetSSTempPlayerNetworkID_Statics::NewProp_pid_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSGameModeDataManager_SetSSTempPlayerNetworkID_Statics::NewProp_pid_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSGameModeDataManager_SetSSTempPlayerNetworkID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSGameModeDataManager_SetSSTempPlayerNetworkID_Statics::NewProp_pid,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSGameModeDataManager_SetSSTempPlayerNetworkID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameModeDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSGameModeDataManager_SetSSTempPlayerNetworkID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSGameModeDataManager, nullptr, "SetSSTempPlayerNetworkID", nullptr, nullptr, sizeof(ELSSGameModeDataManager_eventSetSSTempPlayerNetworkID_Parms), Z_Construct_UFunction_UELSSGameModeDataManager_SetSSTempPlayerNetworkID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSGameModeDataManager_SetSSTempPlayerNetworkID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSGameModeDataManager_SetSSTempPlayerNetworkID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSGameModeDataManager_SetSSTempPlayerNetworkID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSGameModeDataManager_SetSSTempPlayerNetworkID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSGameModeDataManager_SetSSTempPlayerNetworkID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSGameModeDataManager_SetSSUserData_Statics
	{
		struct ELSSGameModeDataManager_eventSetSSUserData_Parms
		{
			FYGS2SSPlayerData dat;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_dat_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_dat;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSGameModeDataManager_SetSSUserData_Statics::NewProp_dat_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSGameModeDataManager_SetSSUserData_Statics::NewProp_dat = { "dat", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSGameModeDataManager_eventSetSSUserData_Parms, dat), Z_Construct_UScriptStruct_FYGS2SSPlayerData, METADATA_PARAMS(Z_Construct_UFunction_UELSSGameModeDataManager_SetSSUserData_Statics::NewProp_dat_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSGameModeDataManager_SetSSUserData_Statics::NewProp_dat_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSGameModeDataManager_SetSSUserData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSGameModeDataManager_SetSSUserData_Statics::NewProp_dat,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSGameModeDataManager_SetSSUserData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameModeDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSGameModeDataManager_SetSSUserData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSGameModeDataManager, nullptr, "SetSSUserData", nullptr, nullptr, sizeof(ELSSGameModeDataManager_eventSetSSUserData_Parms), Z_Construct_UFunction_UELSSGameModeDataManager_SetSSUserData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSGameModeDataManager_SetSSUserData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSGameModeDataManager_SetSSUserData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSGameModeDataManager_SetSSUserData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSGameModeDataManager_SetSSUserData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSGameModeDataManager_SetSSUserData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSGameModeDataManager_SetSSUserDataToDummy_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSGameModeDataManager_SetSSUserDataToDummy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSGameModeDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSGameModeDataManager_SetSSUserDataToDummy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSGameModeDataManager, nullptr, "SetSSUserDataToDummy", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSGameModeDataManager_SetSSUserDataToDummy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSGameModeDataManager_SetSSUserDataToDummy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSGameModeDataManager_SetSSUserDataToDummy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSGameModeDataManager_SetSSUserDataToDummy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELSSGameModeDataManager_NoRegister()
	{
		return UELSSGameModeDataManager::StaticClass();
	}
	struct Z_Construct_UClass_UELSSGameModeDataManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_onSSDataUpdateEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_onSSDataUpdateEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ssUserData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ssUserData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_selectWrestlerData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_selectWrestlerData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadoutSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LoadoutSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WrestlerSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WrestlerSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastPlayRecord_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LastPlayRecord;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_equipSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_equipSettings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELSSGameModeDataManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELSSGameModeDataManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELSSGameModeDataManager_CheckSelectedWrestlerIsValid, "CheckSelectedWrestlerIsValid" }, // 4228455885
		{ &Z_Construct_UFunction_UELSSGameModeDataManager_GetPlayerEquipSettings, "GetPlayerEquipSettings" }, // 472261370
		{ &Z_Construct_UFunction_UELSSGameModeDataManager_GetSelectedEditWrestlerType, "GetSelectedEditWrestlerType" }, // 534947497
		{ &Z_Construct_UFunction_UELSSGameModeDataManager_GetSelectedWrestlerID, "GetSelectedWrestlerID" }, // 3990556524
		{ &Z_Construct_UFunction_UELSSGameModeDataManager_GetSSMenuWrestlerSelectData, "GetSSMenuWrestlerSelectData" }, // 4058588750
		{ &Z_Construct_UFunction_UELSSGameModeDataManager_GetSSPlayerRankTable, "GetSSPlayerRankTable" }, // 3512056865
		{ &Z_Construct_UFunction_UELSSGameModeDataManager_GetSSStampedeRankTable, "GetSSStampedeRankTable" }, // 748179
		{ &Z_Construct_UFunction_UELSSGameModeDataManager_GetSSTempPlayerNetworkID, "GetSSTempPlayerNetworkID" }, // 122885318
		{ &Z_Construct_UFunction_UELSSGameModeDataManager_GetSSUserData, "GetSSUserData" }, // 3001355655
		{ &Z_Construct_UFunction_UELSSGameModeDataManager_SetPlayerEquipSettings, "SetPlayerEquipSettings" }, // 1432902419
		{ &Z_Construct_UFunction_UELSSGameModeDataManager_SetSSTempPlayerNetworkID, "SetSSTempPlayerNetworkID" }, // 198918885
		{ &Z_Construct_UFunction_UELSSGameModeDataManager_SetSSUserData, "SetSSUserData" }, // 1240688769
		{ &Z_Construct_UFunction_UELSSGameModeDataManager_SetSSUserDataToDummy, "SetSSUserDataToDummy" }, // 3258412606
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSGameModeDataManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSGameModeDataManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSGameModeDataManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSGameModeDataManager_Statics::NewProp_onSSDataUpdateEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameModeDataManager" },
		{ "ModuleRelativePath", "Public/ELSSGameModeDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UELSSGameModeDataManager_Statics::NewProp_onSSDataUpdateEvent = { "onSSDataUpdateEvent", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSGameModeDataManager, onSSDataUpdateEvent), Z_Construct_UDelegateFunction_ABP_200508_SSGameDataUpdateEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UELSSGameModeDataManager_Statics::NewProp_onSSDataUpdateEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSGameModeDataManager_Statics::NewProp_onSSDataUpdateEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSGameModeDataManager_Statics::NewProp_ssUserData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameModeDataManager" },
		{ "ModuleRelativePath", "Public/ELSSGameModeDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSGameModeDataManager_Statics::NewProp_ssUserData = { "ssUserData", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSGameModeDataManager, ssUserData), Z_Construct_UClass_UELSSUserData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSGameModeDataManager_Statics::NewProp_ssUserData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSGameModeDataManager_Statics::NewProp_ssUserData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSGameModeDataManager_Statics::NewProp_selectWrestlerData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameModeDataManager" },
		{ "ModuleRelativePath", "Public/ELSSGameModeDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSGameModeDataManager_Statics::NewProp_selectWrestlerData = { "selectWrestlerData", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSGameModeDataManager, selectWrestlerData), Z_Construct_UClass_USSMenuWrestlerSelectData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSGameModeDataManager_Statics::NewProp_selectWrestlerData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSGameModeDataManager_Statics::NewProp_selectWrestlerData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSGameModeDataManager_Statics::NewProp_LoadoutSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameModeDataManager" },
		{ "ModuleRelativePath", "Public/ELSSGameModeDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELSSGameModeDataManager_Statics::NewProp_LoadoutSettings = { "LoadoutSettings", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(LoadoutSettings, UELSSGameModeDataManager), STRUCT_OFFSET(UELSSGameModeDataManager, LoadoutSettings), Z_Construct_UScriptStruct_FSSLoadoutSettings, METADATA_PARAMS(Z_Construct_UClass_UELSSGameModeDataManager_Statics::NewProp_LoadoutSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSGameModeDataManager_Statics::NewProp_LoadoutSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSGameModeDataManager_Statics::NewProp_WrestlerSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameModeDataManager" },
		{ "ModuleRelativePath", "Public/ELSSGameModeDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELSSGameModeDataManager_Statics::NewProp_WrestlerSettings = { "WrestlerSettings", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSGameModeDataManager, WrestlerSettings), Z_Construct_UScriptStruct_FSSWrestlerSettings, METADATA_PARAMS(Z_Construct_UClass_UELSSGameModeDataManager_Statics::NewProp_WrestlerSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSGameModeDataManager_Statics::NewProp_WrestlerSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSGameModeDataManager_Statics::NewProp_LastPlayRecord_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameModeDataManager" },
		{ "ModuleRelativePath", "Public/ELSSGameModeDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELSSGameModeDataManager_Statics::NewProp_LastPlayRecord = { "LastPlayRecord", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSGameModeDataManager, LastPlayRecord), Z_Construct_UScriptStruct_FSSLastPlayRecord, METADATA_PARAMS(Z_Construct_UClass_UELSSGameModeDataManager_Statics::NewProp_LastPlayRecord_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSGameModeDataManager_Statics::NewProp_LastPlayRecord_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSGameModeDataManager_Statics::NewProp_equipSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameModeDataManager" },
		{ "ModuleRelativePath", "Public/ELSSGameModeDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELSSGameModeDataManager_Statics::NewProp_equipSettings = { "equipSettings", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSGameModeDataManager, equipSettings), Z_Construct_UScriptStruct_FSSPlayerEquipSettings, METADATA_PARAMS(Z_Construct_UClass_UELSSGameModeDataManager_Statics::NewProp_equipSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSGameModeDataManager_Statics::NewProp_equipSettings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELSSGameModeDataManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSGameModeDataManager_Statics::NewProp_onSSDataUpdateEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSGameModeDataManager_Statics::NewProp_ssUserData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSGameModeDataManager_Statics::NewProp_selectWrestlerData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSGameModeDataManager_Statics::NewProp_LoadoutSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSGameModeDataManager_Statics::NewProp_WrestlerSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSGameModeDataManager_Statics::NewProp_LastPlayRecord,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSGameModeDataManager_Statics::NewProp_equipSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELSSGameModeDataManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELSSGameModeDataManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELSSGameModeDataManager_Statics::ClassParams = {
		&UELSSGameModeDataManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELSSGameModeDataManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELSSGameModeDataManager_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELSSGameModeDataManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSGameModeDataManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELSSGameModeDataManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELSSGameModeDataManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELSSGameModeDataManager, 1735407551);
	template<> ABP_200508_API UClass* StaticClass<UELSSGameModeDataManager>()
	{
		return UELSSGameModeDataManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELSSGameModeDataManager(Z_Construct_UClass_UELSSGameModeDataManager, &UELSSGameModeDataManager::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELSSGameModeDataManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELSSGameModeDataManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
