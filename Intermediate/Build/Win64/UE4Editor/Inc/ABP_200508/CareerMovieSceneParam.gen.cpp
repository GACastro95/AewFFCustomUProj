// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/CareerMovieSceneParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCareerMovieSceneParam() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FCareerMovieSceneParam();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerMovieScene();
// End Cross Module References

static_assert(std::is_polymorphic<FCareerMovieSceneParam>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FCareerMovieSceneParam cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FCareerMovieSceneParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FCareerMovieSceneParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCareerMovieSceneParam, Z_Construct_UPackage__Script_ABP_200508(), TEXT("CareerMovieSceneParam"), sizeof(FCareerMovieSceneParam), Get_Z_Construct_UScriptStruct_FCareerMovieSceneParam_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FCareerMovieSceneParam>()
{
	return FCareerMovieSceneParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCareerMovieSceneParam(FCareerMovieSceneParam::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("CareerMovieSceneParam"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFCareerMovieSceneParam
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFCareerMovieSceneParam()
	{
		UScriptStruct::DeferCppStructOps<FCareerMovieSceneParam>(FName(TEXT("CareerMovieSceneParam")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFCareerMovieSceneParam;
	struct Z_Construct_UScriptStruct_FCareerMovieSceneParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_eMovieScene_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_eMovieScene_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_eMovieScene;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubtitlesSeqNo_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SubtitlesSeqNo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovieNo_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MovieNo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TitleTextID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TitleTextID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerMovieSceneParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CareerMovieSceneParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCareerMovieSceneParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCareerMovieSceneParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerMovieSceneParam_Statics::NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerMovieSceneParam" },
		{ "ModuleRelativePath", "Public/CareerMovieSceneParam.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCareerMovieSceneParam_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerMovieSceneParam, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerMovieSceneParam_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMovieSceneParam_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerMovieSceneParam_Statics::NewProp_eMovieScene_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerMovieSceneParam_Statics::NewProp_eMovieScene_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerMovieSceneParam" },
		{ "ModuleRelativePath", "Public/CareerMovieSceneParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerMovieSceneParam_Statics::NewProp_eMovieScene = { "eMovieScene", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerMovieSceneParam, eMovieScene), Z_Construct_UEnum_ABP_200508_ECareerMovieScene, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerMovieSceneParam_Statics::NewProp_eMovieScene_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMovieSceneParam_Statics::NewProp_eMovieScene_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerMovieSceneParam_Statics::NewProp_SubtitlesSeqNo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerMovieSceneParam" },
		{ "ModuleRelativePath", "Public/CareerMovieSceneParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerMovieSceneParam_Statics::NewProp_SubtitlesSeqNo = { "SubtitlesSeqNo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerMovieSceneParam, SubtitlesSeqNo), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerMovieSceneParam_Statics::NewProp_SubtitlesSeqNo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMovieSceneParam_Statics::NewProp_SubtitlesSeqNo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerMovieSceneParam_Statics::NewProp_MovieNo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerMovieSceneParam" },
		{ "ModuleRelativePath", "Public/CareerMovieSceneParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerMovieSceneParam_Statics::NewProp_MovieNo = { "MovieNo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerMovieSceneParam, MovieNo), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerMovieSceneParam_Statics::NewProp_MovieNo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMovieSceneParam_Statics::NewProp_MovieNo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerMovieSceneParam_Statics::NewProp_TitleTextID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerMovieSceneParam" },
		{ "ModuleRelativePath", "Public/CareerMovieSceneParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerMovieSceneParam_Statics::NewProp_TitleTextID = { "TitleTextID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerMovieSceneParam, TitleTextID), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerMovieSceneParam_Statics::NewProp_TitleTextID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMovieSceneParam_Statics::NewProp_TitleTextID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCareerMovieSceneParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMovieSceneParam_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMovieSceneParam_Statics::NewProp_eMovieScene_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMovieSceneParam_Statics::NewProp_eMovieScene,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMovieSceneParam_Statics::NewProp_SubtitlesSeqNo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMovieSceneParam_Statics::NewProp_MovieNo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMovieSceneParam_Statics::NewProp_TitleTextID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCareerMovieSceneParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"CareerMovieSceneParam",
		sizeof(FCareerMovieSceneParam),
		alignof(FCareerMovieSceneParam),
		Z_Construct_UScriptStruct_FCareerMovieSceneParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMovieSceneParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerMovieSceneParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMovieSceneParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCareerMovieSceneParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCareerMovieSceneParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CareerMovieSceneParam"), sizeof(FCareerMovieSceneParam), Get_Z_Construct_UScriptStruct_FCareerMovieSceneParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCareerMovieSceneParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCareerMovieSceneParam_Hash() { return 2723825337U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
