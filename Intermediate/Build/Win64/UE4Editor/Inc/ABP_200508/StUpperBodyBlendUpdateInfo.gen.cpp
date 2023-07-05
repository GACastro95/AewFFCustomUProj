// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/StUpperBodyBlendUpdateInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStUpperBodyBlendUpdateInfo() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FStUpperBodyBlendUpdateInfo();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FStUpperBodyBlendInfo();
// End Cross Module References

static_assert(std::is_polymorphic<FStUpperBodyBlendUpdateInfo>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FStUpperBodyBlendUpdateInfo cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FStUpperBodyBlendUpdateInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FStUpperBodyBlendUpdateInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStUpperBodyBlendUpdateInfo, Z_Construct_UPackage__Script_ABP_200508(), TEXT("StUpperBodyBlendUpdateInfo"), sizeof(FStUpperBodyBlendUpdateInfo), Get_Z_Construct_UScriptStruct_FStUpperBodyBlendUpdateInfo_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FStUpperBodyBlendUpdateInfo>()
{
	return FStUpperBodyBlendUpdateInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStUpperBodyBlendUpdateInfo(FStUpperBodyBlendUpdateInfo::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("StUpperBodyBlendUpdateInfo"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFStUpperBodyBlendUpdateInfo
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFStUpperBodyBlendUpdateInfo()
	{
		UScriptStruct::DeferCppStructOps<FStUpperBodyBlendUpdateInfo>(FName(TEXT("StUpperBodyBlendUpdateInfo")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFStUpperBodyBlendUpdateInfo;
	struct Z_Construct_UScriptStruct_FStUpperBodyBlendUpdateInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Info_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Info;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Count_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Count;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CoolTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CoolTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStUpperBodyBlendUpdateInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StUpperBodyBlendUpdateInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStUpperBodyBlendUpdateInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStUpperBodyBlendUpdateInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStUpperBodyBlendUpdateInfo_Statics::NewProp_Info_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StUpperBodyBlendUpdateInfo" },
		{ "ModuleRelativePath", "Public/StUpperBodyBlendUpdateInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStUpperBodyBlendUpdateInfo_Statics::NewProp_Info = { "Info", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStUpperBodyBlendUpdateInfo, Info), Z_Construct_UScriptStruct_FStUpperBodyBlendInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FStUpperBodyBlendUpdateInfo_Statics::NewProp_Info_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStUpperBodyBlendUpdateInfo_Statics::NewProp_Info_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStUpperBodyBlendUpdateInfo_Statics::NewProp_Count_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StUpperBodyBlendUpdateInfo" },
		{ "ModuleRelativePath", "Public/StUpperBodyBlendUpdateInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStUpperBodyBlendUpdateInfo_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStUpperBodyBlendUpdateInfo, Count), METADATA_PARAMS(Z_Construct_UScriptStruct_FStUpperBodyBlendUpdateInfo_Statics::NewProp_Count_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStUpperBodyBlendUpdateInfo_Statics::NewProp_Count_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStUpperBodyBlendUpdateInfo_Statics::NewProp_CoolTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StUpperBodyBlendUpdateInfo" },
		{ "ModuleRelativePath", "Public/StUpperBodyBlendUpdateInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStUpperBodyBlendUpdateInfo_Statics::NewProp_CoolTime = { "CoolTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStUpperBodyBlendUpdateInfo, CoolTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FStUpperBodyBlendUpdateInfo_Statics::NewProp_CoolTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStUpperBodyBlendUpdateInfo_Statics::NewProp_CoolTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStUpperBodyBlendUpdateInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStUpperBodyBlendUpdateInfo_Statics::NewProp_Info,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStUpperBodyBlendUpdateInfo_Statics::NewProp_Count,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStUpperBodyBlendUpdateInfo_Statics::NewProp_CoolTime,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStUpperBodyBlendUpdateInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"StUpperBodyBlendUpdateInfo",
		sizeof(FStUpperBodyBlendUpdateInfo),
		alignof(FStUpperBodyBlendUpdateInfo),
		Z_Construct_UScriptStruct_FStUpperBodyBlendUpdateInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStUpperBodyBlendUpdateInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStUpperBodyBlendUpdateInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStUpperBodyBlendUpdateInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStUpperBodyBlendUpdateInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStUpperBodyBlendUpdateInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StUpperBodyBlendUpdateInfo"), sizeof(FStUpperBodyBlendUpdateInfo), Get_Z_Construct_UScriptStruct_FStUpperBodyBlendUpdateInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStUpperBodyBlendUpdateInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStUpperBodyBlendUpdateInfo_Hash() { return 2985408789U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
