// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareMovieScenes/Public/MovieSceneManaSectionParams.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneManaSectionParams() {}
// Cross Module References
	CRIWAREMOVIESCENES_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneManaSectionParams();
	UPackage* Z_Construct_UPackage__Script_CriWareMovieScenes();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomComponent_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UManaSource_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UManaTexture_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UManaPlayer_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumber();
// End Cross Module References
class UScriptStruct* FMovieSceneManaSectionParams::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CRIWAREMOVIESCENES_API uint32 Get_Z_Construct_UScriptStruct_FMovieSceneManaSectionParams_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneManaSectionParams, Z_Construct_UPackage__Script_CriWareMovieScenes(), TEXT("MovieSceneManaSectionParams"), sizeof(FMovieSceneManaSectionParams), Get_Z_Construct_UScriptStruct_FMovieSceneManaSectionParams_Hash());
	}
	return Singleton;
}
template<> CRIWAREMOVIESCENES_API UScriptStruct* StaticStruct<FMovieSceneManaSectionParams>()
{
	return FMovieSceneManaSectionParams::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovieSceneManaSectionParams(FMovieSceneManaSectionParams::StaticStruct, TEXT("/Script/CriWareMovieScenes"), TEXT("MovieSceneManaSectionParams"), false, nullptr, nullptr);
static struct FScriptStruct_CriWareMovieScenes_StaticRegisterNativesFMovieSceneManaSectionParams
{
	FScriptStruct_CriWareMovieScenes_StaticRegisterNativesFMovieSceneManaSectionParams()
	{
		UScriptStruct::DeferCppStructOps<FMovieSceneManaSectionParams>(FName(TEXT("MovieSceneManaSectionParams")));
	}
} ScriptStruct_CriWareMovieScenes_StaticRegisterNativesFMovieSceneManaSectionParams;
	struct Z_Construct_UScriptStruct_FMovieSceneManaSectionParams_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AtomComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AtomComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ManaSource_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ManaSource;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ManaTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ManaTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ManaPlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ManaPlayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SectionStartFrame_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SectionStartFrame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SectionEndFrame_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SectionEndFrame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLooping_MetaData[];
#endif
		static void NewProp_bLooping_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLooping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartFrameOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartFrameOffset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneManaSectionParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MovieSceneManaSectionParams.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneManaSectionParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneManaSectionParams>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneManaSectionParams_Statics::NewProp_AtomComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovieSceneManaSectionParams" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MovieSceneManaSectionParams.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMovieSceneManaSectionParams_Statics::NewProp_AtomComponent = { "AtomComponent", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneManaSectionParams, AtomComponent), Z_Construct_UClass_UAtomComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneManaSectionParams_Statics::NewProp_AtomComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneManaSectionParams_Statics::NewProp_AtomComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneManaSectionParams_Statics::NewProp_ManaSource_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovieSceneManaSectionParams" },
		{ "ModuleRelativePath", "Public/MovieSceneManaSectionParams.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMovieSceneManaSectionParams_Statics::NewProp_ManaSource = { "ManaSource", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneManaSectionParams, ManaSource), Z_Construct_UClass_UManaSource_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneManaSectionParams_Statics::NewProp_ManaSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneManaSectionParams_Statics::NewProp_ManaSource_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneManaSectionParams_Statics::NewProp_ManaTexture_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovieSceneManaSectionParams" },
		{ "ModuleRelativePath", "Public/MovieSceneManaSectionParams.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMovieSceneManaSectionParams_Statics::NewProp_ManaTexture = { "ManaTexture", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneManaSectionParams, ManaTexture), Z_Construct_UClass_UManaTexture_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneManaSectionParams_Statics::NewProp_ManaTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneManaSectionParams_Statics::NewProp_ManaTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneManaSectionParams_Statics::NewProp_ManaPlayer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovieSceneManaSectionParams" },
		{ "ModuleRelativePath", "Public/MovieSceneManaSectionParams.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMovieSceneManaSectionParams_Statics::NewProp_ManaPlayer = { "ManaPlayer", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneManaSectionParams, ManaPlayer), Z_Construct_UClass_UManaPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneManaSectionParams_Statics::NewProp_ManaPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneManaSectionParams_Statics::NewProp_ManaPlayer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneManaSectionParams_Statics::NewProp_SectionStartFrame_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovieSceneManaSectionParams" },
		{ "ModuleRelativePath", "Public/MovieSceneManaSectionParams.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneManaSectionParams_Statics::NewProp_SectionStartFrame = { "SectionStartFrame", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneManaSectionParams, SectionStartFrame), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneManaSectionParams_Statics::NewProp_SectionStartFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneManaSectionParams_Statics::NewProp_SectionStartFrame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneManaSectionParams_Statics::NewProp_SectionEndFrame_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovieSceneManaSectionParams" },
		{ "ModuleRelativePath", "Public/MovieSceneManaSectionParams.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneManaSectionParams_Statics::NewProp_SectionEndFrame = { "SectionEndFrame", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneManaSectionParams, SectionEndFrame), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneManaSectionParams_Statics::NewProp_SectionEndFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneManaSectionParams_Statics::NewProp_SectionEndFrame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneManaSectionParams_Statics::NewProp_bLooping_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovieSceneManaSectionParams" },
		{ "ModuleRelativePath", "Public/MovieSceneManaSectionParams.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMovieSceneManaSectionParams_Statics::NewProp_bLooping_SetBit(void* Obj)
	{
		((FMovieSceneManaSectionParams*)Obj)->bLooping = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneManaSectionParams_Statics::NewProp_bLooping = { "bLooping", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMovieSceneManaSectionParams), &Z_Construct_UScriptStruct_FMovieSceneManaSectionParams_Statics::NewProp_bLooping_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneManaSectionParams_Statics::NewProp_bLooping_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneManaSectionParams_Statics::NewProp_bLooping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneManaSectionParams_Statics::NewProp_StartFrameOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovieSceneManaSectionParams" },
		{ "ModuleRelativePath", "Public/MovieSceneManaSectionParams.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneManaSectionParams_Statics::NewProp_StartFrameOffset = { "StartFrameOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovieSceneManaSectionParams, StartFrameOffset), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneManaSectionParams_Statics::NewProp_StartFrameOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneManaSectionParams_Statics::NewProp_StartFrameOffset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneManaSectionParams_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneManaSectionParams_Statics::NewProp_AtomComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneManaSectionParams_Statics::NewProp_ManaSource,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneManaSectionParams_Statics::NewProp_ManaTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneManaSectionParams_Statics::NewProp_ManaPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneManaSectionParams_Statics::NewProp_SectionStartFrame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneManaSectionParams_Statics::NewProp_SectionEndFrame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneManaSectionParams_Statics::NewProp_bLooping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneManaSectionParams_Statics::NewProp_StartFrameOffset,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneManaSectionParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareMovieScenes,
		nullptr,
		&NewStructOps,
		"MovieSceneManaSectionParams",
		sizeof(FMovieSceneManaSectionParams),
		alignof(FMovieSceneManaSectionParams),
		Z_Construct_UScriptStruct_FMovieSceneManaSectionParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneManaSectionParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneManaSectionParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneManaSectionParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneManaSectionParams()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovieSceneManaSectionParams_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CriWareMovieScenes();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovieSceneManaSectionParams"), sizeof(FMovieSceneManaSectionParams), Get_Z_Construct_UScriptStruct_FMovieSceneManaSectionParams_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovieSceneManaSectionParams_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovieSceneManaSectionParams_Hash() { return 1850848265U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
