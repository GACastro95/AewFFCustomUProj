// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELAchievementUtilityFunction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELAchievementUtilityFunction() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELAchievementUtilityFunction_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELAchievementUtilityFunction();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EELAchievementList();
	ABP_200508_API UClass* Z_Construct_UClass_UELGameInstance_NoRegister();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_ESaveDataProcResult();
// End Cross Module References
	DEFINE_FUNCTION(UELAchievementUtilityFunction::execAddAchievementCount)
	{
		P_GET_ENUM(EELAchievementList,Z_Param__Achievement);
		P_GET_PROPERTY(FIntProperty,Z_Param__Add);
		P_GET_PROPERTY(FByteProperty,Z_Param__saveDataAccessFlag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UELAchievementUtilityFunction::AddAchievementCount(EELAchievementList(Z_Param__Achievement),Z_Param__Add,Z_Param__saveDataAccessFlag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELAchievementUtilityFunction::execAddAchievementCountCommon)
	{
		P_GET_ENUM(EELAchievementList,Z_Param__Achievement);
		P_GET_PROPERTY(FIntProperty,Z_Param__Add);
		P_GET_PROPERTY(FByteProperty,Z_Param__saveDataAccessFlag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UELAchievementUtilityFunction::AddAchievementCountCommon(EELAchievementList(Z_Param__Achievement),Z_Param__Add,Z_Param__saveDataAccessFlag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELAchievementUtilityFunction::execCheckUnlockAchievement)
	{
		P_GET_ENUM(EELAchievementList,Z_Param_AchievementType);
		P_GET_PROPERTY(FIntProperty,Z_Param_AddCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELAchievementUtilityFunction::CheckUnlockAchievement(EELAchievementList(Z_Param_AchievementType),Z_Param_AddCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELAchievementUtilityFunction::execCheckUnlockAchievementCore)
	{
		P_GET_ENUM(EELAchievementList,Z_Param_AchievementType);
		P_GET_PROPERTY(FIntProperty,Z_Param_AddCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELAchievementUtilityFunction::CheckUnlockAchievementCore(EELAchievementList(Z_Param_AchievementType),Z_Param_AddCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELAchievementUtilityFunction::execCheckUnlockAddAchievementCount)
	{
		P_GET_ENUM(EELAchievementList,Z_Param__AchievementType);
		P_GET_PROPERTY(FIntProperty,Z_Param__Add);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELAchievementUtilityFunction::CheckUnlockAddAchievementCount(EELAchievementList(Z_Param__AchievementType),Z_Param__Add);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELAchievementUtilityFunction::execClearAchievement)
	{
		P_GET_ENUM(EELAchievementList,Z_Param_AchievementType);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELAchievementUtilityFunction::ClearAchievement(EELAchievementList(Z_Param_AchievementType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELAchievementUtilityFunction::execClearAllAchievements)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UELAchievementUtilityFunction::ClearAllAchievements();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELAchievementUtilityFunction::execGetAchievementCount)
	{
		P_GET_ENUM(EELAchievementList,Z_Param__Achievement);
		P_GET_PROPERTY(FByteProperty,Z_Param__saveDataAccessFlag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UELAchievementUtilityFunction::GetAchievementCount(EELAchievementList(Z_Param__Achievement),Z_Param__saveDataAccessFlag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELAchievementUtilityFunction::execGetAchievementCountCommon)
	{
		P_GET_ENUM(EELAchievementList,Z_Param__Achievement);
		P_GET_PROPERTY(FByteProperty,Z_Param__saveDataAccessFlag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UELAchievementUtilityFunction::GetAchievementCountCommon(EELAchievementList(Z_Param__Achievement),Z_Param__saveDataAccessFlag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELAchievementUtilityFunction::execGetAchievementGameInstance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UELGameInstance**)Z_Param__Result=UELAchievementUtilityFunction::GetAchievementGameInstance();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELAchievementUtilityFunction::execGetAchievementStatus)
	{
		P_GET_ENUM(EELAchievementList,Z_Param__Achievement);
		P_GET_PROPERTY(FByteProperty,Z_Param__saveDataAccessFlag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELAchievementUtilityFunction::GetAchievementStatus(EELAchievementList(Z_Param__Achievement),Z_Param__saveDataAccessFlag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELAchievementUtilityFunction::execGetStackSaveAchievementArray)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<EELAchievementList>*)Z_Param__Result=UELAchievementUtilityFunction::GetStackSaveAchievementArray();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELAchievementUtilityFunction::execIsEnableSaveAchievementInCareer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELAchievementUtilityFunction::IsEnableSaveAchievementInCareer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELAchievementUtilityFunction::execIsEnableSavedata)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param__saveDataAccessFlag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELAchievementUtilityFunction::IsEnableSavedata(Z_Param__saveDataAccessFlag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELAchievementUtilityFunction::execIsSaveCount)
	{
		P_GET_ENUM(EELAchievementList,Z_Param__Achievement);
		P_GET_PROPERTY(FByteProperty,Z_Param__saveDataAccessFlag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELAchievementUtilityFunction::IsSaveCount(EELAchievementList(Z_Param__Achievement),Z_Param__saveDataAccessFlag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELAchievementUtilityFunction::execIsUnlockSteamAchievement)
	{
		P_GET_ENUM(EELAchievementList,Z_Param_AchievementType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELAchievementUtilityFunction::IsUnlockSteamAchievement(EELAchievementList(Z_Param_AchievementType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELAchievementUtilityFunction::execSaveRequestAchievementData)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param__saveDataAccessFlag);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELAchievementUtilityFunction::SaveRequestAchievementData(Z_Param__saveDataAccessFlag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELAchievementUtilityFunction::execSaveRequestAchievementDataCore)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param__saveDataAccessFlag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESaveDataProcResult*)Z_Param__Result=UELAchievementUtilityFunction::SaveRequestAchievementDataCore(Z_Param__saveDataAccessFlag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELAchievementUtilityFunction::execSetAchievementCount)
	{
		P_GET_ENUM(EELAchievementList,Z_Param__Achievement);
		P_GET_PROPERTY(FIntProperty,Z_Param__Count);
		P_GET_PROPERTY(FByteProperty,Z_Param__saveDataAccessFlag);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELAchievementUtilityFunction::SetAchievementCount(EELAchievementList(Z_Param__Achievement),Z_Param__Count,Z_Param__saveDataAccessFlag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELAchievementUtilityFunction::execSetAchievementCountCommon)
	{
		P_GET_ENUM(EELAchievementList,Z_Param__Achievement);
		P_GET_PROPERTY(FIntProperty,Z_Param__Count);
		P_GET_PROPERTY(FByteProperty,Z_Param__saveDataAccessFlag);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELAchievementUtilityFunction::SetAchievementCountCommon(EELAchievementList(Z_Param__Achievement),Z_Param__Count,Z_Param__saveDataAccessFlag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELAchievementUtilityFunction::execSetAchievementStatus)
	{
		P_GET_ENUM(EELAchievementList,Z_Param__Achievement);
		P_GET_UBOOL(Z_Param__Status);
		P_GET_PROPERTY(FByteProperty,Z_Param__saveDataAccessFlag);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELAchievementUtilityFunction::SetAchievementStatus(EELAchievementList(Z_Param__Achievement),Z_Param__Status,Z_Param__saveDataAccessFlag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELAchievementUtilityFunction::execSetStackSaveAchievementInfo)
	{
		P_GET_ENUM(EELAchievementList,Z_Param__Achievement);
		P_GET_UBOOL(Z_Param__stack);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELAchievementUtilityFunction::SetStackSaveAchievementInfo(EELAchievementList(Z_Param__Achievement),Z_Param__stack);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELAchievementUtilityFunction::execSetupAchievementQuery)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UELAchievementUtilityFunction::SetupAchievementQuery();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELAchievementUtilityFunction::execStackAchievementCount)
	{
		P_GET_ENUM(EELAchievementList,Z_Param__Achievement);
		P_GET_PROPERTY(FIntProperty,Z_Param__Count);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELAchievementUtilityFunction::StackAchievementCount(EELAchievementList(Z_Param__Achievement),Z_Param__Count);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELAchievementUtilityFunction::execUnlockAchievement)
	{
		P_GET_ENUM(EELAchievementList,Z_Param__AchievementType);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELAchievementUtilityFunction::UnlockAchievement(EELAchievementList(Z_Param__AchievementType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELAchievementUtilityFunction::execUnlockAchievementCore)
	{
		P_GET_ENUM(EELAchievementList,Z_Param__AchievementType);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELAchievementUtilityFunction::UnlockAchievementCore(EELAchievementList(Z_Param__AchievementType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELAchievementUtilityFunction::execUnlockCareerStackAchievment)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UELAchievementUtilityFunction::UnlockCareerStackAchievment();
		P_NATIVE_END;
	}
	void UELAchievementUtilityFunction::StaticRegisterNativesUELAchievementUtilityFunction()
	{
		UClass* Class = UELAchievementUtilityFunction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddAchievementCount", &UELAchievementUtilityFunction::execAddAchievementCount },
			{ "AddAchievementCountCommon", &UELAchievementUtilityFunction::execAddAchievementCountCommon },
			{ "CheckUnlockAchievement", &UELAchievementUtilityFunction::execCheckUnlockAchievement },
			{ "CheckUnlockAchievementCore", &UELAchievementUtilityFunction::execCheckUnlockAchievementCore },
			{ "CheckUnlockAddAchievementCount", &UELAchievementUtilityFunction::execCheckUnlockAddAchievementCount },
			{ "ClearAchievement", &UELAchievementUtilityFunction::execClearAchievement },
			{ "ClearAllAchievements", &UELAchievementUtilityFunction::execClearAllAchievements },
			{ "GetAchievementCount", &UELAchievementUtilityFunction::execGetAchievementCount },
			{ "GetAchievementCountCommon", &UELAchievementUtilityFunction::execGetAchievementCountCommon },
			{ "GetAchievementGameInstance", &UELAchievementUtilityFunction::execGetAchievementGameInstance },
			{ "GetAchievementStatus", &UELAchievementUtilityFunction::execGetAchievementStatus },
			{ "GetStackSaveAchievementArray", &UELAchievementUtilityFunction::execGetStackSaveAchievementArray },
			{ "IsEnableSaveAchievementInCareer", &UELAchievementUtilityFunction::execIsEnableSaveAchievementInCareer },
			{ "IsEnableSavedata", &UELAchievementUtilityFunction::execIsEnableSavedata },
			{ "IsSaveCount", &UELAchievementUtilityFunction::execIsSaveCount },
			{ "IsUnlockSteamAchievement", &UELAchievementUtilityFunction::execIsUnlockSteamAchievement },
			{ "SaveRequestAchievementData", &UELAchievementUtilityFunction::execSaveRequestAchievementData },
			{ "SaveRequestAchievementDataCore", &UELAchievementUtilityFunction::execSaveRequestAchievementDataCore },
			{ "SetAchievementCount", &UELAchievementUtilityFunction::execSetAchievementCount },
			{ "SetAchievementCountCommon", &UELAchievementUtilityFunction::execSetAchievementCountCommon },
			{ "SetAchievementStatus", &UELAchievementUtilityFunction::execSetAchievementStatus },
			{ "SetStackSaveAchievementInfo", &UELAchievementUtilityFunction::execSetStackSaveAchievementInfo },
			{ "SetupAchievementQuery", &UELAchievementUtilityFunction::execSetupAchievementQuery },
			{ "StackAchievementCount", &UELAchievementUtilityFunction::execStackAchievementCount },
			{ "UnlockAchievement", &UELAchievementUtilityFunction::execUnlockAchievement },
			{ "UnlockAchievementCore", &UELAchievementUtilityFunction::execUnlockAchievementCore },
			{ "UnlockCareerStackAchievment", &UELAchievementUtilityFunction::execUnlockCareerStackAchievment },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELAchievementUtilityFunction_AddAchievementCount_Statics
	{
		struct ELAchievementUtilityFunction_eventAddAchievementCount_Parms
		{
			EELAchievementList _Achievement;
			int32 _Add;
			uint8 _saveDataAccessFlag;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__Achievement_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__Achievement;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__Add;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__saveDataAccessFlag;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELAchievementUtilityFunction_AddAchievementCount_Statics::NewProp__Achievement_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELAchievementUtilityFunction_AddAchievementCount_Statics::NewProp__Achievement = { "_Achievement", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAchievementUtilityFunction_eventAddAchievementCount_Parms, _Achievement), Z_Construct_UEnum_ELITE_Game_EELAchievementList, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELAchievementUtilityFunction_AddAchievementCount_Statics::NewProp__Add = { "_Add", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAchievementUtilityFunction_eventAddAchievementCount_Parms, _Add), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELAchievementUtilityFunction_AddAchievementCount_Statics::NewProp__saveDataAccessFlag = { "_saveDataAccessFlag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAchievementUtilityFunction_eventAddAchievementCount_Parms, _saveDataAccessFlag), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELAchievementUtilityFunction_AddAchievementCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAchievementUtilityFunction_eventAddAchievementCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELAchievementUtilityFunction_AddAchievementCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAchievementUtilityFunction_AddAchievementCount_Statics::NewProp__Achievement_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAchievementUtilityFunction_AddAchievementCount_Statics::NewProp__Achievement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAchievementUtilityFunction_AddAchievementCount_Statics::NewProp__Add,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAchievementUtilityFunction_AddAchievementCount_Statics::NewProp__saveDataAccessFlag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAchievementUtilityFunction_AddAchievementCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELAchievementUtilityFunction_AddAchievementCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELAchievementUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELAchievementUtilityFunction_AddAchievementCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELAchievementUtilityFunction, nullptr, "AddAchievementCount", nullptr, nullptr, sizeof(ELAchievementUtilityFunction_eventAddAchievementCount_Parms), Z_Construct_UFunction_UELAchievementUtilityFunction_AddAchievementCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAchievementUtilityFunction_AddAchievementCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELAchievementUtilityFunction_AddAchievementCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAchievementUtilityFunction_AddAchievementCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELAchievementUtilityFunction_AddAchievementCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELAchievementUtilityFunction_AddAchievementCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELAchievementUtilityFunction_AddAchievementCountCommon_Statics
	{
		struct ELAchievementUtilityFunction_eventAddAchievementCountCommon_Parms
		{
			EELAchievementList _Achievement;
			int32 _Add;
			uint8 _saveDataAccessFlag;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__Achievement_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__Achievement;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__Add;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__saveDataAccessFlag;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELAchievementUtilityFunction_AddAchievementCountCommon_Statics::NewProp__Achievement_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELAchievementUtilityFunction_AddAchievementCountCommon_Statics::NewProp__Achievement = { "_Achievement", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAchievementUtilityFunction_eventAddAchievementCountCommon_Parms, _Achievement), Z_Construct_UEnum_ELITE_Game_EELAchievementList, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELAchievementUtilityFunction_AddAchievementCountCommon_Statics::NewProp__Add = { "_Add", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAchievementUtilityFunction_eventAddAchievementCountCommon_Parms, _Add), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELAchievementUtilityFunction_AddAchievementCountCommon_Statics::NewProp__saveDataAccessFlag = { "_saveDataAccessFlag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAchievementUtilityFunction_eventAddAchievementCountCommon_Parms, _saveDataAccessFlag), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELAchievementUtilityFunction_AddAchievementCountCommon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAchievementUtilityFunction_eventAddAchievementCountCommon_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELAchievementUtilityFunction_AddAchievementCountCommon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAchievementUtilityFunction_AddAchievementCountCommon_Statics::NewProp__Achievement_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAchievementUtilityFunction_AddAchievementCountCommon_Statics::NewProp__Achievement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAchievementUtilityFunction_AddAchievementCountCommon_Statics::NewProp__Add,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAchievementUtilityFunction_AddAchievementCountCommon_Statics::NewProp__saveDataAccessFlag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAchievementUtilityFunction_AddAchievementCountCommon_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELAchievementUtilityFunction_AddAchievementCountCommon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELAchievementUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELAchievementUtilityFunction_AddAchievementCountCommon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELAchievementUtilityFunction, nullptr, "AddAchievementCountCommon", nullptr, nullptr, sizeof(ELAchievementUtilityFunction_eventAddAchievementCountCommon_Parms), Z_Construct_UFunction_UELAchievementUtilityFunction_AddAchievementCountCommon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAchievementUtilityFunction_AddAchievementCountCommon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELAchievementUtilityFunction_AddAchievementCountCommon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAchievementUtilityFunction_AddAchievementCountCommon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELAchievementUtilityFunction_AddAchievementCountCommon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELAchievementUtilityFunction_AddAchievementCountCommon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELAchievementUtilityFunction_CheckUnlockAchievement_Statics
	{
		struct ELAchievementUtilityFunction_eventCheckUnlockAchievement_Parms
		{
			EELAchievementList AchievementType;
			int32 AddCount;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AchievementType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AchievementType;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AddCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELAchievementUtilityFunction_CheckUnlockAchievement_Statics::NewProp_AchievementType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELAchievementUtilityFunction_CheckUnlockAchievement_Statics::NewProp_AchievementType = { "AchievementType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAchievementUtilityFunction_eventCheckUnlockAchievement_Parms, AchievementType), Z_Construct_UEnum_ELITE_Game_EELAchievementList, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELAchievementUtilityFunction_CheckUnlockAchievement_Statics::NewProp_AddCount = { "AddCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAchievementUtilityFunction_eventCheckUnlockAchievement_Parms, AddCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELAchievementUtilityFunction_CheckUnlockAchievement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAchievementUtilityFunction_CheckUnlockAchievement_Statics::NewProp_AchievementType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAchievementUtilityFunction_CheckUnlockAchievement_Statics::NewProp_AchievementType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAchievementUtilityFunction_CheckUnlockAchievement_Statics::NewProp_AddCount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELAchievementUtilityFunction_CheckUnlockAchievement_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELAchievementUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELAchievementUtilityFunction_CheckUnlockAchievement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELAchievementUtilityFunction, nullptr, "CheckUnlockAchievement", nullptr, nullptr, sizeof(ELAchievementUtilityFunction_eventCheckUnlockAchievement_Parms), Z_Construct_UFunction_UELAchievementUtilityFunction_CheckUnlockAchievement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAchievementUtilityFunction_CheckUnlockAchievement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELAchievementUtilityFunction_CheckUnlockAchievement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAchievementUtilityFunction_CheckUnlockAchievement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELAchievementUtilityFunction_CheckUnlockAchievement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELAchievementUtilityFunction_CheckUnlockAchievement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELAchievementUtilityFunction_CheckUnlockAchievementCore_Statics
	{
		struct ELAchievementUtilityFunction_eventCheckUnlockAchievementCore_Parms
		{
			EELAchievementList AchievementType;
			int32 AddCount;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AchievementType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AchievementType;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AddCount;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELAchievementUtilityFunction_CheckUnlockAchievementCore_Statics::NewProp_AchievementType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELAchievementUtilityFunction_CheckUnlockAchievementCore_Statics::NewProp_AchievementType = { "AchievementType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAchievementUtilityFunction_eventCheckUnlockAchievementCore_Parms, AchievementType), Z_Construct_UEnum_ELITE_Game_EELAchievementList, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELAchievementUtilityFunction_CheckUnlockAchievementCore_Statics::NewProp_AddCount = { "AddCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAchievementUtilityFunction_eventCheckUnlockAchievementCore_Parms, AddCount), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELAchievementUtilityFunction_CheckUnlockAchievementCore_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELAchievementUtilityFunction_eventCheckUnlockAchievementCore_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELAchievementUtilityFunction_CheckUnlockAchievementCore_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELAchievementUtilityFunction_eventCheckUnlockAchievementCore_Parms), &Z_Construct_UFunction_UELAchievementUtilityFunction_CheckUnlockAchievementCore_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELAchievementUtilityFunction_CheckUnlockAchievementCore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAchievementUtilityFunction_CheckUnlockAchievementCore_Statics::NewProp_AchievementType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAchievementUtilityFunction_CheckUnlockAchievementCore_Statics::NewProp_AchievementType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAchievementUtilityFunction_CheckUnlockAchievementCore_Statics::NewProp_AddCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAchievementUtilityFunction_CheckUnlockAchievementCore_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELAchievementUtilityFunction_CheckUnlockAchievementCore_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELAchievementUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELAchievementUtilityFunction_CheckUnlockAchievementCore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELAchievementUtilityFunction, nullptr, "CheckUnlockAchievementCore", nullptr, nullptr, sizeof(ELAchievementUtilityFunction_eventCheckUnlockAchievementCore_Parms), Z_Construct_UFunction_UELAchievementUtilityFunction_CheckUnlockAchievementCore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAchievementUtilityFunction_CheckUnlockAchievementCore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELAchievementUtilityFunction_CheckUnlockAchievementCore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAchievementUtilityFunction_CheckUnlockAchievementCore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELAchievementUtilityFunction_CheckUnlockAchievementCore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELAchievementUtilityFunction_CheckUnlockAchievementCore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELAchievementUtilityFunction_CheckUnlockAddAchievementCount_Statics
	{
		struct ELAchievementUtilityFunction_eventCheckUnlockAddAchievementCount_Parms
		{
			EELAchievementList _AchievementType;
			int32 _Add;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__AchievementType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__AchievementType;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__Add;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELAchievementUtilityFunction_CheckUnlockAddAchievementCount_Statics::NewProp__AchievementType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELAchievementUtilityFunction_CheckUnlockAddAchievementCount_Statics::NewProp__AchievementType = { "_AchievementType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAchievementUtilityFunction_eventCheckUnlockAddAchievementCount_Parms, _AchievementType), Z_Construct_UEnum_ELITE_Game_EELAchievementList, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELAchievementUtilityFunction_CheckUnlockAddAchievementCount_Statics::NewProp__Add = { "_Add", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAchievementUtilityFunction_eventCheckUnlockAddAchievementCount_Parms, _Add), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELAchievementUtilityFunction_CheckUnlockAddAchievementCount_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELAchievementUtilityFunction_eventCheckUnlockAddAchievementCount_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELAchievementUtilityFunction_CheckUnlockAddAchievementCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELAchievementUtilityFunction_eventCheckUnlockAddAchievementCount_Parms), &Z_Construct_UFunction_UELAchievementUtilityFunction_CheckUnlockAddAchievementCount_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELAchievementUtilityFunction_CheckUnlockAddAchievementCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAchievementUtilityFunction_CheckUnlockAddAchievementCount_Statics::NewProp__AchievementType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAchievementUtilityFunction_CheckUnlockAddAchievementCount_Statics::NewProp__AchievementType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAchievementUtilityFunction_CheckUnlockAddAchievementCount_Statics::NewProp__Add,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAchievementUtilityFunction_CheckUnlockAddAchievementCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELAchievementUtilityFunction_CheckUnlockAddAchievementCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELAchievementUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELAchievementUtilityFunction_CheckUnlockAddAchievementCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELAchievementUtilityFunction, nullptr, "CheckUnlockAddAchievementCount", nullptr, nullptr, sizeof(ELAchievementUtilityFunction_eventCheckUnlockAddAchievementCount_Parms), Z_Construct_UFunction_UELAchievementUtilityFunction_CheckUnlockAddAchievementCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAchievementUtilityFunction_CheckUnlockAddAchievementCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELAchievementUtilityFunction_CheckUnlockAddAchievementCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAchievementUtilityFunction_CheckUnlockAddAchievementCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELAchievementUtilityFunction_CheckUnlockAddAchievementCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELAchievementUtilityFunction_CheckUnlockAddAchievementCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELAchievementUtilityFunction_ClearAchievement_Statics
	{
		struct ELAchievementUtilityFunction_eventClearAchievement_Parms
		{
			EELAchievementList AchievementType;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AchievementType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AchievementType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELAchievementUtilityFunction_ClearAchievement_Statics::NewProp_AchievementType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELAchievementUtilityFunction_ClearAchievement_Statics::NewProp_AchievementType = { "AchievementType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAchievementUtilityFunction_eventClearAchievement_Parms, AchievementType), Z_Construct_UEnum_ELITE_Game_EELAchievementList, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELAchievementUtilityFunction_ClearAchievement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAchievementUtilityFunction_ClearAchievement_Statics::NewProp_AchievementType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAchievementUtilityFunction_ClearAchievement_Statics::NewProp_AchievementType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELAchievementUtilityFunction_ClearAchievement_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELAchievementUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELAchievementUtilityFunction_ClearAchievement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELAchievementUtilityFunction, nullptr, "ClearAchievement", nullptr, nullptr, sizeof(ELAchievementUtilityFunction_eventClearAchievement_Parms), Z_Construct_UFunction_UELAchievementUtilityFunction_ClearAchievement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAchievementUtilityFunction_ClearAchievement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELAchievementUtilityFunction_ClearAchievement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAchievementUtilityFunction_ClearAchievement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELAchievementUtilityFunction_ClearAchievement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELAchievementUtilityFunction_ClearAchievement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELAchievementUtilityFunction_ClearAllAchievements_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELAchievementUtilityFunction_ClearAllAchievements_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELAchievementUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELAchievementUtilityFunction_ClearAllAchievements_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELAchievementUtilityFunction, nullptr, "ClearAllAchievements", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELAchievementUtilityFunction_ClearAllAchievements_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAchievementUtilityFunction_ClearAllAchievements_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELAchievementUtilityFunction_ClearAllAchievements()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELAchievementUtilityFunction_ClearAllAchievements_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELAchievementUtilityFunction_GetAchievementCount_Statics
	{
		struct ELAchievementUtilityFunction_eventGetAchievementCount_Parms
		{
			EELAchievementList _Achievement;
			uint8 _saveDataAccessFlag;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__Achievement_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__Achievement;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__saveDataAccessFlag;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELAchievementUtilityFunction_GetAchievementCount_Statics::NewProp__Achievement_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELAchievementUtilityFunction_GetAchievementCount_Statics::NewProp__Achievement = { "_Achievement", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAchievementUtilityFunction_eventGetAchievementCount_Parms, _Achievement), Z_Construct_UEnum_ELITE_Game_EELAchievementList, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELAchievementUtilityFunction_GetAchievementCount_Statics::NewProp__saveDataAccessFlag = { "_saveDataAccessFlag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAchievementUtilityFunction_eventGetAchievementCount_Parms, _saveDataAccessFlag), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELAchievementUtilityFunction_GetAchievementCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAchievementUtilityFunction_eventGetAchievementCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELAchievementUtilityFunction_GetAchievementCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAchievementUtilityFunction_GetAchievementCount_Statics::NewProp__Achievement_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAchievementUtilityFunction_GetAchievementCount_Statics::NewProp__Achievement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAchievementUtilityFunction_GetAchievementCount_Statics::NewProp__saveDataAccessFlag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAchievementUtilityFunction_GetAchievementCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELAchievementUtilityFunction_GetAchievementCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELAchievementUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELAchievementUtilityFunction_GetAchievementCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELAchievementUtilityFunction, nullptr, "GetAchievementCount", nullptr, nullptr, sizeof(ELAchievementUtilityFunction_eventGetAchievementCount_Parms), Z_Construct_UFunction_UELAchievementUtilityFunction_GetAchievementCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAchievementUtilityFunction_GetAchievementCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELAchievementUtilityFunction_GetAchievementCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAchievementUtilityFunction_GetAchievementCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELAchievementUtilityFunction_GetAchievementCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELAchievementUtilityFunction_GetAchievementCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELAchievementUtilityFunction_GetAchievementCountCommon_Statics
	{
		struct ELAchievementUtilityFunction_eventGetAchievementCountCommon_Parms
		{
			EELAchievementList _Achievement;
			uint8 _saveDataAccessFlag;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__Achievement_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__Achievement;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__saveDataAccessFlag;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELAchievementUtilityFunction_GetAchievementCountCommon_Statics::NewProp__Achievement_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELAchievementUtilityFunction_GetAchievementCountCommon_Statics::NewProp__Achievement = { "_Achievement", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAchievementUtilityFunction_eventGetAchievementCountCommon_Parms, _Achievement), Z_Construct_UEnum_ELITE_Game_EELAchievementList, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELAchievementUtilityFunction_GetAchievementCountCommon_Statics::NewProp__saveDataAccessFlag = { "_saveDataAccessFlag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAchievementUtilityFunction_eventGetAchievementCountCommon_Parms, _saveDataAccessFlag), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELAchievementUtilityFunction_GetAchievementCountCommon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAchievementUtilityFunction_eventGetAchievementCountCommon_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELAchievementUtilityFunction_GetAchievementCountCommon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAchievementUtilityFunction_GetAchievementCountCommon_Statics::NewProp__Achievement_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAchievementUtilityFunction_GetAchievementCountCommon_Statics::NewProp__Achievement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAchievementUtilityFunction_GetAchievementCountCommon_Statics::NewProp__saveDataAccessFlag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAchievementUtilityFunction_GetAchievementCountCommon_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELAchievementUtilityFunction_GetAchievementCountCommon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELAchievementUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELAchievementUtilityFunction_GetAchievementCountCommon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELAchievementUtilityFunction, nullptr, "GetAchievementCountCommon", nullptr, nullptr, sizeof(ELAchievementUtilityFunction_eventGetAchievementCountCommon_Parms), Z_Construct_UFunction_UELAchievementUtilityFunction_GetAchievementCountCommon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAchievementUtilityFunction_GetAchievementCountCommon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELAchievementUtilityFunction_GetAchievementCountCommon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAchievementUtilityFunction_GetAchievementCountCommon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELAchievementUtilityFunction_GetAchievementCountCommon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELAchievementUtilityFunction_GetAchievementCountCommon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELAchievementUtilityFunction_GetAchievementGameInstance_Statics
	{
		struct ELAchievementUtilityFunction_eventGetAchievementGameInstance_Parms
		{
			UELGameInstance* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELAchievementUtilityFunction_GetAchievementGameInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAchievementUtilityFunction_eventGetAchievementGameInstance_Parms, ReturnValue), Z_Construct_UClass_UELGameInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELAchievementUtilityFunction_GetAchievementGameInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAchievementUtilityFunction_GetAchievementGameInstance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELAchievementUtilityFunction_GetAchievementGameInstance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELAchievementUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELAchievementUtilityFunction_GetAchievementGameInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELAchievementUtilityFunction, nullptr, "GetAchievementGameInstance", nullptr, nullptr, sizeof(ELAchievementUtilityFunction_eventGetAchievementGameInstance_Parms), Z_Construct_UFunction_UELAchievementUtilityFunction_GetAchievementGameInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAchievementUtilityFunction_GetAchievementGameInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELAchievementUtilityFunction_GetAchievementGameInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAchievementUtilityFunction_GetAchievementGameInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELAchievementUtilityFunction_GetAchievementGameInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELAchievementUtilityFunction_GetAchievementGameInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELAchievementUtilityFunction_GetAchievementStatus_Statics
	{
		struct ELAchievementUtilityFunction_eventGetAchievementStatus_Parms
		{
			EELAchievementList _Achievement;
			uint8 _saveDataAccessFlag;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__Achievement_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__Achievement;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__saveDataAccessFlag;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELAchievementUtilityFunction_GetAchievementStatus_Statics::NewProp__Achievement_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELAchievementUtilityFunction_GetAchievementStatus_Statics::NewProp__Achievement = { "_Achievement", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAchievementUtilityFunction_eventGetAchievementStatus_Parms, _Achievement), Z_Construct_UEnum_ELITE_Game_EELAchievementList, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELAchievementUtilityFunction_GetAchievementStatus_Statics::NewProp__saveDataAccessFlag = { "_saveDataAccessFlag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAchievementUtilityFunction_eventGetAchievementStatus_Parms, _saveDataAccessFlag), nullptr, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELAchievementUtilityFunction_GetAchievementStatus_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELAchievementUtilityFunction_eventGetAchievementStatus_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELAchievementUtilityFunction_GetAchievementStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELAchievementUtilityFunction_eventGetAchievementStatus_Parms), &Z_Construct_UFunction_UELAchievementUtilityFunction_GetAchievementStatus_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELAchievementUtilityFunction_GetAchievementStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAchievementUtilityFunction_GetAchievementStatus_Statics::NewProp__Achievement_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAchievementUtilityFunction_GetAchievementStatus_Statics::NewProp__Achievement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAchievementUtilityFunction_GetAchievementStatus_Statics::NewProp__saveDataAccessFlag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAchievementUtilityFunction_GetAchievementStatus_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELAchievementUtilityFunction_GetAchievementStatus_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELAchievementUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELAchievementUtilityFunction_GetAchievementStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELAchievementUtilityFunction, nullptr, "GetAchievementStatus", nullptr, nullptr, sizeof(ELAchievementUtilityFunction_eventGetAchievementStatus_Parms), Z_Construct_UFunction_UELAchievementUtilityFunction_GetAchievementStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAchievementUtilityFunction_GetAchievementStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELAchievementUtilityFunction_GetAchievementStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAchievementUtilityFunction_GetAchievementStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELAchievementUtilityFunction_GetAchievementStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELAchievementUtilityFunction_GetAchievementStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELAchievementUtilityFunction_GetStackSaveAchievementArray_Statics
	{
		struct ELAchievementUtilityFunction_eventGetStackSaveAchievementArray_Parms
		{
			TArray<EELAchievementList> ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELAchievementUtilityFunction_GetStackSaveAchievementArray_Statics::NewProp_ReturnValue_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELAchievementUtilityFunction_GetStackSaveAchievementArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_ELITE_Game_EELAchievementList, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELAchievementUtilityFunction_GetStackSaveAchievementArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAchievementUtilityFunction_eventGetStackSaveAchievementArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELAchievementUtilityFunction_GetStackSaveAchievementArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAchievementUtilityFunction_GetStackSaveAchievementArray_Statics::NewProp_ReturnValue_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAchievementUtilityFunction_GetStackSaveAchievementArray_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAchievementUtilityFunction_GetStackSaveAchievementArray_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELAchievementUtilityFunction_GetStackSaveAchievementArray_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELAchievementUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELAchievementUtilityFunction_GetStackSaveAchievementArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELAchievementUtilityFunction, nullptr, "GetStackSaveAchievementArray", nullptr, nullptr, sizeof(ELAchievementUtilityFunction_eventGetStackSaveAchievementArray_Parms), Z_Construct_UFunction_UELAchievementUtilityFunction_GetStackSaveAchievementArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAchievementUtilityFunction_GetStackSaveAchievementArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELAchievementUtilityFunction_GetStackSaveAchievementArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAchievementUtilityFunction_GetStackSaveAchievementArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELAchievementUtilityFunction_GetStackSaveAchievementArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELAchievementUtilityFunction_GetStackSaveAchievementArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELAchievementUtilityFunction_IsEnableSaveAchievementInCareer_Statics
	{
		struct ELAchievementUtilityFunction_eventIsEnableSaveAchievementInCareer_Parms
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
	void Z_Construct_UFunction_UELAchievementUtilityFunction_IsEnableSaveAchievementInCareer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELAchievementUtilityFunction_eventIsEnableSaveAchievementInCareer_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELAchievementUtilityFunction_IsEnableSaveAchievementInCareer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELAchievementUtilityFunction_eventIsEnableSaveAchievementInCareer_Parms), &Z_Construct_UFunction_UELAchievementUtilityFunction_IsEnableSaveAchievementInCareer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELAchievementUtilityFunction_IsEnableSaveAchievementInCareer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAchievementUtilityFunction_IsEnableSaveAchievementInCareer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELAchievementUtilityFunction_IsEnableSaveAchievementInCareer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELAchievementUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELAchievementUtilityFunction_IsEnableSaveAchievementInCareer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELAchievementUtilityFunction, nullptr, "IsEnableSaveAchievementInCareer", nullptr, nullptr, sizeof(ELAchievementUtilityFunction_eventIsEnableSaveAchievementInCareer_Parms), Z_Construct_UFunction_UELAchievementUtilityFunction_IsEnableSaveAchievementInCareer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAchievementUtilityFunction_IsEnableSaveAchievementInCareer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELAchievementUtilityFunction_IsEnableSaveAchievementInCareer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAchievementUtilityFunction_IsEnableSaveAchievementInCareer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELAchievementUtilityFunction_IsEnableSaveAchievementInCareer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELAchievementUtilityFunction_IsEnableSaveAchievementInCareer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELAchievementUtilityFunction_IsEnableSavedata_Statics
	{
		struct ELAchievementUtilityFunction_eventIsEnableSavedata_Parms
		{
			uint8 _saveDataAccessFlag;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__saveDataAccessFlag;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELAchievementUtilityFunction_IsEnableSavedata_Statics::NewProp__saveDataAccessFlag = { "_saveDataAccessFlag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAchievementUtilityFunction_eventIsEnableSavedata_Parms, _saveDataAccessFlag), nullptr, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELAchievementUtilityFunction_IsEnableSavedata_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELAchievementUtilityFunction_eventIsEnableSavedata_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELAchievementUtilityFunction_IsEnableSavedata_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELAchievementUtilityFunction_eventIsEnableSavedata_Parms), &Z_Construct_UFunction_UELAchievementUtilityFunction_IsEnableSavedata_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELAchievementUtilityFunction_IsEnableSavedata_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAchievementUtilityFunction_IsEnableSavedata_Statics::NewProp__saveDataAccessFlag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAchievementUtilityFunction_IsEnableSavedata_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELAchievementUtilityFunction_IsEnableSavedata_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELAchievementUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELAchievementUtilityFunction_IsEnableSavedata_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELAchievementUtilityFunction, nullptr, "IsEnableSavedata", nullptr, nullptr, sizeof(ELAchievementUtilityFunction_eventIsEnableSavedata_Parms), Z_Construct_UFunction_UELAchievementUtilityFunction_IsEnableSavedata_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAchievementUtilityFunction_IsEnableSavedata_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELAchievementUtilityFunction_IsEnableSavedata_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAchievementUtilityFunction_IsEnableSavedata_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELAchievementUtilityFunction_IsEnableSavedata()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELAchievementUtilityFunction_IsEnableSavedata_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELAchievementUtilityFunction_IsSaveCount_Statics
	{
		struct ELAchievementUtilityFunction_eventIsSaveCount_Parms
		{
			EELAchievementList _Achievement;
			uint8 _saveDataAccessFlag;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__Achievement_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__Achievement;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__saveDataAccessFlag;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELAchievementUtilityFunction_IsSaveCount_Statics::NewProp__Achievement_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELAchievementUtilityFunction_IsSaveCount_Statics::NewProp__Achievement = { "_Achievement", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAchievementUtilityFunction_eventIsSaveCount_Parms, _Achievement), Z_Construct_UEnum_ELITE_Game_EELAchievementList, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELAchievementUtilityFunction_IsSaveCount_Statics::NewProp__saveDataAccessFlag = { "_saveDataAccessFlag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAchievementUtilityFunction_eventIsSaveCount_Parms, _saveDataAccessFlag), nullptr, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELAchievementUtilityFunction_IsSaveCount_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELAchievementUtilityFunction_eventIsSaveCount_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELAchievementUtilityFunction_IsSaveCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELAchievementUtilityFunction_eventIsSaveCount_Parms), &Z_Construct_UFunction_UELAchievementUtilityFunction_IsSaveCount_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELAchievementUtilityFunction_IsSaveCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAchievementUtilityFunction_IsSaveCount_Statics::NewProp__Achievement_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAchievementUtilityFunction_IsSaveCount_Statics::NewProp__Achievement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAchievementUtilityFunction_IsSaveCount_Statics::NewProp__saveDataAccessFlag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAchievementUtilityFunction_IsSaveCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELAchievementUtilityFunction_IsSaveCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELAchievementUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELAchievementUtilityFunction_IsSaveCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELAchievementUtilityFunction, nullptr, "IsSaveCount", nullptr, nullptr, sizeof(ELAchievementUtilityFunction_eventIsSaveCount_Parms), Z_Construct_UFunction_UELAchievementUtilityFunction_IsSaveCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAchievementUtilityFunction_IsSaveCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELAchievementUtilityFunction_IsSaveCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAchievementUtilityFunction_IsSaveCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELAchievementUtilityFunction_IsSaveCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELAchievementUtilityFunction_IsSaveCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELAchievementUtilityFunction_IsUnlockSteamAchievement_Statics
	{
		struct ELAchievementUtilityFunction_eventIsUnlockSteamAchievement_Parms
		{
			EELAchievementList AchievementType;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AchievementType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AchievementType;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELAchievementUtilityFunction_IsUnlockSteamAchievement_Statics::NewProp_AchievementType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELAchievementUtilityFunction_IsUnlockSteamAchievement_Statics::NewProp_AchievementType = { "AchievementType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAchievementUtilityFunction_eventIsUnlockSteamAchievement_Parms, AchievementType), Z_Construct_UEnum_ELITE_Game_EELAchievementList, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELAchievementUtilityFunction_IsUnlockSteamAchievement_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELAchievementUtilityFunction_eventIsUnlockSteamAchievement_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELAchievementUtilityFunction_IsUnlockSteamAchievement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELAchievementUtilityFunction_eventIsUnlockSteamAchievement_Parms), &Z_Construct_UFunction_UELAchievementUtilityFunction_IsUnlockSteamAchievement_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELAchievementUtilityFunction_IsUnlockSteamAchievement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAchievementUtilityFunction_IsUnlockSteamAchievement_Statics::NewProp_AchievementType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAchievementUtilityFunction_IsUnlockSteamAchievement_Statics::NewProp_AchievementType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAchievementUtilityFunction_IsUnlockSteamAchievement_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELAchievementUtilityFunction_IsUnlockSteamAchievement_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELAchievementUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELAchievementUtilityFunction_IsUnlockSteamAchievement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELAchievementUtilityFunction, nullptr, "IsUnlockSteamAchievement", nullptr, nullptr, sizeof(ELAchievementUtilityFunction_eventIsUnlockSteamAchievement_Parms), Z_Construct_UFunction_UELAchievementUtilityFunction_IsUnlockSteamAchievement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAchievementUtilityFunction_IsUnlockSteamAchievement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELAchievementUtilityFunction_IsUnlockSteamAchievement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAchievementUtilityFunction_IsUnlockSteamAchievement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELAchievementUtilityFunction_IsUnlockSteamAchievement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELAchievementUtilityFunction_IsUnlockSteamAchievement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELAchievementUtilityFunction_SaveRequestAchievementData_Statics
	{
		struct ELAchievementUtilityFunction_eventSaveRequestAchievementData_Parms
		{
			uint8 _saveDataAccessFlag;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__saveDataAccessFlag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELAchievementUtilityFunction_SaveRequestAchievementData_Statics::NewProp__saveDataAccessFlag = { "_saveDataAccessFlag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAchievementUtilityFunction_eventSaveRequestAchievementData_Parms, _saveDataAccessFlag), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELAchievementUtilityFunction_SaveRequestAchievementData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAchievementUtilityFunction_SaveRequestAchievementData_Statics::NewProp__saveDataAccessFlag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELAchievementUtilityFunction_SaveRequestAchievementData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELAchievementUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELAchievementUtilityFunction_SaveRequestAchievementData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELAchievementUtilityFunction, nullptr, "SaveRequestAchievementData", nullptr, nullptr, sizeof(ELAchievementUtilityFunction_eventSaveRequestAchievementData_Parms), Z_Construct_UFunction_UELAchievementUtilityFunction_SaveRequestAchievementData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAchievementUtilityFunction_SaveRequestAchievementData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELAchievementUtilityFunction_SaveRequestAchievementData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAchievementUtilityFunction_SaveRequestAchievementData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELAchievementUtilityFunction_SaveRequestAchievementData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELAchievementUtilityFunction_SaveRequestAchievementData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELAchievementUtilityFunction_SaveRequestAchievementDataCore_Statics
	{
		struct ELAchievementUtilityFunction_eventSaveRequestAchievementDataCore_Parms
		{
			uint8 _saveDataAccessFlag;
			ESaveDataProcResult ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__saveDataAccessFlag;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELAchievementUtilityFunction_SaveRequestAchievementDataCore_Statics::NewProp__saveDataAccessFlag = { "_saveDataAccessFlag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAchievementUtilityFunction_eventSaveRequestAchievementDataCore_Parms, _saveDataAccessFlag), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELAchievementUtilityFunction_SaveRequestAchievementDataCore_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELAchievementUtilityFunction_SaveRequestAchievementDataCore_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAchievementUtilityFunction_eventSaveRequestAchievementDataCore_Parms, ReturnValue), Z_Construct_UEnum_ELITE_Game_ESaveDataProcResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELAchievementUtilityFunction_SaveRequestAchievementDataCore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAchievementUtilityFunction_SaveRequestAchievementDataCore_Statics::NewProp__saveDataAccessFlag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAchievementUtilityFunction_SaveRequestAchievementDataCore_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAchievementUtilityFunction_SaveRequestAchievementDataCore_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELAchievementUtilityFunction_SaveRequestAchievementDataCore_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELAchievementUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELAchievementUtilityFunction_SaveRequestAchievementDataCore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELAchievementUtilityFunction, nullptr, "SaveRequestAchievementDataCore", nullptr, nullptr, sizeof(ELAchievementUtilityFunction_eventSaveRequestAchievementDataCore_Parms), Z_Construct_UFunction_UELAchievementUtilityFunction_SaveRequestAchievementDataCore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAchievementUtilityFunction_SaveRequestAchievementDataCore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELAchievementUtilityFunction_SaveRequestAchievementDataCore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAchievementUtilityFunction_SaveRequestAchievementDataCore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELAchievementUtilityFunction_SaveRequestAchievementDataCore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELAchievementUtilityFunction_SaveRequestAchievementDataCore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELAchievementUtilityFunction_SetAchievementCount_Statics
	{
		struct ELAchievementUtilityFunction_eventSetAchievementCount_Parms
		{
			EELAchievementList _Achievement;
			int32 _Count;
			uint8 _saveDataAccessFlag;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__Achievement_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__Achievement;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__Count;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__saveDataAccessFlag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELAchievementUtilityFunction_SetAchievementCount_Statics::NewProp__Achievement_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELAchievementUtilityFunction_SetAchievementCount_Statics::NewProp__Achievement = { "_Achievement", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAchievementUtilityFunction_eventSetAchievementCount_Parms, _Achievement), Z_Construct_UEnum_ELITE_Game_EELAchievementList, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELAchievementUtilityFunction_SetAchievementCount_Statics::NewProp__Count = { "_Count", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAchievementUtilityFunction_eventSetAchievementCount_Parms, _Count), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELAchievementUtilityFunction_SetAchievementCount_Statics::NewProp__saveDataAccessFlag = { "_saveDataAccessFlag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAchievementUtilityFunction_eventSetAchievementCount_Parms, _saveDataAccessFlag), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELAchievementUtilityFunction_SetAchievementCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAchievementUtilityFunction_SetAchievementCount_Statics::NewProp__Achievement_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAchievementUtilityFunction_SetAchievementCount_Statics::NewProp__Achievement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAchievementUtilityFunction_SetAchievementCount_Statics::NewProp__Count,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAchievementUtilityFunction_SetAchievementCount_Statics::NewProp__saveDataAccessFlag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELAchievementUtilityFunction_SetAchievementCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELAchievementUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELAchievementUtilityFunction_SetAchievementCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELAchievementUtilityFunction, nullptr, "SetAchievementCount", nullptr, nullptr, sizeof(ELAchievementUtilityFunction_eventSetAchievementCount_Parms), Z_Construct_UFunction_UELAchievementUtilityFunction_SetAchievementCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAchievementUtilityFunction_SetAchievementCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELAchievementUtilityFunction_SetAchievementCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAchievementUtilityFunction_SetAchievementCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELAchievementUtilityFunction_SetAchievementCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELAchievementUtilityFunction_SetAchievementCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELAchievementUtilityFunction_SetAchievementCountCommon_Statics
	{
		struct ELAchievementUtilityFunction_eventSetAchievementCountCommon_Parms
		{
			EELAchievementList _Achievement;
			int32 _Count;
			uint8 _saveDataAccessFlag;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__Achievement_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__Achievement;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__Count;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__saveDataAccessFlag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELAchievementUtilityFunction_SetAchievementCountCommon_Statics::NewProp__Achievement_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELAchievementUtilityFunction_SetAchievementCountCommon_Statics::NewProp__Achievement = { "_Achievement", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAchievementUtilityFunction_eventSetAchievementCountCommon_Parms, _Achievement), Z_Construct_UEnum_ELITE_Game_EELAchievementList, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELAchievementUtilityFunction_SetAchievementCountCommon_Statics::NewProp__Count = { "_Count", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAchievementUtilityFunction_eventSetAchievementCountCommon_Parms, _Count), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELAchievementUtilityFunction_SetAchievementCountCommon_Statics::NewProp__saveDataAccessFlag = { "_saveDataAccessFlag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAchievementUtilityFunction_eventSetAchievementCountCommon_Parms, _saveDataAccessFlag), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELAchievementUtilityFunction_SetAchievementCountCommon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAchievementUtilityFunction_SetAchievementCountCommon_Statics::NewProp__Achievement_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAchievementUtilityFunction_SetAchievementCountCommon_Statics::NewProp__Achievement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAchievementUtilityFunction_SetAchievementCountCommon_Statics::NewProp__Count,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAchievementUtilityFunction_SetAchievementCountCommon_Statics::NewProp__saveDataAccessFlag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELAchievementUtilityFunction_SetAchievementCountCommon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELAchievementUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELAchievementUtilityFunction_SetAchievementCountCommon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELAchievementUtilityFunction, nullptr, "SetAchievementCountCommon", nullptr, nullptr, sizeof(ELAchievementUtilityFunction_eventSetAchievementCountCommon_Parms), Z_Construct_UFunction_UELAchievementUtilityFunction_SetAchievementCountCommon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAchievementUtilityFunction_SetAchievementCountCommon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELAchievementUtilityFunction_SetAchievementCountCommon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAchievementUtilityFunction_SetAchievementCountCommon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELAchievementUtilityFunction_SetAchievementCountCommon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELAchievementUtilityFunction_SetAchievementCountCommon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELAchievementUtilityFunction_SetAchievementStatus_Statics
	{
		struct ELAchievementUtilityFunction_eventSetAchievementStatus_Parms
		{
			EELAchievementList _Achievement;
			bool _Status;
			uint8 _saveDataAccessFlag;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__Achievement_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__Achievement;
		static void NewProp__Status_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__Status;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__saveDataAccessFlag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELAchievementUtilityFunction_SetAchievementStatus_Statics::NewProp__Achievement_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELAchievementUtilityFunction_SetAchievementStatus_Statics::NewProp__Achievement = { "_Achievement", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAchievementUtilityFunction_eventSetAchievementStatus_Parms, _Achievement), Z_Construct_UEnum_ELITE_Game_EELAchievementList, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELAchievementUtilityFunction_SetAchievementStatus_Statics::NewProp__Status_SetBit(void* Obj)
	{
		((ELAchievementUtilityFunction_eventSetAchievementStatus_Parms*)Obj)->_Status = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELAchievementUtilityFunction_SetAchievementStatus_Statics::NewProp__Status = { "_Status", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELAchievementUtilityFunction_eventSetAchievementStatus_Parms), &Z_Construct_UFunction_UELAchievementUtilityFunction_SetAchievementStatus_Statics::NewProp__Status_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELAchievementUtilityFunction_SetAchievementStatus_Statics::NewProp__saveDataAccessFlag = { "_saveDataAccessFlag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAchievementUtilityFunction_eventSetAchievementStatus_Parms, _saveDataAccessFlag), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELAchievementUtilityFunction_SetAchievementStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAchievementUtilityFunction_SetAchievementStatus_Statics::NewProp__Achievement_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAchievementUtilityFunction_SetAchievementStatus_Statics::NewProp__Achievement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAchievementUtilityFunction_SetAchievementStatus_Statics::NewProp__Status,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAchievementUtilityFunction_SetAchievementStatus_Statics::NewProp__saveDataAccessFlag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELAchievementUtilityFunction_SetAchievementStatus_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELAchievementUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELAchievementUtilityFunction_SetAchievementStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELAchievementUtilityFunction, nullptr, "SetAchievementStatus", nullptr, nullptr, sizeof(ELAchievementUtilityFunction_eventSetAchievementStatus_Parms), Z_Construct_UFunction_UELAchievementUtilityFunction_SetAchievementStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAchievementUtilityFunction_SetAchievementStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELAchievementUtilityFunction_SetAchievementStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAchievementUtilityFunction_SetAchievementStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELAchievementUtilityFunction_SetAchievementStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELAchievementUtilityFunction_SetAchievementStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELAchievementUtilityFunction_SetStackSaveAchievementInfo_Statics
	{
		struct ELAchievementUtilityFunction_eventSetStackSaveAchievementInfo_Parms
		{
			EELAchievementList _Achievement;
			bool _stack;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__Achievement_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__Achievement;
		static void NewProp__stack_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__stack;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELAchievementUtilityFunction_SetStackSaveAchievementInfo_Statics::NewProp__Achievement_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELAchievementUtilityFunction_SetStackSaveAchievementInfo_Statics::NewProp__Achievement = { "_Achievement", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAchievementUtilityFunction_eventSetStackSaveAchievementInfo_Parms, _Achievement), Z_Construct_UEnum_ELITE_Game_EELAchievementList, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELAchievementUtilityFunction_SetStackSaveAchievementInfo_Statics::NewProp__stack_SetBit(void* Obj)
	{
		((ELAchievementUtilityFunction_eventSetStackSaveAchievementInfo_Parms*)Obj)->_stack = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELAchievementUtilityFunction_SetStackSaveAchievementInfo_Statics::NewProp__stack = { "_stack", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELAchievementUtilityFunction_eventSetStackSaveAchievementInfo_Parms), &Z_Construct_UFunction_UELAchievementUtilityFunction_SetStackSaveAchievementInfo_Statics::NewProp__stack_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELAchievementUtilityFunction_SetStackSaveAchievementInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAchievementUtilityFunction_SetStackSaveAchievementInfo_Statics::NewProp__Achievement_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAchievementUtilityFunction_SetStackSaveAchievementInfo_Statics::NewProp__Achievement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAchievementUtilityFunction_SetStackSaveAchievementInfo_Statics::NewProp__stack,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELAchievementUtilityFunction_SetStackSaveAchievementInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELAchievementUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELAchievementUtilityFunction_SetStackSaveAchievementInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELAchievementUtilityFunction, nullptr, "SetStackSaveAchievementInfo", nullptr, nullptr, sizeof(ELAchievementUtilityFunction_eventSetStackSaveAchievementInfo_Parms), Z_Construct_UFunction_UELAchievementUtilityFunction_SetStackSaveAchievementInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAchievementUtilityFunction_SetStackSaveAchievementInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELAchievementUtilityFunction_SetStackSaveAchievementInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAchievementUtilityFunction_SetStackSaveAchievementInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELAchievementUtilityFunction_SetStackSaveAchievementInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELAchievementUtilityFunction_SetStackSaveAchievementInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELAchievementUtilityFunction_SetupAchievementQuery_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELAchievementUtilityFunction_SetupAchievementQuery_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELAchievementUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELAchievementUtilityFunction_SetupAchievementQuery_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELAchievementUtilityFunction, nullptr, "SetupAchievementQuery", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELAchievementUtilityFunction_SetupAchievementQuery_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAchievementUtilityFunction_SetupAchievementQuery_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELAchievementUtilityFunction_SetupAchievementQuery()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELAchievementUtilityFunction_SetupAchievementQuery_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELAchievementUtilityFunction_StackAchievementCount_Statics
	{
		struct ELAchievementUtilityFunction_eventStackAchievementCount_Parms
		{
			EELAchievementList _Achievement;
			int32 _Count;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__Achievement_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__Achievement;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__Count;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELAchievementUtilityFunction_StackAchievementCount_Statics::NewProp__Achievement_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELAchievementUtilityFunction_StackAchievementCount_Statics::NewProp__Achievement = { "_Achievement", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAchievementUtilityFunction_eventStackAchievementCount_Parms, _Achievement), Z_Construct_UEnum_ELITE_Game_EELAchievementList, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELAchievementUtilityFunction_StackAchievementCount_Statics::NewProp__Count = { "_Count", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAchievementUtilityFunction_eventStackAchievementCount_Parms, _Count), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELAchievementUtilityFunction_StackAchievementCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAchievementUtilityFunction_StackAchievementCount_Statics::NewProp__Achievement_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAchievementUtilityFunction_StackAchievementCount_Statics::NewProp__Achievement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAchievementUtilityFunction_StackAchievementCount_Statics::NewProp__Count,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELAchievementUtilityFunction_StackAchievementCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELAchievementUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELAchievementUtilityFunction_StackAchievementCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELAchievementUtilityFunction, nullptr, "StackAchievementCount", nullptr, nullptr, sizeof(ELAchievementUtilityFunction_eventStackAchievementCount_Parms), Z_Construct_UFunction_UELAchievementUtilityFunction_StackAchievementCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAchievementUtilityFunction_StackAchievementCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELAchievementUtilityFunction_StackAchievementCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAchievementUtilityFunction_StackAchievementCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELAchievementUtilityFunction_StackAchievementCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELAchievementUtilityFunction_StackAchievementCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELAchievementUtilityFunction_UnlockAchievement_Statics
	{
		struct ELAchievementUtilityFunction_eventUnlockAchievement_Parms
		{
			EELAchievementList _AchievementType;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__AchievementType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__AchievementType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELAchievementUtilityFunction_UnlockAchievement_Statics::NewProp__AchievementType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELAchievementUtilityFunction_UnlockAchievement_Statics::NewProp__AchievementType = { "_AchievementType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAchievementUtilityFunction_eventUnlockAchievement_Parms, _AchievementType), Z_Construct_UEnum_ELITE_Game_EELAchievementList, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELAchievementUtilityFunction_UnlockAchievement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAchievementUtilityFunction_UnlockAchievement_Statics::NewProp__AchievementType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAchievementUtilityFunction_UnlockAchievement_Statics::NewProp__AchievementType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELAchievementUtilityFunction_UnlockAchievement_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELAchievementUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELAchievementUtilityFunction_UnlockAchievement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELAchievementUtilityFunction, nullptr, "UnlockAchievement", nullptr, nullptr, sizeof(ELAchievementUtilityFunction_eventUnlockAchievement_Parms), Z_Construct_UFunction_UELAchievementUtilityFunction_UnlockAchievement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAchievementUtilityFunction_UnlockAchievement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELAchievementUtilityFunction_UnlockAchievement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAchievementUtilityFunction_UnlockAchievement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELAchievementUtilityFunction_UnlockAchievement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELAchievementUtilityFunction_UnlockAchievement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELAchievementUtilityFunction_UnlockAchievementCore_Statics
	{
		struct ELAchievementUtilityFunction_eventUnlockAchievementCore_Parms
		{
			EELAchievementList _AchievementType;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__AchievementType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__AchievementType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELAchievementUtilityFunction_UnlockAchievementCore_Statics::NewProp__AchievementType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELAchievementUtilityFunction_UnlockAchievementCore_Statics::NewProp__AchievementType = { "_AchievementType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELAchievementUtilityFunction_eventUnlockAchievementCore_Parms, _AchievementType), Z_Construct_UEnum_ELITE_Game_EELAchievementList, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELAchievementUtilityFunction_UnlockAchievementCore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAchievementUtilityFunction_UnlockAchievementCore_Statics::NewProp__AchievementType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELAchievementUtilityFunction_UnlockAchievementCore_Statics::NewProp__AchievementType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELAchievementUtilityFunction_UnlockAchievementCore_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELAchievementUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELAchievementUtilityFunction_UnlockAchievementCore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELAchievementUtilityFunction, nullptr, "UnlockAchievementCore", nullptr, nullptr, sizeof(ELAchievementUtilityFunction_eventUnlockAchievementCore_Parms), Z_Construct_UFunction_UELAchievementUtilityFunction_UnlockAchievementCore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAchievementUtilityFunction_UnlockAchievementCore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELAchievementUtilityFunction_UnlockAchievementCore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAchievementUtilityFunction_UnlockAchievementCore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELAchievementUtilityFunction_UnlockAchievementCore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELAchievementUtilityFunction_UnlockAchievementCore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELAchievementUtilityFunction_UnlockCareerStackAchievment_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELAchievementUtilityFunction_UnlockCareerStackAchievment_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELAchievementUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELAchievementUtilityFunction_UnlockCareerStackAchievment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELAchievementUtilityFunction, nullptr, "UnlockCareerStackAchievment", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELAchievementUtilityFunction_UnlockCareerStackAchievment_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELAchievementUtilityFunction_UnlockCareerStackAchievment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELAchievementUtilityFunction_UnlockCareerStackAchievment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELAchievementUtilityFunction_UnlockCareerStackAchievment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELAchievementUtilityFunction_NoRegister()
	{
		return UELAchievementUtilityFunction::StaticClass();
	}
	struct Z_Construct_UClass_UELAchievementUtilityFunction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELAchievementUtilityFunction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELAchievementUtilityFunction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELAchievementUtilityFunction_AddAchievementCount, "AddAchievementCount" }, // 3232540775
		{ &Z_Construct_UFunction_UELAchievementUtilityFunction_AddAchievementCountCommon, "AddAchievementCountCommon" }, // 2544123983
		{ &Z_Construct_UFunction_UELAchievementUtilityFunction_CheckUnlockAchievement, "CheckUnlockAchievement" }, // 2160445842
		{ &Z_Construct_UFunction_UELAchievementUtilityFunction_CheckUnlockAchievementCore, "CheckUnlockAchievementCore" }, // 3082581619
		{ &Z_Construct_UFunction_UELAchievementUtilityFunction_CheckUnlockAddAchievementCount, "CheckUnlockAddAchievementCount" }, // 660944748
		{ &Z_Construct_UFunction_UELAchievementUtilityFunction_ClearAchievement, "ClearAchievement" }, // 1788631697
		{ &Z_Construct_UFunction_UELAchievementUtilityFunction_ClearAllAchievements, "ClearAllAchievements" }, // 3760026948
		{ &Z_Construct_UFunction_UELAchievementUtilityFunction_GetAchievementCount, "GetAchievementCount" }, // 437205282
		{ &Z_Construct_UFunction_UELAchievementUtilityFunction_GetAchievementCountCommon, "GetAchievementCountCommon" }, // 4258532961
		{ &Z_Construct_UFunction_UELAchievementUtilityFunction_GetAchievementGameInstance, "GetAchievementGameInstance" }, // 2378507613
		{ &Z_Construct_UFunction_UELAchievementUtilityFunction_GetAchievementStatus, "GetAchievementStatus" }, // 3965730361
		{ &Z_Construct_UFunction_UELAchievementUtilityFunction_GetStackSaveAchievementArray, "GetStackSaveAchievementArray" }, // 3834859117
		{ &Z_Construct_UFunction_UELAchievementUtilityFunction_IsEnableSaveAchievementInCareer, "IsEnableSaveAchievementInCareer" }, // 3820446028
		{ &Z_Construct_UFunction_UELAchievementUtilityFunction_IsEnableSavedata, "IsEnableSavedata" }, // 736550369
		{ &Z_Construct_UFunction_UELAchievementUtilityFunction_IsSaveCount, "IsSaveCount" }, // 2695128293
		{ &Z_Construct_UFunction_UELAchievementUtilityFunction_IsUnlockSteamAchievement, "IsUnlockSteamAchievement" }, // 668691036
		{ &Z_Construct_UFunction_UELAchievementUtilityFunction_SaveRequestAchievementData, "SaveRequestAchievementData" }, // 3511410275
		{ &Z_Construct_UFunction_UELAchievementUtilityFunction_SaveRequestAchievementDataCore, "SaveRequestAchievementDataCore" }, // 4207133005
		{ &Z_Construct_UFunction_UELAchievementUtilityFunction_SetAchievementCount, "SetAchievementCount" }, // 1554202895
		{ &Z_Construct_UFunction_UELAchievementUtilityFunction_SetAchievementCountCommon, "SetAchievementCountCommon" }, // 52704742
		{ &Z_Construct_UFunction_UELAchievementUtilityFunction_SetAchievementStatus, "SetAchievementStatus" }, // 3661014620
		{ &Z_Construct_UFunction_UELAchievementUtilityFunction_SetStackSaveAchievementInfo, "SetStackSaveAchievementInfo" }, // 3147511527
		{ &Z_Construct_UFunction_UELAchievementUtilityFunction_SetupAchievementQuery, "SetupAchievementQuery" }, // 2554574057
		{ &Z_Construct_UFunction_UELAchievementUtilityFunction_StackAchievementCount, "StackAchievementCount" }, // 1295734883
		{ &Z_Construct_UFunction_UELAchievementUtilityFunction_UnlockAchievement, "UnlockAchievement" }, // 1670818698
		{ &Z_Construct_UFunction_UELAchievementUtilityFunction_UnlockAchievementCore, "UnlockAchievementCore" }, // 4010595496
		{ &Z_Construct_UFunction_UELAchievementUtilityFunction_UnlockCareerStackAchievment, "UnlockCareerStackAchievment" }, // 1776709594
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELAchievementUtilityFunction_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELAchievementUtilityFunction.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELAchievementUtilityFunction.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELAchievementUtilityFunction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELAchievementUtilityFunction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELAchievementUtilityFunction_Statics::ClassParams = {
		&UELAchievementUtilityFunction::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UELAchievementUtilityFunction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELAchievementUtilityFunction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELAchievementUtilityFunction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELAchievementUtilityFunction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELAchievementUtilityFunction, 463098067);
	template<> ABP_200508_API UClass* StaticClass<UELAchievementUtilityFunction>()
	{
		return UELAchievementUtilityFunction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELAchievementUtilityFunction(Z_Construct_UClass_UELAchievementUtilityFunction, &UELAchievementUtilityFunction::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELAchievementUtilityFunction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELAchievementUtilityFunction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
