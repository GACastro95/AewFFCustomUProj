// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/StUpperBodyBlendInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStUpperBodyBlendInfo() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FStUpperBodyBlendInfo();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EUpperBodyBlendCondition();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FStUpperBodyBlendInfo>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FStUpperBodyBlendInfo cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FStUpperBodyBlendInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FStUpperBodyBlendInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStUpperBodyBlendInfo, Z_Construct_UPackage__Script_ABP_200508(), TEXT("StUpperBodyBlendInfo"), sizeof(FStUpperBodyBlendInfo), Get_Z_Construct_UScriptStruct_FStUpperBodyBlendInfo_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FStUpperBodyBlendInfo>()
{
	return FStUpperBodyBlendInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStUpperBodyBlendInfo(FStUpperBodyBlendInfo::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("StUpperBodyBlendInfo"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFStUpperBodyBlendInfo
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFStUpperBodyBlendInfo()
	{
		UScriptStruct::DeferCppStructOps<FStUpperBodyBlendInfo>(FName(TEXT("StUpperBodyBlendInfo")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFStUpperBodyBlendInfo;
	struct Z_Construct_UScriptStruct_FStUpperBodyBlendInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ConditionType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConditionType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ConditionType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Arg01_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Arg01;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Arg02_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Arg02;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimationList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimationList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AnimationList;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CoolTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CoolTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_limit_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_limit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStUpperBodyBlendInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StUpperBodyBlendInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStUpperBodyBlendInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStUpperBodyBlendInfo>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStUpperBodyBlendInfo_Statics::NewProp_ConditionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStUpperBodyBlendInfo_Statics::NewProp_ConditionType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StUpperBodyBlendInfo" },
		{ "ModuleRelativePath", "Public/StUpperBodyBlendInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FStUpperBodyBlendInfo_Statics::NewProp_ConditionType = { "ConditionType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStUpperBodyBlendInfo, ConditionType), Z_Construct_UEnum_ABP_200508_EUpperBodyBlendCondition, METADATA_PARAMS(Z_Construct_UScriptStruct_FStUpperBodyBlendInfo_Statics::NewProp_ConditionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStUpperBodyBlendInfo_Statics::NewProp_ConditionType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStUpperBodyBlendInfo_Statics::NewProp_Arg01_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StUpperBodyBlendInfo" },
		{ "ModuleRelativePath", "Public/StUpperBodyBlendInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStUpperBodyBlendInfo_Statics::NewProp_Arg01 = { "Arg01", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStUpperBodyBlendInfo, Arg01), METADATA_PARAMS(Z_Construct_UScriptStruct_FStUpperBodyBlendInfo_Statics::NewProp_Arg01_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStUpperBodyBlendInfo_Statics::NewProp_Arg01_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStUpperBodyBlendInfo_Statics::NewProp_Arg02_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StUpperBodyBlendInfo" },
		{ "ModuleRelativePath", "Public/StUpperBodyBlendInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStUpperBodyBlendInfo_Statics::NewProp_Arg02 = { "Arg02", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStUpperBodyBlendInfo, Arg02), METADATA_PARAMS(Z_Construct_UScriptStruct_FStUpperBodyBlendInfo_Statics::NewProp_Arg02_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStUpperBodyBlendInfo_Statics::NewProp_Arg02_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStUpperBodyBlendInfo_Statics::NewProp_AnimationList_Inner = { "AnimationList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStUpperBodyBlendInfo_Statics::NewProp_AnimationList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StUpperBodyBlendInfo" },
		{ "ModuleRelativePath", "Public/StUpperBodyBlendInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStUpperBodyBlendInfo_Statics::NewProp_AnimationList = { "AnimationList", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStUpperBodyBlendInfo, AnimationList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FStUpperBodyBlendInfo_Statics::NewProp_AnimationList_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStUpperBodyBlendInfo_Statics::NewProp_AnimationList_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStUpperBodyBlendInfo_Statics::NewProp_CoolTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StUpperBodyBlendInfo" },
		{ "ModuleRelativePath", "Public/StUpperBodyBlendInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStUpperBodyBlendInfo_Statics::NewProp_CoolTime = { "CoolTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStUpperBodyBlendInfo, CoolTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FStUpperBodyBlendInfo_Statics::NewProp_CoolTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStUpperBodyBlendInfo_Statics::NewProp_CoolTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStUpperBodyBlendInfo_Statics::NewProp_limit_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StUpperBodyBlendInfo" },
		{ "ModuleRelativePath", "Public/StUpperBodyBlendInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStUpperBodyBlendInfo_Statics::NewProp_limit = { "limit", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStUpperBodyBlendInfo, limit), METADATA_PARAMS(Z_Construct_UScriptStruct_FStUpperBodyBlendInfo_Statics::NewProp_limit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStUpperBodyBlendInfo_Statics::NewProp_limit_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStUpperBodyBlendInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStUpperBodyBlendInfo_Statics::NewProp_ConditionType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStUpperBodyBlendInfo_Statics::NewProp_ConditionType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStUpperBodyBlendInfo_Statics::NewProp_Arg01,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStUpperBodyBlendInfo_Statics::NewProp_Arg02,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStUpperBodyBlendInfo_Statics::NewProp_AnimationList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStUpperBodyBlendInfo_Statics::NewProp_AnimationList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStUpperBodyBlendInfo_Statics::NewProp_CoolTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStUpperBodyBlendInfo_Statics::NewProp_limit,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStUpperBodyBlendInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"StUpperBodyBlendInfo",
		sizeof(FStUpperBodyBlendInfo),
		alignof(FStUpperBodyBlendInfo),
		Z_Construct_UScriptStruct_FStUpperBodyBlendInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStUpperBodyBlendInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStUpperBodyBlendInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStUpperBodyBlendInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStUpperBodyBlendInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStUpperBodyBlendInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StUpperBodyBlendInfo"), sizeof(FStUpperBodyBlendInfo), Get_Z_Construct_UScriptStruct_FStUpperBodyBlendInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStUpperBodyBlendInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStUpperBodyBlendInfo_Hash() { return 1972548534U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
