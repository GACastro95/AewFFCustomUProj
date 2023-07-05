// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SessionGamePlayerData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSessionGamePlayerData() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_USessionGamePlayerData_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_USessionGamePlayerData();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSSessionP2PPacketBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSessionGamePlayerDataBP();
// End Cross Module References
	DEFINE_FUNCTION(USessionGamePlayerData::execGetAccountDisplayName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetAccountDisplayName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USessionGamePlayerData::execGetEpicAccountDisplayName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetEpicAccountDisplayName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USessionGamePlayerData::execGetFirstName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetFirstName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USessionGamePlayerData::execGetLastName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetLastName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USessionGamePlayerData::execGetLeague)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetLeague();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USessionGamePlayerData::execGetPlatform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetPlatform();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USessionGamePlayerData::execGetPlayerIcons)
	{
		P_GET_TARRAY_REF(int32,Z_Param_Out_Array);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetPlayerIcons(Z_Param_Out_Array);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USessionGamePlayerData::execGetProductUserID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetProductUserID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USessionGamePlayerData::execGetRandomNumbers)
	{
		P_GET_TARRAY_REF(int32,Z_Param_Out_Array);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetRandomNumbers(Z_Param_Out_Array);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USessionGamePlayerData::execGetRank)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetRank();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USessionGamePlayerData::execGetTeamMemberNum)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetTeamMemberNum();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USessionGamePlayerData::execGetTeamMemberPUID)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__sIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetTeamMemberPUID(Z_Param__sIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USessionGamePlayerData::execGetTotalGamePoint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetTotalGamePoint();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USessionGamePlayerData::execGetWeaponDecals)
	{
		P_GET_TARRAY_REF(int32,Z_Param_Out_Array);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetWeaponDecals(Z_Param_Out_Array);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USessionGamePlayerData::execGetWinLoseCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetWinLoseCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USessionGamePlayerData::execGetWinLoseCounts)
	{
		P_GET_TARRAY_REF(int32,Z_Param_Out_Array);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetWinLoseCounts(Z_Param_Out_Array);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USessionGamePlayerData::execGetWrestlerName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetWrestlerName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USessionGamePlayerData::execSetParameters)
	{
		P_GET_STRUCT_REF(FSessionGamePlayerDataBP,Z_Param_Out__stPlayerData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetParameters(Z_Param_Out__stPlayerData);
		P_NATIVE_END;
	}
	void USessionGamePlayerData::StaticRegisterNativesUSessionGamePlayerData()
	{
		UClass* Class = USessionGamePlayerData::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAccountDisplayName", &USessionGamePlayerData::execGetAccountDisplayName },
			{ "GetEpicAccountDisplayName", &USessionGamePlayerData::execGetEpicAccountDisplayName },
			{ "GetFirstName", &USessionGamePlayerData::execGetFirstName },
			{ "GetLastName", &USessionGamePlayerData::execGetLastName },
			{ "GetLeague", &USessionGamePlayerData::execGetLeague },
			{ "GetPlatform", &USessionGamePlayerData::execGetPlatform },
			{ "GetPlayerIcons", &USessionGamePlayerData::execGetPlayerIcons },
			{ "GetProductUserID", &USessionGamePlayerData::execGetProductUserID },
			{ "GetRandomNumbers", &USessionGamePlayerData::execGetRandomNumbers },
			{ "GetRank", &USessionGamePlayerData::execGetRank },
			{ "GetTeamMemberNum", &USessionGamePlayerData::execGetTeamMemberNum },
			{ "GetTeamMemberPUID", &USessionGamePlayerData::execGetTeamMemberPUID },
			{ "GetTotalGamePoint", &USessionGamePlayerData::execGetTotalGamePoint },
			{ "GetWeaponDecals", &USessionGamePlayerData::execGetWeaponDecals },
			{ "GetWinLoseCount", &USessionGamePlayerData::execGetWinLoseCount },
			{ "GetWinLoseCounts", &USessionGamePlayerData::execGetWinLoseCounts },
			{ "GetWrestlerName", &USessionGamePlayerData::execGetWrestlerName },
			{ "SetParameters", &USessionGamePlayerData::execSetParameters },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USessionGamePlayerData_GetAccountDisplayName_Statics
	{
		struct SessionGamePlayerData_eventGetAccountDisplayName_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USessionGamePlayerData_GetAccountDisplayName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SessionGamePlayerData_eventGetAccountDisplayName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USessionGamePlayerData_GetAccountDisplayName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USessionGamePlayerData_GetAccountDisplayName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USessionGamePlayerData_GetAccountDisplayName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SessionGamePlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USessionGamePlayerData_GetAccountDisplayName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USessionGamePlayerData, nullptr, "GetAccountDisplayName", nullptr, nullptr, sizeof(SessionGamePlayerData_eventGetAccountDisplayName_Parms), Z_Construct_UFunction_USessionGamePlayerData_GetAccountDisplayName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USessionGamePlayerData_GetAccountDisplayName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USessionGamePlayerData_GetAccountDisplayName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USessionGamePlayerData_GetAccountDisplayName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USessionGamePlayerData_GetAccountDisplayName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USessionGamePlayerData_GetAccountDisplayName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USessionGamePlayerData_GetEpicAccountDisplayName_Statics
	{
		struct SessionGamePlayerData_eventGetEpicAccountDisplayName_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USessionGamePlayerData_GetEpicAccountDisplayName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SessionGamePlayerData_eventGetEpicAccountDisplayName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USessionGamePlayerData_GetEpicAccountDisplayName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USessionGamePlayerData_GetEpicAccountDisplayName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USessionGamePlayerData_GetEpicAccountDisplayName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SessionGamePlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USessionGamePlayerData_GetEpicAccountDisplayName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USessionGamePlayerData, nullptr, "GetEpicAccountDisplayName", nullptr, nullptr, sizeof(SessionGamePlayerData_eventGetEpicAccountDisplayName_Parms), Z_Construct_UFunction_USessionGamePlayerData_GetEpicAccountDisplayName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USessionGamePlayerData_GetEpicAccountDisplayName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USessionGamePlayerData_GetEpicAccountDisplayName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USessionGamePlayerData_GetEpicAccountDisplayName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USessionGamePlayerData_GetEpicAccountDisplayName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USessionGamePlayerData_GetEpicAccountDisplayName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USessionGamePlayerData_GetFirstName_Statics
	{
		struct SessionGamePlayerData_eventGetFirstName_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USessionGamePlayerData_GetFirstName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SessionGamePlayerData_eventGetFirstName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USessionGamePlayerData_GetFirstName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USessionGamePlayerData_GetFirstName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USessionGamePlayerData_GetFirstName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SessionGamePlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USessionGamePlayerData_GetFirstName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USessionGamePlayerData, nullptr, "GetFirstName", nullptr, nullptr, sizeof(SessionGamePlayerData_eventGetFirstName_Parms), Z_Construct_UFunction_USessionGamePlayerData_GetFirstName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USessionGamePlayerData_GetFirstName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USessionGamePlayerData_GetFirstName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USessionGamePlayerData_GetFirstName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USessionGamePlayerData_GetFirstName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USessionGamePlayerData_GetFirstName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USessionGamePlayerData_GetLastName_Statics
	{
		struct SessionGamePlayerData_eventGetLastName_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USessionGamePlayerData_GetLastName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SessionGamePlayerData_eventGetLastName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USessionGamePlayerData_GetLastName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USessionGamePlayerData_GetLastName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USessionGamePlayerData_GetLastName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SessionGamePlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USessionGamePlayerData_GetLastName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USessionGamePlayerData, nullptr, "GetLastName", nullptr, nullptr, sizeof(SessionGamePlayerData_eventGetLastName_Parms), Z_Construct_UFunction_USessionGamePlayerData_GetLastName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USessionGamePlayerData_GetLastName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USessionGamePlayerData_GetLastName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USessionGamePlayerData_GetLastName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USessionGamePlayerData_GetLastName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USessionGamePlayerData_GetLastName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USessionGamePlayerData_GetLeague_Statics
	{
		struct SessionGamePlayerData_eventGetLeague_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USessionGamePlayerData_GetLeague_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SessionGamePlayerData_eventGetLeague_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USessionGamePlayerData_GetLeague_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USessionGamePlayerData_GetLeague_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USessionGamePlayerData_GetLeague_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SessionGamePlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USessionGamePlayerData_GetLeague_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USessionGamePlayerData, nullptr, "GetLeague", nullptr, nullptr, sizeof(SessionGamePlayerData_eventGetLeague_Parms), Z_Construct_UFunction_USessionGamePlayerData_GetLeague_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USessionGamePlayerData_GetLeague_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USessionGamePlayerData_GetLeague_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USessionGamePlayerData_GetLeague_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USessionGamePlayerData_GetLeague()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USessionGamePlayerData_GetLeague_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USessionGamePlayerData_GetPlatform_Statics
	{
		struct SessionGamePlayerData_eventGetPlatform_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USessionGamePlayerData_GetPlatform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SessionGamePlayerData_eventGetPlatform_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USessionGamePlayerData_GetPlatform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USessionGamePlayerData_GetPlatform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USessionGamePlayerData_GetPlatform_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SessionGamePlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USessionGamePlayerData_GetPlatform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USessionGamePlayerData, nullptr, "GetPlatform", nullptr, nullptr, sizeof(SessionGamePlayerData_eventGetPlatform_Parms), Z_Construct_UFunction_USessionGamePlayerData_GetPlatform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USessionGamePlayerData_GetPlatform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USessionGamePlayerData_GetPlatform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USessionGamePlayerData_GetPlatform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USessionGamePlayerData_GetPlatform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USessionGamePlayerData_GetPlatform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USessionGamePlayerData_GetPlayerIcons_Statics
	{
		struct SessionGamePlayerData_eventGetPlayerIcons_Parms
		{
			TArray<int32> Array;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Array_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Array;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USessionGamePlayerData_GetPlayerIcons_Statics::NewProp_Array_Inner = { "Array", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USessionGamePlayerData_GetPlayerIcons_Statics::NewProp_Array = { "Array", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SessionGamePlayerData_eventGetPlayerIcons_Parms, Array), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USessionGamePlayerData_GetPlayerIcons_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USessionGamePlayerData_GetPlayerIcons_Statics::NewProp_Array_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USessionGamePlayerData_GetPlayerIcons_Statics::NewProp_Array,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USessionGamePlayerData_GetPlayerIcons_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SessionGamePlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USessionGamePlayerData_GetPlayerIcons_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USessionGamePlayerData, nullptr, "GetPlayerIcons", nullptr, nullptr, sizeof(SessionGamePlayerData_eventGetPlayerIcons_Parms), Z_Construct_UFunction_USessionGamePlayerData_GetPlayerIcons_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USessionGamePlayerData_GetPlayerIcons_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USessionGamePlayerData_GetPlayerIcons_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USessionGamePlayerData_GetPlayerIcons_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USessionGamePlayerData_GetPlayerIcons()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USessionGamePlayerData_GetPlayerIcons_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USessionGamePlayerData_GetProductUserID_Statics
	{
		struct SessionGamePlayerData_eventGetProductUserID_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USessionGamePlayerData_GetProductUserID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SessionGamePlayerData_eventGetProductUserID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USessionGamePlayerData_GetProductUserID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USessionGamePlayerData_GetProductUserID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USessionGamePlayerData_GetProductUserID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SessionGamePlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USessionGamePlayerData_GetProductUserID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USessionGamePlayerData, nullptr, "GetProductUserID", nullptr, nullptr, sizeof(SessionGamePlayerData_eventGetProductUserID_Parms), Z_Construct_UFunction_USessionGamePlayerData_GetProductUserID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USessionGamePlayerData_GetProductUserID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USessionGamePlayerData_GetProductUserID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USessionGamePlayerData_GetProductUserID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USessionGamePlayerData_GetProductUserID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USessionGamePlayerData_GetProductUserID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USessionGamePlayerData_GetRandomNumbers_Statics
	{
		struct SessionGamePlayerData_eventGetRandomNumbers_Parms
		{
			TArray<int32> Array;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Array_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Array;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USessionGamePlayerData_GetRandomNumbers_Statics::NewProp_Array_Inner = { "Array", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USessionGamePlayerData_GetRandomNumbers_Statics::NewProp_Array = { "Array", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SessionGamePlayerData_eventGetRandomNumbers_Parms, Array), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USessionGamePlayerData_GetRandomNumbers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USessionGamePlayerData_GetRandomNumbers_Statics::NewProp_Array_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USessionGamePlayerData_GetRandomNumbers_Statics::NewProp_Array,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USessionGamePlayerData_GetRandomNumbers_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SessionGamePlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USessionGamePlayerData_GetRandomNumbers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USessionGamePlayerData, nullptr, "GetRandomNumbers", nullptr, nullptr, sizeof(SessionGamePlayerData_eventGetRandomNumbers_Parms), Z_Construct_UFunction_USessionGamePlayerData_GetRandomNumbers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USessionGamePlayerData_GetRandomNumbers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USessionGamePlayerData_GetRandomNumbers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USessionGamePlayerData_GetRandomNumbers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USessionGamePlayerData_GetRandomNumbers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USessionGamePlayerData_GetRandomNumbers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USessionGamePlayerData_GetRank_Statics
	{
		struct SessionGamePlayerData_eventGetRank_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USessionGamePlayerData_GetRank_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SessionGamePlayerData_eventGetRank_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USessionGamePlayerData_GetRank_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USessionGamePlayerData_GetRank_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USessionGamePlayerData_GetRank_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SessionGamePlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USessionGamePlayerData_GetRank_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USessionGamePlayerData, nullptr, "GetRank", nullptr, nullptr, sizeof(SessionGamePlayerData_eventGetRank_Parms), Z_Construct_UFunction_USessionGamePlayerData_GetRank_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USessionGamePlayerData_GetRank_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USessionGamePlayerData_GetRank_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USessionGamePlayerData_GetRank_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USessionGamePlayerData_GetRank()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USessionGamePlayerData_GetRank_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USessionGamePlayerData_GetTeamMemberNum_Statics
	{
		struct SessionGamePlayerData_eventGetTeamMemberNum_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USessionGamePlayerData_GetTeamMemberNum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SessionGamePlayerData_eventGetTeamMemberNum_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USessionGamePlayerData_GetTeamMemberNum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USessionGamePlayerData_GetTeamMemberNum_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USessionGamePlayerData_GetTeamMemberNum_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SessionGamePlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USessionGamePlayerData_GetTeamMemberNum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USessionGamePlayerData, nullptr, "GetTeamMemberNum", nullptr, nullptr, sizeof(SessionGamePlayerData_eventGetTeamMemberNum_Parms), Z_Construct_UFunction_USessionGamePlayerData_GetTeamMemberNum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USessionGamePlayerData_GetTeamMemberNum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USessionGamePlayerData_GetTeamMemberNum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USessionGamePlayerData_GetTeamMemberNum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USessionGamePlayerData_GetTeamMemberNum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USessionGamePlayerData_GetTeamMemberNum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USessionGamePlayerData_GetTeamMemberPUID_Statics
	{
		struct SessionGamePlayerData_eventGetTeamMemberPUID_Parms
		{
			int32 _sIndex;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__sIndex;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USessionGamePlayerData_GetTeamMemberPUID_Statics::NewProp__sIndex = { "_sIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SessionGamePlayerData_eventGetTeamMemberPUID_Parms, _sIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USessionGamePlayerData_GetTeamMemberPUID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SessionGamePlayerData_eventGetTeamMemberPUID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USessionGamePlayerData_GetTeamMemberPUID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USessionGamePlayerData_GetTeamMemberPUID_Statics::NewProp__sIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USessionGamePlayerData_GetTeamMemberPUID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USessionGamePlayerData_GetTeamMemberPUID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SessionGamePlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USessionGamePlayerData_GetTeamMemberPUID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USessionGamePlayerData, nullptr, "GetTeamMemberPUID", nullptr, nullptr, sizeof(SessionGamePlayerData_eventGetTeamMemberPUID_Parms), Z_Construct_UFunction_USessionGamePlayerData_GetTeamMemberPUID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USessionGamePlayerData_GetTeamMemberPUID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USessionGamePlayerData_GetTeamMemberPUID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USessionGamePlayerData_GetTeamMemberPUID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USessionGamePlayerData_GetTeamMemberPUID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USessionGamePlayerData_GetTeamMemberPUID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USessionGamePlayerData_GetTotalGamePoint_Statics
	{
		struct SessionGamePlayerData_eventGetTotalGamePoint_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USessionGamePlayerData_GetTotalGamePoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SessionGamePlayerData_eventGetTotalGamePoint_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USessionGamePlayerData_GetTotalGamePoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USessionGamePlayerData_GetTotalGamePoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USessionGamePlayerData_GetTotalGamePoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SessionGamePlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USessionGamePlayerData_GetTotalGamePoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USessionGamePlayerData, nullptr, "GetTotalGamePoint", nullptr, nullptr, sizeof(SessionGamePlayerData_eventGetTotalGamePoint_Parms), Z_Construct_UFunction_USessionGamePlayerData_GetTotalGamePoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USessionGamePlayerData_GetTotalGamePoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USessionGamePlayerData_GetTotalGamePoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USessionGamePlayerData_GetTotalGamePoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USessionGamePlayerData_GetTotalGamePoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USessionGamePlayerData_GetTotalGamePoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USessionGamePlayerData_GetWeaponDecals_Statics
	{
		struct SessionGamePlayerData_eventGetWeaponDecals_Parms
		{
			TArray<int32> Array;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Array_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Array;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USessionGamePlayerData_GetWeaponDecals_Statics::NewProp_Array_Inner = { "Array", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USessionGamePlayerData_GetWeaponDecals_Statics::NewProp_Array = { "Array", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SessionGamePlayerData_eventGetWeaponDecals_Parms, Array), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USessionGamePlayerData_GetWeaponDecals_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USessionGamePlayerData_GetWeaponDecals_Statics::NewProp_Array_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USessionGamePlayerData_GetWeaponDecals_Statics::NewProp_Array,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USessionGamePlayerData_GetWeaponDecals_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SessionGamePlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USessionGamePlayerData_GetWeaponDecals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USessionGamePlayerData, nullptr, "GetWeaponDecals", nullptr, nullptr, sizeof(SessionGamePlayerData_eventGetWeaponDecals_Parms), Z_Construct_UFunction_USessionGamePlayerData_GetWeaponDecals_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USessionGamePlayerData_GetWeaponDecals_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USessionGamePlayerData_GetWeaponDecals_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USessionGamePlayerData_GetWeaponDecals_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USessionGamePlayerData_GetWeaponDecals()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USessionGamePlayerData_GetWeaponDecals_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USessionGamePlayerData_GetWinLoseCount_Statics
	{
		struct SessionGamePlayerData_eventGetWinLoseCount_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USessionGamePlayerData_GetWinLoseCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SessionGamePlayerData_eventGetWinLoseCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USessionGamePlayerData_GetWinLoseCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USessionGamePlayerData_GetWinLoseCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USessionGamePlayerData_GetWinLoseCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SessionGamePlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USessionGamePlayerData_GetWinLoseCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USessionGamePlayerData, nullptr, "GetWinLoseCount", nullptr, nullptr, sizeof(SessionGamePlayerData_eventGetWinLoseCount_Parms), Z_Construct_UFunction_USessionGamePlayerData_GetWinLoseCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USessionGamePlayerData_GetWinLoseCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USessionGamePlayerData_GetWinLoseCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USessionGamePlayerData_GetWinLoseCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USessionGamePlayerData_GetWinLoseCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USessionGamePlayerData_GetWinLoseCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USessionGamePlayerData_GetWinLoseCounts_Statics
	{
		struct SessionGamePlayerData_eventGetWinLoseCounts_Parms
		{
			TArray<int32> Array;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Array_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Array;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USessionGamePlayerData_GetWinLoseCounts_Statics::NewProp_Array_Inner = { "Array", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USessionGamePlayerData_GetWinLoseCounts_Statics::NewProp_Array = { "Array", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SessionGamePlayerData_eventGetWinLoseCounts_Parms, Array), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USessionGamePlayerData_GetWinLoseCounts_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USessionGamePlayerData_GetWinLoseCounts_Statics::NewProp_Array_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USessionGamePlayerData_GetWinLoseCounts_Statics::NewProp_Array,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USessionGamePlayerData_GetWinLoseCounts_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SessionGamePlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USessionGamePlayerData_GetWinLoseCounts_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USessionGamePlayerData, nullptr, "GetWinLoseCounts", nullptr, nullptr, sizeof(SessionGamePlayerData_eventGetWinLoseCounts_Parms), Z_Construct_UFunction_USessionGamePlayerData_GetWinLoseCounts_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USessionGamePlayerData_GetWinLoseCounts_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USessionGamePlayerData_GetWinLoseCounts_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USessionGamePlayerData_GetWinLoseCounts_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USessionGamePlayerData_GetWinLoseCounts()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USessionGamePlayerData_GetWinLoseCounts_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USessionGamePlayerData_GetWrestlerName_Statics
	{
		struct SessionGamePlayerData_eventGetWrestlerName_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USessionGamePlayerData_GetWrestlerName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SessionGamePlayerData_eventGetWrestlerName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USessionGamePlayerData_GetWrestlerName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USessionGamePlayerData_GetWrestlerName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USessionGamePlayerData_GetWrestlerName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SessionGamePlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USessionGamePlayerData_GetWrestlerName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USessionGamePlayerData, nullptr, "GetWrestlerName", nullptr, nullptr, sizeof(SessionGamePlayerData_eventGetWrestlerName_Parms), Z_Construct_UFunction_USessionGamePlayerData_GetWrestlerName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USessionGamePlayerData_GetWrestlerName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USessionGamePlayerData_GetWrestlerName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USessionGamePlayerData_GetWrestlerName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USessionGamePlayerData_GetWrestlerName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USessionGamePlayerData_GetWrestlerName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USessionGamePlayerData_SetParameters_Statics
	{
		struct SessionGamePlayerData_eventSetParameters_Parms
		{
			FSessionGamePlayerDataBP _stPlayerData;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__stPlayerData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__stPlayerData;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USessionGamePlayerData_SetParameters_Statics::NewProp__stPlayerData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USessionGamePlayerData_SetParameters_Statics::NewProp__stPlayerData = { "_stPlayerData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SessionGamePlayerData_eventSetParameters_Parms, _stPlayerData), Z_Construct_UScriptStruct_FSessionGamePlayerDataBP, METADATA_PARAMS(Z_Construct_UFunction_USessionGamePlayerData_SetParameters_Statics::NewProp__stPlayerData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USessionGamePlayerData_SetParameters_Statics::NewProp__stPlayerData_MetaData)) };
	void Z_Construct_UFunction_USessionGamePlayerData_SetParameters_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SessionGamePlayerData_eventSetParameters_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USessionGamePlayerData_SetParameters_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SessionGamePlayerData_eventSetParameters_Parms), &Z_Construct_UFunction_USessionGamePlayerData_SetParameters_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USessionGamePlayerData_SetParameters_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USessionGamePlayerData_SetParameters_Statics::NewProp__stPlayerData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USessionGamePlayerData_SetParameters_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USessionGamePlayerData_SetParameters_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SessionGamePlayerData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USessionGamePlayerData_SetParameters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USessionGamePlayerData, nullptr, "SetParameters", nullptr, nullptr, sizeof(SessionGamePlayerData_eventSetParameters_Parms), Z_Construct_UFunction_USessionGamePlayerData_SetParameters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USessionGamePlayerData_SetParameters_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USessionGamePlayerData_SetParameters_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USessionGamePlayerData_SetParameters_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USessionGamePlayerData_SetParameters()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USessionGamePlayerData_SetParameters_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USessionGamePlayerData_NoRegister()
	{
		return USessionGamePlayerData::StaticClass();
	}
	struct Z_Construct_UClass_USessionGamePlayerData_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USessionGamePlayerData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSSessionP2PPacketBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USessionGamePlayerData_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USessionGamePlayerData_GetAccountDisplayName, "GetAccountDisplayName" }, // 225816711
		{ &Z_Construct_UFunction_USessionGamePlayerData_GetEpicAccountDisplayName, "GetEpicAccountDisplayName" }, // 784499648
		{ &Z_Construct_UFunction_USessionGamePlayerData_GetFirstName, "GetFirstName" }, // 1624079481
		{ &Z_Construct_UFunction_USessionGamePlayerData_GetLastName, "GetLastName" }, // 1096452170
		{ &Z_Construct_UFunction_USessionGamePlayerData_GetLeague, "GetLeague" }, // 811555218
		{ &Z_Construct_UFunction_USessionGamePlayerData_GetPlatform, "GetPlatform" }, // 4264486239
		{ &Z_Construct_UFunction_USessionGamePlayerData_GetPlayerIcons, "GetPlayerIcons" }, // 4192465358
		{ &Z_Construct_UFunction_USessionGamePlayerData_GetProductUserID, "GetProductUserID" }, // 1810436329
		{ &Z_Construct_UFunction_USessionGamePlayerData_GetRandomNumbers, "GetRandomNumbers" }, // 2854002062
		{ &Z_Construct_UFunction_USessionGamePlayerData_GetRank, "GetRank" }, // 1925033625
		{ &Z_Construct_UFunction_USessionGamePlayerData_GetTeamMemberNum, "GetTeamMemberNum" }, // 3759040519
		{ &Z_Construct_UFunction_USessionGamePlayerData_GetTeamMemberPUID, "GetTeamMemberPUID" }, // 1978434950
		{ &Z_Construct_UFunction_USessionGamePlayerData_GetTotalGamePoint, "GetTotalGamePoint" }, // 2921572768
		{ &Z_Construct_UFunction_USessionGamePlayerData_GetWeaponDecals, "GetWeaponDecals" }, // 34220909
		{ &Z_Construct_UFunction_USessionGamePlayerData_GetWinLoseCount, "GetWinLoseCount" }, // 2109209658
		{ &Z_Construct_UFunction_USessionGamePlayerData_GetWinLoseCounts, "GetWinLoseCounts" }, // 1029819891
		{ &Z_Construct_UFunction_USessionGamePlayerData_GetWrestlerName, "GetWrestlerName" }, // 786317352
		{ &Z_Construct_UFunction_USessionGamePlayerData_SetParameters, "SetParameters" }, // 1269672088
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USessionGamePlayerData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SessionGamePlayerData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SessionGamePlayerData.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USessionGamePlayerData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USessionGamePlayerData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USessionGamePlayerData_Statics::ClassParams = {
		&USessionGamePlayerData::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USessionGamePlayerData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USessionGamePlayerData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USessionGamePlayerData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USessionGamePlayerData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USessionGamePlayerData, 3390630);
	template<> ABP_200508_API UClass* StaticClass<USessionGamePlayerData>()
	{
		return USessionGamePlayerData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USessionGamePlayerData(Z_Construct_UClass_USessionGamePlayerData, &USessionGamePlayerData::StaticClass, TEXT("/Script/ABP_200508"), TEXT("USessionGamePlayerData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USessionGamePlayerData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
