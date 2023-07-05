// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareMovieScenes/Public/MovieSceneAtomSectionTemplate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneAtomSectionTemplate() {}
// Cross Module References
	CRIWAREMOVIESCENES_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneAtomSectionTemplate();
	UPackage* Z_Construct_UPackage__Script_CriWareMovieScenes();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvalTemplate();
	CRIWAREMOVIESCENES_API UClass* Z_Construct_UClass_UMovieSceneAtomSection_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FMovieSceneAtomSectionTemplate>() == std::is_polymorphic<FMovieSceneEvalTemplate>(), "USTRUCT FMovieSceneAtomSectionTemplate cannot be polymorphic unless super FMovieSceneEvalTemplate is polymorphic");

class UScriptStruct* FMovieSceneAtomSectionTemplate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CRIWAREMOVIESCENES_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneAtomSectionTemplate_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneAtomSectionTemplate, Z_Construct_UPackage__Script_CriWareMovieScenes(), TEXT("MovieSceneAtomSectionTemplate"), sizeof(FMovieSceneAtomSectionTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneAtomSectionTemplate_Hash());
	}
	return Singleton;
}
template<> CRIWAREMOVIESCENES_API UScriptStruct* StaticStruct<FMovieSceneAtomSectionTemplate>()
{
	return FMovieSceneAtomSectionTemplate::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneAtomSectionTemplate(FMovieSceneAtomSectionTemplate::StaticStruct, TEXT("/Script/CriWareMovieScenes"), TEXT("MovieSceneAtomSectionTemplate"), false, nullptr, nullptr);
static struct FScriptStruct_CriWareMovieScenes_StaticRegisterNativesFMovieSceneAtomSectionTemplate
{
	FScriptStruct_CriWareMovieScenes_StaticRegisterNativesFMovieSceneAtomSectionTemplate()
	{
		UScriptStruct::DeferCppStructOps<FMovieSceneAtomSectionTemplate>(FName(TEXT("MovieSceneAtomSectionTemplate")));
	}
} ScriptStruct_CriWareMovieScenes_StaticRegisterNativesFMovieSceneAtomSectionTemplate;
	struct Z_Construct_UScriptStruct_FMovieSceneAtomSectionTemplate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AtomSection_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AtomSection;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneAtomSectionTemplate_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MovieSceneAtomSectionTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneAtomSectionTemplate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneAtomSectionTemplate>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneAtomSectionTemplate_Statics::NewProp_AtomSection_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovieSceneAtomSectionTemplate" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MovieSceneAtomSectionTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMovieSceneAtomSectionTemplate_Statics::NewProp_AtomSection = { "AtomSection", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneAtomSectionTemplate, AtomSection), Z_Construct_UClass_UMovieSceneAtomSection_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneAtomSectionTemplate_Statics::NewProp_AtomSection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneAtomSectionTemplate_Statics::NewProp_AtomSection_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneAtomSectionTemplate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneAtomSectionTemplate_Statics::NewProp_AtomSection,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneAtomSectionTemplate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareMovieScenes,
		Z_Construct_UScriptStruct_FMovieSceneEvalTemplate,
		&NewStructOps,
		"MovieSceneAtomSectionTemplate",
		sizeof(FMovieSceneAtomSectionTemplate),
		alignof(FMovieSceneAtomSectionTemplate),
		Z_Construct_UScriptStruct_FMovieSceneAtomSectionTemplate_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneAtomSectionTemplate_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneAtomSectionTemplate_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneAtomSectionTemplate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneAtomSectionTemplate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneAtomSectionTemplate_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CriWareMovieScenes();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneAtomSectionTemplate"), sizeof(FMovieSceneAtomSectionTemplate), Get_Z_Construct_UScriptStruct_FMovieSceneAtomSectionTemplate_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneAtomSectionTemplate_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneAtomSectionTemplate_Hash() { return 2149794691U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
