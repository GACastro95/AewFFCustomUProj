// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSSaveDataManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSSaveDataManager() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELSSSaveDataManager_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSSaveDataManager();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSHeatSkillCategory();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSPlayerEquipSettings();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSLoadoutSettings();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSWrestlerSettings();
// End Cross Module References
	DEFINE_FUNCTION(AELSSSaveDataManager::execConvertJsonTest)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ConvertJsonTest();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSSaveDataManager::execGetLoadoutPresetAbility)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_inPresetIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_inAbilitySlot);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetLoadoutPresetAbility(Z_Param_inPresetIndex,Z_Param_inAbilitySlot);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSSaveDataManager::execGetLoadoutPresetFinisherId)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_inPresetIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetLoadoutPresetFinisherId(Z_Param_inPresetIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSSaveDataManager::execGetLoadoutPresetHeatSkill)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_inPresetIndex);
		P_GET_ENUM(ESSHeatSkillCategory,Z_Param_inCategory);
		P_GET_PROPERTY(FIntProperty,Z_Param_inSkillIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetLoadoutPresetHeatSkill(Z_Param_inPresetIndex,ESSHeatSkillCategory(Z_Param_inCategory),Z_Param_inSkillIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSSaveDataManager::execGetLoadoutPresetHeatSkillSetting)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_inPresetIndex);
		P_GET_ENUM(ESSHeatSkillCategory,Z_Param_inCategory);
		P_GET_PROPERTY(FIntProperty,Z_Param_inSkillSlotIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetLoadoutPresetHeatSkillSetting(Z_Param_inPresetIndex,ESSHeatSkillCategory(Z_Param_inCategory),Z_Param_inSkillSlotIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSSaveDataManager::execGetLoadoutPresetHeatSkillTreeEquipFlag)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_inPresetIndex);
		P_GET_ENUM(ESSHeatSkillCategory,Z_Param_inCategory);
		P_GET_PROPERTY(FIntProperty,Z_Param_inSkillTreeIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetLoadoutPresetHeatSkillTreeEquipFlag(Z_Param_inPresetIndex,ESSHeatSkillCategory(Z_Param_inCategory),Z_Param_inSkillTreeIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSSaveDataManager::execGetLoadoutPresetIndex)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetLoadoutPresetIndex();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSSaveDataManager::execGetLoadoutPresetName)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_inPresetIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetLoadoutPresetName(Z_Param_inPresetIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSSaveDataManager::execGetLoadoutPresetNameMaxLength)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetLoadoutPresetNameMaxLength();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSSaveDataManager::execGetLoadoutPresetNum)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetLoadoutPresetNum();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSSaveDataManager::execGetSSPlayerEquipSettingsFromSaveData)
	{
		P_GET_STRUCT_REF(FSSPlayerEquipSettings,Z_Param_Out_outData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetSSPlayerEquipSettingsFromSaveData(Z_Param_Out_outData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSSaveDataManager::execSetLoadoutPresetAbility)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_inPresetIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_inAbilitySlot);
		P_GET_PROPERTY(FIntProperty,Z_Param_inAbilityId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLoadoutPresetAbility(Z_Param_inPresetIndex,Z_Param_inAbilitySlot,Z_Param_inAbilityId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSSaveDataManager::execSetLoadoutPresetFinisherId)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_inPresetIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_inFinisherId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLoadoutPresetFinisherId(Z_Param_inPresetIndex,Z_Param_inFinisherId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSSaveDataManager::execSetLoadoutPresetHeatSkill)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_inPresetIndex);
		P_GET_ENUM(ESSHeatSkillCategory,Z_Param_inCategory);
		P_GET_PROPERTY(FIntProperty,Z_Param_inSkillIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_inHeatSkillId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLoadoutPresetHeatSkill(Z_Param_inPresetIndex,ESSHeatSkillCategory(Z_Param_inCategory),Z_Param_inSkillIndex,Z_Param_inHeatSkillId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSSaveDataManager::execSetLoadoutPresetHeatSkillSetting)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_inPresetIndex);
		P_GET_ENUM(ESSHeatSkillCategory,Z_Param_inCategory);
		P_GET_PROPERTY(FIntProperty,Z_Param_inSkillSlotIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_inSelectedTreeIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLoadoutPresetHeatSkillSetting(Z_Param_inPresetIndex,ESSHeatSkillCategory(Z_Param_inCategory),Z_Param_inSkillSlotIndex,Z_Param_inSelectedTreeIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSSaveDataManager::execSetLoadoutPresetHeatSkillTreeEquipFlag)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_inPresetIndex);
		P_GET_ENUM(ESSHeatSkillCategory,Z_Param_inCategory);
		P_GET_PROPERTY(FIntProperty,Z_Param_inSkillTreeIndex);
		P_GET_UBOOL(Z_Param_inEquip);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLoadoutPresetHeatSkillTreeEquipFlag(Z_Param_inPresetIndex,ESSHeatSkillCategory(Z_Param_inCategory),Z_Param_inSkillTreeIndex,Z_Param_inEquip);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSSaveDataManager::execSetLoadoutPresetIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLoadoutPresetIndex(Z_Param_InIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSSaveDataManager::execSetLoadoutPresetName)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_inPresetIndex);
		P_GET_PROPERTY(FStrProperty,Z_Param_inPresetName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLoadoutPresetName(Z_Param_inPresetIndex,Z_Param_inPresetName);
		P_NATIVE_END;
	}
	void AELSSSaveDataManager::StaticRegisterNativesAELSSSaveDataManager()
	{
		UClass* Class = AELSSSaveDataManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConvertJsonTest", &AELSSSaveDataManager::execConvertJsonTest },
			{ "GetLoadoutPresetAbility", &AELSSSaveDataManager::execGetLoadoutPresetAbility },
			{ "GetLoadoutPresetFinisherId", &AELSSSaveDataManager::execGetLoadoutPresetFinisherId },
			{ "GetLoadoutPresetHeatSkill", &AELSSSaveDataManager::execGetLoadoutPresetHeatSkill },
			{ "GetLoadoutPresetHeatSkillSetting", &AELSSSaveDataManager::execGetLoadoutPresetHeatSkillSetting },
			{ "GetLoadoutPresetHeatSkillTreeEquipFlag", &AELSSSaveDataManager::execGetLoadoutPresetHeatSkillTreeEquipFlag },
			{ "GetLoadoutPresetIndex", &AELSSSaveDataManager::execGetLoadoutPresetIndex },
			{ "GetLoadoutPresetName", &AELSSSaveDataManager::execGetLoadoutPresetName },
			{ "GetLoadoutPresetNameMaxLength", &AELSSSaveDataManager::execGetLoadoutPresetNameMaxLength },
			{ "GetLoadoutPresetNum", &AELSSSaveDataManager::execGetLoadoutPresetNum },
			{ "GetSSPlayerEquipSettingsFromSaveData", &AELSSSaveDataManager::execGetSSPlayerEquipSettingsFromSaveData },
			{ "SetLoadoutPresetAbility", &AELSSSaveDataManager::execSetLoadoutPresetAbility },
			{ "SetLoadoutPresetFinisherId", &AELSSSaveDataManager::execSetLoadoutPresetFinisherId },
			{ "SetLoadoutPresetHeatSkill", &AELSSSaveDataManager::execSetLoadoutPresetHeatSkill },
			{ "SetLoadoutPresetHeatSkillSetting", &AELSSSaveDataManager::execSetLoadoutPresetHeatSkillSetting },
			{ "SetLoadoutPresetHeatSkillTreeEquipFlag", &AELSSSaveDataManager::execSetLoadoutPresetHeatSkillTreeEquipFlag },
			{ "SetLoadoutPresetIndex", &AELSSSaveDataManager::execSetLoadoutPresetIndex },
			{ "SetLoadoutPresetName", &AELSSSaveDataManager::execSetLoadoutPresetName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AELSSSaveDataManager_ConvertJsonTest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSSaveDataManager_ConvertJsonTest_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSSaveDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSSaveDataManager_ConvertJsonTest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSSaveDataManager, nullptr, "ConvertJsonTest", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSSaveDataManager_ConvertJsonTest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSSaveDataManager_ConvertJsonTest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSSaveDataManager_ConvertJsonTest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSSaveDataManager_ConvertJsonTest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetAbility_Statics
	{
		struct ELSSSaveDataManager_eventGetLoadoutPresetAbility_Parms
		{
			int32 inPresetIndex;
			int32 inAbilitySlot;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inPresetIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inAbilitySlot;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetAbility_Statics::NewProp_inPresetIndex = { "inPresetIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSaveDataManager_eventGetLoadoutPresetAbility_Parms, inPresetIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetAbility_Statics::NewProp_inAbilitySlot = { "inAbilitySlot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSaveDataManager_eventGetLoadoutPresetAbility_Parms, inAbilitySlot), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetAbility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSaveDataManager_eventGetLoadoutPresetAbility_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetAbility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetAbility_Statics::NewProp_inPresetIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetAbility_Statics::NewProp_inAbilitySlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetAbility_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetAbility_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSSaveDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSSaveDataManager, nullptr, "GetLoadoutPresetAbility", nullptr, nullptr, sizeof(ELSSSaveDataManager_eventGetLoadoutPresetAbility_Parms), Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetAbility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetAbility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetAbility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetAbility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetAbility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetAbility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetFinisherId_Statics
	{
		struct ELSSSaveDataManager_eventGetLoadoutPresetFinisherId_Parms
		{
			int32 inPresetIndex;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inPresetIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetFinisherId_Statics::NewProp_inPresetIndex = { "inPresetIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSaveDataManager_eventGetLoadoutPresetFinisherId_Parms, inPresetIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetFinisherId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSaveDataManager_eventGetLoadoutPresetFinisherId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetFinisherId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetFinisherId_Statics::NewProp_inPresetIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetFinisherId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetFinisherId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSSaveDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetFinisherId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSSaveDataManager, nullptr, "GetLoadoutPresetFinisherId", nullptr, nullptr, sizeof(ELSSSaveDataManager_eventGetLoadoutPresetFinisherId_Parms), Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetFinisherId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetFinisherId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetFinisherId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetFinisherId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetFinisherId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetFinisherId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetHeatSkill_Statics
	{
		struct ELSSSaveDataManager_eventGetLoadoutPresetHeatSkill_Parms
		{
			int32 inPresetIndex;
			ESSHeatSkillCategory inCategory;
			int32 inSkillIndex;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inPresetIndex;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_inCategory_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_inCategory;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inSkillIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetHeatSkill_Statics::NewProp_inPresetIndex = { "inPresetIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSaveDataManager_eventGetLoadoutPresetHeatSkill_Parms, inPresetIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetHeatSkill_Statics::NewProp_inCategory_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetHeatSkill_Statics::NewProp_inCategory = { "inCategory", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSaveDataManager_eventGetLoadoutPresetHeatSkill_Parms, inCategory), Z_Construct_UEnum_ABP_200508_ESSHeatSkillCategory, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetHeatSkill_Statics::NewProp_inSkillIndex = { "inSkillIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSaveDataManager_eventGetLoadoutPresetHeatSkill_Parms, inSkillIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetHeatSkill_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSaveDataManager_eventGetLoadoutPresetHeatSkill_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetHeatSkill_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetHeatSkill_Statics::NewProp_inPresetIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetHeatSkill_Statics::NewProp_inCategory_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetHeatSkill_Statics::NewProp_inCategory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetHeatSkill_Statics::NewProp_inSkillIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetHeatSkill_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetHeatSkill_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSSaveDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetHeatSkill_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSSaveDataManager, nullptr, "GetLoadoutPresetHeatSkill", nullptr, nullptr, sizeof(ELSSSaveDataManager_eventGetLoadoutPresetHeatSkill_Parms), Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetHeatSkill_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetHeatSkill_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetHeatSkill_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetHeatSkill_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetHeatSkill()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetHeatSkill_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetHeatSkillSetting_Statics
	{
		struct ELSSSaveDataManager_eventGetLoadoutPresetHeatSkillSetting_Parms
		{
			int32 inPresetIndex;
			ESSHeatSkillCategory inCategory;
			int32 inSkillSlotIndex;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inPresetIndex;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_inCategory_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_inCategory;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inSkillSlotIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetHeatSkillSetting_Statics::NewProp_inPresetIndex = { "inPresetIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSaveDataManager_eventGetLoadoutPresetHeatSkillSetting_Parms, inPresetIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetHeatSkillSetting_Statics::NewProp_inCategory_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetHeatSkillSetting_Statics::NewProp_inCategory = { "inCategory", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSaveDataManager_eventGetLoadoutPresetHeatSkillSetting_Parms, inCategory), Z_Construct_UEnum_ABP_200508_ESSHeatSkillCategory, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetHeatSkillSetting_Statics::NewProp_inSkillSlotIndex = { "inSkillSlotIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSaveDataManager_eventGetLoadoutPresetHeatSkillSetting_Parms, inSkillSlotIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetHeatSkillSetting_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSaveDataManager_eventGetLoadoutPresetHeatSkillSetting_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetHeatSkillSetting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetHeatSkillSetting_Statics::NewProp_inPresetIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetHeatSkillSetting_Statics::NewProp_inCategory_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetHeatSkillSetting_Statics::NewProp_inCategory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetHeatSkillSetting_Statics::NewProp_inSkillSlotIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetHeatSkillSetting_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetHeatSkillSetting_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSSaveDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetHeatSkillSetting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSSaveDataManager, nullptr, "GetLoadoutPresetHeatSkillSetting", nullptr, nullptr, sizeof(ELSSSaveDataManager_eventGetLoadoutPresetHeatSkillSetting_Parms), Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetHeatSkillSetting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetHeatSkillSetting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetHeatSkillSetting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetHeatSkillSetting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetHeatSkillSetting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetHeatSkillSetting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetHeatSkillTreeEquipFlag_Statics
	{
		struct ELSSSaveDataManager_eventGetLoadoutPresetHeatSkillTreeEquipFlag_Parms
		{
			int32 inPresetIndex;
			ESSHeatSkillCategory inCategory;
			int32 inSkillTreeIndex;
			bool ReturnValue;
		};
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetHeatSkillTreeEquipFlag_Statics::NewProp_inPresetIndex = { "inPresetIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSaveDataManager_eventGetLoadoutPresetHeatSkillTreeEquipFlag_Parms, inPresetIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetHeatSkillTreeEquipFlag_Statics::NewProp_inCategory_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetHeatSkillTreeEquipFlag_Statics::NewProp_inCategory = { "inCategory", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSaveDataManager_eventGetLoadoutPresetHeatSkillTreeEquipFlag_Parms, inCategory), Z_Construct_UEnum_ABP_200508_ESSHeatSkillCategory, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetHeatSkillTreeEquipFlag_Statics::NewProp_inSkillTreeIndex = { "inSkillTreeIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSaveDataManager_eventGetLoadoutPresetHeatSkillTreeEquipFlag_Parms, inSkillTreeIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetHeatSkillTreeEquipFlag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSSaveDataManager_eventGetLoadoutPresetHeatSkillTreeEquipFlag_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetHeatSkillTreeEquipFlag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSSaveDataManager_eventGetLoadoutPresetHeatSkillTreeEquipFlag_Parms), &Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetHeatSkillTreeEquipFlag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetHeatSkillTreeEquipFlag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetHeatSkillTreeEquipFlag_Statics::NewProp_inPresetIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetHeatSkillTreeEquipFlag_Statics::NewProp_inCategory_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetHeatSkillTreeEquipFlag_Statics::NewProp_inCategory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetHeatSkillTreeEquipFlag_Statics::NewProp_inSkillTreeIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetHeatSkillTreeEquipFlag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetHeatSkillTreeEquipFlag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSSaveDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetHeatSkillTreeEquipFlag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSSaveDataManager, nullptr, "GetLoadoutPresetHeatSkillTreeEquipFlag", nullptr, nullptr, sizeof(ELSSSaveDataManager_eventGetLoadoutPresetHeatSkillTreeEquipFlag_Parms), Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetHeatSkillTreeEquipFlag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetHeatSkillTreeEquipFlag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetHeatSkillTreeEquipFlag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetHeatSkillTreeEquipFlag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetHeatSkillTreeEquipFlag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetHeatSkillTreeEquipFlag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetIndex_Statics
	{
		struct ELSSSaveDataManager_eventGetLoadoutPresetIndex_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSaveDataManager_eventGetLoadoutPresetIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSSaveDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSSaveDataManager, nullptr, "GetLoadoutPresetIndex", nullptr, nullptr, sizeof(ELSSSaveDataManager_eventGetLoadoutPresetIndex_Parms), Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetName_Statics
	{
		struct ELSSSaveDataManager_eventGetLoadoutPresetName_Parms
		{
			int32 inPresetIndex;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inPresetIndex;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetName_Statics::NewProp_inPresetIndex = { "inPresetIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSaveDataManager_eventGetLoadoutPresetName_Parms, inPresetIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSaveDataManager_eventGetLoadoutPresetName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetName_Statics::NewProp_inPresetIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSSaveDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSSaveDataManager, nullptr, "GetLoadoutPresetName", nullptr, nullptr, sizeof(ELSSSaveDataManager_eventGetLoadoutPresetName_Parms), Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetNameMaxLength_Statics
	{
		struct ELSSSaveDataManager_eventGetLoadoutPresetNameMaxLength_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetNameMaxLength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSaveDataManager_eventGetLoadoutPresetNameMaxLength_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetNameMaxLength_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetNameMaxLength_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetNameMaxLength_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSSaveDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetNameMaxLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSSaveDataManager, nullptr, "GetLoadoutPresetNameMaxLength", nullptr, nullptr, sizeof(ELSSSaveDataManager_eventGetLoadoutPresetNameMaxLength_Parms), Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetNameMaxLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetNameMaxLength_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetNameMaxLength_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetNameMaxLength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetNameMaxLength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetNameMaxLength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetNum_Statics
	{
		struct ELSSSaveDataManager_eventGetLoadoutPresetNum_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetNum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSaveDataManager_eventGetLoadoutPresetNum_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetNum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetNum_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetNum_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSSaveDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetNum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSSaveDataManager, nullptr, "GetLoadoutPresetNum", nullptr, nullptr, sizeof(ELSSSaveDataManager_eventGetLoadoutPresetNum_Parms), Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetNum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetNum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetNum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetNum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetNum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetNum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSSaveDataManager_GetSSPlayerEquipSettingsFromSaveData_Statics
	{
		struct ELSSSaveDataManager_eventGetSSPlayerEquipSettingsFromSaveData_Parms
		{
			FSSPlayerEquipSettings outData;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_outData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELSSSaveDataManager_GetSSPlayerEquipSettingsFromSaveData_Statics::NewProp_outData = { "outData", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSaveDataManager_eventGetSSPlayerEquipSettingsFromSaveData_Parms, outData), Z_Construct_UScriptStruct_FSSPlayerEquipSettings, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSSaveDataManager_GetSSPlayerEquipSettingsFromSaveData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSSaveDataManager_GetSSPlayerEquipSettingsFromSaveData_Statics::NewProp_outData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSSaveDataManager_GetSSPlayerEquipSettingsFromSaveData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSSaveDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSSaveDataManager_GetSSPlayerEquipSettingsFromSaveData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSSaveDataManager, nullptr, "GetSSPlayerEquipSettingsFromSaveData", nullptr, nullptr, sizeof(ELSSSaveDataManager_eventGetSSPlayerEquipSettingsFromSaveData_Parms), Z_Construct_UFunction_AELSSSaveDataManager_GetSSPlayerEquipSettingsFromSaveData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSSaveDataManager_GetSSPlayerEquipSettingsFromSaveData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSSaveDataManager_GetSSPlayerEquipSettingsFromSaveData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSSaveDataManager_GetSSPlayerEquipSettingsFromSaveData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSSaveDataManager_GetSSPlayerEquipSettingsFromSaveData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSSaveDataManager_GetSSPlayerEquipSettingsFromSaveData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSSaveDataManager_SetLoadoutPresetAbility_Statics
	{
		struct ELSSSaveDataManager_eventSetLoadoutPresetAbility_Parms
		{
			int32 inPresetIndex;
			int32 inAbilitySlot;
			int32 inAbilityId;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inPresetIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inAbilitySlot;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inAbilityId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSSaveDataManager_SetLoadoutPresetAbility_Statics::NewProp_inPresetIndex = { "inPresetIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSaveDataManager_eventSetLoadoutPresetAbility_Parms, inPresetIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSSaveDataManager_SetLoadoutPresetAbility_Statics::NewProp_inAbilitySlot = { "inAbilitySlot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSaveDataManager_eventSetLoadoutPresetAbility_Parms, inAbilitySlot), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSSaveDataManager_SetLoadoutPresetAbility_Statics::NewProp_inAbilityId = { "inAbilityId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSaveDataManager_eventSetLoadoutPresetAbility_Parms, inAbilityId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSSaveDataManager_SetLoadoutPresetAbility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSSaveDataManager_SetLoadoutPresetAbility_Statics::NewProp_inPresetIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSSaveDataManager_SetLoadoutPresetAbility_Statics::NewProp_inAbilitySlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSSaveDataManager_SetLoadoutPresetAbility_Statics::NewProp_inAbilityId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSSaveDataManager_SetLoadoutPresetAbility_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSSaveDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSSaveDataManager_SetLoadoutPresetAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSSaveDataManager, nullptr, "SetLoadoutPresetAbility", nullptr, nullptr, sizeof(ELSSSaveDataManager_eventSetLoadoutPresetAbility_Parms), Z_Construct_UFunction_AELSSSaveDataManager_SetLoadoutPresetAbility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSSaveDataManager_SetLoadoutPresetAbility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSSaveDataManager_SetLoadoutPresetAbility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSSaveDataManager_SetLoadoutPresetAbility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSSaveDataManager_SetLoadoutPresetAbility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSSaveDataManager_SetLoadoutPresetAbility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSSaveDataManager_SetLoadoutPresetFinisherId_Statics
	{
		struct ELSSSaveDataManager_eventSetLoadoutPresetFinisherId_Parms
		{
			int32 inPresetIndex;
			int32 inFinisherId;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inPresetIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inFinisherId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSSaveDataManager_SetLoadoutPresetFinisherId_Statics::NewProp_inPresetIndex = { "inPresetIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSaveDataManager_eventSetLoadoutPresetFinisherId_Parms, inPresetIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSSaveDataManager_SetLoadoutPresetFinisherId_Statics::NewProp_inFinisherId = { "inFinisherId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSaveDataManager_eventSetLoadoutPresetFinisherId_Parms, inFinisherId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSSaveDataManager_SetLoadoutPresetFinisherId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSSaveDataManager_SetLoadoutPresetFinisherId_Statics::NewProp_inPresetIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSSaveDataManager_SetLoadoutPresetFinisherId_Statics::NewProp_inFinisherId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSSaveDataManager_SetLoadoutPresetFinisherId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSSaveDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSSaveDataManager_SetLoadoutPresetFinisherId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSSaveDataManager, nullptr, "SetLoadoutPresetFinisherId", nullptr, nullptr, sizeof(ELSSSaveDataManager_eventSetLoadoutPresetFinisherId_Parms), Z_Construct_UFunction_AELSSSaveDataManager_SetLoadoutPresetFinisherId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSSaveDataManager_SetLoadoutPresetFinisherId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSSaveDataManager_SetLoadoutPresetFinisherId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSSaveDataManager_SetLoadoutPresetFinisherId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSSaveDataManager_SetLoadoutPresetFinisherId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSSaveDataManager_SetLoadoutPresetFinisherId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSSaveDataManager_SetLoadoutPresetHeatSkill_Statics
	{
		struct ELSSSaveDataManager_eventSetLoadoutPresetHeatSkill_Parms
		{
			int32 inPresetIndex;
			ESSHeatSkillCategory inCategory;
			int32 inSkillIndex;
			int32 inHeatSkillId;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inPresetIndex;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_inCategory_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_inCategory;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inSkillIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inHeatSkillId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSSaveDataManager_SetLoadoutPresetHeatSkill_Statics::NewProp_inPresetIndex = { "inPresetIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSaveDataManager_eventSetLoadoutPresetHeatSkill_Parms, inPresetIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSSaveDataManager_SetLoadoutPresetHeatSkill_Statics::NewProp_inCategory_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSSaveDataManager_SetLoadoutPresetHeatSkill_Statics::NewProp_inCategory = { "inCategory", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSaveDataManager_eventSetLoadoutPresetHeatSkill_Parms, inCategory), Z_Construct_UEnum_ABP_200508_ESSHeatSkillCategory, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSSaveDataManager_SetLoadoutPresetHeatSkill_Statics::NewProp_inSkillIndex = { "inSkillIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSaveDataManager_eventSetLoadoutPresetHeatSkill_Parms, inSkillIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSSaveDataManager_SetLoadoutPresetHeatSkill_Statics::NewProp_inHeatSkillId = { "inHeatSkillId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSaveDataManager_eventSetLoadoutPresetHeatSkill_Parms, inHeatSkillId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSSaveDataManager_SetLoadoutPresetHeatSkill_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSSaveDataManager_SetLoadoutPresetHeatSkill_Statics::NewProp_inPresetIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSSaveDataManager_SetLoadoutPresetHeatSkill_Statics::NewProp_inCategory_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSSaveDataManager_SetLoadoutPresetHeatSkill_Statics::NewProp_inCategory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSSaveDataManager_SetLoadoutPresetHeatSkill_Statics::NewProp_inSkillIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSSaveDataManager_SetLoadoutPresetHeatSkill_Statics::NewProp_inHeatSkillId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSSaveDataManager_SetLoadoutPresetHeatSkill_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSSaveDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSSaveDataManager_SetLoadoutPresetHeatSkill_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSSaveDataManager, nullptr, "SetLoadoutPresetHeatSkill", nullptr, nullptr, sizeof(ELSSSaveDataManager_eventSetLoadoutPresetHeatSkill_Parms), Z_Construct_UFunction_AELSSSaveDataManager_SetLoadoutPresetHeatSkill_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSSaveDataManager_SetLoadoutPresetHeatSkill_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSSaveDataManager_SetLoadoutPresetHeatSkill_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSSaveDataManager_SetLoadoutPresetHeatSkill_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSSaveDataManager_SetLoadoutPresetHeatSkill()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSSaveDataManager_SetLoadoutPresetHeatSkill_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSSaveDataManager_SetLoadoutPresetHeatSkillSetting_Statics
	{
		struct ELSSSaveDataManager_eventSetLoadoutPresetHeatSkillSetting_Parms
		{
			int32 inPresetIndex;
			ESSHeatSkillCategory inCategory;
			int32 inSkillSlotIndex;
			int32 inSelectedTreeIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inPresetIndex;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_inCategory_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_inCategory;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inSkillSlotIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inSelectedTreeIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSSaveDataManager_SetLoadoutPresetHeatSkillSetting_Statics::NewProp_inPresetIndex = { "inPresetIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSaveDataManager_eventSetLoadoutPresetHeatSkillSetting_Parms, inPresetIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSSaveDataManager_SetLoadoutPresetHeatSkillSetting_Statics::NewProp_inCategory_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSSaveDataManager_SetLoadoutPresetHeatSkillSetting_Statics::NewProp_inCategory = { "inCategory", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSaveDataManager_eventSetLoadoutPresetHeatSkillSetting_Parms, inCategory), Z_Construct_UEnum_ABP_200508_ESSHeatSkillCategory, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSSaveDataManager_SetLoadoutPresetHeatSkillSetting_Statics::NewProp_inSkillSlotIndex = { "inSkillSlotIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSaveDataManager_eventSetLoadoutPresetHeatSkillSetting_Parms, inSkillSlotIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSSaveDataManager_SetLoadoutPresetHeatSkillSetting_Statics::NewProp_inSelectedTreeIndex = { "inSelectedTreeIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSaveDataManager_eventSetLoadoutPresetHeatSkillSetting_Parms, inSelectedTreeIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSSaveDataManager_SetLoadoutPresetHeatSkillSetting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSSaveDataManager_SetLoadoutPresetHeatSkillSetting_Statics::NewProp_inPresetIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSSaveDataManager_SetLoadoutPresetHeatSkillSetting_Statics::NewProp_inCategory_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSSaveDataManager_SetLoadoutPresetHeatSkillSetting_Statics::NewProp_inCategory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSSaveDataManager_SetLoadoutPresetHeatSkillSetting_Statics::NewProp_inSkillSlotIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSSaveDataManager_SetLoadoutPresetHeatSkillSetting_Statics::NewProp_inSelectedTreeIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSSaveDataManager_SetLoadoutPresetHeatSkillSetting_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSSaveDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSSaveDataManager_SetLoadoutPresetHeatSkillSetting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSSaveDataManager, nullptr, "SetLoadoutPresetHeatSkillSetting", nullptr, nullptr, sizeof(ELSSSaveDataManager_eventSetLoadoutPresetHeatSkillSetting_Parms), Z_Construct_UFunction_AELSSSaveDataManager_SetLoadoutPresetHeatSkillSetting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSSaveDataManager_SetLoadoutPresetHeatSkillSetting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSSaveDataManager_SetLoadoutPresetHeatSkillSetting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSSaveDataManager_SetLoadoutPresetHeatSkillSetting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSSaveDataManager_SetLoadoutPresetHeatSkillSetting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSSaveDataManager_SetLoadoutPresetHeatSkillSetting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSSaveDataManager_SetLoadoutPresetHeatSkillTreeEquipFlag_Statics
	{
		struct ELSSSaveDataManager_eventSetLoadoutPresetHeatSkillTreeEquipFlag_Parms
		{
			int32 inPresetIndex;
			ESSHeatSkillCategory inCategory;
			int32 inSkillTreeIndex;
			bool inEquip;
		};
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSSaveDataManager_SetLoadoutPresetHeatSkillTreeEquipFlag_Statics::NewProp_inPresetIndex = { "inPresetIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSaveDataManager_eventSetLoadoutPresetHeatSkillTreeEquipFlag_Parms, inPresetIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELSSSaveDataManager_SetLoadoutPresetHeatSkillTreeEquipFlag_Statics::NewProp_inCategory_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELSSSaveDataManager_SetLoadoutPresetHeatSkillTreeEquipFlag_Statics::NewProp_inCategory = { "inCategory", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSaveDataManager_eventSetLoadoutPresetHeatSkillTreeEquipFlag_Parms, inCategory), Z_Construct_UEnum_ABP_200508_ESSHeatSkillCategory, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSSaveDataManager_SetLoadoutPresetHeatSkillTreeEquipFlag_Statics::NewProp_inSkillTreeIndex = { "inSkillTreeIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSaveDataManager_eventSetLoadoutPresetHeatSkillTreeEquipFlag_Parms, inSkillTreeIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELSSSaveDataManager_SetLoadoutPresetHeatSkillTreeEquipFlag_Statics::NewProp_inEquip_SetBit(void* Obj)
	{
		((ELSSSaveDataManager_eventSetLoadoutPresetHeatSkillTreeEquipFlag_Parms*)Obj)->inEquip = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELSSSaveDataManager_SetLoadoutPresetHeatSkillTreeEquipFlag_Statics::NewProp_inEquip = { "inEquip", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSSaveDataManager_eventSetLoadoutPresetHeatSkillTreeEquipFlag_Parms), &Z_Construct_UFunction_AELSSSaveDataManager_SetLoadoutPresetHeatSkillTreeEquipFlag_Statics::NewProp_inEquip_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSSaveDataManager_SetLoadoutPresetHeatSkillTreeEquipFlag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSSaveDataManager_SetLoadoutPresetHeatSkillTreeEquipFlag_Statics::NewProp_inPresetIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSSaveDataManager_SetLoadoutPresetHeatSkillTreeEquipFlag_Statics::NewProp_inCategory_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSSaveDataManager_SetLoadoutPresetHeatSkillTreeEquipFlag_Statics::NewProp_inCategory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSSaveDataManager_SetLoadoutPresetHeatSkillTreeEquipFlag_Statics::NewProp_inSkillTreeIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSSaveDataManager_SetLoadoutPresetHeatSkillTreeEquipFlag_Statics::NewProp_inEquip,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSSaveDataManager_SetLoadoutPresetHeatSkillTreeEquipFlag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSSaveDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSSaveDataManager_SetLoadoutPresetHeatSkillTreeEquipFlag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSSaveDataManager, nullptr, "SetLoadoutPresetHeatSkillTreeEquipFlag", nullptr, nullptr, sizeof(ELSSSaveDataManager_eventSetLoadoutPresetHeatSkillTreeEquipFlag_Parms), Z_Construct_UFunction_AELSSSaveDataManager_SetLoadoutPresetHeatSkillTreeEquipFlag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSSaveDataManager_SetLoadoutPresetHeatSkillTreeEquipFlag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSSaveDataManager_SetLoadoutPresetHeatSkillTreeEquipFlag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSSaveDataManager_SetLoadoutPresetHeatSkillTreeEquipFlag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSSaveDataManager_SetLoadoutPresetHeatSkillTreeEquipFlag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSSaveDataManager_SetLoadoutPresetHeatSkillTreeEquipFlag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSSaveDataManager_SetLoadoutPresetIndex_Statics
	{
		struct ELSSSaveDataManager_eventSetLoadoutPresetIndex_Parms
		{
			int32 InIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSSaveDataManager_SetLoadoutPresetIndex_Statics::NewProp_InIndex = { "InIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSaveDataManager_eventSetLoadoutPresetIndex_Parms, InIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSSaveDataManager_SetLoadoutPresetIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSSaveDataManager_SetLoadoutPresetIndex_Statics::NewProp_InIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSSaveDataManager_SetLoadoutPresetIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSSaveDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSSaveDataManager_SetLoadoutPresetIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSSaveDataManager, nullptr, "SetLoadoutPresetIndex", nullptr, nullptr, sizeof(ELSSSaveDataManager_eventSetLoadoutPresetIndex_Parms), Z_Construct_UFunction_AELSSSaveDataManager_SetLoadoutPresetIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSSaveDataManager_SetLoadoutPresetIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSSaveDataManager_SetLoadoutPresetIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSSaveDataManager_SetLoadoutPresetIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSSaveDataManager_SetLoadoutPresetIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSSaveDataManager_SetLoadoutPresetIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSSaveDataManager_SetLoadoutPresetName_Statics
	{
		struct ELSSSaveDataManager_eventSetLoadoutPresetName_Parms
		{
			int32 inPresetIndex;
			FString inPresetName;
		};
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSSaveDataManager_SetLoadoutPresetName_Statics::NewProp_inPresetIndex = { "inPresetIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSaveDataManager_eventSetLoadoutPresetName_Parms, inPresetIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSSaveDataManager_SetLoadoutPresetName_Statics::NewProp_inPresetName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AELSSSaveDataManager_SetLoadoutPresetName_Statics::NewProp_inPresetName = { "inPresetName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSSaveDataManager_eventSetLoadoutPresetName_Parms, inPresetName), METADATA_PARAMS(Z_Construct_UFunction_AELSSSaveDataManager_SetLoadoutPresetName_Statics::NewProp_inPresetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSSaveDataManager_SetLoadoutPresetName_Statics::NewProp_inPresetName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSSaveDataManager_SetLoadoutPresetName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSSaveDataManager_SetLoadoutPresetName_Statics::NewProp_inPresetIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSSaveDataManager_SetLoadoutPresetName_Statics::NewProp_inPresetName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSSaveDataManager_SetLoadoutPresetName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSSaveDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSSaveDataManager_SetLoadoutPresetName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSSaveDataManager, nullptr, "SetLoadoutPresetName", nullptr, nullptr, sizeof(ELSSSaveDataManager_eventSetLoadoutPresetName_Parms), Z_Construct_UFunction_AELSSSaveDataManager_SetLoadoutPresetName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSSaveDataManager_SetLoadoutPresetName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSSaveDataManager_SetLoadoutPresetName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSSaveDataManager_SetLoadoutPresetName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSSaveDataManager_SetLoadoutPresetName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSSaveDataManager_SetLoadoutPresetName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AELSSSaveDataManager_NoRegister()
	{
		return AELSSSaveDataManager::StaticClass();
	}
	struct Z_Construct_UClass_AELSSSaveDataManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadoutSettingsDummy_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LoadoutSettingsDummy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WrestlerSettingsDummy_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WrestlerSettingsDummy;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELSSSaveDataManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AELSSSaveDataManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AELSSSaveDataManager_ConvertJsonTest, "ConvertJsonTest" }, // 301191838
		{ &Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetAbility, "GetLoadoutPresetAbility" }, // 250048038
		{ &Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetFinisherId, "GetLoadoutPresetFinisherId" }, // 2255899948
		{ &Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetHeatSkill, "GetLoadoutPresetHeatSkill" }, // 3265868720
		{ &Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetHeatSkillSetting, "GetLoadoutPresetHeatSkillSetting" }, // 3391405962
		{ &Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetHeatSkillTreeEquipFlag, "GetLoadoutPresetHeatSkillTreeEquipFlag" }, // 460057334
		{ &Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetIndex, "GetLoadoutPresetIndex" }, // 2410631977
		{ &Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetName, "GetLoadoutPresetName" }, // 2329002169
		{ &Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetNameMaxLength, "GetLoadoutPresetNameMaxLength" }, // 1642637113
		{ &Z_Construct_UFunction_AELSSSaveDataManager_GetLoadoutPresetNum, "GetLoadoutPresetNum" }, // 3232215077
		{ &Z_Construct_UFunction_AELSSSaveDataManager_GetSSPlayerEquipSettingsFromSaveData, "GetSSPlayerEquipSettingsFromSaveData" }, // 4281310805
		{ &Z_Construct_UFunction_AELSSSaveDataManager_SetLoadoutPresetAbility, "SetLoadoutPresetAbility" }, // 1919325004
		{ &Z_Construct_UFunction_AELSSSaveDataManager_SetLoadoutPresetFinisherId, "SetLoadoutPresetFinisherId" }, // 3532101288
		{ &Z_Construct_UFunction_AELSSSaveDataManager_SetLoadoutPresetHeatSkill, "SetLoadoutPresetHeatSkill" }, // 1108204552
		{ &Z_Construct_UFunction_AELSSSaveDataManager_SetLoadoutPresetHeatSkillSetting, "SetLoadoutPresetHeatSkillSetting" }, // 2543645278
		{ &Z_Construct_UFunction_AELSSSaveDataManager_SetLoadoutPresetHeatSkillTreeEquipFlag, "SetLoadoutPresetHeatSkillTreeEquipFlag" }, // 3291400296
		{ &Z_Construct_UFunction_AELSSSaveDataManager_SetLoadoutPresetIndex, "SetLoadoutPresetIndex" }, // 3984029756
		{ &Z_Construct_UFunction_AELSSSaveDataManager_SetLoadoutPresetName, "SetLoadoutPresetName" }, // 706863211
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSSaveDataManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSSaveDataManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSSaveDataManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSSaveDataManager_Statics::NewProp_LoadoutSettingsDummy_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSSaveDataManager" },
		{ "ModuleRelativePath", "Public/ELSSSaveDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AELSSSaveDataManager_Statics::NewProp_LoadoutSettingsDummy = { "LoadoutSettingsDummy", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSSaveDataManager, LoadoutSettingsDummy), Z_Construct_UScriptStruct_FSSLoadoutSettings, METADATA_PARAMS(Z_Construct_UClass_AELSSSaveDataManager_Statics::NewProp_LoadoutSettingsDummy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSSaveDataManager_Statics::NewProp_LoadoutSettingsDummy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSSaveDataManager_Statics::NewProp_WrestlerSettingsDummy_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSSaveDataManager" },
		{ "ModuleRelativePath", "Public/ELSSSaveDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AELSSSaveDataManager_Statics::NewProp_WrestlerSettingsDummy = { "WrestlerSettingsDummy", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSSaveDataManager, WrestlerSettingsDummy), Z_Construct_UScriptStruct_FSSWrestlerSettings, METADATA_PARAMS(Z_Construct_UClass_AELSSSaveDataManager_Statics::NewProp_WrestlerSettingsDummy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSSaveDataManager_Statics::NewProp_WrestlerSettingsDummy_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AELSSSaveDataManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSSaveDataManager_Statics::NewProp_LoadoutSettingsDummy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSSaveDataManager_Statics::NewProp_WrestlerSettingsDummy,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELSSSaveDataManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELSSSaveDataManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELSSSaveDataManager_Statics::ClassParams = {
		&AELSSSaveDataManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AELSSSaveDataManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AELSSSaveDataManager_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AELSSSaveDataManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSSaveDataManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELSSSaveDataManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELSSSaveDataManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELSSSaveDataManager, 1216814617);
	template<> ABP_200508_API UClass* StaticClass<AELSSSaveDataManager>()
	{
		return AELSSSaveDataManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELSSSaveDataManager(Z_Construct_UClass_AELSSSaveDataManager, &AELSSSaveDataManager::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELSSSaveDataManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELSSSaveDataManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
