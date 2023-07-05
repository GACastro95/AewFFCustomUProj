// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELEntranceCutsceneParticleData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELEntranceCutsceneParticleData() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELEntranceCutsceneParticleData();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELEntranceCutsceneEmitterData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_USoundAtomCue_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FELEntranceCutsceneParticleData>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FELEntranceCutsceneParticleData cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FELEntranceCutsceneParticleData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FELEntranceCutsceneParticleData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELEntranceCutsceneParticleData, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ELEntranceCutsceneParticleData"), sizeof(FELEntranceCutsceneParticleData), Get_Z_Construct_UScriptStruct_FELEntranceCutsceneParticleData_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FELEntranceCutsceneParticleData>()
{
	return FELEntranceCutsceneParticleData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELEntranceCutsceneParticleData(FELEntranceCutsceneParticleData::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("ELEntranceCutsceneParticleData"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFELEntranceCutsceneParticleData
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFELEntranceCutsceneParticleData()
	{
		UScriptStruct::DeferCppStructOps<FELEntranceCutsceneParticleData>(FName(TEXT("ELEntranceCutsceneParticleData")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFELEntranceCutsceneParticleData;
	struct Z_Construct_UScriptStruct_FELEntranceCutsceneParticleData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Particle_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_Particle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SwitchType_MetaData[];
#endif
		static void NewProp_SwitchType_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SwitchType;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Emitters_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Emitters_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Emitters;
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_DropObjects_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DropObjects_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DropObjects;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnCueEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OnCueEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OffCueEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OffCueEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnlockItemId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UnlockItemId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELEntranceCutsceneParticleData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneParticleData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELEntranceCutsceneParticleData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELEntranceCutsceneParticleData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELEntranceCutsceneParticleData_Statics::NewProp_Particle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEntranceCutsceneParticleData" },
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneParticleData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FELEntranceCutsceneParticleData_Statics::NewProp_Particle = { "Particle", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELEntranceCutsceneParticleData, Particle), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FELEntranceCutsceneParticleData_Statics::NewProp_Particle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELEntranceCutsceneParticleData_Statics::NewProp_Particle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELEntranceCutsceneParticleData_Statics::NewProp_SwitchType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEntranceCutsceneParticleData" },
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneParticleData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FELEntranceCutsceneParticleData_Statics::NewProp_SwitchType_SetBit(void* Obj)
	{
		((FELEntranceCutsceneParticleData*)Obj)->SwitchType = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FELEntranceCutsceneParticleData_Statics::NewProp_SwitchType = { "SwitchType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELEntranceCutsceneParticleData), &Z_Construct_UScriptStruct_FELEntranceCutsceneParticleData_Statics::NewProp_SwitchType_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FELEntranceCutsceneParticleData_Statics::NewProp_SwitchType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELEntranceCutsceneParticleData_Statics::NewProp_SwitchType_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELEntranceCutsceneParticleData_Statics::NewProp_Emitters_Inner = { "Emitters", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FELEntranceCutsceneEmitterData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELEntranceCutsceneParticleData_Statics::NewProp_Emitters_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEntranceCutsceneParticleData" },
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneParticleData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FELEntranceCutsceneParticleData_Statics::NewProp_Emitters = { "Emitters", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELEntranceCutsceneParticleData, Emitters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FELEntranceCutsceneParticleData_Statics::NewProp_Emitters_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELEntranceCutsceneParticleData_Statics::NewProp_Emitters_MetaData)) };
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FELEntranceCutsceneParticleData_Statics::NewProp_DropObjects_Inner = { "DropObjects", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELEntranceCutsceneParticleData_Statics::NewProp_DropObjects_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEntranceCutsceneParticleData" },
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneParticleData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FELEntranceCutsceneParticleData_Statics::NewProp_DropObjects = { "DropObjects", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELEntranceCutsceneParticleData, DropObjects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FELEntranceCutsceneParticleData_Statics::NewProp_DropObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELEntranceCutsceneParticleData_Statics::NewProp_DropObjects_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELEntranceCutsceneParticleData_Statics::NewProp_OnCueEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEntranceCutsceneParticleData" },
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneParticleData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FELEntranceCutsceneParticleData_Statics::NewProp_OnCueEvent = { "OnCueEvent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELEntranceCutsceneParticleData, OnCueEvent), Z_Construct_UClass_USoundAtomCue_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FELEntranceCutsceneParticleData_Statics::NewProp_OnCueEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELEntranceCutsceneParticleData_Statics::NewProp_OnCueEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELEntranceCutsceneParticleData_Statics::NewProp_OffCueEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEntranceCutsceneParticleData" },
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneParticleData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FELEntranceCutsceneParticleData_Statics::NewProp_OffCueEvent = { "OffCueEvent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELEntranceCutsceneParticleData, OffCueEvent), Z_Construct_UClass_USoundAtomCue_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FELEntranceCutsceneParticleData_Statics::NewProp_OffCueEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELEntranceCutsceneParticleData_Statics::NewProp_OffCueEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELEntranceCutsceneParticleData_Statics::NewProp_UnlockItemId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEntranceCutsceneParticleData" },
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneParticleData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELEntranceCutsceneParticleData_Statics::NewProp_UnlockItemId = { "UnlockItemId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELEntranceCutsceneParticleData, UnlockItemId), METADATA_PARAMS(Z_Construct_UScriptStruct_FELEntranceCutsceneParticleData_Statics::NewProp_UnlockItemId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELEntranceCutsceneParticleData_Statics::NewProp_UnlockItemId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELEntranceCutsceneParticleData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELEntranceCutsceneParticleData_Statics::NewProp_Particle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELEntranceCutsceneParticleData_Statics::NewProp_SwitchType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELEntranceCutsceneParticleData_Statics::NewProp_Emitters_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELEntranceCutsceneParticleData_Statics::NewProp_Emitters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELEntranceCutsceneParticleData_Statics::NewProp_DropObjects_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELEntranceCutsceneParticleData_Statics::NewProp_DropObjects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELEntranceCutsceneParticleData_Statics::NewProp_OnCueEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELEntranceCutsceneParticleData_Statics::NewProp_OffCueEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELEntranceCutsceneParticleData_Statics::NewProp_UnlockItemId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELEntranceCutsceneParticleData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"ELEntranceCutsceneParticleData",
		sizeof(FELEntranceCutsceneParticleData),
		alignof(FELEntranceCutsceneParticleData),
		Z_Construct_UScriptStruct_FELEntranceCutsceneParticleData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELEntranceCutsceneParticleData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELEntranceCutsceneParticleData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELEntranceCutsceneParticleData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELEntranceCutsceneParticleData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELEntranceCutsceneParticleData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELEntranceCutsceneParticleData"), sizeof(FELEntranceCutsceneParticleData), Get_Z_Construct_UScriptStruct_FELEntranceCutsceneParticleData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELEntranceCutsceneParticleData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELEntranceCutsceneParticleData_Hash() { return 366942211U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
