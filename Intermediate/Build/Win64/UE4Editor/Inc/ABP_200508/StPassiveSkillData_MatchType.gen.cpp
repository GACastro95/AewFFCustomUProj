// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/StPassiveSkillData_MatchType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStPassiveSkillData_MatchType() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FStPassiveSkillData_MatchType();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
// End Cross Module References

static_assert(std::is_polymorphic<FStPassiveSkillData_MatchType>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FStPassiveSkillData_MatchType cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FStPassiveSkillData_MatchType::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FStPassiveSkillData_MatchType_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStPassiveSkillData_MatchType, Z_Construct_UPackage__Script_ABP_200508(), TEXT("StPassiveSkillData_MatchType"), sizeof(FStPassiveSkillData_MatchType), Get_Z_Construct_UScriptStruct_FStPassiveSkillData_MatchType_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FStPassiveSkillData_MatchType>()
{
	return FStPassiveSkillData_MatchType::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStPassiveSkillData_MatchType(FStPassiveSkillData_MatchType::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("StPassiveSkillData_MatchType"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFStPassiveSkillData_MatchType
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFStPassiveSkillData_MatchType()
	{
		UScriptStruct::DeferCppStructOps<FStPassiveSkillData_MatchType>(FName(TEXT("StPassiveSkillData_MatchType")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFStPassiveSkillData_MatchType;
	struct Z_Construct_UScriptStruct_FStPassiveSkillData_MatchType_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllMatch_MetaData[];
#endif
		static void NewProp_bAllMatch_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllMatch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSingleMatch_MetaData[];
#endif
		static void NewProp_bSingleMatch_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSingleMatch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTagMatch_MetaData[];
#endif
		static void NewProp_bTagMatch_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTagMatch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b3wayMatch_MetaData[];
#endif
		static void NewProp_b3wayMatch_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b3wayMatch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b4wayMatch_MetaData[];
#endif
		static void NewProp_b4wayMatch_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b4wayMatch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCasinoMatch_MetaData[];
#endif
		static void NewProp_bCasinoMatch_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCasinoMatch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLightsOutMatch_MetaData[];
#endif
		static void NewProp_bLightsOutMatch_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLightsOutMatch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bExplodingMatch_MetaData[];
#endif
		static void NewProp_bExplodingMatch_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bExplodingMatch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFallsCountAnywhereMatch_MetaData[];
#endif
		static void NewProp_bFallsCountAnywhereMatch_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFallsCountAnywhereMatch;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStPassiveSkillData_MatchType_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StPassiveSkillData_MatchType.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStPassiveSkillData_MatchType_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStPassiveSkillData_MatchType>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStPassiveSkillData_MatchType_Statics::NewProp_bAllMatch_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StPassiveSkillData_MatchType" },
		{ "ModuleRelativePath", "Public/StPassiveSkillData_MatchType.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStPassiveSkillData_MatchType_Statics::NewProp_bAllMatch_SetBit(void* Obj)
	{
		((FStPassiveSkillData_MatchType*)Obj)->bAllMatch = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStPassiveSkillData_MatchType_Statics::NewProp_bAllMatch = { "bAllMatch", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FStPassiveSkillData_MatchType), &Z_Construct_UScriptStruct_FStPassiveSkillData_MatchType_Statics::NewProp_bAllMatch_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStPassiveSkillData_MatchType_Statics::NewProp_bAllMatch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStPassiveSkillData_MatchType_Statics::NewProp_bAllMatch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStPassiveSkillData_MatchType_Statics::NewProp_bSingleMatch_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StPassiveSkillData_MatchType" },
		{ "ModuleRelativePath", "Public/StPassiveSkillData_MatchType.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStPassiveSkillData_MatchType_Statics::NewProp_bSingleMatch_SetBit(void* Obj)
	{
		((FStPassiveSkillData_MatchType*)Obj)->bSingleMatch = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStPassiveSkillData_MatchType_Statics::NewProp_bSingleMatch = { "bSingleMatch", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FStPassiveSkillData_MatchType), &Z_Construct_UScriptStruct_FStPassiveSkillData_MatchType_Statics::NewProp_bSingleMatch_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStPassiveSkillData_MatchType_Statics::NewProp_bSingleMatch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStPassiveSkillData_MatchType_Statics::NewProp_bSingleMatch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStPassiveSkillData_MatchType_Statics::NewProp_bTagMatch_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StPassiveSkillData_MatchType" },
		{ "ModuleRelativePath", "Public/StPassiveSkillData_MatchType.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStPassiveSkillData_MatchType_Statics::NewProp_bTagMatch_SetBit(void* Obj)
	{
		((FStPassiveSkillData_MatchType*)Obj)->bTagMatch = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStPassiveSkillData_MatchType_Statics::NewProp_bTagMatch = { "bTagMatch", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FStPassiveSkillData_MatchType), &Z_Construct_UScriptStruct_FStPassiveSkillData_MatchType_Statics::NewProp_bTagMatch_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStPassiveSkillData_MatchType_Statics::NewProp_bTagMatch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStPassiveSkillData_MatchType_Statics::NewProp_bTagMatch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStPassiveSkillData_MatchType_Statics::NewProp_b3wayMatch_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StPassiveSkillData_MatchType" },
		{ "ModuleRelativePath", "Public/StPassiveSkillData_MatchType.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStPassiveSkillData_MatchType_Statics::NewProp_b3wayMatch_SetBit(void* Obj)
	{
		((FStPassiveSkillData_MatchType*)Obj)->b3wayMatch = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStPassiveSkillData_MatchType_Statics::NewProp_b3wayMatch = { "b3wayMatch", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FStPassiveSkillData_MatchType), &Z_Construct_UScriptStruct_FStPassiveSkillData_MatchType_Statics::NewProp_b3wayMatch_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStPassiveSkillData_MatchType_Statics::NewProp_b3wayMatch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStPassiveSkillData_MatchType_Statics::NewProp_b3wayMatch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStPassiveSkillData_MatchType_Statics::NewProp_b4wayMatch_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StPassiveSkillData_MatchType" },
		{ "ModuleRelativePath", "Public/StPassiveSkillData_MatchType.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStPassiveSkillData_MatchType_Statics::NewProp_b4wayMatch_SetBit(void* Obj)
	{
		((FStPassiveSkillData_MatchType*)Obj)->b4wayMatch = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStPassiveSkillData_MatchType_Statics::NewProp_b4wayMatch = { "b4wayMatch", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FStPassiveSkillData_MatchType), &Z_Construct_UScriptStruct_FStPassiveSkillData_MatchType_Statics::NewProp_b4wayMatch_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStPassiveSkillData_MatchType_Statics::NewProp_b4wayMatch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStPassiveSkillData_MatchType_Statics::NewProp_b4wayMatch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStPassiveSkillData_MatchType_Statics::NewProp_bCasinoMatch_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StPassiveSkillData_MatchType" },
		{ "ModuleRelativePath", "Public/StPassiveSkillData_MatchType.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStPassiveSkillData_MatchType_Statics::NewProp_bCasinoMatch_SetBit(void* Obj)
	{
		((FStPassiveSkillData_MatchType*)Obj)->bCasinoMatch = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStPassiveSkillData_MatchType_Statics::NewProp_bCasinoMatch = { "bCasinoMatch", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FStPassiveSkillData_MatchType), &Z_Construct_UScriptStruct_FStPassiveSkillData_MatchType_Statics::NewProp_bCasinoMatch_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStPassiveSkillData_MatchType_Statics::NewProp_bCasinoMatch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStPassiveSkillData_MatchType_Statics::NewProp_bCasinoMatch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStPassiveSkillData_MatchType_Statics::NewProp_bLightsOutMatch_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StPassiveSkillData_MatchType" },
		{ "ModuleRelativePath", "Public/StPassiveSkillData_MatchType.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStPassiveSkillData_MatchType_Statics::NewProp_bLightsOutMatch_SetBit(void* Obj)
	{
		((FStPassiveSkillData_MatchType*)Obj)->bLightsOutMatch = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStPassiveSkillData_MatchType_Statics::NewProp_bLightsOutMatch = { "bLightsOutMatch", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FStPassiveSkillData_MatchType), &Z_Construct_UScriptStruct_FStPassiveSkillData_MatchType_Statics::NewProp_bLightsOutMatch_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStPassiveSkillData_MatchType_Statics::NewProp_bLightsOutMatch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStPassiveSkillData_MatchType_Statics::NewProp_bLightsOutMatch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStPassiveSkillData_MatchType_Statics::NewProp_bExplodingMatch_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StPassiveSkillData_MatchType" },
		{ "ModuleRelativePath", "Public/StPassiveSkillData_MatchType.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStPassiveSkillData_MatchType_Statics::NewProp_bExplodingMatch_SetBit(void* Obj)
	{
		((FStPassiveSkillData_MatchType*)Obj)->bExplodingMatch = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStPassiveSkillData_MatchType_Statics::NewProp_bExplodingMatch = { "bExplodingMatch", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FStPassiveSkillData_MatchType), &Z_Construct_UScriptStruct_FStPassiveSkillData_MatchType_Statics::NewProp_bExplodingMatch_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStPassiveSkillData_MatchType_Statics::NewProp_bExplodingMatch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStPassiveSkillData_MatchType_Statics::NewProp_bExplodingMatch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStPassiveSkillData_MatchType_Statics::NewProp_bFallsCountAnywhereMatch_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StPassiveSkillData_MatchType" },
		{ "ModuleRelativePath", "Public/StPassiveSkillData_MatchType.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStPassiveSkillData_MatchType_Statics::NewProp_bFallsCountAnywhereMatch_SetBit(void* Obj)
	{
		((FStPassiveSkillData_MatchType*)Obj)->bFallsCountAnywhereMatch = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStPassiveSkillData_MatchType_Statics::NewProp_bFallsCountAnywhereMatch = { "bFallsCountAnywhereMatch", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FStPassiveSkillData_MatchType), &Z_Construct_UScriptStruct_FStPassiveSkillData_MatchType_Statics::NewProp_bFallsCountAnywhereMatch_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStPassiveSkillData_MatchType_Statics::NewProp_bFallsCountAnywhereMatch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStPassiveSkillData_MatchType_Statics::NewProp_bFallsCountAnywhereMatch_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStPassiveSkillData_MatchType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStPassiveSkillData_MatchType_Statics::NewProp_bAllMatch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStPassiveSkillData_MatchType_Statics::NewProp_bSingleMatch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStPassiveSkillData_MatchType_Statics::NewProp_bTagMatch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStPassiveSkillData_MatchType_Statics::NewProp_b3wayMatch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStPassiveSkillData_MatchType_Statics::NewProp_b4wayMatch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStPassiveSkillData_MatchType_Statics::NewProp_bCasinoMatch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStPassiveSkillData_MatchType_Statics::NewProp_bLightsOutMatch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStPassiveSkillData_MatchType_Statics::NewProp_bExplodingMatch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStPassiveSkillData_MatchType_Statics::NewProp_bFallsCountAnywhereMatch,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStPassiveSkillData_MatchType_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"StPassiveSkillData_MatchType",
		sizeof(FStPassiveSkillData_MatchType),
		alignof(FStPassiveSkillData_MatchType),
		Z_Construct_UScriptStruct_FStPassiveSkillData_MatchType_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStPassiveSkillData_MatchType_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStPassiveSkillData_MatchType_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStPassiveSkillData_MatchType_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStPassiveSkillData_MatchType()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStPassiveSkillData_MatchType_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StPassiveSkillData_MatchType"), sizeof(FStPassiveSkillData_MatchType), Get_Z_Construct_UScriptStruct_FStPassiveSkillData_MatchType_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStPassiveSkillData_MatchType_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStPassiveSkillData_MatchType_Hash() { return 2432193767U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
