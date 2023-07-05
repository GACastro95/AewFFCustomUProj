// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE/Public/OpeningMovieSubtitle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOpeningMovieSubtitle() {}
// Cross Module References
	ELITE_API UScriptStruct* Z_Construct_UScriptStruct_FOpeningMovieSubtitle();
	UPackage* Z_Construct_UPackage__Script_ELITE();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
// End Cross Module References

static_assert(std::is_polymorphic<FOpeningMovieSubtitle>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FOpeningMovieSubtitle cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FOpeningMovieSubtitle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ELITE_API uint32 Get_Z_Construct_UScriptStruct_FOpeningMovieSubtitle_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FOpeningMovieSubtitle, Z_Construct_UPackage__Script_ELITE(), TEXT("OpeningMovieSubtitle"), sizeof(FOpeningMovieSubtitle), Get_Z_Construct_UScriptStruct_FOpeningMovieSubtitle_Hash());
	}
	return Singleton;
}
template<> ELITE_API UScriptStruct* StaticStruct<FOpeningMovieSubtitle>()
{
	return FOpeningMovieSubtitle::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FOpeningMovieSubtitle(FOpeningMovieSubtitle::StaticStruct, TEXT("/Script/ELITE"), TEXT("OpeningMovieSubtitle"), false, nullptr, nullptr);
static struct FScriptStruct_ELITE_StaticRegisterNativesFOpeningMovieSubtitle
{
	FScriptStruct_ELITE_StaticRegisterNativesFOpeningMovieSubtitle()
	{
		UScriptStruct::DeferCppStructOps<FOpeningMovieSubtitle>(FName(TEXT("OpeningMovieSubtitle")));
	}
} ScriptStruct_ELITE_StaticRegisterNativesFOpeningMovieSubtitle;
	struct Z_Construct_UScriptStruct_FOpeningMovieSubtitle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Subtitle_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Subtitle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DispTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DispTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOpeningMovieSubtitle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OpeningMovieSubtitle.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOpeningMovieSubtitle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOpeningMovieSubtitle>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOpeningMovieSubtitle_Statics::NewProp_Subtitle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OpeningMovieSubtitle" },
		{ "ModuleRelativePath", "Public/OpeningMovieSubtitle.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOpeningMovieSubtitle_Statics::NewProp_Subtitle = { "Subtitle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOpeningMovieSubtitle, Subtitle), METADATA_PARAMS(Z_Construct_UScriptStruct_FOpeningMovieSubtitle_Statics::NewProp_Subtitle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpeningMovieSubtitle_Statics::NewProp_Subtitle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOpeningMovieSubtitle_Statics::NewProp_StartTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OpeningMovieSubtitle" },
		{ "ModuleRelativePath", "Public/OpeningMovieSubtitle.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOpeningMovieSubtitle_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOpeningMovieSubtitle, StartTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FOpeningMovieSubtitle_Statics::NewProp_StartTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpeningMovieSubtitle_Statics::NewProp_StartTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOpeningMovieSubtitle_Statics::NewProp_DispTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "OpeningMovieSubtitle" },
		{ "ModuleRelativePath", "Public/OpeningMovieSubtitle.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOpeningMovieSubtitle_Statics::NewProp_DispTime = { "DispTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOpeningMovieSubtitle, DispTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FOpeningMovieSubtitle_Statics::NewProp_DispTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpeningMovieSubtitle_Statics::NewProp_DispTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOpeningMovieSubtitle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOpeningMovieSubtitle_Statics::NewProp_Subtitle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOpeningMovieSubtitle_Statics::NewProp_StartTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOpeningMovieSubtitle_Statics::NewProp_DispTime,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOpeningMovieSubtitle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"OpeningMovieSubtitle",
		sizeof(FOpeningMovieSubtitle),
		alignof(FOpeningMovieSubtitle),
		Z_Construct_UScriptStruct_FOpeningMovieSubtitle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpeningMovieSubtitle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOpeningMovieSubtitle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpeningMovieSubtitle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOpeningMovieSubtitle()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FOpeningMovieSubtitle_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("OpeningMovieSubtitle"), sizeof(FOpeningMovieSubtitle), Get_Z_Construct_UScriptStruct_FOpeningMovieSubtitle_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FOpeningMovieSubtitle_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FOpeningMovieSubtitle_Hash() { return 3094103085U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
