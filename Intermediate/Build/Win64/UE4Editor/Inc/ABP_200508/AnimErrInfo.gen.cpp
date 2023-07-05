// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/AnimErrInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimErrInfo() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FAnimErrInfo();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FMovesSituation();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EAnimErrType();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
// End Cross Module References
class UScriptStruct* FAnimErrInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FAnimErrInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimErrInfo, Z_Construct_UPackage__Script_ABP_200508(), TEXT("AnimErrInfo"), sizeof(FAnimErrInfo), Get_Z_Construct_UScriptStruct_FAnimErrInfo_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FAnimErrInfo>()
{
	return FAnimErrInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimErrInfo(FAnimErrInfo::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("AnimErrInfo"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFAnimErrInfo
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFAnimErrInfo()
	{
		UScriptStruct::DeferCppStructOps<FAnimErrInfo>(FName(TEXT("AnimErrInfo")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFAnimErrInfo;
	struct Z_Construct_UScriptStruct_FAnimErrInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Situation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Situation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CategoryID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CategoryID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_errType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_errType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_errType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewIdx_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PreviewIdx;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DateTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DateTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistanceOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DistanceOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AllOffset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimErrInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AnimErrInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimErrInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimErrInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimErrInfo_Statics::NewProp_Situation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimErrInfo" },
		{ "ModuleRelativePath", "Public/AnimErrInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimErrInfo_Statics::NewProp_Situation = { "Situation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimErrInfo, Situation), Z_Construct_UScriptStruct_FMovesSituation, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimErrInfo_Statics::NewProp_Situation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimErrInfo_Statics::NewProp_Situation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimErrInfo_Statics::NewProp_CategoryID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimErrInfo" },
		{ "ModuleRelativePath", "Public/AnimErrInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimErrInfo_Statics::NewProp_CategoryID = { "CategoryID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimErrInfo, CategoryID), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimErrInfo_Statics::NewProp_CategoryID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimErrInfo_Statics::NewProp_CategoryID_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimErrInfo_Statics::NewProp_errType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimErrInfo_Statics::NewProp_errType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimErrInfo" },
		{ "ModuleRelativePath", "Public/AnimErrInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimErrInfo_Statics::NewProp_errType = { "errType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimErrInfo, errType), Z_Construct_UEnum_ABP_200508_EAnimErrType, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimErrInfo_Statics::NewProp_errType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimErrInfo_Statics::NewProp_errType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimErrInfo_Statics::NewProp_PreviewIdx_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimErrInfo" },
		{ "ModuleRelativePath", "Public/AnimErrInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimErrInfo_Statics::NewProp_PreviewIdx = { "PreviewIdx", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimErrInfo, PreviewIdx), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimErrInfo_Statics::NewProp_PreviewIdx_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimErrInfo_Statics::NewProp_PreviewIdx_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimErrInfo_Statics::NewProp_DateTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimErrInfo" },
		{ "ModuleRelativePath", "Public/AnimErrInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimErrInfo_Statics::NewProp_DateTime = { "DateTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimErrInfo, DateTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimErrInfo_Statics::NewProp_DateTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimErrInfo_Statics::NewProp_DateTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimErrInfo_Statics::NewProp_DistanceOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimErrInfo" },
		{ "ModuleRelativePath", "Public/AnimErrInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimErrInfo_Statics::NewProp_DistanceOffset = { "DistanceOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimErrInfo, DistanceOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimErrInfo_Statics::NewProp_DistanceOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimErrInfo_Statics::NewProp_DistanceOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimErrInfo_Statics::NewProp_AllOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AnimErrInfo" },
		{ "ModuleRelativePath", "Public/AnimErrInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimErrInfo_Statics::NewProp_AllOffset = { "AllOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimErrInfo, AllOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimErrInfo_Statics::NewProp_AllOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimErrInfo_Statics::NewProp_AllOffset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimErrInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimErrInfo_Statics::NewProp_Situation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimErrInfo_Statics::NewProp_CategoryID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimErrInfo_Statics::NewProp_errType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimErrInfo_Statics::NewProp_errType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimErrInfo_Statics::NewProp_PreviewIdx,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimErrInfo_Statics::NewProp_DateTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimErrInfo_Statics::NewProp_DistanceOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimErrInfo_Statics::NewProp_AllOffset,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimErrInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"AnimErrInfo",
		sizeof(FAnimErrInfo),
		alignof(FAnimErrInfo),
		Z_Construct_UScriptStruct_FAnimErrInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimErrInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimErrInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimErrInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimErrInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimErrInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimErrInfo"), sizeof(FAnimErrInfo), Get_Z_Construct_UScriptStruct_FAnimErrInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimErrInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimErrInfo_Hash() { return 3453771555U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
