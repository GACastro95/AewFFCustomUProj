// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSSaveDataUtility.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSSaveDataUtility() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELSSSaveDataUtility_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSSaveDataUtility();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSHeatSkillCategory();
// End Cross Module References
	DEFINE_FUNCTION(UELSSSaveDataUtility::execCopyGameDataToSSModeSaveData)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FByteProperty,Z_Param__saveDataAccessFlag);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELSSSaveDataUtility::CopyGameDataToSSModeSaveData(Z_Param_WorldContextObject,Z_Param__saveDataAccessFlag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSSaveDataUtility::execCopySSModeSaveDataToGameData)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FByteProperty,Z_Param__saveDataAccessFlag);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELSSSaveDataUtility::CopySSModeSaveDataToGameData(Z_Param_WorldContextObject,Z_Param__saveDataAccessFlag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSSaveDataUtility::execGetLoadoutPresetAbility)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_inPresetIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_inAbilitySlot);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UELSSSaveDataUtility::GetLoadoutPresetAbility(Z_Param_WorldContextObject,Z_Param_inPresetIndex,Z_Param_inAbilitySlot);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSSaveDataUtility::execGetLoadoutPresetFinisherId)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_inPresetIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UELSSSaveDataUtility::GetLoadoutPresetFinisherId(Z_Param_WorldContextObject,Z_Param_inPresetIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSSaveDataUtility::execGetLoadoutPresetHeatSkillTreeEquipFlag)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_inPresetIndex);
		P_GET_ENUM(ESSHeatSkillCategory,Z_Param_inCategory);
		P_GET_PROPERTY(FIntProperty,Z_Param_inSkillTreeIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELSSSaveDataUtility::GetLoadoutPresetHeatSkillTreeEquipFlag(Z_Param_WorldContextObject,Z_Param_inPresetIndex,ESSHeatSkillCategory(Z_Param_inCategory),Z_Param_inSkillTreeIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSSaveDataUtility::execGetLoadoutPresetIndex)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UELSSSaveDataUtility::GetLoadoutPresetIndex(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSSaveDataUtility::execGetLoadoutPresetName)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_inPresetIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UELSSSaveDataUtility::GetLoadoutPresetName(Z_Param_WorldContextObject,Z_Param_inPresetIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSSaveDataUtility::execGetLoadoutPresetNameMaxLength)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UELSSSaveDataUtility::GetLoadoutPresetNameMaxLength(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSSaveDataUtility::execGetLoadoutPresetNum)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UELSSSaveDataUtility::GetLoadoutPresetNum(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSSaveDataUtility::execGetUsingLoadoutPresetFlag)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_inPresetIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELSSSaveDataUtility::GetUsingLoadoutPresetFlag(Z_Param_WorldContextObject,Z_Param_inPresetIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSSaveDataUtility::execInitializeLoadoutSettings)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELSSSaveDataUtility::InitializeLoadoutSettings(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSSaveDataUtility::execIsFinishedSetupSSModeSaveData)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELSSSaveDataUtility::IsFinishedSetupSSModeSaveData(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSSaveDataUtility::execResetSSModeSaveData)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FByteProperty,Z_Param__saveDataAccessFlag);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELSSSaveDataUtility::ResetSSModeSaveData(Z_Param_WorldContextObject,Z_Param__saveDataAccessFlag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSSaveDataUtility::execSaveRequestSSModeSaveData)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FByteProperty,Z_Param__saveDataAccessFlag);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELSSSaveDataUtility::SaveRequestSSModeSaveData(Z_Param_WorldContextObject,Z_Param__saveDataAccessFlag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSSaveDataUtility::execSetDefaultLoadoutPresetName)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_inPresetIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELSSSaveDataUtility::SetDefaultLoadoutPresetName(Z_Param_WorldContextObject,Z_Param_inPresetIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSSaveDataUtility::execSetDefaultLoadoutPresetNameAll)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELSSSaveDataUtility::SetDefaultLoadoutPresetNameAll(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSSaveDataUtility::execSetLoadoutPresetAbility)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_inPresetIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_inAbilitySlot);
		P_GET_PROPERTY(FIntProperty,Z_Param_inAbilityId);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELSSSaveDataUtility::SetLoadoutPresetAbility(Z_Param_WorldContextObject,Z_Param_inPresetIndex,Z_Param_inAbilitySlot,Z_Param_inAbilityId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSSaveDataUtility::execSetLoadoutPresetFinisherId)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_inPresetIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_inFinisherId);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELSSSaveDataUtility::SetLoadoutPresetFinisherId(Z_Param_WorldContextObject,Z_Param_inPresetIndex,Z_Param_inFinisherId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSSaveDataUtility::execSetLoadoutPresetHeatSkillTreeEquipFlag)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_inPresetIndex);
		P_GET_ENUM(ESSHeatSkillCategory,Z_Param_inCategory);
		P_GET_PROPERTY(FIntProperty,Z_Param_inSkillTreeIndex);
		P_GET_UBOOL(Z_Param_inEquip);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELSSSaveDataUtility::SetLoadoutPresetHeatSkillTreeEquipFlag(Z_Param_WorldContextObject,Z_Param_inPresetIndex,ESSHeatSkillCategory(Z_Param_inCategory),Z_Param_inSkillTreeIndex,Z_Param_inEquip);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSSaveDataUtility::execSetLoadoutPresetIndex)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_InIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELSSSaveDataUtility::SetLoadoutPresetIndex(Z_Param_WorldContextObject,Z_Param_InIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSSaveDataUtility::execSetLoadoutPresetName)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_inPresetIndex);
		P_GET_PROPERTY(FStrProperty,Z_Param_inPresetName);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELSSSaveDataUtility::SetLoadoutPresetName(Z_Param_WorldContextObject,Z_Param_inPresetIndex,Z_Param_inPresetName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSSaveDataUtility::execSetupSSModeSaveData)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELSSSaveDataUtility::SetupSSModeSaveData(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSSaveDataUtility::execSetUsingLoadoutPresetFlag)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_inPresetIndex);
		P_GET_UBOOL(Z_Param_InFlag);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELSSSaveDataUtility::SetUsingLoadoutPresetFlag(Z_Param_WorldContextObject,Z_Param_inPresetIndex,Z_Param_InFlag);
		P_NATIVE_END;
	}
	void UELSSSaveDataUtility::StaticRegisterNativesUELSSSaveDataUtility()
	{
		UClass* Class = UELSSSaveDataUtility::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CopyGameDataToSSModeSaveData", &UELSSSaveDataUtility::execCopyGameDataToSSModeSaveData },
			{ "CopySSModeSaveDataToGameData", &UELSSSaveDataUtility::execCopySSModeSaveDataToGameData },
			{ "GetLoadoutPresetAbility", &UELSSSaveDataUtility::execGetLoadoutPresetAbility },
			{ "GetLoadoutPresetFinisherId", &UELSSSaveDataUtility::execGetLoadoutPresetFinisherId },
			{ "GetLoadoutPresetHeatSkillTreeEquipFlag", &UELSSSaveDataUtility::execGetLoadoutPresetHeatSkillTreeEquipFlag },
			{ "GetLoadoutPresetIndex", &UELSSSaveDataUtility::execGetLoadoutPresetIndex },
			{ "GetLoadoutPresetName", &UELSSSaveDataUtility::execGetLoadoutPresetName },
			{ "GetLoadoutPresetNameMaxLength", &UELSSSaveDataUtility::execGetLoadoutPresetNameMaxLength },
			{ "GetLoadoutPresetNum", &UELSSSaveDataUtility::execGetLoadoutPresetNum },
			{ "GetUsingLoadoutPresetFlag", &UELSSSaveDataUtility::execGetUsingLoadoutPresetFlag },
			{ "InitializeLoadoutSettings", &UELSSSaveDataUtility::execInitializeLoadoutSettings },
			{ "IsFinishedSetupSSModeSaveData", &UELSSSaveDataUtility::execIsFinishedSetupSSModeSaveData },
			{ "ResetSSModeSaveData", &UELSSSaveDataUtility::execResetSSModeSaveData },
			{ "SaveRequestSSModeSaveData", &UELSSSaveDataUtility::execSaveRequestSSModeSaveData },
			{ "SetDefaultLoadoutPresetName", &UELSSSaveDataUtility::execSetDefaultLoadoutPresetName },
			{ "SetDefaultLoadoutPresetNameAll", &UELSSSaveDataUtility::execSetDefaultLoadoutPresetNameAll },
			{ "SetLoadoutPresetAbility", &UELSSSaveDataUtility::execSetLoadoutPresetAbility },
			{ "SetLoadoutPresetFinisherId", &UELSSSaveDataUtility::execSetLoadoutPresetFinisherId },
			{ "SetLoadoutPresetHeatSkillTreeEquipFlag", &UELSSSaveDataUtility::execSetLoadoutPresetHeatSkillTreeEquipFlag },
			{ "SetLoadoutPresetIndex", &UELSSSaveDataUtility::execSetLoadoutPresetIndex },
			{ "SetLoadoutPresetName", &UELSSSaveDataUtility::execSetLoadoutPresetName },
			{ "SetupSSModeSaveData", &UELSSSaveDataUtility::execSetupSSModeSaveData },
			{ "SetUsingLoadoutPresetFlag", &UELSSSaveDataUtility::execSetUsingLoadoutPresetFlag },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELSSSaveDataUtility_CopyGameDataToSSModeSaveData_Statics
	{
		struct ELSSSaveDataUtility_eventCopyGameDataToSSModeSaveData_Parms
		{
			const UObject* WorldContextObject;
			uint8 _saveDataAccessFlag;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__saveDataAccessFlag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSSaveDataUtility_CopyGameDataToSSModeSaveData_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSSaveDataUtility_CopyGameDataToSSModeSaveData_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSaveDataUtility_eventCopyGameDataToSSModeSaveData_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSSaveDataUtility_CopyGameDataToSSModeSaveData_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSSaveDataUtility_CopyGameDataToSSModeSaveData_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSSaveDataUtility_CopyGameDataToSSModeSaveData_Statics::NewProp__saveDataAccessFlag = { "_saveDataAccessFlag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSaveDataUtility_eventCopyGameDataToSSModeSaveData_Parms, _saveDataAccessFlag), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSSaveDataUtility_CopyGameDataToSSModeSaveData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSSaveDataUtility_CopyGameDataToSSModeSaveData_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSSaveDataUtility_CopyGameDataToSSModeSaveData_Statics::NewProp__saveDataAccessFlag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSSaveDataUtility_CopyGameDataToSSModeSaveData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSSaveDataUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSSaveDataUtility_CopyGameDataToSSModeSaveData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSSaveDataUtility, nullptr, "CopyGameDataToSSModeSaveData", nullptr, nullptr, sizeof(ELSSSaveDataUtility_eventCopyGameDataToSSModeSaveData_Parms), Z_Construct_UFunction_UELSSSaveDataUtility_CopyGameDataToSSModeSaveData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSSaveDataUtility_CopyGameDataToSSModeSaveData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSSaveDataUtility_CopyGameDataToSSModeSaveData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSSaveDataUtility_CopyGameDataToSSModeSaveData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSSaveDataUtility_CopyGameDataToSSModeSaveData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSSaveDataUtility_CopyGameDataToSSModeSaveData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSSaveDataUtility_CopySSModeSaveDataToGameData_Statics
	{
		struct ELSSSaveDataUtility_eventCopySSModeSaveDataToGameData_Parms
		{
			const UObject* WorldContextObject;
			uint8 _saveDataAccessFlag;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__saveDataAccessFlag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSSaveDataUtility_CopySSModeSaveDataToGameData_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSSaveDataUtility_CopySSModeSaveDataToGameData_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSaveDataUtility_eventCopySSModeSaveDataToGameData_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSSaveDataUtility_CopySSModeSaveDataToGameData_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSSaveDataUtility_CopySSModeSaveDataToGameData_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSSaveDataUtility_CopySSModeSaveDataToGameData_Statics::NewProp__saveDataAccessFlag = { "_saveDataAccessFlag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSaveDataUtility_eventCopySSModeSaveDataToGameData_Parms, _saveDataAccessFlag), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSSaveDataUtility_CopySSModeSaveDataToGameData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSSaveDataUtility_CopySSModeSaveDataToGameData_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSSaveDataUtility_CopySSModeSaveDataToGameData_Statics::NewProp__saveDataAccessFlag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSSaveDataUtility_CopySSModeSaveDataToGameData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSSaveDataUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSSaveDataUtility_CopySSModeSaveDataToGameData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSSaveDataUtility, nullptr, "CopySSModeSaveDataToGameData", nullptr, nullptr, sizeof(ELSSSaveDataUtility_eventCopySSModeSaveDataToGameData_Parms), Z_Construct_UFunction_UELSSSaveDataUtility_CopySSModeSaveDataToGameData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSSaveDataUtility_CopySSModeSaveDataToGameData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSSaveDataUtility_CopySSModeSaveDataToGameData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSSaveDataUtility_CopySSModeSaveDataToGameData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSSaveDataUtility_CopySSModeSaveDataToGameData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSSaveDataUtility_CopySSModeSaveDataToGameData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSSaveDataUtility_GetLoadoutPresetAbility_Statics
	{
		struct ELSSSaveDataUtility_eventGetLoadoutPresetAbility_Parms
		{
			const UObject* WorldContextObject;
			int32 inPresetIndex;
			int32 inAbilitySlot;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inPresetIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inAbilitySlot;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSSaveDataUtility_GetLoadoutPresetAbility_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSSaveDataUtility_GetLoadoutPresetAbility_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSaveDataUtility_eventGetLoadoutPresetAbility_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSSaveDataUtility_GetLoadoutPresetAbility_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSSaveDataUtility_GetLoadoutPresetAbility_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSSaveDataUtility_GetLoadoutPresetAbility_Statics::NewProp_inPresetIndex = { "inPresetIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSaveDataUtility_eventGetLoadoutPresetAbility_Parms, inPresetIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSSaveDataUtility_GetLoadoutPresetAbility_Statics::NewProp_inAbilitySlot = { "inAbilitySlot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSaveDataUtility_eventGetLoadoutPresetAbility_Parms, inAbilitySlot), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSSaveDataUtility_GetLoadoutPresetAbility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSaveDataUtility_eventGetLoadoutPresetAbility_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSSaveDataUtility_GetLoadoutPresetAbility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSSaveDataUtility_GetLoadoutPresetAbility_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSSaveDataUtility_GetLoadoutPresetAbility_Statics::NewProp_inPresetIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSSaveDataUtility_GetLoadoutPresetAbility_Statics::NewProp_inAbilitySlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSSaveDataUtility_GetLoadoutPresetAbility_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSSaveDataUtility_GetLoadoutPresetAbility_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSSaveDataUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSSaveDataUtility_GetLoadoutPresetAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSSaveDataUtility, nullptr, "GetLoadoutPresetAbility", nullptr, nullptr, sizeof(ELSSSaveDataUtility_eventGetLoadoutPresetAbility_Parms), Z_Construct_UFunction_UELSSSaveDataUtility_GetLoadoutPresetAbility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSSaveDataUtility_GetLoadoutPresetAbility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSSaveDataUtility_GetLoadoutPresetAbility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSSaveDataUtility_GetLoadoutPresetAbility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSSaveDataUtility_GetLoadoutPresetAbility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSSaveDataUtility_GetLoadoutPresetAbility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSSaveDataUtility_GetLoadoutPresetFinisherId_Statics
	{
		struct ELSSSaveDataUtility_eventGetLoadoutPresetFinisherId_Parms
		{
			const UObject* WorldContextObject;
			int32 inPresetIndex;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inPresetIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSSaveDataUtility_GetLoadoutPresetFinisherId_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSSaveDataUtility_GetLoadoutPresetFinisherId_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSaveDataUtility_eventGetLoadoutPresetFinisherId_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSSaveDataUtility_GetLoadoutPresetFinisherId_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSSaveDataUtility_GetLoadoutPresetFinisherId_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSSaveDataUtility_GetLoadoutPresetFinisherId_Statics::NewProp_inPresetIndex = { "inPresetIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSaveDataUtility_eventGetLoadoutPresetFinisherId_Parms, inPresetIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSSaveDataUtility_GetLoadoutPresetFinisherId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSaveDataUtility_eventGetLoadoutPresetFinisherId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSSaveDataUtility_GetLoadoutPresetFinisherId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSSaveDataUtility_GetLoadoutPresetFinisherId_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSSaveDataUtility_GetLoadoutPresetFinisherId_Statics::NewProp_inPresetIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSSaveDataUtility_GetLoadoutPresetFinisherId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSSaveDataUtility_GetLoadoutPresetFinisherId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSSaveDataUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSSaveDataUtility_GetLoadoutPresetFinisherId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSSaveDataUtility, nullptr, "GetLoadoutPresetFinisherId", nullptr, nullptr, sizeof(ELSSSaveDataUtility_eventGetLoadoutPresetFinisherId_Parms), Z_Construct_UFunction_UELSSSaveDataUtility_GetLoadoutPresetFinisherId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSSaveDataUtility_GetLoadoutPresetFinisherId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSSaveDataUtility_GetLoadoutPresetFinisherId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSSaveDataUtility_GetLoadoutPresetFinisherId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSSaveDataUtility_GetLoadoutPresetFinisherId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSSaveDataUtility_GetLoadoutPresetFinisherId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSSaveDataUtility_GetLoadoutPresetHeatSkillTreeEquipFlag_Statics
	{
		struct ELSSSaveDataUtility_eventGetLoadoutPresetHeatSkillTreeEquipFlag_Parms
		{
			const UObject* WorldContextObject;
			int32 inPresetIndex;
			ESSHeatSkillCategory inCategory;
			int32 inSkillTreeIndex;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inPresetIndex;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_inCategory_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_inCategory;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inSkillTreeIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSSaveDataUtility_GetLoadoutPresetHeatSkillTreeEquipFlag_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSSaveDataUtility_GetLoadoutPresetHeatSkillTreeEquipFlag_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSaveDataUtility_eventGetLoadoutPresetHeatSkillTreeEquipFlag_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSSaveDataUtility_GetLoadoutPresetHeatSkillTreeEquipFlag_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSSaveDataUtility_GetLoadoutPresetHeatSkillTreeEquipFlag_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSSaveDataUtility_GetLoadoutPresetHeatSkillTreeEquipFlag_Statics::NewProp_inPresetIndex = { "inPresetIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSaveDataUtility_eventGetLoadoutPresetHeatSkillTreeEquipFlag_Parms, inPresetIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSSaveDataUtility_GetLoadoutPresetHeatSkillTreeEquipFlag_Statics::NewProp_inCategory_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSSaveDataUtility_GetLoadoutPresetHeatSkillTreeEquipFlag_Statics::NewProp_inCategory = { "inCategory", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSaveDataUtility_eventGetLoadoutPresetHeatSkillTreeEquipFlag_Parms, inCategory), Z_Construct_UEnum_ABP_200508_ESSHeatSkillCategory, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSSaveDataUtility_GetLoadoutPresetHeatSkillTreeEquipFlag_Statics::NewProp_inSkillTreeIndex = { "inSkillTreeIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSaveDataUtility_eventGetLoadoutPresetHeatSkillTreeEquipFlag_Parms, inSkillTreeIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSSaveDataUtility_GetLoadoutPresetHeatSkillTreeEquipFlag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSSaveDataUtility_eventGetLoadoutPresetHeatSkillTreeEquipFlag_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSSaveDataUtility_GetLoadoutPresetHeatSkillTreeEquipFlag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSSaveDataUtility_eventGetLoadoutPresetHeatSkillTreeEquipFlag_Parms), &Z_Construct_UFunction_UELSSSaveDataUtility_GetLoadoutPresetHeatSkillTreeEquipFlag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSSaveDataUtility_GetLoadoutPresetHeatSkillTreeEquipFlag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSSaveDataUtility_GetLoadoutPresetHeatSkillTreeEquipFlag_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSSaveDataUtility_GetLoadoutPresetHeatSkillTreeEquipFlag_Statics::NewProp_inPresetIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSSaveDataUtility_GetLoadoutPresetHeatSkillTreeEquipFlag_Statics::NewProp_inCategory_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSSaveDataUtility_GetLoadoutPresetHeatSkillTreeEquipFlag_Statics::NewProp_inCategory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSSaveDataUtility_GetLoadoutPresetHeatSkillTreeEquipFlag_Statics::NewProp_inSkillTreeIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSSaveDataUtility_GetLoadoutPresetHeatSkillTreeEquipFlag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSSaveDataUtility_GetLoadoutPresetHeatSkillTreeEquipFlag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSSaveDataUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSSaveDataUtility_GetLoadoutPresetHeatSkillTreeEquipFlag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSSaveDataUtility, nullptr, "GetLoadoutPresetHeatSkillTreeEquipFlag", nullptr, nullptr, sizeof(ELSSSaveDataUtility_eventGetLoadoutPresetHeatSkillTreeEquipFlag_Parms), Z_Construct_UFunction_UELSSSaveDataUtility_GetLoadoutPresetHeatSkillTreeEquipFlag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSSaveDataUtility_GetLoadoutPresetHeatSkillTreeEquipFlag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSSaveDataUtility_GetLoadoutPresetHeatSkillTreeEquipFlag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSSaveDataUtility_GetLoadoutPresetHeatSkillTreeEquipFlag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSSaveDataUtility_GetLoadoutPresetHeatSkillTreeEquipFlag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSSaveDataUtility_GetLoadoutPresetHeatSkillTreeEquipFlag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSSaveDataUtility_GetLoadoutPresetIndex_Statics
	{
		struct ELSSSaveDataUtility_eventGetLoadoutPresetIndex_Parms
		{
			const UObject* WorldContextObject;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSSaveDataUtility_GetLoadoutPresetIndex_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSSaveDataUtility_GetLoadoutPresetIndex_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSaveDataUtility_eventGetLoadoutPresetIndex_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSSaveDataUtility_GetLoadoutPresetIndex_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSSaveDataUtility_GetLoadoutPresetIndex_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSSaveDataUtility_GetLoadoutPresetIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSaveDataUtility_eventGetLoadoutPresetIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSSaveDataUtility_GetLoadoutPresetIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSSaveDataUtility_GetLoadoutPresetIndex_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSSaveDataUtility_GetLoadoutPresetIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSSaveDataUtility_GetLoadoutPresetIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSSaveDataUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSSaveDataUtility_GetLoadoutPresetIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSSaveDataUtility, nullptr, "GetLoadoutPresetIndex", nullptr, nullptr, sizeof(ELSSSaveDataUtility_eventGetLoadoutPresetIndex_Parms), Z_Construct_UFunction_UELSSSaveDataUtility_GetLoadoutPresetIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSSaveDataUtility_GetLoadoutPresetIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSSaveDataUtility_GetLoadoutPresetIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSSaveDataUtility_GetLoadoutPresetIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSSaveDataUtility_GetLoadoutPresetIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSSaveDataUtility_GetLoadoutPresetIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSSaveDataUtility_GetLoadoutPresetName_Statics
	{
		struct ELSSSaveDataUtility_eventGetLoadoutPresetName_Parms
		{
			const UObject* WorldContextObject;
			int32 inPresetIndex;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inPresetIndex;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSSaveDataUtility_GetLoadoutPresetName_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSSaveDataUtility_GetLoadoutPresetName_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSaveDataUtility_eventGetLoadoutPresetName_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSSaveDataUtility_GetLoadoutPresetName_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSSaveDataUtility_GetLoadoutPresetName_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSSaveDataUtility_GetLoadoutPresetName_Statics::NewProp_inPresetIndex = { "inPresetIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSaveDataUtility_eventGetLoadoutPresetName_Parms, inPresetIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELSSSaveDataUtility_GetLoadoutPresetName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSaveDataUtility_eventGetLoadoutPresetName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSSaveDataUtility_GetLoadoutPresetName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSSaveDataUtility_GetLoadoutPresetName_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSSaveDataUtility_GetLoadoutPresetName_Statics::NewProp_inPresetIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSSaveDataUtility_GetLoadoutPresetName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSSaveDataUtility_GetLoadoutPresetName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSSaveDataUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSSaveDataUtility_GetLoadoutPresetName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSSaveDataUtility, nullptr, "GetLoadoutPresetName", nullptr, nullptr, sizeof(ELSSSaveDataUtility_eventGetLoadoutPresetName_Parms), Z_Construct_UFunction_UELSSSaveDataUtility_GetLoadoutPresetName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSSaveDataUtility_GetLoadoutPresetName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSSaveDataUtility_GetLoadoutPresetName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSSaveDataUtility_GetLoadoutPresetName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSSaveDataUtility_GetLoadoutPresetName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSSaveDataUtility_GetLoadoutPresetName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSSaveDataUtility_GetLoadoutPresetNameMaxLength_Statics
	{
		struct ELSSSaveDataUtility_eventGetLoadoutPresetNameMaxLength_Parms
		{
			const UObject* WorldContextObject;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSSaveDataUtility_GetLoadoutPresetNameMaxLength_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSSaveDataUtility_GetLoadoutPresetNameMaxLength_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSaveDataUtility_eventGetLoadoutPresetNameMaxLength_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSSaveDataUtility_GetLoadoutPresetNameMaxLength_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSSaveDataUtility_GetLoadoutPresetNameMaxLength_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSSaveDataUtility_GetLoadoutPresetNameMaxLength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSaveDataUtility_eventGetLoadoutPresetNameMaxLength_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSSaveDataUtility_GetLoadoutPresetNameMaxLength_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSSaveDataUtility_GetLoadoutPresetNameMaxLength_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSSaveDataUtility_GetLoadoutPresetNameMaxLength_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSSaveDataUtility_GetLoadoutPresetNameMaxLength_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSSaveDataUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSSaveDataUtility_GetLoadoutPresetNameMaxLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSSaveDataUtility, nullptr, "GetLoadoutPresetNameMaxLength", nullptr, nullptr, sizeof(ELSSSaveDataUtility_eventGetLoadoutPresetNameMaxLength_Parms), Z_Construct_UFunction_UELSSSaveDataUtility_GetLoadoutPresetNameMaxLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSSaveDataUtility_GetLoadoutPresetNameMaxLength_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSSaveDataUtility_GetLoadoutPresetNameMaxLength_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSSaveDataUtility_GetLoadoutPresetNameMaxLength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSSaveDataUtility_GetLoadoutPresetNameMaxLength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSSaveDataUtility_GetLoadoutPresetNameMaxLength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSSaveDataUtility_GetLoadoutPresetNum_Statics
	{
		struct ELSSSaveDataUtility_eventGetLoadoutPresetNum_Parms
		{
			const UObject* WorldContextObject;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSSaveDataUtility_GetLoadoutPresetNum_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSSaveDataUtility_GetLoadoutPresetNum_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSaveDataUtility_eventGetLoadoutPresetNum_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSSaveDataUtility_GetLoadoutPresetNum_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSSaveDataUtility_GetLoadoutPresetNum_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSSaveDataUtility_GetLoadoutPresetNum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSaveDataUtility_eventGetLoadoutPresetNum_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSSaveDataUtility_GetLoadoutPresetNum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSSaveDataUtility_GetLoadoutPresetNum_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSSaveDataUtility_GetLoadoutPresetNum_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSSaveDataUtility_GetLoadoutPresetNum_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSSaveDataUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSSaveDataUtility_GetLoadoutPresetNum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSSaveDataUtility, nullptr, "GetLoadoutPresetNum", nullptr, nullptr, sizeof(ELSSSaveDataUtility_eventGetLoadoutPresetNum_Parms), Z_Construct_UFunction_UELSSSaveDataUtility_GetLoadoutPresetNum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSSaveDataUtility_GetLoadoutPresetNum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSSaveDataUtility_GetLoadoutPresetNum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSSaveDataUtility_GetLoadoutPresetNum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSSaveDataUtility_GetLoadoutPresetNum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSSaveDataUtility_GetLoadoutPresetNum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSSaveDataUtility_GetUsingLoadoutPresetFlag_Statics
	{
		struct ELSSSaveDataUtility_eventGetUsingLoadoutPresetFlag_Parms
		{
			const UObject* WorldContextObject;
			int32 inPresetIndex;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inPresetIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSSaveDataUtility_GetUsingLoadoutPresetFlag_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSSaveDataUtility_GetUsingLoadoutPresetFlag_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSaveDataUtility_eventGetUsingLoadoutPresetFlag_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSSaveDataUtility_GetUsingLoadoutPresetFlag_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSSaveDataUtility_GetUsingLoadoutPresetFlag_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSSaveDataUtility_GetUsingLoadoutPresetFlag_Statics::NewProp_inPresetIndex = { "inPresetIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSaveDataUtility_eventGetUsingLoadoutPresetFlag_Parms, inPresetIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSSaveDataUtility_GetUsingLoadoutPresetFlag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSSaveDataUtility_eventGetUsingLoadoutPresetFlag_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSSaveDataUtility_GetUsingLoadoutPresetFlag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSSaveDataUtility_eventGetUsingLoadoutPresetFlag_Parms), &Z_Construct_UFunction_UELSSSaveDataUtility_GetUsingLoadoutPresetFlag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSSaveDataUtility_GetUsingLoadoutPresetFlag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSSaveDataUtility_GetUsingLoadoutPresetFlag_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSSaveDataUtility_GetUsingLoadoutPresetFlag_Statics::NewProp_inPresetIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSSaveDataUtility_GetUsingLoadoutPresetFlag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSSaveDataUtility_GetUsingLoadoutPresetFlag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSSaveDataUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSSaveDataUtility_GetUsingLoadoutPresetFlag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSSaveDataUtility, nullptr, "GetUsingLoadoutPresetFlag", nullptr, nullptr, sizeof(ELSSSaveDataUtility_eventGetUsingLoadoutPresetFlag_Parms), Z_Construct_UFunction_UELSSSaveDataUtility_GetUsingLoadoutPresetFlag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSSaveDataUtility_GetUsingLoadoutPresetFlag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSSaveDataUtility_GetUsingLoadoutPresetFlag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSSaveDataUtility_GetUsingLoadoutPresetFlag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSSaveDataUtility_GetUsingLoadoutPresetFlag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSSaveDataUtility_GetUsingLoadoutPresetFlag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSSaveDataUtility_InitializeLoadoutSettings_Statics
	{
		struct ELSSSaveDataUtility_eventInitializeLoadoutSettings_Parms
		{
			const UObject* WorldContextObject;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSSaveDataUtility_InitializeLoadoutSettings_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSSaveDataUtility_InitializeLoadoutSettings_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSaveDataUtility_eventInitializeLoadoutSettings_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSSaveDataUtility_InitializeLoadoutSettings_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSSaveDataUtility_InitializeLoadoutSettings_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSSaveDataUtility_InitializeLoadoutSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSSaveDataUtility_InitializeLoadoutSettings_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSSaveDataUtility_InitializeLoadoutSettings_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSSaveDataUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSSaveDataUtility_InitializeLoadoutSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSSaveDataUtility, nullptr, "InitializeLoadoutSettings", nullptr, nullptr, sizeof(ELSSSaveDataUtility_eventInitializeLoadoutSettings_Parms), Z_Construct_UFunction_UELSSSaveDataUtility_InitializeLoadoutSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSSaveDataUtility_InitializeLoadoutSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSSaveDataUtility_InitializeLoadoutSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSSaveDataUtility_InitializeLoadoutSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSSaveDataUtility_InitializeLoadoutSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSSaveDataUtility_InitializeLoadoutSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSSaveDataUtility_IsFinishedSetupSSModeSaveData_Statics
	{
		struct ELSSSaveDataUtility_eventIsFinishedSetupSSModeSaveData_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSSaveDataUtility_IsFinishedSetupSSModeSaveData_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSSaveDataUtility_IsFinishedSetupSSModeSaveData_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSaveDataUtility_eventIsFinishedSetupSSModeSaveData_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSSaveDataUtility_IsFinishedSetupSSModeSaveData_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSSaveDataUtility_IsFinishedSetupSSModeSaveData_Statics::NewProp_WorldContextObject_MetaData)) };
	void Z_Construct_UFunction_UELSSSaveDataUtility_IsFinishedSetupSSModeSaveData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSSaveDataUtility_eventIsFinishedSetupSSModeSaveData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSSaveDataUtility_IsFinishedSetupSSModeSaveData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSSaveDataUtility_eventIsFinishedSetupSSModeSaveData_Parms), &Z_Construct_UFunction_UELSSSaveDataUtility_IsFinishedSetupSSModeSaveData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSSaveDataUtility_IsFinishedSetupSSModeSaveData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSSaveDataUtility_IsFinishedSetupSSModeSaveData_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSSaveDataUtility_IsFinishedSetupSSModeSaveData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSSaveDataUtility_IsFinishedSetupSSModeSaveData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSSaveDataUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSSaveDataUtility_IsFinishedSetupSSModeSaveData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSSaveDataUtility, nullptr, "IsFinishedSetupSSModeSaveData", nullptr, nullptr, sizeof(ELSSSaveDataUtility_eventIsFinishedSetupSSModeSaveData_Parms), Z_Construct_UFunction_UELSSSaveDataUtility_IsFinishedSetupSSModeSaveData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSSaveDataUtility_IsFinishedSetupSSModeSaveData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSSaveDataUtility_IsFinishedSetupSSModeSaveData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSSaveDataUtility_IsFinishedSetupSSModeSaveData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSSaveDataUtility_IsFinishedSetupSSModeSaveData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSSaveDataUtility_IsFinishedSetupSSModeSaveData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSSaveDataUtility_ResetSSModeSaveData_Statics
	{
		struct ELSSSaveDataUtility_eventResetSSModeSaveData_Parms
		{
			const UObject* WorldContextObject;
			uint8 _saveDataAccessFlag;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__saveDataAccessFlag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSSaveDataUtility_ResetSSModeSaveData_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSSaveDataUtility_ResetSSModeSaveData_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSaveDataUtility_eventResetSSModeSaveData_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSSaveDataUtility_ResetSSModeSaveData_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSSaveDataUtility_ResetSSModeSaveData_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSSaveDataUtility_ResetSSModeSaveData_Statics::NewProp__saveDataAccessFlag = { "_saveDataAccessFlag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSaveDataUtility_eventResetSSModeSaveData_Parms, _saveDataAccessFlag), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSSaveDataUtility_ResetSSModeSaveData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSSaveDataUtility_ResetSSModeSaveData_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSSaveDataUtility_ResetSSModeSaveData_Statics::NewProp__saveDataAccessFlag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSSaveDataUtility_ResetSSModeSaveData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSSaveDataUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSSaveDataUtility_ResetSSModeSaveData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSSaveDataUtility, nullptr, "ResetSSModeSaveData", nullptr, nullptr, sizeof(ELSSSaveDataUtility_eventResetSSModeSaveData_Parms), Z_Construct_UFunction_UELSSSaveDataUtility_ResetSSModeSaveData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSSaveDataUtility_ResetSSModeSaveData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSSaveDataUtility_ResetSSModeSaveData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSSaveDataUtility_ResetSSModeSaveData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSSaveDataUtility_ResetSSModeSaveData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSSaveDataUtility_ResetSSModeSaveData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSSaveDataUtility_SaveRequestSSModeSaveData_Statics
	{
		struct ELSSSaveDataUtility_eventSaveRequestSSModeSaveData_Parms
		{
			const UObject* WorldContextObject;
			uint8 _saveDataAccessFlag;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__saveDataAccessFlag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSSaveDataUtility_SaveRequestSSModeSaveData_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSSaveDataUtility_SaveRequestSSModeSaveData_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSaveDataUtility_eventSaveRequestSSModeSaveData_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSSaveDataUtility_SaveRequestSSModeSaveData_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSSaveDataUtility_SaveRequestSSModeSaveData_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSSaveDataUtility_SaveRequestSSModeSaveData_Statics::NewProp__saveDataAccessFlag = { "_saveDataAccessFlag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSaveDataUtility_eventSaveRequestSSModeSaveData_Parms, _saveDataAccessFlag), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSSaveDataUtility_SaveRequestSSModeSaveData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSSaveDataUtility_SaveRequestSSModeSaveData_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSSaveDataUtility_SaveRequestSSModeSaveData_Statics::NewProp__saveDataAccessFlag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSSaveDataUtility_SaveRequestSSModeSaveData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSSaveDataUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSSaveDataUtility_SaveRequestSSModeSaveData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSSaveDataUtility, nullptr, "SaveRequestSSModeSaveData", nullptr, nullptr, sizeof(ELSSSaveDataUtility_eventSaveRequestSSModeSaveData_Parms), Z_Construct_UFunction_UELSSSaveDataUtility_SaveRequestSSModeSaveData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSSaveDataUtility_SaveRequestSSModeSaveData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSSaveDataUtility_SaveRequestSSModeSaveData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSSaveDataUtility_SaveRequestSSModeSaveData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSSaveDataUtility_SaveRequestSSModeSaveData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSSaveDataUtility_SaveRequestSSModeSaveData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSSaveDataUtility_SetDefaultLoadoutPresetName_Statics
	{
		struct ELSSSaveDataUtility_eventSetDefaultLoadoutPresetName_Parms
		{
			const UObject* WorldContextObject;
			int32 inPresetIndex;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inPresetIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSSaveDataUtility_SetDefaultLoadoutPresetName_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSSaveDataUtility_SetDefaultLoadoutPresetName_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSaveDataUtility_eventSetDefaultLoadoutPresetName_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSSaveDataUtility_SetDefaultLoadoutPresetName_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSSaveDataUtility_SetDefaultLoadoutPresetName_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSSaveDataUtility_SetDefaultLoadoutPresetName_Statics::NewProp_inPresetIndex = { "inPresetIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSaveDataUtility_eventSetDefaultLoadoutPresetName_Parms, inPresetIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSSaveDataUtility_SetDefaultLoadoutPresetName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSSaveDataUtility_SetDefaultLoadoutPresetName_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSSaveDataUtility_SetDefaultLoadoutPresetName_Statics::NewProp_inPresetIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSSaveDataUtility_SetDefaultLoadoutPresetName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSSaveDataUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSSaveDataUtility_SetDefaultLoadoutPresetName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSSaveDataUtility, nullptr, "SetDefaultLoadoutPresetName", nullptr, nullptr, sizeof(ELSSSaveDataUtility_eventSetDefaultLoadoutPresetName_Parms), Z_Construct_UFunction_UELSSSaveDataUtility_SetDefaultLoadoutPresetName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSSaveDataUtility_SetDefaultLoadoutPresetName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSSaveDataUtility_SetDefaultLoadoutPresetName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSSaveDataUtility_SetDefaultLoadoutPresetName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSSaveDataUtility_SetDefaultLoadoutPresetName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSSaveDataUtility_SetDefaultLoadoutPresetName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSSaveDataUtility_SetDefaultLoadoutPresetNameAll_Statics
	{
		struct ELSSSaveDataUtility_eventSetDefaultLoadoutPresetNameAll_Parms
		{
			const UObject* WorldContextObject;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSSaveDataUtility_SetDefaultLoadoutPresetNameAll_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSSaveDataUtility_SetDefaultLoadoutPresetNameAll_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSaveDataUtility_eventSetDefaultLoadoutPresetNameAll_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSSaveDataUtility_SetDefaultLoadoutPresetNameAll_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSSaveDataUtility_SetDefaultLoadoutPresetNameAll_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSSaveDataUtility_SetDefaultLoadoutPresetNameAll_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSSaveDataUtility_SetDefaultLoadoutPresetNameAll_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSSaveDataUtility_SetDefaultLoadoutPresetNameAll_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSSaveDataUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSSaveDataUtility_SetDefaultLoadoutPresetNameAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSSaveDataUtility, nullptr, "SetDefaultLoadoutPresetNameAll", nullptr, nullptr, sizeof(ELSSSaveDataUtility_eventSetDefaultLoadoutPresetNameAll_Parms), Z_Construct_UFunction_UELSSSaveDataUtility_SetDefaultLoadoutPresetNameAll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSSaveDataUtility_SetDefaultLoadoutPresetNameAll_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSSaveDataUtility_SetDefaultLoadoutPresetNameAll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSSaveDataUtility_SetDefaultLoadoutPresetNameAll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSSaveDataUtility_SetDefaultLoadoutPresetNameAll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSSaveDataUtility_SetDefaultLoadoutPresetNameAll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSSaveDataUtility_SetLoadoutPresetAbility_Statics
	{
		struct ELSSSaveDataUtility_eventSetLoadoutPresetAbility_Parms
		{
			const UObject* WorldContextObject;
			int32 inPresetIndex;
			int32 inAbilitySlot;
			int32 inAbilityId;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inPresetIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inAbilitySlot;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inAbilityId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSSaveDataUtility_SetLoadoutPresetAbility_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSSaveDataUtility_SetLoadoutPresetAbility_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSaveDataUtility_eventSetLoadoutPresetAbility_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSSaveDataUtility_SetLoadoutPresetAbility_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSSaveDataUtility_SetLoadoutPresetAbility_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSSaveDataUtility_SetLoadoutPresetAbility_Statics::NewProp_inPresetIndex = { "inPresetIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSaveDataUtility_eventSetLoadoutPresetAbility_Parms, inPresetIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSSaveDataUtility_SetLoadoutPresetAbility_Statics::NewProp_inAbilitySlot = { "inAbilitySlot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSaveDataUtility_eventSetLoadoutPresetAbility_Parms, inAbilitySlot), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSSaveDataUtility_SetLoadoutPresetAbility_Statics::NewProp_inAbilityId = { "inAbilityId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSaveDataUtility_eventSetLoadoutPresetAbility_Parms, inAbilityId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSSaveDataUtility_SetLoadoutPresetAbility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSSaveDataUtility_SetLoadoutPresetAbility_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSSaveDataUtility_SetLoadoutPresetAbility_Statics::NewProp_inPresetIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSSaveDataUtility_SetLoadoutPresetAbility_Statics::NewProp_inAbilitySlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSSaveDataUtility_SetLoadoutPresetAbility_Statics::NewProp_inAbilityId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSSaveDataUtility_SetLoadoutPresetAbility_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSSaveDataUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSSaveDataUtility_SetLoadoutPresetAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSSaveDataUtility, nullptr, "SetLoadoutPresetAbility", nullptr, nullptr, sizeof(ELSSSaveDataUtility_eventSetLoadoutPresetAbility_Parms), Z_Construct_UFunction_UELSSSaveDataUtility_SetLoadoutPresetAbility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSSaveDataUtility_SetLoadoutPresetAbility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSSaveDataUtility_SetLoadoutPresetAbility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSSaveDataUtility_SetLoadoutPresetAbility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSSaveDataUtility_SetLoadoutPresetAbility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSSaveDataUtility_SetLoadoutPresetAbility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSSaveDataUtility_SetLoadoutPresetFinisherId_Statics
	{
		struct ELSSSaveDataUtility_eventSetLoadoutPresetFinisherId_Parms
		{
			const UObject* WorldContextObject;
			int32 inPresetIndex;
			int32 inFinisherId;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inPresetIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inFinisherId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSSaveDataUtility_SetLoadoutPresetFinisherId_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSSaveDataUtility_SetLoadoutPresetFinisherId_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSaveDataUtility_eventSetLoadoutPresetFinisherId_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSSaveDataUtility_SetLoadoutPresetFinisherId_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSSaveDataUtility_SetLoadoutPresetFinisherId_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSSaveDataUtility_SetLoadoutPresetFinisherId_Statics::NewProp_inPresetIndex = { "inPresetIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSaveDataUtility_eventSetLoadoutPresetFinisherId_Parms, inPresetIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSSaveDataUtility_SetLoadoutPresetFinisherId_Statics::NewProp_inFinisherId = { "inFinisherId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSaveDataUtility_eventSetLoadoutPresetFinisherId_Parms, inFinisherId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSSaveDataUtility_SetLoadoutPresetFinisherId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSSaveDataUtility_SetLoadoutPresetFinisherId_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSSaveDataUtility_SetLoadoutPresetFinisherId_Statics::NewProp_inPresetIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSSaveDataUtility_SetLoadoutPresetFinisherId_Statics::NewProp_inFinisherId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSSaveDataUtility_SetLoadoutPresetFinisherId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSSaveDataUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSSaveDataUtility_SetLoadoutPresetFinisherId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSSaveDataUtility, nullptr, "SetLoadoutPresetFinisherId", nullptr, nullptr, sizeof(ELSSSaveDataUtility_eventSetLoadoutPresetFinisherId_Parms), Z_Construct_UFunction_UELSSSaveDataUtility_SetLoadoutPresetFinisherId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSSaveDataUtility_SetLoadoutPresetFinisherId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSSaveDataUtility_SetLoadoutPresetFinisherId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSSaveDataUtility_SetLoadoutPresetFinisherId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSSaveDataUtility_SetLoadoutPresetFinisherId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSSaveDataUtility_SetLoadoutPresetFinisherId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSSaveDataUtility_SetLoadoutPresetHeatSkillTreeEquipFlag_Statics
	{
		struct ELSSSaveDataUtility_eventSetLoadoutPresetHeatSkillTreeEquipFlag_Parms
		{
			const UObject* WorldContextObject;
			int32 inPresetIndex;
			ESSHeatSkillCategory inCategory;
			int32 inSkillTreeIndex;
			bool inEquip;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inPresetIndex;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_inCategory_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_inCategory;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inSkillTreeIndex;
		static void NewProp_inEquip_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_inEquip;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSSaveDataUtility_SetLoadoutPresetHeatSkillTreeEquipFlag_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSSaveDataUtility_SetLoadoutPresetHeatSkillTreeEquipFlag_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSaveDataUtility_eventSetLoadoutPresetHeatSkillTreeEquipFlag_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSSaveDataUtility_SetLoadoutPresetHeatSkillTreeEquipFlag_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSSaveDataUtility_SetLoadoutPresetHeatSkillTreeEquipFlag_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSSaveDataUtility_SetLoadoutPresetHeatSkillTreeEquipFlag_Statics::NewProp_inPresetIndex = { "inPresetIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSaveDataUtility_eventSetLoadoutPresetHeatSkillTreeEquipFlag_Parms, inPresetIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSSaveDataUtility_SetLoadoutPresetHeatSkillTreeEquipFlag_Statics::NewProp_inCategory_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSSaveDataUtility_SetLoadoutPresetHeatSkillTreeEquipFlag_Statics::NewProp_inCategory = { "inCategory", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSaveDataUtility_eventSetLoadoutPresetHeatSkillTreeEquipFlag_Parms, inCategory), Z_Construct_UEnum_ABP_200508_ESSHeatSkillCategory, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSSaveDataUtility_SetLoadoutPresetHeatSkillTreeEquipFlag_Statics::NewProp_inSkillTreeIndex = { "inSkillTreeIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSaveDataUtility_eventSetLoadoutPresetHeatSkillTreeEquipFlag_Parms, inSkillTreeIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSSaveDataUtility_SetLoadoutPresetHeatSkillTreeEquipFlag_Statics::NewProp_inEquip_SetBit(void* Obj)
	{
		((ELSSSaveDataUtility_eventSetLoadoutPresetHeatSkillTreeEquipFlag_Parms*)Obj)->inEquip = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSSaveDataUtility_SetLoadoutPresetHeatSkillTreeEquipFlag_Statics::NewProp_inEquip = { "inEquip", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSSaveDataUtility_eventSetLoadoutPresetHeatSkillTreeEquipFlag_Parms), &Z_Construct_UFunction_UELSSSaveDataUtility_SetLoadoutPresetHeatSkillTreeEquipFlag_Statics::NewProp_inEquip_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSSaveDataUtility_SetLoadoutPresetHeatSkillTreeEquipFlag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSSaveDataUtility_SetLoadoutPresetHeatSkillTreeEquipFlag_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSSaveDataUtility_SetLoadoutPresetHeatSkillTreeEquipFlag_Statics::NewProp_inPresetIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSSaveDataUtility_SetLoadoutPresetHeatSkillTreeEquipFlag_Statics::NewProp_inCategory_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSSaveDataUtility_SetLoadoutPresetHeatSkillTreeEquipFlag_Statics::NewProp_inCategory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSSaveDataUtility_SetLoadoutPresetHeatSkillTreeEquipFlag_Statics::NewProp_inSkillTreeIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSSaveDataUtility_SetLoadoutPresetHeatSkillTreeEquipFlag_Statics::NewProp_inEquip,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSSaveDataUtility_SetLoadoutPresetHeatSkillTreeEquipFlag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSSaveDataUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSSaveDataUtility_SetLoadoutPresetHeatSkillTreeEquipFlag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSSaveDataUtility, nullptr, "SetLoadoutPresetHeatSkillTreeEquipFlag", nullptr, nullptr, sizeof(ELSSSaveDataUtility_eventSetLoadoutPresetHeatSkillTreeEquipFlag_Parms), Z_Construct_UFunction_UELSSSaveDataUtility_SetLoadoutPresetHeatSkillTreeEquipFlag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSSaveDataUtility_SetLoadoutPresetHeatSkillTreeEquipFlag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSSaveDataUtility_SetLoadoutPresetHeatSkillTreeEquipFlag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSSaveDataUtility_SetLoadoutPresetHeatSkillTreeEquipFlag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSSaveDataUtility_SetLoadoutPresetHeatSkillTreeEquipFlag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSSaveDataUtility_SetLoadoutPresetHeatSkillTreeEquipFlag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSSaveDataUtility_SetLoadoutPresetIndex_Statics
	{
		struct ELSSSaveDataUtility_eventSetLoadoutPresetIndex_Parms
		{
			const UObject* WorldContextObject;
			int32 InIndex;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSSaveDataUtility_SetLoadoutPresetIndex_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSSaveDataUtility_SetLoadoutPresetIndex_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSaveDataUtility_eventSetLoadoutPresetIndex_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSSaveDataUtility_SetLoadoutPresetIndex_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSSaveDataUtility_SetLoadoutPresetIndex_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSSaveDataUtility_SetLoadoutPresetIndex_Statics::NewProp_InIndex = { "InIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSaveDataUtility_eventSetLoadoutPresetIndex_Parms, InIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSSaveDataUtility_SetLoadoutPresetIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSSaveDataUtility_SetLoadoutPresetIndex_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSSaveDataUtility_SetLoadoutPresetIndex_Statics::NewProp_InIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSSaveDataUtility_SetLoadoutPresetIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSSaveDataUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSSaveDataUtility_SetLoadoutPresetIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSSaveDataUtility, nullptr, "SetLoadoutPresetIndex", nullptr, nullptr, sizeof(ELSSSaveDataUtility_eventSetLoadoutPresetIndex_Parms), Z_Construct_UFunction_UELSSSaveDataUtility_SetLoadoutPresetIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSSaveDataUtility_SetLoadoutPresetIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSSaveDataUtility_SetLoadoutPresetIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSSaveDataUtility_SetLoadoutPresetIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSSaveDataUtility_SetLoadoutPresetIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSSaveDataUtility_SetLoadoutPresetIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSSaveDataUtility_SetLoadoutPresetName_Statics
	{
		struct ELSSSaveDataUtility_eventSetLoadoutPresetName_Parms
		{
			const UObject* WorldContextObject;
			int32 inPresetIndex;
			FString inPresetName;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inPresetIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inPresetName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_inPresetName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSSaveDataUtility_SetLoadoutPresetName_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSSaveDataUtility_SetLoadoutPresetName_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSaveDataUtility_eventSetLoadoutPresetName_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSSaveDataUtility_SetLoadoutPresetName_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSSaveDataUtility_SetLoadoutPresetName_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSSaveDataUtility_SetLoadoutPresetName_Statics::NewProp_inPresetIndex = { "inPresetIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSaveDataUtility_eventSetLoadoutPresetName_Parms, inPresetIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSSaveDataUtility_SetLoadoutPresetName_Statics::NewProp_inPresetName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELSSSaveDataUtility_SetLoadoutPresetName_Statics::NewProp_inPresetName = { "inPresetName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSaveDataUtility_eventSetLoadoutPresetName_Parms, inPresetName), METADATA_PARAMS(Z_Construct_UFunction_UELSSSaveDataUtility_SetLoadoutPresetName_Statics::NewProp_inPresetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSSaveDataUtility_SetLoadoutPresetName_Statics::NewProp_inPresetName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSSaveDataUtility_SetLoadoutPresetName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSSaveDataUtility_SetLoadoutPresetName_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSSaveDataUtility_SetLoadoutPresetName_Statics::NewProp_inPresetIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSSaveDataUtility_SetLoadoutPresetName_Statics::NewProp_inPresetName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSSaveDataUtility_SetLoadoutPresetName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSSaveDataUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSSaveDataUtility_SetLoadoutPresetName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSSaveDataUtility, nullptr, "SetLoadoutPresetName", nullptr, nullptr, sizeof(ELSSSaveDataUtility_eventSetLoadoutPresetName_Parms), Z_Construct_UFunction_UELSSSaveDataUtility_SetLoadoutPresetName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSSaveDataUtility_SetLoadoutPresetName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSSaveDataUtility_SetLoadoutPresetName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSSaveDataUtility_SetLoadoutPresetName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSSaveDataUtility_SetLoadoutPresetName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSSaveDataUtility_SetLoadoutPresetName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSSaveDataUtility_SetupSSModeSaveData_Statics
	{
		struct ELSSSaveDataUtility_eventSetupSSModeSaveData_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSSaveDataUtility_SetupSSModeSaveData_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSSaveDataUtility_SetupSSModeSaveData_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSaveDataUtility_eventSetupSSModeSaveData_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSSaveDataUtility_SetupSSModeSaveData_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSSaveDataUtility_SetupSSModeSaveData_Statics::NewProp_WorldContextObject_MetaData)) };
	void Z_Construct_UFunction_UELSSSaveDataUtility_SetupSSModeSaveData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSSaveDataUtility_eventSetupSSModeSaveData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSSaveDataUtility_SetupSSModeSaveData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSSaveDataUtility_eventSetupSSModeSaveData_Parms), &Z_Construct_UFunction_UELSSSaveDataUtility_SetupSSModeSaveData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSSaveDataUtility_SetupSSModeSaveData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSSaveDataUtility_SetupSSModeSaveData_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSSaveDataUtility_SetupSSModeSaveData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSSaveDataUtility_SetupSSModeSaveData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSSaveDataUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSSaveDataUtility_SetupSSModeSaveData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSSaveDataUtility, nullptr, "SetupSSModeSaveData", nullptr, nullptr, sizeof(ELSSSaveDataUtility_eventSetupSSModeSaveData_Parms), Z_Construct_UFunction_UELSSSaveDataUtility_SetupSSModeSaveData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSSaveDataUtility_SetupSSModeSaveData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSSaveDataUtility_SetupSSModeSaveData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSSaveDataUtility_SetupSSModeSaveData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSSaveDataUtility_SetupSSModeSaveData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSSaveDataUtility_SetupSSModeSaveData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSSaveDataUtility_SetUsingLoadoutPresetFlag_Statics
	{
		struct ELSSSaveDataUtility_eventSetUsingLoadoutPresetFlag_Parms
		{
			const UObject* WorldContextObject;
			int32 inPresetIndex;
			bool InFlag;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inPresetIndex;
		static void NewProp_InFlag_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InFlag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSSaveDataUtility_SetUsingLoadoutPresetFlag_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSSaveDataUtility_SetUsingLoadoutPresetFlag_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSaveDataUtility_eventSetUsingLoadoutPresetFlag_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELSSSaveDataUtility_SetUsingLoadoutPresetFlag_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSSaveDataUtility_SetUsingLoadoutPresetFlag_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSSaveDataUtility_SetUsingLoadoutPresetFlag_Statics::NewProp_inPresetIndex = { "inPresetIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSaveDataUtility_eventSetUsingLoadoutPresetFlag_Parms, inPresetIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSSaveDataUtility_SetUsingLoadoutPresetFlag_Statics::NewProp_InFlag_SetBit(void* Obj)
	{
		((ELSSSaveDataUtility_eventSetUsingLoadoutPresetFlag_Parms*)Obj)->InFlag = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSSaveDataUtility_SetUsingLoadoutPresetFlag_Statics::NewProp_InFlag = { "InFlag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSSaveDataUtility_eventSetUsingLoadoutPresetFlag_Parms), &Z_Construct_UFunction_UELSSSaveDataUtility_SetUsingLoadoutPresetFlag_Statics::NewProp_InFlag_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSSaveDataUtility_SetUsingLoadoutPresetFlag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSSaveDataUtility_SetUsingLoadoutPresetFlag_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSSaveDataUtility_SetUsingLoadoutPresetFlag_Statics::NewProp_inPresetIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSSaveDataUtility_SetUsingLoadoutPresetFlag_Statics::NewProp_InFlag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSSaveDataUtility_SetUsingLoadoutPresetFlag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSSaveDataUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSSaveDataUtility_SetUsingLoadoutPresetFlag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSSaveDataUtility, nullptr, "SetUsingLoadoutPresetFlag", nullptr, nullptr, sizeof(ELSSSaveDataUtility_eventSetUsingLoadoutPresetFlag_Parms), Z_Construct_UFunction_UELSSSaveDataUtility_SetUsingLoadoutPresetFlag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSSaveDataUtility_SetUsingLoadoutPresetFlag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSSaveDataUtility_SetUsingLoadoutPresetFlag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSSaveDataUtility_SetUsingLoadoutPresetFlag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSSaveDataUtility_SetUsingLoadoutPresetFlag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSSaveDataUtility_SetUsingLoadoutPresetFlag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELSSSaveDataUtility_NoRegister()
	{
		return UELSSSaveDataUtility::StaticClass();
	}
	struct Z_Construct_UClass_UELSSSaveDataUtility_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELSSSaveDataUtility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELSSSaveDataUtility_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELSSSaveDataUtility_CopyGameDataToSSModeSaveData, "CopyGameDataToSSModeSaveData" }, // 761232195
		{ &Z_Construct_UFunction_UELSSSaveDataUtility_CopySSModeSaveDataToGameData, "CopySSModeSaveDataToGameData" }, // 2907131008
		{ &Z_Construct_UFunction_UELSSSaveDataUtility_GetLoadoutPresetAbility, "GetLoadoutPresetAbility" }, // 3719021851
		{ &Z_Construct_UFunction_UELSSSaveDataUtility_GetLoadoutPresetFinisherId, "GetLoadoutPresetFinisherId" }, // 1087392987
		{ &Z_Construct_UFunction_UELSSSaveDataUtility_GetLoadoutPresetHeatSkillTreeEquipFlag, "GetLoadoutPresetHeatSkillTreeEquipFlag" }, // 1242900819
		{ &Z_Construct_UFunction_UELSSSaveDataUtility_GetLoadoutPresetIndex, "GetLoadoutPresetIndex" }, // 1393964793
		{ &Z_Construct_UFunction_UELSSSaveDataUtility_GetLoadoutPresetName, "GetLoadoutPresetName" }, // 944986119
		{ &Z_Construct_UFunction_UELSSSaveDataUtility_GetLoadoutPresetNameMaxLength, "GetLoadoutPresetNameMaxLength" }, // 1175174986
		{ &Z_Construct_UFunction_UELSSSaveDataUtility_GetLoadoutPresetNum, "GetLoadoutPresetNum" }, // 1460687948
		{ &Z_Construct_UFunction_UELSSSaveDataUtility_GetUsingLoadoutPresetFlag, "GetUsingLoadoutPresetFlag" }, // 4037919194
		{ &Z_Construct_UFunction_UELSSSaveDataUtility_InitializeLoadoutSettings, "InitializeLoadoutSettings" }, // 1801130831
		{ &Z_Construct_UFunction_UELSSSaveDataUtility_IsFinishedSetupSSModeSaveData, "IsFinishedSetupSSModeSaveData" }, // 3144487319
		{ &Z_Construct_UFunction_UELSSSaveDataUtility_ResetSSModeSaveData, "ResetSSModeSaveData" }, // 1735257535
		{ &Z_Construct_UFunction_UELSSSaveDataUtility_SaveRequestSSModeSaveData, "SaveRequestSSModeSaveData" }, // 505882927
		{ &Z_Construct_UFunction_UELSSSaveDataUtility_SetDefaultLoadoutPresetName, "SetDefaultLoadoutPresetName" }, // 864201919
		{ &Z_Construct_UFunction_UELSSSaveDataUtility_SetDefaultLoadoutPresetNameAll, "SetDefaultLoadoutPresetNameAll" }, // 2389254066
		{ &Z_Construct_UFunction_UELSSSaveDataUtility_SetLoadoutPresetAbility, "SetLoadoutPresetAbility" }, // 670863994
		{ &Z_Construct_UFunction_UELSSSaveDataUtility_SetLoadoutPresetFinisherId, "SetLoadoutPresetFinisherId" }, // 3504461936
		{ &Z_Construct_UFunction_UELSSSaveDataUtility_SetLoadoutPresetHeatSkillTreeEquipFlag, "SetLoadoutPresetHeatSkillTreeEquipFlag" }, // 1269690440
		{ &Z_Construct_UFunction_UELSSSaveDataUtility_SetLoadoutPresetIndex, "SetLoadoutPresetIndex" }, // 2338575809
		{ &Z_Construct_UFunction_UELSSSaveDataUtility_SetLoadoutPresetName, "SetLoadoutPresetName" }, // 885047083
		{ &Z_Construct_UFunction_UELSSSaveDataUtility_SetupSSModeSaveData, "SetupSSModeSaveData" }, // 2369591050
		{ &Z_Construct_UFunction_UELSSSaveDataUtility_SetUsingLoadoutPresetFlag, "SetUsingLoadoutPresetFlag" }, // 1811818237
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSSaveDataUtility_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSSaveDataUtility.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSSaveDataUtility.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELSSSaveDataUtility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELSSSaveDataUtility>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELSSSaveDataUtility_Statics::ClassParams = {
		&UELSSSaveDataUtility::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UELSSSaveDataUtility_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSSaveDataUtility_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELSSSaveDataUtility()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELSSSaveDataUtility_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELSSSaveDataUtility, 1089717875);
	template<> ABP_200508_API UClass* StaticClass<UELSSSaveDataUtility>()
	{
		return UELSSSaveDataUtility::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELSSSaveDataUtility(Z_Construct_UClass_UELSSSaveDataUtility, &UELSSSaveDataUtility::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELSSSaveDataUtility"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELSSSaveDataUtility);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
