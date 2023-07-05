// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/FELWrestlerProfileUtility.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFELWrestlerProfileUtility() {}
// Cross Module References
	ELITE_GAME_API UClass* Z_Construct_UClass_UFELWrestlerProfileUtility_NoRegister();
	ELITE_GAME_API UClass* Z_Construct_UClass_UFELWrestlerProfileUtility();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EWrestlerID_N();
	ELITE_CORE_API UEnum* Z_Construct_UEnum_ELITE_Core_EAttireType();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FELWrestlerProfile();
// End Cross Module References
	DEFINE_FUNCTION(UFELWrestlerProfileUtility::execGetThumbnailAttireType)
	{
		P_GET_ENUM(EWrestlerID_N,Z_Param__WrestlerID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EAttireType*)Z_Param__Result=UFELWrestlerProfileUtility::GetThumbnailAttireType(EWrestlerID_N(Z_Param__WrestlerID));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFELWrestlerProfileUtility::execGetThumbnailPose)
	{
		P_GET_ENUM(EWrestlerID_N,Z_Param__WrestlerID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UFELWrestlerProfileUtility::GetThumbnailPose(EWrestlerID_N(Z_Param__WrestlerID));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFELWrestlerProfileUtility::execGetWrestlerCareerName)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out__outName);
		P_GET_ENUM(EWrestlerID_N,Z_Param__WrestlerID);
		P_GET_UBOOL(Z_Param_Capital);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFELWrestlerProfileUtility::GetWrestlerCareerName(Z_Param_Out__outName,EWrestlerID_N(Z_Param__WrestlerID),Z_Param_Capital);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFELWrestlerProfileUtility::execGetWrestlerEntranceName)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out__outName);
		P_GET_ENUM(EWrestlerID_N,Z_Param__WrestlerID);
		P_GET_UBOOL(Z_Param_Capital);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFELWrestlerProfileUtility::GetWrestlerEntranceName(Z_Param_Out__outName,EWrestlerID_N(Z_Param__WrestlerID),Z_Param_Capital);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFELWrestlerProfileUtility::execGetWrestlerName)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out__outName);
		P_GET_ENUM(EWrestlerID_N,Z_Param__WrestlerID);
		P_GET_UBOOL(Z_Param_IsTwoLine);
		P_GET_UBOOL(Z_Param_Capital);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFELWrestlerProfileUtility::GetWrestlerName(Z_Param_Out__outName,EWrestlerID_N(Z_Param__WrestlerID),Z_Param_IsTwoLine,Z_Param_Capital);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFELWrestlerProfileUtility::execGetWrestlerProfile)
	{
		P_GET_STRUCT_REF(FELWrestlerProfile,Z_Param_Out__outProfile);
		P_GET_ENUM(EWrestlerID_N,Z_Param__WrestlerID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFELWrestlerProfileUtility::GetWrestlerProfile(Z_Param_Out__outProfile,EWrestlerID_N(Z_Param__WrestlerID));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFELWrestlerProfileUtility::execGetWrestlerShortName)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out__outName);
		P_GET_ENUM(EWrestlerID_N,Z_Param__WrestlerID);
		P_GET_UBOOL(Z_Param_Capital);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFELWrestlerProfileUtility::GetWrestlerShortName(Z_Param_Out__outName,EWrestlerID_N(Z_Param__WrestlerID),Z_Param_Capital);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFELWrestlerProfileUtility::execGetWrestlerSNS)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out__outName);
		P_GET_ENUM(EWrestlerID_N,Z_Param__WrestlerID);
		P_GET_UBOOL(Z_Param_Capital);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFELWrestlerProfileUtility::GetWrestlerSNS(Z_Param_Out__outName,EWrestlerID_N(Z_Param__WrestlerID),Z_Param_Capital);
		P_NATIVE_END;
	}
	void UFELWrestlerProfileUtility::StaticRegisterNativesUFELWrestlerProfileUtility()
	{
		UClass* Class = UFELWrestlerProfileUtility::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetThumbnailAttireType", &UFELWrestlerProfileUtility::execGetThumbnailAttireType },
			{ "GetThumbnailPose", &UFELWrestlerProfileUtility::execGetThumbnailPose },
			{ "GetWrestlerCareerName", &UFELWrestlerProfileUtility::execGetWrestlerCareerName },
			{ "GetWrestlerEntranceName", &UFELWrestlerProfileUtility::execGetWrestlerEntranceName },
			{ "GetWrestlerName", &UFELWrestlerProfileUtility::execGetWrestlerName },
			{ "GetWrestlerProfile", &UFELWrestlerProfileUtility::execGetWrestlerProfile },
			{ "GetWrestlerShortName", &UFELWrestlerProfileUtility::execGetWrestlerShortName },
			{ "GetWrestlerSNS", &UFELWrestlerProfileUtility::execGetWrestlerSNS },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFELWrestlerProfileUtility_GetThumbnailAttireType_Statics
	{
		struct FELWrestlerProfileUtility_eventGetThumbnailAttireType_Parms
		{
			EWrestlerID_N _WrestlerID;
			EAttireType ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__WrestlerID_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__WrestlerID_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__WrestlerID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFELWrestlerProfileUtility_GetThumbnailAttireType_Statics::NewProp__WrestlerID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFELWrestlerProfileUtility_GetThumbnailAttireType_Statics::NewProp__WrestlerID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFELWrestlerProfileUtility_GetThumbnailAttireType_Statics::NewProp__WrestlerID = { "_WrestlerID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELWrestlerProfileUtility_eventGetThumbnailAttireType_Parms, _WrestlerID), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(Z_Construct_UFunction_UFELWrestlerProfileUtility_GetThumbnailAttireType_Statics::NewProp__WrestlerID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELWrestlerProfileUtility_GetThumbnailAttireType_Statics::NewProp__WrestlerID_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFELWrestlerProfileUtility_GetThumbnailAttireType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFELWrestlerProfileUtility_GetThumbnailAttireType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELWrestlerProfileUtility_eventGetThumbnailAttireType_Parms, ReturnValue), Z_Construct_UEnum_ELITE_Core_EAttireType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFELWrestlerProfileUtility_GetThumbnailAttireType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELWrestlerProfileUtility_GetThumbnailAttireType_Statics::NewProp__WrestlerID_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELWrestlerProfileUtility_GetThumbnailAttireType_Statics::NewProp__WrestlerID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELWrestlerProfileUtility_GetThumbnailAttireType_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELWrestlerProfileUtility_GetThumbnailAttireType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFELWrestlerProfileUtility_GetThumbnailAttireType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FELWrestlerProfileUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFELWrestlerProfileUtility_GetThumbnailAttireType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFELWrestlerProfileUtility, nullptr, "GetThumbnailAttireType", nullptr, nullptr, sizeof(FELWrestlerProfileUtility_eventGetThumbnailAttireType_Parms), Z_Construct_UFunction_UFELWrestlerProfileUtility_GetThumbnailAttireType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELWrestlerProfileUtility_GetThumbnailAttireType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFELWrestlerProfileUtility_GetThumbnailAttireType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELWrestlerProfileUtility_GetThumbnailAttireType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFELWrestlerProfileUtility_GetThumbnailAttireType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFELWrestlerProfileUtility_GetThumbnailAttireType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFELWrestlerProfileUtility_GetThumbnailPose_Statics
	{
		struct FELWrestlerProfileUtility_eventGetThumbnailPose_Parms
		{
			EWrestlerID_N _WrestlerID;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__WrestlerID_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__WrestlerID_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__WrestlerID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFELWrestlerProfileUtility_GetThumbnailPose_Statics::NewProp__WrestlerID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFELWrestlerProfileUtility_GetThumbnailPose_Statics::NewProp__WrestlerID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFELWrestlerProfileUtility_GetThumbnailPose_Statics::NewProp__WrestlerID = { "_WrestlerID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELWrestlerProfileUtility_eventGetThumbnailPose_Parms, _WrestlerID), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(Z_Construct_UFunction_UFELWrestlerProfileUtility_GetThumbnailPose_Statics::NewProp__WrestlerID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELWrestlerProfileUtility_GetThumbnailPose_Statics::NewProp__WrestlerID_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFELWrestlerProfileUtility_GetThumbnailPose_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELWrestlerProfileUtility_eventGetThumbnailPose_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFELWrestlerProfileUtility_GetThumbnailPose_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELWrestlerProfileUtility_GetThumbnailPose_Statics::NewProp__WrestlerID_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELWrestlerProfileUtility_GetThumbnailPose_Statics::NewProp__WrestlerID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELWrestlerProfileUtility_GetThumbnailPose_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFELWrestlerProfileUtility_GetThumbnailPose_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FELWrestlerProfileUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFELWrestlerProfileUtility_GetThumbnailPose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFELWrestlerProfileUtility, nullptr, "GetThumbnailPose", nullptr, nullptr, sizeof(FELWrestlerProfileUtility_eventGetThumbnailPose_Parms), Z_Construct_UFunction_UFELWrestlerProfileUtility_GetThumbnailPose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELWrestlerProfileUtility_GetThumbnailPose_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFELWrestlerProfileUtility_GetThumbnailPose_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELWrestlerProfileUtility_GetThumbnailPose_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFELWrestlerProfileUtility_GetThumbnailPose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFELWrestlerProfileUtility_GetThumbnailPose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFELWrestlerProfileUtility_GetWrestlerCareerName_Statics
	{
		struct FELWrestlerProfileUtility_eventGetWrestlerCareerName_Parms
		{
			FString _outName;
			EWrestlerID_N _WrestlerID;
			bool Capital;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__outName;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__WrestlerID_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__WrestlerID;
		static void NewProp_Capital_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Capital;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFELWrestlerProfileUtility_GetWrestlerCareerName_Statics::NewProp__outName = { "_outName", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELWrestlerProfileUtility_eventGetWrestlerCareerName_Parms, _outName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFELWrestlerProfileUtility_GetWrestlerCareerName_Statics::NewProp__WrestlerID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFELWrestlerProfileUtility_GetWrestlerCareerName_Statics::NewProp__WrestlerID = { "_WrestlerID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELWrestlerProfileUtility_eventGetWrestlerCareerName_Parms, _WrestlerID), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELWrestlerProfileUtility_GetWrestlerCareerName_Statics::NewProp_Capital_SetBit(void* Obj)
	{
		((FELWrestlerProfileUtility_eventGetWrestlerCareerName_Parms*)Obj)->Capital = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELWrestlerProfileUtility_GetWrestlerCareerName_Statics::NewProp_Capital = { "Capital", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELWrestlerProfileUtility_eventGetWrestlerCareerName_Parms), &Z_Construct_UFunction_UFELWrestlerProfileUtility_GetWrestlerCareerName_Statics::NewProp_Capital_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFELWrestlerProfileUtility_GetWrestlerCareerName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELWrestlerProfileUtility_GetWrestlerCareerName_Statics::NewProp__outName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELWrestlerProfileUtility_GetWrestlerCareerName_Statics::NewProp__WrestlerID_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELWrestlerProfileUtility_GetWrestlerCareerName_Statics::NewProp__WrestlerID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELWrestlerProfileUtility_GetWrestlerCareerName_Statics::NewProp_Capital,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFELWrestlerProfileUtility_GetWrestlerCareerName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FELWrestlerProfileUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFELWrestlerProfileUtility_GetWrestlerCareerName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFELWrestlerProfileUtility, nullptr, "GetWrestlerCareerName", nullptr, nullptr, sizeof(FELWrestlerProfileUtility_eventGetWrestlerCareerName_Parms), Z_Construct_UFunction_UFELWrestlerProfileUtility_GetWrestlerCareerName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELWrestlerProfileUtility_GetWrestlerCareerName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFELWrestlerProfileUtility_GetWrestlerCareerName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELWrestlerProfileUtility_GetWrestlerCareerName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFELWrestlerProfileUtility_GetWrestlerCareerName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFELWrestlerProfileUtility_GetWrestlerCareerName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFELWrestlerProfileUtility_GetWrestlerEntranceName_Statics
	{
		struct FELWrestlerProfileUtility_eventGetWrestlerEntranceName_Parms
		{
			FString _outName;
			EWrestlerID_N _WrestlerID;
			bool Capital;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__outName;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__WrestlerID_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__WrestlerID;
		static void NewProp_Capital_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Capital;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFELWrestlerProfileUtility_GetWrestlerEntranceName_Statics::NewProp__outName = { "_outName", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELWrestlerProfileUtility_eventGetWrestlerEntranceName_Parms, _outName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFELWrestlerProfileUtility_GetWrestlerEntranceName_Statics::NewProp__WrestlerID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFELWrestlerProfileUtility_GetWrestlerEntranceName_Statics::NewProp__WrestlerID = { "_WrestlerID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELWrestlerProfileUtility_eventGetWrestlerEntranceName_Parms, _WrestlerID), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELWrestlerProfileUtility_GetWrestlerEntranceName_Statics::NewProp_Capital_SetBit(void* Obj)
	{
		((FELWrestlerProfileUtility_eventGetWrestlerEntranceName_Parms*)Obj)->Capital = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELWrestlerProfileUtility_GetWrestlerEntranceName_Statics::NewProp_Capital = { "Capital", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELWrestlerProfileUtility_eventGetWrestlerEntranceName_Parms), &Z_Construct_UFunction_UFELWrestlerProfileUtility_GetWrestlerEntranceName_Statics::NewProp_Capital_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFELWrestlerProfileUtility_GetWrestlerEntranceName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELWrestlerProfileUtility_GetWrestlerEntranceName_Statics::NewProp__outName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELWrestlerProfileUtility_GetWrestlerEntranceName_Statics::NewProp__WrestlerID_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELWrestlerProfileUtility_GetWrestlerEntranceName_Statics::NewProp__WrestlerID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELWrestlerProfileUtility_GetWrestlerEntranceName_Statics::NewProp_Capital,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFELWrestlerProfileUtility_GetWrestlerEntranceName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FELWrestlerProfileUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFELWrestlerProfileUtility_GetWrestlerEntranceName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFELWrestlerProfileUtility, nullptr, "GetWrestlerEntranceName", nullptr, nullptr, sizeof(FELWrestlerProfileUtility_eventGetWrestlerEntranceName_Parms), Z_Construct_UFunction_UFELWrestlerProfileUtility_GetWrestlerEntranceName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELWrestlerProfileUtility_GetWrestlerEntranceName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFELWrestlerProfileUtility_GetWrestlerEntranceName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELWrestlerProfileUtility_GetWrestlerEntranceName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFELWrestlerProfileUtility_GetWrestlerEntranceName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFELWrestlerProfileUtility_GetWrestlerEntranceName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFELWrestlerProfileUtility_GetWrestlerName_Statics
	{
		struct FELWrestlerProfileUtility_eventGetWrestlerName_Parms
		{
			FString _outName;
			EWrestlerID_N _WrestlerID;
			bool IsTwoLine;
			bool Capital;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__outName;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__WrestlerID_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__WrestlerID;
		static void NewProp_IsTwoLine_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsTwoLine;
		static void NewProp_Capital_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Capital;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFELWrestlerProfileUtility_GetWrestlerName_Statics::NewProp__outName = { "_outName", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELWrestlerProfileUtility_eventGetWrestlerName_Parms, _outName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFELWrestlerProfileUtility_GetWrestlerName_Statics::NewProp__WrestlerID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFELWrestlerProfileUtility_GetWrestlerName_Statics::NewProp__WrestlerID = { "_WrestlerID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELWrestlerProfileUtility_eventGetWrestlerName_Parms, _WrestlerID), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELWrestlerProfileUtility_GetWrestlerName_Statics::NewProp_IsTwoLine_SetBit(void* Obj)
	{
		((FELWrestlerProfileUtility_eventGetWrestlerName_Parms*)Obj)->IsTwoLine = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELWrestlerProfileUtility_GetWrestlerName_Statics::NewProp_IsTwoLine = { "IsTwoLine", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELWrestlerProfileUtility_eventGetWrestlerName_Parms), &Z_Construct_UFunction_UFELWrestlerProfileUtility_GetWrestlerName_Statics::NewProp_IsTwoLine_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELWrestlerProfileUtility_GetWrestlerName_Statics::NewProp_Capital_SetBit(void* Obj)
	{
		((FELWrestlerProfileUtility_eventGetWrestlerName_Parms*)Obj)->Capital = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELWrestlerProfileUtility_GetWrestlerName_Statics::NewProp_Capital = { "Capital", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELWrestlerProfileUtility_eventGetWrestlerName_Parms), &Z_Construct_UFunction_UFELWrestlerProfileUtility_GetWrestlerName_Statics::NewProp_Capital_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFELWrestlerProfileUtility_GetWrestlerName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELWrestlerProfileUtility_GetWrestlerName_Statics::NewProp__outName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELWrestlerProfileUtility_GetWrestlerName_Statics::NewProp__WrestlerID_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELWrestlerProfileUtility_GetWrestlerName_Statics::NewProp__WrestlerID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELWrestlerProfileUtility_GetWrestlerName_Statics::NewProp_IsTwoLine,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELWrestlerProfileUtility_GetWrestlerName_Statics::NewProp_Capital,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFELWrestlerProfileUtility_GetWrestlerName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FELWrestlerProfileUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFELWrestlerProfileUtility_GetWrestlerName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFELWrestlerProfileUtility, nullptr, "GetWrestlerName", nullptr, nullptr, sizeof(FELWrestlerProfileUtility_eventGetWrestlerName_Parms), Z_Construct_UFunction_UFELWrestlerProfileUtility_GetWrestlerName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELWrestlerProfileUtility_GetWrestlerName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFELWrestlerProfileUtility_GetWrestlerName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELWrestlerProfileUtility_GetWrestlerName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFELWrestlerProfileUtility_GetWrestlerName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFELWrestlerProfileUtility_GetWrestlerName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFELWrestlerProfileUtility_GetWrestlerProfile_Statics
	{
		struct FELWrestlerProfileUtility_eventGetWrestlerProfile_Parms
		{
			FELWrestlerProfile _outProfile;
			EWrestlerID_N _WrestlerID;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__outProfile;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__WrestlerID_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__WrestlerID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFELWrestlerProfileUtility_GetWrestlerProfile_Statics::NewProp__outProfile = { "_outProfile", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELWrestlerProfileUtility_eventGetWrestlerProfile_Parms, _outProfile), Z_Construct_UScriptStruct_FELWrestlerProfile, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFELWrestlerProfileUtility_GetWrestlerProfile_Statics::NewProp__WrestlerID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFELWrestlerProfileUtility_GetWrestlerProfile_Statics::NewProp__WrestlerID = { "_WrestlerID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELWrestlerProfileUtility_eventGetWrestlerProfile_Parms, _WrestlerID), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELWrestlerProfileUtility_GetWrestlerProfile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FELWrestlerProfileUtility_eventGetWrestlerProfile_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELWrestlerProfileUtility_GetWrestlerProfile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELWrestlerProfileUtility_eventGetWrestlerProfile_Parms), &Z_Construct_UFunction_UFELWrestlerProfileUtility_GetWrestlerProfile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFELWrestlerProfileUtility_GetWrestlerProfile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELWrestlerProfileUtility_GetWrestlerProfile_Statics::NewProp__outProfile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELWrestlerProfileUtility_GetWrestlerProfile_Statics::NewProp__WrestlerID_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELWrestlerProfileUtility_GetWrestlerProfile_Statics::NewProp__WrestlerID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELWrestlerProfileUtility_GetWrestlerProfile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFELWrestlerProfileUtility_GetWrestlerProfile_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FELWrestlerProfileUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFELWrestlerProfileUtility_GetWrestlerProfile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFELWrestlerProfileUtility, nullptr, "GetWrestlerProfile", nullptr, nullptr, sizeof(FELWrestlerProfileUtility_eventGetWrestlerProfile_Parms), Z_Construct_UFunction_UFELWrestlerProfileUtility_GetWrestlerProfile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELWrestlerProfileUtility_GetWrestlerProfile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFELWrestlerProfileUtility_GetWrestlerProfile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELWrestlerProfileUtility_GetWrestlerProfile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFELWrestlerProfileUtility_GetWrestlerProfile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFELWrestlerProfileUtility_GetWrestlerProfile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFELWrestlerProfileUtility_GetWrestlerShortName_Statics
	{
		struct FELWrestlerProfileUtility_eventGetWrestlerShortName_Parms
		{
			FString _outName;
			EWrestlerID_N _WrestlerID;
			bool Capital;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__outName;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__WrestlerID_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__WrestlerID;
		static void NewProp_Capital_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Capital;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFELWrestlerProfileUtility_GetWrestlerShortName_Statics::NewProp__outName = { "_outName", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELWrestlerProfileUtility_eventGetWrestlerShortName_Parms, _outName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFELWrestlerProfileUtility_GetWrestlerShortName_Statics::NewProp__WrestlerID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFELWrestlerProfileUtility_GetWrestlerShortName_Statics::NewProp__WrestlerID = { "_WrestlerID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELWrestlerProfileUtility_eventGetWrestlerShortName_Parms, _WrestlerID), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELWrestlerProfileUtility_GetWrestlerShortName_Statics::NewProp_Capital_SetBit(void* Obj)
	{
		((FELWrestlerProfileUtility_eventGetWrestlerShortName_Parms*)Obj)->Capital = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELWrestlerProfileUtility_GetWrestlerShortName_Statics::NewProp_Capital = { "Capital", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELWrestlerProfileUtility_eventGetWrestlerShortName_Parms), &Z_Construct_UFunction_UFELWrestlerProfileUtility_GetWrestlerShortName_Statics::NewProp_Capital_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFELWrestlerProfileUtility_GetWrestlerShortName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELWrestlerProfileUtility_GetWrestlerShortName_Statics::NewProp__outName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELWrestlerProfileUtility_GetWrestlerShortName_Statics::NewProp__WrestlerID_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELWrestlerProfileUtility_GetWrestlerShortName_Statics::NewProp__WrestlerID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELWrestlerProfileUtility_GetWrestlerShortName_Statics::NewProp_Capital,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFELWrestlerProfileUtility_GetWrestlerShortName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FELWrestlerProfileUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFELWrestlerProfileUtility_GetWrestlerShortName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFELWrestlerProfileUtility, nullptr, "GetWrestlerShortName", nullptr, nullptr, sizeof(FELWrestlerProfileUtility_eventGetWrestlerShortName_Parms), Z_Construct_UFunction_UFELWrestlerProfileUtility_GetWrestlerShortName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELWrestlerProfileUtility_GetWrestlerShortName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFELWrestlerProfileUtility_GetWrestlerShortName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELWrestlerProfileUtility_GetWrestlerShortName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFELWrestlerProfileUtility_GetWrestlerShortName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFELWrestlerProfileUtility_GetWrestlerShortName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFELWrestlerProfileUtility_GetWrestlerSNS_Statics
	{
		struct FELWrestlerProfileUtility_eventGetWrestlerSNS_Parms
		{
			FString _outName;
			EWrestlerID_N _WrestlerID;
			bool Capital;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__outName;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__WrestlerID_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__WrestlerID;
		static void NewProp_Capital_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Capital;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFELWrestlerProfileUtility_GetWrestlerSNS_Statics::NewProp__outName = { "_outName", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELWrestlerProfileUtility_eventGetWrestlerSNS_Parms, _outName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFELWrestlerProfileUtility_GetWrestlerSNS_Statics::NewProp__WrestlerID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFELWrestlerProfileUtility_GetWrestlerSNS_Statics::NewProp__WrestlerID = { "_WrestlerID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELWrestlerProfileUtility_eventGetWrestlerSNS_Parms, _WrestlerID), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFELWrestlerProfileUtility_GetWrestlerSNS_Statics::NewProp_Capital_SetBit(void* Obj)
	{
		((FELWrestlerProfileUtility_eventGetWrestlerSNS_Parms*)Obj)->Capital = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFELWrestlerProfileUtility_GetWrestlerSNS_Statics::NewProp_Capital = { "Capital", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELWrestlerProfileUtility_eventGetWrestlerSNS_Parms), &Z_Construct_UFunction_UFELWrestlerProfileUtility_GetWrestlerSNS_Statics::NewProp_Capital_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFELWrestlerProfileUtility_GetWrestlerSNS_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELWrestlerProfileUtility_GetWrestlerSNS_Statics::NewProp__outName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELWrestlerProfileUtility_GetWrestlerSNS_Statics::NewProp__WrestlerID_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELWrestlerProfileUtility_GetWrestlerSNS_Statics::NewProp__WrestlerID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELWrestlerProfileUtility_GetWrestlerSNS_Statics::NewProp_Capital,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFELWrestlerProfileUtility_GetWrestlerSNS_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FELWrestlerProfileUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFELWrestlerProfileUtility_GetWrestlerSNS_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFELWrestlerProfileUtility, nullptr, "GetWrestlerSNS", nullptr, nullptr, sizeof(FELWrestlerProfileUtility_eventGetWrestlerSNS_Parms), Z_Construct_UFunction_UFELWrestlerProfileUtility_GetWrestlerSNS_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELWrestlerProfileUtility_GetWrestlerSNS_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFELWrestlerProfileUtility_GetWrestlerSNS_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELWrestlerProfileUtility_GetWrestlerSNS_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFELWrestlerProfileUtility_GetWrestlerSNS()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFELWrestlerProfileUtility_GetWrestlerSNS_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFELWrestlerProfileUtility_NoRegister()
	{
		return UFELWrestlerProfileUtility::StaticClass();
	}
	struct Z_Construct_UClass_UFELWrestlerProfileUtility_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFELWrestlerProfileUtility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE_Game,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFELWrestlerProfileUtility_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFELWrestlerProfileUtility_GetThumbnailAttireType, "GetThumbnailAttireType" }, // 3673179126
		{ &Z_Construct_UFunction_UFELWrestlerProfileUtility_GetThumbnailPose, "GetThumbnailPose" }, // 269220498
		{ &Z_Construct_UFunction_UFELWrestlerProfileUtility_GetWrestlerCareerName, "GetWrestlerCareerName" }, // 2173494188
		{ &Z_Construct_UFunction_UFELWrestlerProfileUtility_GetWrestlerEntranceName, "GetWrestlerEntranceName" }, // 1948807378
		{ &Z_Construct_UFunction_UFELWrestlerProfileUtility_GetWrestlerName, "GetWrestlerName" }, // 1256651175
		{ &Z_Construct_UFunction_UFELWrestlerProfileUtility_GetWrestlerProfile, "GetWrestlerProfile" }, // 778206569
		{ &Z_Construct_UFunction_UFELWrestlerProfileUtility_GetWrestlerShortName, "GetWrestlerShortName" }, // 1218538091
		{ &Z_Construct_UFunction_UFELWrestlerProfileUtility_GetWrestlerSNS, "GetWrestlerSNS" }, // 2521231018
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFELWrestlerProfileUtility_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "FELWrestlerProfileUtility.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FELWrestlerProfileUtility.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFELWrestlerProfileUtility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFELWrestlerProfileUtility>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFELWrestlerProfileUtility_Statics::ClassParams = {
		&UFELWrestlerProfileUtility::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UFELWrestlerProfileUtility_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFELWrestlerProfileUtility_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFELWrestlerProfileUtility()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFELWrestlerProfileUtility_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFELWrestlerProfileUtility, 942507678);
	template<> ELITE_GAME_API UClass* StaticClass<UFELWrestlerProfileUtility>()
	{
		return UFELWrestlerProfileUtility::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFELWrestlerProfileUtility(Z_Construct_UClass_UFELWrestlerProfileUtility, &UFELWrestlerProfileUtility::StaticClass, TEXT("/Script/ELITE_Game"), TEXT("UFELWrestlerProfileUtility"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFELWrestlerProfileUtility);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
