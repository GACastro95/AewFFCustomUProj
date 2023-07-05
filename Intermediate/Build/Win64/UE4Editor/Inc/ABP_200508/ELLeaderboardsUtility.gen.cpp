// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELLeaderboardsUtility.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELLeaderboardsUtility() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELLeaderboardsUtility_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELLeaderboardsUtility();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELLeaderboardUserData();
	ABP_200508_API UClass* Z_Construct_UClass_UELLeaderboards_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	ABP_200508_API UClass* Z_Construct_UClass_UELLeaderboardUserSeasonStats_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELLeaderboardUserStats_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UELLeaderboardsUtility::execFindLeaderboardUserData)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_UserId);
		P_GET_PROPERTY(FStrProperty,Z_Param_DisplayName);
		P_GET_PROPERTY(FIntProperty,Z_Param_Season);
		P_GET_UBOOL(Z_Param_bPlatformOnly);
		P_GET_STRUCT_REF(FELLeaderboardUserData,Z_Param_Out_UserData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UELLeaderboardsUtility::FindLeaderboardUserData(Z_Param_WorldContextObject,Z_Param_UserId,Z_Param_DisplayName,Z_Param_Season,Z_Param_bPlatformOnly,Z_Param_Out_UserData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELLeaderboardsUtility::execFindLeaderboardUserDataByLeaderboadName)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_UserId);
		P_GET_PROPERTY(FStrProperty,Z_Param_DisplayName);
		P_GET_PROPERTY(FStrProperty,Z_Param_LeaderboardName);
		P_GET_PROPERTY(FIntProperty,Z_Param_Season);
		P_GET_UBOOL(Z_Param_bPlatformOnly);
		P_GET_STRUCT_REF(FELLeaderboardUserData,Z_Param_Out_UserData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UELLeaderboardsUtility::FindLeaderboardUserDataByLeaderboadName(Z_Param_WorldContextObject,Z_Param_UserId,Z_Param_DisplayName,Z_Param_LeaderboardName,Z_Param_Season,Z_Param_bPlatformOnly,Z_Param_Out_UserData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELLeaderboardsUtility::execFindMyLeaderboardRank)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UELLeaderboardsUtility::FindMyLeaderboardRank(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELLeaderboardsUtility::execFindMyLeaderboardUserData)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_Season);
		P_GET_UBOOL(Z_Param_bPlatformOnly);
		P_GET_STRUCT_REF(FELLeaderboardUserData,Z_Param_Out_UserData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UELLeaderboardsUtility::FindMyLeaderboardUserData(Z_Param_WorldContextObject,Z_Param_Season,Z_Param_bPlatformOnly,Z_Param_Out_UserData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELLeaderboardsUtility::execFindMyLeaderboardUserDataByLeaderboadName)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_LeaderboardName);
		P_GET_PROPERTY(FIntProperty,Z_Param_Season);
		P_GET_UBOOL(Z_Param_bPlatformOnly);
		P_GET_STRUCT_REF(FELLeaderboardUserData,Z_Param_Out_UserData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UELLeaderboardsUtility::FindMyLeaderboardUserDataByLeaderboadName(Z_Param_WorldContextObject,Z_Param_LeaderboardName,Z_Param_Season,Z_Param_bPlatformOnly,Z_Param_Out_UserData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELLeaderboardsUtility::execFindMyUserData)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_TARRAY_REF(FELLeaderboardUserData,Z_Param_Out_UserDataArray);
		P_GET_STRUCT_REF(FELLeaderboardUserData,Z_Param_Out_UserData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UELLeaderboardsUtility::FindMyUserData(Z_Param_WorldContextObject,Z_Param_Out_UserDataArray,Z_Param_Out_UserData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELLeaderboardsUtility::execFindMyUserScoreRank)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UELLeaderboardsUtility::FindMyUserScoreRank(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELLeaderboardsUtility::execFindUserData)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_TARRAY_REF(FELLeaderboardUserData,Z_Param_Out_UserDataArray);
		P_GET_PROPERTY(FStrProperty,Z_Param_UserId);
		P_GET_STRUCT_REF(FELLeaderboardUserData,Z_Param_Out_UserData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UELLeaderboardsUtility::FindUserData(Z_Param_WorldContextObject,Z_Param_Out_UserDataArray,Z_Param_UserId,Z_Param_Out_UserData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELLeaderboardsUtility::execFindUserLeaderboardRank)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_UserId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UELLeaderboardsUtility::FindUserLeaderboardRank(Z_Param_WorldContextObject,Z_Param_UserId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELLeaderboardsUtility::execFindUserScoreRank)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_UserId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UELLeaderboardsUtility::FindUserScoreRank(Z_Param_WorldContextObject,Z_Param_UserId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELLeaderboardsUtility::execGetELLeaderboards)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UELLeaderboards**)Z_Param__Result=UELLeaderboardsUtility::GetELLeaderboards(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELLeaderboardsUtility::execGetLeaderboardProductUserIds)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_TARRAY_REF(FELLeaderboardUserData,Z_Param_Out_UserDataArray);
		P_GET_TARRAY_REF(FString,Z_Param_Out_ProductUserIDs);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELLeaderboardsUtility::GetLeaderboardProductUserIds(Z_Param_WorldContextObject,Z_Param_Out_UserDataArray,Z_Param_Out_ProductUserIDs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELLeaderboardsUtility::execGetLeaderboardQueryDateTime)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_LeaderboardName);
		P_GET_PROPERTY(FIntProperty,Z_Param_Season);
		P_GET_UBOOL(Z_Param_bPlatformOnly);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FDateTime*)Z_Param__Result=UELLeaderboardsUtility::GetLeaderboardQueryDateTime(Z_Param_WorldContextObject,Z_Param_LeaderboardName,Z_Param_Season,Z_Param_bPlatformOnly);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELLeaderboardsUtility::execGetLeaderboardUserSeasonStats)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_UserId);
		P_GET_PROPERTY(FIntProperty,Z_Param_Season);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UELLeaderboardUserSeasonStats**)Z_Param__Result=UELLeaderboardsUtility::GetLeaderboardUserSeasonStats(Z_Param_WorldContextObject,Z_Param_UserId,Z_Param_Season);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELLeaderboardsUtility::execGetLeaderboardUserStats)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_UserId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UELLeaderboardUserStats**)Z_Param__Result=UELLeaderboardsUtility::GetLeaderboardUserStats(Z_Param_WorldContextObject,Z_Param_UserId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELLeaderboardsUtility::execGetLeaderboardUserStatsQueryDateTime)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_ProductUserID);
		P_GET_PROPERTY(FIntProperty,Z_Param_Season);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FDateTime*)Z_Param__Result=UELLeaderboardsUtility::GetLeaderboardUserStatsQueryDateTime(Z_Param_WorldContextObject,Z_Param_ProductUserID,Z_Param_Season);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELLeaderboardsUtility::execGetSubLeaderboardUserData)
	{
		P_GET_TARRAY_REF(FELLeaderboardUserData,Z_Param_Out_InUserDataArray);
		P_GET_PROPERTY(FIntProperty,Z_Param_StartIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_EndIndex);
		P_GET_TARRAY_REF(FELLeaderboardUserData,Z_Param_Out_OutUserDataArray);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELLeaderboardsUtility::GetSubLeaderboardUserData(Z_Param_Out_InUserDataArray,Z_Param_StartIndex,Z_Param_EndIndex,Z_Param_Out_OutUserDataArray);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELLeaderboardsUtility::execGetUserScoreQueryDateTime)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_LeaderboardName);
		P_GET_PROPERTY(FIntProperty,Z_Param_Season);
		P_GET_UBOOL(Z_Param_bPlatformOnly);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FDateTime*)Z_Param__Result=UELLeaderboardsUtility::GetUserScoreQueryDateTime(Z_Param_WorldContextObject,Z_Param_LeaderboardName,Z_Param_Season,Z_Param_bPlatformOnly);
		P_NATIVE_END;
	}
	void UELLeaderboardsUtility::StaticRegisterNativesUELLeaderboardsUtility()
	{
		UClass* Class = UELLeaderboardsUtility::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FindLeaderboardUserData", &UELLeaderboardsUtility::execFindLeaderboardUserData },
			{ "FindLeaderboardUserDataByLeaderboadName", &UELLeaderboardsUtility::execFindLeaderboardUserDataByLeaderboadName },
			{ "FindMyLeaderboardRank", &UELLeaderboardsUtility::execFindMyLeaderboardRank },
			{ "FindMyLeaderboardUserData", &UELLeaderboardsUtility::execFindMyLeaderboardUserData },
			{ "FindMyLeaderboardUserDataByLeaderboadName", &UELLeaderboardsUtility::execFindMyLeaderboardUserDataByLeaderboadName },
			{ "FindMyUserData", &UELLeaderboardsUtility::execFindMyUserData },
			{ "FindMyUserScoreRank", &UELLeaderboardsUtility::execFindMyUserScoreRank },
			{ "FindUserData", &UELLeaderboardsUtility::execFindUserData },
			{ "FindUserLeaderboardRank", &UELLeaderboardsUtility::execFindUserLeaderboardRank },
			{ "FindUserScoreRank", &UELLeaderboardsUtility::execFindUserScoreRank },
			{ "GetELLeaderboards", &UELLeaderboardsUtility::execGetELLeaderboards },
			{ "GetLeaderboardProductUserIds", &UELLeaderboardsUtility::execGetLeaderboardProductUserIds },
			{ "GetLeaderboardQueryDateTime", &UELLeaderboardsUtility::execGetLeaderboardQueryDateTime },
			{ "GetLeaderboardUserSeasonStats", &UELLeaderboardsUtility::execGetLeaderboardUserSeasonStats },
			{ "GetLeaderboardUserStats", &UELLeaderboardsUtility::execGetLeaderboardUserStats },
			{ "GetLeaderboardUserStatsQueryDateTime", &UELLeaderboardsUtility::execGetLeaderboardUserStatsQueryDateTime },
			{ "GetSubLeaderboardUserData", &UELLeaderboardsUtility::execGetSubLeaderboardUserData },
			{ "GetUserScoreQueryDateTime", &UELLeaderboardsUtility::execGetUserScoreQueryDateTime },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELLeaderboardsUtility_FindLeaderboardUserData_Statics
	{
		struct ELLeaderboardsUtility_eventFindLeaderboardUserData_Parms
		{
			const UObject* WorldContextObject;
			FString UserId;
			FString DisplayName;
			int32 Season;
			bool bPlatformOnly;
			FELLeaderboardUserData UserData;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DisplayName;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Season;
		static void NewProp_bPlatformOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPlatformOnly;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UserData;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELLeaderboardsUtility_FindLeaderboardUserData_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELLeaderboardsUtility_FindLeaderboardUserData_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLeaderboardsUtility_eventFindLeaderboardUserData_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELLeaderboardsUtility_FindLeaderboardUserData_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboardsUtility_FindLeaderboardUserData_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELLeaderboardsUtility_FindLeaderboardUserData_Statics::NewProp_UserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELLeaderboardsUtility_FindLeaderboardUserData_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLeaderboardsUtility_eventFindLeaderboardUserData_Parms, UserId), METADATA_PARAMS(Z_Construct_UFunction_UELLeaderboardsUtility_FindLeaderboardUserData_Statics::NewProp_UserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboardsUtility_FindLeaderboardUserData_Statics::NewProp_UserId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELLeaderboardsUtility_FindLeaderboardUserData_Statics::NewProp_DisplayName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELLeaderboardsUtility_FindLeaderboardUserData_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLeaderboardsUtility_eventFindLeaderboardUserData_Parms, DisplayName), METADATA_PARAMS(Z_Construct_UFunction_UELLeaderboardsUtility_FindLeaderboardUserData_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboardsUtility_FindLeaderboardUserData_Statics::NewProp_DisplayName_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELLeaderboardsUtility_FindLeaderboardUserData_Statics::NewProp_Season = { "Season", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLeaderboardsUtility_eventFindLeaderboardUserData_Parms, Season), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELLeaderboardsUtility_FindLeaderboardUserData_Statics::NewProp_bPlatformOnly_SetBit(void* Obj)
	{
		((ELLeaderboardsUtility_eventFindLeaderboardUserData_Parms*)Obj)->bPlatformOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELLeaderboardsUtility_FindLeaderboardUserData_Statics::NewProp_bPlatformOnly = { "bPlatformOnly", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELLeaderboardsUtility_eventFindLeaderboardUserData_Parms), &Z_Construct_UFunction_UELLeaderboardsUtility_FindLeaderboardUserData_Statics::NewProp_bPlatformOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELLeaderboardsUtility_FindLeaderboardUserData_Statics::NewProp_UserData = { "UserData", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLeaderboardsUtility_eventFindLeaderboardUserData_Parms, UserData), Z_Construct_UScriptStruct_FELLeaderboardUserData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELLeaderboardsUtility_FindLeaderboardUserData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLeaderboardsUtility_eventFindLeaderboardUserData_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELLeaderboardsUtility_FindLeaderboardUserData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboardsUtility_FindLeaderboardUserData_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboardsUtility_FindLeaderboardUserData_Statics::NewProp_UserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboardsUtility_FindLeaderboardUserData_Statics::NewProp_DisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboardsUtility_FindLeaderboardUserData_Statics::NewProp_Season,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboardsUtility_FindLeaderboardUserData_Statics::NewProp_bPlatformOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboardsUtility_FindLeaderboardUserData_Statics::NewProp_UserData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboardsUtility_FindLeaderboardUserData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELLeaderboardsUtility_FindLeaderboardUserData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELLeaderboardsUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELLeaderboardsUtility_FindLeaderboardUserData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELLeaderboardsUtility, nullptr, "FindLeaderboardUserData", nullptr, nullptr, sizeof(ELLeaderboardsUtility_eventFindLeaderboardUserData_Parms), Z_Construct_UFunction_UELLeaderboardsUtility_FindLeaderboardUserData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboardsUtility_FindLeaderboardUserData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELLeaderboardsUtility_FindLeaderboardUserData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboardsUtility_FindLeaderboardUserData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELLeaderboardsUtility_FindLeaderboardUserData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELLeaderboardsUtility_FindLeaderboardUserData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELLeaderboardsUtility_FindLeaderboardUserDataByLeaderboadName_Statics
	{
		struct ELLeaderboardsUtility_eventFindLeaderboardUserDataByLeaderboadName_Parms
		{
			const UObject* WorldContextObject;
			FString UserId;
			FString DisplayName;
			FString LeaderboardName;
			int32 Season;
			bool bPlatformOnly;
			FELLeaderboardUserData UserData;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DisplayName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeaderboardName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LeaderboardName;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Season;
		static void NewProp_bPlatformOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPlatformOnly;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UserData;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELLeaderboardsUtility_FindLeaderboardUserDataByLeaderboadName_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELLeaderboardsUtility_FindLeaderboardUserDataByLeaderboadName_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLeaderboardsUtility_eventFindLeaderboardUserDataByLeaderboadName_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELLeaderboardsUtility_FindLeaderboardUserDataByLeaderboadName_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboardsUtility_FindLeaderboardUserDataByLeaderboadName_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELLeaderboardsUtility_FindLeaderboardUserDataByLeaderboadName_Statics::NewProp_UserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELLeaderboardsUtility_FindLeaderboardUserDataByLeaderboadName_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLeaderboardsUtility_eventFindLeaderboardUserDataByLeaderboadName_Parms, UserId), METADATA_PARAMS(Z_Construct_UFunction_UELLeaderboardsUtility_FindLeaderboardUserDataByLeaderboadName_Statics::NewProp_UserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboardsUtility_FindLeaderboardUserDataByLeaderboadName_Statics::NewProp_UserId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELLeaderboardsUtility_FindLeaderboardUserDataByLeaderboadName_Statics::NewProp_DisplayName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELLeaderboardsUtility_FindLeaderboardUserDataByLeaderboadName_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLeaderboardsUtility_eventFindLeaderboardUserDataByLeaderboadName_Parms, DisplayName), METADATA_PARAMS(Z_Construct_UFunction_UELLeaderboardsUtility_FindLeaderboardUserDataByLeaderboadName_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboardsUtility_FindLeaderboardUserDataByLeaderboadName_Statics::NewProp_DisplayName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELLeaderboardsUtility_FindLeaderboardUserDataByLeaderboadName_Statics::NewProp_LeaderboardName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELLeaderboardsUtility_FindLeaderboardUserDataByLeaderboadName_Statics::NewProp_LeaderboardName = { "LeaderboardName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLeaderboardsUtility_eventFindLeaderboardUserDataByLeaderboadName_Parms, LeaderboardName), METADATA_PARAMS(Z_Construct_UFunction_UELLeaderboardsUtility_FindLeaderboardUserDataByLeaderboadName_Statics::NewProp_LeaderboardName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboardsUtility_FindLeaderboardUserDataByLeaderboadName_Statics::NewProp_LeaderboardName_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELLeaderboardsUtility_FindLeaderboardUserDataByLeaderboadName_Statics::NewProp_Season = { "Season", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLeaderboardsUtility_eventFindLeaderboardUserDataByLeaderboadName_Parms, Season), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELLeaderboardsUtility_FindLeaderboardUserDataByLeaderboadName_Statics::NewProp_bPlatformOnly_SetBit(void* Obj)
	{
		((ELLeaderboardsUtility_eventFindLeaderboardUserDataByLeaderboadName_Parms*)Obj)->bPlatformOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELLeaderboardsUtility_FindLeaderboardUserDataByLeaderboadName_Statics::NewProp_bPlatformOnly = { "bPlatformOnly", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELLeaderboardsUtility_eventFindLeaderboardUserDataByLeaderboadName_Parms), &Z_Construct_UFunction_UELLeaderboardsUtility_FindLeaderboardUserDataByLeaderboadName_Statics::NewProp_bPlatformOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELLeaderboardsUtility_FindLeaderboardUserDataByLeaderboadName_Statics::NewProp_UserData = { "UserData", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLeaderboardsUtility_eventFindLeaderboardUserDataByLeaderboadName_Parms, UserData), Z_Construct_UScriptStruct_FELLeaderboardUserData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELLeaderboardsUtility_FindLeaderboardUserDataByLeaderboadName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLeaderboardsUtility_eventFindLeaderboardUserDataByLeaderboadName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELLeaderboardsUtility_FindLeaderboardUserDataByLeaderboadName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboardsUtility_FindLeaderboardUserDataByLeaderboadName_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboardsUtility_FindLeaderboardUserDataByLeaderboadName_Statics::NewProp_UserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboardsUtility_FindLeaderboardUserDataByLeaderboadName_Statics::NewProp_DisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboardsUtility_FindLeaderboardUserDataByLeaderboadName_Statics::NewProp_LeaderboardName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboardsUtility_FindLeaderboardUserDataByLeaderboadName_Statics::NewProp_Season,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboardsUtility_FindLeaderboardUserDataByLeaderboadName_Statics::NewProp_bPlatformOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboardsUtility_FindLeaderboardUserDataByLeaderboadName_Statics::NewProp_UserData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboardsUtility_FindLeaderboardUserDataByLeaderboadName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELLeaderboardsUtility_FindLeaderboardUserDataByLeaderboadName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELLeaderboardsUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELLeaderboardsUtility_FindLeaderboardUserDataByLeaderboadName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELLeaderboardsUtility, nullptr, "FindLeaderboardUserDataByLeaderboadName", nullptr, nullptr, sizeof(ELLeaderboardsUtility_eventFindLeaderboardUserDataByLeaderboadName_Parms), Z_Construct_UFunction_UELLeaderboardsUtility_FindLeaderboardUserDataByLeaderboadName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboardsUtility_FindLeaderboardUserDataByLeaderboadName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELLeaderboardsUtility_FindLeaderboardUserDataByLeaderboadName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboardsUtility_FindLeaderboardUserDataByLeaderboadName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELLeaderboardsUtility_FindLeaderboardUserDataByLeaderboadName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELLeaderboardsUtility_FindLeaderboardUserDataByLeaderboadName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELLeaderboardsUtility_FindMyLeaderboardRank_Statics
	{
		struct ELLeaderboardsUtility_eventFindMyLeaderboardRank_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELLeaderboardsUtility_FindMyLeaderboardRank_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELLeaderboardsUtility_FindMyLeaderboardRank_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLeaderboardsUtility_eventFindMyLeaderboardRank_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELLeaderboardsUtility_FindMyLeaderboardRank_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboardsUtility_FindMyLeaderboardRank_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELLeaderboardsUtility_FindMyLeaderboardRank_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLeaderboardsUtility_eventFindMyLeaderboardRank_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELLeaderboardsUtility_FindMyLeaderboardRank_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboardsUtility_FindMyLeaderboardRank_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboardsUtility_FindMyLeaderboardRank_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELLeaderboardsUtility_FindMyLeaderboardRank_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELLeaderboardsUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELLeaderboardsUtility_FindMyLeaderboardRank_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELLeaderboardsUtility, nullptr, "FindMyLeaderboardRank", nullptr, nullptr, sizeof(ELLeaderboardsUtility_eventFindMyLeaderboardRank_Parms), Z_Construct_UFunction_UELLeaderboardsUtility_FindMyLeaderboardRank_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboardsUtility_FindMyLeaderboardRank_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELLeaderboardsUtility_FindMyLeaderboardRank_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboardsUtility_FindMyLeaderboardRank_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELLeaderboardsUtility_FindMyLeaderboardRank()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELLeaderboardsUtility_FindMyLeaderboardRank_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELLeaderboardsUtility_FindMyLeaderboardUserData_Statics
	{
		struct ELLeaderboardsUtility_eventFindMyLeaderboardUserData_Parms
		{
			const UObject* WorldContextObject;
			int32 Season;
			bool bPlatformOnly;
			FELLeaderboardUserData UserData;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Season;
		static void NewProp_bPlatformOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPlatformOnly;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UserData;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELLeaderboardsUtility_FindMyLeaderboardUserData_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELLeaderboardsUtility_FindMyLeaderboardUserData_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLeaderboardsUtility_eventFindMyLeaderboardUserData_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELLeaderboardsUtility_FindMyLeaderboardUserData_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboardsUtility_FindMyLeaderboardUserData_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELLeaderboardsUtility_FindMyLeaderboardUserData_Statics::NewProp_Season = { "Season", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLeaderboardsUtility_eventFindMyLeaderboardUserData_Parms, Season), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELLeaderboardsUtility_FindMyLeaderboardUserData_Statics::NewProp_bPlatformOnly_SetBit(void* Obj)
	{
		((ELLeaderboardsUtility_eventFindMyLeaderboardUserData_Parms*)Obj)->bPlatformOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELLeaderboardsUtility_FindMyLeaderboardUserData_Statics::NewProp_bPlatformOnly = { "bPlatformOnly", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELLeaderboardsUtility_eventFindMyLeaderboardUserData_Parms), &Z_Construct_UFunction_UELLeaderboardsUtility_FindMyLeaderboardUserData_Statics::NewProp_bPlatformOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELLeaderboardsUtility_FindMyLeaderboardUserData_Statics::NewProp_UserData = { "UserData", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLeaderboardsUtility_eventFindMyLeaderboardUserData_Parms, UserData), Z_Construct_UScriptStruct_FELLeaderboardUserData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELLeaderboardsUtility_FindMyLeaderboardUserData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLeaderboardsUtility_eventFindMyLeaderboardUserData_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELLeaderboardsUtility_FindMyLeaderboardUserData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboardsUtility_FindMyLeaderboardUserData_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboardsUtility_FindMyLeaderboardUserData_Statics::NewProp_Season,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboardsUtility_FindMyLeaderboardUserData_Statics::NewProp_bPlatformOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboardsUtility_FindMyLeaderboardUserData_Statics::NewProp_UserData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboardsUtility_FindMyLeaderboardUserData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELLeaderboardsUtility_FindMyLeaderboardUserData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELLeaderboardsUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELLeaderboardsUtility_FindMyLeaderboardUserData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELLeaderboardsUtility, nullptr, "FindMyLeaderboardUserData", nullptr, nullptr, sizeof(ELLeaderboardsUtility_eventFindMyLeaderboardUserData_Parms), Z_Construct_UFunction_UELLeaderboardsUtility_FindMyLeaderboardUserData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboardsUtility_FindMyLeaderboardUserData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELLeaderboardsUtility_FindMyLeaderboardUserData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboardsUtility_FindMyLeaderboardUserData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELLeaderboardsUtility_FindMyLeaderboardUserData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELLeaderboardsUtility_FindMyLeaderboardUserData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELLeaderboardsUtility_FindMyLeaderboardUserDataByLeaderboadName_Statics
	{
		struct ELLeaderboardsUtility_eventFindMyLeaderboardUserDataByLeaderboadName_Parms
		{
			const UObject* WorldContextObject;
			FString LeaderboardName;
			int32 Season;
			bool bPlatformOnly;
			FELLeaderboardUserData UserData;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeaderboardName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LeaderboardName;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Season;
		static void NewProp_bPlatformOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPlatformOnly;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UserData;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELLeaderboardsUtility_FindMyLeaderboardUserDataByLeaderboadName_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELLeaderboardsUtility_FindMyLeaderboardUserDataByLeaderboadName_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLeaderboardsUtility_eventFindMyLeaderboardUserDataByLeaderboadName_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELLeaderboardsUtility_FindMyLeaderboardUserDataByLeaderboadName_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboardsUtility_FindMyLeaderboardUserDataByLeaderboadName_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELLeaderboardsUtility_FindMyLeaderboardUserDataByLeaderboadName_Statics::NewProp_LeaderboardName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELLeaderboardsUtility_FindMyLeaderboardUserDataByLeaderboadName_Statics::NewProp_LeaderboardName = { "LeaderboardName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLeaderboardsUtility_eventFindMyLeaderboardUserDataByLeaderboadName_Parms, LeaderboardName), METADATA_PARAMS(Z_Construct_UFunction_UELLeaderboardsUtility_FindMyLeaderboardUserDataByLeaderboadName_Statics::NewProp_LeaderboardName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboardsUtility_FindMyLeaderboardUserDataByLeaderboadName_Statics::NewProp_LeaderboardName_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELLeaderboardsUtility_FindMyLeaderboardUserDataByLeaderboadName_Statics::NewProp_Season = { "Season", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLeaderboardsUtility_eventFindMyLeaderboardUserDataByLeaderboadName_Parms, Season), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELLeaderboardsUtility_FindMyLeaderboardUserDataByLeaderboadName_Statics::NewProp_bPlatformOnly_SetBit(void* Obj)
	{
		((ELLeaderboardsUtility_eventFindMyLeaderboardUserDataByLeaderboadName_Parms*)Obj)->bPlatformOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELLeaderboardsUtility_FindMyLeaderboardUserDataByLeaderboadName_Statics::NewProp_bPlatformOnly = { "bPlatformOnly", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELLeaderboardsUtility_eventFindMyLeaderboardUserDataByLeaderboadName_Parms), &Z_Construct_UFunction_UELLeaderboardsUtility_FindMyLeaderboardUserDataByLeaderboadName_Statics::NewProp_bPlatformOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELLeaderboardsUtility_FindMyLeaderboardUserDataByLeaderboadName_Statics::NewProp_UserData = { "UserData", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLeaderboardsUtility_eventFindMyLeaderboardUserDataByLeaderboadName_Parms, UserData), Z_Construct_UScriptStruct_FELLeaderboardUserData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELLeaderboardsUtility_FindMyLeaderboardUserDataByLeaderboadName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLeaderboardsUtility_eventFindMyLeaderboardUserDataByLeaderboadName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELLeaderboardsUtility_FindMyLeaderboardUserDataByLeaderboadName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboardsUtility_FindMyLeaderboardUserDataByLeaderboadName_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboardsUtility_FindMyLeaderboardUserDataByLeaderboadName_Statics::NewProp_LeaderboardName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboardsUtility_FindMyLeaderboardUserDataByLeaderboadName_Statics::NewProp_Season,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboardsUtility_FindMyLeaderboardUserDataByLeaderboadName_Statics::NewProp_bPlatformOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboardsUtility_FindMyLeaderboardUserDataByLeaderboadName_Statics::NewProp_UserData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboardsUtility_FindMyLeaderboardUserDataByLeaderboadName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELLeaderboardsUtility_FindMyLeaderboardUserDataByLeaderboadName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELLeaderboardsUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELLeaderboardsUtility_FindMyLeaderboardUserDataByLeaderboadName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELLeaderboardsUtility, nullptr, "FindMyLeaderboardUserDataByLeaderboadName", nullptr, nullptr, sizeof(ELLeaderboardsUtility_eventFindMyLeaderboardUserDataByLeaderboadName_Parms), Z_Construct_UFunction_UELLeaderboardsUtility_FindMyLeaderboardUserDataByLeaderboadName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboardsUtility_FindMyLeaderboardUserDataByLeaderboadName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELLeaderboardsUtility_FindMyLeaderboardUserDataByLeaderboadName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboardsUtility_FindMyLeaderboardUserDataByLeaderboadName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELLeaderboardsUtility_FindMyLeaderboardUserDataByLeaderboadName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELLeaderboardsUtility_FindMyLeaderboardUserDataByLeaderboadName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELLeaderboardsUtility_FindMyUserData_Statics
	{
		struct ELLeaderboardsUtility_eventFindMyUserData_Parms
		{
			const UObject* WorldContextObject;
			TArray<FELLeaderboardUserData> UserDataArray;
			FELLeaderboardUserData UserData;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UserDataArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserDataArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UserDataArray;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UserData;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELLeaderboardsUtility_FindMyUserData_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELLeaderboardsUtility_FindMyUserData_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLeaderboardsUtility_eventFindMyUserData_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELLeaderboardsUtility_FindMyUserData_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboardsUtility_FindMyUserData_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELLeaderboardsUtility_FindMyUserData_Statics::NewProp_UserDataArray_Inner = { "UserDataArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FELLeaderboardUserData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELLeaderboardsUtility_FindMyUserData_Statics::NewProp_UserDataArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELLeaderboardsUtility_FindMyUserData_Statics::NewProp_UserDataArray = { "UserDataArray", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLeaderboardsUtility_eventFindMyUserData_Parms, UserDataArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UELLeaderboardsUtility_FindMyUserData_Statics::NewProp_UserDataArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboardsUtility_FindMyUserData_Statics::NewProp_UserDataArray_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELLeaderboardsUtility_FindMyUserData_Statics::NewProp_UserData = { "UserData", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLeaderboardsUtility_eventFindMyUserData_Parms, UserData), Z_Construct_UScriptStruct_FELLeaderboardUserData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELLeaderboardsUtility_FindMyUserData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLeaderboardsUtility_eventFindMyUserData_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELLeaderboardsUtility_FindMyUserData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboardsUtility_FindMyUserData_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboardsUtility_FindMyUserData_Statics::NewProp_UserDataArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboardsUtility_FindMyUserData_Statics::NewProp_UserDataArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboardsUtility_FindMyUserData_Statics::NewProp_UserData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboardsUtility_FindMyUserData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELLeaderboardsUtility_FindMyUserData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELLeaderboardsUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELLeaderboardsUtility_FindMyUserData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELLeaderboardsUtility, nullptr, "FindMyUserData", nullptr, nullptr, sizeof(ELLeaderboardsUtility_eventFindMyUserData_Parms), Z_Construct_UFunction_UELLeaderboardsUtility_FindMyUserData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboardsUtility_FindMyUserData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELLeaderboardsUtility_FindMyUserData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboardsUtility_FindMyUserData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELLeaderboardsUtility_FindMyUserData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELLeaderboardsUtility_FindMyUserData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELLeaderboardsUtility_FindMyUserScoreRank_Statics
	{
		struct ELLeaderboardsUtility_eventFindMyUserScoreRank_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELLeaderboardsUtility_FindMyUserScoreRank_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELLeaderboardsUtility_FindMyUserScoreRank_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLeaderboardsUtility_eventFindMyUserScoreRank_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELLeaderboardsUtility_FindMyUserScoreRank_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboardsUtility_FindMyUserScoreRank_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELLeaderboardsUtility_FindMyUserScoreRank_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLeaderboardsUtility_eventFindMyUserScoreRank_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELLeaderboardsUtility_FindMyUserScoreRank_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboardsUtility_FindMyUserScoreRank_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboardsUtility_FindMyUserScoreRank_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELLeaderboardsUtility_FindMyUserScoreRank_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELLeaderboardsUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELLeaderboardsUtility_FindMyUserScoreRank_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELLeaderboardsUtility, nullptr, "FindMyUserScoreRank", nullptr, nullptr, sizeof(ELLeaderboardsUtility_eventFindMyUserScoreRank_Parms), Z_Construct_UFunction_UELLeaderboardsUtility_FindMyUserScoreRank_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboardsUtility_FindMyUserScoreRank_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELLeaderboardsUtility_FindMyUserScoreRank_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboardsUtility_FindMyUserScoreRank_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELLeaderboardsUtility_FindMyUserScoreRank()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELLeaderboardsUtility_FindMyUserScoreRank_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELLeaderboardsUtility_FindUserData_Statics
	{
		struct ELLeaderboardsUtility_eventFindUserData_Parms
		{
			const UObject* WorldContextObject;
			TArray<FELLeaderboardUserData> UserDataArray;
			FString UserId;
			FELLeaderboardUserData UserData;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UserDataArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserDataArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UserDataArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserId;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UserData;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELLeaderboardsUtility_FindUserData_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELLeaderboardsUtility_FindUserData_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLeaderboardsUtility_eventFindUserData_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELLeaderboardsUtility_FindUserData_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboardsUtility_FindUserData_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELLeaderboardsUtility_FindUserData_Statics::NewProp_UserDataArray_Inner = { "UserDataArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FELLeaderboardUserData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELLeaderboardsUtility_FindUserData_Statics::NewProp_UserDataArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELLeaderboardsUtility_FindUserData_Statics::NewProp_UserDataArray = { "UserDataArray", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLeaderboardsUtility_eventFindUserData_Parms, UserDataArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UELLeaderboardsUtility_FindUserData_Statics::NewProp_UserDataArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboardsUtility_FindUserData_Statics::NewProp_UserDataArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELLeaderboardsUtility_FindUserData_Statics::NewProp_UserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELLeaderboardsUtility_FindUserData_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLeaderboardsUtility_eventFindUserData_Parms, UserId), METADATA_PARAMS(Z_Construct_UFunction_UELLeaderboardsUtility_FindUserData_Statics::NewProp_UserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboardsUtility_FindUserData_Statics::NewProp_UserId_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELLeaderboardsUtility_FindUserData_Statics::NewProp_UserData = { "UserData", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLeaderboardsUtility_eventFindUserData_Parms, UserData), Z_Construct_UScriptStruct_FELLeaderboardUserData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELLeaderboardsUtility_FindUserData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLeaderboardsUtility_eventFindUserData_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELLeaderboardsUtility_FindUserData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboardsUtility_FindUserData_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboardsUtility_FindUserData_Statics::NewProp_UserDataArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboardsUtility_FindUserData_Statics::NewProp_UserDataArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboardsUtility_FindUserData_Statics::NewProp_UserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboardsUtility_FindUserData_Statics::NewProp_UserData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboardsUtility_FindUserData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELLeaderboardsUtility_FindUserData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELLeaderboardsUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELLeaderboardsUtility_FindUserData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELLeaderboardsUtility, nullptr, "FindUserData", nullptr, nullptr, sizeof(ELLeaderboardsUtility_eventFindUserData_Parms), Z_Construct_UFunction_UELLeaderboardsUtility_FindUserData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboardsUtility_FindUserData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELLeaderboardsUtility_FindUserData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboardsUtility_FindUserData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELLeaderboardsUtility_FindUserData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELLeaderboardsUtility_FindUserData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELLeaderboardsUtility_FindUserLeaderboardRank_Statics
	{
		struct ELLeaderboardsUtility_eventFindUserLeaderboardRank_Parms
		{
			const UObject* WorldContextObject;
			FString UserId;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserId;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELLeaderboardsUtility_FindUserLeaderboardRank_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELLeaderboardsUtility_FindUserLeaderboardRank_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLeaderboardsUtility_eventFindUserLeaderboardRank_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELLeaderboardsUtility_FindUserLeaderboardRank_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboardsUtility_FindUserLeaderboardRank_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELLeaderboardsUtility_FindUserLeaderboardRank_Statics::NewProp_UserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELLeaderboardsUtility_FindUserLeaderboardRank_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLeaderboardsUtility_eventFindUserLeaderboardRank_Parms, UserId), METADATA_PARAMS(Z_Construct_UFunction_UELLeaderboardsUtility_FindUserLeaderboardRank_Statics::NewProp_UserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboardsUtility_FindUserLeaderboardRank_Statics::NewProp_UserId_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELLeaderboardsUtility_FindUserLeaderboardRank_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLeaderboardsUtility_eventFindUserLeaderboardRank_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELLeaderboardsUtility_FindUserLeaderboardRank_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboardsUtility_FindUserLeaderboardRank_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboardsUtility_FindUserLeaderboardRank_Statics::NewProp_UserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboardsUtility_FindUserLeaderboardRank_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELLeaderboardsUtility_FindUserLeaderboardRank_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELLeaderboardsUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELLeaderboardsUtility_FindUserLeaderboardRank_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELLeaderboardsUtility, nullptr, "FindUserLeaderboardRank", nullptr, nullptr, sizeof(ELLeaderboardsUtility_eventFindUserLeaderboardRank_Parms), Z_Construct_UFunction_UELLeaderboardsUtility_FindUserLeaderboardRank_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboardsUtility_FindUserLeaderboardRank_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELLeaderboardsUtility_FindUserLeaderboardRank_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboardsUtility_FindUserLeaderboardRank_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELLeaderboardsUtility_FindUserLeaderboardRank()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELLeaderboardsUtility_FindUserLeaderboardRank_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELLeaderboardsUtility_FindUserScoreRank_Statics
	{
		struct ELLeaderboardsUtility_eventFindUserScoreRank_Parms
		{
			const UObject* WorldContextObject;
			FString UserId;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserId;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELLeaderboardsUtility_FindUserScoreRank_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELLeaderboardsUtility_FindUserScoreRank_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLeaderboardsUtility_eventFindUserScoreRank_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELLeaderboardsUtility_FindUserScoreRank_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboardsUtility_FindUserScoreRank_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELLeaderboardsUtility_FindUserScoreRank_Statics::NewProp_UserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELLeaderboardsUtility_FindUserScoreRank_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLeaderboardsUtility_eventFindUserScoreRank_Parms, UserId), METADATA_PARAMS(Z_Construct_UFunction_UELLeaderboardsUtility_FindUserScoreRank_Statics::NewProp_UserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboardsUtility_FindUserScoreRank_Statics::NewProp_UserId_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELLeaderboardsUtility_FindUserScoreRank_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLeaderboardsUtility_eventFindUserScoreRank_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELLeaderboardsUtility_FindUserScoreRank_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboardsUtility_FindUserScoreRank_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboardsUtility_FindUserScoreRank_Statics::NewProp_UserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboardsUtility_FindUserScoreRank_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELLeaderboardsUtility_FindUserScoreRank_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELLeaderboardsUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELLeaderboardsUtility_FindUserScoreRank_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELLeaderboardsUtility, nullptr, "FindUserScoreRank", nullptr, nullptr, sizeof(ELLeaderboardsUtility_eventFindUserScoreRank_Parms), Z_Construct_UFunction_UELLeaderboardsUtility_FindUserScoreRank_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboardsUtility_FindUserScoreRank_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELLeaderboardsUtility_FindUserScoreRank_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboardsUtility_FindUserScoreRank_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELLeaderboardsUtility_FindUserScoreRank()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELLeaderboardsUtility_FindUserScoreRank_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELLeaderboardsUtility_GetELLeaderboards_Statics
	{
		struct ELLeaderboardsUtility_eventGetELLeaderboards_Parms
		{
			const UObject* WorldContextObject;
			UELLeaderboards* ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELLeaderboardsUtility_GetELLeaderboards_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELLeaderboardsUtility_GetELLeaderboards_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLeaderboardsUtility_eventGetELLeaderboards_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELLeaderboardsUtility_GetELLeaderboards_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboardsUtility_GetELLeaderboards_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELLeaderboardsUtility_GetELLeaderboards_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLeaderboardsUtility_eventGetELLeaderboards_Parms, ReturnValue), Z_Construct_UClass_UELLeaderboards_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELLeaderboardsUtility_GetELLeaderboards_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboardsUtility_GetELLeaderboards_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboardsUtility_GetELLeaderboards_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELLeaderboardsUtility_GetELLeaderboards_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELLeaderboardsUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELLeaderboardsUtility_GetELLeaderboards_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELLeaderboardsUtility, nullptr, "GetELLeaderboards", nullptr, nullptr, sizeof(ELLeaderboardsUtility_eventGetELLeaderboards_Parms), Z_Construct_UFunction_UELLeaderboardsUtility_GetELLeaderboards_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboardsUtility_GetELLeaderboards_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELLeaderboardsUtility_GetELLeaderboards_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboardsUtility_GetELLeaderboards_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELLeaderboardsUtility_GetELLeaderboards()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELLeaderboardsUtility_GetELLeaderboards_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELLeaderboardsUtility_GetLeaderboardProductUserIds_Statics
	{
		struct ELLeaderboardsUtility_eventGetLeaderboardProductUserIds_Parms
		{
			const UObject* WorldContextObject;
			TArray<FELLeaderboardUserData> UserDataArray;
			TArray<FString> ProductUserIDs;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UserDataArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserDataArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UserDataArray;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ProductUserIDs_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ProductUserIDs;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELLeaderboardsUtility_GetLeaderboardProductUserIds_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELLeaderboardsUtility_GetLeaderboardProductUserIds_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLeaderboardsUtility_eventGetLeaderboardProductUserIds_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELLeaderboardsUtility_GetLeaderboardProductUserIds_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboardsUtility_GetLeaderboardProductUserIds_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELLeaderboardsUtility_GetLeaderboardProductUserIds_Statics::NewProp_UserDataArray_Inner = { "UserDataArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FELLeaderboardUserData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELLeaderboardsUtility_GetLeaderboardProductUserIds_Statics::NewProp_UserDataArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELLeaderboardsUtility_GetLeaderboardProductUserIds_Statics::NewProp_UserDataArray = { "UserDataArray", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLeaderboardsUtility_eventGetLeaderboardProductUserIds_Parms, UserDataArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UELLeaderboardsUtility_GetLeaderboardProductUserIds_Statics::NewProp_UserDataArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboardsUtility_GetLeaderboardProductUserIds_Statics::NewProp_UserDataArray_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELLeaderboardsUtility_GetLeaderboardProductUserIds_Statics::NewProp_ProductUserIDs_Inner = { "ProductUserIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELLeaderboardsUtility_GetLeaderboardProductUserIds_Statics::NewProp_ProductUserIDs = { "ProductUserIDs", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLeaderboardsUtility_eventGetLeaderboardProductUserIds_Parms, ProductUserIDs), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELLeaderboardsUtility_GetLeaderboardProductUserIds_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELLeaderboardsUtility_eventGetLeaderboardProductUserIds_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELLeaderboardsUtility_GetLeaderboardProductUserIds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELLeaderboardsUtility_eventGetLeaderboardProductUserIds_Parms), &Z_Construct_UFunction_UELLeaderboardsUtility_GetLeaderboardProductUserIds_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELLeaderboardsUtility_GetLeaderboardProductUserIds_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboardsUtility_GetLeaderboardProductUserIds_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboardsUtility_GetLeaderboardProductUserIds_Statics::NewProp_UserDataArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboardsUtility_GetLeaderboardProductUserIds_Statics::NewProp_UserDataArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboardsUtility_GetLeaderboardProductUserIds_Statics::NewProp_ProductUserIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboardsUtility_GetLeaderboardProductUserIds_Statics::NewProp_ProductUserIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboardsUtility_GetLeaderboardProductUserIds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELLeaderboardsUtility_GetLeaderboardProductUserIds_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELLeaderboardsUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELLeaderboardsUtility_GetLeaderboardProductUserIds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELLeaderboardsUtility, nullptr, "GetLeaderboardProductUserIds", nullptr, nullptr, sizeof(ELLeaderboardsUtility_eventGetLeaderboardProductUserIds_Parms), Z_Construct_UFunction_UELLeaderboardsUtility_GetLeaderboardProductUserIds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboardsUtility_GetLeaderboardProductUserIds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELLeaderboardsUtility_GetLeaderboardProductUserIds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboardsUtility_GetLeaderboardProductUserIds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELLeaderboardsUtility_GetLeaderboardProductUserIds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELLeaderboardsUtility_GetLeaderboardProductUserIds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELLeaderboardsUtility_GetLeaderboardQueryDateTime_Statics
	{
		struct ELLeaderboardsUtility_eventGetLeaderboardQueryDateTime_Parms
		{
			const UObject* WorldContextObject;
			FString LeaderboardName;
			int32 Season;
			bool bPlatformOnly;
			FDateTime ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeaderboardName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LeaderboardName;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Season;
		static void NewProp_bPlatformOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPlatformOnly;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELLeaderboardsUtility_GetLeaderboardQueryDateTime_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELLeaderboardsUtility_GetLeaderboardQueryDateTime_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLeaderboardsUtility_eventGetLeaderboardQueryDateTime_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELLeaderboardsUtility_GetLeaderboardQueryDateTime_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboardsUtility_GetLeaderboardQueryDateTime_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELLeaderboardsUtility_GetLeaderboardQueryDateTime_Statics::NewProp_LeaderboardName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELLeaderboardsUtility_GetLeaderboardQueryDateTime_Statics::NewProp_LeaderboardName = { "LeaderboardName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLeaderboardsUtility_eventGetLeaderboardQueryDateTime_Parms, LeaderboardName), METADATA_PARAMS(Z_Construct_UFunction_UELLeaderboardsUtility_GetLeaderboardQueryDateTime_Statics::NewProp_LeaderboardName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboardsUtility_GetLeaderboardQueryDateTime_Statics::NewProp_LeaderboardName_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELLeaderboardsUtility_GetLeaderboardQueryDateTime_Statics::NewProp_Season = { "Season", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLeaderboardsUtility_eventGetLeaderboardQueryDateTime_Parms, Season), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELLeaderboardsUtility_GetLeaderboardQueryDateTime_Statics::NewProp_bPlatformOnly_SetBit(void* Obj)
	{
		((ELLeaderboardsUtility_eventGetLeaderboardQueryDateTime_Parms*)Obj)->bPlatformOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELLeaderboardsUtility_GetLeaderboardQueryDateTime_Statics::NewProp_bPlatformOnly = { "bPlatformOnly", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELLeaderboardsUtility_eventGetLeaderboardQueryDateTime_Parms), &Z_Construct_UFunction_UELLeaderboardsUtility_GetLeaderboardQueryDateTime_Statics::NewProp_bPlatformOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELLeaderboardsUtility_GetLeaderboardQueryDateTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLeaderboardsUtility_eventGetLeaderboardQueryDateTime_Parms, ReturnValue), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELLeaderboardsUtility_GetLeaderboardQueryDateTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboardsUtility_GetLeaderboardQueryDateTime_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboardsUtility_GetLeaderboardQueryDateTime_Statics::NewProp_LeaderboardName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboardsUtility_GetLeaderboardQueryDateTime_Statics::NewProp_Season,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboardsUtility_GetLeaderboardQueryDateTime_Statics::NewProp_bPlatformOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboardsUtility_GetLeaderboardQueryDateTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELLeaderboardsUtility_GetLeaderboardQueryDateTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELLeaderboardsUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELLeaderboardsUtility_GetLeaderboardQueryDateTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELLeaderboardsUtility, nullptr, "GetLeaderboardQueryDateTime", nullptr, nullptr, sizeof(ELLeaderboardsUtility_eventGetLeaderboardQueryDateTime_Parms), Z_Construct_UFunction_UELLeaderboardsUtility_GetLeaderboardQueryDateTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboardsUtility_GetLeaderboardQueryDateTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELLeaderboardsUtility_GetLeaderboardQueryDateTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboardsUtility_GetLeaderboardQueryDateTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELLeaderboardsUtility_GetLeaderboardQueryDateTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELLeaderboardsUtility_GetLeaderboardQueryDateTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELLeaderboardsUtility_GetLeaderboardUserSeasonStats_Statics
	{
		struct ELLeaderboardsUtility_eventGetLeaderboardUserSeasonStats_Parms
		{
			const UObject* WorldContextObject;
			FString UserId;
			int32 Season;
			UELLeaderboardUserSeasonStats* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserId;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Season;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELLeaderboardsUtility_GetLeaderboardUserSeasonStats_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELLeaderboardsUtility_GetLeaderboardUserSeasonStats_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLeaderboardsUtility_eventGetLeaderboardUserSeasonStats_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELLeaderboardsUtility_GetLeaderboardUserSeasonStats_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboardsUtility_GetLeaderboardUserSeasonStats_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELLeaderboardsUtility_GetLeaderboardUserSeasonStats_Statics::NewProp_UserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELLeaderboardsUtility_GetLeaderboardUserSeasonStats_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLeaderboardsUtility_eventGetLeaderboardUserSeasonStats_Parms, UserId), METADATA_PARAMS(Z_Construct_UFunction_UELLeaderboardsUtility_GetLeaderboardUserSeasonStats_Statics::NewProp_UserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboardsUtility_GetLeaderboardUserSeasonStats_Statics::NewProp_UserId_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELLeaderboardsUtility_GetLeaderboardUserSeasonStats_Statics::NewProp_Season = { "Season", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLeaderboardsUtility_eventGetLeaderboardUserSeasonStats_Parms, Season), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELLeaderboardsUtility_GetLeaderboardUserSeasonStats_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLeaderboardsUtility_eventGetLeaderboardUserSeasonStats_Parms, ReturnValue), Z_Construct_UClass_UELLeaderboardUserSeasonStats_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELLeaderboardsUtility_GetLeaderboardUserSeasonStats_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboardsUtility_GetLeaderboardUserSeasonStats_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboardsUtility_GetLeaderboardUserSeasonStats_Statics::NewProp_UserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboardsUtility_GetLeaderboardUserSeasonStats_Statics::NewProp_Season,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboardsUtility_GetLeaderboardUserSeasonStats_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELLeaderboardsUtility_GetLeaderboardUserSeasonStats_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELLeaderboardsUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELLeaderboardsUtility_GetLeaderboardUserSeasonStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELLeaderboardsUtility, nullptr, "GetLeaderboardUserSeasonStats", nullptr, nullptr, sizeof(ELLeaderboardsUtility_eventGetLeaderboardUserSeasonStats_Parms), Z_Construct_UFunction_UELLeaderboardsUtility_GetLeaderboardUserSeasonStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboardsUtility_GetLeaderboardUserSeasonStats_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELLeaderboardsUtility_GetLeaderboardUserSeasonStats_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboardsUtility_GetLeaderboardUserSeasonStats_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELLeaderboardsUtility_GetLeaderboardUserSeasonStats()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELLeaderboardsUtility_GetLeaderboardUserSeasonStats_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELLeaderboardsUtility_GetLeaderboardUserStats_Statics
	{
		struct ELLeaderboardsUtility_eventGetLeaderboardUserStats_Parms
		{
			const UObject* WorldContextObject;
			FString UserId;
			UELLeaderboardUserStats* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserId;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELLeaderboardsUtility_GetLeaderboardUserStats_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELLeaderboardsUtility_GetLeaderboardUserStats_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLeaderboardsUtility_eventGetLeaderboardUserStats_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELLeaderboardsUtility_GetLeaderboardUserStats_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboardsUtility_GetLeaderboardUserStats_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELLeaderboardsUtility_GetLeaderboardUserStats_Statics::NewProp_UserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELLeaderboardsUtility_GetLeaderboardUserStats_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLeaderboardsUtility_eventGetLeaderboardUserStats_Parms, UserId), METADATA_PARAMS(Z_Construct_UFunction_UELLeaderboardsUtility_GetLeaderboardUserStats_Statics::NewProp_UserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboardsUtility_GetLeaderboardUserStats_Statics::NewProp_UserId_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELLeaderboardsUtility_GetLeaderboardUserStats_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLeaderboardsUtility_eventGetLeaderboardUserStats_Parms, ReturnValue), Z_Construct_UClass_UELLeaderboardUserStats_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELLeaderboardsUtility_GetLeaderboardUserStats_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboardsUtility_GetLeaderboardUserStats_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboardsUtility_GetLeaderboardUserStats_Statics::NewProp_UserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboardsUtility_GetLeaderboardUserStats_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELLeaderboardsUtility_GetLeaderboardUserStats_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELLeaderboardsUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELLeaderboardsUtility_GetLeaderboardUserStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELLeaderboardsUtility, nullptr, "GetLeaderboardUserStats", nullptr, nullptr, sizeof(ELLeaderboardsUtility_eventGetLeaderboardUserStats_Parms), Z_Construct_UFunction_UELLeaderboardsUtility_GetLeaderboardUserStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboardsUtility_GetLeaderboardUserStats_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELLeaderboardsUtility_GetLeaderboardUserStats_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboardsUtility_GetLeaderboardUserStats_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELLeaderboardsUtility_GetLeaderboardUserStats()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELLeaderboardsUtility_GetLeaderboardUserStats_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELLeaderboardsUtility_GetLeaderboardUserStatsQueryDateTime_Statics
	{
		struct ELLeaderboardsUtility_eventGetLeaderboardUserStatsQueryDateTime_Parms
		{
			const UObject* WorldContextObject;
			FString ProductUserID;
			int32 Season;
			FDateTime ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProductUserID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ProductUserID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Season;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELLeaderboardsUtility_GetLeaderboardUserStatsQueryDateTime_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELLeaderboardsUtility_GetLeaderboardUserStatsQueryDateTime_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLeaderboardsUtility_eventGetLeaderboardUserStatsQueryDateTime_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELLeaderboardsUtility_GetLeaderboardUserStatsQueryDateTime_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboardsUtility_GetLeaderboardUserStatsQueryDateTime_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELLeaderboardsUtility_GetLeaderboardUserStatsQueryDateTime_Statics::NewProp_ProductUserID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELLeaderboardsUtility_GetLeaderboardUserStatsQueryDateTime_Statics::NewProp_ProductUserID = { "ProductUserID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLeaderboardsUtility_eventGetLeaderboardUserStatsQueryDateTime_Parms, ProductUserID), METADATA_PARAMS(Z_Construct_UFunction_UELLeaderboardsUtility_GetLeaderboardUserStatsQueryDateTime_Statics::NewProp_ProductUserID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboardsUtility_GetLeaderboardUserStatsQueryDateTime_Statics::NewProp_ProductUserID_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELLeaderboardsUtility_GetLeaderboardUserStatsQueryDateTime_Statics::NewProp_Season = { "Season", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLeaderboardsUtility_eventGetLeaderboardUserStatsQueryDateTime_Parms, Season), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELLeaderboardsUtility_GetLeaderboardUserStatsQueryDateTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLeaderboardsUtility_eventGetLeaderboardUserStatsQueryDateTime_Parms, ReturnValue), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELLeaderboardsUtility_GetLeaderboardUserStatsQueryDateTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboardsUtility_GetLeaderboardUserStatsQueryDateTime_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboardsUtility_GetLeaderboardUserStatsQueryDateTime_Statics::NewProp_ProductUserID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboardsUtility_GetLeaderboardUserStatsQueryDateTime_Statics::NewProp_Season,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboardsUtility_GetLeaderboardUserStatsQueryDateTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELLeaderboardsUtility_GetLeaderboardUserStatsQueryDateTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELLeaderboardsUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELLeaderboardsUtility_GetLeaderboardUserStatsQueryDateTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELLeaderboardsUtility, nullptr, "GetLeaderboardUserStatsQueryDateTime", nullptr, nullptr, sizeof(ELLeaderboardsUtility_eventGetLeaderboardUserStatsQueryDateTime_Parms), Z_Construct_UFunction_UELLeaderboardsUtility_GetLeaderboardUserStatsQueryDateTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboardsUtility_GetLeaderboardUserStatsQueryDateTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELLeaderboardsUtility_GetLeaderboardUserStatsQueryDateTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboardsUtility_GetLeaderboardUserStatsQueryDateTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELLeaderboardsUtility_GetLeaderboardUserStatsQueryDateTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELLeaderboardsUtility_GetLeaderboardUserStatsQueryDateTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELLeaderboardsUtility_GetSubLeaderboardUserData_Statics
	{
		struct ELLeaderboardsUtility_eventGetSubLeaderboardUserData_Parms
		{
			TArray<FELLeaderboardUserData> InUserDataArray;
			int32 StartIndex;
			int32 EndIndex;
			TArray<FELLeaderboardUserData> OutUserDataArray;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InUserDataArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InUserDataArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InUserDataArray;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StartIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EndIndex;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutUserDataArray_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutUserDataArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELLeaderboardsUtility_GetSubLeaderboardUserData_Statics::NewProp_InUserDataArray_Inner = { "InUserDataArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FELLeaderboardUserData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELLeaderboardsUtility_GetSubLeaderboardUserData_Statics::NewProp_InUserDataArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELLeaderboardsUtility_GetSubLeaderboardUserData_Statics::NewProp_InUserDataArray = { "InUserDataArray", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLeaderboardsUtility_eventGetSubLeaderboardUserData_Parms, InUserDataArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UELLeaderboardsUtility_GetSubLeaderboardUserData_Statics::NewProp_InUserDataArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboardsUtility_GetSubLeaderboardUserData_Statics::NewProp_InUserDataArray_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELLeaderboardsUtility_GetSubLeaderboardUserData_Statics::NewProp_StartIndex = { "StartIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLeaderboardsUtility_eventGetSubLeaderboardUserData_Parms, StartIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELLeaderboardsUtility_GetSubLeaderboardUserData_Statics::NewProp_EndIndex = { "EndIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLeaderboardsUtility_eventGetSubLeaderboardUserData_Parms, EndIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELLeaderboardsUtility_GetSubLeaderboardUserData_Statics::NewProp_OutUserDataArray_Inner = { "OutUserDataArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FELLeaderboardUserData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELLeaderboardsUtility_GetSubLeaderboardUserData_Statics::NewProp_OutUserDataArray = { "OutUserDataArray", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLeaderboardsUtility_eventGetSubLeaderboardUserData_Parms, OutUserDataArray), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELLeaderboardsUtility_GetSubLeaderboardUserData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboardsUtility_GetSubLeaderboardUserData_Statics::NewProp_InUserDataArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboardsUtility_GetSubLeaderboardUserData_Statics::NewProp_InUserDataArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboardsUtility_GetSubLeaderboardUserData_Statics::NewProp_StartIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboardsUtility_GetSubLeaderboardUserData_Statics::NewProp_EndIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboardsUtility_GetSubLeaderboardUserData_Statics::NewProp_OutUserDataArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboardsUtility_GetSubLeaderboardUserData_Statics::NewProp_OutUserDataArray,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELLeaderboardsUtility_GetSubLeaderboardUserData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELLeaderboardsUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELLeaderboardsUtility_GetSubLeaderboardUserData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELLeaderboardsUtility, nullptr, "GetSubLeaderboardUserData", nullptr, nullptr, sizeof(ELLeaderboardsUtility_eventGetSubLeaderboardUserData_Parms), Z_Construct_UFunction_UELLeaderboardsUtility_GetSubLeaderboardUserData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboardsUtility_GetSubLeaderboardUserData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELLeaderboardsUtility_GetSubLeaderboardUserData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboardsUtility_GetSubLeaderboardUserData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELLeaderboardsUtility_GetSubLeaderboardUserData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELLeaderboardsUtility_GetSubLeaderboardUserData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELLeaderboardsUtility_GetUserScoreQueryDateTime_Statics
	{
		struct ELLeaderboardsUtility_eventGetUserScoreQueryDateTime_Parms
		{
			const UObject* WorldContextObject;
			FString LeaderboardName;
			int32 Season;
			bool bPlatformOnly;
			FDateTime ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeaderboardName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LeaderboardName;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Season;
		static void NewProp_bPlatformOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPlatformOnly;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELLeaderboardsUtility_GetUserScoreQueryDateTime_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELLeaderboardsUtility_GetUserScoreQueryDateTime_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLeaderboardsUtility_eventGetUserScoreQueryDateTime_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELLeaderboardsUtility_GetUserScoreQueryDateTime_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboardsUtility_GetUserScoreQueryDateTime_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELLeaderboardsUtility_GetUserScoreQueryDateTime_Statics::NewProp_LeaderboardName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELLeaderboardsUtility_GetUserScoreQueryDateTime_Statics::NewProp_LeaderboardName = { "LeaderboardName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLeaderboardsUtility_eventGetUserScoreQueryDateTime_Parms, LeaderboardName), METADATA_PARAMS(Z_Construct_UFunction_UELLeaderboardsUtility_GetUserScoreQueryDateTime_Statics::NewProp_LeaderboardName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboardsUtility_GetUserScoreQueryDateTime_Statics::NewProp_LeaderboardName_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELLeaderboardsUtility_GetUserScoreQueryDateTime_Statics::NewProp_Season = { "Season", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLeaderboardsUtility_eventGetUserScoreQueryDateTime_Parms, Season), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELLeaderboardsUtility_GetUserScoreQueryDateTime_Statics::NewProp_bPlatformOnly_SetBit(void* Obj)
	{
		((ELLeaderboardsUtility_eventGetUserScoreQueryDateTime_Parms*)Obj)->bPlatformOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELLeaderboardsUtility_GetUserScoreQueryDateTime_Statics::NewProp_bPlatformOnly = { "bPlatformOnly", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELLeaderboardsUtility_eventGetUserScoreQueryDateTime_Parms), &Z_Construct_UFunction_UELLeaderboardsUtility_GetUserScoreQueryDateTime_Statics::NewProp_bPlatformOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELLeaderboardsUtility_GetUserScoreQueryDateTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLeaderboardsUtility_eventGetUserScoreQueryDateTime_Parms, ReturnValue), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELLeaderboardsUtility_GetUserScoreQueryDateTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboardsUtility_GetUserScoreQueryDateTime_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboardsUtility_GetUserScoreQueryDateTime_Statics::NewProp_LeaderboardName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboardsUtility_GetUserScoreQueryDateTime_Statics::NewProp_Season,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboardsUtility_GetUserScoreQueryDateTime_Statics::NewProp_bPlatformOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboardsUtility_GetUserScoreQueryDateTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELLeaderboardsUtility_GetUserScoreQueryDateTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELLeaderboardsUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELLeaderboardsUtility_GetUserScoreQueryDateTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELLeaderboardsUtility, nullptr, "GetUserScoreQueryDateTime", nullptr, nullptr, sizeof(ELLeaderboardsUtility_eventGetUserScoreQueryDateTime_Parms), Z_Construct_UFunction_UELLeaderboardsUtility_GetUserScoreQueryDateTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboardsUtility_GetUserScoreQueryDateTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELLeaderboardsUtility_GetUserScoreQueryDateTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboardsUtility_GetUserScoreQueryDateTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELLeaderboardsUtility_GetUserScoreQueryDateTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELLeaderboardsUtility_GetUserScoreQueryDateTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELLeaderboardsUtility_NoRegister()
	{
		return UELLeaderboardsUtility::StaticClass();
	}
	struct Z_Construct_UClass_UELLeaderboardsUtility_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELLeaderboardsUtility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELLeaderboardsUtility_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELLeaderboardsUtility_FindLeaderboardUserData, "FindLeaderboardUserData" }, // 2863554085
		{ &Z_Construct_UFunction_UELLeaderboardsUtility_FindLeaderboardUserDataByLeaderboadName, "FindLeaderboardUserDataByLeaderboadName" }, // 27181030
		{ &Z_Construct_UFunction_UELLeaderboardsUtility_FindMyLeaderboardRank, "FindMyLeaderboardRank" }, // 2647686028
		{ &Z_Construct_UFunction_UELLeaderboardsUtility_FindMyLeaderboardUserData, "FindMyLeaderboardUserData" }, // 2889558660
		{ &Z_Construct_UFunction_UELLeaderboardsUtility_FindMyLeaderboardUserDataByLeaderboadName, "FindMyLeaderboardUserDataByLeaderboadName" }, // 1835499725
		{ &Z_Construct_UFunction_UELLeaderboardsUtility_FindMyUserData, "FindMyUserData" }, // 3096231663
		{ &Z_Construct_UFunction_UELLeaderboardsUtility_FindMyUserScoreRank, "FindMyUserScoreRank" }, // 663269058
		{ &Z_Construct_UFunction_UELLeaderboardsUtility_FindUserData, "FindUserData" }, // 2273544814
		{ &Z_Construct_UFunction_UELLeaderboardsUtility_FindUserLeaderboardRank, "FindUserLeaderboardRank" }, // 3003412917
		{ &Z_Construct_UFunction_UELLeaderboardsUtility_FindUserScoreRank, "FindUserScoreRank" }, // 2544645896
		{ &Z_Construct_UFunction_UELLeaderboardsUtility_GetELLeaderboards, "GetELLeaderboards" }, // 2867305796
		{ &Z_Construct_UFunction_UELLeaderboardsUtility_GetLeaderboardProductUserIds, "GetLeaderboardProductUserIds" }, // 2247234934
		{ &Z_Construct_UFunction_UELLeaderboardsUtility_GetLeaderboardQueryDateTime, "GetLeaderboardQueryDateTime" }, // 4028102883
		{ &Z_Construct_UFunction_UELLeaderboardsUtility_GetLeaderboardUserSeasonStats, "GetLeaderboardUserSeasonStats" }, // 3237771040
		{ &Z_Construct_UFunction_UELLeaderboardsUtility_GetLeaderboardUserStats, "GetLeaderboardUserStats" }, // 3567489552
		{ &Z_Construct_UFunction_UELLeaderboardsUtility_GetLeaderboardUserStatsQueryDateTime, "GetLeaderboardUserStatsQueryDateTime" }, // 2994352561
		{ &Z_Construct_UFunction_UELLeaderboardsUtility_GetSubLeaderboardUserData, "GetSubLeaderboardUserData" }, // 2864071645
		{ &Z_Construct_UFunction_UELLeaderboardsUtility_GetUserScoreQueryDateTime, "GetUserScoreQueryDateTime" }, // 1171003133
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELLeaderboardsUtility_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELLeaderboardsUtility.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELLeaderboardsUtility.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELLeaderboardsUtility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELLeaderboardsUtility>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELLeaderboardsUtility_Statics::ClassParams = {
		&UELLeaderboardsUtility::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELLeaderboardsUtility_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELLeaderboardsUtility_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELLeaderboardsUtility()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELLeaderboardsUtility_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELLeaderboardsUtility, 2601318575);
	template<> ABP_200508_API UClass* StaticClass<UELLeaderboardsUtility>()
	{
		return UELLeaderboardsUtility::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELLeaderboardsUtility(Z_Construct_UClass_UELLeaderboardsUtility, &UELLeaderboardsUtility::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELLeaderboardsUtility"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELLeaderboardsUtility);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
