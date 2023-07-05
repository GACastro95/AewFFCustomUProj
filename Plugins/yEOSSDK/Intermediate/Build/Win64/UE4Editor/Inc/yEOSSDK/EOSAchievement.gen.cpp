// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSAchievement.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSAchievement() {}
// Cross Module References
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSAchievement_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSAchievement();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSStats();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
	YEOSSDK_API UScriptStruct* Z_Construct_UScriptStruct_FEOSAchievementInfo();
	YEOSSDK_API UScriptStruct* Z_Construct_UScriptStruct_FEOSPlayerAchievementInfo();
	YEOSSDK_API UScriptStruct* Z_Construct_UScriptStruct_FEOSUnlockAchievementInfo();
	YEOSSDK_API UScriptStruct* Z_Construct_UScriptStruct_FEOSAchievementAPIVersionSettings();
	YEOSSDK_API UFunction* Z_Construct_UDelegateFunction_yEOSSDK_EOSAchievementEventDispatcher__DelegateSignature();
	YEOSSDK_API UFunction* Z_Construct_UDelegateFunction_yEOSSDK_EOSPlayerAchievementUnlockEventDispatcher__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UEOSAchievement::execGetAchievements)
	{
		P_GET_TARRAY_REF(FEOSAchievementInfo,Z_Param_Out__stAchievementInfos);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetAchievements(Z_Param_Out__stAchievementInfos);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSAchievement::execGetPlayerAchievements)
	{
		P_GET_TARRAY_REF(FEOSPlayerAchievementInfo,Z_Param_Out__stPlayerAchievementInfos);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetPlayerAchievements(Z_Param_Out__stPlayerAchievementInfos);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSAchievement::execGetUnlockAchievements)
	{
		P_GET_STRUCT_REF(FEOSUnlockAchievementInfo,Z_Param_Out__stUnlockAchievementInfo);
		P_GET_PROPERTY(FStrProperty,Z_Param__strAchievemtnID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetUnlockAchievements(Z_Param_Out__stUnlockAchievementInfo,Z_Param__strAchievemtnID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSAchievement::execRequestQueryAchievementInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestQueryAchievementInfo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSAchievement::execRequestQueryPlayerAchievement)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestQueryPlayerAchievement();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSAchievement::execRequestUnlock)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out__cAchievementIDs);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestUnlock(Z_Param_Out__cAchievementIDs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSAchievement::execSetAchievementApiVersion)
	{
		P_GET_STRUCT(FEOSAchievementAPIVersionSettings,Z_Param__stAPIVerSetting);
		P_FINISH;
		P_NATIVE_BEGIN;
		UEOSAchievement::SetAchievementApiVersion(Z_Param__stAPIVerSetting);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSAchievement::execSetupInternalCallback)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetupInternalCallback();
		P_NATIVE_END;
	}
	void UEOSAchievement::StaticRegisterNativesUEOSAchievement()
	{
		UClass* Class = UEOSAchievement::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAchievements", &UEOSAchievement::execGetAchievements },
			{ "GetPlayerAchievements", &UEOSAchievement::execGetPlayerAchievements },
			{ "GetUnlockAchievements", &UEOSAchievement::execGetUnlockAchievements },
			{ "RequestQueryAchievementInfo", &UEOSAchievement::execRequestQueryAchievementInfo },
			{ "RequestQueryPlayerAchievement", &UEOSAchievement::execRequestQueryPlayerAchievement },
			{ "RequestUnlock", &UEOSAchievement::execRequestUnlock },
			{ "SetAchievementApiVersion", &UEOSAchievement::execSetAchievementApiVersion },
			{ "SetupInternalCallback", &UEOSAchievement::execSetupInternalCallback },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEOSAchievement_GetAchievements_Statics
	{
		struct EOSAchievement_eventGetAchievements_Parms
		{
			TArray<FEOSAchievementInfo> _stAchievementInfos;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__stAchievementInfos_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__stAchievementInfos;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSAchievement_GetAchievements_Statics::NewProp__stAchievementInfos_Inner = { "_stAchievementInfos", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FEOSAchievementInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEOSAchievement_GetAchievements_Statics::NewProp__stAchievementInfos = { "_stAchievementInfos", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSAchievement_eventGetAchievements_Parms, _stAchievementInfos), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSAchievement_GetAchievements_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSAchievement_eventGetAchievements_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSAchievement_GetAchievements_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSAchievement_eventGetAchievements_Parms), &Z_Construct_UFunction_UEOSAchievement_GetAchievements_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSAchievement_GetAchievements_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSAchievement_GetAchievements_Statics::NewProp__stAchievementInfos_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSAchievement_GetAchievements_Statics::NewProp__stAchievementInfos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSAchievement_GetAchievements_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSAchievement_GetAchievements_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSAchievement.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSAchievement_GetAchievements_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSAchievement, nullptr, "GetAchievements", nullptr, nullptr, sizeof(EOSAchievement_eventGetAchievements_Parms), Z_Construct_UFunction_UEOSAchievement_GetAchievements_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAchievement_GetAchievements_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSAchievement_GetAchievements_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAchievement_GetAchievements_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSAchievement_GetAchievements()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSAchievement_GetAchievements_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSAchievement_GetPlayerAchievements_Statics
	{
		struct EOSAchievement_eventGetPlayerAchievements_Parms
		{
			TArray<FEOSPlayerAchievementInfo> _stPlayerAchievementInfos;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__stPlayerAchievementInfos_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__stPlayerAchievementInfos;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSAchievement_GetPlayerAchievements_Statics::NewProp__stPlayerAchievementInfos_Inner = { "_stPlayerAchievementInfos", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FEOSPlayerAchievementInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEOSAchievement_GetPlayerAchievements_Statics::NewProp__stPlayerAchievementInfos = { "_stPlayerAchievementInfos", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSAchievement_eventGetPlayerAchievements_Parms, _stPlayerAchievementInfos), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSAchievement_GetPlayerAchievements_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSAchievement_eventGetPlayerAchievements_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSAchievement_GetPlayerAchievements_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSAchievement_eventGetPlayerAchievements_Parms), &Z_Construct_UFunction_UEOSAchievement_GetPlayerAchievements_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSAchievement_GetPlayerAchievements_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSAchievement_GetPlayerAchievements_Statics::NewProp__stPlayerAchievementInfos_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSAchievement_GetPlayerAchievements_Statics::NewProp__stPlayerAchievementInfos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSAchievement_GetPlayerAchievements_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSAchievement_GetPlayerAchievements_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSAchievement.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSAchievement_GetPlayerAchievements_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSAchievement, nullptr, "GetPlayerAchievements", nullptr, nullptr, sizeof(EOSAchievement_eventGetPlayerAchievements_Parms), Z_Construct_UFunction_UEOSAchievement_GetPlayerAchievements_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAchievement_GetPlayerAchievements_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSAchievement_GetPlayerAchievements_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAchievement_GetPlayerAchievements_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSAchievement_GetPlayerAchievements()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSAchievement_GetPlayerAchievements_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSAchievement_GetUnlockAchievements_Statics
	{
		struct EOSAchievement_eventGetUnlockAchievements_Parms
		{
			FEOSUnlockAchievementInfo _stUnlockAchievementInfo;
			FString _strAchievemtnID;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__stUnlockAchievementInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strAchievemtnID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strAchievemtnID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSAchievement_GetUnlockAchievements_Statics::NewProp__stUnlockAchievementInfo = { "_stUnlockAchievementInfo", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSAchievement_eventGetUnlockAchievements_Parms, _stUnlockAchievementInfo), Z_Construct_UScriptStruct_FEOSUnlockAchievementInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSAchievement_GetUnlockAchievements_Statics::NewProp__strAchievemtnID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSAchievement_GetUnlockAchievements_Statics::NewProp__strAchievemtnID = { "_strAchievemtnID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSAchievement_eventGetUnlockAchievements_Parms, _strAchievemtnID), METADATA_PARAMS(Z_Construct_UFunction_UEOSAchievement_GetUnlockAchievements_Statics::NewProp__strAchievemtnID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAchievement_GetUnlockAchievements_Statics::NewProp__strAchievemtnID_MetaData)) };
	void Z_Construct_UFunction_UEOSAchievement_GetUnlockAchievements_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSAchievement_eventGetUnlockAchievements_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSAchievement_GetUnlockAchievements_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSAchievement_eventGetUnlockAchievements_Parms), &Z_Construct_UFunction_UEOSAchievement_GetUnlockAchievements_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSAchievement_GetUnlockAchievements_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSAchievement_GetUnlockAchievements_Statics::NewProp__stUnlockAchievementInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSAchievement_GetUnlockAchievements_Statics::NewProp__strAchievemtnID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSAchievement_GetUnlockAchievements_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSAchievement_GetUnlockAchievements_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSAchievement.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSAchievement_GetUnlockAchievements_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSAchievement, nullptr, "GetUnlockAchievements", nullptr, nullptr, sizeof(EOSAchievement_eventGetUnlockAchievements_Parms), Z_Construct_UFunction_UEOSAchievement_GetUnlockAchievements_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAchievement_GetUnlockAchievements_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSAchievement_GetUnlockAchievements_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAchievement_GetUnlockAchievements_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSAchievement_GetUnlockAchievements()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSAchievement_GetUnlockAchievements_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSAchievement_RequestQueryAchievementInfo_Statics
	{
		struct EOSAchievement_eventRequestQueryAchievementInfo_Parms
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
	void Z_Construct_UFunction_UEOSAchievement_RequestQueryAchievementInfo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSAchievement_eventRequestQueryAchievementInfo_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSAchievement_RequestQueryAchievementInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSAchievement_eventRequestQueryAchievementInfo_Parms), &Z_Construct_UFunction_UEOSAchievement_RequestQueryAchievementInfo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSAchievement_RequestQueryAchievementInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSAchievement_RequestQueryAchievementInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSAchievement_RequestQueryAchievementInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSAchievement.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSAchievement_RequestQueryAchievementInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSAchievement, nullptr, "RequestQueryAchievementInfo", nullptr, nullptr, sizeof(EOSAchievement_eventRequestQueryAchievementInfo_Parms), Z_Construct_UFunction_UEOSAchievement_RequestQueryAchievementInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAchievement_RequestQueryAchievementInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSAchievement_RequestQueryAchievementInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAchievement_RequestQueryAchievementInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSAchievement_RequestQueryAchievementInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSAchievement_RequestQueryAchievementInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSAchievement_RequestQueryPlayerAchievement_Statics
	{
		struct EOSAchievement_eventRequestQueryPlayerAchievement_Parms
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
	void Z_Construct_UFunction_UEOSAchievement_RequestQueryPlayerAchievement_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSAchievement_eventRequestQueryPlayerAchievement_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSAchievement_RequestQueryPlayerAchievement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSAchievement_eventRequestQueryPlayerAchievement_Parms), &Z_Construct_UFunction_UEOSAchievement_RequestQueryPlayerAchievement_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSAchievement_RequestQueryPlayerAchievement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSAchievement_RequestQueryPlayerAchievement_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSAchievement_RequestQueryPlayerAchievement_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSAchievement.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSAchievement_RequestQueryPlayerAchievement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSAchievement, nullptr, "RequestQueryPlayerAchievement", nullptr, nullptr, sizeof(EOSAchievement_eventRequestQueryPlayerAchievement_Parms), Z_Construct_UFunction_UEOSAchievement_RequestQueryPlayerAchievement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAchievement_RequestQueryPlayerAchievement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSAchievement_RequestQueryPlayerAchievement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAchievement_RequestQueryPlayerAchievement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSAchievement_RequestQueryPlayerAchievement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSAchievement_RequestQueryPlayerAchievement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSAchievement_RequestUnlock_Statics
	{
		struct EOSAchievement_eventRequestUnlock_Parms
		{
			TArray<FString> _cAchievementIDs;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__cAchievementIDs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__cAchievementIDs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__cAchievementIDs;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSAchievement_RequestUnlock_Statics::NewProp__cAchievementIDs_Inner = { "_cAchievementIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSAchievement_RequestUnlock_Statics::NewProp__cAchievementIDs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEOSAchievement_RequestUnlock_Statics::NewProp__cAchievementIDs = { "_cAchievementIDs", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSAchievement_eventRequestUnlock_Parms, _cAchievementIDs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UEOSAchievement_RequestUnlock_Statics::NewProp__cAchievementIDs_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAchievement_RequestUnlock_Statics::NewProp__cAchievementIDs_MetaData)) };
	void Z_Construct_UFunction_UEOSAchievement_RequestUnlock_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSAchievement_eventRequestUnlock_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSAchievement_RequestUnlock_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSAchievement_eventRequestUnlock_Parms), &Z_Construct_UFunction_UEOSAchievement_RequestUnlock_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSAchievement_RequestUnlock_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSAchievement_RequestUnlock_Statics::NewProp__cAchievementIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSAchievement_RequestUnlock_Statics::NewProp__cAchievementIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSAchievement_RequestUnlock_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSAchievement_RequestUnlock_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSAchievement.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSAchievement_RequestUnlock_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSAchievement, nullptr, "RequestUnlock", nullptr, nullptr, sizeof(EOSAchievement_eventRequestUnlock_Parms), Z_Construct_UFunction_UEOSAchievement_RequestUnlock_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAchievement_RequestUnlock_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSAchievement_RequestUnlock_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAchievement_RequestUnlock_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSAchievement_RequestUnlock()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSAchievement_RequestUnlock_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSAchievement_SetAchievementApiVersion_Statics
	{
		struct EOSAchievement_eventSetAchievementApiVersion_Parms
		{
			FEOSAchievementAPIVersionSettings _stAPIVerSetting;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__stAPIVerSetting;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSAchievement_SetAchievementApiVersion_Statics::NewProp__stAPIVerSetting = { "_stAPIVerSetting", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSAchievement_eventSetAchievementApiVersion_Parms, _stAPIVerSetting), Z_Construct_UScriptStruct_FEOSAchievementAPIVersionSettings, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSAchievement_SetAchievementApiVersion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSAchievement_SetAchievementApiVersion_Statics::NewProp__stAPIVerSetting,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSAchievement_SetAchievementApiVersion_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSAchievement.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSAchievement_SetAchievementApiVersion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSAchievement, nullptr, "SetAchievementApiVersion", nullptr, nullptr, sizeof(EOSAchievement_eventSetAchievementApiVersion_Parms), Z_Construct_UFunction_UEOSAchievement_SetAchievementApiVersion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAchievement_SetAchievementApiVersion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSAchievement_SetAchievementApiVersion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAchievement_SetAchievementApiVersion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSAchievement_SetAchievementApiVersion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSAchievement_SetAchievementApiVersion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSAchievement_SetupInternalCallback_Statics
	{
		struct EOSAchievement_eventSetupInternalCallback_Parms
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
	void Z_Construct_UFunction_UEOSAchievement_SetupInternalCallback_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSAchievement_eventSetupInternalCallback_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSAchievement_SetupInternalCallback_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSAchievement_eventSetupInternalCallback_Parms), &Z_Construct_UFunction_UEOSAchievement_SetupInternalCallback_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSAchievement_SetupInternalCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSAchievement_SetupInternalCallback_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSAchievement_SetupInternalCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSAchievement.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSAchievement_SetupInternalCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSAchievement, nullptr, "SetupInternalCallback", nullptr, nullptr, sizeof(EOSAchievement_eventSetupInternalCallback_Parms), Z_Construct_UFunction_UEOSAchievement_SetupInternalCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAchievement_SetupInternalCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSAchievement_SetupInternalCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAchievement_SetupInternalCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSAchievement_SetupInternalCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSAchievement_SetupInternalCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEOSAchievement_NoRegister()
	{
		return UEOSAchievement::StaticClass();
	}
	struct Z_Construct_UClass_UEOSAchievement_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AchievementEventDispatcher_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_AchievementEventDispatcher;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerAchievementUnlockEventDispatcher_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_PlayerAchievementUnlockEventDispatcher;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEOSAchievement_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSStats,
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEOSAchievement_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEOSAchievement_GetAchievements, "GetAchievements" }, // 2189875681
		{ &Z_Construct_UFunction_UEOSAchievement_GetPlayerAchievements, "GetPlayerAchievements" }, // 3061966091
		{ &Z_Construct_UFunction_UEOSAchievement_GetUnlockAchievements, "GetUnlockAchievements" }, // 3903611181
		{ &Z_Construct_UFunction_UEOSAchievement_RequestQueryAchievementInfo, "RequestQueryAchievementInfo" }, // 88174718
		{ &Z_Construct_UFunction_UEOSAchievement_RequestQueryPlayerAchievement, "RequestQueryPlayerAchievement" }, // 492781374
		{ &Z_Construct_UFunction_UEOSAchievement_RequestUnlock, "RequestUnlock" }, // 1978279608
		{ &Z_Construct_UFunction_UEOSAchievement_SetAchievementApiVersion, "SetAchievementApiVersion" }, // 3530157618
		{ &Z_Construct_UFunction_UEOSAchievement_SetupInternalCallback, "SetupInternalCallback" }, // 3279668589
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSAchievement_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EOSAchievement.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EOSAchievement.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSAchievement_Statics::NewProp_AchievementEventDispatcher_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSAchievement" },
		{ "ModuleRelativePath", "Public/EOSAchievement.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEOSAchievement_Statics::NewProp_AchievementEventDispatcher = { "AchievementEventDispatcher", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSAchievement, AchievementEventDispatcher), Z_Construct_UDelegateFunction_yEOSSDK_EOSAchievementEventDispatcher__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEOSAchievement_Statics::NewProp_AchievementEventDispatcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSAchievement_Statics::NewProp_AchievementEventDispatcher_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSAchievement_Statics::NewProp_PlayerAchievementUnlockEventDispatcher_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSAchievement" },
		{ "ModuleRelativePath", "Public/EOSAchievement.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEOSAchievement_Statics::NewProp_PlayerAchievementUnlockEventDispatcher = { "PlayerAchievementUnlockEventDispatcher", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSAchievement, PlayerAchievementUnlockEventDispatcher), Z_Construct_UDelegateFunction_yEOSSDK_EOSPlayerAchievementUnlockEventDispatcher__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEOSAchievement_Statics::NewProp_PlayerAchievementUnlockEventDispatcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSAchievement_Statics::NewProp_PlayerAchievementUnlockEventDispatcher_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEOSAchievement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSAchievement_Statics::NewProp_AchievementEventDispatcher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSAchievement_Statics::NewProp_PlayerAchievementUnlockEventDispatcher,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSAchievement_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSAchievement>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSAchievement_Statics::ClassParams = {
		&UEOSAchievement::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEOSAchievement_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEOSAchievement_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEOSAchievement_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSAchievement_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSAchievement()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSAchievement_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSAchievement, 3025127779);
	template<> YEOSSDK_API UClass* StaticClass<UEOSAchievement>()
	{
		return UEOSAchievement::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSAchievement(Z_Construct_UClass_UEOSAchievement, &UEOSAchievement::StaticClass, TEXT("/Script/yEOSSDK"), TEXT("UEOSAchievement"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSAchievement);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
