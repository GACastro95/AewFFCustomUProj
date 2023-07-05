// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/CareerEventBaseInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCareerEventBaseInfo() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FCareerEventBaseInfo();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
class UScriptStruct* FCareerEventBaseInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FCareerEventBaseInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCareerEventBaseInfo, Z_Construct_UPackage__Script_ABP_200508(), TEXT("CareerEventBaseInfo"), sizeof(FCareerEventBaseInfo), Get_Z_Construct_UScriptStruct_FCareerEventBaseInfo_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FCareerEventBaseInfo>()
{
	return FCareerEventBaseInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCareerEventBaseInfo(FCareerEventBaseInfo::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("CareerEventBaseInfo"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFCareerEventBaseInfo
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFCareerEventBaseInfo()
	{
		UScriptStruct::DeferCppStructOps<FCareerEventBaseInfo>(FName(TEXT("CareerEventBaseInfo")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFCareerEventBaseInfo;
	struct Z_Construct_UScriptStruct_FCareerEventBaseInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Title_TextID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Title_TextID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventBaseInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CareerEventBaseInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCareerEventBaseInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCareerEventBaseInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerEventBaseInfo_Statics::NewProp_Title_TextID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerEventBaseInfo" },
		{ "ModuleRelativePath", "Public/CareerEventBaseInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerEventBaseInfo_Statics::NewProp_Title_TextID = { "Title_TextID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerEventBaseInfo, Title_TextID), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventBaseInfo_Statics::NewProp_Title_TextID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventBaseInfo_Statics::NewProp_Title_TextID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCareerEventBaseInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerEventBaseInfo_Statics::NewProp_Title_TextID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCareerEventBaseInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"CareerEventBaseInfo",
		sizeof(FCareerEventBaseInfo),
		alignof(FCareerEventBaseInfo),
		Z_Construct_UScriptStruct_FCareerEventBaseInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventBaseInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerEventBaseInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerEventBaseInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCareerEventBaseInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCareerEventBaseInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CareerEventBaseInfo"), sizeof(FCareerEventBaseInfo), Get_Z_Construct_UScriptStruct_FCareerEventBaseInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCareerEventBaseInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCareerEventBaseInfo_Hash() { return 385419552U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
