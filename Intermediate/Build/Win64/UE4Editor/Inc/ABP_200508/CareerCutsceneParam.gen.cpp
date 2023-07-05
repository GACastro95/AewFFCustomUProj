// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/CareerCutsceneParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCareerCutsceneParam() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FCareerCutsceneParam();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerStageType();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerReverbType();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerRingObject();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerBGMType();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerMemberType();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EWrestlerID_N();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerAttireType();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EELBelt();
// End Cross Module References

static_assert(std::is_polymorphic<FCareerCutsceneParam>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FCareerCutsceneParam cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FCareerCutsceneParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FCareerCutsceneParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCareerCutsceneParam, Z_Construct_UPackage__Script_ABP_200508(), TEXT("CareerCutsceneParam"), sizeof(FCareerCutsceneParam), Get_Z_Construct_UScriptStruct_FCareerCutsceneParam_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FCareerCutsceneParam>()
{
	return FCareerCutsceneParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCareerCutsceneParam(FCareerCutsceneParam::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("CareerCutsceneParam"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFCareerCutsceneParam
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFCareerCutsceneParam()
	{
		UScriptStruct::DeferCppStructOps<FCareerCutsceneParam>(FName(TEXT("CareerCutsceneParam")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFCareerCutsceneParam;
	struct Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ArenaType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArenaType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ArenaType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReverbType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReverbType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReverbType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RingObject_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RingObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_RingObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SeqNo_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SeqNo;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BGMType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BGMType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BGMType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CastA_Type_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CastA_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CastA_Type;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CastA_ID_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CastA_ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CastA_ID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CastA_Attire_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CastA_Attire_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CastA_Attire;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CastB_Type_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CastB_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CastB_Type;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CastB_ID_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CastB_ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CastB_ID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CastB_Attire_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CastB_Attire_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CastB_Attire;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CastC_Type_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CastC_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CastC_Type;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CastC_ID_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CastC_ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CastC_ID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CastC_Attire_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CastC_Attire_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CastC_Attire;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CastD_Type_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CastD_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CastD_Type;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CastD_ID_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CastD_ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CastD_ID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BELT_A_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BELT_A_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BELT_A;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BELT_B_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BELT_B_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BELT_B;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CastD_Attire_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CastD_Attire_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CastD_Attire;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MessageTextKeyID_0_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MessageTextKeyID_0;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MessageTextKeyID_1_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MessageTextKeyID_1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MessageTextKeyID_2_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MessageTextKeyID_2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MessageTextKeyID_3_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MessageTextKeyID_3;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CareerCutsceneParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCareerCutsceneParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerCutsceneParam" },
		{ "ModuleRelativePath", "Public/CareerCutsceneParam.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerCutsceneParam, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_ArenaType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_ArenaType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerCutsceneParam" },
		{ "ModuleRelativePath", "Public/CareerCutsceneParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_ArenaType = { "ArenaType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerCutsceneParam, ArenaType), Z_Construct_UEnum_ABP_200508_ECareerStageType, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_ArenaType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_ArenaType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_ReverbType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_ReverbType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerCutsceneParam" },
		{ "ModuleRelativePath", "Public/CareerCutsceneParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_ReverbType = { "ReverbType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerCutsceneParam, ReverbType), Z_Construct_UEnum_ABP_200508_ECareerReverbType, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_ReverbType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_ReverbType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_RingObject_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_RingObject_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerCutsceneParam" },
		{ "ModuleRelativePath", "Public/CareerCutsceneParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_RingObject = { "RingObject", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerCutsceneParam, RingObject), Z_Construct_UEnum_ABP_200508_ECareerRingObject, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_RingObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_RingObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_SeqNo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerCutsceneParam" },
		{ "ModuleRelativePath", "Public/CareerCutsceneParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_SeqNo = { "SeqNo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerCutsceneParam, SeqNo), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_SeqNo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_SeqNo_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_BGMType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_BGMType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerCutsceneParam" },
		{ "ModuleRelativePath", "Public/CareerCutsceneParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_BGMType = { "BGMType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerCutsceneParam, BGMType), Z_Construct_UEnum_ABP_200508_ECareerBGMType, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_BGMType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_BGMType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_CastA_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_CastA_Type_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerCutsceneParam" },
		{ "ModuleRelativePath", "Public/CareerCutsceneParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_CastA_Type = { "CastA_Type", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerCutsceneParam, CastA_Type), Z_Construct_UEnum_ABP_200508_ECareerMemberType, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_CastA_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_CastA_Type_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_CastA_ID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_CastA_ID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerCutsceneParam" },
		{ "ModuleRelativePath", "Public/CareerCutsceneParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_CastA_ID = { "CastA_ID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerCutsceneParam, CastA_ID), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_CastA_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_CastA_ID_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_CastA_Attire_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_CastA_Attire_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerCutsceneParam" },
		{ "ModuleRelativePath", "Public/CareerCutsceneParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_CastA_Attire = { "CastA_Attire", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerCutsceneParam, CastA_Attire), Z_Construct_UEnum_ABP_200508_ECareerAttireType, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_CastA_Attire_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_CastA_Attire_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_CastB_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_CastB_Type_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerCutsceneParam" },
		{ "ModuleRelativePath", "Public/CareerCutsceneParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_CastB_Type = { "CastB_Type", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerCutsceneParam, CastB_Type), Z_Construct_UEnum_ABP_200508_ECareerMemberType, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_CastB_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_CastB_Type_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_CastB_ID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_CastB_ID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerCutsceneParam" },
		{ "ModuleRelativePath", "Public/CareerCutsceneParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_CastB_ID = { "CastB_ID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerCutsceneParam, CastB_ID), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_CastB_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_CastB_ID_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_CastB_Attire_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_CastB_Attire_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerCutsceneParam" },
		{ "ModuleRelativePath", "Public/CareerCutsceneParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_CastB_Attire = { "CastB_Attire", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerCutsceneParam, CastB_Attire), Z_Construct_UEnum_ABP_200508_ECareerAttireType, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_CastB_Attire_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_CastB_Attire_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_CastC_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_CastC_Type_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerCutsceneParam" },
		{ "ModuleRelativePath", "Public/CareerCutsceneParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_CastC_Type = { "CastC_Type", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerCutsceneParam, CastC_Type), Z_Construct_UEnum_ABP_200508_ECareerMemberType, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_CastC_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_CastC_Type_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_CastC_ID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_CastC_ID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerCutsceneParam" },
		{ "ModuleRelativePath", "Public/CareerCutsceneParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_CastC_ID = { "CastC_ID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerCutsceneParam, CastC_ID), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_CastC_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_CastC_ID_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_CastC_Attire_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_CastC_Attire_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerCutsceneParam" },
		{ "ModuleRelativePath", "Public/CareerCutsceneParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_CastC_Attire = { "CastC_Attire", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerCutsceneParam, CastC_Attire), Z_Construct_UEnum_ABP_200508_ECareerAttireType, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_CastC_Attire_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_CastC_Attire_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_CastD_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_CastD_Type_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerCutsceneParam" },
		{ "ModuleRelativePath", "Public/CareerCutsceneParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_CastD_Type = { "CastD_Type", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerCutsceneParam, CastD_Type), Z_Construct_UEnum_ABP_200508_ECareerMemberType, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_CastD_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_CastD_Type_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_CastD_ID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_CastD_ID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerCutsceneParam" },
		{ "ModuleRelativePath", "Public/CareerCutsceneParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_CastD_ID = { "CastD_ID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerCutsceneParam, CastD_ID), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_CastD_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_CastD_ID_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_BELT_A_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_BELT_A_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerCutsceneParam" },
		{ "ModuleRelativePath", "Public/CareerCutsceneParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_BELT_A = { "BELT_A", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerCutsceneParam, BELT_A), Z_Construct_UEnum_ELITE_Game_EELBelt, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_BELT_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_BELT_A_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_BELT_B_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_BELT_B_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerCutsceneParam" },
		{ "ModuleRelativePath", "Public/CareerCutsceneParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_BELT_B = { "BELT_B", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerCutsceneParam, BELT_B), Z_Construct_UEnum_ELITE_Game_EELBelt, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_BELT_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_BELT_B_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_CastD_Attire_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_CastD_Attire_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerCutsceneParam" },
		{ "ModuleRelativePath", "Public/CareerCutsceneParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_CastD_Attire = { "CastD_Attire", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerCutsceneParam, CastD_Attire), Z_Construct_UEnum_ABP_200508_ECareerAttireType, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_CastD_Attire_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_CastD_Attire_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_MessageTextKeyID_0_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerCutsceneParam" },
		{ "ModuleRelativePath", "Public/CareerCutsceneParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_MessageTextKeyID_0 = { "MessageTextKeyID_0", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerCutsceneParam, MessageTextKeyID_0), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_MessageTextKeyID_0_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_MessageTextKeyID_0_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_MessageTextKeyID_1_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerCutsceneParam" },
		{ "ModuleRelativePath", "Public/CareerCutsceneParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_MessageTextKeyID_1 = { "MessageTextKeyID_1", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerCutsceneParam, MessageTextKeyID_1), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_MessageTextKeyID_1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_MessageTextKeyID_1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_MessageTextKeyID_2_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerCutsceneParam" },
		{ "ModuleRelativePath", "Public/CareerCutsceneParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_MessageTextKeyID_2 = { "MessageTextKeyID_2", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerCutsceneParam, MessageTextKeyID_2), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_MessageTextKeyID_2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_MessageTextKeyID_2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_MessageTextKeyID_3_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerCutsceneParam" },
		{ "ModuleRelativePath", "Public/CareerCutsceneParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_MessageTextKeyID_3 = { "MessageTextKeyID_3", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerCutsceneParam, MessageTextKeyID_3), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_MessageTextKeyID_3_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_MessageTextKeyID_3_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_ArenaType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_ArenaType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_ReverbType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_ReverbType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_RingObject_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_RingObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_SeqNo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_BGMType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_BGMType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_CastA_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_CastA_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_CastA_ID_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_CastA_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_CastA_Attire_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_CastA_Attire,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_CastB_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_CastB_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_CastB_ID_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_CastB_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_CastB_Attire_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_CastB_Attire,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_CastC_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_CastC_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_CastC_ID_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_CastC_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_CastC_Attire_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_CastC_Attire,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_CastD_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_CastD_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_CastD_ID_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_CastD_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_BELT_A_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_BELT_A,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_BELT_B_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_BELT_B,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_CastD_Attire_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_CastD_Attire,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_MessageTextKeyID_0,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_MessageTextKeyID_1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_MessageTextKeyID_2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::NewProp_MessageTextKeyID_3,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"CareerCutsceneParam",
		sizeof(FCareerCutsceneParam),
		alignof(FCareerCutsceneParam),
		Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCareerCutsceneParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCareerCutsceneParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CareerCutsceneParam"), sizeof(FCareerCutsceneParam), Get_Z_Construct_UScriptStruct_FCareerCutsceneParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCareerCutsceneParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCareerCutsceneParam_Hash() { return 2889385970U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
