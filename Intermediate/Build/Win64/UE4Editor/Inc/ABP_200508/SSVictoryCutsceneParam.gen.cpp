// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSVictoryCutsceneParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSVictoryCutsceneParam() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSVictoryCutsceneParam();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequence_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FSSVictoryCutsceneParam>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FSSVictoryCutsceneParam cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FSSVictoryCutsceneParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSVictoryCutsceneParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSVictoryCutsceneParam, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSVictoryCutsceneParam"), sizeof(FSSVictoryCutsceneParam), Get_Z_Construct_UScriptStruct_FSSVictoryCutsceneParam_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSVictoryCutsceneParam>()
{
	return FSSVictoryCutsceneParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSVictoryCutsceneParam(FSSVictoryCutsceneParam::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSVictoryCutsceneParam"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSVictoryCutsceneParam
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSVictoryCutsceneParam()
	{
		UScriptStruct::DeferCppStructOps<FSSVictoryCutsceneParam>(FName(TEXT("SSVictoryCutsceneParam")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSVictoryCutsceneParam;
	struct Z_Construct_UScriptStruct_FSSVictoryCutsceneParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelSequence_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_LevelSequence;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransformOriginActorTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TransformOriginActorTag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CharacterMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterLoopMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CharacterLoopMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlaySoundDelay_Announce_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlaySoundDelay_Announce;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSVictoryCutsceneParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSVictoryCutsceneParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSVictoryCutsceneParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSVictoryCutsceneParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSVictoryCutsceneParam_Statics::NewProp_ID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSVictoryCutsceneParam" },
		{ "ModuleRelativePath", "Public/SSVictoryCutsceneParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSVictoryCutsceneParam_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSVictoryCutsceneParam, ID), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSVictoryCutsceneParam_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSVictoryCutsceneParam_Statics::NewProp_ID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSVictoryCutsceneParam_Statics::NewProp_LevelSequence_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSVictoryCutsceneParam" },
		{ "ModuleRelativePath", "Public/SSVictoryCutsceneParam.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FSSVictoryCutsceneParam_Statics::NewProp_LevelSequence = { "LevelSequence", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSVictoryCutsceneParam, LevelSequence), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSVictoryCutsceneParam_Statics::NewProp_LevelSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSVictoryCutsceneParam_Statics::NewProp_LevelSequence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSVictoryCutsceneParam_Statics::NewProp_TransformOriginActorTag_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSVictoryCutsceneParam" },
		{ "ModuleRelativePath", "Public/SSVictoryCutsceneParam.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSSVictoryCutsceneParam_Statics::NewProp_TransformOriginActorTag = { "TransformOriginActorTag", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSVictoryCutsceneParam, TransformOriginActorTag), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSVictoryCutsceneParam_Statics::NewProp_TransformOriginActorTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSVictoryCutsceneParam_Statics::NewProp_TransformOriginActorTag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSVictoryCutsceneParam_Statics::NewProp_CharacterMontage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSVictoryCutsceneParam" },
		{ "ModuleRelativePath", "Public/SSVictoryCutsceneParam.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSSVictoryCutsceneParam_Statics::NewProp_CharacterMontage = { "CharacterMontage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSVictoryCutsceneParam, CharacterMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSVictoryCutsceneParam_Statics::NewProp_CharacterMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSVictoryCutsceneParam_Statics::NewProp_CharacterMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSVictoryCutsceneParam_Statics::NewProp_CharacterLoopMontage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSVictoryCutsceneParam" },
		{ "ModuleRelativePath", "Public/SSVictoryCutsceneParam.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSSVictoryCutsceneParam_Statics::NewProp_CharacterLoopMontage = { "CharacterLoopMontage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSVictoryCutsceneParam, CharacterLoopMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSVictoryCutsceneParam_Statics::NewProp_CharacterLoopMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSVictoryCutsceneParam_Statics::NewProp_CharacterLoopMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSVictoryCutsceneParam_Statics::NewProp_PlaySoundDelay_Announce_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSVictoryCutsceneParam" },
		{ "ModuleRelativePath", "Public/SSVictoryCutsceneParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSVictoryCutsceneParam_Statics::NewProp_PlaySoundDelay_Announce = { "PlaySoundDelay_Announce", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSVictoryCutsceneParam, PlaySoundDelay_Announce), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSVictoryCutsceneParam_Statics::NewProp_PlaySoundDelay_Announce_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSVictoryCutsceneParam_Statics::NewProp_PlaySoundDelay_Announce_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSSVictoryCutsceneParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSVictoryCutsceneParam_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSVictoryCutsceneParam_Statics::NewProp_LevelSequence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSVictoryCutsceneParam_Statics::NewProp_TransformOriginActorTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSVictoryCutsceneParam_Statics::NewProp_CharacterMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSVictoryCutsceneParam_Statics::NewProp_CharacterLoopMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSVictoryCutsceneParam_Statics::NewProp_PlaySoundDelay_Announce,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSVictoryCutsceneParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"SSVictoryCutsceneParam",
		sizeof(FSSVictoryCutsceneParam),
		alignof(FSSVictoryCutsceneParam),
		Z_Construct_UScriptStruct_FSSVictoryCutsceneParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSVictoryCutsceneParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSVictoryCutsceneParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSVictoryCutsceneParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSVictoryCutsceneParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSVictoryCutsceneParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSVictoryCutsceneParam"), sizeof(FSSVictoryCutsceneParam), Get_Z_Construct_UScriptStruct_FSSVictoryCutsceneParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSVictoryCutsceneParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSVictoryCutsceneParam_Hash() { return 3654081819U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
