// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELMiniGameUtilityFunction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELMiniGameUtilityFunction() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELMiniGameUtilityFunction_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELMiniGameUtilityFunction();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EMiniGameID();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EMiniGameMiningCategory();
// End Cross Module References
	DEFINE_FUNCTION(UELMiniGameUtilityFunction::execCheckUnlockProGamerAchievement)
	{
		P_GET_ENUM(EMiniGameID,Z_Param__NowPlayMiniGameID);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELMiniGameUtilityFunction::CheckUnlockProGamerAchievement(EMiniGameID(Z_Param__NowPlayMiniGameID));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMiniGameUtilityFunction::execGetMiniGamePlayedList)
	{
		P_GET_TARRAY_REF(bool,Z_Param_Out__AlreadyPlayedArray);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELMiniGameUtilityFunction::GetMiniGamePlayedList(Z_Param_Out__AlreadyPlayedArray);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMiniGameUtilityFunction::execMiningMiniGameParam)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_ENUM(EMiniGameMiningCategory,Z_Param_Category);
		P_GET_ENUM(EMiniGameID,Z_Param_MiniGameId);
		P_GET_PROPERTY(FIntProperty,Z_Param_MiningData);
		P_GET_PROPERTY(FIntProperty,Z_Param_Level);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELMiniGameUtilityFunction::MiningMiniGameParam(Z_Param_WorldContextObject,EMiniGameMiningCategory(Z_Param_Category),EMiniGameID(Z_Param_MiniGameId),Z_Param_MiningData,Z_Param_Level);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMiniGameUtilityFunction::execMiningMiniGameScores)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_ENUM(EMiniGameID,Z_Param_MiniGameId);
		P_GET_UBOOL(Z_Param_IsInOnline);
		P_GET_TARRAY(bool,Z_Param_IsPlayer);
		P_GET_TARRAY(int32,Z_Param_ScoreData);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELMiniGameUtilityFunction::MiningMiniGameScores(Z_Param_WorldContextObject,EMiniGameID(Z_Param_MiniGameId),Z_Param_IsInOnline,Z_Param_IsPlayer,Z_Param_ScoreData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMiniGameUtilityFunction::execSaveRequestMiniGameData)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param__saveDataAccessFlag);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELMiniGameUtilityFunction::SaveRequestMiniGameData(Z_Param__saveDataAccessFlag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMiniGameUtilityFunction::execSetMiniGameCanCharacterStepUpOn)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_UBOOL(Z_Param_IsOn);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELMiniGameUtilityFunction::SetMiniGameCanCharacterStepUpOn(Z_Param_WorldContextObject,Z_Param_IsOn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMiniGameUtilityFunction::execSetMiniGameCanEverAffectNavigation)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_UBOOL(Z_Param_IsOn);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELMiniGameUtilityFunction::SetMiniGameCanEverAffectNavigation(Z_Param_WorldContextObject,Z_Param_IsOn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMiniGameUtilityFunction::execSetMiniGameDynamicResOperationMode)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_UBOOL(Z_Param_IsOn);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELMiniGameUtilityFunction::SetMiniGameDynamicResOperationMode(Z_Param_WorldContextObject,Z_Param_IsOn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMiniGameUtilityFunction::execSetMiniGamePlayed)
	{
		P_GET_ENUM(EMiniGameID,Z_Param__MiniGameID);
		P_GET_UBOOL(Z_Param__IsPlayed);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELMiniGameUtilityFunction::SetMiniGamePlayed(EMiniGameID(Z_Param__MiniGameID),Z_Param__IsPlayed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMiniGameUtilityFunction::execSetupMiniGameSaveData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELMiniGameUtilityFunction::SetupMiniGameSaveData();
		P_NATIVE_END;
	}
	void UELMiniGameUtilityFunction::StaticRegisterNativesUELMiniGameUtilityFunction()
	{
		UClass* Class = UELMiniGameUtilityFunction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CheckUnlockProGamerAchievement", &UELMiniGameUtilityFunction::execCheckUnlockProGamerAchievement },
			{ "GetMiniGamePlayedList", &UELMiniGameUtilityFunction::execGetMiniGamePlayedList },
			{ "MiningMiniGameParam", &UELMiniGameUtilityFunction::execMiningMiniGameParam },
			{ "MiningMiniGameScores", &UELMiniGameUtilityFunction::execMiningMiniGameScores },
			{ "SaveRequestMiniGameData", &UELMiniGameUtilityFunction::execSaveRequestMiniGameData },
			{ "SetMiniGameCanCharacterStepUpOn", &UELMiniGameUtilityFunction::execSetMiniGameCanCharacterStepUpOn },
			{ "SetMiniGameCanEverAffectNavigation", &UELMiniGameUtilityFunction::execSetMiniGameCanEverAffectNavigation },
			{ "SetMiniGameDynamicResOperationMode", &UELMiniGameUtilityFunction::execSetMiniGameDynamicResOperationMode },
			{ "SetMiniGamePlayed", &UELMiniGameUtilityFunction::execSetMiniGamePlayed },
			{ "SetupMiniGameSaveData", &UELMiniGameUtilityFunction::execSetupMiniGameSaveData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELMiniGameUtilityFunction_CheckUnlockProGamerAchievement_Statics
	{
		struct ELMiniGameUtilityFunction_eventCheckUnlockProGamerAchievement_Parms
		{
			EMiniGameID _NowPlayMiniGameID;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__NowPlayMiniGameID_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__NowPlayMiniGameID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELMiniGameUtilityFunction_CheckUnlockProGamerAchievement_Statics::NewProp__NowPlayMiniGameID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELMiniGameUtilityFunction_CheckUnlockProGamerAchievement_Statics::NewProp__NowPlayMiniGameID = { "_NowPlayMiniGameID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMiniGameUtilityFunction_eventCheckUnlockProGamerAchievement_Parms, _NowPlayMiniGameID), Z_Construct_UEnum_ABP_200508_EMiniGameID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMiniGameUtilityFunction_CheckUnlockProGamerAchievement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMiniGameUtilityFunction_CheckUnlockProGamerAchievement_Statics::NewProp__NowPlayMiniGameID_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMiniGameUtilityFunction_CheckUnlockProGamerAchievement_Statics::NewProp__NowPlayMiniGameID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMiniGameUtilityFunction_CheckUnlockProGamerAchievement_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMiniGameUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMiniGameUtilityFunction_CheckUnlockProGamerAchievement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMiniGameUtilityFunction, nullptr, "CheckUnlockProGamerAchievement", nullptr, nullptr, sizeof(ELMiniGameUtilityFunction_eventCheckUnlockProGamerAchievement_Parms), Z_Construct_UFunction_UELMiniGameUtilityFunction_CheckUnlockProGamerAchievement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMiniGameUtilityFunction_CheckUnlockProGamerAchievement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMiniGameUtilityFunction_CheckUnlockProGamerAchievement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMiniGameUtilityFunction_CheckUnlockProGamerAchievement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMiniGameUtilityFunction_CheckUnlockProGamerAchievement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMiniGameUtilityFunction_CheckUnlockProGamerAchievement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMiniGameUtilityFunction_GetMiniGamePlayedList_Statics
	{
		struct ELMiniGameUtilityFunction_eventGetMiniGamePlayedList_Parms
		{
			TArray<bool> _AlreadyPlayedArray;
		};
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__AlreadyPlayedArray_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__AlreadyPlayedArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMiniGameUtilityFunction_GetMiniGamePlayedList_Statics::NewProp__AlreadyPlayedArray_Inner = { "_AlreadyPlayedArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELMiniGameUtilityFunction_GetMiniGamePlayedList_Statics::NewProp__AlreadyPlayedArray = { "_AlreadyPlayedArray", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMiniGameUtilityFunction_eventGetMiniGamePlayedList_Parms, _AlreadyPlayedArray), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMiniGameUtilityFunction_GetMiniGamePlayedList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMiniGameUtilityFunction_GetMiniGamePlayedList_Statics::NewProp__AlreadyPlayedArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMiniGameUtilityFunction_GetMiniGamePlayedList_Statics::NewProp__AlreadyPlayedArray,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMiniGameUtilityFunction_GetMiniGamePlayedList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMiniGameUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMiniGameUtilityFunction_GetMiniGamePlayedList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMiniGameUtilityFunction, nullptr, "GetMiniGamePlayedList", nullptr, nullptr, sizeof(ELMiniGameUtilityFunction_eventGetMiniGamePlayedList_Parms), Z_Construct_UFunction_UELMiniGameUtilityFunction_GetMiniGamePlayedList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMiniGameUtilityFunction_GetMiniGamePlayedList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMiniGameUtilityFunction_GetMiniGamePlayedList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMiniGameUtilityFunction_GetMiniGamePlayedList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMiniGameUtilityFunction_GetMiniGamePlayedList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMiniGameUtilityFunction_GetMiniGamePlayedList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMiniGameUtilityFunction_MiningMiniGameParam_Statics
	{
		struct ELMiniGameUtilityFunction_eventMiningMiniGameParam_Parms
		{
			const UObject* WorldContextObject;
			EMiniGameMiningCategory Category;
			EMiniGameID MiniGameId;
			int32 MiningData;
			int32 Level;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Category_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Category;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MiniGameId_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MiniGameId;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MiningData;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Level;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMiniGameUtilityFunction_MiningMiniGameParam_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELMiniGameUtilityFunction_MiningMiniGameParam_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMiniGameUtilityFunction_eventMiningMiniGameParam_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELMiniGameUtilityFunction_MiningMiniGameParam_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMiniGameUtilityFunction_MiningMiniGameParam_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELMiniGameUtilityFunction_MiningMiniGameParam_Statics::NewProp_Category_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELMiniGameUtilityFunction_MiningMiniGameParam_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMiniGameUtilityFunction_eventMiningMiniGameParam_Parms, Category), Z_Construct_UEnum_ABP_200508_EMiniGameMiningCategory, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELMiniGameUtilityFunction_MiningMiniGameParam_Statics::NewProp_MiniGameId_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELMiniGameUtilityFunction_MiningMiniGameParam_Statics::NewProp_MiniGameId = { "MiniGameId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMiniGameUtilityFunction_eventMiningMiniGameParam_Parms, MiniGameId), Z_Construct_UEnum_ABP_200508_EMiniGameID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELMiniGameUtilityFunction_MiningMiniGameParam_Statics::NewProp_MiningData = { "MiningData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMiniGameUtilityFunction_eventMiningMiniGameParam_Parms, MiningData), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELMiniGameUtilityFunction_MiningMiniGameParam_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMiniGameUtilityFunction_eventMiningMiniGameParam_Parms, Level), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMiniGameUtilityFunction_MiningMiniGameParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMiniGameUtilityFunction_MiningMiniGameParam_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMiniGameUtilityFunction_MiningMiniGameParam_Statics::NewProp_Category_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMiniGameUtilityFunction_MiningMiniGameParam_Statics::NewProp_Category,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMiniGameUtilityFunction_MiningMiniGameParam_Statics::NewProp_MiniGameId_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMiniGameUtilityFunction_MiningMiniGameParam_Statics::NewProp_MiniGameId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMiniGameUtilityFunction_MiningMiniGameParam_Statics::NewProp_MiningData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMiniGameUtilityFunction_MiningMiniGameParam_Statics::NewProp_Level,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMiniGameUtilityFunction_MiningMiniGameParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMiniGameUtilityFunction.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMiniGameUtilityFunction_MiningMiniGameParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMiniGameUtilityFunction, nullptr, "MiningMiniGameParam", nullptr, nullptr, sizeof(ELMiniGameUtilityFunction_eventMiningMiniGameParam_Parms), Z_Construct_UFunction_UELMiniGameUtilityFunction_MiningMiniGameParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMiniGameUtilityFunction_MiningMiniGameParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMiniGameUtilityFunction_MiningMiniGameParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMiniGameUtilityFunction_MiningMiniGameParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMiniGameUtilityFunction_MiningMiniGameParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMiniGameUtilityFunction_MiningMiniGameParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMiniGameUtilityFunction_MiningMiniGameScores_Statics
	{
		struct ELMiniGameUtilityFunction_eventMiningMiniGameScores_Parms
		{
			const UObject* WorldContextObject;
			EMiniGameID MiniGameId;
			bool IsInOnline;
			TArray<bool> IsPlayer;
			TArray<int32> ScoreData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MiniGameId_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MiniGameId;
		static void NewProp_IsInOnline_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsInOnline;
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsPlayer_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_IsPlayer;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ScoreData_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ScoreData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMiniGameUtilityFunction_MiningMiniGameScores_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELMiniGameUtilityFunction_MiningMiniGameScores_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMiniGameUtilityFunction_eventMiningMiniGameScores_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELMiniGameUtilityFunction_MiningMiniGameScores_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMiniGameUtilityFunction_MiningMiniGameScores_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELMiniGameUtilityFunction_MiningMiniGameScores_Statics::NewProp_MiniGameId_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELMiniGameUtilityFunction_MiningMiniGameScores_Statics::NewProp_MiniGameId = { "MiniGameId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMiniGameUtilityFunction_eventMiningMiniGameScores_Parms, MiniGameId), Z_Construct_UEnum_ABP_200508_EMiniGameID, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELMiniGameUtilityFunction_MiningMiniGameScores_Statics::NewProp_IsInOnline_SetBit(void* Obj)
	{
		((ELMiniGameUtilityFunction_eventMiningMiniGameScores_Parms*)Obj)->IsInOnline = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMiniGameUtilityFunction_MiningMiniGameScores_Statics::NewProp_IsInOnline = { "IsInOnline", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMiniGameUtilityFunction_eventMiningMiniGameScores_Parms), &Z_Construct_UFunction_UELMiniGameUtilityFunction_MiningMiniGameScores_Statics::NewProp_IsInOnline_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMiniGameUtilityFunction_MiningMiniGameScores_Statics::NewProp_IsPlayer_Inner = { "IsPlayer", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELMiniGameUtilityFunction_MiningMiniGameScores_Statics::NewProp_IsPlayer = { "IsPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMiniGameUtilityFunction_eventMiningMiniGameScores_Parms, IsPlayer), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELMiniGameUtilityFunction_MiningMiniGameScores_Statics::NewProp_ScoreData_Inner = { "ScoreData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELMiniGameUtilityFunction_MiningMiniGameScores_Statics::NewProp_ScoreData = { "ScoreData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMiniGameUtilityFunction_eventMiningMiniGameScores_Parms, ScoreData), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMiniGameUtilityFunction_MiningMiniGameScores_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMiniGameUtilityFunction_MiningMiniGameScores_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMiniGameUtilityFunction_MiningMiniGameScores_Statics::NewProp_MiniGameId_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMiniGameUtilityFunction_MiningMiniGameScores_Statics::NewProp_MiniGameId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMiniGameUtilityFunction_MiningMiniGameScores_Statics::NewProp_IsInOnline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMiniGameUtilityFunction_MiningMiniGameScores_Statics::NewProp_IsPlayer_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMiniGameUtilityFunction_MiningMiniGameScores_Statics::NewProp_IsPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMiniGameUtilityFunction_MiningMiniGameScores_Statics::NewProp_ScoreData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMiniGameUtilityFunction_MiningMiniGameScores_Statics::NewProp_ScoreData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMiniGameUtilityFunction_MiningMiniGameScores_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMiniGameUtilityFunction.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMiniGameUtilityFunction_MiningMiniGameScores_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMiniGameUtilityFunction, nullptr, "MiningMiniGameScores", nullptr, nullptr, sizeof(ELMiniGameUtilityFunction_eventMiningMiniGameScores_Parms), Z_Construct_UFunction_UELMiniGameUtilityFunction_MiningMiniGameScores_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMiniGameUtilityFunction_MiningMiniGameScores_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMiniGameUtilityFunction_MiningMiniGameScores_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMiniGameUtilityFunction_MiningMiniGameScores_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMiniGameUtilityFunction_MiningMiniGameScores()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMiniGameUtilityFunction_MiningMiniGameScores_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMiniGameUtilityFunction_SaveRequestMiniGameData_Statics
	{
		struct ELMiniGameUtilityFunction_eventSaveRequestMiniGameData_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELMiniGameUtilityFunction_SaveRequestMiniGameData_Statics::NewProp__saveDataAccessFlag = { "_saveDataAccessFlag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMiniGameUtilityFunction_eventSaveRequestMiniGameData_Parms, _saveDataAccessFlag), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMiniGameUtilityFunction_SaveRequestMiniGameData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMiniGameUtilityFunction_SaveRequestMiniGameData_Statics::NewProp__saveDataAccessFlag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMiniGameUtilityFunction_SaveRequestMiniGameData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMiniGameUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMiniGameUtilityFunction_SaveRequestMiniGameData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMiniGameUtilityFunction, nullptr, "SaveRequestMiniGameData", nullptr, nullptr, sizeof(ELMiniGameUtilityFunction_eventSaveRequestMiniGameData_Parms), Z_Construct_UFunction_UELMiniGameUtilityFunction_SaveRequestMiniGameData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMiniGameUtilityFunction_SaveRequestMiniGameData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMiniGameUtilityFunction_SaveRequestMiniGameData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMiniGameUtilityFunction_SaveRequestMiniGameData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMiniGameUtilityFunction_SaveRequestMiniGameData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMiniGameUtilityFunction_SaveRequestMiniGameData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMiniGameUtilityFunction_SetMiniGameCanCharacterStepUpOn_Statics
	{
		struct ELMiniGameUtilityFunction_eventSetMiniGameCanCharacterStepUpOn_Parms
		{
			UObject* WorldContextObject;
			bool IsOn;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_IsOn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsOn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELMiniGameUtilityFunction_SetMiniGameCanCharacterStepUpOn_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMiniGameUtilityFunction_eventSetMiniGameCanCharacterStepUpOn_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELMiniGameUtilityFunction_SetMiniGameCanCharacterStepUpOn_Statics::NewProp_IsOn_SetBit(void* Obj)
	{
		((ELMiniGameUtilityFunction_eventSetMiniGameCanCharacterStepUpOn_Parms*)Obj)->IsOn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMiniGameUtilityFunction_SetMiniGameCanCharacterStepUpOn_Statics::NewProp_IsOn = { "IsOn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMiniGameUtilityFunction_eventSetMiniGameCanCharacterStepUpOn_Parms), &Z_Construct_UFunction_UELMiniGameUtilityFunction_SetMiniGameCanCharacterStepUpOn_Statics::NewProp_IsOn_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMiniGameUtilityFunction_SetMiniGameCanCharacterStepUpOn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMiniGameUtilityFunction_SetMiniGameCanCharacterStepUpOn_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMiniGameUtilityFunction_SetMiniGameCanCharacterStepUpOn_Statics::NewProp_IsOn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMiniGameUtilityFunction_SetMiniGameCanCharacterStepUpOn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMiniGameUtilityFunction.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMiniGameUtilityFunction_SetMiniGameCanCharacterStepUpOn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMiniGameUtilityFunction, nullptr, "SetMiniGameCanCharacterStepUpOn", nullptr, nullptr, sizeof(ELMiniGameUtilityFunction_eventSetMiniGameCanCharacterStepUpOn_Parms), Z_Construct_UFunction_UELMiniGameUtilityFunction_SetMiniGameCanCharacterStepUpOn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMiniGameUtilityFunction_SetMiniGameCanCharacterStepUpOn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMiniGameUtilityFunction_SetMiniGameCanCharacterStepUpOn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMiniGameUtilityFunction_SetMiniGameCanCharacterStepUpOn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMiniGameUtilityFunction_SetMiniGameCanCharacterStepUpOn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMiniGameUtilityFunction_SetMiniGameCanCharacterStepUpOn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMiniGameUtilityFunction_SetMiniGameCanEverAffectNavigation_Statics
	{
		struct ELMiniGameUtilityFunction_eventSetMiniGameCanEverAffectNavigation_Parms
		{
			UObject* WorldContextObject;
			bool IsOn;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_IsOn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsOn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELMiniGameUtilityFunction_SetMiniGameCanEverAffectNavigation_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMiniGameUtilityFunction_eventSetMiniGameCanEverAffectNavigation_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELMiniGameUtilityFunction_SetMiniGameCanEverAffectNavigation_Statics::NewProp_IsOn_SetBit(void* Obj)
	{
		((ELMiniGameUtilityFunction_eventSetMiniGameCanEverAffectNavigation_Parms*)Obj)->IsOn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMiniGameUtilityFunction_SetMiniGameCanEverAffectNavigation_Statics::NewProp_IsOn = { "IsOn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMiniGameUtilityFunction_eventSetMiniGameCanEverAffectNavigation_Parms), &Z_Construct_UFunction_UELMiniGameUtilityFunction_SetMiniGameCanEverAffectNavigation_Statics::NewProp_IsOn_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMiniGameUtilityFunction_SetMiniGameCanEverAffectNavigation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMiniGameUtilityFunction_SetMiniGameCanEverAffectNavigation_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMiniGameUtilityFunction_SetMiniGameCanEverAffectNavigation_Statics::NewProp_IsOn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMiniGameUtilityFunction_SetMiniGameCanEverAffectNavigation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMiniGameUtilityFunction.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMiniGameUtilityFunction_SetMiniGameCanEverAffectNavigation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMiniGameUtilityFunction, nullptr, "SetMiniGameCanEverAffectNavigation", nullptr, nullptr, sizeof(ELMiniGameUtilityFunction_eventSetMiniGameCanEverAffectNavigation_Parms), Z_Construct_UFunction_UELMiniGameUtilityFunction_SetMiniGameCanEverAffectNavigation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMiniGameUtilityFunction_SetMiniGameCanEverAffectNavigation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMiniGameUtilityFunction_SetMiniGameCanEverAffectNavigation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMiniGameUtilityFunction_SetMiniGameCanEverAffectNavigation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMiniGameUtilityFunction_SetMiniGameCanEverAffectNavigation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMiniGameUtilityFunction_SetMiniGameCanEverAffectNavigation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMiniGameUtilityFunction_SetMiniGameDynamicResOperationMode_Statics
	{
		struct ELMiniGameUtilityFunction_eventSetMiniGameDynamicResOperationMode_Parms
		{
			UObject* WorldContextObject;
			bool IsOn;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_IsOn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsOn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELMiniGameUtilityFunction_SetMiniGameDynamicResOperationMode_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMiniGameUtilityFunction_eventSetMiniGameDynamicResOperationMode_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELMiniGameUtilityFunction_SetMiniGameDynamicResOperationMode_Statics::NewProp_IsOn_SetBit(void* Obj)
	{
		((ELMiniGameUtilityFunction_eventSetMiniGameDynamicResOperationMode_Parms*)Obj)->IsOn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMiniGameUtilityFunction_SetMiniGameDynamicResOperationMode_Statics::NewProp_IsOn = { "IsOn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMiniGameUtilityFunction_eventSetMiniGameDynamicResOperationMode_Parms), &Z_Construct_UFunction_UELMiniGameUtilityFunction_SetMiniGameDynamicResOperationMode_Statics::NewProp_IsOn_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMiniGameUtilityFunction_SetMiniGameDynamicResOperationMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMiniGameUtilityFunction_SetMiniGameDynamicResOperationMode_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMiniGameUtilityFunction_SetMiniGameDynamicResOperationMode_Statics::NewProp_IsOn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMiniGameUtilityFunction_SetMiniGameDynamicResOperationMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMiniGameUtilityFunction.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMiniGameUtilityFunction_SetMiniGameDynamicResOperationMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMiniGameUtilityFunction, nullptr, "SetMiniGameDynamicResOperationMode", nullptr, nullptr, sizeof(ELMiniGameUtilityFunction_eventSetMiniGameDynamicResOperationMode_Parms), Z_Construct_UFunction_UELMiniGameUtilityFunction_SetMiniGameDynamicResOperationMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMiniGameUtilityFunction_SetMiniGameDynamicResOperationMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMiniGameUtilityFunction_SetMiniGameDynamicResOperationMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMiniGameUtilityFunction_SetMiniGameDynamicResOperationMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMiniGameUtilityFunction_SetMiniGameDynamicResOperationMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMiniGameUtilityFunction_SetMiniGameDynamicResOperationMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMiniGameUtilityFunction_SetMiniGamePlayed_Statics
	{
		struct ELMiniGameUtilityFunction_eventSetMiniGamePlayed_Parms
		{
			EMiniGameID _MiniGameID;
			bool _IsPlayed;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__MiniGameID_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__MiniGameID;
		static void NewProp__IsPlayed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__IsPlayed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELMiniGameUtilityFunction_SetMiniGamePlayed_Statics::NewProp__MiniGameID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELMiniGameUtilityFunction_SetMiniGamePlayed_Statics::NewProp__MiniGameID = { "_MiniGameID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMiniGameUtilityFunction_eventSetMiniGamePlayed_Parms, _MiniGameID), Z_Construct_UEnum_ABP_200508_EMiniGameID, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELMiniGameUtilityFunction_SetMiniGamePlayed_Statics::NewProp__IsPlayed_SetBit(void* Obj)
	{
		((ELMiniGameUtilityFunction_eventSetMiniGamePlayed_Parms*)Obj)->_IsPlayed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMiniGameUtilityFunction_SetMiniGamePlayed_Statics::NewProp__IsPlayed = { "_IsPlayed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMiniGameUtilityFunction_eventSetMiniGamePlayed_Parms), &Z_Construct_UFunction_UELMiniGameUtilityFunction_SetMiniGamePlayed_Statics::NewProp__IsPlayed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMiniGameUtilityFunction_SetMiniGamePlayed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMiniGameUtilityFunction_SetMiniGamePlayed_Statics::NewProp__MiniGameID_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMiniGameUtilityFunction_SetMiniGamePlayed_Statics::NewProp__MiniGameID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMiniGameUtilityFunction_SetMiniGamePlayed_Statics::NewProp__IsPlayed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMiniGameUtilityFunction_SetMiniGamePlayed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMiniGameUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMiniGameUtilityFunction_SetMiniGamePlayed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMiniGameUtilityFunction, nullptr, "SetMiniGamePlayed", nullptr, nullptr, sizeof(ELMiniGameUtilityFunction_eventSetMiniGamePlayed_Parms), Z_Construct_UFunction_UELMiniGameUtilityFunction_SetMiniGamePlayed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMiniGameUtilityFunction_SetMiniGamePlayed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMiniGameUtilityFunction_SetMiniGamePlayed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMiniGameUtilityFunction_SetMiniGamePlayed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMiniGameUtilityFunction_SetMiniGamePlayed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMiniGameUtilityFunction_SetMiniGamePlayed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMiniGameUtilityFunction_SetupMiniGameSaveData_Statics
	{
		struct ELMiniGameUtilityFunction_eventSetupMiniGameSaveData_Parms
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
	void Z_Construct_UFunction_UELMiniGameUtilityFunction_SetupMiniGameSaveData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELMiniGameUtilityFunction_eventSetupMiniGameSaveData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMiniGameUtilityFunction_SetupMiniGameSaveData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMiniGameUtilityFunction_eventSetupMiniGameSaveData_Parms), &Z_Construct_UFunction_UELMiniGameUtilityFunction_SetupMiniGameSaveData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMiniGameUtilityFunction_SetupMiniGameSaveData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMiniGameUtilityFunction_SetupMiniGameSaveData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMiniGameUtilityFunction_SetupMiniGameSaveData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMiniGameUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMiniGameUtilityFunction_SetupMiniGameSaveData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMiniGameUtilityFunction, nullptr, "SetupMiniGameSaveData", nullptr, nullptr, sizeof(ELMiniGameUtilityFunction_eventSetupMiniGameSaveData_Parms), Z_Construct_UFunction_UELMiniGameUtilityFunction_SetupMiniGameSaveData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMiniGameUtilityFunction_SetupMiniGameSaveData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMiniGameUtilityFunction_SetupMiniGameSaveData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMiniGameUtilityFunction_SetupMiniGameSaveData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMiniGameUtilityFunction_SetupMiniGameSaveData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMiniGameUtilityFunction_SetupMiniGameSaveData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELMiniGameUtilityFunction_NoRegister()
	{
		return UELMiniGameUtilityFunction::StaticClass();
	}
	struct Z_Construct_UClass_UELMiniGameUtilityFunction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELMiniGameUtilityFunction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELMiniGameUtilityFunction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELMiniGameUtilityFunction_CheckUnlockProGamerAchievement, "CheckUnlockProGamerAchievement" }, // 68850389
		{ &Z_Construct_UFunction_UELMiniGameUtilityFunction_GetMiniGamePlayedList, "GetMiniGamePlayedList" }, // 681800980
		{ &Z_Construct_UFunction_UELMiniGameUtilityFunction_MiningMiniGameParam, "MiningMiniGameParam" }, // 282186724
		{ &Z_Construct_UFunction_UELMiniGameUtilityFunction_MiningMiniGameScores, "MiningMiniGameScores" }, // 2653644428
		{ &Z_Construct_UFunction_UELMiniGameUtilityFunction_SaveRequestMiniGameData, "SaveRequestMiniGameData" }, // 801853077
		{ &Z_Construct_UFunction_UELMiniGameUtilityFunction_SetMiniGameCanCharacterStepUpOn, "SetMiniGameCanCharacterStepUpOn" }, // 3923483137
		{ &Z_Construct_UFunction_UELMiniGameUtilityFunction_SetMiniGameCanEverAffectNavigation, "SetMiniGameCanEverAffectNavigation" }, // 1718099215
		{ &Z_Construct_UFunction_UELMiniGameUtilityFunction_SetMiniGameDynamicResOperationMode, "SetMiniGameDynamicResOperationMode" }, // 3113566152
		{ &Z_Construct_UFunction_UELMiniGameUtilityFunction_SetMiniGamePlayed, "SetMiniGamePlayed" }, // 3165855656
		{ &Z_Construct_UFunction_UELMiniGameUtilityFunction_SetupMiniGameSaveData, "SetupMiniGameSaveData" }, // 3939744085
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELMiniGameUtilityFunction_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELMiniGameUtilityFunction.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELMiniGameUtilityFunction.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELMiniGameUtilityFunction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELMiniGameUtilityFunction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELMiniGameUtilityFunction_Statics::ClassParams = {
		&UELMiniGameUtilityFunction::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UELMiniGameUtilityFunction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELMiniGameUtilityFunction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELMiniGameUtilityFunction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELMiniGameUtilityFunction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELMiniGameUtilityFunction, 2640743423);
	template<> ABP_200508_API UClass* StaticClass<UELMiniGameUtilityFunction>()
	{
		return UELMiniGameUtilityFunction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELMiniGameUtilityFunction(Z_Construct_UClass_UELMiniGameUtilityFunction, &UELMiniGameUtilityFunction::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELMiniGameUtilityFunction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELMiniGameUtilityFunction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
