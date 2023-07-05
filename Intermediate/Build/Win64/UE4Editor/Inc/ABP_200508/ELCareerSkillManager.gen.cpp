// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELCareerSkillManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELCareerSkillManager() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELCareerSkillManager_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELCareerSkillManager();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FCareerActionSkillData();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FCareerParameterSkillData();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FCareerPassiveSkillData();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FCareerParameterSkillArray();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerSkillState();
// End Cross Module References
	DEFINE_FUNCTION(AELCareerSkillManager::execAddCareerActionSkillData)
	{
		P_GET_STRUCT(FCareerActionSkillData,Z_Param__Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddCareerActionSkillData(Z_Param__Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELCareerSkillManager::execAddCareerParameterSkillData)
	{
		P_GET_STRUCT(FCareerParameterSkillData,Z_Param__Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddCareerParameterSkillData(Z_Param__Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELCareerSkillManager::execAddCareerPassiveSkillData)
	{
		P_GET_STRUCT(FCareerPassiveSkillData,Z_Param__Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddCareerPassiveSkillData(Z_Param__Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELCareerSkillManager::execCheckOpenParameterSkill)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__SelectIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CheckOpenParameterSkill(Z_Param__SelectIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELCareerSkillManager::execGetActionSkillStateList)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<int32>*)Z_Param__Result=P_THIS->GetActionSkillStateList();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELCareerSkillManager::execGetCareerActionSkillTableBase)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FCareerActionSkillData>*)Z_Param__Result=P_THIS->GetCareerActionSkillTableBase();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELCareerSkillManager::execGetCareerParameterSkillTableBase)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FCareerParameterSkillData>*)Z_Param__Result=P_THIS->GetCareerParameterSkillTableBase();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELCareerSkillManager::execGetCareerPassiveSkillTableBase)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FCareerPassiveSkillData>*)Z_Param__Result=P_THIS->GetCareerPassiveSkillTableBase();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELCareerSkillManager::execGetDescriptionStringID)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__Index);
		P_GET_PROPERTY(FIntProperty,Z_Param__LevelIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetDescriptionStringID(Z_Param__Index,Z_Param__LevelIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELCareerSkillManager::execGetParameterSkillLevel)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetParameterSkillLevel(Z_Param__Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELCareerSkillManager::execGetParameterSkillStateArrayList)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FCareerParameterSkillArray*)Z_Param__Result=P_THIS->GetParameterSkillStateArrayList();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELCareerSkillManager::execGetPassiveSkillStateList)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<int32>*)Z_Param__Result=P_THIS->GetPassiveSkillStateList();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELCareerSkillManager::execGetSkillCategory)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetSkillCategory();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELCareerSkillManager::execGetSkillImage)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__Index);
		P_GET_SOFTOBJECT_REF(TSoftObjectPtr<UTexture2D>,Z_Param_Out__outTexture);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetSkillImage(Z_Param__Index,Z_Param_Out__outTexture);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELCareerSkillManager::execGetSkillNameStringID)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__Index);
		P_GET_PROPERTY(FIntProperty,Z_Param__LevelIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetSkillNameStringID(Z_Param__Index,Z_Param__LevelIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELCareerSkillManager::execGetSkillNo)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetSkillNo(Z_Param__Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELCareerSkillManager::execGetSkillSort)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetSkillSort(Z_Param__Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELCareerSkillManager::execGetSkillState)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__SelectIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ECareerSkillState*)Z_Param__Result=P_THIS->GetSkillState(Z_Param__SelectIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELCareerSkillManager::execGetSkillThumbnail)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__Index);
		P_GET_SOFTOBJECT_REF(TSoftObjectPtr<UTexture2D>,Z_Param_Out__outTexture);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetSkillThumbnail(Z_Param__Index,Z_Param_Out__outTexture);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELCareerSkillManager::execGetSkillUsed)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetSkillUsed(Z_Param__Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELCareerSkillManager::execGetUnlockCost)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__Index);
		P_GET_PROPERTY(FIntProperty,Z_Param__LevelIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetUnlockCost(Z_Param__Index,Z_Param__LevelIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELCareerSkillManager::execLoadSkillManagerParam)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadSkillManagerParam();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELCareerSkillManager::execSaveWrestlerParam)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SaveWrestlerParam();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELCareerSkillManager::execSetSkillCategory)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__Category);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSkillCategory(Z_Param__Category);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELCareerSkillManager::execUnlockSkill)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__SelectIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param__LevelIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->UnlockSkill(Z_Param__SelectIndex,Z_Param__LevelIndex);
		P_NATIVE_END;
	}
	void AELCareerSkillManager::StaticRegisterNativesAELCareerSkillManager()
	{
		UClass* Class = AELCareerSkillManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddCareerActionSkillData", &AELCareerSkillManager::execAddCareerActionSkillData },
			{ "AddCareerParameterSkillData", &AELCareerSkillManager::execAddCareerParameterSkillData },
			{ "AddCareerPassiveSkillData", &AELCareerSkillManager::execAddCareerPassiveSkillData },
			{ "CheckOpenParameterSkill", &AELCareerSkillManager::execCheckOpenParameterSkill },
			{ "GetActionSkillStateList", &AELCareerSkillManager::execGetActionSkillStateList },
			{ "GetCareerActionSkillTableBase", &AELCareerSkillManager::execGetCareerActionSkillTableBase },
			{ "GetCareerParameterSkillTableBase", &AELCareerSkillManager::execGetCareerParameterSkillTableBase },
			{ "GetCareerPassiveSkillTableBase", &AELCareerSkillManager::execGetCareerPassiveSkillTableBase },
			{ "GetDescriptionStringID", &AELCareerSkillManager::execGetDescriptionStringID },
			{ "GetParameterSkillLevel", &AELCareerSkillManager::execGetParameterSkillLevel },
			{ "GetParameterSkillStateArrayList", &AELCareerSkillManager::execGetParameterSkillStateArrayList },
			{ "GetPassiveSkillStateList", &AELCareerSkillManager::execGetPassiveSkillStateList },
			{ "GetSkillCategory", &AELCareerSkillManager::execGetSkillCategory },
			{ "GetSkillImage", &AELCareerSkillManager::execGetSkillImage },
			{ "GetSkillNameStringID", &AELCareerSkillManager::execGetSkillNameStringID },
			{ "GetSkillNo", &AELCareerSkillManager::execGetSkillNo },
			{ "GetSkillSort", &AELCareerSkillManager::execGetSkillSort },
			{ "GetSkillState", &AELCareerSkillManager::execGetSkillState },
			{ "GetSkillThumbnail", &AELCareerSkillManager::execGetSkillThumbnail },
			{ "GetSkillUsed", &AELCareerSkillManager::execGetSkillUsed },
			{ "GetUnlockCost", &AELCareerSkillManager::execGetUnlockCost },
			{ "LoadSkillManagerParam", &AELCareerSkillManager::execLoadSkillManagerParam },
			{ "SaveWrestlerParam", &AELCareerSkillManager::execSaveWrestlerParam },
			{ "SetSkillCategory", &AELCareerSkillManager::execSetSkillCategory },
			{ "UnlockSkill", &AELCareerSkillManager::execUnlockSkill },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AELCareerSkillManager_AddCareerActionSkillData_Statics
	{
		struct ELCareerSkillManager_eventAddCareerActionSkillData_Parms
		{
			FCareerActionSkillData _Data;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__Data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELCareerSkillManager_AddCareerActionSkillData_Statics::NewProp__Data = { "_Data", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerSkillManager_eventAddCareerActionSkillData_Parms, _Data), Z_Construct_UScriptStruct_FCareerActionSkillData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerSkillManager_AddCareerActionSkillData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerSkillManager_AddCareerActionSkillData_Statics::NewProp__Data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerSkillManager_AddCareerActionSkillData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerSkillManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerSkillManager_AddCareerActionSkillData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerSkillManager, nullptr, "AddCareerActionSkillData", nullptr, nullptr, sizeof(ELCareerSkillManager_eventAddCareerActionSkillData_Parms), Z_Construct_UFunction_AELCareerSkillManager_AddCareerActionSkillData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerSkillManager_AddCareerActionSkillData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerSkillManager_AddCareerActionSkillData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerSkillManager_AddCareerActionSkillData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerSkillManager_AddCareerActionSkillData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerSkillManager_AddCareerActionSkillData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerSkillManager_AddCareerParameterSkillData_Statics
	{
		struct ELCareerSkillManager_eventAddCareerParameterSkillData_Parms
		{
			FCareerParameterSkillData _Data;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__Data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELCareerSkillManager_AddCareerParameterSkillData_Statics::NewProp__Data = { "_Data", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerSkillManager_eventAddCareerParameterSkillData_Parms, _Data), Z_Construct_UScriptStruct_FCareerParameterSkillData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerSkillManager_AddCareerParameterSkillData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerSkillManager_AddCareerParameterSkillData_Statics::NewProp__Data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerSkillManager_AddCareerParameterSkillData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerSkillManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerSkillManager_AddCareerParameterSkillData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerSkillManager, nullptr, "AddCareerParameterSkillData", nullptr, nullptr, sizeof(ELCareerSkillManager_eventAddCareerParameterSkillData_Parms), Z_Construct_UFunction_AELCareerSkillManager_AddCareerParameterSkillData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerSkillManager_AddCareerParameterSkillData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerSkillManager_AddCareerParameterSkillData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerSkillManager_AddCareerParameterSkillData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerSkillManager_AddCareerParameterSkillData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerSkillManager_AddCareerParameterSkillData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerSkillManager_AddCareerPassiveSkillData_Statics
	{
		struct ELCareerSkillManager_eventAddCareerPassiveSkillData_Parms
		{
			FCareerPassiveSkillData _Data;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__Data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELCareerSkillManager_AddCareerPassiveSkillData_Statics::NewProp__Data = { "_Data", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerSkillManager_eventAddCareerPassiveSkillData_Parms, _Data), Z_Construct_UScriptStruct_FCareerPassiveSkillData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerSkillManager_AddCareerPassiveSkillData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerSkillManager_AddCareerPassiveSkillData_Statics::NewProp__Data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerSkillManager_AddCareerPassiveSkillData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerSkillManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerSkillManager_AddCareerPassiveSkillData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerSkillManager, nullptr, "AddCareerPassiveSkillData", nullptr, nullptr, sizeof(ELCareerSkillManager_eventAddCareerPassiveSkillData_Parms), Z_Construct_UFunction_AELCareerSkillManager_AddCareerPassiveSkillData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerSkillManager_AddCareerPassiveSkillData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerSkillManager_AddCareerPassiveSkillData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerSkillManager_AddCareerPassiveSkillData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerSkillManager_AddCareerPassiveSkillData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerSkillManager_AddCareerPassiveSkillData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerSkillManager_CheckOpenParameterSkill_Statics
	{
		struct ELCareerSkillManager_eventCheckOpenParameterSkill_Parms
		{
			int32 _SelectIndex;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__SelectIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELCareerSkillManager_CheckOpenParameterSkill_Statics::NewProp__SelectIndex = { "_SelectIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerSkillManager_eventCheckOpenParameterSkill_Parms, _SelectIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELCareerSkillManager_CheckOpenParameterSkill_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELCareerSkillManager_eventCheckOpenParameterSkill_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELCareerSkillManager_CheckOpenParameterSkill_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELCareerSkillManager_eventCheckOpenParameterSkill_Parms), &Z_Construct_UFunction_AELCareerSkillManager_CheckOpenParameterSkill_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerSkillManager_CheckOpenParameterSkill_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerSkillManager_CheckOpenParameterSkill_Statics::NewProp__SelectIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerSkillManager_CheckOpenParameterSkill_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerSkillManager_CheckOpenParameterSkill_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerSkillManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerSkillManager_CheckOpenParameterSkill_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerSkillManager, nullptr, "CheckOpenParameterSkill", nullptr, nullptr, sizeof(ELCareerSkillManager_eventCheckOpenParameterSkill_Parms), Z_Construct_UFunction_AELCareerSkillManager_CheckOpenParameterSkill_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerSkillManager_CheckOpenParameterSkill_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerSkillManager_CheckOpenParameterSkill_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerSkillManager_CheckOpenParameterSkill_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerSkillManager_CheckOpenParameterSkill()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerSkillManager_CheckOpenParameterSkill_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerSkillManager_GetActionSkillStateList_Statics
	{
		struct ELCareerSkillManager_eventGetActionSkillStateList_Parms
		{
			TArray<int32> ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELCareerSkillManager_GetActionSkillStateList_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AELCareerSkillManager_GetActionSkillStateList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerSkillManager_eventGetActionSkillStateList_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerSkillManager_GetActionSkillStateList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerSkillManager_GetActionSkillStateList_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerSkillManager_GetActionSkillStateList_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerSkillManager_GetActionSkillStateList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerSkillManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerSkillManager_GetActionSkillStateList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerSkillManager, nullptr, "GetActionSkillStateList", nullptr, nullptr, sizeof(ELCareerSkillManager_eventGetActionSkillStateList_Parms), Z_Construct_UFunction_AELCareerSkillManager_GetActionSkillStateList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerSkillManager_GetActionSkillStateList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerSkillManager_GetActionSkillStateList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerSkillManager_GetActionSkillStateList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerSkillManager_GetActionSkillStateList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerSkillManager_GetActionSkillStateList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerSkillManager_GetCareerActionSkillTableBase_Statics
	{
		struct ELCareerSkillManager_eventGetCareerActionSkillTableBase_Parms
		{
			TArray<FCareerActionSkillData> ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELCareerSkillManager_GetCareerActionSkillTableBase_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCareerActionSkillData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AELCareerSkillManager_GetCareerActionSkillTableBase_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerSkillManager_eventGetCareerActionSkillTableBase_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerSkillManager_GetCareerActionSkillTableBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerSkillManager_GetCareerActionSkillTableBase_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerSkillManager_GetCareerActionSkillTableBase_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerSkillManager_GetCareerActionSkillTableBase_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerSkillManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerSkillManager_GetCareerActionSkillTableBase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerSkillManager, nullptr, "GetCareerActionSkillTableBase", nullptr, nullptr, sizeof(ELCareerSkillManager_eventGetCareerActionSkillTableBase_Parms), Z_Construct_UFunction_AELCareerSkillManager_GetCareerActionSkillTableBase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerSkillManager_GetCareerActionSkillTableBase_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerSkillManager_GetCareerActionSkillTableBase_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerSkillManager_GetCareerActionSkillTableBase_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerSkillManager_GetCareerActionSkillTableBase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerSkillManager_GetCareerActionSkillTableBase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerSkillManager_GetCareerParameterSkillTableBase_Statics
	{
		struct ELCareerSkillManager_eventGetCareerParameterSkillTableBase_Parms
		{
			TArray<FCareerParameterSkillData> ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELCareerSkillManager_GetCareerParameterSkillTableBase_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCareerParameterSkillData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AELCareerSkillManager_GetCareerParameterSkillTableBase_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerSkillManager_eventGetCareerParameterSkillTableBase_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerSkillManager_GetCareerParameterSkillTableBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerSkillManager_GetCareerParameterSkillTableBase_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerSkillManager_GetCareerParameterSkillTableBase_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerSkillManager_GetCareerParameterSkillTableBase_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerSkillManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerSkillManager_GetCareerParameterSkillTableBase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerSkillManager, nullptr, "GetCareerParameterSkillTableBase", nullptr, nullptr, sizeof(ELCareerSkillManager_eventGetCareerParameterSkillTableBase_Parms), Z_Construct_UFunction_AELCareerSkillManager_GetCareerParameterSkillTableBase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerSkillManager_GetCareerParameterSkillTableBase_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerSkillManager_GetCareerParameterSkillTableBase_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerSkillManager_GetCareerParameterSkillTableBase_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerSkillManager_GetCareerParameterSkillTableBase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerSkillManager_GetCareerParameterSkillTableBase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerSkillManager_GetCareerPassiveSkillTableBase_Statics
	{
		struct ELCareerSkillManager_eventGetCareerPassiveSkillTableBase_Parms
		{
			TArray<FCareerPassiveSkillData> ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELCareerSkillManager_GetCareerPassiveSkillTableBase_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCareerPassiveSkillData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AELCareerSkillManager_GetCareerPassiveSkillTableBase_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerSkillManager_eventGetCareerPassiveSkillTableBase_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerSkillManager_GetCareerPassiveSkillTableBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerSkillManager_GetCareerPassiveSkillTableBase_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerSkillManager_GetCareerPassiveSkillTableBase_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerSkillManager_GetCareerPassiveSkillTableBase_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerSkillManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerSkillManager_GetCareerPassiveSkillTableBase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerSkillManager, nullptr, "GetCareerPassiveSkillTableBase", nullptr, nullptr, sizeof(ELCareerSkillManager_eventGetCareerPassiveSkillTableBase_Parms), Z_Construct_UFunction_AELCareerSkillManager_GetCareerPassiveSkillTableBase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerSkillManager_GetCareerPassiveSkillTableBase_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerSkillManager_GetCareerPassiveSkillTableBase_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerSkillManager_GetCareerPassiveSkillTableBase_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerSkillManager_GetCareerPassiveSkillTableBase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerSkillManager_GetCareerPassiveSkillTableBase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerSkillManager_GetDescriptionStringID_Statics
	{
		struct ELCareerSkillManager_eventGetDescriptionStringID_Parms
		{
			int32 _Index;
			int32 _LevelIndex;
			FName ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__Index;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__LevelIndex;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELCareerSkillManager_GetDescriptionStringID_Statics::NewProp__Index = { "_Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerSkillManager_eventGetDescriptionStringID_Parms, _Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELCareerSkillManager_GetDescriptionStringID_Statics::NewProp__LevelIndex = { "_LevelIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerSkillManager_eventGetDescriptionStringID_Parms, _LevelIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AELCareerSkillManager_GetDescriptionStringID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerSkillManager_eventGetDescriptionStringID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerSkillManager_GetDescriptionStringID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerSkillManager_GetDescriptionStringID_Statics::NewProp__Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerSkillManager_GetDescriptionStringID_Statics::NewProp__LevelIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerSkillManager_GetDescriptionStringID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerSkillManager_GetDescriptionStringID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerSkillManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerSkillManager_GetDescriptionStringID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerSkillManager, nullptr, "GetDescriptionStringID", nullptr, nullptr, sizeof(ELCareerSkillManager_eventGetDescriptionStringID_Parms), Z_Construct_UFunction_AELCareerSkillManager_GetDescriptionStringID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerSkillManager_GetDescriptionStringID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerSkillManager_GetDescriptionStringID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerSkillManager_GetDescriptionStringID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerSkillManager_GetDescriptionStringID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerSkillManager_GetDescriptionStringID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerSkillManager_GetParameterSkillLevel_Statics
	{
		struct ELCareerSkillManager_eventGetParameterSkillLevel_Parms
		{
			int32 _Index;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__Index;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELCareerSkillManager_GetParameterSkillLevel_Statics::NewProp__Index = { "_Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerSkillManager_eventGetParameterSkillLevel_Parms, _Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELCareerSkillManager_GetParameterSkillLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerSkillManager_eventGetParameterSkillLevel_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerSkillManager_GetParameterSkillLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerSkillManager_GetParameterSkillLevel_Statics::NewProp__Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerSkillManager_GetParameterSkillLevel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerSkillManager_GetParameterSkillLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerSkillManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerSkillManager_GetParameterSkillLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerSkillManager, nullptr, "GetParameterSkillLevel", nullptr, nullptr, sizeof(ELCareerSkillManager_eventGetParameterSkillLevel_Parms), Z_Construct_UFunction_AELCareerSkillManager_GetParameterSkillLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerSkillManager_GetParameterSkillLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerSkillManager_GetParameterSkillLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerSkillManager_GetParameterSkillLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerSkillManager_GetParameterSkillLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerSkillManager_GetParameterSkillLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerSkillManager_GetParameterSkillStateArrayList_Statics
	{
		struct ELCareerSkillManager_eventGetParameterSkillStateArrayList_Parms
		{
			FCareerParameterSkillArray ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AELCareerSkillManager_GetParameterSkillStateArrayList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerSkillManager_eventGetParameterSkillStateArrayList_Parms, ReturnValue), Z_Construct_UScriptStruct_FCareerParameterSkillArray, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerSkillManager_GetParameterSkillStateArrayList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerSkillManager_GetParameterSkillStateArrayList_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerSkillManager_GetParameterSkillStateArrayList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerSkillManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerSkillManager_GetParameterSkillStateArrayList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerSkillManager, nullptr, "GetParameterSkillStateArrayList", nullptr, nullptr, sizeof(ELCareerSkillManager_eventGetParameterSkillStateArrayList_Parms), Z_Construct_UFunction_AELCareerSkillManager_GetParameterSkillStateArrayList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerSkillManager_GetParameterSkillStateArrayList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerSkillManager_GetParameterSkillStateArrayList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerSkillManager_GetParameterSkillStateArrayList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerSkillManager_GetParameterSkillStateArrayList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerSkillManager_GetParameterSkillStateArrayList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerSkillManager_GetPassiveSkillStateList_Statics
	{
		struct ELCareerSkillManager_eventGetPassiveSkillStateList_Parms
		{
			TArray<int32> ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELCareerSkillManager_GetPassiveSkillStateList_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AELCareerSkillManager_GetPassiveSkillStateList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerSkillManager_eventGetPassiveSkillStateList_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerSkillManager_GetPassiveSkillStateList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerSkillManager_GetPassiveSkillStateList_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerSkillManager_GetPassiveSkillStateList_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerSkillManager_GetPassiveSkillStateList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerSkillManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerSkillManager_GetPassiveSkillStateList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerSkillManager, nullptr, "GetPassiveSkillStateList", nullptr, nullptr, sizeof(ELCareerSkillManager_eventGetPassiveSkillStateList_Parms), Z_Construct_UFunction_AELCareerSkillManager_GetPassiveSkillStateList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerSkillManager_GetPassiveSkillStateList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerSkillManager_GetPassiveSkillStateList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerSkillManager_GetPassiveSkillStateList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerSkillManager_GetPassiveSkillStateList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerSkillManager_GetPassiveSkillStateList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerSkillManager_GetSkillCategory_Statics
	{
		struct ELCareerSkillManager_eventGetSkillCategory_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELCareerSkillManager_GetSkillCategory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerSkillManager_eventGetSkillCategory_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerSkillManager_GetSkillCategory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerSkillManager_GetSkillCategory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerSkillManager_GetSkillCategory_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerSkillManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerSkillManager_GetSkillCategory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerSkillManager, nullptr, "GetSkillCategory", nullptr, nullptr, sizeof(ELCareerSkillManager_eventGetSkillCategory_Parms), Z_Construct_UFunction_AELCareerSkillManager_GetSkillCategory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerSkillManager_GetSkillCategory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerSkillManager_GetSkillCategory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerSkillManager_GetSkillCategory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerSkillManager_GetSkillCategory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerSkillManager_GetSkillCategory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerSkillManager_GetSkillImage_Statics
	{
		struct ELCareerSkillManager_eventGetSkillImage_Parms
		{
			int32 _Index;
			TSoftObjectPtr<UTexture2D> _outTexture;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__Index;
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp__outTexture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELCareerSkillManager_GetSkillImage_Statics::NewProp__Index = { "_Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerSkillManager_eventGetSkillImage_Parms, _Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_AELCareerSkillManager_GetSkillImage_Statics::NewProp__outTexture = { "_outTexture", nullptr, (EPropertyFlags)0x0014000000000180, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerSkillManager_eventGetSkillImage_Parms, _outTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerSkillManager_GetSkillImage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerSkillManager_GetSkillImage_Statics::NewProp__Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerSkillManager_GetSkillImage_Statics::NewProp__outTexture,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerSkillManager_GetSkillImage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerSkillManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerSkillManager_GetSkillImage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerSkillManager, nullptr, "GetSkillImage", nullptr, nullptr, sizeof(ELCareerSkillManager_eventGetSkillImage_Parms), Z_Construct_UFunction_AELCareerSkillManager_GetSkillImage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerSkillManager_GetSkillImage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerSkillManager_GetSkillImage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerSkillManager_GetSkillImage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerSkillManager_GetSkillImage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerSkillManager_GetSkillImage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerSkillManager_GetSkillNameStringID_Statics
	{
		struct ELCareerSkillManager_eventGetSkillNameStringID_Parms
		{
			int32 _Index;
			int32 _LevelIndex;
			FName ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__Index;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__LevelIndex;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELCareerSkillManager_GetSkillNameStringID_Statics::NewProp__Index = { "_Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerSkillManager_eventGetSkillNameStringID_Parms, _Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELCareerSkillManager_GetSkillNameStringID_Statics::NewProp__LevelIndex = { "_LevelIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerSkillManager_eventGetSkillNameStringID_Parms, _LevelIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AELCareerSkillManager_GetSkillNameStringID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerSkillManager_eventGetSkillNameStringID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerSkillManager_GetSkillNameStringID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerSkillManager_GetSkillNameStringID_Statics::NewProp__Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerSkillManager_GetSkillNameStringID_Statics::NewProp__LevelIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerSkillManager_GetSkillNameStringID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerSkillManager_GetSkillNameStringID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerSkillManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerSkillManager_GetSkillNameStringID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerSkillManager, nullptr, "GetSkillNameStringID", nullptr, nullptr, sizeof(ELCareerSkillManager_eventGetSkillNameStringID_Parms), Z_Construct_UFunction_AELCareerSkillManager_GetSkillNameStringID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerSkillManager_GetSkillNameStringID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerSkillManager_GetSkillNameStringID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerSkillManager_GetSkillNameStringID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerSkillManager_GetSkillNameStringID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerSkillManager_GetSkillNameStringID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerSkillManager_GetSkillNo_Statics
	{
		struct ELCareerSkillManager_eventGetSkillNo_Parms
		{
			int32 _Index;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__Index;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELCareerSkillManager_GetSkillNo_Statics::NewProp__Index = { "_Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerSkillManager_eventGetSkillNo_Parms, _Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELCareerSkillManager_GetSkillNo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerSkillManager_eventGetSkillNo_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerSkillManager_GetSkillNo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerSkillManager_GetSkillNo_Statics::NewProp__Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerSkillManager_GetSkillNo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerSkillManager_GetSkillNo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerSkillManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerSkillManager_GetSkillNo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerSkillManager, nullptr, "GetSkillNo", nullptr, nullptr, sizeof(ELCareerSkillManager_eventGetSkillNo_Parms), Z_Construct_UFunction_AELCareerSkillManager_GetSkillNo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerSkillManager_GetSkillNo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerSkillManager_GetSkillNo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerSkillManager_GetSkillNo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerSkillManager_GetSkillNo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerSkillManager_GetSkillNo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerSkillManager_GetSkillSort_Statics
	{
		struct ELCareerSkillManager_eventGetSkillSort_Parms
		{
			int32 _Index;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__Index;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELCareerSkillManager_GetSkillSort_Statics::NewProp__Index = { "_Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerSkillManager_eventGetSkillSort_Parms, _Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELCareerSkillManager_GetSkillSort_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerSkillManager_eventGetSkillSort_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerSkillManager_GetSkillSort_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerSkillManager_GetSkillSort_Statics::NewProp__Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerSkillManager_GetSkillSort_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerSkillManager_GetSkillSort_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerSkillManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerSkillManager_GetSkillSort_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerSkillManager, nullptr, "GetSkillSort", nullptr, nullptr, sizeof(ELCareerSkillManager_eventGetSkillSort_Parms), Z_Construct_UFunction_AELCareerSkillManager_GetSkillSort_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerSkillManager_GetSkillSort_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerSkillManager_GetSkillSort_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerSkillManager_GetSkillSort_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerSkillManager_GetSkillSort()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerSkillManager_GetSkillSort_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerSkillManager_GetSkillState_Statics
	{
		struct ELCareerSkillManager_eventGetSkillState_Parms
		{
			int32 _SelectIndex;
			ECareerSkillState ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__SelectIndex;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELCareerSkillManager_GetSkillState_Statics::NewProp__SelectIndex = { "_SelectIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerSkillManager_eventGetSkillState_Parms, _SelectIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELCareerSkillManager_GetSkillState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELCareerSkillManager_GetSkillState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerSkillManager_eventGetSkillState_Parms, ReturnValue), Z_Construct_UEnum_ABP_200508_ECareerSkillState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerSkillManager_GetSkillState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerSkillManager_GetSkillState_Statics::NewProp__SelectIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerSkillManager_GetSkillState_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerSkillManager_GetSkillState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerSkillManager_GetSkillState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerSkillManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerSkillManager_GetSkillState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerSkillManager, nullptr, "GetSkillState", nullptr, nullptr, sizeof(ELCareerSkillManager_eventGetSkillState_Parms), Z_Construct_UFunction_AELCareerSkillManager_GetSkillState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerSkillManager_GetSkillState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerSkillManager_GetSkillState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerSkillManager_GetSkillState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerSkillManager_GetSkillState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerSkillManager_GetSkillState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerSkillManager_GetSkillThumbnail_Statics
	{
		struct ELCareerSkillManager_eventGetSkillThumbnail_Parms
		{
			int32 _Index;
			TSoftObjectPtr<UTexture2D> _outTexture;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__Index;
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp__outTexture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELCareerSkillManager_GetSkillThumbnail_Statics::NewProp__Index = { "_Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerSkillManager_eventGetSkillThumbnail_Parms, _Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_AELCareerSkillManager_GetSkillThumbnail_Statics::NewProp__outTexture = { "_outTexture", nullptr, (EPropertyFlags)0x0014000000000180, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerSkillManager_eventGetSkillThumbnail_Parms, _outTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerSkillManager_GetSkillThumbnail_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerSkillManager_GetSkillThumbnail_Statics::NewProp__Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerSkillManager_GetSkillThumbnail_Statics::NewProp__outTexture,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerSkillManager_GetSkillThumbnail_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerSkillManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerSkillManager_GetSkillThumbnail_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerSkillManager, nullptr, "GetSkillThumbnail", nullptr, nullptr, sizeof(ELCareerSkillManager_eventGetSkillThumbnail_Parms), Z_Construct_UFunction_AELCareerSkillManager_GetSkillThumbnail_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerSkillManager_GetSkillThumbnail_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerSkillManager_GetSkillThumbnail_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerSkillManager_GetSkillThumbnail_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerSkillManager_GetSkillThumbnail()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerSkillManager_GetSkillThumbnail_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerSkillManager_GetSkillUsed_Statics
	{
		struct ELCareerSkillManager_eventGetSkillUsed_Parms
		{
			int32 _Index;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__Index;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELCareerSkillManager_GetSkillUsed_Statics::NewProp__Index = { "_Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerSkillManager_eventGetSkillUsed_Parms, _Index), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELCareerSkillManager_GetSkillUsed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELCareerSkillManager_eventGetSkillUsed_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELCareerSkillManager_GetSkillUsed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELCareerSkillManager_eventGetSkillUsed_Parms), &Z_Construct_UFunction_AELCareerSkillManager_GetSkillUsed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerSkillManager_GetSkillUsed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerSkillManager_GetSkillUsed_Statics::NewProp__Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerSkillManager_GetSkillUsed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerSkillManager_GetSkillUsed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerSkillManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerSkillManager_GetSkillUsed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerSkillManager, nullptr, "GetSkillUsed", nullptr, nullptr, sizeof(ELCareerSkillManager_eventGetSkillUsed_Parms), Z_Construct_UFunction_AELCareerSkillManager_GetSkillUsed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerSkillManager_GetSkillUsed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerSkillManager_GetSkillUsed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerSkillManager_GetSkillUsed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerSkillManager_GetSkillUsed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerSkillManager_GetSkillUsed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerSkillManager_GetUnlockCost_Statics
	{
		struct ELCareerSkillManager_eventGetUnlockCost_Parms
		{
			int32 _Index;
			int32 _LevelIndex;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__Index;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__LevelIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELCareerSkillManager_GetUnlockCost_Statics::NewProp__Index = { "_Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerSkillManager_eventGetUnlockCost_Parms, _Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELCareerSkillManager_GetUnlockCost_Statics::NewProp__LevelIndex = { "_LevelIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerSkillManager_eventGetUnlockCost_Parms, _LevelIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELCareerSkillManager_GetUnlockCost_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerSkillManager_eventGetUnlockCost_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerSkillManager_GetUnlockCost_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerSkillManager_GetUnlockCost_Statics::NewProp__Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerSkillManager_GetUnlockCost_Statics::NewProp__LevelIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerSkillManager_GetUnlockCost_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerSkillManager_GetUnlockCost_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerSkillManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerSkillManager_GetUnlockCost_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerSkillManager, nullptr, "GetUnlockCost", nullptr, nullptr, sizeof(ELCareerSkillManager_eventGetUnlockCost_Parms), Z_Construct_UFunction_AELCareerSkillManager_GetUnlockCost_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerSkillManager_GetUnlockCost_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerSkillManager_GetUnlockCost_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerSkillManager_GetUnlockCost_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerSkillManager_GetUnlockCost()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerSkillManager_GetUnlockCost_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerSkillManager_LoadSkillManagerParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerSkillManager_LoadSkillManagerParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerSkillManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerSkillManager_LoadSkillManagerParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerSkillManager, nullptr, "LoadSkillManagerParam", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerSkillManager_LoadSkillManagerParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerSkillManager_LoadSkillManagerParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerSkillManager_LoadSkillManagerParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerSkillManager_LoadSkillManagerParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerSkillManager_SaveWrestlerParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerSkillManager_SaveWrestlerParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerSkillManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerSkillManager_SaveWrestlerParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerSkillManager, nullptr, "SaveWrestlerParam", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerSkillManager_SaveWrestlerParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerSkillManager_SaveWrestlerParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerSkillManager_SaveWrestlerParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerSkillManager_SaveWrestlerParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerSkillManager_SetSkillCategory_Statics
	{
		struct ELCareerSkillManager_eventSetSkillCategory_Parms
		{
			int32 _Category;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__Category;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELCareerSkillManager_SetSkillCategory_Statics::NewProp__Category = { "_Category", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerSkillManager_eventSetSkillCategory_Parms, _Category), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerSkillManager_SetSkillCategory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerSkillManager_SetSkillCategory_Statics::NewProp__Category,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerSkillManager_SetSkillCategory_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerSkillManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerSkillManager_SetSkillCategory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerSkillManager, nullptr, "SetSkillCategory", nullptr, nullptr, sizeof(ELCareerSkillManager_eventSetSkillCategory_Parms), Z_Construct_UFunction_AELCareerSkillManager_SetSkillCategory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerSkillManager_SetSkillCategory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerSkillManager_SetSkillCategory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerSkillManager_SetSkillCategory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerSkillManager_SetSkillCategory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerSkillManager_SetSkillCategory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELCareerSkillManager_UnlockSkill_Statics
	{
		struct ELCareerSkillManager_eventUnlockSkill_Parms
		{
			int32 _SelectIndex;
			int32 _LevelIndex;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__SelectIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__LevelIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELCareerSkillManager_UnlockSkill_Statics::NewProp__SelectIndex = { "_SelectIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerSkillManager_eventUnlockSkill_Parms, _SelectIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELCareerSkillManager_UnlockSkill_Statics::NewProp__LevelIndex = { "_LevelIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerSkillManager_eventUnlockSkill_Parms, _LevelIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AELCareerSkillManager_UnlockSkill_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELCareerSkillManager_eventUnlockSkill_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELCareerSkillManager_UnlockSkill_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELCareerSkillManager_eventUnlockSkill_Parms), &Z_Construct_UFunction_AELCareerSkillManager_UnlockSkill_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELCareerSkillManager_UnlockSkill_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerSkillManager_UnlockSkill_Statics::NewProp__SelectIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerSkillManager_UnlockSkill_Statics::NewProp__LevelIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELCareerSkillManager_UnlockSkill_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELCareerSkillManager_UnlockSkill_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerSkillManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELCareerSkillManager_UnlockSkill_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELCareerSkillManager, nullptr, "UnlockSkill", nullptr, nullptr, sizeof(ELCareerSkillManager_eventUnlockSkill_Parms), Z_Construct_UFunction_AELCareerSkillManager_UnlockSkill_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerSkillManager_UnlockSkill_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELCareerSkillManager_UnlockSkill_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELCareerSkillManager_UnlockSkill_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELCareerSkillManager_UnlockSkill()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELCareerSkillManager_UnlockSkill_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AELCareerSkillManager_NoRegister()
	{
		return AELCareerSkillManager::StaticClass();
	}
	struct Z_Construct_UClass_AELCareerSkillManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_CareerParameterSkillTableBase_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_CareerParameterSkillTableBase_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_m_CareerParameterSkillTableBase;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_ParameterSkillState_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_ParameterSkillState;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_CareerActionSkillTableBase_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_CareerActionSkillTableBase_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_m_CareerActionSkillTableBase;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_m_ActionSkillState_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_ActionSkillState_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_m_ActionSkillState;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_CareerPassiveSkillTableBase_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_CareerPassiveSkillTableBase_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_m_CareerPassiveSkillTableBase;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_m_PassiveSkillState_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_PassiveSkillState_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_m_PassiveSkillState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELCareerSkillManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AELCareerSkillManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AELCareerSkillManager_AddCareerActionSkillData, "AddCareerActionSkillData" }, // 4039268520
		{ &Z_Construct_UFunction_AELCareerSkillManager_AddCareerParameterSkillData, "AddCareerParameterSkillData" }, // 1136703681
		{ &Z_Construct_UFunction_AELCareerSkillManager_AddCareerPassiveSkillData, "AddCareerPassiveSkillData" }, // 3139248053
		{ &Z_Construct_UFunction_AELCareerSkillManager_CheckOpenParameterSkill, "CheckOpenParameterSkill" }, // 1434620740
		{ &Z_Construct_UFunction_AELCareerSkillManager_GetActionSkillStateList, "GetActionSkillStateList" }, // 3708921304
		{ &Z_Construct_UFunction_AELCareerSkillManager_GetCareerActionSkillTableBase, "GetCareerActionSkillTableBase" }, // 4245618114
		{ &Z_Construct_UFunction_AELCareerSkillManager_GetCareerParameterSkillTableBase, "GetCareerParameterSkillTableBase" }, // 2697128284
		{ &Z_Construct_UFunction_AELCareerSkillManager_GetCareerPassiveSkillTableBase, "GetCareerPassiveSkillTableBase" }, // 2137974683
		{ &Z_Construct_UFunction_AELCareerSkillManager_GetDescriptionStringID, "GetDescriptionStringID" }, // 2989523978
		{ &Z_Construct_UFunction_AELCareerSkillManager_GetParameterSkillLevel, "GetParameterSkillLevel" }, // 599588248
		{ &Z_Construct_UFunction_AELCareerSkillManager_GetParameterSkillStateArrayList, "GetParameterSkillStateArrayList" }, // 2722253900
		{ &Z_Construct_UFunction_AELCareerSkillManager_GetPassiveSkillStateList, "GetPassiveSkillStateList" }, // 2667216686
		{ &Z_Construct_UFunction_AELCareerSkillManager_GetSkillCategory, "GetSkillCategory" }, // 4141498538
		{ &Z_Construct_UFunction_AELCareerSkillManager_GetSkillImage, "GetSkillImage" }, // 181855025
		{ &Z_Construct_UFunction_AELCareerSkillManager_GetSkillNameStringID, "GetSkillNameStringID" }, // 1134465228
		{ &Z_Construct_UFunction_AELCareerSkillManager_GetSkillNo, "GetSkillNo" }, // 2678801506
		{ &Z_Construct_UFunction_AELCareerSkillManager_GetSkillSort, "GetSkillSort" }, // 3505751131
		{ &Z_Construct_UFunction_AELCareerSkillManager_GetSkillState, "GetSkillState" }, // 2682840557
		{ &Z_Construct_UFunction_AELCareerSkillManager_GetSkillThumbnail, "GetSkillThumbnail" }, // 2659149865
		{ &Z_Construct_UFunction_AELCareerSkillManager_GetSkillUsed, "GetSkillUsed" }, // 2657592028
		{ &Z_Construct_UFunction_AELCareerSkillManager_GetUnlockCost, "GetUnlockCost" }, // 951538961
		{ &Z_Construct_UFunction_AELCareerSkillManager_LoadSkillManagerParam, "LoadSkillManagerParam" }, // 1668445815
		{ &Z_Construct_UFunction_AELCareerSkillManager_SaveWrestlerParam, "SaveWrestlerParam" }, // 1914848041
		{ &Z_Construct_UFunction_AELCareerSkillManager_SetSkillCategory, "SetSkillCategory" }, // 1698474259
		{ &Z_Construct_UFunction_AELCareerSkillManager_UnlockSkill, "UnlockSkill" }, // 497397900
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELCareerSkillManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELCareerSkillManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELCareerSkillManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AELCareerSkillManager_Statics::NewProp_m_CareerParameterSkillTableBase_Inner = { "m_CareerParameterSkillTableBase", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCareerParameterSkillData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELCareerSkillManager_Statics::NewProp_m_CareerParameterSkillTableBase_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCareerSkillManager" },
		{ "ModuleRelativePath", "Public/ELCareerSkillManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AELCareerSkillManager_Statics::NewProp_m_CareerParameterSkillTableBase = { "m_CareerParameterSkillTableBase", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELCareerSkillManager, m_CareerParameterSkillTableBase), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AELCareerSkillManager_Statics::NewProp_m_CareerParameterSkillTableBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELCareerSkillManager_Statics::NewProp_m_CareerParameterSkillTableBase_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELCareerSkillManager_Statics::NewProp_m_ParameterSkillState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCareerSkillManager" },
		{ "ModuleRelativePath", "Public/ELCareerSkillManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AELCareerSkillManager_Statics::NewProp_m_ParameterSkillState = { "m_ParameterSkillState", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELCareerSkillManager, m_ParameterSkillState), Z_Construct_UScriptStruct_FCareerParameterSkillArray, METADATA_PARAMS(Z_Construct_UClass_AELCareerSkillManager_Statics::NewProp_m_ParameterSkillState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELCareerSkillManager_Statics::NewProp_m_ParameterSkillState_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AELCareerSkillManager_Statics::NewProp_m_CareerActionSkillTableBase_Inner = { "m_CareerActionSkillTableBase", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCareerActionSkillData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELCareerSkillManager_Statics::NewProp_m_CareerActionSkillTableBase_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCareerSkillManager" },
		{ "ModuleRelativePath", "Public/ELCareerSkillManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AELCareerSkillManager_Statics::NewProp_m_CareerActionSkillTableBase = { "m_CareerActionSkillTableBase", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELCareerSkillManager, m_CareerActionSkillTableBase), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AELCareerSkillManager_Statics::NewProp_m_CareerActionSkillTableBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELCareerSkillManager_Statics::NewProp_m_CareerActionSkillTableBase_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AELCareerSkillManager_Statics::NewProp_m_ActionSkillState_Inner = { "m_ActionSkillState", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELCareerSkillManager_Statics::NewProp_m_ActionSkillState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCareerSkillManager" },
		{ "ModuleRelativePath", "Public/ELCareerSkillManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AELCareerSkillManager_Statics::NewProp_m_ActionSkillState = { "m_ActionSkillState", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELCareerSkillManager, m_ActionSkillState), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AELCareerSkillManager_Statics::NewProp_m_ActionSkillState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELCareerSkillManager_Statics::NewProp_m_ActionSkillState_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AELCareerSkillManager_Statics::NewProp_m_CareerPassiveSkillTableBase_Inner = { "m_CareerPassiveSkillTableBase", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCareerPassiveSkillData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELCareerSkillManager_Statics::NewProp_m_CareerPassiveSkillTableBase_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCareerSkillManager" },
		{ "ModuleRelativePath", "Public/ELCareerSkillManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AELCareerSkillManager_Statics::NewProp_m_CareerPassiveSkillTableBase = { "m_CareerPassiveSkillTableBase", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELCareerSkillManager, m_CareerPassiveSkillTableBase), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AELCareerSkillManager_Statics::NewProp_m_CareerPassiveSkillTableBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELCareerSkillManager_Statics::NewProp_m_CareerPassiveSkillTableBase_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AELCareerSkillManager_Statics::NewProp_m_PassiveSkillState_Inner = { "m_PassiveSkillState", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELCareerSkillManager_Statics::NewProp_m_PassiveSkillState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCareerSkillManager" },
		{ "ModuleRelativePath", "Public/ELCareerSkillManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AELCareerSkillManager_Statics::NewProp_m_PassiveSkillState = { "m_PassiveSkillState", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELCareerSkillManager, m_PassiveSkillState), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AELCareerSkillManager_Statics::NewProp_m_PassiveSkillState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELCareerSkillManager_Statics::NewProp_m_PassiveSkillState_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AELCareerSkillManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELCareerSkillManager_Statics::NewProp_m_CareerParameterSkillTableBase_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELCareerSkillManager_Statics::NewProp_m_CareerParameterSkillTableBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELCareerSkillManager_Statics::NewProp_m_ParameterSkillState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELCareerSkillManager_Statics::NewProp_m_CareerActionSkillTableBase_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELCareerSkillManager_Statics::NewProp_m_CareerActionSkillTableBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELCareerSkillManager_Statics::NewProp_m_ActionSkillState_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELCareerSkillManager_Statics::NewProp_m_ActionSkillState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELCareerSkillManager_Statics::NewProp_m_CareerPassiveSkillTableBase_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELCareerSkillManager_Statics::NewProp_m_CareerPassiveSkillTableBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELCareerSkillManager_Statics::NewProp_m_PassiveSkillState_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELCareerSkillManager_Statics::NewProp_m_PassiveSkillState,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELCareerSkillManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELCareerSkillManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELCareerSkillManager_Statics::ClassParams = {
		&AELCareerSkillManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AELCareerSkillManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AELCareerSkillManager_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AELCareerSkillManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELCareerSkillManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELCareerSkillManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELCareerSkillManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELCareerSkillManager, 2825847466);
	template<> ABP_200508_API UClass* StaticClass<AELCareerSkillManager>()
	{
		return AELCareerSkillManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELCareerSkillManager(Z_Construct_UClass_AELCareerSkillManager, &AELCareerSkillManager::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELCareerSkillManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELCareerSkillManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
