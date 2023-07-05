// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareMovieScenes/Public/MovieSceneManaSectionTemplate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneManaSectionTemplate() {}
// Cross Module References
	CRIWAREMOVIESCENES_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneManaSectionTemplate();
	UPackage* Z_Construct_UPackage__Script_CriWareMovieScenes();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvalTemplate();
	CRIWAREMOVIESCENES_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneManaSectionParams();
// End Cross Module References

static_assert(std::is_polymorphic<FMovieSceneManaSectionTemplate>() == std::is_polymorphic<FMovieSceneEvalTemplate>(), "USTRUCT FMovieSceneManaSectionTemplate cannot be polymorphic unless super FMovieSceneEvalTemplate is polymorphic");

class UScriptStruct* FMovieSceneManaSectionTemplate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CRIWAREMOVIESCENES_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneManaSectionTemplate_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneManaSectionTemplate, Z_Construct_UPackage__Script_CriWareMovieScenes(), TEXT("MovieSceneManaSectionTemplate"), sizeof(FMovieSceneManaSectionTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneManaSectionTemplate_Hash());
	}
	return Singleton;
}
template<> CRIWAREMOVIESCENES_API UScriptStruct* StaticStruct<FMovieSceneManaSectionTemplate>()
{
	return FMovieSceneManaSectionTemplate::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneManaSectionTemplate(FMovieSceneManaSectionTemplate::StaticStruct, TEXT("/Script/CriWareMovieScenes"), TEXT("MovieSceneManaSectionTemplate"), false, nullptr, nullptr);
static struct FScriptStruct_CriWareMovieScenes_StaticRegisterNativesFMovieSceneManaSectionTemplate
{
	FScriptStruct_CriWareMovieScenes_StaticRegisterNativesFMovieSceneManaSectionTemplate()
	{
		UScriptStruct::DeferCppStructOps<FMovieSceneManaSectionTemplate>(FName(TEXT("MovieSceneManaSectionTemplate")));
	}
} ScriptStruct_CriWareMovieScenes_StaticRegisterNativesFMovieSceneManaSectionTemplate;
	struct Z_Construct_UScriptStruct_FMovieSceneManaSectionTemplate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Params_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Params;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneManaSectionTemplate_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MovieSceneManaSectionTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneManaSectionTemplate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneManaSectionTemplate>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneManaSectionTemplate_Statics::NewProp_Params_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovieSceneManaSectionTemplate" },
		{ "ModuleRelativePath", "Public/MovieSceneManaSectionTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneManaSectionTemplate_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0040008000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneManaSectionTemplate, Params), Z_Construct_UScriptStruct_FMovieSceneManaSectionParams, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneManaSectionTemplate_Statics::NewProp_Params_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneManaSectionTemplate_Statics::NewProp_Params_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneManaSectionTemplate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneManaSectionTemplate_Statics::NewProp_Params,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneManaSectionTemplate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareMovieScenes,
		Z_Construct_UScriptStruct_FMovieSceneEvalTemplate,
		&NewStructOps,
		"MovieSceneManaSectionTemplate",
		sizeof(FMovieSceneManaSectionTemplate),
		alignof(FMovieSceneManaSectionTemplate),
		Z_Construct_UScriptStruct_FMovieSceneManaSectionTemplate_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneManaSectionTemplate_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneManaSectionTemplate_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneManaSectionTemplate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneManaSectionTemplate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneManaSectionTemplate_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CriWareMovieScenes();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneManaSectionTemplate"), sizeof(FMovieSceneManaSectionTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneManaSectionTemplate_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneManaSectionTemplate_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneManaSectionTemplate_Hash() { return 831040044U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
