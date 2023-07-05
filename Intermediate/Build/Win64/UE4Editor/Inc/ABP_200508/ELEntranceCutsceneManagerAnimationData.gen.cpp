// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELEntranceCutsceneManagerAnimationData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELEntranceCutsceneManagerAnimationData() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELEntranceCutsceneManagerAnimationData();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
// End Cross Module References

static_assert(std::is_polymorphic<FELEntranceCutsceneManagerAnimationData>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FELEntranceCutsceneManagerAnimationData cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FELEntranceCutsceneManagerAnimationData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FELEntranceCutsceneManagerAnimationData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELEntranceCutsceneManagerAnimationData, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ELEntranceCutsceneManagerAnimationData"), sizeof(FELEntranceCutsceneManagerAnimationData), Get_Z_Construct_UScriptStruct_FELEntranceCutsceneManagerAnimationData_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FELEntranceCutsceneManagerAnimationData>()
{
	return FELEntranceCutsceneManagerAnimationData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELEntranceCutsceneManagerAnimationData(FELEntranceCutsceneManagerAnimationData::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("ELEntranceCutsceneManagerAnimationData"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFELEntranceCutsceneManagerAnimationData
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFELEntranceCutsceneManagerAnimationData()
	{
		UScriptStruct::DeferCppStructOps<FELEntranceCutsceneManagerAnimationData>(FName(TEXT("ELEntranceCutsceneManagerAnimationData")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFELEntranceCutsceneManagerAnimationData;
	struct Z_Construct_UScriptStruct_FELEntranceCutsceneManagerAnimationData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimeAssetPath_Male_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_AnimeAssetPath_Male;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimeAssetPath_Female_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_AnimeAssetPath_Female;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELEntranceCutsceneManagerAnimationData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneManagerAnimationData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELEntranceCutsceneManagerAnimationData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELEntranceCutsceneManagerAnimationData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELEntranceCutsceneManagerAnimationData_Statics::NewProp_AnimeAssetPath_Male_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEntranceCutsceneManagerAnimationData" },
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneManagerAnimationData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FELEntranceCutsceneManagerAnimationData_Statics::NewProp_AnimeAssetPath_Male = { "AnimeAssetPath_Male", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELEntranceCutsceneManagerAnimationData, AnimeAssetPath_Male), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FELEntranceCutsceneManagerAnimationData_Statics::NewProp_AnimeAssetPath_Male_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELEntranceCutsceneManagerAnimationData_Statics::NewProp_AnimeAssetPath_Male_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELEntranceCutsceneManagerAnimationData_Statics::NewProp_AnimeAssetPath_Female_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEntranceCutsceneManagerAnimationData" },
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneManagerAnimationData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FELEntranceCutsceneManagerAnimationData_Statics::NewProp_AnimeAssetPath_Female = { "AnimeAssetPath_Female", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELEntranceCutsceneManagerAnimationData, AnimeAssetPath_Female), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FELEntranceCutsceneManagerAnimationData_Statics::NewProp_AnimeAssetPath_Female_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELEntranceCutsceneManagerAnimationData_Statics::NewProp_AnimeAssetPath_Female_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELEntranceCutsceneManagerAnimationData_Statics::NewProp_Location_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEntranceCutsceneManagerAnimationData" },
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneManagerAnimationData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELEntranceCutsceneManagerAnimationData_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELEntranceCutsceneManagerAnimationData, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FELEntranceCutsceneManagerAnimationData_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELEntranceCutsceneManagerAnimationData_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELEntranceCutsceneManagerAnimationData_Statics::NewProp_Rotation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEntranceCutsceneManagerAnimationData" },
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneManagerAnimationData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELEntranceCutsceneManagerAnimationData_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELEntranceCutsceneManagerAnimationData, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FELEntranceCutsceneManagerAnimationData_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELEntranceCutsceneManagerAnimationData_Statics::NewProp_Rotation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELEntranceCutsceneManagerAnimationData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELEntranceCutsceneManagerAnimationData_Statics::NewProp_AnimeAssetPath_Male,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELEntranceCutsceneManagerAnimationData_Statics::NewProp_AnimeAssetPath_Female,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELEntranceCutsceneManagerAnimationData_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELEntranceCutsceneManagerAnimationData_Statics::NewProp_Rotation,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELEntranceCutsceneManagerAnimationData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"ELEntranceCutsceneManagerAnimationData",
		sizeof(FELEntranceCutsceneManagerAnimationData),
		alignof(FELEntranceCutsceneManagerAnimationData),
		Z_Construct_UScriptStruct_FELEntranceCutsceneManagerAnimationData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELEntranceCutsceneManagerAnimationData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELEntranceCutsceneManagerAnimationData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELEntranceCutsceneManagerAnimationData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELEntranceCutsceneManagerAnimationData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELEntranceCutsceneManagerAnimationData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELEntranceCutsceneManagerAnimationData"), sizeof(FELEntranceCutsceneManagerAnimationData), Get_Z_Construct_UScriptStruct_FELEntranceCutsceneManagerAnimationData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELEntranceCutsceneManagerAnimationData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELEntranceCutsceneManagerAnimationData_Hash() { return 436116339U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
