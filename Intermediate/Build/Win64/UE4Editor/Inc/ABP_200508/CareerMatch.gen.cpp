// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/CareerMatch.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCareerMatch() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FCareerMatch();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerMatchType();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerMemberType();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EWrestlerID_N();
// End Cross Module References

static_assert(std::is_polymorphic<FCareerMatch>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FCareerMatch cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FCareerMatch::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FCareerMatch_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCareerMatch, Z_Construct_UPackage__Script_ABP_200508(), TEXT("CareerMatch"), sizeof(FCareerMatch), Get_Z_Construct_UScriptStruct_FCareerMatch_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FCareerMatch>()
{
	return FCareerMatch::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCareerMatch(FCareerMatch::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("CareerMatch"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFCareerMatch
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFCareerMatch()
	{
		UScriptStruct::DeferCppStructOps<FCareerMatch>(FName(TEXT("CareerMatch")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFCareerMatch;
	struct Z_Construct_UScriptStruct_FCareerMatch_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MatchType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MatchType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MemberTypeA_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MemberTypeA_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MemberTypeA;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MemberA_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MemberA_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MemberA;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MemberTypeB_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MemberTypeB_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MemberTypeB;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MemberB_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MemberB_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MemberB;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MemberTypeC_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MemberTypeC_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MemberTypeC;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MemberC_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MemberC_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MemberC;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MemberTypeD_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MemberTypeD_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MemberTypeD;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MemberD_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MemberD_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MemberD;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerMatch_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CareerMatch.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCareerMatch_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCareerMatch>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerMatch_Statics::NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerMatch" },
		{ "ModuleRelativePath", "Public/CareerMatch.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCareerMatch_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerMatch, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerMatch_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMatch_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerMatch_Statics::NewProp_MatchType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerMatch_Statics::NewProp_MatchType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerMatch" },
		{ "ModuleRelativePath", "Public/CareerMatch.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerMatch_Statics::NewProp_MatchType = { "MatchType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerMatch, MatchType), Z_Construct_UEnum_ABP_200508_ECareerMatchType, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerMatch_Statics::NewProp_MatchType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMatch_Statics::NewProp_MatchType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerMatch_Statics::NewProp_MemberTypeA_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerMatch_Statics::NewProp_MemberTypeA_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerMatch" },
		{ "ModuleRelativePath", "Public/CareerMatch.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerMatch_Statics::NewProp_MemberTypeA = { "MemberTypeA", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerMatch, MemberTypeA), Z_Construct_UEnum_ABP_200508_ECareerMemberType, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerMatch_Statics::NewProp_MemberTypeA_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMatch_Statics::NewProp_MemberTypeA_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerMatch_Statics::NewProp_MemberA_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerMatch_Statics::NewProp_MemberA_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerMatch" },
		{ "ModuleRelativePath", "Public/CareerMatch.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerMatch_Statics::NewProp_MemberA = { "MemberA", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerMatch, MemberA), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerMatch_Statics::NewProp_MemberA_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMatch_Statics::NewProp_MemberA_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerMatch_Statics::NewProp_MemberTypeB_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerMatch_Statics::NewProp_MemberTypeB_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerMatch" },
		{ "ModuleRelativePath", "Public/CareerMatch.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerMatch_Statics::NewProp_MemberTypeB = { "MemberTypeB", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerMatch, MemberTypeB), Z_Construct_UEnum_ABP_200508_ECareerMemberType, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerMatch_Statics::NewProp_MemberTypeB_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMatch_Statics::NewProp_MemberTypeB_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerMatch_Statics::NewProp_MemberB_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerMatch_Statics::NewProp_MemberB_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerMatch" },
		{ "ModuleRelativePath", "Public/CareerMatch.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerMatch_Statics::NewProp_MemberB = { "MemberB", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerMatch, MemberB), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerMatch_Statics::NewProp_MemberB_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMatch_Statics::NewProp_MemberB_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerMatch_Statics::NewProp_MemberTypeC_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerMatch_Statics::NewProp_MemberTypeC_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerMatch" },
		{ "ModuleRelativePath", "Public/CareerMatch.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerMatch_Statics::NewProp_MemberTypeC = { "MemberTypeC", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerMatch, MemberTypeC), Z_Construct_UEnum_ABP_200508_ECareerMemberType, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerMatch_Statics::NewProp_MemberTypeC_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMatch_Statics::NewProp_MemberTypeC_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerMatch_Statics::NewProp_MemberC_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerMatch_Statics::NewProp_MemberC_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerMatch" },
		{ "ModuleRelativePath", "Public/CareerMatch.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerMatch_Statics::NewProp_MemberC = { "MemberC", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerMatch, MemberC), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerMatch_Statics::NewProp_MemberC_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMatch_Statics::NewProp_MemberC_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerMatch_Statics::NewProp_MemberTypeD_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerMatch_Statics::NewProp_MemberTypeD_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerMatch" },
		{ "ModuleRelativePath", "Public/CareerMatch.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerMatch_Statics::NewProp_MemberTypeD = { "MemberTypeD", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerMatch, MemberTypeD), Z_Construct_UEnum_ABP_200508_ECareerMemberType, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerMatch_Statics::NewProp_MemberTypeD_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMatch_Statics::NewProp_MemberTypeD_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerMatch_Statics::NewProp_MemberD_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerMatch_Statics::NewProp_MemberD_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerMatch" },
		{ "ModuleRelativePath", "Public/CareerMatch.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerMatch_Statics::NewProp_MemberD = { "MemberD", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerMatch, MemberD), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerMatch_Statics::NewProp_MemberD_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMatch_Statics::NewProp_MemberD_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCareerMatch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMatch_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMatch_Statics::NewProp_MatchType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMatch_Statics::NewProp_MatchType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMatch_Statics::NewProp_MemberTypeA_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMatch_Statics::NewProp_MemberTypeA,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMatch_Statics::NewProp_MemberA_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMatch_Statics::NewProp_MemberA,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMatch_Statics::NewProp_MemberTypeB_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMatch_Statics::NewProp_MemberTypeB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMatch_Statics::NewProp_MemberB_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMatch_Statics::NewProp_MemberB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMatch_Statics::NewProp_MemberTypeC_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMatch_Statics::NewProp_MemberTypeC,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMatch_Statics::NewProp_MemberC_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMatch_Statics::NewProp_MemberC,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMatch_Statics::NewProp_MemberTypeD_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMatch_Statics::NewProp_MemberTypeD,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMatch_Statics::NewProp_MemberD_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMatch_Statics::NewProp_MemberD,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCareerMatch_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"CareerMatch",
		sizeof(FCareerMatch),
		alignof(FCareerMatch),
		Z_Construct_UScriptStruct_FCareerMatch_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMatch_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerMatch_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMatch_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCareerMatch()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCareerMatch_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CareerMatch"), sizeof(FCareerMatch), Get_Z_Construct_UScriptStruct_FCareerMatch_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCareerMatch_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCareerMatch_Hash() { return 633741791U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
