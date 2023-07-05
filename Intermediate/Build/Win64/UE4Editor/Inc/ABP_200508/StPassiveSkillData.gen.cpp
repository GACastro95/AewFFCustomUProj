// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/StPassiveSkillData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStPassiveSkillData() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FStPassiveSkillData();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FStPassiveSkillData_Situation();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FStPassiveSkillData_MatchType();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EPassiveSkillTriggerType();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FStPassiveSkillData_Effect();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EELMatchScoreObjective();
// End Cross Module References

static_assert(std::is_polymorphic<FStPassiveSkillData>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FStPassiveSkillData cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FStPassiveSkillData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FStPassiveSkillData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStPassiveSkillData, Z_Construct_UPackage__Script_ABP_200508(), TEXT("StPassiveSkillData"), sizeof(FStPassiveSkillData), Get_Z_Construct_UScriptStruct_FStPassiveSkillData_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FStPassiveSkillData>()
{
	return FStPassiveSkillData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStPassiveSkillData(FStPassiveSkillData::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("StPassiveSkillData"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFStPassiveSkillData
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFStPassiveSkillData()
	{
		UScriptStruct::DeferCppStructOps<FStPassiveSkillData>(FName(TEXT("StPassiveSkillData")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFStPassiveSkillData;
	struct Z_Construct_UScriptStruct_FStPassiveSkillData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MenuText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_MenuText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_stSituation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_stSituation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_stMatchType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_stMatchType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_eTriggerType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_eTriggerType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_eTriggerType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_stEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_stEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fActiveSec_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fActiveSec;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ActiveCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Particle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Particle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParticleSocketName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParticleSocketName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOneShot_MetaData[];
#endif
		static void NewProp_bOneShot_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOneShot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fCameraZoomSec_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fCameraZoomSec;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraZoomSocketName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_CameraZoomSocketName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseLoopAnimation_MetaData[];
#endif
		static void NewProp_UseLoopAnimation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseLoopAnimation;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AddObjective_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AddObjective_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AddObjective;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStPassiveSkillData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StPassiveSkillData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStPassiveSkillData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStPassiveSkillData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStPassiveSkillData_Statics::NewProp_MenuText_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StPassiveSkillData" },
		{ "ModuleRelativePath", "Public/StPassiveSkillData.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FStPassiveSkillData_Statics::NewProp_MenuText = { "MenuText", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStPassiveSkillData, MenuText), METADATA_PARAMS(Z_Construct_UScriptStruct_FStPassiveSkillData_Statics::NewProp_MenuText_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStPassiveSkillData_Statics::NewProp_MenuText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStPassiveSkillData_Statics::NewProp_stSituation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StPassiveSkillData" },
		{ "ModuleRelativePath", "Public/StPassiveSkillData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStPassiveSkillData_Statics::NewProp_stSituation = { "stSituation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStPassiveSkillData, stSituation), Z_Construct_UScriptStruct_FStPassiveSkillData_Situation, METADATA_PARAMS(Z_Construct_UScriptStruct_FStPassiveSkillData_Statics::NewProp_stSituation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStPassiveSkillData_Statics::NewProp_stSituation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStPassiveSkillData_Statics::NewProp_stMatchType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StPassiveSkillData" },
		{ "ModuleRelativePath", "Public/StPassiveSkillData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStPassiveSkillData_Statics::NewProp_stMatchType = { "stMatchType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStPassiveSkillData, stMatchType), Z_Construct_UScriptStruct_FStPassiveSkillData_MatchType, METADATA_PARAMS(Z_Construct_UScriptStruct_FStPassiveSkillData_Statics::NewProp_stMatchType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStPassiveSkillData_Statics::NewProp_stMatchType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStPassiveSkillData_Statics::NewProp_eTriggerType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStPassiveSkillData_Statics::NewProp_eTriggerType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StPassiveSkillData" },
		{ "ModuleRelativePath", "Public/StPassiveSkillData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FStPassiveSkillData_Statics::NewProp_eTriggerType = { "eTriggerType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStPassiveSkillData, eTriggerType), Z_Construct_UEnum_ELITE_Game_EPassiveSkillTriggerType, METADATA_PARAMS(Z_Construct_UScriptStruct_FStPassiveSkillData_Statics::NewProp_eTriggerType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStPassiveSkillData_Statics::NewProp_eTriggerType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStPassiveSkillData_Statics::NewProp_stEffect_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StPassiveSkillData" },
		{ "ModuleRelativePath", "Public/StPassiveSkillData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStPassiveSkillData_Statics::NewProp_stEffect = { "stEffect", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStPassiveSkillData, stEffect), Z_Construct_UScriptStruct_FStPassiveSkillData_Effect, METADATA_PARAMS(Z_Construct_UScriptStruct_FStPassiveSkillData_Statics::NewProp_stEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStPassiveSkillData_Statics::NewProp_stEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStPassiveSkillData_Statics::NewProp_fActiveSec_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StPassiveSkillData" },
		{ "ModuleRelativePath", "Public/StPassiveSkillData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStPassiveSkillData_Statics::NewProp_fActiveSec = { "fActiveSec", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStPassiveSkillData, fActiveSec), METADATA_PARAMS(Z_Construct_UScriptStruct_FStPassiveSkillData_Statics::NewProp_fActiveSec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStPassiveSkillData_Statics::NewProp_fActiveSec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStPassiveSkillData_Statics::NewProp_ActiveCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StPassiveSkillData" },
		{ "ModuleRelativePath", "Public/StPassiveSkillData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStPassiveSkillData_Statics::NewProp_ActiveCount = { "ActiveCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStPassiveSkillData, ActiveCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FStPassiveSkillData_Statics::NewProp_ActiveCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStPassiveSkillData_Statics::NewProp_ActiveCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStPassiveSkillData_Statics::NewProp_Particle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StPassiveSkillData" },
		{ "ModuleRelativePath", "Public/StPassiveSkillData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStPassiveSkillData_Statics::NewProp_Particle = { "Particle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStPassiveSkillData, Particle), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FStPassiveSkillData_Statics::NewProp_Particle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStPassiveSkillData_Statics::NewProp_Particle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStPassiveSkillData_Statics::NewProp_ParticleSocketName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StPassiveSkillData" },
		{ "ModuleRelativePath", "Public/StPassiveSkillData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FStPassiveSkillData_Statics::NewProp_ParticleSocketName = { "ParticleSocketName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStPassiveSkillData, ParticleSocketName), METADATA_PARAMS(Z_Construct_UScriptStruct_FStPassiveSkillData_Statics::NewProp_ParticleSocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStPassiveSkillData_Statics::NewProp_ParticleSocketName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStPassiveSkillData_Statics::NewProp_bOneShot_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StPassiveSkillData" },
		{ "ModuleRelativePath", "Public/StPassiveSkillData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStPassiveSkillData_Statics::NewProp_bOneShot_SetBit(void* Obj)
	{
		((FStPassiveSkillData*)Obj)->bOneShot = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStPassiveSkillData_Statics::NewProp_bOneShot = { "bOneShot", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FStPassiveSkillData), &Z_Construct_UScriptStruct_FStPassiveSkillData_Statics::NewProp_bOneShot_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStPassiveSkillData_Statics::NewProp_bOneShot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStPassiveSkillData_Statics::NewProp_bOneShot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStPassiveSkillData_Statics::NewProp_fCameraZoomSec_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StPassiveSkillData" },
		{ "ModuleRelativePath", "Public/StPassiveSkillData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStPassiveSkillData_Statics::NewProp_fCameraZoomSec = { "fCameraZoomSec", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStPassiveSkillData, fCameraZoomSec), METADATA_PARAMS(Z_Construct_UScriptStruct_FStPassiveSkillData_Statics::NewProp_fCameraZoomSec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStPassiveSkillData_Statics::NewProp_fCameraZoomSec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStPassiveSkillData_Statics::NewProp_CameraZoomSocketName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StPassiveSkillData" },
		{ "ModuleRelativePath", "Public/StPassiveSkillData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FStPassiveSkillData_Statics::NewProp_CameraZoomSocketName = { "CameraZoomSocketName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStPassiveSkillData, CameraZoomSocketName), METADATA_PARAMS(Z_Construct_UScriptStruct_FStPassiveSkillData_Statics::NewProp_CameraZoomSocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStPassiveSkillData_Statics::NewProp_CameraZoomSocketName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStPassiveSkillData_Statics::NewProp_UseLoopAnimation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StPassiveSkillData" },
		{ "ModuleRelativePath", "Public/StPassiveSkillData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStPassiveSkillData_Statics::NewProp_UseLoopAnimation_SetBit(void* Obj)
	{
		((FStPassiveSkillData*)Obj)->UseLoopAnimation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStPassiveSkillData_Statics::NewProp_UseLoopAnimation = { "UseLoopAnimation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FStPassiveSkillData), &Z_Construct_UScriptStruct_FStPassiveSkillData_Statics::NewProp_UseLoopAnimation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStPassiveSkillData_Statics::NewProp_UseLoopAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStPassiveSkillData_Statics::NewProp_UseLoopAnimation_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStPassiveSkillData_Statics::NewProp_AddObjective_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStPassiveSkillData_Statics::NewProp_AddObjective_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StPassiveSkillData" },
		{ "ModuleRelativePath", "Public/StPassiveSkillData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FStPassiveSkillData_Statics::NewProp_AddObjective = { "AddObjective", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStPassiveSkillData, AddObjective), Z_Construct_UEnum_ELITE_Game_EELMatchScoreObjective, METADATA_PARAMS(Z_Construct_UScriptStruct_FStPassiveSkillData_Statics::NewProp_AddObjective_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStPassiveSkillData_Statics::NewProp_AddObjective_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStPassiveSkillData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStPassiveSkillData_Statics::NewProp_MenuText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStPassiveSkillData_Statics::NewProp_stSituation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStPassiveSkillData_Statics::NewProp_stMatchType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStPassiveSkillData_Statics::NewProp_eTriggerType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStPassiveSkillData_Statics::NewProp_eTriggerType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStPassiveSkillData_Statics::NewProp_stEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStPassiveSkillData_Statics::NewProp_fActiveSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStPassiveSkillData_Statics::NewProp_ActiveCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStPassiveSkillData_Statics::NewProp_Particle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStPassiveSkillData_Statics::NewProp_ParticleSocketName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStPassiveSkillData_Statics::NewProp_bOneShot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStPassiveSkillData_Statics::NewProp_fCameraZoomSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStPassiveSkillData_Statics::NewProp_CameraZoomSocketName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStPassiveSkillData_Statics::NewProp_UseLoopAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStPassiveSkillData_Statics::NewProp_AddObjective_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStPassiveSkillData_Statics::NewProp_AddObjective,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStPassiveSkillData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"StPassiveSkillData",
		sizeof(FStPassiveSkillData),
		alignof(FStPassiveSkillData),
		Z_Construct_UScriptStruct_FStPassiveSkillData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStPassiveSkillData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStPassiveSkillData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStPassiveSkillData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStPassiveSkillData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStPassiveSkillData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StPassiveSkillData"), sizeof(FStPassiveSkillData), Get_Z_Construct_UScriptStruct_FStPassiveSkillData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStPassiveSkillData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStPassiveSkillData_Hash() { return 1493042457U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
