// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELEntranceCutsceneAnimationData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELEntranceCutsceneAnimationData() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELEntranceCutsceneAnimationData();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequence_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EELEntranceCutsceneAnimationType();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EELBeltAttachPosition();
// End Cross Module References

static_assert(std::is_polymorphic<FELEntranceCutsceneAnimationData>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FELEntranceCutsceneAnimationData cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FELEntranceCutsceneAnimationData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FELEntranceCutsceneAnimationData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELEntranceCutsceneAnimationData, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ELEntranceCutsceneAnimationData"), sizeof(FELEntranceCutsceneAnimationData), Get_Z_Construct_UScriptStruct_FELEntranceCutsceneAnimationData_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FELEntranceCutsceneAnimationData>()
{
	return FELEntranceCutsceneAnimationData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELEntranceCutsceneAnimationData(FELEntranceCutsceneAnimationData::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("ELEntranceCutsceneAnimationData"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFELEntranceCutsceneAnimationData
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFELEntranceCutsceneAnimationData()
	{
		UScriptStruct::DeferCppStructOps<FELEntranceCutsceneAnimationData>(FName(TEXT("ELEntranceCutsceneAnimationData")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFELEntranceCutsceneAnimationData;
	struct Z_Construct_UScriptStruct_FELEntranceCutsceneAnimationData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelSequence_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_LevelSequence;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MontagePathSingle_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_MontagePathSingle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MontagePathTag01_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_MontagePathTag01;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CastID01_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CastID01;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MontagePathTag02_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_MontagePathTag02;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CastID02_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CastID02;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultWeapon_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DefaultWeapon;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ExchangeWeaonList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExchangeWeaonList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ExchangeWeaonList;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AnimationType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimationType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AnimationType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseBeltProp_MetaData[];
#endif
		static void NewProp_UseBeltProp_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseBeltProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_IgnoreAttachPosition_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IgnoreAttachPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_IgnoreAttachPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnlockItemId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UnlockItemId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELEntranceCutsceneAnimationData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneAnimationData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELEntranceCutsceneAnimationData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELEntranceCutsceneAnimationData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELEntranceCutsceneAnimationData_Statics::NewProp_LevelSequence_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEntranceCutsceneAnimationData" },
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneAnimationData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FELEntranceCutsceneAnimationData_Statics::NewProp_LevelSequence = { "LevelSequence", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELEntranceCutsceneAnimationData, LevelSequence), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FELEntranceCutsceneAnimationData_Statics::NewProp_LevelSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELEntranceCutsceneAnimationData_Statics::NewProp_LevelSequence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELEntranceCutsceneAnimationData_Statics::NewProp_MontagePathSingle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEntranceCutsceneAnimationData" },
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneAnimationData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FELEntranceCutsceneAnimationData_Statics::NewProp_MontagePathSingle = { "MontagePathSingle", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELEntranceCutsceneAnimationData, MontagePathSingle), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FELEntranceCutsceneAnimationData_Statics::NewProp_MontagePathSingle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELEntranceCutsceneAnimationData_Statics::NewProp_MontagePathSingle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELEntranceCutsceneAnimationData_Statics::NewProp_MontagePathTag01_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEntranceCutsceneAnimationData" },
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneAnimationData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FELEntranceCutsceneAnimationData_Statics::NewProp_MontagePathTag01 = { "MontagePathTag01", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELEntranceCutsceneAnimationData, MontagePathTag01), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FELEntranceCutsceneAnimationData_Statics::NewProp_MontagePathTag01_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELEntranceCutsceneAnimationData_Statics::NewProp_MontagePathTag01_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELEntranceCutsceneAnimationData_Statics::NewProp_CastID01_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEntranceCutsceneAnimationData" },
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneAnimationData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELEntranceCutsceneAnimationData_Statics::NewProp_CastID01 = { "CastID01", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELEntranceCutsceneAnimationData, CastID01), METADATA_PARAMS(Z_Construct_UScriptStruct_FELEntranceCutsceneAnimationData_Statics::NewProp_CastID01_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELEntranceCutsceneAnimationData_Statics::NewProp_CastID01_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELEntranceCutsceneAnimationData_Statics::NewProp_MontagePathTag02_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEntranceCutsceneAnimationData" },
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneAnimationData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FELEntranceCutsceneAnimationData_Statics::NewProp_MontagePathTag02 = { "MontagePathTag02", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELEntranceCutsceneAnimationData, MontagePathTag02), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FELEntranceCutsceneAnimationData_Statics::NewProp_MontagePathTag02_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELEntranceCutsceneAnimationData_Statics::NewProp_MontagePathTag02_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELEntranceCutsceneAnimationData_Statics::NewProp_CastID02_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEntranceCutsceneAnimationData" },
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneAnimationData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELEntranceCutsceneAnimationData_Statics::NewProp_CastID02 = { "CastID02", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELEntranceCutsceneAnimationData, CastID02), METADATA_PARAMS(Z_Construct_UScriptStruct_FELEntranceCutsceneAnimationData_Statics::NewProp_CastID02_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELEntranceCutsceneAnimationData_Statics::NewProp_CastID02_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELEntranceCutsceneAnimationData_Statics::NewProp_Location_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEntranceCutsceneAnimationData" },
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneAnimationData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELEntranceCutsceneAnimationData_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELEntranceCutsceneAnimationData, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FELEntranceCutsceneAnimationData_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELEntranceCutsceneAnimationData_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELEntranceCutsceneAnimationData_Statics::NewProp_Rotation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEntranceCutsceneAnimationData" },
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneAnimationData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELEntranceCutsceneAnimationData_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELEntranceCutsceneAnimationData, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FELEntranceCutsceneAnimationData_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELEntranceCutsceneAnimationData_Statics::NewProp_Rotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELEntranceCutsceneAnimationData_Statics::NewProp_DefaultWeapon_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEntranceCutsceneAnimationData" },
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneAnimationData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELEntranceCutsceneAnimationData_Statics::NewProp_DefaultWeapon = { "DefaultWeapon", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELEntranceCutsceneAnimationData, DefaultWeapon), METADATA_PARAMS(Z_Construct_UScriptStruct_FELEntranceCutsceneAnimationData_Statics::NewProp_DefaultWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELEntranceCutsceneAnimationData_Statics::NewProp_DefaultWeapon_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELEntranceCutsceneAnimationData_Statics::NewProp_ExchangeWeaonList_Inner = { "ExchangeWeaonList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELEntranceCutsceneAnimationData_Statics::NewProp_ExchangeWeaonList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEntranceCutsceneAnimationData" },
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneAnimationData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FELEntranceCutsceneAnimationData_Statics::NewProp_ExchangeWeaonList = { "ExchangeWeaonList", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELEntranceCutsceneAnimationData, ExchangeWeaonList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FELEntranceCutsceneAnimationData_Statics::NewProp_ExchangeWeaonList_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELEntranceCutsceneAnimationData_Statics::NewProp_ExchangeWeaonList_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FELEntranceCutsceneAnimationData_Statics::NewProp_AnimationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELEntranceCutsceneAnimationData_Statics::NewProp_AnimationType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEntranceCutsceneAnimationData" },
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneAnimationData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FELEntranceCutsceneAnimationData_Statics::NewProp_AnimationType = { "AnimationType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELEntranceCutsceneAnimationData, AnimationType), Z_Construct_UEnum_ABP_200508_EELEntranceCutsceneAnimationType, METADATA_PARAMS(Z_Construct_UScriptStruct_FELEntranceCutsceneAnimationData_Statics::NewProp_AnimationType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELEntranceCutsceneAnimationData_Statics::NewProp_AnimationType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELEntranceCutsceneAnimationData_Statics::NewProp_UseBeltProp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEntranceCutsceneAnimationData" },
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneAnimationData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FELEntranceCutsceneAnimationData_Statics::NewProp_UseBeltProp_SetBit(void* Obj)
	{
		((FELEntranceCutsceneAnimationData*)Obj)->UseBeltProp = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FELEntranceCutsceneAnimationData_Statics::NewProp_UseBeltProp = { "UseBeltProp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELEntranceCutsceneAnimationData), &Z_Construct_UScriptStruct_FELEntranceCutsceneAnimationData_Statics::NewProp_UseBeltProp_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FELEntranceCutsceneAnimationData_Statics::NewProp_UseBeltProp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELEntranceCutsceneAnimationData_Statics::NewProp_UseBeltProp_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FELEntranceCutsceneAnimationData_Statics::NewProp_IgnoreAttachPosition_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELEntranceCutsceneAnimationData_Statics::NewProp_IgnoreAttachPosition_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEntranceCutsceneAnimationData" },
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneAnimationData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FELEntranceCutsceneAnimationData_Statics::NewProp_IgnoreAttachPosition = { "IgnoreAttachPosition", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELEntranceCutsceneAnimationData, IgnoreAttachPosition), Z_Construct_UEnum_ABP_200508_EELBeltAttachPosition, METADATA_PARAMS(Z_Construct_UScriptStruct_FELEntranceCutsceneAnimationData_Statics::NewProp_IgnoreAttachPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELEntranceCutsceneAnimationData_Statics::NewProp_IgnoreAttachPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELEntranceCutsceneAnimationData_Statics::NewProp_UnlockItemId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEntranceCutsceneAnimationData" },
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneAnimationData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELEntranceCutsceneAnimationData_Statics::NewProp_UnlockItemId = { "UnlockItemId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELEntranceCutsceneAnimationData, UnlockItemId), METADATA_PARAMS(Z_Construct_UScriptStruct_FELEntranceCutsceneAnimationData_Statics::NewProp_UnlockItemId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELEntranceCutsceneAnimationData_Statics::NewProp_UnlockItemId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELEntranceCutsceneAnimationData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELEntranceCutsceneAnimationData_Statics::NewProp_LevelSequence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELEntranceCutsceneAnimationData_Statics::NewProp_MontagePathSingle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELEntranceCutsceneAnimationData_Statics::NewProp_MontagePathTag01,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELEntranceCutsceneAnimationData_Statics::NewProp_CastID01,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELEntranceCutsceneAnimationData_Statics::NewProp_MontagePathTag02,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELEntranceCutsceneAnimationData_Statics::NewProp_CastID02,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELEntranceCutsceneAnimationData_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELEntranceCutsceneAnimationData_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELEntranceCutsceneAnimationData_Statics::NewProp_DefaultWeapon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELEntranceCutsceneAnimationData_Statics::NewProp_ExchangeWeaonList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELEntranceCutsceneAnimationData_Statics::NewProp_ExchangeWeaonList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELEntranceCutsceneAnimationData_Statics::NewProp_AnimationType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELEntranceCutsceneAnimationData_Statics::NewProp_AnimationType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELEntranceCutsceneAnimationData_Statics::NewProp_UseBeltProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELEntranceCutsceneAnimationData_Statics::NewProp_IgnoreAttachPosition_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELEntranceCutsceneAnimationData_Statics::NewProp_IgnoreAttachPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELEntranceCutsceneAnimationData_Statics::NewProp_UnlockItemId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELEntranceCutsceneAnimationData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"ELEntranceCutsceneAnimationData",
		sizeof(FELEntranceCutsceneAnimationData),
		alignof(FELEntranceCutsceneAnimationData),
		Z_Construct_UScriptStruct_FELEntranceCutsceneAnimationData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELEntranceCutsceneAnimationData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELEntranceCutsceneAnimationData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELEntranceCutsceneAnimationData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELEntranceCutsceneAnimationData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELEntranceCutsceneAnimationData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELEntranceCutsceneAnimationData"), sizeof(FELEntranceCutsceneAnimationData), Get_Z_Construct_UScriptStruct_FELEntranceCutsceneAnimationData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELEntranceCutsceneAnimationData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELEntranceCutsceneAnimationData_Hash() { return 2273234279U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
